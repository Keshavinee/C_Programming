/* This program converts temperature from celsius to fahrenheit scale. */

#include <stdio.h>

int main()
{
    float celsius;

    for (celsius=0;celsius<=300;celsius=celsius+20)
        printf("%3.0f\t%6.1f\n",celsius,9.0/5.0*celsius+32);

}

