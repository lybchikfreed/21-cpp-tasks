#include <iostream>
#include <cmath>
char* intToB(int i) {
	char *bin = new char[30];
	itoa(abs(i), bin, 2);
	return bin;
}
int task1() {
	int k,a,b;
	char *notarr[]= { "not ","" };
	bool inrng;
	printf_s("input k: ");
	std::cin >> k;
	printf_s("input a: ");
	std::cin >> a;
	printf_s("input b: ");
	std::cin >> b;
	if (k > a && k < b)
		inrng = 1;
	else
		inrng= 0;
	char* kbin = intToB(k),*abin = intToB(a), * bbin = intToB(b);
	
	printf_s("%s is %sin range(%s..%s)\n", kbin, notarr[inrng], abin, bbin);
	printf_s("%o is %sin range(%o..%o)\n",k,notarr[inrng],a,b); 
	printf_s("%X is %sin range(%X..%X)\n", k, notarr[inrng], a, b);
	delete[] kbin;
	delete[] abin;
	delete[] bbin;

	// doesn't work with negative numbers
	return 0;
}
