# Multi Array Almost Map Fold shenanigans
## Problem description
Una característica interesante de la notación de asterisco para declarar matrices (int ** ) es que no es necesario que dichas matrices sean cuadradas. 🙂 

Cuando usamos declaración de matrices constantes con corchetes (i.e int[][] ) esta garantizado que tendremos siempre una matriz cuadrada. No es el caso con int** que puede resultar en una estructura llamada “ jagged arrays “ .

## Input description
La función $\lambda \operatorname{multiArrayTransform}(\cdots)$ recibe de argumento un arreglo de apuntadores a enteros $\delta \operatorname{domain}$ y la transforma tal que:

$$localCount = \delta \operatorname{domain}_{i0}$$
$$\delta \operatorname{domain}_{i0} = \delta \operatorname{domain}_{i1} + \delta \operatorname{domain}_{i2} + \cdots + \delta \operatorname{domain}_{ij}$$

hasta que se cumpla que: 
$$ localCount = -1 $$

es decir: 

El elemento inicial de cada sub arreglo $\delta \operatorname{domain}_{i0}$ indica el numero de elementos validos ( $localcount$ ) de ese sub-arreglo en particular. Cada uno de esos elementos se tendrá que sumar y el resultado de la suma remplazará $\delta \operatorname{domain}_{i0}$.

Dicha transformación tendrá que ser aplicada a cada sub arreglo de $\delta \operatorname{domain}$ hasta que se encuentre un $\delta \operatorname{domain}_{i0}$ cuyo valor sea -1. Esto denota que llegamos al final de $\delta \operatorname{domain}$ y la funcion termino correctamente. 

por ejemplo:


$$ \begin{Bmatrix} 1 & 1\\ 0 &  &  \\ 4 & -1 & 12 & 0 & 141 \\ 3 & 0 & 0 & 0 \\ 1 & -512 \\ -1 \end{Bmatrix}\mapsto \begin{Bmatrix}1 & 1\\0 \\152 & -1 & 12 & 0 & 141\\0  & 0 & 0 & 0\\-512 & - 512\\-1\end{Bmatrix} $$

Nota: solamente nos interesa guardar el resultado de la suma en $\delta \operatorname{domain}_{i0}$ es irrelevante lo que contenga el resto del arreglo.

Nota 2: El arreglo puede NO tener elementos, en cuyo caso el elemento $\delta \operatorname{domain}[0][0]$ sera $-1$ directamente y no se requiere ninguna suma 🙂.

$\lambda \operatorname{multiArrayTransform}(\delta \operatorname{domain}) \mapsto \nabla \verb|void|$

$\delta \operatorname{domain} \nabla \verb|int**| \; \vert \; \delta \operatorname{domain_{i0}} \ge -1, \delta \operatorname{domain_{ij}} \in \mathbb{Z}\; \vert$

## Output description
La función $\lambda \operatorname{multiArrayTransform}()$ no regresa ningún valor.

## Sample Input
(revisar input description)

## Sample Output
(revisar input description)

## Hints

hints and restrictions

> Recuerden que no se puede usar corchetes para acceder a ningun arreglo.

> No se permite el uso de librerias adicionales (no #include)