#include <iostream>

void inputMatrix(int matrix[][100], int rows, int cols) {
    std::cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][100], int rows, int cols) {
    std::cout << "Resultant matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void multiplyMatrices(int firstMatrix[][100], int secondMatrix[][100], int resultMatrix[][100], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < col1; ++k) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int row1, col1, row2, col2;
    std::cout << "Enter the number of rows for the first matrix: ";
    std::cin >> row1;
    std::cout << "Enter the number of columns for the first matrix: ";
    std::cin >> col1;
    std::cout << "Enter the number of rows for the second matrix: ";
    std::cin >> row2;
    std::cout << "Enter the number of columns for the second matrix: ";
    std::cin >> col2;
    if (col1 != row2) {
        std::cerr << "Error: Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n";
        return 1;
    }
    int firstMatrix[100][100], secondMatrix[100][100], resultMatrix[100][100];
    std::cout << "Enter the first matrix:\n";
    inputMatrix(firstMatrix, row1, col1);
    std::cout << "Enter the second matrix:\n";
    inputMatrix(secondMatrix, row2, col2);
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, row1, col1, row2, col2);
    displayMatrix(resultMatrix, row1, col2);
    return 0;
}

