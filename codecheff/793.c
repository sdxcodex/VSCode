#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int sum1 = 0, sum2 = 0;
    int m = 0; // stores max lead
    int winner = 1; // stores who had the max lead
    
    while(n--) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        // Calculate cumulative scores
        sum1 += a;
        sum2 += b;
        
        if (sum1 > sum2) {
            int lead = sum1 - sum2;
            if (lead > m) {
                m = lead;
                winner = 1; // Player 1 is the leader
            }
        } else {
            int lead = sum2 - sum1;
            if (lead > m) {
                m = lead;
                winner = 2; // Player 2 is the leader
            }
        }
    }
    
    // Print the winner and the maximum lead
    printf("%d %d\n", winner, m);

    return 0;
}