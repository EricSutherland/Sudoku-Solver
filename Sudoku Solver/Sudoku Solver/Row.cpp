#include "stdafx.h"
#include "Row.h"
#include "SmallSquare.h"
#include <string> 
Row::Row()
{

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
