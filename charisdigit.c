#include <stdio.h>
int main(){
    char a;
    printf("Enter a");
    scanf("%c", &a);
    if (a>='0' && a<='9')
        printf("%c is digit", a);
    else{
        printf("Not a digit");
    }
    return 0;
}