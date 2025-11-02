#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    double dis,r1,r2;
    printf("Enter the value of coefficents of the quadratic equations:: ");
    scanf("%d %d %d", &a, &b, &c);

    
    dis = b*b - 4*a*c;
    r1 = (-b- sqrt(dis)) / (2.0*a);
    r2 = (-b+ sqrt(dis)) / (2.0*a);

    if (dis > 0)
    printf("Roots are Real and Distinct %.00f, %.00f", r1,r2);

    else if (dis == 0)
    printf("Roots are Real and Same %.00f", r1);

    else
    printf("Roots don't exist");

    return 0;

}