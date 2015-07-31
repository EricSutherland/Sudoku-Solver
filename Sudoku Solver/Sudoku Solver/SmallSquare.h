#pragma once
#include <vector>

class Row;		  //
class Column;	  // to stop circular dependancy
class LargeSquare;//

class SmallSquare
{
private:

	int m_value = 0;
	bool permanent = false;
	std::vector<int>* m_possibilities;

	Row* m_row = NULL;
	Column* m_column = NULL;
	LargeSquare* m_parent = NULL;
public:
	SmallSquare(Row* p_row, Column* p_column, LargeSquare* p_parent);
	SmallSquare(Row* p_row, Column* p_column, LargeSquare* p_parent, int p_value);
	void CheckPossibilities();

	int GetValue() { return m_value; }

	~SmallSquare();
};

