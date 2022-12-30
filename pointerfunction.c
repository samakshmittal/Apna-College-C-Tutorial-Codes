#include <stdio.h>
void square(int x);
void _square(int *x);
int main(){
    int n=4;
    square(n);
    printf("n=%d\n", n);
    _square(&n);
    printf("n=%d\n", n);
    return 0;
}
void square(int x){
    x=x*x;
    printf("square=%d\n", x);
}
void _square(int *x){
    *x=(*x)*(*x);
    printf("square=%d\n", *x);
}