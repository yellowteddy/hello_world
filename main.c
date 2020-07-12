#include <stdio.h>
//this function adds two integers
int add(int a, int b)
{
    return a+b;
}

//this function calculates the absolute value of a integer
int abs(int a )
{
    if a>0
    return a;
    else
    {
        return -a;
    }
    
}

//this is the main function
int main()
{
    int a = 10; 
    int b = 20;
    printf("this is a simple calculator program\n");
    printf("addition of %d + %d = %d\n",a,b,add(a,b));

    return 0;
}

