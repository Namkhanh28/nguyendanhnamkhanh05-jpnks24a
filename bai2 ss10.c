#include<stdio.h> 
int main(){
	int array[]={10,9,13,4,65,3};
	int n = sizeof(array)/sizeof(array[0]);
	int i,j; 
	 for( i = 0;i < n-1;i++){
	 	for ( j = 0;j<n-i;j++ ) {
	 		if (array[j]> array[j+1]){
	 			int temp = array[j] ;
	 			array[j] = array[j+1] ;
	 			array[j+1] = temp; 
			 } 
		 }
	 } 
	 printf("mang da sap xep : \n"); 
	 for (int i = 0;i<n ;i++){
	 	printf("%d\t",array[i]); 
	 }
	 printf("\n");
	 return 0; 
} 
