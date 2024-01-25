#include <stdlib.h>
#include <string.h>

#define TWOS_COMP( x ) ( ~( x ) + 1 )

/**
 * @brief Adds two N x M matrixes of the same size together.
 * @param total_len The total length of the matrixes (i.e. `N * M`)
 * @param mat_A A pointer to the first element in Matrix A
 * @param mat_B A pointer to the first element in Matrix B
 * @param mat_R A pointer to the first element in the resulting matrix.
 */
void matrix_add( int total_len, const int mat_A[], const int mat_B[], int mat_R[] )
{
    if ( total_len )
    {
        int i = 0;

        do
        {
            mat_R[i] = mat_A[i] + mat_B[i];
        } while ( ++i < total_len );
    }
}

int int_mult( int x, int y )
{
    if ( x == 0 || y == 0 )
    {
        return 0;
    }

    int result = 0, negative_flag = 0;

    if ( x < 0 )
    {
        x = TWOS_COMP( x );
        negative_flag ^= 1;
    }

    if ( y < 0 )
    {
        y = TWOS_COMP( y );
        negative_flag ^= 1;
    }

    while ( y != 0 )
    {
        if ( y & 0x1 )
        {
            result += x;
        }

        x <<= 0x1;
        y >>= 0x1;
    }

    if ( negative_flag )
    {
        result = TWOS_COMP( result );
    }

    return ( result );
}

void matrix_mult( int N, const int mat_A[], const int mat_B[], int mat_R[] )
{
    //
    return;
}