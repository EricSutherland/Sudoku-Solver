#include "stdafx.h"
#include "SmallSquare.h"
#include "Column.h"
#include "LargeSquare.h"
#include "Row.h"

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
	this->SetValue(p_value);
}

void SmallSquare::SetValue(int p_value)
{
	m_value = p_value;

	m_column->UpdateFreeValues(m_value);
	m_row->UpdateFreeValues(m_value);
	m_parent->UpdateFreeValues(m_value);
}

void SmallSquare::RemoveFromPossibilities(int p_value)
{
	m_possibilities->erase(std::remove(m_possibilities->begin(), m_possibilities->end(), p_value), m_possibilities->end());
}

bool SmallSquare::CheckPossibilities()
{
	if (m_possibilities->size() == 1)
	{
		this->SetValue(m_possibilities->at(0));
		return true;
	}
	return false;
}

SmallSquare::~SmallSquare()
{
}
