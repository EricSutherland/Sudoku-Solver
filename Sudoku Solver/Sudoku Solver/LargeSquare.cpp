#include "stdafx.h"
#include "LargeSquare.h"


LargeSquare::LargeSquare()
{
	for (int i = 0; i < m_squares.size(); i++)
	{
		m_squares[i] = nullptr;
	}
}

void LargeSquare::AddSquare(SmallSquare* p_square)
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


LargeSquare::~LargeSquare()
{
}
