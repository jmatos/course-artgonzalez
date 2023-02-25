#include "for_ranged_str.h"

void iterate_string_val_params(string str1)
{
    for (auto ch: str1) {
        ch = 'z';
    }
}

void iterate_string_ref_params(string &str1)
{
    for (auto &ch: str1) {
        ch = 'z';
    }
}

