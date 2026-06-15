#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

void printName(string name)
{
    cout << "hey " << name << endl;
}

int main()
{
    int n= 5;
    int arr[n];

  for(int i= 1; i<=n; i=i+1){
    cin >> arr[i];

  }
  for(int i= 1; i<=n; i=i+1){
    cout << arr[i] << endl ;

  }

    return 0;
}
