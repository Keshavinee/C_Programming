/* This program converts temperature from celsius to fahrenheit scale. */

#include <stdio.h>

int main()
{
    float celsius,fahr;
    int lower=0,upper=300,step=20;

    celsius=lower;
    while (celsius<=upper)
    {
        fahr=9.0/5.0*celsius+32;
        printf("%3.0f\t%6.1f\n",celsius,fahr);
        celsius=celsius+step;
    }

}

