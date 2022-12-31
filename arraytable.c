#include <stdio.h>
void table(int n, int m){
    int arr[n][m];
    int number;
    for(int i=0; i<n; i++){
        printf("Enter number whose table is to be print");
        scanf("%d", &number);
        for(int j=0; j<m; j++){
            arr[i][j]=number*(j+1);
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n, m;
    printf("Enter number of rows and columns resp in array");
    scanf("%d%d", &n, &m);
    table(n, m);
    return 0;
}
