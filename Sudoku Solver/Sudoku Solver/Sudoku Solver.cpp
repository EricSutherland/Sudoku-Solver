// Sudoku Solver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Board.h"
#include <iostream>
#include <sstream>

int main(int argc, char **argv)
{
	Board* board = new Board();

	std::cout << board->Display();

	std::cin.ignore();
	return 0;
}

