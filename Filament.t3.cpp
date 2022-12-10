#include<stdio.h>
#include<string.h>
main(){
	char password;
	char r[50]= "YASHVI";
	char c[50];
	int a;
	
	printf("Email:- yashvivachhani2711@gmail.com\ntype passoword= ");
	scanf("%s",&c);
	
	a=strcmp(r,c);
	
	if(a==0){
		printf("YES CORRECT PASSWORD");
		
	}
	else{
		printf("NO WRONG PASSWORD");
	}	
}
