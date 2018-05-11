// Problem statement: https://open.kattis.com/problems/batterup

#include <iostream>

int main(int argc, char *argv[]) {
	int n;
	std::cin >> n;
	int at_bat[n];
	for (int i = 0; i < n; i++) {
		std::cin >> at_bat[i];
	}
	double result = 0;
	double sum = 0;
	double numOfNegatives = 0;
	for (int i = 0; i < n; i++) {
		if (at_bat[i] == -1) {
			numOfNegatives++;
		} else {
			sum += at_bat[i];
		}

	}
	result = (sum / (n - numOfNegatives));
	std::cout << result << std::endl;
	return 0;
}
