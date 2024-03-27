#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dataset3.h"
// #include "dataset10.h"
// #include "dataset16.h"
// #include "dataset50.h"

typedef int32_t data_t;

#define NEGATE( x ) ( ~( x ) + 1 )
#define MUL( a, b ) int32_mult( a, b )

void *my_memset( void *dest, unsigned char c, size_t len )
{
    unsigned char *d = (unsigned char *)dest;

    while ( len-- )
    {
        *d++ = c;
    }

    return dest;
}

/**
 * @brief Adds two signed 32-bit integer N x M matrixes of the same size together.
 * @param total_len The total length of the matrixes (i.e. `N * M`).
 * @param mat_A A pointer to the first element in Matrix A.
 * @param mat_B A pointer to the first element in Matrix B.
 * @param mat_R A pointer to the first element in the resulting matrix.
 */
void matrix_add( data_t total_len, const data_t mat_A[], const data_t mat_B[], data_t mat_R[] )
{
    if ( total_len )
    {
        data_t i = 0;

        do
        {
            mat_R[i] = mat_A[i] + mat_B[i];
        } while ( ++i < total_len );
    }
}

/**
 * @brief Multiply two signed 32-bit integers.
 */
data_t int32_mult( data_t x, data_t y )
{
    // Base case
    if ( x == 0 || y == 0 )
    {
        return 0;
    }

    data_t multiplicand, multiplier, result = 0, negative_flag = 0;

    // If an input is negative, make it positive
    // and toggle the negative flag.
    if ( x < 0 )
    {
        x = NEGATE( x );
        negative_flag ^= 1;
    }

    // If both inputs are negative, the negative
    // flag will be `0` and the answer will be positive.
    if ( y < 0 )
    {
        y = NEGATE( y );
        negative_flag ^= 1;
    }

    // Make sure the multiplier is smaller than the
    // multiplicand if possible.
    if ( x > y )
    {
        multiplicand = x;
        multiplier = y;
    }
    else
    {
        multiplicand = y;
        multiplier = x;
    }

    do
    {
        if ( multiplier & 0x1 )
        {
            result += multiplicand;
        }

        multiplicand <<= 0x1;
        multiplier >>= 0x1;
    } while ( multiplier != 0 );

    if ( negative_flag )
    {
        result = NEGATE( result );
    }

    return ( result );
}

void matrix_mult( data_t N, const data_t mat_A[], const data_t mat_B[], data_t mat_R[] )
{
    data_t i, j, k;  // Loop counters
    data_t jN, kN;   // j * N, k * N
    data_t sum;      // Multiplication accumulator

    if ( N )
    {
        i = 0;

        do  // for ( i = 0; i < N; ++i )
        {
            j = 0;

            do  // for ( j = 0; j < N; ++j )
            {
                k = 0;
                sum = 0;

                jN = MUL( j, N );

                do  // for ( k = 0; k < N; ++k )
                {
                    kN = MUL( k, N );
                    sum += MUL( mat_A[jN + k], mat_B[kN + i] );

                    k++;
                } while ( k < N );

                mat_R[jN + i] = sum;

                j++;
            } while ( j < N );

            i++;
        } while ( i < N );
    }
}

// Prints a given array in the following format:
// -------
// [ a b ]
// [ c d ]
// [ e f ]
// -------
void print_matrix( int dim_size, int arr_size, int matrix[] )
{
    int i, j;

    int line_len = MUL( dim_size, 4 ) + 2;
    char line[line_len + 1];

    memset( line, '-', line_len );
    line[line_len - 1] = '\0';

    printf( " %s\n", line );

    for ( i = 0; i < arr_size; i += dim_size )
    {
        printf( "[ " );

        for ( j = 0; j < dim_size; ++j )
        {
            printf( "%.3d ", matrix[i + j] );
        }

        printf( "]\n" );
    }

    printf( " %s\n", line );
}

int main( void )
{
    static data_t results_data[ARRAY_SIZE];
    my_memset( results_data, 0, ARRAY_SIZE );

    printf( "Array 1:\n" );
    print_matrix( DIM_SIZE, ARRAY_SIZE, input1_data );
    printf( "\n" );

    printf( "Array 2:\n" );
    print_matrix( DIM_SIZE, ARRAY_SIZE, input2_data );
    printf( "\n" );

    printf( "Addition Result:\n" );
    matrix_add( ARRAY_SIZE, input1_data, input2_data, results_data );
    print_matrix( DIM_SIZE, ARRAY_SIZE, results_data );
    printf( "\n" );

    printf( "Multiplication Result:\n" );
    matrix_mult( DIM_SIZE, input1_data, input2_data, results_data );
    print_matrix( DIM_SIZE, ARRAY_SIZE, results_data );
    printf( "\n" );

    return 0;
}