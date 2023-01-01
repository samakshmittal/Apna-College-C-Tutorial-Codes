#include <stdio.h>
#include <string.h>
void checkchar(char str[], char ch){
    for(int i=0; str[i]!='\0'; i++){
        if (str[i]==ch){
            printf("character is present");
            return;
        }
    }
    printf("character is not present");
}
int main(){
    char str[100];
    printf("Enter string");
    scanf("%s", str);
    char ch='a';
    checkchar(str,ch);
    return 0;
}