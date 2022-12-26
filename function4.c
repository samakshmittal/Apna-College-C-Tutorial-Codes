#include <stdio.h>
#include <math.h>
float average(float science, float maths, float sanskrit);
int main(){
    float a, b, c;
    printf("Enter marks");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Percentage = %f", average(a, b, c));
    return 0;
}
float average(float science, float maths, float sanskrit){
    return (science+maths+sanskrit)/3;
}