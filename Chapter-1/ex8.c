/* Count characters in a given input */

# include <stdio.h>

int main()
{
    long count=0;
    char x=getchar();            /* let x be EOF */

    while (getchar()!= x)
        ++count;
    printf("No.of characters: %ld\n",count);

}