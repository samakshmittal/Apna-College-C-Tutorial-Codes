#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter string");
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    puts(str);
    return 0;
}