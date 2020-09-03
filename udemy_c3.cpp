#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string input_string {};
    cout << "Enter your input for pyramid: ";
    getline(cin, input_string);
    string sub_string {};
    string temp {};
    string rev_string {};
    
    for (int i = input_string.length()-1; i >= 0; i--){
        string space_string (i, ' ');
        sub_string = {input_string, 0, input_string.length()-i};
        temp = space_string + sub_string;
        cout << temp;
    
        int n = temp.length()-1;
        for (int j = n-1; j >= 0; j--){
            rev_string += temp.at(j);
        }
        cout << rev_string << endl;
        rev_string = {};
    }
    return 0;
}