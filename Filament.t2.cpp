#include<stdio.h>
#include<string.h>
main(){
	char r[50];
	int a,b;
	int c=0;
	
	printf("ENTER A STRING= ");
	scanf("%s",&r);
		
	b = strlen(r);
	
   for(a=0;a<b;a++){
		if(r[a]!=r[b-a-1]){
			c=1;   
		}
	} 	 
	if(c){   	
    	printf("%s is not palindrome",r);   	
	}	
	else{		
		printf("%s is palindrome",r);		
	}		
}
