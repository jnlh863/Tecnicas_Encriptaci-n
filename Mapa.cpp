#include "pch.h"
#include "Mapa.h"
#include "MensajeExcepcion.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>

Mapa::Mapa() {}

int Mapa::mappeoLetraValor(char letra) {

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

	if (!isalpha(letra)) {
		throw MensajeExcepcion().What();
	}

	char letraMayus = toupper(letra);

	if (abecedario.count(letra)) {
		return abecedario[letra];
	}
}

char Mapa::mappeoValorLetra(int valor) {

	int pasosAdicionales;

	std::map <int, char> abecedario;
	abecedario[0] = 'A';
	abecedario[1] = 'B';
	abecedario[2] = 'C';
	abecedario[3] = 'D';
	abecedario[4] = 'E';
	abecedario[5] = 'F';
	abecedario[6] = 'G';
	abecedario[7] = 'H';
	abecedario[8] = 'I';
	abecedario[9] = 'J';
	abecedario[10] = 'K';
	abecedario[11] = 'L';
	abecedario[12] = 'M';
	abecedario[13] = 'N';
	abecedario[14] = 'Ñ';
	abecedario[15] = 'O';
	abecedario[16] = 'P';
	abecedario[17] = 'Q';
	abecedario[18] = 'R';
	abecedario[19] = 'S';
	abecedario[20] = 'T';
	abecedario[21] = 'U';
	abecedario[22] = 'V';
	abecedario[23] = 'W';
	abecedario[24] = 'X';
	abecedario[25] = 'Y';
	abecedario[26] = 'Z';

	if (valor > 26) {

		pasosAdicionales = valor - 27;

		for (int i = 0; i < valor; i++) {

			if (i == valor - 1) {

				return abecedario[i];
			}
		}
	}

	return abecedario[valor];
}