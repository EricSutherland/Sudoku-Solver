#pragma once
#include "Column.h"
#include "LargeSquare.h"
#include "Row.h"


class Board
{
	LargeSquare* m_largeSquares[9];
	Row* m_rows[9];
	Column* m_columns[9];
	
	void initialiseArrays();
public:
	Board();
	std::string Display();
	~Board();
};

