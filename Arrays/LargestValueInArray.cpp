

#include<stdio.h>
main(){
	
	int a[4];
	int max =a[0];
	
	for ( int i=0 ; i<=4 ; i++){
		
		scanf("%d",&a[i]);
	}
		
	for ( int i=0 ; i<5 ; i++ ){
		
		if ( a[i]> max ){
			
			max=a[i];
		}
		
		
	}
	printf("so the largest value is=%d",max);
	
}


