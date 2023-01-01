#include <stdio.h>
typedef struct vector{
    int x;
    int y;
}vec;
void calcsum(vec v1, vec v2, vec sum);
int main(){
    vec v1={5,6};
    vec v2={7,8};
    vec sum={0};
    calcsum(v1, v2, sum);
    return 0;
}
void calcsum(vec v1, vec v2, vec sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}