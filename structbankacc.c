#include <stdio.h>
typedef struct bankaccount{
    int accno;
    char name[100];
}acc;
int main(){
    acc v1={5,"a"};
    acc *ptr=&v1;
    printf("Acc no : %d\tname : %s", ptr->accno, ptr->name);
    return 0;
}