#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll=1;
    s1.cgpa=9.1;
    strcpy(s1.name, "abc");
    printf("Student name : %s\n", s1.name);
    printf("Student roll : %d\n", s1.roll);
    printf("Student cgpa : %f\n", s1.cgpa);
    struct student s2;
    s2.roll=2;
    s2.cgpa=9.2;
    strcpy(s2.name, "abcd");
    printf("Student name : %s\n", s2.name);
    printf("Student roll : %d\n", s2.roll);
    printf("Student cgpa : %f\n", s2.cgpa);
    struct student s3={"abcde", 3, 9.3};
    // s3.roll=3;
    // s3.cgpa=9.3;
    // strcpy(s3.name, "abcde");
    printf("Student name : %s\n", s3.name);
    printf("Student roll : %d\n", s3.roll);
    printf("Student cgpa : %f\n", s3.cgpa);
    return 0;
}