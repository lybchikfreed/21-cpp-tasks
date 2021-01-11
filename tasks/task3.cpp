#include <iostream>
const float g = 9.8;

float Speed0(float s, float t) {
	return (s - g * t * t / 2.0) / t;
}

float fallHeight(float U0, float t) {
	return (U0 * t + g * t * t / 2.0);
}

int task3() {
	float k,s,p;
	printf_s("input k: ");
	std::cin >> k;
	printf_s("input s: ");
	std::cin >> s;
	printf_s("input p: ");
	std::cin >> p;
	printf_s("object will travel %.2f m in %.2f s \n", fallHeight(Speed0(s, k * 60), p),p);
	return 0;
}