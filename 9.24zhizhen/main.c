#include<stdio.h>
int main()
{
    int i=5;
    char *p;
    p=(char *)&i;
    printf("p=%x\n",p);
    printf("&i=%x\n",&i);
    printf("*(p+3)=%x\n",*(p+3));
    printf("*p=%x\n",*p);
    return 0;
}
