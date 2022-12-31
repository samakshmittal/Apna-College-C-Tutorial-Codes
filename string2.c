#include <stdio.h>
int main(){
    char fullname[100];
    fgets(fullname, 100, stdin);
    puts(fullname);
    return 0;
}