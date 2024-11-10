#pragma once
#include <exception>
#include <string>

ref class MensajeExcepcion : public System::Exception
{
private:
	System::String^ message;

public:

	MensajeExcepcion() : message("Solo se permiten letras. No números y no caracteres alfanúmericos.") {};

	System::String^ What() {
		return message;
	}
};

