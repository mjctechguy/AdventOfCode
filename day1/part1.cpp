#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int total = 0;
	int tally = 0;
	string line;
	ifstream day1("input.txt");
	if (day1.is_open())
	{
		while (getline(day1, line))
		{
			for (int i = 0; i < line.length(); ++i)
			{
				char ch = line[i];

				total += 1;

				if (ch == '(') {
					tally += 1;
				}

				if (ch == ')') {
					tally -= 1;
				}

			}
		}
		day1.close();
		cout << "Floor: " << tally << endl;
	}
}
