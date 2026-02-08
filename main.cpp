#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) return false;
    return true;
}

void averageNumbers() {
    int n;
    double sum = 0;

    cout << "How many numbers do you want to average? ";
    cin >> n;

    double* arr = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average: " << sum / n << endl;
    delete[] arr;
}

void sortNumbers() {
    int n, choice;
    cout << "How many numbers do you want to sort? ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Choose sorting order:\n1. Ascending\n2. Descending\nYour choice: ";
    cin >> choice;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((choice == 1 && arr[i] > arr[j]) ||
                (choice == 2 && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted numbers: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
}

int main() {
    int choice;
    double a, b;
    int n, base, exp;

    do {
        cout << "\n===== ADVANCED CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Power\n";
        cout << "7. Factorial\n";
        cout << "8. Prime Check\n";
        cout << "9. Average of Numbers\n";
        cout << "10. Sort Numbers\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << "Result: " << a + b << endl;
            break;

        case 2:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << "Result: " << a - b << endl;
            break;

        case 3:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << "Result: " << a * b << endl;
            break;

        case 4:
            cout << "Enter numerator: ";
            cin >> a;
            cout << "Enter denominator: ";
            cin >> b;
            if (b != 0) cout << "Result: " << a / b << endl;
            else cout << "Error: Division by zero\n";
            break;

        case 5:
            cout << "Enter first integer: ";
            cin >> n;
            cout << "Enter second integer: ";
            cin >> base;
            if (base != 0) cout << "Result: " << n % base << endl;
            else cout << "Error: Division by zero\n";
            break;

        case 6:
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter exponent: ";
            cin >> exp;
            cout << "Result: " << power(base, exp) << endl;
            break;

        case 7:
            cout << "Enter a number: ";
            cin >> n;
            if (n >= 0) cout << "Result: " << factorial(n) << endl;
            else cout << "Error: Negative number\n";
            break;

        case 8:
            cout << "Enter a number to check prime: ";
            cin >> n;
            if (isPrime(n)) cout << "Prime Number\n";
            else cout << "Not Prime\n";
            break;

        case 9:
            averageNumbers();
            break;

        case 10:
            sortNumbers();
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice, try again.\n";
        }

    } while (choice != 0);

    return 0;
}
