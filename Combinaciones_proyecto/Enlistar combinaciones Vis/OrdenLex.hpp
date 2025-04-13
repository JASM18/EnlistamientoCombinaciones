#ifndef ORDENLEX_H_INCLUDED
#define ORDENLEX_H_INCLUDED

/** \brief Esta funci�n genera todas las combinaciones posibles de n elementos tomados de r en r, y las escribe en un archivo CSV llamado "combinaciones.csv" en orden lexicogr�fico.
 *
 * \param n N�mero total de elementos en el conjunto base.
 * \param r N�mero de elementos por subconjunto (combinaci�n).
 * \return Nada
 *
 */
void OrdenLexicografico(int n, int r, long double &contGeneral);

#endif // ORDENLEX_H_INCLUDED
