#include "pch.h"
#include <exception>
#include <string>

class dos : public std::exception {

public:

	dos() = default;

	const char* what() const noexcept override {
		return "Solo se permiten letras. No n�meros y no caracteres alfan�mericos.";
	}
};