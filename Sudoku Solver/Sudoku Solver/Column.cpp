#include "stdafx.h"
#include "Column.h"


Column::Column()
{
	for (int i = 0; i < m_squares.size(); i++)
	{
		m_squares[i] = nullptr;
	}
}

void Column::AddSquare(SmallSquare* p_square)
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

Column::~Column()
{
}
