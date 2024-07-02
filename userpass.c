// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char u[100],p[100],i=0,j;
    char x[100]="qwertyu";
    char y[100]="yuiop";
    // printf("%s",x);
    
    for(j=0;;j++){
    // if(i<3){
    scanf("%[^\n]%*c",&u);
    scanf("%[^\n]%*c",&p);
        if(!strcmp(u,x)&&i<2){
            if(!strcmp(p,y)){
            	printf("Success");
        	}
        	else{
            	printf("Correct username\nwrong password\n");
            	i++;
            	continue;
        	}
        // }
    	}
        else if(!strcmp(u,x)&&i>=3){
            printf("account failed");
            break;
        }
        else{
        	printf("Wrong username");
        	break;
		}
    }
    

    return 0;
}
