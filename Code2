#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ply(int *xPtr,int a,int b, int c);


int main(void){

	int a,b,c;
	int xPtr;

    srand(time(NULL));

	
	xPtr=rand() %10;
	a=rand() %10;
	b=rand() %10;
	c=rand() %10;

	printf("x=%d,a=%d,b=%d,c=%d\n",xPtr,a,b,c);

	ply(&xPtr,a,b,c);

	printf("Sum=%d\n",xPtr);

	system("pause");

}


void ply(int *xPtr,int a,int b,int c)
{

	*xPtr=a*(*xPtr)*(*xPtr)+b*(*xPtr)+c;

	
}
