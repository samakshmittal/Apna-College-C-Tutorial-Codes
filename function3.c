#include <stdio.h>
#include <math.h>
float fahrenheit(float n);
int main(){
    float n;
    printf("Enter temperature in celcius");
    scanf("%f", &n);
    printf("%f", fahrenheit(n));
    return 0;
}
float fahrenheit(float n){
    return 1.8*n+32;
}