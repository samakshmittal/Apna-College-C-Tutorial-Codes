#include <Stdio.h>
int count(char str[]){
    int x=0;
    for(int i=0; str[i]!='\0'; i++){
        x++;
    }
    return x-1;
}
int main(){
    char str[100];
    fgets(str, 100, stdin);
    printf("%d", count(str));
    return 0;
}