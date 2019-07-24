import numpy as np #PUNTO DE INTERSECCION ENTRE LOS TRES PLANOS
import matplotlib.pyplot as plt # UTILIZAMOS COMO PLT
from mpl_toolkits.mplot3d import Axes3D # UTILIZAMOS PARA IMPORTAR LOS EJES EN 3D
from matplotlib import cm #MAPAS DE COLORES
#Matriz donde vamos a poner donde estan las variables, A lado de los coeficientes
A= np.array([[2,4,6],[3,8,5],[-1,1,2]])
#Vector solucion o mis coeficientes 
b=np.array([22,27,2])
#VECTOR SOLUCION donde comenos los argumentos(A,b)
sol=np.linalg.solve(A,b)
#Imresion de resolucion
print(sol)

#ECUACIONES PARA IMPRIMIR EN 3D
#DESPEJAMOS TODAS LAS ECUACIONES PARA Z
#NOS AHORRAMOS UN CICLO FOR VAMOS A CREAR UN ESPACIO DE NUMERO DE 1 A 10 Y AUMENTAR DE 1 A 10
x,y=np.linspace(0,10,10),np.linspace(0,10,10)

#CREAMOS UNA CUADRICULA UTILIZANDO LOS VALORES
X,Y=np.meshgrid(x,y)

#DESPEJE DE TODAS LAS ECUACIONES
#DESPEJADAS PARA Z QUE ES LA ULTIMA VARIABLE

"""
Z1=(22-2*X-4*Y)/6 #DESPEJE DE LA PRIMERA ECUACION
Z2=(27-3*X-8*Y)/5 #DESPEJE DE LA SEGUNDA ECUACION
Z3=(2 +  X-  Y)/2 #DESPEJE DE LA TERCERA ECUACION
"""
#ECUACION DONDE HAY UN CRUZE Y DOS EMPALMES HAYA UNA ECUACION EQUIVALENTE POR ESO NOS MUESTRA ASI

"""
Z1=  3-5*X-2*Y #DESPEJE DE LA PRIMERA ECUACION
Z2=(-12+4*X-4*Y)/8 #DESPEJE DE LA SEGUNDA ECUACION
Z3=(-3 +  X-  Y)/2 #DESPEJE DE LA TERCERA ECUACION
"""
#MOSTRAR CLARO EJEMPLO QUE NO TIENE NINGUNA RELACION
Z1=  1+X+Y #DESPEJE DE LA PRIMERA ECUACION
Z2=-50+X+Y #DESPEJE DE LA SEGUNDA ECUACION
Z3= 50+X+Y #DESPEJE DE LA TERCERA ECUACION
#CUANDO LAS ECUACIONES NO TIENEN NINGUNA RELACION Y LOS PLANOS SON PARALELOS ENTRE SI

#PARTE DE LAS GRAFICAS

fig=plt.figure()
ax=fig.add_subplot(111,projection = '3d')
ax.plot_surface(X,Y,Z1,alpha=0.5,cmap=cm.Accent,rstride = 100, cstride = 100)
ax.plot_surface(X,Y,Z2,alpha=0.5,cmap=cm.Paired,rstride = 100, cstride = 100)
ax.plot_surface(X,Y,Z3,alpha=0.5,cmap=cm.Pastel1,rstride = 100, cstride = 100)

ax.plot((sol[0],),(sol[1],),(sol[2],),lw=2,c='k',marker='o',markersize=7,markeredgecolor='g',markerfacecolor='white')


#NOMBRES A LOS EJES
ax.set_xlabel('X');ax.set_ylabel('Y');ax.set_zlabel('Z')
plt.show()