#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// prints menu 
void PrintMenu();
// Enter selection from the menu
void EnterSelection(char input);
//Prints the list
void PrintList(const vector<int> &list);
// Adds a number into the list
void AddToList(vector<int> &list, int input_number);
// Calculates and prints the mean of the list numbers
double PrintMean(const vector<int> &list);
// Calculates and prints the smallest number of the list
size_t PrintSmallest(const vector<int> &list);
// Calculates and prints the largest number of the list
size_t PrintLargest(const vector<int> &list);
// Calculates and prints the number of occurences of an input number from the list
int PrintOccurrence(const vector<int> &list, size_t occurrence_input);
// Clears the list
void ClearList(vector<int> &list);
// Quits the program // base condition to end recursion function
void QuitProgram();

int main(){
    char input;
    PrintMenu();
    EnterSelection(input);
    return 0;
}

void PrintMenu(){
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add an element into the list" << endl;
    cout << "M - Display the mean of the list numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "O - Display the number of occurences of an input number in the list" << endl;
    cout << "C - Clear the list" << endl;
    cout<< "Q - Quit" << endl;
}

void EnterSelection(char input){
    static vector <int> list {};
    int input_number {};
    size_t occurrence_input {};
    cout << "\nEnter your selection from the menu: ";
    cin >> input;
    if (input == 'q' || input == toupper('q')){
        QuitProgram();
    }
    else{
        if (input == 'p' || input == toupper('p')){
            PrintList(list);
        }
        else if (input == 'a' || input == toupper('a')){
            AddToList(list, input_number);
        }
        else if (input == 'm' || input == toupper('a')){
            PrintMean(list);
        }
        else if (input == 's' || input == toupper('s')){
            PrintSmallest(list);
        }
        else if (input == 'l' || input == toupper('l')){
           PrintLargest(list);
        }
        else if (input == 'o' || input == toupper('o')){
            PrintOccurrence(list, occurrence_input);
        }
        else if (input == 'c' || input == toupper('c')){
            ClearList(list);
        }
        else{
            cout << "\n\nUnknown selection, please try again\n" << endl;
        }
        PrintMenu();
        EnterSelection(input);
    }
}

void PrintList(const vector<int> &list){
    if (list.size() != 0){
        cout << "\nPrinting the elements in the list: [ ";
        for (auto value : list){
            cout << value << " ";
        }
        cout << "]\n" << endl;
    }
    else {
        cout << "\n[] - The list is empty\n" << endl;
    }
}

void AddToList(vector<int> &list, int input_number){
    cout << "\nEnter a number to add to list: ";
    cin >> input_number;
    list.push_back(input_number);
}

double PrintMean(const vector<int> &list){
    double avg{};
    size_t sum{};
    if (list.size() != 0){
        cout << "\nMean of the elements in the list: ";
        for (auto value : list){
            sum = sum + value;
        }
        avg = static_cast <double> (sum) / list.size();
        cout << fixed << setprecision(2) << avg << "\n" << endl;
    }
    else{
        cout << "\nThere is no mean of the elements because the list is empty\n" << endl;
    }
     return avg;
}

size_t PrintSmallest(const vector<int> &list){
    size_t temp = list.at(0);
    if (list.size() != 0){
        for (auto value : list){
            if (value < temp){
                temp = value;
            }
        }
        cout << "\nThe smallest element in the list is: " << temp << "\n" << endl;
    }
    else{
        cout << "\nThere is no smallest element because the list is empty\n" << endl;
    }
    return temp;
}

size_t PrintLargest(const vector<int> &list){
    size_t temp = list.at(0);
    if(list.size() != 0){
        for (auto value : list){
            if (value > temp){
                temp = value;
            }
        }
        cout << "\nThe largest element in the list is: " << temp << "\n" << endl;
    }
    else{
        cout << "\nThere is no largest element because the list is empty\n" << endl;
    }
    return temp;
}

int PrintOccurrence(const vector<int> &list, size_t occurrence_input){
    cout << "\nInput the number to search from the list: ";
    cin >> occurrence_input;
    int count {};
    for (auto value : list){
        if (occurrence_input == value){
            count++;
        }
    }
    cout << "\nThe number of occurrences of the number " << occurrence_input << " in the list are " << count << endl;
    return count;
}

void ClearList(vector<int> &list){
        list.clear();
        cout << "\nThe list has been cleared. Select 'P' from the menu to check.\n" << endl;
}
               
void QuitProgram(){
        cout << "\nQuitting the program...\nExit" << endl;
        return;
}
