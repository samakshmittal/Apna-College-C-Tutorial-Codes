#include <stdio.h>
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("After swapping a=%d, b=%d\n", a, b);
}
void _swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("After swapping a=%d, b=%d\n", *a, *b);
}
int main(){
    int a=5, b=6;
    printf("Before swapping a=%d, b=%d\n", a, b);
    swap(a,b);
    printf("Call by value a=%d, b=%d\n", a, b);
    _swap(&a, &b);
    printf("Call by reference a=%d, b=%d\n", a, b);
    return 0;
}