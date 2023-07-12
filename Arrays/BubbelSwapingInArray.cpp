#include<stdio.h>
main(){
	
	int a[4] = {5,4,1,3};
	
	int n=4,j;
	
	for( int i=0;i<n;i++){
	
      for( j=0 ; j<=n-1 ; j++){
      	
      	if (a[j]>a[j+1]){
      		
      		int temp=a[j];
      		    a[j]=a[j+1];
      		    a[j+1]=temp;
		  }
		 
	  }
	}
	for(j=0; j<= 3; j++)
	{
		printf("%d",a[j]);
	}
}
