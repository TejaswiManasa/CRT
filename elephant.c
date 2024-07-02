#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    if (n%5==0){
        printf("%d",n/5);
    }
    else{
    t=n/5;
    printf("%d",t+1);
    }
    return 0;
}
