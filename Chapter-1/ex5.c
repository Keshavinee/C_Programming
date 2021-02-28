/* Temperature conversion table in reverse order */

#include <stdio.h>

/* Symbolic Constants */

#define max 300
#define min 0
#define decrement 20

int main()
{
    float celsius;

    for (celsius=max;celsius>=min;celsius=celsius-decrement)
        printf("%3.0f\t%6.1f\n",celsius,9.0/5.0*celsius+32);

}

