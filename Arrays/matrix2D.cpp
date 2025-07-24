//Static 2D array

#include <iostream>
using namespace std;
int main(){
    int arr[3][4]; //3 rows and 4 columns
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
             //arr[i][j] = i + j; //assign values to the array
            cin >> arr[i][j];
        }
    }
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            arr[i][j] = i + j; //assign values to the array
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
