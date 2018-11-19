
/* cos example */
#include <stdio.h>      /* printf */
#include <math.h>       /* cos */

#define PI 3.14159265

//Runge Kutta method to solve ODEs de 4to orden
#include<stdio.h> 
#include <iostream>
#include <math.h>
#include <fstream>
#define PI 3.14159265

using namespace std;

float g=10; //Aceleracion gravitacional
float c=0.2; //Coeficiente de friccion 
float m=0.2; //Masa del proyectil

//Condiciones iniciales
float v0=300; //Velocidad inicial
float theta0=45; //Angulo inicial
float theta1=10; //Angulo 1
float theta2=20; //Angulo 2
float theta3=30; //Angulo 3
float theta4=40; //Angulo 4
float theta5=50; //Angulo 5
float theta6=60; //Angulo 6
float theta7=70; //Angulo 7

double vx0 = v0*cos(theta0*PI/180.0); //Velocidad en x0
double vx1 = v0*cos(theta1*PI/180.0); //Velocidad en x1
double vx2 = v0*cos(theta2*PI/180.0); //Velocidad en x2
double vx3 = v0*cos(theta3*PI/180.0); //Velocidad en x3
double vx4 = v0*cos(theta4*PI/180.0); //Velocidad en x4
double vx5 = v0*cos(theta5*PI/180.0); //Velocidad en x5
double vx6 = v0*cos(theta6*PI/180.0); //Velocidad en x6
double vx7 = v0*cos(theta7*PI/180.0); //Velocidad en x7

double xfin(float x0, float t, float t0, float vx0)
{ 
	float a=-c*((t-t0)/m);
    return(x0+(m/c)*vx0*(1-exp(a)));
} 


int main ()
{

  //printf ("La velocidad inicial es %f y el x final es %f.\n", vx0, xfin(0,3,1,vx0) );
//printf ("La velocidad inicial es %f y el x final es %f.\n", vx1, xfin(0,3,1,vx1) );
  //printf ("La velocidad inicial es %f y el x final es %f.\n", vx2, xfin(0,3,1,vx2) );
//printf ("La velocidad inicial es %f y el x final es %f.\n", vx3, xfin(0,3,1,vx3) );
  //printf ("La velocidad inicial es %f y el x final es %f.\n", vx4, xfin(0,3,1,vx4) );
//printf ("La velocidad inicial es %f y el x final es %f.\n", vx5, xfin(0,3,1,vx5) );
//  printf ("La velocidad inicial es %f y el x final es %f.\n", vx6, xfin(0,3,1,vx6) );
//printf ("La velocidad inicial es %f y el x final es %f.\n", vx7, xfin(0,3,1,vx7) );
printf ("La distancia recorrida por el proyectil es mayor cuando el angulo equivale a %f°.\n",theta2); 

  return 0;
}
