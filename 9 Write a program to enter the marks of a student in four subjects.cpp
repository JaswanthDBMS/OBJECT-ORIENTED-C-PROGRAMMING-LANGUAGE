#include <iostream>

int main() {
    int marks[5];
    int total = 0;
    float average, percentage;
    char grade;
    std::cout << "Please Enter the marks of five subjects:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter marks for subject " << (i + 1) << ": ";
        std::cin >> marks[i];
        total += marks[i];
    }

    average = static_cast<float>(total) / 5;
    percentage = (static_cast<float>(total) / 500) * 100;  

    if (percentage > 75) {
        grade = 'A'; 
    } else if (percentage >= 60) {
        grade = 'B';  
    } else if (percentage >= 50) {
        grade = 'C';  
    } else if (percentage >= 40) {
        grade = 'D';  
    } else {
        grade = 'E';  
    }
    std::cout << "Total Marks      = " << total << std::endl;
    std::cout << "Average Marks    = " << average << std::endl;
    std::cout << "Marks Percentage = " << percentage << std::endl;
    std::cout << "Grade            = " << grade << std::endl;

    return 0;
}

