#include <stdio.h>
int main(){
    char firstname[]={"Samaksh"};
    char lastname[]={"Mittal"};
    for(int i=0; firstname[i]!='\0'; i++){
        printf("%c", firstname[i]);
    }
    printf(" ");
    for(int i=0; lastname[i]!='\0'; i++){
        printf("%c", lastname[i]);
    }
    return 0;
}