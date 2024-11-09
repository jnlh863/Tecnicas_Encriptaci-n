#include "pch.h"
#include <exception>
#include <string>
#include <vector>

class uno : public std::exception {

private:
	std::vector<std::string> errors;

public:
	
	uno(const std::vector<std::string>& errorList)
		: errors(errorList) {}

	const std::vector<std::string>& getErrors() const {
		return errors;
	}
};
