#include<stdio.h>
int main(){
    int p,x,y,z,a,q,b,c;
    scanf("%d %d %d %d",&x,&y,&z,&a);
    p=(x/y)*a;
    if(x<y){
    	if(a<(x*z)){
    		printf("%d",a);
		}
		else{
			printf("%d",x*z);
		}
	}
    else{
    if(x%y==0){
//        printf("%d",p);
		if(p<x*z){
			printf("%d",p);
		}
		else{
			printf("%d",x*z);
		}
    }
    else{
        q=x%y;
//        p=(x/y)*a;
        b=z*q;
//        c=a*q;
        if((p+b)>(p+a)){
        	printf("%d",p+a);
		}
		else{
			printf("%d",p+b);
		}
    }   }
    return 0;
}
