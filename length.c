// Length of string without using in-built // 
#include <stdio.h>
int main()
{
    char str[]="Hello";
    int l=0,i=0;
    for(i=0;str[i];l++,i++);
    printf("%d",l);
}
