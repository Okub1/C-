#include "BinCislo.h"
#include "VystupKonzola.h"
#include "VystupSubor.h"

int main()
{
	BinCislo a("-1011"), b(14), c;

	c = a + b; //test ci nam ide scitavanie...
	c = 10 + a;
	bool test = c != a;

	VystupKonzola konzola;
	VystupSubor subor("cisla.txt");
	//konzola.Vypis(c.);
	c.Vypis(konzola);
	a.Vypis(subor);
	a.Vypis(konzola);
	c.Vypis(subor);

	return 0;
}
