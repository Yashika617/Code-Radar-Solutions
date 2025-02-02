#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a&b&c);
    if (a==b || b==c || c==a){
        printf("Isosceles\n");
    }
    else if (a==b && b==c && c==a){
        printf("Equilateral");
    }
    else {
        printf("Scalene");
    }
    return 0;
}