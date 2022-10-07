Question 1:


#include <stdio.h>
#include <stdlib.h>

void maximum(int *number,int a,int *max);
void minimum(int *number,int a,int *min);
void average(int *number,int a,float *ave);
int main(){

	int numbers[100],max,*number,min;
	float ave;
	int i,a=0;

	while(1)
	{
		
	    printf("Enter the number:");
		scanf("%d",&numbers[a]);

		if(numbers[a]<0) break;
		else a=a+1;
	}
	
	printf("\nNumbers\n");

	for(i=0;i<a;i++){
		printf("%5d",numbers[i]);
	}


	maximum(&numbers[0],a,&max);
	minimum(&numbers[0],a,&min);
	average(&numbers[0],a,&ave);

	
	printf("\n");

	printf("Maximum number =%d\n",max);
	printf("Minimum number =%d\n",min);
	printf("Average value =%.2f\n",ave);	
	system("pause");
}

void maximum(int *number,int a,int *max){

	int i;
	

	*max=number[0];

	for(i=0;i<a;i++){

		if(number[i]>*max) *max=number[i];
	
	}

	
}


void minimum(int *number,int a,int *min){

	int i;

	*min=number[0];

	for(i=0;i<a;i++){

		if(number[i]<*min) *min=number[i];
	}
}

void average(int *number,int a,float *ave){

	int i;
	int sum=0;

	for(i=0;i<a;i++){

		sum=sum+number[i];
	}
	*ave=0;
	*ave=(sum/a);
}
 

Question 2:


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int median (int numbers[], int size); 

int main(){

	int i,size=19;
	int numbers[19];

	srand(time(NULL));

	for(i=0;i<size;i++){

		numbers[i]=12+rand()%11;
	}

	printf("\nNumbers\n");

	for(i=0;i<size;i++){

		printf("%3d",numbers[i]);
	}
	
	printf("\n");

	median(numbers,size);

	printf("Sorted Numbers\n");

	for(i=0;i<size;i++){

		printf("%3d",numbers[i]);
	}

	printf("\nMedian number=%d\n",numbers[9]);

	system("pause");
}

int median (int numbers[], int size)
{
void swap( int *aPtr, int *bPtr ); 
int pass,j; 

for ( pass = 0; pass < size - 1; pass++ ) {
for ( j = 0; j < size - 1; j++ ) {
if ( numbers[ j ] > numbers[ j + 1 ] ) {
swap( &numbers[ j ], &numbers[ j + 1 ] );
} 
} 
} 
} 
  
void swap( int *aPtr, int *bPtr )
{
	

int hold = *aPtr;
*aPtr = *bPtr;
*bPtr = hold;
} 

 
 
