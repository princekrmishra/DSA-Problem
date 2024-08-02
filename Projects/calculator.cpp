#include<iostream>
using namespace std;
void add(double arr[], int n,char choice){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout<<"ADDITION: "<<sum<<endl;
}

void sub(double arr[], int n, char choice){
    int subt = 0;
    for (int i = 0; i < n; i++)
    {
         arr[i] - arr[i+1];
    }
    cout << "SUBTRACION: " << subt << endl;
}
int main()
{
    cout<<"-----CALCULATOR-----"<<endl;

    double arr[20];
    int n;
    char choice;

    cout<<"Enter the number of terms you to do Operation on: "<<endl;
    cin>>n;

    cout<<"Enter the terms: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the Operation You Want to Perform: "<<endl;
    cout<<"For addition press +"<<endl;
    cout << "For subtraction press - " << endl;
    // cout << "For multiplication press " * "" << endl;
    // cout << "For division press " / "" << endl;
    // // cout << "For sqrt press " $ "" << endl;

    cin>>choice;

    switch (choice)
    {
    case '+':
        add(arr, n, choice);
        break;
    case '-':
        sub(arr, n, choice);
        break;
    
    default:
        break;
    }

    return 0;
}