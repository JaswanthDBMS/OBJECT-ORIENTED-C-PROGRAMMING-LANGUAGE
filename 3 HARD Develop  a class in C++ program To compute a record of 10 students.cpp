#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int regNo;
    float mark1, mark2, mark3;
    float average;
    char grade;
    void calculateAverageAndGrade() {
        average = (mark1 + mark2 + mark3) / 3.0;

        if (average > 90) grade = 'S';
        else if (average > 80) grade = 'A';
        else if (average > 70) grade = 'C';
        else if (average > 60) grade = 'D';
        else if (average > 50) grade = 'E';
        else grade = 'F';
    }

public:
    void input() {
        std::cout << "ENTER THE STUDENT NAME => ";
        std::cin.ignore(); 
        std::getline(std::cin, name);
        
        std::cout << "ENTER THE REGISTER NUMBER => ";
        std::cin >> regNo;
        
        std::cout << "MARK 1 => ";
        std::cin >> mark1;
        
        std::cout << "MARK 2 => ";
        std::cin >> mark2;
        
        std::cout << "MARK 3 => ";
        std::cin >> mark3;
        
        calculateAverageAndGrade();
    }
    void display() const {
        std::cout << "AVERAGE SCORE IS => " << average << std::endl;
        std::cout << "GRADE: " << grade << std::endl;
    }
};

int main() {
    const int numStudents = 10;
    Student students[numStudents];

    int numEntries;
    std::cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    std::cin >> numEntries;

    if (numEntries > numStudents) {
        std::cout << "Number of entries exceeds the limit of 10." << std::endl;
        return 1;
    }

    for (int i = 0; i < numEntries; ++i) {
        std::cout << "Entry " << (i + 1) << std::endl;
        students[i].input();
        students[i].display();
    }

    return 0;
}

