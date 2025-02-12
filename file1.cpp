#include <iostream>
#include <bits/stdc++.h>
#include <ctime>

int main() {
	std::srand( std::time(0) );
	int *v = new int[10];
	for (int i = 0; i < 10; i++)
		v[i] = std::rand()%101 - 50;
	for (int i = 0; i < 10; i++)
		std::cout << v[i] << "\t"; 
	std::cout << std::endl;
	for (int j = 0; j < 10; j++)
		for (int i = 0; i < 9; i++)
			if (v[i] > v[i+1]) {
				int g = v[i];
				v[i] = v[i+1];
				v[i+1] = g;
			}	
	for (int i = 0; i < 10; i++)
                std::cout << v[i] << "\t";
        std::cout << std::endl;

	return 0;

}

