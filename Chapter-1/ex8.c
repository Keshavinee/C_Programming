/* Count characters in a given input */

# include <stdio.h>

int main()
{
    double count=0;
    char x=getchar();            /* let x be EOF */

    for (count;getchar()!=x;++count)
        ;
    printf("No.of characters: %.0f\n",count);

}