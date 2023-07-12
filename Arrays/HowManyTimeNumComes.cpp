//Find the total number of occurrences of each number in array

#include<stdio.h>

main(){
	
	int a[4]={1,2,3,1};
	int count[4]={0};
	
	for( int i=0 ; i<4 ; i++ ){
	
		for( int j=0 ; j<4 ; j++ ){
			
			if( a[i] == a[j]){
				
				count[i]++;
				
			}
		} 
	}
	
	
	
	printf("Number\tOccure\n  ");
	
	
	for ( int i=0 ; i<4 ; i++){
		
		printf("%d\t%d\n",a[i],count[i]);
	}
}
