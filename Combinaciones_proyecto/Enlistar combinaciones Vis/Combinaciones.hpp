#ifndef COMBINACIONES_HPP_INCLUDED
#define COMBINACIONES_HPP_INCLUDED

/** \brief Calcula el factorial de un dado número entero.
 *
 * \param imput Número de el cual se desea calcular el factorial.
 * \return El factorial del número dado.
 *
 */
long double CalcFact(int imput);


/** \brief Calcula el número de combinaciones posibles de n elementos tomados de n en r
 *
 * \param n Número total de elementos en el conjunto base.
 * \param r Número de elementos por subconjunto (combinación).
 * \return El número de combinaciones posibles.
 *
 */
long double CalcComb(int n, int r);

#endif // COMBINACIONES_HPP_INCLUDED