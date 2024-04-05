#include "RecursiveLinearSearch.h"
using namespace std;

int last_occurrence_recursive(const std::vector<int>& items, int target, size_t pos_last) {
    if (pos_last == 0)
        return -1;

    if (target == items[pos_last - 1])
        return pos_last - 1;
    else
        return last_occurrence_recursive(items, target, pos_last - 1);
}

int last_occurrence(const vector<int>& items, int target) {
    return last_occurrence_recursive(items, target, items.size());
}
