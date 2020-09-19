#include <iostream>
#include <string>

using namespace std;

int main() {

    string userString; // will hold initial user input
    int userNumber = 723234; // this will be used if the user has an integer in their input (random int to reduce likelihood of user choosing it and bugging)

    cout << "Type something in: "; // ask user for any single word or number input
    cin >> userString; // store user input in the given variable
    
    try{
        int testNum = std::stoi(userString); // try to parse some integer from the user's string
        if(to_string(userNumber).length() == userString.length()){
            userNumber = testNum;
        }
    }catch(...){}

    // if userNumber is still 723234, the input was just some string
    // else it is the integer that was parsed from their string, and it is the same length as their string
    
    return 0;
}
