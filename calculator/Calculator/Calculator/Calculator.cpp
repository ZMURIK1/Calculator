#include<iostream> // For using cout, cin and so on

void main() {
	setlocale(LC_ALL, "Rus"); // For Russian language

	while (true) {
		// On lines 7 - 9 i created var for continue or break
		int futureAction;
		std::cout << "Input 1 for continue, input 0 for break: ";
		std::cin >> futureAction;

		// On lines 11 - 13 i checing var
		if (futureAction == 0) {
			break;	
		}

		// On lines 18 - 20 i initialize vars for expression
		int firstNum;
		int secondNum;
		char action = ' ';

		// On lines 23 - 25 i created var with expression
		std::string expression;
		std::cout << "Input expression: "; 
		std::cin >> std::ws >> firstNum >> action >> secondNum;

		switch (action)
		{
		case '+':
			std::cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << "\n";
			break;
		case '-':
			std::cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << "\n";
			break;
		case '*':
			std::cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << "\n";
			break;
		case '/':
			std::cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum << "\n";
			break;
		default:
			break;
		}
	}
}