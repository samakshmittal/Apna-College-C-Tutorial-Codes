#include <stdio.h>
#include <math.h>
int main(){
    int ra;
    printf("Enter radius");
    scanf("%d", &ra);
    printf("%f", (M_PI)*ra*ra);
    return 0;
}