#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234 56789"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr*9876_54321"};
    string secret_msg {"The answer to the universe is 42"};
    string encrypted_msg {};
    string decrypted_msg {};
    
    cout << "The input message is: " << secret_msg << endl;
    for (char idx : secret_msg){
        size_t pos_alphabet = alphabet.find(idx);
        //cout << pos_alphabet << " " << alphabet.at(pos_alphabet) << endl;
        encrypted_msg = encrypted_msg + key.at(pos_alphabet);
    }
    cout << "\nEncrypting.....\n" << endl;
    cout << "The encrypted message is: " << encrypted_msg << endl;
    for (char idx : encrypted_msg){
        size_t pos_key = key.find(idx);
        decrypted_msg = decrypted_msg + alphabet.at(pos_key);
    }
    cout << "\nDecrypting.....\n" << endl;
    cout << "The decrypted message is: " << decrypted_msg << endl;
    return 0;
}