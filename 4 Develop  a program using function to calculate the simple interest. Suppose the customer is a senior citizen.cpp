#include <iostream>
double calculateSimpleInterest(double principal, int years, bool isSeniorCitizen) {
    double rateOfInterest = isSeniorCitizen ? 12.0 : 10.0; // 12% for senior citizens, 10% for others
    double interest = (principal * rateOfInterest * years) / 100;
    return interest;
}

int main() {
    double principal;
    int years;
    char seniorCitizenInput;
    bool isSeniorCitizen;
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;
    std::cout << "Enter the number of years: ";
    std::cin >> years;
    std::cout << "Is the customer a senior citizen (y/n): ";
    std::cin >> seniorCitizenInput;
    if (seniorCitizenInput == 'y' || seniorCitizenInput == 'Y') {
        isSeniorCitizen = true;
    } else {
        isSeniorCitizen = false;
    }
    double interest = calculateSimpleInterest(principal, years, isSeniorCitizen);
    std::cout << "Interest: " << interest << std::endl;

    return 0;
}

