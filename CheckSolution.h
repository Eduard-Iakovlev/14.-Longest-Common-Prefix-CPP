#pragma once
#include <string>

using namespace std;

class CheckSolution{
public:
	CheckSolution() = default;
	void setExpected(string expected);
	void setActual(string actual);
	void setCheckData(string expected, string actual);
	bool check();
private:
	string _expected, _actual;
};

