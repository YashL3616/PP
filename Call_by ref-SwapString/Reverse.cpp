#include<iostream>
using namespace std;

// Function to reverse a string
void reverse_str(string &a)
{
    // Initialize two pointers, 'l' and 'r', pointing to the start and end of the string
    int l = 0, r = a.length() - 1;

    // Iterate until the left pointer is less than the right pointer
    while (l < r)
    {
        // Swap the characters at positions 'l' and 'r'
        swap(a[l], a[r]);

        // Move the left pointer to the right
        l += 1;

        // Move the right pointer to the left
        r -= 1;
    }
}

// Main function
int main()
{
    // Declare a string variable to store the input
    string a;
cout<<"ENter string";
    // Take input from the user
    cin >> a;

    // Call the function to reverse the string
    reverse_str(a);

    // Print the reversed string
    cout << "Reverse string is = " << a << endl;

    // Return 0 to indicate successful execution
    return 0;
}
