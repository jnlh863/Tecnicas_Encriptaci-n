#include "pch.h"
#include "Tecnica_Cesar.h"
#include "Mapa.h"
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

        valorLetra = mapa.mappeoLetraValor(mensaje[i]);

        if (valorLetra != -1) {
            cNumero = valorLetra + (clave % 26);

            cLetra = mapa.mappeoValorLetra(cNumero);
            
            mensajeEncriptado += cLetra;
        }
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

        valorLetra = mapa.mappeoLetraValor(mensaje[i]);

        if (valorLetra != -1) {

            mNumero = valorLetra - (clave % 26);

            while (mNumero < 0) {
                mNumero = (mNumero % 26 + 26) % 26;
            }

            mLetra = mapa.mappeoValorLetra(mNumero);

            mensajeDesencriptado += mLetra;

        }
    }

    return mensajeDesencriptado;
  
}





