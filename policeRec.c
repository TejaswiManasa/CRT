#include<stdio.h>
int main(){
    int i,n,a[100000],c=0,p=0,f=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);    
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            p=a[i]+p;
            
        }
        else{
            if(a[i]==-1){
                if(p>0){
                    p=p-1;
                }
                else{
                    c=c+1;
                }
            }
        }
    }    
    printf("%d",c);
    return 0;
}
