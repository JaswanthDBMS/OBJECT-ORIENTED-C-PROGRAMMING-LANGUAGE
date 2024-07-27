#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    std::vector<std::vector<int> > data;
    int rows, cols;

public:

    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows);
        for (int i = 0; i < rows; ++i) {
            data[i].resize(cols, 0);
        }
    }

    void set_value(int r, int c, int value) {
        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            throw std::out_of_range("Index out of bounds");
        }
        data[r][c] = value;
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrix dimensions do not match for multiplication");
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {

    Matrix m1(2, 3);
    Matrix m2(3, 2);

    m1.set_value(0, 0, 1);
    m1.set_value(0, 1, 2);
    m1.set_value(0, 2, 3);
    m1.set_value(1, 0, 4);
    m1.set_value(1, 1, 5);
    m1.set_value(1, 2, 6);

    m2.set_value(0, 0, 7);
    m2.set_value(0, 1, 8);
    m2.set_value(1, 0, 9);
    m2.set_value(1, 1, 10);
    m2.set_value(2, 0, 11);
    m2.set_value(2, 1, 12);

    Matrix m3 = m1 * m2;

    std::cout << "Matrix m1:" << std::endl;
    m1.display();

    std::cout << "Matrix m2:" << std::endl;
    m2.display();

    std::cout << "Matrix m1 * m2:" << std::endl;
    m3.display();

    return 0;
}

