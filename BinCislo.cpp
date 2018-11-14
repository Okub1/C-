#include "BinCislo.h"
#include <cmath>
#include <cstring>

llong BinCislo::Bin2Dec(const char * pStrCislo)
{
	llong cislo(0);
	if (pStrCislo && *pStrCislo)
	{
		char *pomCislo = new char[strlen(pStrCislo) + 1];
		strcpy(pomCislo, pStrCislo);
		strrev(pomCislo);
		llong jednotka(1);
		int i(0);

		while (pomCislo[i])
		{
			if (pomCislo[i] == '1') {
				cislo += jednotka << i; //to iste, len by pisalo warning ze to nie je long long (llong): 1 << i;
		
			}
			i++;
		}

		if (pStrCislo[0] == '-') //alebo aj: *pStrCislo == '-';
		{
			cislo = -cislo;
			delete[] pomCislo;
		}
	}
	return cislo;
}

const char * BinCislo::Dec2Bin(char * pStrCislo, llong pDecCislo)
{
	if (!pStrCislo)
	{
		return nullptr;
	}

	llong pomCislo(abs(pDecCislo));
	int i(0);

	do
	{
		pStrCislo[i++] = pomCislo % 2 + 0x30; //alebo: + '0'; alebo + 48 //prvod cisla 0 (1) na znak '0' ('1')
		pomCislo >>= 1;	//to iste ako: pomCislo = pomCislo/2;
	} while (pomCislo > 0);

	if (pDecCislo < 0)
	{
		pStrCislo[i++] = '-';
	}

	pStrCislo[i] = '\0'; //ukoncovaci znak na konci... nech strrev ktory otaca string vie, kde konci nas string...

	return strrev(pStrCislo);
}
