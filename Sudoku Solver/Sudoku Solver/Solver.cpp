#include "stdafx.h"
#include "Solver.h"
#include "SmallSquare.h"
#include <iostream>
#include <sstream>

Solver::Solver()
{
}

std::string Solver::Sudoku(Board* p_board)
{
	bool solved = false;

	while (!solved)
	{
		bool changeMade =false;
		for each (SmallSquare* sqr in *(p_board->GetSquares()))
		{
			if (sqr->GetValue() == 0)
			{
				for (int i = 1; i < 10; i++)
				{
					
					if (sqr->GetRow()->Contains(i))
					{
						sqr->RemoveFromPossibilities(i);
					}
					else if (sqr->GetColumn()->Contains(i))
					{
						sqr->RemoveFromPossibilities(i);
					}
					else if (sqr->GetLargeSquare()->Contains(i))
					{
						sqr->RemoveFromPossibilities(i);
					}
				}

				if (sqr->CheckPossibilities())
				{
					changeMade = true;
					//std::cout << "Update:\n";
					//std::cout << p_board->Display();
				}
			}
		}
		
		if (!changeMade)
		{
			return "Completed\n" + p_board->Display();
		}
	}
}

Solver::~Solver()
{
}
