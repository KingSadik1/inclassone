
#include <iostream>
#include "inclassone.h"

using namespace std;

int ECRemoveSpace(int nums[], int len, int val) {
    int i = 0;
    for (int j = 0; j < len; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

