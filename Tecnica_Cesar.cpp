#include "pch.h"
#include "Tecnica_Cesar.h"
#include <iostream>
#include <string>
#include <map>
#include <cctype>

Tecnica_Cesar::Tecnica_Cesar() {}

std::string Tecnica_Cesar::encriptacion_Cesar(const std::string& mensaje, int clave) {

}

std::string Tecnica_Cesar::desencriptacion_Cesar(const std::string& mensaje, int clave) {

}

int Tecnica_Cesar::mappeoLetraValor(const char& letra) {
	std::map <char, int> abecedario;
	abecedario['A'] = 0;
	abecedario['B'] = 1;
	abecedario['C'] = 2;
	abecedario['D'] = 3;
	abecedario['E'] = 4;
	abecedario['F'] = 5;
	abecedario['G'] = 6;
	abecedario['H'] = 7;
	abecedario['I'] = 8;
	abecedario['J'] = 9;
	abecedario['K'] = 10;
	abecedario['L'] = 11;
	abecedario['M'] = 12;
	abecedario['N'] = 13;
	abecedario['Ñ'] = 14;
	abecedario['O'] = 15;
	abecedario['P'] = 16;
	abecedario['Q'] = 17;
	abecedario['R'] = 18;
	abecedario['S'] = 19;
	abecedario['T'] = 20;
	abecedario['U'] = 21;
	abecedario['V'] = 22;
	abecedario['W'] = 23;
	abecedario['X'] = 24;
	abecedario['Y'] = 25;
	abecedario['Z'] = 26;

	if (abecedario.count(letra)) {
		return abecedario[letra];
	}

	try {
		char letraMayus = toupper(letra);
	}catch(const )
	
	






}

std::string Tecnica_Cesar::mappeoValorLetra(int valor) {

}
