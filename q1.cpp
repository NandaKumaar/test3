#include <iostream>
using namespace std;

int main() {
    int totalDays;
    
        cout << "Enter the number of days: ";
        cin >> totalDays;
    
    // Calculate weeks and remaining days
    int weeks = totalDays / 7;
    int remainingDays = totalDays % 7;
    
    // Display the result
    cout << "\n" << totalDays << " days is equal to:" << endl;
    cout << weeks << " weeks and " << remainingDays << " days" << endl;
    
    return 0;
}

