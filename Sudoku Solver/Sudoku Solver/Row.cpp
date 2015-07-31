#include "stdafx.h"
#include "Row.h"
#include "SmallSquare.h"
#include <string> 
Row::Row()
{
	for (int i = 0; i < m_squares.size(); i++)
	{
		m_squares[i] = nullptr;
	}
}

void Row::AddSquare(SmallSquare* p_square)
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

std::string Row::Display()
{
	std::string output = "|";

	for (int i = 0 ; i < 9 ; i++)
	{
		int temp = m_squares[i]->GetValue();

		if (temp == 0)
		{
			output += " ";
		}
		else
		{
			output += std::to_string(m_squares[i]->GetValue());
		}

		if ((i + 1) % 3 == 0)
		{
			output += "|";
		}
	}
	return output + "\n";
}

Row::~Row()
{
}
