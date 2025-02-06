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
        for(j=2;j<i;j++){
            if(i%j ==0){
            p++;
            break;
            }
        }
        if(p==0){
            printf("Prime");
        }
        else {
            printf("Not Prime");
        }
    }

}