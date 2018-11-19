#include <stdio.h>
#include <stdlib.h>


int main (){

 FILE *pf;      /* save data in laplace.dat */
   pf = fopen("lap.txt","w");

if(pf!= NULL){
printf("El archivo se crea correctamente\n");
exit(1);
}
puts("\nQue no se puedo crear el archivo");
   
}
