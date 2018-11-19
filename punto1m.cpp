//Runge Kutta method to solve ODEs de 4to orden
#include<stdio.h> 
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

float g=10; //Aceleracion gravitacional
float c=0.2; //Coeficiente de friccion 
float m=0.2; //Masa del proyectil
float v0=300; //Velocidad inicial
float theta0=45; //Angulo inicial
double vx0 = v0*cos(theta0*PI/180.0); //Velocidad en x0


// Ecuacion de movimiento de un proyectil m(d2x/dt2)+c(dx/dt)+mg=0
float dxdt(float x, float t) 
{ 
    return(-g-c((pow(vx0,2)/m)); 
} 
  
// Encuentra el valor de Y para X usando el tamaño del paso de h y valores iniciales Y0 y X0 

float rungeK(float x0, float y0, float x, float h) 
{ 
    // Cuenta e numero de iteraciones haciendo tamaño del paso o altura del paso
    int n = (int)((x - x0)/h); 
  
    float k1, k2, k3, k4, k5; 
  
    float y = y0; 
    for (int i=1; i<=n; i++) 
    { 
        // Aplicacion de las formulas Runge Kutta para encontrar los valores proximos de Y
        k1 = h*(dxdt(x0, y)); 
        k2 = h*(dxdt(x0 + 0.5*h, y + 0.5*k1)); 
        k3 = h*(dxdt(x0 + 0.5*h, y + 0.5*k2)); 
        k4 = h*(dxdt(x0 + h, y + k3)); 
  
        // Actualiza el valor proximo de Y
        y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);; 
  
        // Actualiza el valor proximo de X
        x0 = x0+h; 
    } 
  
    return y; 
} 
  
int main() 
{ 
    float x0 = 0, y = 1, x = 2, h = 0.2; 
    printf("\nEl valor de Y en X es: %f\n", 
            rungeK(x0, y, x, h)); 
    return 0; 
} 
