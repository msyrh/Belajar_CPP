# include <stdio.h>
#include <conio.h>
#include <iostream> 
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main (){
	int A[5]={5,10,6,0,4};
	
	int c[5]={0, 1,2,3,4};
	
	vector<int>B;
	int i,k,e,d;
	
	printf("Nilai array yang akan ditampilkan\n");
	printf("Array A [5]:\n");
	
	printf("Index : ");

	for (k=0;k<=4;k++){
		
		printf("%d  ",c[k] );
		
	}
	printf("\n");
	printf("nilai :");
	d=0;
	e=(int)d;
	for (i=0;i<=4;i++){

		if (A[i]%2==0)
		{
			B.push_back(A[i]);
		}else{
			B.push_back(d);
		}
		
		printf("%d  ",A[i] );

		
	}
	printf("\n");
	printf("\n");
	printf("Array B [5]:\n");
	printf("Index : ");

	for (k=0;k<=4;k++){
		
		printf(" %d ",c[k] );
		
	}
	printf("\n");
	printf("nilai :");

	
	for (i=0;i<=4;i++){
		if (B[i]!= 0)
		{
			
			printf(" %d ",B[i] );
		}
			
		
		
		
	}printf(" _ ");printf(" _ ");
	
	getch();
}