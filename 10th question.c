//Write a program to calculate roots of a quadratic equation...
#include <stdio.h>
#include <math.h>


int main()
{ 
    int a,b,c;
     float discriminant,root1,root2;
     printf("enter the the value of a,b and c");
     scanf("%d%d%d",&a,&b,&c);
     discriminant=b*b-4*a*c;
     if (discriminant>0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else {
        printf("complex solution");
    }
    return 0;
    }
