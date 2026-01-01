#include<stdio.h>
int main()
{
    char i;
    for(i = 'A'; i<= 'Z'; i++)
    if (i == 'A' || i == 'E'|| i == 'I' || i == 'O' || i == 'U' )
    {
        printf("%c\n%c is vowel\n",i,i);
    } else {
        printf("%c\n%c is consonant\n",i,i);
    }
    return 0;
}