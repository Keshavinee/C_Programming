/* This program converts temperature from fahrenheit to celsius scale. */
/* Fahrenheit temperatures are from 0 to 300 with the step value 20. */

#include <stdio.h>

int main()
{
    int fahr,celsius;
    int lower,upper,step;

    lower=0;
    upper=300;
    step=20;

    fahr=lower;
    while (fahr<=upper)
    {
        celsius=5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr+step;
    }
    
}