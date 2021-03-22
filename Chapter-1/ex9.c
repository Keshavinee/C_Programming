/* This program counts blanks, tabs and newlines. */

#include<stdio.h>

int main()
{
    int c,blank,tab,newline;
    blank=tab=newline=0;

    while ((c=getchar())!=EOF)
    {
        if (c == ' ')
            ++blank;
        else if (c=='\t')
            ++tab;
        else if (c=='\n')
            ++newline;
    }
    printf("No.of blanks: %d\n",blank);
    printf("No.of tabs: %d\n",tab);
    printf("No.of newlines: %d\n",newline);
}