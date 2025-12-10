#include <iostream>
using namespace std;

// Selection Sort

// void selection_sort(int arr[], int n)
// {
//     for (int i = 0; i <= n - 2; i++)
//     {
//         int min = i;
//         for (int j = i; j <= n - 1; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     selection_sort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// output
//  5
//  2
//  7
//  3
//  1
//  9
//  1 2 3 7 9
// time complexity = O(n^2) for all cases



// Bubble Sort
// void bubble_sort(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = 0; j <= i-1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     bubble_sort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }
// Best Case TC is O(N)
// Worst and Avg Case TC is O(N^2)



// Insertion sort
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j]= temp;

            j--;
        }  
    }    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
