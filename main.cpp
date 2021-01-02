#include <iostream>
#include "tasks.h"


int (*tasksarr[])() = { task1, task2 };
int main() {

	int a;
	std::cout << "Enter task number: " << std::endl;
	std::cin >> a;
	(*tasksarr[a-1])();

	system("pause");
	return 0;
}