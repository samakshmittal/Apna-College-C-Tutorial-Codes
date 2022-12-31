#include <stdio.h>
#include <string.h>
int main(){
    char password[100];
    scanf("%s", password);
    char newpassword[100];
    strcpy(newpassword, password);
    char salt[]={"123"};
    strcat(newpassword, salt);
    printf("%s", newpassword);
    return 0;
}