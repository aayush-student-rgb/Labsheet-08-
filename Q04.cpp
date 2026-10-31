#include <iostream>
#include <string>
using namespace std;

void copyString(string &destination, const string &source) {
    destination = source;
}

int main() {
    string source, destination;

    cout << "Enter a string: ";
    getline(cin, source);

    copyString(destination, source);

    cout << "Copied string: " << destination;

    return 0;
}