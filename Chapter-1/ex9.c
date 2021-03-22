#include<stdio.h>

int main()
{
    int c,line_count;
    line_count=0;

    while ((c=getchar())!=EOF)
    {
        if (c == '\n')
            ++line_count;
    }
    printf("No.of lines: %d\n",line_count);
}