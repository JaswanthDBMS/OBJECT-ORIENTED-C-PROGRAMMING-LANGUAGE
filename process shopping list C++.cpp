#include <iostream>
#include <vector>
#include <iomanip>

class ShoppingItem {
public:
    int codeNo;
    float price;

    ShoppingItem(int code, float pr) : codeNo(code), price(pr) {}
};

class ShoppingList {
private:
    std::vector<ShoppingItem> items;

public:
    void addItem(int code, float price) {
        items.push_back(ShoppingItem(code, price));
        std::cout << "Item added: Code = " << code << ", Price = $" << price << std::endl;
    }

    void deleteItem(int code) {
        for (std::vector<ShoppingItem>::iterator it = items.begin(); it != items.end(); ++it) {
            if (it->codeNo == code) {
                std::cout << "Item deleted: Code = " << code << ", Price = $" << it->price << std::endl;
                items.erase(it); 
                return;
            }
        }
        std::cout << "Item with Code " << code << " not found." << std::endl;
    }

    void printTotalValue() const {
        float totalValue = 0;
        for (std::vector<ShoppingItem>::const_iterator it = items.begin(); it != items.end(); ++it) {
            totalValue += it->price;
        }
        std::cout << "Total value of order: $" << std::fixed << std::setprecision(2) << totalValue << std::endl;
    }

    void printItems() const {
        std::cout << "Current Shopping List:" << std::endl;
        for (std::vector<ShoppingItem>::const_iterator it = items.begin(); it != items.end(); ++it) {
            std::cout << "Code: " << it->codeNo << ", Price: $" << std::fixed << std::setprecision(2) << it->price << std::endl;
        }
    }
};

int main() {
    ShoppingList shoppingList;

    shoppingList.addItem(101, 25.50);
    shoppingList.addItem(102, 15.75);
    shoppingList.addItem(103, 30.00);

    shoppingList.printItems();

    shoppingList.deleteItem(102);

    shoppingList.printItems();

    shoppingList.printTotalValue();

    return 0;
}

