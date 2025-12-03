#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");

    fout << "101 Rahul 85\n";
    fout << "102 Aman 90\n";
    fout << "103 Neha 88\n";

    fout.close();
    cout << "Data written successfully.\n";

    return 0;
}