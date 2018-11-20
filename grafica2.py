import numpy as np
import matplotlib.pyplot as plt
from pylab import *


t=np.linspace(0,50,8)

#Carga archivo dat.txt
data=np.loadtxt('dat.txt',delimiter=' ')

g=10
v0=300
theta0=45
x = t*data[0,1]
y = v0*((np.sin(45))*t)-((1/2)*g*t**2)
x1 = t*data[1,1]
y1 = v0*((np.sin(10))*t)-((1/2)*g*t**2)
x2 = t*data[2,1]
y2 = v0*((np.sin(20))*t)-((1/2)*g*t**2)
x3 = t*data[3,1]
y3 = v0*((np.sin(20))*t)-((1/2)*g*t**2)
x4 = t*data[4,1]
y4 = v0*((np.sin(20))*t)-((1/2)*g*t**2)
x5 = t*data[5,1]
y5 = v0*((np.sin(20))*t)-((1/2)*g*t**2)
x6 = t*data[6,1]
y6 = v0*((np.sin(20))*t)-((1/2)*g*t**2)
x7 = t*data[7,1]
y7 = v0*((np.sin(20))*t)-((1/2)*g*t**2)


#plt.plot(x,y,'r--')
#title('Trayectoria a 45°')
#xlabel('Posicion en X')
#ylabel('Posicion en Y')
#plt.legend()

plt.plot(x1,y1,"g",label="Trayect a 10°")
plt.plot(x2,y2,"b",label="Trayect a 20°")
plt.plot(x3,y3,"m",label="Trayect a 30°")
plt.plot(x4,y4,"y",label="Trayect a 40°")
plt.plot(x5,y5,"r",label="Trayect a 50°")
plt.plot(x6,y6,"c",label="Trayect a 60°")
plt.plot(x7,y6,"k",label="Trayect a 70°")
title('Trayectorias de proyectiles')
xlabel('Posicion en X')
ylabel('Posicion en Y')
plt.legend()

plt.show()
