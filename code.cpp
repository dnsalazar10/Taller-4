#include <stdio.h>
#include <iostream>

#define max 100                        /* number of grid points */

int main()
{
   double x, p[max][max];
   int i, j, iter, y;
   
   FILE *output;      /* save data in laplace.dat */
   output = fopen("laplace.txt","w");
   
   for(i=0; i<max; i++)                 /* clear the array  */
   {   
      for (j=0; j<max; j++) p[i][j] = 0;
   }

   for(i=0; i<max; i++) p[i][0] = 0.0;        /* p[i][0] = 100 V */   

   for(iter=0; iter<1000; iter++)               /* iterations */
   {
      for(i=1; i<(max-1); i++)                  /* x-direction */
      {
         for(j=1; j<(max-1); j++)               /* y-direction */
         {
            p[i][j] = 0.25*(p[i+1][j]+p[i-1][j]+p[i][j+1]+p[i][j-1]);
            if (j>25 && j<75){
    p[40][j]=50;
}
	    if(j>20 && j<80){
	    p[60][j]=-30;
            }
	    
	   
         }
      }

   }
   
   for (i=0; i<max ; i++)         /* write data gnuplot 3D format */
   {
      for (j=0; j<max; j++) 
      {
         fprintf(output, "%f,",p[i][j]);
      }
      fprintf(output, "\n");    /* empty line for gnuplot */
   }
   printf("data stored in laplace.dat\n");
   fclose(output);
}
