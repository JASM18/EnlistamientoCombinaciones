#ifndef ORDENLEX_H_INCLUDED
#define ORDENLEX_H_INCLUDED

/** \brief Esta función genera todas las combinaciones posibles de n elementos tomados de r en r, y las escribe en un archivo CSV llamado "combinaciones.csv" en orden lexicográfico.
 *
 * \param n Número total de elementos en el conjunto base.
 * \param r Número de elementos por subconjunto (combinación).
 * \return Nada
 *
 */
void OrdenLexicografico(int n, int r, long double &contGeneral);

#endif // ORDENLEX_H_INCLUDED
