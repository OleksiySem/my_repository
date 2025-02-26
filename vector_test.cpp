#include <iostream>
struct vector
{
	int size;
	int capacity;
	vector(): size(5), capacity(10)
	{
		std::cout << "vector()\n";
		//size = 20;
		//capacity = 30;
	
	}
	
	vector(unsigned size_): size(size_), capacity(size)
	{
		std::cout << "vector(unsigned)" << std::endl;

	}
	
	~vector() 
	{
		std::cout << "~vector" << std::endl;
	}

	void print()
	{
		std::cout << size << std::endl;
	        std::cout << capacity << std::endl;
	}
};


int main() {
	vector v1;
	v1.size = 10;
	vector v2(1024);
	v1.print();
	v2.print();

return 0;
}
