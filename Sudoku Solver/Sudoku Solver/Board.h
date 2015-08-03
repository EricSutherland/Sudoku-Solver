#pragma once
#include "Column.h"
#include "LargeSquare.h"
#include "Row.h"


class Board
{
	std::array<LargeSquare*, 9> m_largeSquares;
	std::array<Row*, 9> m_rows;
	std::array<Column*, 9> m_columns;
	std::array<SmallSquare*, 81> m_squares;
	
	void initialiseArrays();
public:
	Board(std::string p_fileName);
	std::string Display();
	std::string Load(std::string p_fileName);
	std::array<SmallSquare*, 81>* GetSquares() { return &m_squares; };
	~Board();
};

