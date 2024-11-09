#pragma once
#include <string>
ref class Tecnica_Cesar
{
public:
	Tecnica_Cesar();
	std::string encriptacion_Cesar(const std::string& mensaje, int clave);
	std::string desencriptacion_Cesar(const std::string& mensaje, int clave);

private:
	int mappeoLetraValor(const char& letra);
	std::string mappeoValorLetra(int valor);
};