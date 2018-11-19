import numpy as np
import matplotlib.pyplot as plt

dat=np.genfromtxt('laplace.txt', delimiter=',')
plt.imshow(dat)
plt.show()

