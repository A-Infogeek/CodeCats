#include<iostream>
using namespace std;

int main(){
    int row1,col1,row2,col2;
    int i,j;
    cout<<"Enter the number of rows for matrix 1: "<<endl;
    cin>>row1;
    cout<<"Enter the number of columns for matrix 1: "<<endl;
    cin>>col1;
    int arr1[row1][col1];
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the number of rows for matrix 2: "<<endl;
    cin>>row2;
    cout<<"Enter the number of columns for matrix 2: "<<endl;
    cin>>col2;
    int arr2[row2][col2];
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }
    if(col1!=row2){
    cout<<"Invalid Input";
    exit(1);
    }
    int result[row1][col2],temp=0;
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
             for(int k=0;k<col1;k++){
                temp+=arr1[i][k]*arr2[k][j];
             }
             result[i][j]=temp;
             temp=0;
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<"Element at array["<<i<<"]["<<j<<"] : "<<result[i][j]<<endl;
        }
    }
    return 0;
}