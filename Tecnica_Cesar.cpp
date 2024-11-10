#include "pch.h"
#include "Tecnica_Cesar.h"
#include "Mapa.cpp"
#include <iostream>
#include <string>
#include <cctype>

Tecnica_Cesar::Tecnica_Cesar() {}

std::string Tecnica_Cesar::encriptacion_Cesar(const std::string& mensaje, int clave) {
    Mapa mapa;
    std::string mensajeEncriptado = "";
    int valorLetra = 0;
    int cNumero;
    char cLetra;

    for (int i = 0; i < mensaje.size(); i++) {
        
        char letraSig = ' ';

        if (mensaje[i] == ' ') {
            mensajeEncriptado += mensaje[i];
            continue;
        }

        valorLetra = mapa.mappeoLetraValor(mensaje[i]);

        cNumero = valorLetra + (clave % 27);

        cLetra = mapa.mappeoValorLetra(cNumero);

        mensajeEncriptado += cLetra;
    }

    return mensajeEncriptado;
}

std::string Tecnica_Cesar::desencriptacion_Cesar(const std::string& mensaje, int clave) {
    Mapa mapa;
    std::string mensajeDesencriptado = "";
    int valorLetra = 0;
    int mNumero;
    char mLetra;

    for (int i = 0; i < mensaje.size(); i++) {

        if (mensaje[i] == ' ') {
            mensajeDesencriptado += mensaje[i];
        }

        valorLetra = mapa.mappeoLetraValor(mensaje[i]);

        mNumero = valorLetra - (clave % 27);

        while (mNumero < 0) {
            mNumero = mNumero % 27;
        }

        mLetra = mapa.mappeoValorLetra(mNumero);

        mensajeDesencriptado += mLetra;
    }

    return mensajeDesencriptado;
  
}





