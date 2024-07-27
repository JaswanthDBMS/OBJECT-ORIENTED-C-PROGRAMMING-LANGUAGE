#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    vector< vector<int> > data;

public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c)) {}

    void insertElement(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            data[r][c] = value;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    int retrieveElement(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return data[r][c];
        } else {
            cout << "Invalid index!" << endl;
            return -1;
        }
    }

    void display() const {
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[i].size(); ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    Matrix matrix(rows, cols);

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> value;
            matrix.insertElement(i, j, value);
        }
    }

    cout << "Matrix:" << endl;
    matrix.display();

    int r, c;
    cout << "Enter the row and column of the element to retrieve: ";
    cin >> r >> c;
    int element = matrix.retrieveElement(r, c);
    if (element != -1) {
        cout << "Element at [" << r << "][" << c << "]: " << element << endl;
    }

    return 0;
}

