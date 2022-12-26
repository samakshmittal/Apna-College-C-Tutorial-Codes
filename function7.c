#include <stdio.h>
#include <math.h>
void temp(int n);
int main(){
    int n;
    printf("Enter temperature");
    scanf("%d", &n);
    temp(n);
    return 0;
}
void temp(int n){
    if (n<25){
        printf("cold");
    }
    else{
        printf("hot");
    }
}