# Enlistamiento de combinaciones 📎
Este proyecto tiene como objetivo generar una lista de las **combinaciones** de un conjunto definido por la variable de entrada n, tal que $A=(1, 2, ..., n)$. Además, los subconjuntos combinados están ordenados de forma **lexicográfica**.

### Autor: Jesús Axel Sanchez Montoy

## Requisitos del Sistema 🖥

- **Compilador C++:** Microsoft Visual Studio 2022, Code::Blocks o cualquier compilador compatible con C++ (de preferencia usar Microsoft Visual Studio 2022).
- **Procesador de archivos CSV:** Microsoft Excel, LibreOffice Calc u otra herramienta compatible.
- **Entorno de desarrollo recomendado:** Visual Studio 2022.
 
## Instrucciones de compilación y ejecución 📜
1. Clona este repositorio o descarga el código fuente.
2. Abra el archivo `"Enlistar combinaciones Vis.sln"` que esta adentro de `"Combinaciones_proyecto"`.
3. Compila el programa.
4. Ejecuta el ejecutable generado.

El archivo `combinaciones.csv` se generará en el mismo directorio donde se ejecutó el programa.

## Funcionamiento ⚙️
### Explicación del algoritmo
La cantidad de combinaciones/subconjuntos está definida por $`C (n,r)`$ donde `n` es un entero positivo `!= 0` y `r` es un entero delimitado en el rango `0 <= r <= n`.
Si `r` es `0`, entonces no existen combinaciones posibles, sin embargo, cuando `r` es diferente de `0`, entonces se genera en un archivo csv con el nombre de `"combinaciones.csv"` en donde se enlistan las combinaciones posibles ordenadas en orden lexicográfico.

El algoritmo utiliza un arreglo `s[]` que representa la combinación actual, comenzando con los valores `{1, 2, ..., r}`. Luego, en cada iteración:
1. Se imprime o guarda la combinación actual.

2. Se localiza el índice m desde el final tal que `s[m]` aún puede incrementarse.

3. Se incrementa `s[m]` y se ajustan los valores posteriores para continuar con la siguiente combinación válida.

4. Este proceso se repite hasta que ya no hay más combinaciones posibles.

Este método asegura que las combinaciones se generen en orden ascendente sin repeticiones.

### Orden Lexicográfico 📝
El orden lexicográfico es el mismo orden que usamos en los diccionarios. En el contexto de combinaciones, significa que `{1, 2, 3}` aparece antes que `{1, 2, 4}` y así sucesivamente.
Por ejemplo, `{1,2,3} < {1,2,4} < {1,2,5} < {2,3,4} < {2,3,5} < ... < {3,4,5}`. 

Este algoritmo asegura ese orden porque:

- Las combinaciones se generan partiendo de la más pequeña ({1, 2, ..., r}).

- Cada nueva combinación es mayor (lexicográficamente) que la anterior porque se incrementa el último valor posible sin romper el formato de combinación creciente.

- Esto evita la necesidad de ordenar al final, ya que la generación ya las produce en ese orden.

## Formato de salida 📨
### En él .csv...
Supongamos que `n = 5` y `r = 2`, dado estas condiciones,  $A=(1,2,3,4,5)$, el programa generaría el siguiente listado dentro de `combinaciones.csv`.

`1, 2`

`1, 3`

`1, 4`

`1, 5`

`2, 3`

`2, 4`

`2, 5`

`3, 4`

`3, 5`

`4, 5`

En donde la cantidad de combinaciones es $C(5,2)$ = `10`

### En la consola...
Se mostrará:

- El número teórico de combinaciones calculado con $C(n, r)$.

- El número de combinaciones realmente generadas (un sumador que cuenta cuantas combinaciones se imprimieron).

En general, ambos coinciden, excepto cuando `r = 0`, ya que $C(n, 0) = 1$, pero en la práctica, no se genera ninguna combinación en el archivo, por lo tanto el contador práctico es `0`.

## Conclusiones 🔍
Este programa es una herramienta útil para visualizar el funcionamiento de las combinaciones en conjuntos y sus respectivos subconjuntos. Además, permite comprender de manera intuitiva cómo se comportan los subconjuntos cuando están ordenados en forma **lexicográfica**. Todos los subconjuntos generados se almacenan en el archivo `combinaciones.csv` para su posterior análisis o estudio.
