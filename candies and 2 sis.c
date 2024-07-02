#include<stdio.h>
int main(){
    int t,n,i,y,g,z=0,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t);
        g=t;
        y=t/2;
        if(t==1 || t==2){
            printf("0\n");
        }
        else{
        do{
            y=y+1;
            x=g-y;
            z++;
        }while(x>0);
        printf("%d\n",z-1);
        }
        z=0;
    }
    return 0;
}
