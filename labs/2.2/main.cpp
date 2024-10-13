#include <iostream>
#include <string>

enum Names { David, Tom, Andrew, Kate, Mary, Olga, Arthur};

struct Student 
{
	Names name;
	int birthday;
	int month;
};

int main() {
	Student myStudent[7]{
		{ David, 15, 7 },
		{ Tom, 4, 1 },
		{ Andrew, 19, 11},
		{ Kate, 27, 4},
		{ Mary, 8, 2},
		{ Olga, 22, 12},
		{ Arthur, 1, 9}
	};
	int size = sizeof(myStudent) / (sizeof(int) * 3);
	float autumnb = 0;
	float percent = 0.0;
	for (int i = 0; i < 7; i++) {
		if (myStudent[i].month > 8 && myStudent[i].month < 12) {
			autumnb++;
		}
	}
	percent = (autumnb / size) * 100;
	std::cout << percent << "%";
	return 0;
}