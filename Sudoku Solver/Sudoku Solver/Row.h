#pragma once
#include "ISudokuPiece.h"

class SmallSquare;

class Row : public ISudokuPiece
{
public:
	Row();
	std::string Display();
	~Row();
};

