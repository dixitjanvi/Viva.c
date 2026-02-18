//arithmatic operation using switch case
#include <stdio.h>

int main()
{
    int a,b,add,sub,multi,div,modulo,oper;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter your choice:\n1.add(+)\n2.sub(-)\n3.multi(*)\n4.div(/)\n5.modulo(%)\n");
    scanf("%d",&oper);
    printf("enter the value of b:");
    scanf("%d",&b);
    switch(oper)
    {
    case 1:
    add=a+b;
    printf("add=%d",add);
    break;
    case 2:
    sub=a-b;
    printf("sub=%d",sub);
    break;
    case 3:
    multi=a*b;
    printf("multi=%d",multi);
    break;
    case 4:
    div=a/b;
    printf("div=%d",divi);
    break;
    case 5:
    modulo=a%b;
    printf("modulo=%d",modulo);
    break;
    
    default:printf("choose correct choice");
   break;
   }
}
