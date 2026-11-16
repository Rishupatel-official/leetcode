void intToStr(int num, char *str) {
    int i = 0;

    if (num == 0) {
        str[i++] = '0';
    }

    while (num > 0) {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }

    str[i] = '\0';

    int left = 0, right = i - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

char* digitSum(char* s, int k) {

    int len = strlen(s);

    while (len > k) {

        char *result = calloc(len + 1, sizeof(char));

        int i = 0, l = 0;

        while (i < len) {

            int sum = 0;

            for (int j = 0; j < k && i < len; j++) {
                sum += s[i++] - '0';
            }

            char str[20];
            intToStr(sum, str);

            strcpy(result + l, str);
            l += strlen(str);
        }

        strcpy(s, result);
        len = strlen(s);

        free(result);
    }

    return s;
}