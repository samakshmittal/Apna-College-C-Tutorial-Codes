#include <stdio.h>
#include <string.h>
int main(){
    char str[100], newstr[100];
    printf("Enter string");
    scanf("%s", str);
    int n, m;
    printf("Enter starting and ending position");
    scanf("%d%d", &n, &m);
    int j=0;
    for(int i=n; i<=m; i++, j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
    return 0;
}