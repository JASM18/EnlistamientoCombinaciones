#ifndef COMBINACIONES_HPP_INCLUDED
#define COMBINACIONES_HPP_INCLUDED

/** \brief Calcula el factorial de un dado n�mero entero.
 *
 * \param imput N�mero de el cual se desea calcular el factorial.
 * \return El factorial del n�mero dado.
 *
 */
long double CalcFact(int imput);


/** \brief Calcula el n�mero de combinaciones posibles de n elementos tomados de n en r
 *
 * \param n N�mero total de elementos en el conjunto base.
 * \param r N�mero de elementos por subconjunto (combinaci�n).
 * \return El n�mero de combinaciones posibles.
 *
 */
long double CalcComb(int n, int r);

#endif // COMBINACIONES_HPP_INCLUDED