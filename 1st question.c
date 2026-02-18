//write a program to demonstrate arithmetic operators

#include<stdio.h>
int main() {
    int a,b,add,sub,multi,div,mod;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    
    add=a+b;
    printf("addition is =%d\n",add);
    
    sub=a-b;
    printf("substraction is=%d\n",sub);
    
    multi=a*b;
    printf("multiplication is=%d\n",multi);
    
    div=a/b;
    printf("division is =%d\n",div);
    
    mod=a%b;
    printf("modulus is =%d\n",mod);
    
    
    return 0;
    
    
}
