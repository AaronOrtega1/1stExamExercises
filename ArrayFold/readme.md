# Array almost-fold
## Problem description
En lenguajes de programación que soportan el paradigma de programación funcional, una función de orden superior (HOC por sus siglas en ingles) popular es fold. Esta consiste en visitar cada elemento de una coleccion y presentar un resultado final despues de agregarlos de cierta forma.

Como este problema es “almost-fold” la única transformación que tenemos que implementar es la función multiplicación. 

## Input description
La función $\lambda \operatorname{almostFold}(\cdots)$ recibe de argumentos un arreglo de enteros $\delta \operatorname{domain}$ y la cantidad de elementos en el arreglo $\delta\operatorname{count}$ y regresa un entero $\hat\delta \operatorname{aggregate}$ tal que:

$\delta \operatorname{agregate} = \delta \operatorname{domain}_0 \times \delta \operatorname{domain}_1 \times \delta \operatorname{domain}_2 \times \cdots \delta \operatorname{domain}_{count-1}$

por ejemplo:

$$ \delta \operatorname{domain} \begin{bmatrix} 5 & 4 & -1 \\ \end{bmatrix} \mapsto \delta \operatorname{agregate} = 5 \times 4 \times -1 = -20 $$

$\lambda \operatorname{almostFold}(\delta \operatorname{domain}, \delta \operatorname{count}) \mapsto \nabla \verb|void|$

$\delta \operatorname{domain} \nabla \verb|int*| \; \vert \; \delta \operatorname{domain_n} \in \mathbb{Z}\; \vert$

$\delta \operatorname{count} \nabla \verb|int| \; \vert \; \verb|1| \leq \operatorname{count} \leq \verb|999,999|$


## Output description
La función $\lambda \operatorname{almostFold}()$ regresa $\delta \operatorname{agregate}$.

## Sample Input
[2, 3]

## Sample Output
6

## Hints

hints and restrictions

> Recuerden que no se puede usar corchetes para acceder al arreglo.

> No se permite el uso de librerias adicionales (no #include)