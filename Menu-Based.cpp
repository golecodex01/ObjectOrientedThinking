/******************************************************************************
      Mohit Gole 
*******************************************************************************/
#include <iostream>
#define size 10
using namespace std;

int data[size];

int getMinimum() {
    int min = data[0];
    for (int i = 0; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

int getMaximum() {
    int max = data[0];
    for (int i = 0; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

int getSum() {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum;
}

float getAverage() {
    int sum = getSum();
    return (float)sum / size;   // float return
}

void printArray() {
    cout << "Your Entered Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void displayMenu() {
  
    cout << "1. Get Minimum" << endl;
    cout << "2. Get Maximum" << endl;
    cout << "3. Summation" << endl;
    cout << "4. Average" << endl;
    cout << "5. Print Array" << endl;
    cout << "6. Exit" << endl;
    cout << "========================" << endl;
}

int main() {
    int ch, choice;

    cout << "Enter " << size << " Array Elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }

    do {
        displayMenu();
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1: 
				int min = getMinimum();
                cout << "Minimum is: " << min << endl;
                break;
            
            case 2: 
                int max = getMaximum();
                cout << "Maximum is: " << max << endl;
                break;
            case 3: 
                int sum = getSum();
                cout << "Summation is: " << sum << endl;
                break;
            
            case 4: 
			               float average = getAverage();
                cout << "Average is: " << average << endl;
                break;
            
            case 5: 
                printArray();
                break;
            
			case 6:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Please enter Correct Choice" << endl;
        }

        cout << "To Continue press 1 \nTo Exit press 0: ";
        cin >> ch;
    } while (ch != 0);

    return 0;
}

