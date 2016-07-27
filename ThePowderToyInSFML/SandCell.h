#pragma once
#include "Cell.h"
class SandCell :
	public Cell
{
public:
	SandCell();
	virtual ~SandCell();

	virtual void draw(sf::RenderTarget & target, sf::RenderStates states);
	virtual vector Check();
};

