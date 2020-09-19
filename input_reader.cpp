#include <iostream>
#include <string>

using namespace std;

int main() {

    string userString; // will hold initial user input
    int userNumber = -1; // this will be used if the user has an integer in their input (random int to reduce likelihood of user choosing it and bugging)
    bool isInt = false;

    cout << "Type something in: "; // ask user for any single word or number input
    cin >> userString; // store user input in the given variable
    
    try{
        int testNum = std::stoi(userString); // try to parse some integer from the user's string
        if(to_string(userNumber).length() == userString.length()){
            userNumber = testNum;
            isInt = 1;
        }
    }catch(...){}

    // isInt will be true if the user's input was an integer
    if(isInt){
        enteredInteger(); // called if the input is an integer
    }else{
        enteredString(); // called if the input is a string
    }

    return 0;
}
