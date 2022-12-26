#include <stdio.h>
#include <math.h>
float squareroot(int n);
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%f",squareroot(n));
    return 0;
}
float squareroot(int n){
    return pow(n,0.5);
}