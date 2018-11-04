#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int [][3]);

void sumArray(int A[][3],int B[][3],int C[][3]);


int main(void)
{
	int A[3][3],B[3][3],C[3][3];
	int i,j;
    srand(time(NULL));

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){

			A[i][j]=(-5)+rand() %10;
			B[i][j]=(-5)+rand() %10;
		}
	}

	sumArray(A,B,C);

printf("A\n\n");
printArray(A);

printf("B\n\n");
printArray(B);

printf("C\n\n");
printArray(C);

	
	system("pause");
}

void sumArray(int A[][3],int B[][3],int C[][3])
{
	int i,j;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){

			C[i][j]=A[i][j]+B[i][j];
		}
	}
}

void printArray(int ake[][3])
{
	int i,j;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){

			printf("%3d",ake[i][j]);
		}
	printf("\n");

	}
}
