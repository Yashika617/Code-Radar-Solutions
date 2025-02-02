#include <stdio.h>
int main() {
    float sp,cp;
    scanf("%f%f",&sp,&cp);
    if (sp>cp){
        printf("Profit\n",sp-cp);
    }
    if (cp>sp){
        printf("Loss\n",cp-sp);
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}