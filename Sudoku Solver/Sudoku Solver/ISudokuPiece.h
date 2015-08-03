#pragma once
#include <vector>
#include <array>

class SmallSquare;

class ISudokuPiece
{
protected:
	std::vector<int>* m_freeValues;
	std::array<SmallSquare*, 9> m_squares;

public:
	ISudokuPiece();
	void Update();
	void AddSquare(SmallSquare* p_square);
	void UpdateFreeValues(int p_value);
	bool Contains(int p_value);
	~ISudokuPiece();
};

