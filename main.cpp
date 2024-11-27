#include <iostream>
#include "WorkWithFiles.h"

using namespace std;

int main() {
    // Working with int data type
    WorkWithFiles<int> intFileHandler("intData.txt");

    if (intFileHandler.open_file()) {
        intFileHandler.write_file(42);
        int data;
        intFileHandler.close_file();
        intFileHandler.read_file(data);
        cout << "Read int data: " << data << endl;
        intFileHandler.close_file();
    } else {
        cerr << "Failed to open int file." << endl;
    }

    // Working with double data type
    WorkWithFiles<double> doubleFileHandler("doubleData.txt");

    if (doubleFileHandler.open_file()) {
        doubleFileHandler.write_file(3.14);
        double data;
        doubleFileHandler.read_file(data);
        cout << "Read double data: " << data << endl;
        doubleFileHandler.close_file();
    } else {
        cerr << "Failed to open double file." << endl;
    }

    // Working with string data type
    WorkWithFiles<string> stringFileHandler("stringData.txt");

    if (stringFileHandler.open_file()) {
        stringFileHandler.write_file("Hello, World!");
        string data;
        stringFileHandler.read_file(data);
        cout << "Read string data: " << data << endl;
        stringFileHandler.close_file();
    } else {
        cerr << "Failed to open string file." << endl;
    }

    return 0;
}