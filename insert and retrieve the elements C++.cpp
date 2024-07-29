#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int> > mat; 
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, std::vector<int>(cols, 0)); 
    }

    void insertElement(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            mat[r][c] = value;
        } else {
            std::cout << "Invalid indices." << std::endl;
        }
    }

    int retrieveElement(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return mat[r][c];
        } else {
            std::cout << "Invalid indices." << std::endl;
            return -1; 
        }
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int rows = 3, cols = 3;

    Matrix matrix(rows, cols);

    matrix.insertElement(0, 0, 1);
    matrix.insertElement(0, 1, 2);
    matrix.insertElement(0, 2, 3);
    matrix.insertElement(1, 0, 4);
    matrix.insertElement(1, 1, 5);
    matrix.insertElement(1, 2, 6);
    matrix.insertElement(2, 0, 7);
    matrix.insertElement(2, 1, 8);
    matrix.insertElement(2, 2, 9);

    std::cout << "Matrix:" << std::endl;
    matrix.display();

    std::cout << "Element at (0, 1): " << matrix.retrieveElement(0, 1) << std::endl;
    std::cout << "Element at (2, 2): " << matrix.retrieveElement(2, 2) << std::endl;

    return 0;
}

