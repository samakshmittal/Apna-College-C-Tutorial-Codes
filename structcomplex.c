#include <stdio.h>
typedef struct complex{
    int x;
    int y;
}com;
int main(){
    com v1={5,6};
    com *ptr=&v1;
    printf("Complex number is %d+%di", ptr->x, ptr->y);
    return 0;
}