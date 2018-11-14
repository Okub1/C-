#pragma once
#include "Vystup.h"
class VystupKonzola : /*predok ->*/ public IVystup
{
public:
	virtual ~VystupKonzola();

	// Inherited via IVystup
	virtual void Vypis(const char * text) override;
};

