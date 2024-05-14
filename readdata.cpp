#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream file("data.txt");
    if (!file.is_open()) {
        cout << "Failed to open file!" << endl;
        return 1;
    }

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    string line;
    while (getline(file, line)) {
        lineCount++;
        charCount += line.length(); 
        size_t pos = 0;
        while ((pos = line.find_first_not_of(' ', pos)) != string::npos) {
            pos = line.find_first_of(' ', pos);
            wordCount++;
        }
    }

    // Close the file
    file.close();

    // Print the results
    cout << "Number of characters: " << charCount << endl;
    cout << "Number of words: " << wordCount << endl;
    cout << "Number of lines: " << lineCount << endl;

    return 0;
}
