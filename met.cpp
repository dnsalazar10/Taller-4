//Runge Kutta method to solve ODEs
#include<stdio.h> 
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
  
float x,y,x0,y0,h;

// Una ecuacion diferencial simple "dy/dx = (x - y)/2" 
float dydx(float x, float y) 
{ 
    return((x - y)/2); 
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
        k1 = h*(dydx(x0, y)); 
        k2 = h*(dydx(x0 + 0.5*h, y + 0.5*k1)); 
        k3 = h*(dydx(x0 + 0.5*h, y + 0.5*k2)); 
        k4 = h*(dydx(x0 + h, y + k3)); 
  
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
    printf("\nEl valor de Y en X es: %f", 
            rungeK(x0, y, x, h)); 
    return 0; 
} 
