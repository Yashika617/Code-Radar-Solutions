#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if ((a+b>c) &&(b+c>a) &&(c+a>b)){
        printf("Valid\n");
    else{
        printf("Invalid\n")
    }
    }
      return 0;
}