#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}

int abs(int a )
{
    if a>0
    return a;
    else
    {
        return -a;
    }
    
}

int main()
{
    int a = 10; 
    int b = 20;
    printf("this is a simple calculator program\n");
    printf("addition of %d + %d = %d\n",a,b,add(a,b));

    return 0;
}

