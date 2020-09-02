#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234 56789<>!+-=."};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr*9876_54321><~-+.="};
    string secret_msg {};
    string encrypted_msg {};
    string decrypted_msg {};
    
    cout << "Enter your secret message: ";
    getline(cin, secret_msg);
    
    for (char idx : secret_msg){
        size_t pos_alphabet = alphabet.find(idx);
        if (pos_alphabet != string::npos){
            encrypted_msg += key.at(pos_alphabet);
        }
        else{
            encrypted_msg += idx;
        }
    }
    cout << "\nEncrypting.....\n" << endl;
    cout << "The encrypted message is: " << encrypted_msg << endl;
    for (char idx : encrypted_msg){
        size_t pos_key = key.find(idx);
        if (pos_key != string::npos){
            decrypted_msg += alphabet.at(pos_key);
        }
        else{
            decrypted_msg += idx;
        }
    }
    cout << "\nDecrypting.....\n" << endl;
    cout << "The decrypted message is: " << decrypted_msg << endl;
    return 0;
}
