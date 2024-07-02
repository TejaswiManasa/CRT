#include<stdio.h>
int main(){
	int t,B=1000,D,y=1,C;
	printf("choose activity\n1=CheckBalance\n2=DepositMoney\n3=WithdrawMoney\n4=Exit\n");
	
	while(y){
	scanf("%d",&t);
	switch (t){

		case 1:
			printf("%d\n",B);
			break;
		case 2:
			printf("enter money to be deposited");
			scanf("%d",&D);
			B+=D;
			break;
		case 3:
			printf("enter money to be debited ");
			scanf("%d",&C);
			if(B<C){
			printf("issue\n");
			break;}
			B-=D;
			break;
		case 4:
			y=0;
			break;	
		}		
			}		
	return 0;
}
