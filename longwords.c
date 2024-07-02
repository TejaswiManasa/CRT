#include<stdio.h>
int main(){
	char c[100],l,;
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%[^\n]%*c",c);
	l=strlen(c);
	printf("%c%d%c",c[0],l-2,c[l-1]);
	}
	return 0;
}
