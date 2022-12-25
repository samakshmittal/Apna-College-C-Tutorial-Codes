#include <stdio.h>
#include <math.h>
int main(){
    int r;
    printf("Enter radius");
    scanf("%d", &r);
    printf("%f", (M_PI)*r*r);
    return 0;
}