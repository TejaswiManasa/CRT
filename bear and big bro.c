#include<stdio.h>
int main(){
    int a,b,i=0;
    scanf("%d %d",&a,&b);
    while(a<=b){
        a=a*3;
        b=b*2;
        i++;
    }
    printf("%d",i);
    return 0;
}
