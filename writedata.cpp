#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("data.txt");

    if (!file.is_open()) {
        cout << "Failed to open file!" << endl;
        return 1;
    }
    file << "This is a sample text.\n";
    file << "Writing data to a file.\n";
    file << "End of file.";
    file.close();

    cout << "Data has been written to the file successfully." << endl;

    return 0;
}
