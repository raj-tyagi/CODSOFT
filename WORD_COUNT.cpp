/*
Develop a program that counts the number of words in a given
text file. Prompt the user to enter the file name and display the
total word count.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Function to create a file, write to it, and close it
void createAndWriteToFile(const string& fileName) {
    ofstream outputFile(fileName);

    if (!outputFile.is_open()) {
        cout << "Error: Unable to create or open the file \"" << fileName << "\"." << endl;
        return;
    }

    cout << "Enter text to write to the file (type 'exit' on a new line to finish):\n";
    string inputLine;
    while (true) {
        getline(cin, inputLine);
        if (inputLine == "exit") {
            break;
        }
        outputFile << inputLine << endl;
    }

    outputFile.close();
    cout << "File \"" << fileName << "\" created and written successfully." << endl;
}

int main() {
    string fileName;

    cout << "Enter the name of the text file to create and write to: ";
    cin >> fileName;

    createAndWriteToFile(fileName);

    ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the file \"" << fileName << "\"." << endl;
        return 1; // Exit with an error status
    }

    string line;
    int wordCount = 0;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        string word;

        while (ss >> word) {
            wordCount++;
        }
    }

    inputFile.close();

    cout << "Total word count in the file: " << wordCount << endl;

    return 0;
}
