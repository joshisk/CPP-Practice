#include <iostream>

using namespace std;

int *apply_all(const int *const array1, size_t array1_size, const int *const array2, size_t array2_size);
void print(const int *const arr, size_t arr_size);

int main(){
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1, array1_size);
    
    cout << "Array 2: ";
    print(array2, array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size{array1_size * array2_size};
    
    cout << "Result :";
    print(results, results_size);
    
    delete [] results;
    cout << endl;
    
    return 0;
}

int *apply_all(const int *const array1, size_t array1_size, const int *const array2, size_t array2_size){
    int *dyn_arr {};
    dyn_arr = new int [array1_size * array2_size];
    int pos {0};
    for (size_t i {0}; i < array2_size; ++i){
        for (size_t j {0}; j < array1_size; ++j){
           dyn_arr[pos]  = array2[i] * array1[j];
           ++pos;
        }
    }
    return dyn_arr;
}

void print(const int *const arr, size_t arr_size){
    cout << "[ ";
    for (size_t i {0}; i < arr_size; ++i){
        cout << arr[i] << " ";
    }
    cout << "]\n";
}








