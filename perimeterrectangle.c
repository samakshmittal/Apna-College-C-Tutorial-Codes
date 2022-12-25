#include <stdio.h>
int main(){
    int a;
    float b;
    printf("Enter a and b");
    scanf("%d", &a);
    scanf("%f", &b);
    printf("%f", 2*(a+b));
    return 0;
}