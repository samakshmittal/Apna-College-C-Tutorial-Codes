#include <stdio.h>
#include <math.h>
int areasquare(int n);
float areacircle(int r);
int arearectangle(int a, int b);
int main(){
    int s, r, a, b;
    printf("Enter side of square");
    scanf("%d", &s);
    printf("Area of square = %d\n", areasquare(s));
    printf("Enter radius of circle");
    scanf("%d", &r);
    printf("Area of circle = %f\n", areacircle(r));
    printf("Enter sides of rectangle");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Area of rectangle = %d\n", arearectangle(a,b));
    return 0;
}
int areasquare(int n){
    return n*n;
}
float areacircle(int n){
    return (M_PI)*n*n;
}
int arearectangle(int a, int b){
    return a*b;
}
