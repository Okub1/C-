#include <iostream>
#include "VystupKonzola.h"

using namespace std;

VystupKonzola::~VystupKonzola()
{
}

void VystupKonzola::Vypis(const char * text)
{
	if (text)
	{
		cout << text << endl;
	}
}
