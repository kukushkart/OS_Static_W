// NumberLib2.cpp : Определяет функции для статической библиотеки.
//
#include "Number.h"
#include <stdexcept>
#include "framework.h"

// TODO: Это пример библиотечной функции.
void fnNumberLib2()
{
}

Number::Number(double value) : a(value) {}


Number Number::operator+(const Number& other) const {
	return (this->a + other.a);
}

Number Number::operator-(const Number& other) const {
	return (this->a - other.a);
}
Number Number::operator*(const Number& other) const {
	return (this->a * other.a);
}
Number Number::operator/(const Number& other) const {
	if (other.a == 0.0) {
		throw std::runtime_error("Division by 0");
	}
	return (this->a / other.a);

}

double Number::getValue() const {
	return(a);
}

const Number ZERO(0.0);
const Number ONE(1.0);



Number createNumber(double value) {
	return Number(value);
}