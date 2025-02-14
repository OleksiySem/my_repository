#include <iostream>
#include <vector>


int main() {
    int rows;
    int cols = 1;
    
    std::cout << "enter  rows: ";
    std::cin >> rows;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    
    for (int i = 0; i < rows; ++i) {
        
        matrix[i].resize(i+1);
    }

    matrix[0][0] = 1; matrix[1][0] = 1; matrix[1][1] = 1;
    

    for (int i = 1; i < rows; ++i) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (j == 0) {
                matrix[i][j] = 1;
            }
            else if (j < matrix[i-1].size()) {
                matrix[i][j] = matrix[i-1][j-1] + matrix[i - 1][j];
                
            }
            else {
                matrix[i][j] = 1;
            }
        }
    }
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
