// Intermediate, Permutation.cpp : trying to solve it with accumulate Numeric Algorithm
//

#include "stdafx.h"
#include <iostream>
#include <vector>

std::vector<int> Function6(std::vector <int> A);


int main()
{
	std::vector<int> Numbers={1,2,3,4,5,6,7,8,9};
	auto temp = Function6(Numbers);

	for (int i = 0; i < temp.size(); i++) {
		std::cout << temp[i]<< "\n";
	}
    return 0;
}

std::vector<int> Function6(std::vector <int> A) {
	std::vector<int> Result;
	auto n = A.size();
	
	if (A.size() == 1)
		return A;
	if (A.size() == 2) {
		Result.push_back(A[0]);
		Result.push_back(A[1]);
		Result.push_back((A[0] * (10 ^ (n - 1)) + A[1] * (10 ^ (n - 2))));

	}
	if (A.size() > 2)
		Function6();

	return Result;
}