#include "pch.h"
#include "Tecnica_Vigenere.h"
#include "Mapa.h"
#include <iostream>
#include <vector>
#include <numeric>
#include <string>

Tecnica_Vigenere::Tecnica_Vigenere() {}

std::string Tecnica_Vigenere::encriptacion_Vigenere(const std::string& mensaje, const std::string& clave) {
	
	Mapa mapa;
	std::string mensajeEncriptado = "";
	int valorLetraM = 0;
	int valorletraClv = 0;
	int cNumero;
	char cLetra;

	std::string nuevaClave = completarClave(mensaje, clave);

	int i = 0;
	int j = 0;

	while (i < mensaje.size() && j < nuevaClave.size()) {

		if (mensaje[i] != ' ') {

			valorLetraM = mapa.mappeoLetraValor(mensaje[i]);
			valorletraClv = mapa.mappeoLetraValor(nuevaClave[j]);

			cNumero = (valorLetraM + valorletraClv) % 26;
			cLetra = mapa.mappeoValorLetra(cNumero);

			mensajeEncriptado += cLetra;

			i++;
			j++;
		}

		if (mensaje[i] == ' ') {
			i++;
		}
	}

	return mensajeEncriptado;
}

std::string Tecnica_Vigenere::desencriptacion_Vigenere(const std::string& mensaje, const std::string& clave) {
	
	Mapa mapa;
	std::string mensajeDesencriptado = "";
	int valorLetraC = 0;
	int valorletraClv = 0;
	int mNumero;
	char mLetra;

	std::string nuevaClave = completarClave(mensaje, clave);

	int i = 0;
	int j = 0;

	while (i < mensaje.size() && j < nuevaClave.size()) {

		if (mensaje[i] != ' ') {

			valorLetraC = mapa.mappeoLetraValor(mensaje[i]);
			valorletraClv = mapa.mappeoLetraValor(nuevaClave[j]);

			mNumero = (valorLetraC - valorletraClv) % 26;
			
			while (mNumero < 0) {
				mNumero = (mNumero % 26 + 26) % 26;
			}

			mLetra = mapa.mappeoValorLetra(mNumero);

			mensajeDesencriptado += mLetra;

			i++;
			j++;
		}

		if (mensaje[i] == ' ') {
			i++;
		}
	}

	return mensajeDesencriptado;
}

std::string Tecnica_Vigenere::completarClave(const std::string& mensaje, const std::string& clave) {
	
	std::string complementoClave = "";
	std::string nuevaClave = "";
	std::vector<char> letrasM, letrasClv;

	int i = 0;
	int j = 0;

	while (i < mensaje.size()) {

		if (mensaje[i] != ' ') {
			letrasM.push_back(mensaje[i]);
		}

		i++;
	}

	while (j < clave.size()) {

		if (clave[j] != ' ') {
			letrasClv.push_back(clave[j]);
		}

		j++;
	}

	nuevaClave = std::accumulate(letrasClv.begin(),
								 letrasClv.end(),
								 std::string(""));

	if (letrasM.size() > letrasClv.size()) {

		for (int i = 0; i < letrasM.size(); i++) {
			complementoClave += letrasClv[i % letrasClv.size()];
		}

		nuevaClave += complementoClave;
	}

	if (letrasM.size() < letrasClv.size()) {

		for (int i = 0; i < letrasM.size(); i++) {

			complementoClave += letrasClv[i];
		}

		nuevaClave = complementoClave;
	}

	if (letrasM.size() == letrasClv.size()) {
		nuevaClave = std::accumulate(letrasClv.begin(),
									 letrasClv.end(),
									 std::string(""));
	}

	return nuevaClave;
}