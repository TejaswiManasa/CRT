#include<stdio.h>
int main(){
    int n,a[1000],b[1000],c[1000],i,s=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for (i=0;i<n;i++){
        if (a[i]+b[i]+c[i]>=2){
            s=s+1;
        }
    }
    printf("%d",s);
}
