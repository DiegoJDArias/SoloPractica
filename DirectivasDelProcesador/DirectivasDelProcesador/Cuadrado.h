#pragma once

#ifndef CUADRADO_H
#define CUADRADO_H

namespace die
{
	constexpr double e{2.7};
	constexpr double pi{ 3.14 };
}

int obtenerLadosCuad();

extern int g;
constexpr int direccion{5839};  //Las variables constexpr simpre deben ser incluidads en el header. 

//las varialbes inline, se puede compartir entre varios archivos, sin duplicar.
inline constexpr int dni{24070398};

#endif // !CUADRADO_H