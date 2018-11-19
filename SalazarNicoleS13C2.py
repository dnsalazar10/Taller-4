import numpy as np
from matplotlib import pyplot as plt
import numpy as np

#Funcipon de Gauss
def gaussian(x, mu, sig):
    return np.exp(-np.power(x - mu, 2.) / (2 * np.power(sig, 2.)))

x=np.linspace(-15,15,500)
#Primera Gausiana
y=gaussian(x,-1,1)

#Segunda Gausiana
y1=gaussian(x,-5,1)

#Suma de las Gausianas
f=y+y1
plt.plot(x,f)

#Lista vacía en la que se guardan todos los pasos
paso_a = np.empty((0)) 
paso_b = np.empty((0))
posicion = np.empty((0))

paso_a= np.append(paso_a, np.random.normal())
paso_b= np.append(paso_b, np.random.normal())

print (paso_a)
print (paso_b)
print (posicion)


