#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("file.txt", "r");
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("Number = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Number = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Number = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Number = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Number = %d\n", ch);
    return 0;
}