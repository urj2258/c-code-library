/*
	Ask user to enter an array of 10 numbers and find whether the array is palindrome or not. 
Palindrome is an array which is same whether it is read from start or from end. E.g., [1,3,5,5,3,1]*/

#include<stdio.h>

main(){
	
		int a[10];
	
	
	int ispalentroum=1;
	
	printf("Enter 10 numbers= "); 
	
	for ( int i=0 ; i<10 ; i++){
		
	scanf("%d",&a[i]);
		
	}
	
	for ( int i=0 ; i<10 ; i++ ){
		
		if ( a[i] != a[9-i] ){
			
			ispalentroum=0;
			
			break;
			
		}
	}
	
	if(ispalentroum){
		
		printf("it is palentroum");//as in if condition 1 is true and every other thing is false
	}
	else{
		
		printf("it is not palentroum");
	}
}
