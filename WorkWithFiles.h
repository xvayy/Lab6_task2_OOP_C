#ifndef WORKWITHFILES_H
#define WORKWITHFILES_H

#include <fstream>
#include <string>
using namespace std;

template <typename T>
class WorkWithFiles {
    private:
        string filename;
        ofstream file;
        fstream out;
    public:
        WorkWithFiles(const string& filename){
            this->filename = filename;
            
        }

        ~WorkWithFiles() {
            if (file.is_open()) {
                file.close();
            }
        }

        bool open_file() {
            
            file.open("C:/Users/Yuliia/VSCode/Lab6_task2/"+filename, fstream::in | fstream::out | fstream::app);
            return file.is_open();
        }

        void close_file() {
            if (file.is_open()) {
                file.close();
            }
        }

        bool write_file(const T& data) {
            if (!file.is_open()) {
                return false;
            }
            file << data << endl;
            return true;
        }

        bool read_file(T& data) {
            if (!out.is_open()) {
                return false;
            }
            if (!(out >> data)) {
                return false;
            }
            return true;
        }
};

#endif