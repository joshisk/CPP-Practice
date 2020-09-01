#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;


int main(){
    
    vector<int> list {};
    string menu ("P - Print numbers\nA - Display the sum of the list numbers\nM - Display the mean of the list numbers\nS - Display the smallest number\nL - Display the largest number\nO - Display number of occurences of list number\nC - Clear the list\nQ - Quit");
    
    char input{};
    unsigned int list_input {}; 
    double sum{};
    
    do{
        cout << menu << endl;
        cout << "\nEnter your selection from the menu: " << endl;
        cin >> input;
        
        switch (input){
            case 'p':
            case 'P':
            {
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
                break;
            }
            case 'a':
            case 'A':
            {
                cout << "\nAdd an element into the list: ";
                cin >> list_input;
                list.push_back(list_input);
                cout << "\n" << list_input << " added into the list\n" << endl; 
                break;
            }
            case 'm':
            case 'M':
            {
                if (list.size() != 0){
                    double avg{};
                    cout << "\nMean of the elements in the list: ";
                    for (auto value : list){
                        sum = sum + value;
                    }
                    avg = sum / list.size();
                    cout << fixed << setprecision(2) << avg << "\n" << endl;
                }
                else{
                    cout << "\nThere is no mean of the elements because the list is empty\n" << endl;
                }
                break;
            }
            case 's':
            case 'S':
            {
                if (list.size() != 0){
                    size_t temp = list.at(0);
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
                break;
            }
            case 'l':
            case 'L':
            {
                if(list.size() != 0){
                    size_t temp = list.at(0);
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
                break;
            }
            case 'o':
            case 'O':
            {
                size_t occurence_input {};
                cout << "\nInput the number to search from the list: ";
                cin >> occurence_input;
                int count {};
                for (auto value : list){
                    if (occurence_input == value){
                        count++;
                    }
                }
                cout << "\nThe number of occurences of the number " << occurence_input << " in the list are " << count << endl;
                break;
            }
            case 'c':
            case 'C':
            {
                list.clear();
                cout << "\nThe list has been cleared. Select 'P' from the menu to check.\n" << endl;
                break;
            }
            case 'q':
            case 'Q':
            {
                cout << "\nGoodbye!" << endl;
                break;
            }
            default:
            {
                cout << "\nUnknown selection, please try again\n" << endl;
            }
            
        }
    } while (input != 'q' && input != 'Q');
    
    return 0;
}
