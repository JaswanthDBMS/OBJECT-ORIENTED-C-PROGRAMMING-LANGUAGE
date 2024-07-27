#include <iostream>
class Box {
public:
    int length; 

private:
    int width; 

public:
    void setWidth(int w) {
        width = w;
    }
    int getWidth() const {
        return width;
    }
};

int main() {
    Box myBox;
    std::cout << "Enter the Length of box: ";
    std::cin >> myBox.length;
    int width;
    std::cout << "Enter the Width of box: ";
    std::cin >> width;
    myBox.setWidth(width);
    std::cout << "Length of box: " << myBox.length << std::endl;
    std::cout << "Width of box: " << myBox.getWidth() << std::endl;
    return 0;
}

