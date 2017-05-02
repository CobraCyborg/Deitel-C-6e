// This program sorts an array's values into ascending order 
#include <stdio.h>
#define SIZE 9
/* function main begins program execution */
int main( void ) 
{   
   /* initialize a */
   int a[SIZE] = { 9, 1, 8, 2, 7, 3, 6, 4, 5 };
   //int a[ SIZE ] = { 2, 4, 6, 8, 10, 12, 89, 68, 45, 37 };
   // int a[ SIZE ] = { 2,  4,  6,  8, 10, 12, 37, 45, 68, 89 };
   int pass; /* passes counter */
   int i; /* comparisons counter */
   int hold; /* temporary location used to swap array element */
   int swap; // any swaps have been made?
   
   printf( "Data items in original order\n" );
   
   /* output original array */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   } /* end for */
   
   puts("");
   /* bubble sort */                                         
   /* loop to control number of passes */                    
   for ( pass = 1; pass < SIZE; pass++ ) {
      swap = 0;
      //printf("pass %d\n", pass);                                                             
      /* loop to control number of comparisons per pass */   
      for ( i = 0; i < SIZE - pass; i++ ) {                     
         /* compare adjacent elements and swap them if first 
         element is greater than second element */           
         if ( a[ i ] > a[ i + 1 ] ) {
			printf("a[%d] > a[%d]\n", a[ i ], a[ i + 1 ]);
            swap = 1;                        
            hold = a[ i ];                                   
            a[ i ] = a[ i + 1 ];                             
            a[ i + 1 ] = hold;                               
         } /* end if */                                      
      } /* end inner for */
      if (swap == 0) {
         pass = SIZE - 1;
      }                     
   } /* end outer for */  

   printf( "\nData items in ascending order\n" );
   /* output sorted array */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   } /* end for */
   printf( "\n" );
   return 0; /* indicates successful termination */
} /* end main */
                                   