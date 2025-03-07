#include "CheckSolution.h"

void CheckSolution::setExpected(string expected) {
	_expected = expected;
}

void CheckSolution::setActual(string actual){
	_actual = actual;
}

void CheckSolution::setCheckData(string expected, string actual) {
	setExpected(expected);
	setActual(actual);
}

bool CheckSolution::check(){
	if (_expected.size() != _actual.size()) return false;
	for (int i = 0; i < _expected.size(); i++) {
		if (_expected[i] != _actual[i]) return false;
	}

	return true;
}
