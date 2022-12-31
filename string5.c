#include <stdio.h>
#include <string.h>
int main(){
    char str[100], a;
    int x=0;
    printf("Enter string");
    scanf("%s", str);
    printf("Enter character to be found");
    scanf("%c", &a);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==a){
            x=1;
        }
    }
    if(x==1){
    printf("%c is present", a);
    }
    return 0;
}