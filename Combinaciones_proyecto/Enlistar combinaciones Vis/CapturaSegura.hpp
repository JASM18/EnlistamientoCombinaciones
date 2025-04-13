#ifndef CAPTURASEGURA_HPP_INCLUDED
#define CAPTURASEGURA_HPP_INCLUDED

/** \brief Captura de forma segura un n�mero
 *
 * \tparam T tipo de n�mero a capturar
 *
 * \param num N�mero a capturar
 * \param solicitud Mnesaje de solicitud del n�mero a capturar
 * \return Nada
 *
 */
template <typename T>
void CapturarNumero(T& num, const char solicitud[]);

#include "CapturaSegura.tpp"

#endif // CAPTURASEGURA_HPP_INCLUDED
