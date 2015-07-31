#pragma once
#include <vector>
#include <array>

class SmallSquare;

class LargeSquare
{
private:
	std::vector<int> m_containedValues;
	std::array<SmallSquare*, 9> m_squares;
public:
	LargeSquare();
	void Update();
	void AddSquare(SmallSquare* p_square);
	bool Contains(int);
	~LargeSquare();
};

