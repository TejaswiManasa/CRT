#include<stdio.h>
int harshad(n){
	int p,r=0,d;
	p=n;
	while(p>0){
	
	d=p%10;
	r+=d;
	p/=10;
}
//printf("%d",r);
if(n%r==0){
	return 1,r;
}
else{
	return -1;
}
}
int main(){
	int n,x,y;
	scanf("%d",&n);
	x,y=harshad(n);
//	printf("%d %d",x,y);
	if(x==1){
		printf("%d",y);
	}
	else{
		printf(-1);
	}
}

