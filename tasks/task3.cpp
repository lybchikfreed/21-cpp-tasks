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
	std::cin >> k;
	std::cin >> s;
	std::cin >> p;
	std::cout << fallHeight(Speed0(s, k * 60), p)<<std::endl;
	return 1;
}