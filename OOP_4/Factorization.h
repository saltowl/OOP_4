#pragma once
#include <map>
#include <cstdint>
#include <string>
#include <iostream>

class Factorization
{
public:
	Factorization(uint64_t& number);
	Factorization() = default;
	~Factorization() = default;

	void Calculation();

	bool Check()              const;
	std::string Description() const;

private:
	uint64_t source;
	std::map <uint64_t, uint8_t> factors;
};