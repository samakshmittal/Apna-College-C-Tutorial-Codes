#include <stdio.h>
#include <string.h>
int main(){
    char arr[1000];
    printf("Enter string");
    fgets(arr, 1000, stdin);
    int n=strlen(arr);
    for(int i=0; i<n; i++){
        if(arr[i]==' ' || arr[i]=='\t'){
            for(int j=i; j<n; j++){
                arr[j]=arr[j+1];
        }
        n--;
        }
    }
    printf("%s", arr);
    return 0;
}