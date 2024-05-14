#include <iostream>
#include <stdexcept>
#include <string>

class Person {
private:
    std::string personName;
    int personID;

public:
    Person() : personName(""), personID(0) {}

    void setName(const std::string& name) {
        if (name.empty()) {
            throw std::invalid_argument("Name cannot be empty!");
        }
        personName = name;
    }

    void setID(int id) {
        personID = id;
    }

    void printDetails() {
        std::cout << "Name: " << personName << ", ID: " << personID << std::endl;
    }
};

int main() {
    Person person;

    try {
        person.setName("John Doe"); // Valid name
        person.setID(1001);
        person.printDetails();
        
        person.setName(""); // Invalid name
        person.printDetails(); // This won't be reached because of the exception
    } catch (std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
