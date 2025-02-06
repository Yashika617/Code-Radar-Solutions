#include <stdio.h>
int main() {
    int getLowestSetBitValue(int n){
        return (n&-n);
    }
    int main(){
        int num;
        scanf("%d",&num);
        int lowest_bit=getLowestSetBitValue(num);
        printf("%d\n",lowest_bit);
    }
    return 0;
}