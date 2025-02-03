#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (b==0){
        printf("No\n");
    }
    else if(a%b==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}