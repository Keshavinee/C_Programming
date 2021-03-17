/* This program copies the input and displays it. */

#include <stdio.h>

int main()
{
    int c;
    while (c=getchar()!= EOF)
        putchar(c);
}