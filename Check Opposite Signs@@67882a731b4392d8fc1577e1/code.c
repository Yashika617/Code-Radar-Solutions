#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (haveOppositeSigns(a,b)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}