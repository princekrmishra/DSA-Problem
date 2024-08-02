#include <iostream>
using namespace std;

void findFrequencies(int arr[], int n)
{
    bool counted[n] = {false}; 
    for (int i = 0; i < n; i++)
    {
        if (!counted[i])
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    counted[j] = true; 
                }
            }
            cout << "Frequency of element " << arr[i] << " -> " << count << " times" << endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n; 

    int arr[n];
    cout << "Enter the elements of an array: "<<endl;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    findFrequencies(arr, n);
    return 0;
}
