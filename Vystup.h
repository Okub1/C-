#pragma once
class IVystup
{
public:
	virtual void Vypis(const char *text) = 0;
	virtual ~IVystup(){}
};
