/* This program converts temperature from fahrenheit to celsius scale. */
/* Fahrenheit temperatures are from 0 to 300 with the step value 20. */

#include <stdio.h>

int main()
{
    float fahr,celsius;
    int lower,upper,step;

    lower=0;    /* lower limit of the temperature table */
    upper=300;  /* upper limit */
    step=20;    /* step value */

    fahr=lower;
    printf("Fahrenheit Celsius\n"); /* Heading abve the table */
    while (fahr<=upper)
    {
        celsius=5.0/9.0*(fahr-32);
        printf("%3.0f\t%10.2f\n",fahr,celsius); /* justification */
        fahr=fahr+step;
    }
    
}