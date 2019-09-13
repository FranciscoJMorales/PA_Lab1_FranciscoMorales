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

int Recursividad::Binario(int n, int r) {

	if (n / 2 == 0) {
		return (1 * Potencia(10, r));
	}
	else {
		return (Binario(n / 2, r + 1) + ((n % 2) * Potencia(10, r)));
	}
}

int Recursividad::Potencia(int x, int n) {
	if (n > 0) {
		return (x * Potencia(x, n - 1));
	}
	else
		return 1;
}
/*
System::String^ObtenerArchivoRuta(System::String^ ruta) {
return "a";
}
*/
