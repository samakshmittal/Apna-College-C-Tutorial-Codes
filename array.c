#include <stdio.h>
int main(){
    int price[3];
    printf("Enter 3 prices");
    scanf("%d", &price[0]);
    scanf("%d", &price[1]);
    scanf("%d", &price[2]);
    printf("total price 1 = %d\n", price[0]+price[0]*0.18);
    printf("total price 2 = %d\n", price[1]+price[1]*0.18);
    printf("total price 3 = %d\n", price[2]+price[2]*0.18);
    return 0;
}