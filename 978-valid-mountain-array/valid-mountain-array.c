
bool validMountainArray(int* arr, int arrSize) {
    if (arrSize < 3) {
        return false;
    }

    int inc = 0, dec = 0;

    for (int i = 1; i < arrSize; i++) {

        if (arr[i] == arr[i - 1]) {
            return false;
        }

        else if (arr[i] > arr[i - 1]) {
            if (dec == 1) {
                return false;
            }
            inc = 1;
        }

        else {
            dec = 1;
        }
    }

    return inc && dec;
}
