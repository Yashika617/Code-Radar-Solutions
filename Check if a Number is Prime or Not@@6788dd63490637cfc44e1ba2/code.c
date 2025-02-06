#include <stdio.h>
int main(){
    int i,j,p;
    scanf("%d",&i);
    if(i==1){
        printf("Not Prime");
    }
    else if(i==2){
        printf("Prime");
    }else{
        for(j=2;j<1;j++){
            if(i%j ==0){
            printf("Not prime");
            p=p+1;
            break;
            }
        }
        if(p==0){
            printf("Prime");
        }
    }
}