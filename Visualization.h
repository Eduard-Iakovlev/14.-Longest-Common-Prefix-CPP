#pragma once
#include <string>
#include <vector>

using namespace std;

class Visualization{
public:
	Visualization() = default;

	void setExample(int example);
	void setStrs(vector<string>& strs);
	void setExpected(string& expected);
	void setActual();
	void setVisualizationData(int example, vector<string>& strs, string& expected);

	void print();
	void printCheck();
	void printVecStr(vector<string>& vec);

private:
	int _example;
	vector<string> _strs;
	string _expected, _actual;
};

