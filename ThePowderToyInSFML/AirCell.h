#pragma once
#include "Cell.h"
class AirCell :
	public Cell
{
public:
	AirCell();
	virtual ~AirCell();

	virtual void draw(sf::RenderTarget & target, sf::RenderStates states);
	virtual vector Check();
};

