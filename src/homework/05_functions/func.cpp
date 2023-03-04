#include "func.h"
#include<iostream>

using std::cout;

string get_reverse_string(string dna) {
    string result = "";

    auto index = dna.length()-1;

    do {
        result += dna[index];      
    } while (index-- > 0);

    return result;
}

double get_gc_content(const string& dna) {
    double count_gc = 0;

    for (char ch: dna) {
        if (ch == 'C' || ch == 'G') {
            count_gc++;
        }
    }

    return count_gc / dna.length();
}

string get_dna_complement(string dna) {
    string reverse_dna = get_reverse_string(dna);
    string result = "";

    for (char ch: reverse_dna) {
        if (ch == 'A') {
            ch = 'T';
        } else if (ch == 'T') {
            ch = 'A';
        } else if (ch == 'C') {
            ch = 'G';
        } else if (ch == 'G') {
            ch = 'C';
        }

        result += ch;
    }

    return result;
}