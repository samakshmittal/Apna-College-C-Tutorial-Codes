#include <stdio.h>
void printaddress(int n);
int main(){
    int n=4;
    printf("%p\n", &n);
    printaddress(n);
    return 0;
}
void printaddress(int n){
    printf("%p\n", &n);
}