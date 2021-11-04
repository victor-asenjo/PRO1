#include <iostream>
#include <vector>
using namespace std;

int posicio_maxim(const vector<double>& v, int m) {
	int max = 0;
	double max_val = v[0];
	for (int i = 1; i <= m; ++i) {
		if (v[i] > max_val) {
			max = i;
			max_val = v[i];
		}
	}
	return max;
}