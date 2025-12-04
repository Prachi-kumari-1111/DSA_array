#include <iostream>
using namespace std;
 void printArray(int arr[], int size){


cout << "Printing the array" << endl;
//print the array
for (int i=0; i<size; i++){
    cout << arr[i] << " ";
}
cout << "Printing DONE" << endl;
 }



int main (){
    int number [15];
    //accesimg an array
    cout << "value at 15 index" << number[15] << endl; 

    // cout << endl << "value at 20 index" <<number[20] << endl;
    
    //initializing an array
    int second [3] = {5,7,11};
    //accesing an array
    cout << "value at 2 index" << second[2] << endl;

    int third [15] ={2,7};
    int n = 15;
    printArray(third, 15);
   

    // initilizing all locations with 0
    int forth [10] = {0};
    n = 10;
    printArray(forth, 15);



     // initilizing all locations with 1 [not possible with below line]
    int fifth [10] = {1};
    n = 10;
    printArray(fifth, 15);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout << "sizeof fifth array is " << fifthsize << endl;

    
    cout<< endl <<  "Everything is fine" << endl << endl;


 return 0;
   
}
