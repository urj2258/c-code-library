//8.	Write a program to find sum of all odd numbers in the array.
//a.	Arr = [2,7,9,3,6]: Answer: 19

 #include<stdio.h>
 
 main(){
 	
 		int a[5];
	
	int sum=0;
	
	printf("Enter 5 numbers= ");
	
	for ( int i=0 ; i<5 ; i++){
		
	scanf("%d",&a[i]);
		
	}
	
	for ( int i=0 ; i<5 ; i++){
	
	if( a[i]%2 != 0){
	
	sum+=a[i];	
}
		
	}
	printf("So the sum of your given values are=%d",sum);
}
