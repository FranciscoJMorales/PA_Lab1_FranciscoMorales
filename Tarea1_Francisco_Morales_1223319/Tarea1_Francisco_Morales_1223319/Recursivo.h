#pragma once
ref class Recursivo
{
public:
	Recursivo();
public:
	int Multiplicación(int n, int m);
public:
	bool Palíndroma(System::String^ palabra);
public:
	int ConvertirDecimal(int n, int b);
public:
	System::String^ConvertirBase(int n, int b);
public:
	int MultiplicaciónIterativa(int n, int m);
public:
	bool PalíndromaIterativa(System::String^ palabra);
public:
	int ConvertirDecimalIterativa(int n, int b);
public:
	System::String^ConvertirBaseIterativa(int n, int b);
};

