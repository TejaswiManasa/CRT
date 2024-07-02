#include<stdio.h>
int sum(int a,int b);
int diff(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int powe(int a,int b);
int sum(a,b){
	return a+b;
}
int diff(a,b){
	return a-b;
}
int mul(a,b){
	return a*b;
}
int div(a,b){
	return a/b;
}
int powe(a,b){
	int i,r=1;
	for(i=0;i<b;i++){
		r=r*a;
	} 
	return r;
}
int main(){
	int n,k,r,y=1;
	char o;
	scanf("%d %d",&n,&k);
	getchar();
	
//	getchar();
	while(y==1){
		scanf("%c",&o);
		getchar();
	switch(o){
		case '+':
			printf("%d\n",sum(n,k));
			break;
		case '-':
			printf("%d\n",diff(n,k));
			break;
		case '*':
			printf("%d\n",mul(n,k));
			break;
		case '/':
			printf("%d\n",div(n,k));
			break;
		case '^':
			printf("%d\n",powe(n,k));	
			break;
		default:
			y=0;
			printf("other op\n");		
					
	}
}
}


