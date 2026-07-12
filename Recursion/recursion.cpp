#include <iostream>
using namespace std;


// sum of first N number 

int sum(int n){
    if(n== 0){
        return 0;
    }
    return n+ sum(n-1);
}


// Factorial of N number 

int factorial(int n){
    if(n== 0){
        return 1;
    }
    return n * factorial(n-1);
}


// Reverse an array 

void  reverseArray(int i ,int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1 , arr, n);
    


}


bool checkPalindromeString( int i , string &str){

    if (i>= str.size()/2) return true;

    if(str[i] != str[str.size()-i-1]){
        return false ;
    }
    return checkPalindromeString(i+1, str);

  
}

int main(){

   

    // int n;
    // cin>> n ;
    // int arr[n];

    // for(int i=0; i<n; i++)
    // {
    //     cin >> arr[i];
    // }

    // reverseArray(0, arr, n);

    // for (int i =0; i<n ; i++) cout << arr[i] << " ";

    string str = "namahjk";
    cout << checkPalindromeString(0,str);
    

    // cout << factorial(n);

    

    return 0;
}
