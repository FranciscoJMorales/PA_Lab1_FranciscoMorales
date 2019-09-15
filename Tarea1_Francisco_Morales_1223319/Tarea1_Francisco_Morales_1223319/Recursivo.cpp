#include "Recursivo.h"

Recursivo::Recursivo()
{
}

int Recursivo::Multiplicación(int n, int m) {
	if (m > 0) {
		return n + Multiplicación(n, m - 1);
	}
	else {
		return 0;
	}
}

bool Recursivo::Palíndroma(System::String^ palabra) {
	if (palabra->Substring(0, 1) == palabra->Substring(palabra->Length - 1)) {
		if (palabra->Length > 2) {
			return Palíndroma(palabra->Substring(1, palabra->Length - 2));
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}
}

int Recursivo::ConvertirDecimal(int n, int b) {
	if (n > 0) {
		return ((n % 10) + (ConvertirDecimal(n / 10, b) * b));
	}
	else {
		return 0;
	}
}

System::String^Recursivo::ConvertirBase(int n, int b) {
	if (n > 0) {
		return (ConvertirBase(n / b, b) + System::Convert::ToString(n % b));
	}
	else {
		return "";
	}
}

int Recursivo::MultiplicaciónIterativa(int n, int m) {
	int resultado = 0;
	for (int i = 0; i < m; i++) {
		resultado += n;
	}
	return resultado;
}


bool Recursivo::PalíndromaIterativa(System::String^ palabra) {
	bool respuesta = true;
	for (int i = 0; i < palabra->Length; i++) {
		if (palabra->Substring(i, 1) != palabra->Substring(palabra->Length - i - 1, 1)) {
			respuesta = false;
			i = palabra->Length;
		}
	}
	return respuesta;
}

int Recursivo::ConvertirDecimalIterativa(int n, int b) {
	int decimal = 0;
	int i = 0;
	while (n > 0) {
		decimal += (n % 10) * System::Math::Pow(b, i);
		n /= 10;
		i++;
	}
	return decimal;
}

System::String^Recursivo::ConvertirBaseIterativa(int n, int b) {
	System::String^ resultado = "";
	while (n > 0) {
		resultado = System::Convert::ToString(n % b) + resultado;
		n /= b;
	}
	return resultado;
}
