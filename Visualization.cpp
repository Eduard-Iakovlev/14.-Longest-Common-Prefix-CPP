#include "Visualization.h"
#include "Solution.h"
#include "CheckSolution.h"
#include <iostream>

void Visualization::setExample(int example) {
	_example = example;
}

void Visualization::setStrs(vector<string>& strs){
	_strs = strs;
}

void Visualization::setExpected(string& expected) {
	_expected = expected;
}

void Visualization::setActual() {
	Solution solution;
	_actual = solution.longestCommonPrefix(_strs);
}

void Visualization::setVisualizationData(int example, vector<string>& strs, string& expected) {
	setExample(example);
	setStrs(strs);
	setExpected(expected);
}

void Visualization::print(){
	cout << "============ Тест " << _example << " ============" << endl;
	cout << " Входные данные: \n";
	printVecStr(_strs);
	cout << " Ожидаемый результат: \"" << _expected << "\"" << endl;
	setActual();
	cout << " Полученный результат: \"" << _actual << "\"" << endl;
	cout << "============ Проверка ============" << endl;
	printCheck();
	cout << "=================================\n" << endl;
}

void Visualization::printCheck() {
	CheckSolution check;
	check.setCheckData(_expected, _actual);
	if (check.check()) {
		cout << "Результат: " << _actual << endl;
		cout << "Тест пройден" << endl;
	}
	else {
		cout << "Результат: " << _actual << endl;
		cout << "Тест не пройден" << endl;
	}
}

void Visualization::printVecStr(vector<string>& vec) {

	for (auto i : vec) { cout << " \"" << i << "\"" << endl; }

}

