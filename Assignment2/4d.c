#include<stdio.h>
int main()
{
    int a=10,b=13;
    printf("(AND) a&b : %d\n",a&b); //OUTPUT = 8
    printf("(OR) a|b : %d\n",a|b);
    printf("(NOT) !a : %d\n",~a);
    printf("(XOR) a^b : %d\n",a^b);
    printf("(LEFT SHIFT) a<<3 : %d\n",a<<3); //OUTPUT = 10*2^3 = 80
    printf("(RIGHT SHIFT) a>>3 : %d\n",a>>3); //OUTPUT = 10/2^3 = 1

    return 0;
}