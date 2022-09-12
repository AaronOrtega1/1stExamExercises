# Array almost-map
## Problem description
En lenguajes de programación que soportan el paradigma de programación funcional, una función de orden superior (HOC por sus siglas en ingles) popular es map o apply-all. Esta consiste en aplicar una transformación dada a cada elemento de una colección dada. Para que fuese una HOC real dicha transformación se resuelve durante tiempo de ejecución y por lo tanto es genérica. 

Como este problema es “almost-map” la única transformación que tenemos que implementar es la función cuadrática. 

## Input description
La función $\lambda \operatorname{almostMap}(\cdots)$ recibe de argumentos un arreglo de enteros $\delta \operatorname{domain}$ y la cantidad de elementos en el arreglo $\delta\operatorname{count}$

Al terminar la ejecución de la función, cada uno de los elementos del arreglo $\delta \operatorname{domain}$ tiene que estar elevador al cuadrado. tal que:

$$ \delta \operatorname{domain} \begin{bmatrix} 1 & -2 & 3 & 4 & 5 & 6 & 0 \\ \end{bmatrix} \mapsto \delta \operatorname{domain} \begin{bmatrix} 1 & 4 & 9 & 16 & 25 & 36 & 0 \\ \end{bmatrix} $$


$\lambda \operatorname{almostMap}(\delta \operatorname{domain}, \delta \operatorname{count}) \mapsto \nabla \verb|void|$

$\delta \operatorname{domain} \nabla \verb|int*| \; \vert \; \delta \operatorname{b} \in \mathbb{Z}\; \vert$

$\delta \operatorname{count} \nabla \verb|int| \; \vert \; \verb|1| \leq \operatorname{count} \leq \verb|999,999|$


## Output description
La función $\lambda \operatorname{almostMap}()$ no regresa ningún valor.

## Sample Input
[2, 3]

## Sample Output
[4, 9]

## Hints

hints and restrictions

> Recuerden que no se puede usar corchetes para acceder al arreglo.

> No se permite el uso de librerias adicionales (no #include)