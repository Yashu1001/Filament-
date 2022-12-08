#include<stdio.h>
#include<string.h>
main(){
	char a[100],charcter;
	int count=0,i;	
	 printf("ENTER A STRING= ");
	gets(a);
	printf("Enter a character to frequency= ");
	scanf("%c",&charcter);
	for(i=0;a[i]!='\0';i++){
		if(charcter==a[i])
			count++;		
	}
	   printf("Frequency of %c = %d\n",charcter,count);	
}
