#include "text_output.h"

using std::ofstream;  
using std::ifstream;  
using std::cout;
using std::string;

void output_data_to_file() {
    cout<<"Create file object\n";
    ofstream myfile;

    cout<<"Open the file\n";
    myfile.open("example.dat");

    cout<<"write to file\n";
    myfile<<"Write line to file\n";
    myfile<<"Write another line to file\n";
    myfile<<"Write another line to file\n";

    cout<<"close the file\n";
    myfile.close();
};

void read_data_from_file() {
    cout<<"open the file\n";
    ifstream myfile;
    myfile.open("example.dat");

    if (myfile.is_open()) {
        cout<<"read from file\n";
        string line;
        while(getline(myfile, line)) {
            cout<<line<<"\n";
        }
        cout<<"close the file\n";
        myfile.close();
    } else {
        cout<<"Unable to open the file\n";
    }
};