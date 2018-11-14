#include "VystupSubor.h"


VystupSubor::VystupSubor(const char * menoSuboru)
{
	if (menoSuboru && *menoSuboru)
	{
		f=fopen(menoSuboru, "wt+");
	}
}

VystupSubor::~VystupSubor()
{
	if (f)
	{
		fclose(f);
	}
}

void VystupSubor::Vypis(const char * text)
{
	if (f && text)
	{
		fprintf(f, "%s\n", text);
	}
}
