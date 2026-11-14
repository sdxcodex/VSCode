#include <stdio.h>

int main() {
    int S;

    scanf("%d", &S);

    if (S <= 0) {
        printf("Invalid target");
        return 0;
    }

    int found = 0;
    int minLen = 1000000;
    int shortStart, shortEnd;

    for (int start = 1; start < S; start++) {
        int sum = 0;

        for (int end = start; end < S; end++) {
            sum += end;

            if (sum == S) {
                int len = end - start + 1;

                if (len >= 2) {
                    printf("Start=%d End=%d Length=%d\n",
                           start, end, len);

                    found = 1;

                    if (len < minLen) {
                        minLen = len;
                        shortStart = start;
                        shortEnd = end;
                    }
                }
                break;
            }

            if (sum > S)
                break;
        }
    }

    if (!found) {
        printf("No representation exists");
    } else {
        printf("Shortest sequence: Start=%d End=%d Length=%d",
               shortStart, shortEnd, minLen);
    }

    return 0;
}