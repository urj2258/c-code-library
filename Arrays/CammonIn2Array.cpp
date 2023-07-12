/*	Find the common numbers in two arrays.
a.	Arr1 = [2,7,9,3,6]: Arr2 = [3,5,7,9,10]. Answer: 3, 7, 9*/

#include<stdio.h>

main(){
	
	int a[4];
	
	int b[4];
	
	printf("Enter 4 numbers for first array\n= "); 
	
	for ( int i=0 ; i<4 ; i++){
		
	scanf("%d",&a[i]);
		
	}
	printf("\n");
	
		printf("Enter 4 numbers for 2nd array\n= "); 
	
	for ( int i=0 ; i<4 ; i++){
		
	scanf("%d",&b[i]);
		
	}
	
	printf("So the common numbers are: ");
	for (  int i=0 ; i<4 ; i++ ){
		
		for ( int j=0 ; j<4 ; j++){
			
				if ( a[i] == b[j]){
					
					printf("%d ",a[i]);
				}
				
				
			
		}
		
	
	}
	
	
}

