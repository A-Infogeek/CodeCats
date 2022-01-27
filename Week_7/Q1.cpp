 #include<iostream>
 using namespace std;

 int main(){
     int row,col;
     
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    cout<<"Enter the number of columns: "<<endl;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Element at array["<<i<<"]["<<j<<"] : "<<arr[i][j]<<endl;
        }
    }
     return 0;
 }