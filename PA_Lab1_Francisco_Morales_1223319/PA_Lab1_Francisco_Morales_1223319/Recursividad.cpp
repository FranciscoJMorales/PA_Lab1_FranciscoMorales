#include "Recursividad.h"

Recursividad::Recursividad()
{
}

int Recursividad::Fibonacci(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int Recursividad::Factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}

System::String^Recursividad::Binario(int n) {

	if (n / 2 == 0) {
		return "1";
	}
	else {
		return (Binario(n / 2) + (System::Convert::ToString(n % 2)));
	}
}
/*
System::String^ObtenerArchivoRuta(System::String^ ruta) {
return "a";
}
*/
