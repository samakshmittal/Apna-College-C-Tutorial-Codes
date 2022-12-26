#include <stdio.h>
#include <math.h>
float square(int n);
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%f", square(n));
    return 0;
}
float square(int n){
    return pow(n,2);
}