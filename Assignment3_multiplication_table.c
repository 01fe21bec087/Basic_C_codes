//Write a program in C that uses a for loop to print out the multiplication table of a given number entered by the user.

#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }
}
