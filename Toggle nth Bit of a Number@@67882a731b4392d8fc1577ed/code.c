#include <stdio.h>
int main() {
    int number,position;
    scanf("%d %d",&number,&position);
    position -=1;
    number ^= (1<<position);
    printf("%d\n",number);
    return 0;
}