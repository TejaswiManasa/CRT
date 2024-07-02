#include<stdio.h>
int main(){
    int y,j,i,a,l[1000];
    scanf("%d",&y);
    for(i=0;i<1000;i++){
    	l[i]=0;
	}
    for(i=1;i<1666;i++){
        if(i%10!=3&&i%3!=0){
            
            for(j=0;j<1000;j++){
                if(l[j]==0){
                    l[j]=i;
                    break;
            //j++        
                }
            }    
        }
    }
//	scanf("%d",&y);
    while(y--){
        scanf("%d",&a);
        printf("%d\n",l[a-1]);
    }
    return 0;
}
