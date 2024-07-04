#include<stdio.h>
int main(){
	
//	int arr[]={10,20,29};				//initializing way
//	int arr[3];		//arr[1+2]					//initializing way
//	arr[0]=10;
//	arr[1]=20;
//	arr[2]=40;
//	int arr[5]={10,20,30,40,50},i;		//initializing way
//	printf("%d",arr);		//base address
//	printf("%d",arr+1);		//2nd element address
//	printf("%d",arr[0]);	//0th element value
//    for(i=0;i<5;i++){			//can perform arithmetic op in arr[arithmetic op] results in positive integer value
//    	printf("%d ",arr[i]);
//	}

//	index starts from 0 -reason- base address + offset + size of data type(offset=index)
//	offset of 1st element is 0
	
//	int arr[30]={[24]=10},i;   //designated initialization
//	for(i=0;i<30;i++){
//		printf("%d ",arr[i]);
//	}

//	int arr[4]={30,40,800,100},k,p,i;
//	k=arr[0];
//	for(i=0;i<4;i++){
//		if(arr[i]>k){
//			
//			p=k;
//			k=arr[i];
//		}
//		else if(p<arr[i]){
//			p=arr[i];
//		}
//	}
//	printf("%d ",k);		//largest
//	printf("%d",p);			//2nd largest

	int a[100]={10,20,30,40,50,29},n,i,p;
	scanf("%d",&n);
	scanf("%d",&p);
	
	
	
	return 0;
}

