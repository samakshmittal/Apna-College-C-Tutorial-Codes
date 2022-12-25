#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter a, b, c");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d", (a+b+c)/3);
    return 0;
}