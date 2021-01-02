#include <iostream>
#include "tasks.h"


int (*tasksarr[])() = { task1, task2 };

int main() {

	unsigned int a;
	std::cout << "Enter task number: " << std::endl;
	std::cin >> a;
	if (a > 2||a==0) {
		std::cout << "Task does not exist" << std::endl;
		return 0;
	}
	(*tasksarr[a-1])();

	system("pause");
	return 0;
}