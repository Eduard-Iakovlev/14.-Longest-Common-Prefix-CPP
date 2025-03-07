#include <iostream>
#include <vector>
#include <string>
#include "Visualization.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int example = 0;
	vector<string> strs{};
	string expected{};

	Visualization visualization;

	example++;
	strs = { "flower", "flow", "flight" };
	expected = "fl";
	visualization.setVisualizationData(example, strs, expected);
	visualization.print();

	example++;
	strs = { "dog", "racecar", "car" };
	expected = "";
	visualization.setVisualizationData(example, strs, expected);
	visualization.print();

}
