#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open a file named "data.txt" for writing
    ofstream file("data.txt");

    // Check if the file is opened successfully
    if (!file.is_open()) {
        cout << "Failed to open file!" << endl;
        return 1;
    }

    // Write data to the file
    file << "This is a sample text.\n";
    file << "Writing data to a file.\n";
    file << "End of file.";

    // Close the file
    file.close();

    cout << "Data has been written to the file successfully." << endl;

    return 0;
}
