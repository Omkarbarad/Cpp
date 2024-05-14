#include <iostream>
#include <stdexcept>

class Date {
private:
    int day, month, year;

public:
    Date() : day(1), month(1), year(2000) {}

    void setDate(int d, int m, int y) {
        if (d < 1 || d > 31 || m < 1 || m > 12) {
            throw std::invalid_argument("Invalid date!");
        }
        day = d;
        month = m;
        year = y;
    }

    void printDate() {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date myDate;

    try {
        myDate.setDate(31, 5, 2024); // Valid date
        myDate.printDate();
        
        myDate.setDate(32, 5, 2024); // Invalid date
        myDate.printDate(); // This won't be reached because of the exception
    } catch (std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
