#include <stdio.h>
int main() {
    int num;
    printf("");
    scanf("%d",&num);
    if (num &1){
        printf("Set\n",num);
    }
    else{
        printf("Not Set\n",num);
    }
    return 0;
}