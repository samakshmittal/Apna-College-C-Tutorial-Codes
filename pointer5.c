#include <stdio.h>
int main(){
    for(char i='a'; i<='z'; i++){
        char *p=&i;
        printf("%c\n", *p);
    }
    return 0;
}