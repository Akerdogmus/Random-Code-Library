Question 1--

#include <stdio.h>

void triangle (float side1, float side2, float side3);

int main(void){

	float side1,side2,side3;

		printf("Enter your triangle's side numbers\n");
		scanf("%f %f %f",&side1,&side2,&side3);

		printf("Side 1=%f Side 2=%f Side 3=%f\n",side1,side2,side3);

		triangle(side1,side2,side3);

		system("pause");
}

void triangle (float side1, float side2, float side3){

	float a,b,c;
	a=side1;
	b=side2;
	c=side3;

	if ((a + b > c && a + c > b && b + c > a) && (a > 0 && b > 0 && c > 0)) {

   if (a == b && b == c) {
      printf("Equilateral Triangle. \n");
    }
    else if (a == b || b == c || a == c) {
      printf("Isosceles Triangle. \n");

    }
    else {
      printf("Scalene Triangle. \n");

    }
  }
  else {
    printf("Triangle formation not possible\n");
  }

}

Question 2—
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int playerA();
int playerB();

int main(){

	int pointA;
	int pointB;

	srand(time(NULL));

	pointA=playerA();
	pointB=playerB();

	printf("Player A's Point=%d\nPlayer B's Point=%d\n",pointA,pointB);

	if(pointA>pointB){
		printf("Player A wins\n");
	}
	else if(pointA<pointB)
	{
		printf("Player B wins\n");
	}
	else
	{
		printf("Equality\n");
	}

	system("pause");
}

int playerA(){

	int point1=0;
	int point2=0;
	int point3=0;
	int point4=0;
	int roll;
	int face;
	int point;

	for(roll=0;roll<10;roll++){
		face=1+rand()%12;

		switch(face){

		case 1:
			++point1;
			break;
			case 2:
			++point1;
			break;
			case 3:
			++point1;
			++point4;
			break;
			case 4:
			++point1;
			break;
			case 5:
			++point1;
			break;
			case 6:
			++point2;
			++point4;
			break;
			case 7:
			++point2;
			break;
			case 8:
			++point2;
			break;
			case 9:
			++point2;
			++point4;
			break;
			case 10:
			++point3;
			break;
			case 11:
			++point3;
			break;
			case 12:
			++point3;
			++point4;
			break;
		}
	}
		
printf( "Player A's Points\n" );
printf( "-1 Point (<5)%9d\n", point1 );
printf( "+1 Point (6-9)%8d\n", point2 );
printf( "+2 Point (>9)%9d\n", point3 );
printf( "Extra +1 Point (*3)%3d\n\n\n", point4 );
		
point=(point1*(-1))+point2+(point3*2)+point4;
printf("Total Point=%d\n\n",point);

return point;
}

int playerB(){

	int point1=0;
	int point2=0;
	int point3=0;
	int point4=0;
	int roll;
	int face;
	int point;

	for(roll=0;roll<10;roll++){
		face=1+rand()%12;

		switch(face){

		case 1:
			++point1;
			break;
			case 2:
			++point1;
			break;
			case 3:
			++point1;
			++point4;
			break;
			case 4:
			++point1;
			break;
			case 5:
			++point1;
			break;
			case 6:
			++point2;
			++point4;
			break;
			case 7:
			++point2;
			break;
			case 8:
			++point2;
			break;
			case 9:
			++point2;
			++point4;
			break;
			case 10:
			++point3;
			break;
			case 11:
			++point3;
			break;
			case 12:
			++point3;
			++point4;
			break;
		}
	}
		
printf( "Player B's Points\n" );
printf( "-1 Point (<5)%9d\n", point1 );
printf( "+1 Point (6-9)%8d\n", point2 );
printf( "+2 Point (>9)%9d\n", point3 );
printf( "Extra +1 Point (*3)%3d\n\n\n", point4 );
		
point=(point1*(-1))+point2+(point3*2)+point4;
printf("Total Point=%d\n\n\n",point);

return point;
}


