#pragma once
#include <vector>
#include <array>

class SmallSquare;

class Row
{
private:
	std::vector<int> m_containedValues;
	std::array<SmallSquare*, 9> m_squares;
public:
	Row();
	void Update();
	void AddSquare(SmallSquare* p_square);
	bool Contains(int);
	std::string Display();
	~Row();
};

