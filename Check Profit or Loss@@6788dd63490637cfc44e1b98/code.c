#include <stdio.h>
int main() {
    float cp,sp;
    scanf("%f%f",&cp,&sp);
    if (sp>cp){
        printf("Profit\n");
    }
    else if (cp>sp){
        printf("Loss\n");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}