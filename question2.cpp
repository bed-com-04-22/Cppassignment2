#include <iostream>
 
 using namespace std;

 int main(){
    int rows;
    int cols;

    cout << "Enter the number of rows(max 3): " << endl;
    cin >> rows;
    cout << "Enter the number of cols(max 3): " << endl;
    cin >> cols;

    if (rows > 3 || cols > 3){
        cout << "Dimensions must not exceed 3. Exiting." << endl;
        return 1;
    }

    double** array = new double*[rows];
    for (int i = 0; i < rows; i++){
        array[i] = new double[cols];
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            array[i][j] = i * j;
        }
    }

     for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
           cout << array[i][j] << " ";
        }
        cout << endl;
     }   

     return 0;           
 }