import numpy as np
import matplotlib.pyplot as plt
from pylab import *


t=np.linspace(0,55,8)

#Carga archivo dat.txt
data=np.loadtxt('dat.txt',delimiter=' ')

g=10
v0=300
theta0=45
x = t*data[0,1]
y = v0*((np.sin(45))*t)-((1/2)*g*t**2)

plt.plot(x,y,'r--')
title('Trayectoria a 45°')
plt.legend()
plt.show()
