#include <stdio.h>
typedef struct addresses{
    int house_no;
    int block_no;
    char city[100];
    char state[100];
}add;
int main(){
    int n;
    printf("Enter no of people");
    scanf("%d", &n);
    add a[n];
    for(int i=0; i<n; i++){
        printf("Enter houseno");
        scanf("%d", &a[i].house_no);
        printf("Enter blockno");
        scanf("%d", &a[i].block_no);
        printf("Enter city");
        scanf("%s", a[i].city);
        printf("Enter state");
        scanf("%s", a[i].state);
    }
    for (int i=0; i<n; i++){
    printf("House no %d : %d\t", i+1, a[i].house_no);
    printf("Block no %d : %d\t", i+1, a[i].block_no);
    printf("City %d : %s\t", i+1, a[i].city);
    printf("State %d : %s\t", i+1, a[i].state);
    }
    return 0;
}