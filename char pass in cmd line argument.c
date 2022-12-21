#include<stdio.h>
#include<conio.h>

void modify(char*, char*);

void main()
{
   char str1[] = "hello";
   char str2[] = "world";
   modify(str1, str2);
}

void modify(char* str1, char* str2)
{
    int i, l=0;
    for(i=0; str1[i]!='\0'; i++)
    {
        l=l+1;
    }
    str2[0] = 'z';
    printf("length of string 1 is :%d\n", l);
    printf("both the strings are : %s %s", str1, str2);
}
