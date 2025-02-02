#include <stdio.h>
int main() {
    float sp,cp;
    scanf("%f%f",&sp,&cp);
    if (sp>cp){
        printf("Profit\n");
    }
    if (cp>sp){
        printf("Loss\n");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}