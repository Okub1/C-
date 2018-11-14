#pragma once
#include <cstdio>
#include "Vystup.h"
class VystupSubor :	public IVystup
{
	FILE *f = nullptr;
public:
	VystupSubor(const char *menoSuboru);
	virtual ~VystupSubor();

	// Inherited via IVystup
	virtual void Vypis(const char * text) override;
};

