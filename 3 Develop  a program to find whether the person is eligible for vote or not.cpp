#include <iostream>
int getperson() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    return age;
}
void checkVotingEligibility(int age) {
    const int votingAge = 18;
    if (age >= votingAge) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        int yearsLeft = votingAge - age;
        std::cout << "You are allowed to vote after " << yearsLeft << " years." << std::endl;
    }
}

int main() {
    int age = getperson();
    checkVotingEligibility(age);
    return 0;
}

