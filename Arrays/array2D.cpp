// #include <iostream>
// using namespace std;
// int main(){
//     int n =5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//       cout << j << " ";
//     }
//     cout << endl;
 
// }
//    return 0;
// }

//------------arrays 2-dimensional----------------- 
/* #include <iostream>
using namespace std;

int main() {

    // Declaring 2D array
    int arr[4][4];

    // Initialize 2D array using loop
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = i + j;
        }
    }

    // Printing the element of 2D array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
    */

#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    int size = 3;
    for(int i=0; i < size; i++ ){
        for(int j=0; j<size; j++){
   
        cout << "Enter the elements in array: ";
        cin >> arr[i][j];
        }
          
    }
     for(int i=0; i < size; i++ ){
        for(int j=0; j<size; j++){
            cout << arr[i][j] << " " ;
        } 
     
        cout << endl;
    }
    
    return 0;
}


