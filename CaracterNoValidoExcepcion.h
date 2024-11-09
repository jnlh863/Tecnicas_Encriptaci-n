#pragma once
#include <exception>
#include <string>
#include <vector>

ref class CaracterNoValidoExcepcion : public std::exception
{
private:
	std::vector<std::string> errors;

public:

	CaracterNoValidoExcepcion(const std::vector<std::string>& errorList)
		: errors(errorList) {}

	const std::vector<std::string>& getErrors() const {
		return errors;
	}
};

