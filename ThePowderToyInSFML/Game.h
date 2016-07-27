#pragma once
#include "Cell.h"
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
class Game
{
public:
	Game();
	~Game();

	sf::RenderWindow window;

	void Step();
	void Draw();
	void LoadFromFile(std::string src);
private:
	Cell ** cellTable;
public:
	void Reset();
};

