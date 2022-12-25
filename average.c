#include <stdio.h>
int main(){
    int m, b, c;
    printf("Enter a, b, c");
    scanf("%d", &m);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d", (m+b+c)/3);
    return 0;
}