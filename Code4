#include <stdlib.h>
#include <stdio.h>

struct student {
	char name[25];
	int grades;
};

void sort(struct student s[10]);


int main(){

	struct student s[10];
	int i;

	for(i=0;i<10;i++)
	{
		printf("Enter student name\n");
		scanf("%s",s[i].name);
		
		printf("Enter student's grade\n");
		scanf("%d",&s[i].grades);
	}

	sort(s);

	printf("\nStudents Information\n");
	for(i=0;i<10;i++)
	{
		printf("Student Name=%s\n",s[i].name);
		printf("Student's Grade=%d\n",s[i].grades);
	}



	system("pause");
}

void sort(struct student s[10]){

	void swap1( int *aPtr, int *bPtr ); 
	void swap2( char *aPtr,char *bPtr ); 

	int pass;
    int j;

for ( pass = 0; pass < 9; pass++ ) {

for ( j = 0; j < 9; j++ ) {

	if ( s[ j ].grades > s[ j + 1 ].grades ) {
   swap1( &s[ j ].grades, &s[ j + 1 ].grades );
   swap2( s[ j ].name, s[ j + 1 ].name );
}
} 
} 
} 


void swap1( int *aPtr, int *bPtr )
{
struct student hold;

hold.grades = *aPtr;
*aPtr = *bPtr;
*bPtr = hold.grades;

} 
void swap2( char *aPtr, char *bPtr )
{
struct student hold;

*hold.name = *aPtr;
*aPtr = *bPtr;
*bPtr = *hold.name;

} 
