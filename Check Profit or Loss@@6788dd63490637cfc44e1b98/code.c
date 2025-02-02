#include <stdio.h>
int main() {
    int sp,cp;
    scanf("%d%d",&sp,&cp);
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