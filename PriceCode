#include <stdio.h>

int main( void )

{

int status;

char name[ 30 ];

char surname[30];

char no[5];

float price=30.00;

FILE *pfPtr;

 

if ( (pfPtr = fopen( "passenger.txt", "r" ) ) == NULL )

{ printf( "File could not be opened\n" );

}

else {

printf( "%-10s%-13s%-16s%-19s%-22s\n", "No", "Name","Surname","Status","Discounted Price");

fscanf( pfPtr, "%s%s%s%d%f", no, name,surname, &status,&price);

while(!feof(pfPtr)){

 

       switch(status){

             case 0:

                    price=30.00;

                    break;

             case 1:

                    price=(price*3)/4;

                    break;

             case 2:

                    price=(price*85)/100;

                    break;

             case 3:

                    price=price/2;

                    break;

      

 

}

printf( "%-10s%-13s%-16s%-19d%5.2f\n", no, name,surname, status,price );

fscanf( pfPtr, "%s%s%s%d%f", no, name,surname, &status,&price );

 

}

fclose(pfPtr);

}

 

system("pause");

}

 

 

 
