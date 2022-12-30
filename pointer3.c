#include <stdio.h>
int main(){
    int a, b;
    printf("Enter 2 numbers");
    scanf("%d%d", &a, &b);
    int *x=&a;
    int *y=&b;
    if(*x>*y){
        printf("%d is greater", *x);
    }
    else{
        printf("%d is greater", *y);
    }
    return 0;
}