#include <stdio.h>
#include <stdlib.h>

float maximum(float numbers[],int size);
void minimum(float *number,int size,float *min);
void bubbleSort( float *number,int size );
int main(){

	float numbers[8],max=0,*number,min;
	int i,size=8;

	for(i=0;i<8;i++){

		printf("Enter your %d. number:",i+1);
		scanf("%f",&numbers[i]);


}
	
	printf("\nNumbers\n");
	for(i=0;i<8;i++){
		printf("%.1f",numbers[i]);
		printf("\t");
	}
	
	max=maximum(numbers,size);
	minimum(&numbers[0],size,&min);
	bubbleSort(numbers,size ); 

	printf("\nSorted Numbers\n");
	for(i=0;i<8;i++){
		printf("%.1f",numbers[i]);
		printf("\t");
	}
	printf("\n");

	printf("Maximum number =%.1f\n",max);
	printf("Minimum number =%.1f\n",min);
		
	system("pause");
}

float maximum(float numbers[],int size){

	int i;
	float max;

	max=numbers[0];

	for(i=0;i<size;i++){

		if(numbers[i]>max) max=numbers[i];
	
	}

	return max;
}


void minimum(float *number,int size,float *min){

	int i;

	*min=number[0];

	for(i=0;i<size;i++){

		if(number[i]<*min) *min=number[i];
	}
}

void bubbleSort( float *number, int size ){
void swap( float *element1Ptr, float *element2Ptr ); 
int pass; 
 int j; 

for ( pass = 0; pass < size - 1; pass++ ) {

for ( j = 0; j < size - 1; j++ ) {

if ( number[ j ] > number[ j + 1 ] ) {
swap( &number[ j ], &number[ j + 1 ] );
} 
} 
} 
} 
  
void swap( float *element1Ptr, float *element2Ptr )
{
float hold = *element1Ptr;
*element1Ptr = *element2Ptr;
*element2Ptr = hold;
} 
