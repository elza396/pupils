#include <iostream>
using namespace std;

string toLowerCase(string str) {
    for(int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
    string line;

    cout << "Enter string:" << "\t";
    getline(cin, line);

    line = toLowerCase(line);

    cout << "Your string:  " << line << endl;

    string word;

    cout << endl << "What word do you want to find?" << "\t";
    getline(cin, word);

    word = toLowerCase(word);

    int pos;
    int count = -1;
    int offset = 0;

    do {
        pos = line.find(word, offset);
        offset = pos + word.length();
        count++;
    } while (pos != -1);

    cout << endl << "\"" << word << "\"" << " occurs " << count << " times.";
    return 0;
}