#include "stdafx.h"
#include "SmallSquare.h"


SmallSquare::SmallSquare(Row* p_row, Column* p_column, LargeSquare* p_parent)
{
	int temp[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	m_possibilities = new std::vector<int>(temp, temp + sizeof(temp) / sizeof(int));
	m_column = p_column;
	m_row = p_row;
	m_parent = p_parent;
}

SmallSquare::SmallSquare(Row* p_row, Column* p_column, LargeSquare* p_parent, int p_value)
{
	int temp[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	m_possibilities = new std::vector<int>(temp, temp + sizeof(temp) / sizeof(int));
	m_column = p_column;
	m_row = p_row;
	m_parent = p_parent;
	m_value = p_value;
}


SmallSquare::~SmallSquare()
{
}
