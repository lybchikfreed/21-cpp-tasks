#include <iostream>



int task2() {
	int S;
	printf_s("input S: ");
	std::cin >> S;

	int D = S / (60 * 60 * 24)%7;
	int H = S / (60 * 60) % 24;
	int M = S / (60) % 60;
	int Sec = S % 60;
	printf_s("Today is %d, %d : %d : %d\n", D+1, H, M, Sec);
	return 1;
}