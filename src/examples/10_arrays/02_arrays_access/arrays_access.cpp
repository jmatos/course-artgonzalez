//cpp
#include "arrays_access.h"
#include <iomanip>

using std::cout;
using std::setw;

void populate_times_table(int times_table[][COLS], const int ROWS) {
    for (auto i=0; i<ROWS; i++) {
        for (auto j=0; j<COLS; j++) {
            times_table[i][j] = (i+1) * (j+1);
        }
    }
}

void display_times_table(int times_table[][COLS], const int ROWS) {
    for (auto i=0; i<ROWS; i++) {
        for (auto j=0; j<COLS; j++) {
            cout<<times_table[i][j]<<setw(4);
        }
        cout<<"\n";
    }
}