# Enlistamiento de combinaciones
Este proyecto tiene como objetivo generar una lista de las **combinaciones** de un conjunto definido por la variable de entrada n, tal que $A=(1, 2, ..., n)$. Además, los subconjuntos combinados están ordenados de forma **lexicográfica**.

## Requisitos del Sistema

Para compilar y ejecutar el proyecto, se recomienda:

- **Compilador:** Se recomienda Microsoft Visual Studio 2022 ó Codeblocks

- **Almacenamiento csv:** Se recomienda un sotware que procese archivos csv (Ejemplo: Excel)

- **Entorno de Desarrollo:** Code::Blocks y Visual Studio 2022
 
## ¿Cómo funciona?
La cantidad de subconjuntos está definida por $`C (n,r)`$ donde `n` es un entero positivo `!= 0` y `r` es un entero delimitado en el rango `0 <= r <= n`.
Si `r` es `0`, entonces no existen combinaciones posibles, sin embargo, cuando `r` es diferente de `0`, entonces se genera en un archivo csv con el nombre de `"combinaciones.csv"` en donde se enlistan los subconjuntos posibles ordenados en orden lexicografico.

## Ejemplo de uso
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

## Conclusiones
Este programa es una herramienta útil para visualizar el funcionamiento de las combinaciones en conjuntos y sus respectivos subconjuntos. Además, permite comprender de manera intuitiva cómo se comportan los subconjuntos cuando están ordenados en forma **lexicográfica**. Todos los subconjuntos generados se almacenan en el archivo `combinaciones.csv` para su posterior análisis o estudio.
