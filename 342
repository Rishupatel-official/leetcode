
#include <string.h>

char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    for (; left < right; ) {

        // Find the next vowel from the left
        for (; left < right &&
               strchr("aeiouAEIOU", s[left]) == NULL; left++);

        // Find the next vowel from the right
        for (; left < right &&
               strchr("aeiouAEIOU", s[right]) == NULL; right--);

        // Swap vowels
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    return s;
}
