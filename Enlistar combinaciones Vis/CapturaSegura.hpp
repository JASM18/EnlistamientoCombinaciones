#ifndef CAPTURASEGURA_HPP_INCLUDED
#define CAPTURASEGURA_HPP_INCLUDED

/** \brief Captura de forma segura un número
 *
 * \tparam T tipo de número a capturar
 *
 * \param num Número a capturar
 * \param solicitud Mnesaje de solicitud del número a capturar
 * \return Nada
 *
 */
template <typename T>
void CapturarNumero(T& num, const char solicitud[]);

#include "CapturaSegura.tpp"

#endif // CAPTURASEGURA_HPP_INCLUDED
