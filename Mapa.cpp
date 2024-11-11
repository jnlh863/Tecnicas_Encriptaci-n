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
    abecedario['O'] = 14;
	abecedario['P'] = 15;
	abecedario['Q'] = 16;
	abecedario['R'] = 17;
	abecedario['S'] = 18;
	abecedario['T'] = 19;
	abecedario['U'] = 20;
	abecedario['V'] = 21;
	abecedario['W'] = 22;
	abecedario['X'] = 23;
	abecedario['Y'] = 24;
	abecedario['Z'] = 25;
	
	if (letra == ' ') {
		return -1;
	}
	else {

		if (!isalpha(letra)) {
			throw gcnew MensajeExcepcion();
		}
	}

	char letraMayus = toupper(letra);

	if (abecedario.count(letraMayus)) {
		return abecedario[letraMayus];
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
	abecedario[14] = 'O';
	abecedario[15] = 'P';
	abecedario[16] = 'Q';
	abecedario[17] = 'R';
	abecedario[18] = 'S';
	abecedario[19] = 'T';
	abecedario[20] = 'U';
	abecedario[21] = 'V';
	abecedario[22] = 'W';
	abecedario[23] = 'X';
	abecedario[24] = 'Y';
	abecedario[25] = 'Z';

	int indice = valor % abecedario.size();

	return abecedario[indice];
}