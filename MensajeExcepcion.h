#pragma once
#include <exception>
#include <string>

ref class MensajeExcepcion : public System::Exception
{
private:
	System::String^ message;

public:

	MensajeExcepcion() : message("Solo se permiten letras. No n�meros y no caracteres alfan�mericos.") {};

	System::String^ What() {
		return message;
	}
};

