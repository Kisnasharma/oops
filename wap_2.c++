// Write a program that reads in the size of the side of a square and then prints a hollow square of that size
//out of asterisks and blanks. Your program should work for squares of all side sizes between 1 and 20.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    if(1>n || n>20) {
        cout<<"Num is greater than 20 or less than 1";
        return -1;
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == 0 || i == n-1 || j==0 || j==n-1) cout<<"* ";
                else cout<<"  ";
            }
            cout<<endl;
        }
    }

    return 0;
}