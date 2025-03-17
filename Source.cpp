#include <iostream>
#include <vector>
int findOdd(const std::vector<int>& numbers) {
	int a = 0;
	for (int i = 0; i < numbers.size(); i++) {
		a = a ^ numbers[i];

	}
	return a;
}
int main() {
	int size_array;
	std::cin >> size_array;
	std::vector<int> array(size_array);
	for (int i = 0; i < size_array; i++) {
		int a;
		std::cin >> a;
		array.push_back(a);
	}
	std::cout << findOdd(array)<<std::endl;

	std::cerr << "adad";
	return 0;
}