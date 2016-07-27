#pragma once
#include <SFML/Graphics.hpp>
class Cell
{
public:
	Cell();
	virtual ~Cell();
	
	struct vector
	{
		int x;
		int y;
		vector(int n_x, int n_y)
		{
			x = n_x;
			y = n_y;
		}
	};

	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) = 0;
	virtual vector Check() = 0;
};

