#pragma once
#include "Board.h"
class Solver
{
public:
	Solver();

	std::string Sudoku(Board* p_board);
	~Solver();
};

