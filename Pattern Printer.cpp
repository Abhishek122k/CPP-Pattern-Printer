#include <iostream>
using namespace std;

void triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= n - i + 1) {
                cout << "* ";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void rectangle(int r, int c) {
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int x;

    cout << "Select a pattern:\n1-Triangle\n2-Rectangle\n3-Pyramid\n ";
    cin >> x;

    switch (x) {
    case 1:
        cout << "-----------Triangle Pattern-----------" << endl;
        int n;
        cout << "Number of rows: ";
        cin >> n;
        triangle(n);
        break;

    case 2:
        cout << "-----------Rectangle Pattern-----------" << endl;
        int r, c;
        cout << "Number of rows: ";
        cin >> r;
        cout << "Number of columns: ";
        cin >> c;
        rectangle(r, c);
        break;

    case 3:
        cout << "-----------Pyramid Pattern-----------" << endl;
        int m;
        cout << "Number of rows: ";
        cin >> m;
        pyramid(m);
        break;

    default:
        cout << "Still adding more." << endl;
        break;
    }
    return 0;
}
