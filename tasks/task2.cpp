#include <iostream>


void printDate(int days) {

}
int fixnegativesec(int sec) {
	if(sec<0)
		return (sec + (60 * 60 * 24 * 7)*((abs(sec) + (60 * 60 * 24 * 8) )/ (60 * 60 * 24 * 7)));
	return sec;
	
}
int task2() {
	int S;
	printf_s("input S: ");
	std::cin >> S;
	int D = S / (60 * 60 * 24);
	S = fixnegativesec(S);
	int W = S / (60 * 60 * 24)%7;
	int H = S / (60 * 60) % 24;
	int M = S / (60) % 60;
	int Sec = S % 60;
	printf_s("Today is %d, %d : %d : %d\n", W+1, H, M, Sec);
	//TODO print DAY:MONTH:YEAR from 6.1.2020
	return 1;
}