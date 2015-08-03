// Sudoku Solver.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include "Board.h"
#include "Solver.h"
#include <iostream>
#include <sstream>


int main(int argc, char **argv)
{
	Board* board = new Board("sudoku2.txt");


	std::cout << "Start\n";
	std::cout << board->Display();

	Solver solver = Solver();
	solver.Sudoku(board);
	std::cin.ignore();
	return 0;
}

