# Enlistamiento de combinaciones
Este proyecto tiene como objetivo generar una lista de las **combinaciones** de un conjunto definido por la variable de entrada n, tal que $A=(1, 2, ..., n)$. Además, los subconjuntos combinados están ordenados de forma **lexicográfica**.

### Autor: Jesús Axel Sanchez Montoy

## Requisitos del Sistema

Para compilar y ejecutar el proyecto, se recomienda:

- **Compilador:** Se recomienda Microsoft Visual Studio 2022, Codeblocks ó cualquier copilador C++

- **Almacenamiento csv:** Se recomienda un sotware que procese archivos csv (Ejemplo: Excel)

- **Entorno de Desarrollo:** Code::Blocks y Visual Studio 2022
 
## Instrucciones de copilación y ejecución
Estas son las instrucciones recomendadas para poder ejecutar el codigo
1. Tener un copilador de C++ (Por ejemplo, g++, codeblocks ó visual studio)
2. Guarda el código fuente en un archivo llamado, por ejemplo, `combinaciones.cpp`
3. Abre una terminal o consola de comandos y navega hasta el directorio donde se encuentra el archivo.
4. Compila el programa usando: `g++ combinaciones.cpp -o combinaciones`
5. Ejecuta el programa `./combinaciones` ó si estas en windows, `combinaciones.exe`

El archivo `combinaciones.csv` se generará en el mismo directorio donde se ejecutó el programa.

## Funcionamiento
### Explicación del algoritmo
La cantidad de combinaciones/subconjuntos está definida por $`C (n,r)`$ donde `n` es un entero positivo `!= 0` y `r` es un entero delimitado en el rango `0 <= r <= n`.
Si `r` es `0`, entonces no existen combinaciones posibles, sin embargo, cuando `r` es diferente de `0`, entonces se genera en un archivo csv con el nombre de `"combinaciones.csv"` en donde se enlistan las combinaciones posibles ordenados en orden lexicografico.

El algoritmo utiliza un arreglo `s[]` que representa la combinación actual, comenzando con los valores `{1, 2, ..., r}`. Luego, en cada iteración:
1. Se imprime o guarda la combinación actual.

2. Se localiza el índice m desde el final tal que `s[m]` aún puede incrementarse.

3. Se incrementa `s[m]` y se ajustan los valores posteriores para continuar con la siguiente combinación válida.

4. Este proceso se repite hasta que ya no hay más combinaciones posibles.

Este método asegura que las combinaciones se generen en orden ascendente sin repeticiones.

### Orden Lexicográfico
El orden lexicográfico es el mismo orden que usamos en los diccionarios. En el contexto de combinaciones, significa que `{1, 2, 3}` aparece antes que `{1, 2, 4}` y así sucesivamente.
Por ejemplo, `{1,2,3} < {1,2,4} < {1,2,5} < {2,3,4} < {2,3,5} < ... < {3,4,5}`. 

Este algoritmo asegura ese orden porque:

- Las combinaciones se generan partiendo de la más pequeña ({1, 2, ..., r}).

- Cada nueva combinación es mayor (lexicográficamente) que la anterior porque se incrementa el último valor posible sin romper el formato de combinación creciente.

- Esto evita la necesidad de ordenar al final, ya que la generación ya las produce en ese orden.

## Formato de salida
### En el .csv...
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
Se generarría el número de combinaciones generado teoricamente y el número de combinaciones generado practicamente, es decir, se hace un conteo de cuantas combinaciones se registran en la practica.
En general, el calculo de combinaciones siempre va a coincidir con el contador practico, EXCEPTO cuando `r = 0`, ya que en el calculo siempre nos dira que el `C(5,0) = 1` mientras que de forma practica, no se va a contar ni una combinación, es decir, `contador = 0`.

## Conclusiones
Este programa es una herramienta útil para visualizar el funcionamiento de las combinaciones en conjuntos y sus respectivos subconjuntos. Además, permite comprender de manera intuitiva cómo se comportan los subconjuntos cuando están ordenados en forma **lexicográfica**. Todos los subconjuntos generados se almacenan en el archivo `combinaciones.csv` para su posterior análisis o estudio.
