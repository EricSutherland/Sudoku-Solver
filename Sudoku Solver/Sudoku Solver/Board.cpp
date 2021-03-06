#include "stdafx.h"
#include "Board.h"
#include "SmallSquare.h"
#include <iostream>
#include <sstream>
#include <fstream> 

Board::Board(std::string p_fileName)
{
	std::string puzzle = this->Load(p_fileName);
	int rowNum = 0;
	int columnNum = 0;
	int largeSquareNum = 0;

	this->initialiseArrays();

	for (int i = 0 ; i < 81 ; i++)
	{
		SmallSquare* tempSmallSquare;
		if (puzzle[i] != ' ' && puzzle[i] != '0')
		{
			tempSmallSquare = new SmallSquare(m_rows[rowNum], m_columns[columnNum], m_largeSquares[largeSquareNum], puzzle[i] - '0');
		}
		else
		{
			tempSmallSquare = new SmallSquare(m_rows[rowNum], m_columns[columnNum], m_largeSquares[largeSquareNum]);
		}
		m_squares[i] = tempSmallSquare;
		m_largeSquares[largeSquareNum]->AddSquare(tempSmallSquare);
		m_rows[rowNum]->AddSquare(tempSmallSquare);
		m_columns[columnNum]->AddSquare(tempSmallSquare);

		if ((i + 1) % 9 == 0)
		{
			rowNum++;
			columnNum = 0;
		}
		else
		{
			columnNum++;
		}

		int squareRow = (rowNum) / 3;
		int squareCol = (columnNum) / 3;

		largeSquareNum = (squareRow * 3) + squareCol;

		int temp = 2;

	}
}

std::string Board::Display()
{
	std::string output = "+---+---+---+\n";

	for (int i = 0 ; i < 9 ; i++)
	{
		output += m_rows[i]->Display();

		if ((i + 1) % 3 == 0)
		{
			output += "+---+---+---+\n";
		}
	}

	return output;
}

std::string Board::Load(std::string p_fileName)
{
	std::ifstream inFile;
	inFile.open(p_fileName);

	std::stringstream strStream;
	strStream << inFile.rdbuf();//read the file
	std::string str = strStream.str();
	str.erase(std::remove(str.begin(), str.end(), '+'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '-'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '|'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
	return str;
}

void Board::initialiseArrays()
{
	for (int i = 0; i < 9; i++)
	{
		m_largeSquares[i] = new LargeSquare();
		m_rows[i] = new Row();
		m_columns[i] = new Column();
	}
}

Board::~Board()
{
}
