#include <stdio.h> 
 
int main() { 
	int arr[10]={1,2,3,4,5,6,7,8,9,10}; 
	 
	int *p = arr; 
	 
	p++; 
	p++; 
	p++; 
	p++; 
	p++; 
	 
	 
	printf("%d",p[2]); 
	 
	return 0; 
}