#define NULL ( (void *)0 )

int max( int *arr, int N )
{
    int max = 0;

    if ( arr != NULL && N > 0 )
    {
        int temp;

        max = *arr;

        while ( N-- )
        {
            arr++;

            temp = *arr;

            if ( temp > max )
            {
                max = temp;
            }
        }
    }

    return ( max );
}