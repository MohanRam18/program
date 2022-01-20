#include <stdio.h>
int main() 
{
   int i, j, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) 
   {
      for (j = 1; j <= rows - i; ++j) 
	  {
         printf("  ");
      }
      while (k != 2 * i - 1) 
	  {
         printf("* ");
         ++k;
      }
      printf("\n");
      
   }
   printf("\5n");
   halfpyramid();
     return 0;
   
}
int halfpyramid()
{
	int a, b, row=10;
	 printf("\n");
	
   for (a = row; a >= 1; --a) 
   {
      for (b = 1; b <= a; b++) 
	  {
         printf("* ");
      }
      printf("\n");
   }
}



