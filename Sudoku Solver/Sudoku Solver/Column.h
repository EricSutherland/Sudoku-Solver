#pragma once
#include <vector>
#include <array>

class SmallSquare;

class Column
{
private:
	std::vector<int> m_containedValues;
	std::array<SmallSquare*, 9> m_squares;
public:
	Column();
	void Update();
	void AddSquare(SmallSquare* p_square);
	bool Contains(int);
	~Column();
};

