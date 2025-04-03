#include<stdio.h>
long long int factorial(int n)
{
    long long int fact=1;
    for(int i=n;i>=2;i--)
    fact*=i;
    return fact;
}
long double combination(int n,int r)
{
    return (long double)factorial(n)/(factorial(n-r)*factorial(r));   
}
long double permutation(int n,int r)
{
    return (long double)factorial(n)/factorial(n-r);
}
int main()
{
    printf("1.Find Factorial\n2.Combination\n3.Permutatioin\n\nEnter your choice [1/2/3] : ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("Enter the number : ");
		 long long int n;
                 scanf("%d",&n);
		 printf("The Factrorial is : %llu\n",factorial(n));
		 break;
        case 2 : long r;
		 printf("Enter 'n' : ");
		 scanf("%d",&n);
		 printf("Enter 'r' : ");
		 scanf("%d",&r);
		 printf("%dC%d : %Lf\n",n,r,combination(n,r));
		 break;
        case 3 : printf("Enter 'n' : ");
		 scanf("%d",&n);
		 printf("Enter 'r' : ");
		 scanf("%d",&r);
		 printf("%dP%d : %Lf\n",n,r,permutation(n,r));
		 break;
	default : printf("Invalid Input !!");
    }
}
    
