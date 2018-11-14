#pragma once

typedef long long llong;

class BinCislo
{
private:
	llong aHodnota = 0;
	llong Bin2Dec(const char *pStrCislo);
	const char *Dec2Bin(char *pStrCislo, llong pDecCislo);

public:
	//BinCislo() : aHodnota(0) {}
	BinCislo(const char *pStrCislo) : aHodnota(Bin2Dec(pStrCislo)) {}
	BinCislo(llong pDecCislo = 0) : aHodnota(pDecCislo) {}
	
	//BinCislo operator +(BinCislo op);
	friend BinCislo operator +(BinCislo op1, BinCislo op2); //podobnym sposobom sa vytvoria ostatne aritmeticke operacie...

	friend bool operator <(BinCislo op1, BinCislo op2);
	friend bool operator ==(BinCislo op1, BinCislo op2);
	friend bool operator !=(BinCislo op1, BinCislo op2);

	//void Vypis();
};

inline BinCislo operator +(BinCislo op1, BinCislo op2) {
	return op1.aHodnota + op2.aHodnota;
}

inline bool operator <(BinCislo op1, BinCislo op2) {
	return op1.aHodnota < op2.aHodnota;
}

inline bool operator ==(BinCislo op1, BinCislo op2) {
	return op1.aHodnota == op2.aHodnota;
}

inline bool operator !=(BinCislo op1, BinCislo op2) {
	//return op1.aHodnota != op2.aHodnota; alebo
	//return !(op1.aHodnota == op2.aHodnota); alebo
	return !(op1 == op2);
}
