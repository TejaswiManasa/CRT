#include<stdio.h>
int main(){
    int i,n,a[100000],t=0,p=0,f=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);    
    }
    for(i=0;i<n;i++){
        if(t==0){
            
        if(a[i]>0){
            p=a[i];
            
        }
        else{
            t=t+1;
        }
        
        }
        else if(t>0){
            if(a[i]>0){
           
            break;
        }
        else{
            t=t+1;
        }
        }
        // printf("%d",f);
        f=p+t;
        // printf("%d",f);
        // t=0;
        if(a[i+1]>0){
            t=0;
        }
       
    }
     
    printf("%d",f);
    // printf("%d",f);
    return 0;
}










#include<stdio.h>
int main(){
    int n=0;
    for(;n<=5;++n);
    printf("%d",n);
    return 0;
    
}





#include<stdio.h>
int main(){
    // int n=0;
    // for(;n<=5;++n);
    // printf("%d",n);

    // int n=9;
    // if(!(n==8))
    //     {n=6;}
    // printf("%d",n);
    
    // int a=9;
    // float b=9.0;
    // if(a==b)
    //     printf("y");
    // else
    //     printf("N");
    
    // char c;
    // if(c=printf("jk"))
    //     printf("S");
    // else
    //     printf("NS");
    
    // int b,c;
    // int a=b=c=10;
    // a=b=c=50;
    // printf("%d %d %d",a,b,c);
    
    
    return 0;
}
