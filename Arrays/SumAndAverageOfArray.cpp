#include<stdio.h>
main(){
	
	int a[3];
	
	float ave;
	
	int i,n,sum=0;
	
	printf("Enter 3 digit : ");
	
	for(i=0;i<=2;i++){
	 
	 scanf("%d",&a[i]);
	 
	sum=sum+a[i];
	
    
		}		printf("so the sum is=%d\n",sum);	

         ave=sum/3.0;
          printf("so the ave=%f",ave);


}
