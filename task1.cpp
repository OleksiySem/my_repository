
#include <iostream>
#include <math.h>

int main() {
    int n;
    

    std::cout << "enter  n: ";
    std::cin >> n;

    std::cout << "numbers (a, b, c), that satisfy  a^2 + b^2 = c^2\n";
  
    
    for (int a = 0; a <= n; ++a) 
        for (int b = 0; b <= n; ++b) 
            for (int c = 0; c <=n; ++c){ 
//		int x = sqrt(c);
  //  		int y = sqrt(a);
//		int z = sqrt(b);
		if ((c * c) == (a * a) + (b * b)) 	
			std::cout << "(" << a << ", " << b << ", " << c << ")\n";
		
        
	    }
    
    return 0;
}
