#include "stdafx.h"
#include "ISudokuPiece.h"


ISudokuPiece::ISudokuPiece()
{
	int temp[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	m_freeValues = new std::vector<int>(temp, temp + sizeof(temp) / sizeof(int));

	for (int i = 0; i < m_squares.size(); i++)
	{
		m_squares[i] = nullptr;
	}
}

void ISudokuPiece::AddSquare(SmallSquare* p_square)
{
	for (int i = 0; i < m_squares.size(); i++)
	{
		if (m_squares[i] == nullptr)
		{
			m_squares[i] = p_square;
			return;
		}
	}

	throw new std::exception("should not of reached here");
}

void ISudokuPiece::UpdateFreeValues(int p_value)
{
	m_freeValues->erase(std::remove(m_freeValues->begin(), m_freeValues->end(), p_value), m_freeValues->end());
}

bool ISudokuPiece::Contains(int p_value)
{
	if (m_freeValues->size() == 0)
	{
		return true;
	}

	if (std::find(m_freeValues->begin(), m_freeValues->end(), p_value) != m_freeValues->end())
	{
		return false;
	}
	else
	{
		return true;
	}
}


ISudokuPiece::~ISudokuPiece()
{
}
