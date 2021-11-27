/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Cameron Parrish
 */

#include "Header.h"

bool isParam(string check){
	char* p;
	strtol(check.c_str(), &p, 10);
	return *p == 0;
}

string getValue(const char array[20]) {
	string value;
	std::cout << "Enter the " << array << " Number:";
	cin >> value;

	return value;
}

bool ifValid(string number) {
	bool flag = false;

	if (number == "0") {
		flag = true;
	}
	else if (number == "1") {
		flag = true;
	}
	else if (number == "2") {
		flag = true;
	}
	else if (number == "3") {
		flag = true;
	}
	else if (number == "4") {
		flag = true;
	}
	else if (number == "5") {
		flag = true;
	}
	else if (number == "6") {
		flag = true;
	}
	else if (number == "7") {
		flag = true;
	}
	else if (number == "8") {
		flag = true;
	}
	else if (number == "9") {
		flag = true;
	}
	else if (number == "zero") {
		flag = true;
	}
	else if (number == "one") {
		flag = true;
	}
	else if (number == "two") {
		flag = true;
	}
	else if (number == "three") {
		flag = true;
	}
	else if (number == "four") {
		flag = true;
	}
	else if (number == "five") {
		flag = true;
	}
	else if (number == "six") {
		flag = true;
	}
	else if (number == "seven") {
		flag = true;
	}
	else if (number == "eight") {
		flag = true;
	}
	else if (number == "nine") {
		flag = true;
	}
	else if (number == "Zero") {
		flag = true;
	}
	else if (number == "One") {
		flag = true;
	}
	else if (number == "Two") {
		flag = true;
	}
	else if (number == "Three") {
		flag = true;
	}
	else if (number == "Four") {
		flag = true;
	}
	else if (number == "Five") {
		flag = true;
	}
	else if (number == "Six") {
		flag = true;
	}
	else if (number == "Seven") {
		flag = true;
	}
	else if (number == "Eight") {
		flag = true;
	}
	else if (number == "Nine") {
		flag = true;
	}

	return flag;
}

int numberConvert(string number) {
	int currentnumber = 0;

	if (number == "0") {
		currentnumber = 0;
	}
	else if (number == "1") {
		currentnumber = 1;
	}
	else if (number == "2") {
		currentnumber = 2;
	}
	else if (number == "3") {
		currentnumber = 3;
	}
	else if (number == "4") {
		currentnumber = 4;
	}
	else if (number == "5") {
		currentnumber = 5;
	}
	else if (number == "6") {
		currentnumber = 6;
	}
	else if (number == "7") {
		currentnumber = 7;
	}
	else if (number == "8") {
		currentnumber = 8;
	}
	else if (number == "9") {
		currentnumber = 9;
	}

	return currentnumber;
}

int LetterCoverter(string number) {
	int currentnumber = 0;

	if (number == "zero") {
		currentnumber = 0;
	}
	else if (number == "one") {
		currentnumber = 1;
	}
	else if (number == "two") {
		currentnumber = 2;
	}
	else if (number == "three") {
		currentnumber = 3;
	}
	else if (number == "four") {
		currentnumber = 4;
	}
	else if (number == "five") {
		currentnumber = 5;
	}
	else if (number == "six") {
		currentnumber = 6;
	}
	else if (number == "seven") {
		currentnumber = 7;
	}
	else if (number == "eight") {
		currentnumber = 8;
	}
	else if (number == "nine") {
		currentnumber = 9;
	}
	else if (number == "Zero") {
		currentnumber = 0;
	}
	else if (number == "One") {
		currentnumber = 1;
	}
	else if (number == "Two") {
		currentnumber = 2;
	}
	else if (number == "Three") {
		currentnumber = 3;
	}
	else if (number == "Four") {
		currentnumber = 4;
	}
	else if (number == "Five") {
		currentnumber = 5;
	}
	else if (number == "Six") {
		currentnumber = 6;
	}
	else if (number == "Seven") {
		currentnumber = 7;
	}
	else if (number == "Eight") {
		currentnumber = 8;
	}
	else if (number == "Nine") {
		currentnumber = 9;
	}

	return currentnumber;
}

int main() {
	char operation;
	string first, second;
	double answer;
	int firstNum, secondNum;
	bool flag = false;

	// Gets the first char (which is the operation)
	// Then gets the inputs for the first and second number

	std::cout << "Enter the Operation:  ";

	operation = getchar();
	while (flag == false) {
		
		first = getValue("First");
		flag = ifValid(first);
	}
	flag = false;

	while (flag == false) {

		second = getValue("Second");
		flag = ifValid(first);
	}

	if (isParam(first)) {
		// This is a number
		firstNum = numberConvert(first);
	}
	else {
		// Number in letter form
		firstNum = LetterCoverter(first);
	}

	if (isParam(second)) {
		// This is a number
		secondNum = numberConvert(second);
	}
	else {
		// Number in letter form
		secondNum = LetterCoverter(second);
	}

	
	switch (operation) {
	case '+':
		answer = firstNum + secondNum;
		std::cout << firstNum << " + " << secondNum << " = " << answer;
		break;
	case '-':
		answer = firstNum - secondNum;
		std::cout << firstNum << " - " << secondNum << " = " << answer;
		break;
	case '*':
		answer = firstNum * secondNum;
		std::cout << firstNum << " * " << secondNum << " = " << answer;
		break;
	case '/':
		answer = firstNum / secondNum;
		std::cout << firstNum << " / " << secondNum << " = " << answer;
		break;
	default:
		std::cout << "This is not a valid input";
		break;
	}

	return 0;
}

