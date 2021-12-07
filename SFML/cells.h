#pragma once
#include <iostream>                                                     
#include <SFML/Graphics.hpp> 

void randomiseCells(int num_xCells, int num_yCells, std::vector< std::vector<int> >& cells);
void drawCells(int num_xCells, int num_yCells, std::vector< std::vector<int> >& cells, sf::RectangleShape _pixel, sf::RenderWindow& _window);