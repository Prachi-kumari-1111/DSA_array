#include <iostream>
using namespace std;

void update (int arr[], int n){


 cout << endl << "Inside the function" << endl;
 
 
//  "updating array's first element"   

arr[0] = 120;

// printing the array

for (int i=0;i<n; i++){
    cout << arr [i] << " ";
}


cout << endl;

}


int main(){
    int arr [3] = {1,2,3};
    update(arr,3); 

 // printing the array

cout << endl << "printing the main function" <<endl;
for (int i=0;i<3; i++){
    cout << arr [i] << " ";
}

cout << endl;

return 0;

}



// Update ka sidha mtlb ye hai ki aagar mai yha koi b value dalna add krna remove krna ya koi process krna 
// to iska matlb hai ki mai array ke orginal value ko hi change kr rahi hu..matlb uska address main array me
// changes la rha hai mai uska address de rhi hu wo update function ke through..  