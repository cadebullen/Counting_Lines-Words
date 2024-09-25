#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std; 

int main() {
    string fileName;

    cout << "Enter the name of a file to read from: " << endl;
    cin >> fileName;

    ifstream file(fileName);

    if (!file.is_open()){
        cout << "File cannot be opened " << fileName << endl;
        exit (1);
    }

    int totalLines = 0;
    int nonCommentedLines = 0;
    int maxLineLength = 0;
    int totalWords = 0;
    int maxWordLength = 0;

    string maxLine = "";
    string maxWord = "";
    string line;


    while (getline(file, line)){
        totalLines++;

        if(line[0] == '#' || (line.size() >= 2 && line.substr(0, 2) == "//")) {
            continue;
        }
        
        nonCommentedLines++;

        if (line.length() > maxLineLength){
            maxLineLength = line.length();
            maxLine = line;
        }

        istringstream iss(line);
        string word;

        while (iss >> word){
            totalWords++;
            if (word.length() > maxWordLength){
                maxWordLength = word.length();
                maxWord = word;
            }
        }

    }
    
    file.close();

    cout << "Total Number of Lines: " << totalLines << endl;
    cout << "Number of non-commented lines: " << nonCommentedLines << endl;
    cout << "Line of Maximum Length: \"" << maxLine << "\"" << endl;
    cout << "Number of Words: " << totalWords << endl;
    cout << "Word of Maximum Length: \"" << maxWord << "\"" << endl;
    
    file.close();

    return 0;

}