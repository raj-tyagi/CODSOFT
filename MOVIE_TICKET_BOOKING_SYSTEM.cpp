/*
Develop a program that simulates a movie ticket booking system.
Allow users to view movie listings, select seats, make bookings,
and calculate the total cost. Consider implementing seat
availability and seat selection validation.
  */

#include <iostream>
#include <vector>

using namespace std;

const int NUM_ROWS = 5;
const int NUM_COLS = 8;
const double TICKET_PRICE = 400.0;

// Function to display the seating chart
void displaySeatingChart(const vector<vector<bool>>& seats) {
    cout << "   ";
    for (int col = 0; col < NUM_COLS; ++col) {
        cout << col + 1 << " ";
    }
    cout << endl;

    for (int row = 0; row < NUM_ROWS; ++row) {
        cout << char('A' + row) << ": ";
        for (int col = 0; col < NUM_COLS; ++col) {
            if (seats[row][col]) {
                cout << "O ";
            } else {
                cout << "X ";
            }
        }
        cout << endl;
    }
}

int main() {
    vector<vector<bool>> seats(NUM_ROWS, vector<bool>(NUM_COLS, true));

    char choice;
    do {
        cout << "Movie Ticket Booking System" << endl;
        cout << "1. View Movie Listings" << endl;
        cout << "2. Make Booking" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;int n;

        switch (choice) {
            case '1': {
                cout << "Movie Listings:" << endl;
                // Display available movies
                cout<<"1. GADAR 2"<<endl;
                cout<<"2. OMG 2"<<endl;
                cout<<"3. OPPENHEIMER"<<endl;
                cout<<"4. MISSION IMPOSSIBLE"<<endl;
                break;
            }
            case '2': {
                cout<<"ENTER THE NUMBER OF SEATS YOU WANT TO BOOK:"<<endl;
                cin>>n;
                for(int i=1;i<=n;i++)
                {

                cout << "Select a seat (row and column): ";
                char row;
                int col;
                cin >> row >> col;

                if (row >= 'A' && row <= 'E' && col >= 1 && col <= NUM_COLS) {
                    int rowIndex = row - 'A';
                    if (seats[rowIndex][col - 1]) {
                        seats[rowIndex][col - 1] = false;
                        cout << "Booking successful!" << endl;
                        cout << "Total cost: Rs" << TICKET_PRICE << endl;

                    } else {
                        cout << "Seat is already booked." << endl;
                    }
                } else {
                    cout << "Invalid seat selection." << endl;
                }
                }

                break;
            }
            case '3':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout<<"Invalid choice. Please select again."<<endl;
        }
        cout<<endl;
    } while (choice != '3');

    return 0;
}

