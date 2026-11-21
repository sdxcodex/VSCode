#include <stdio.h>
#include <string.h>

int main()
{
    char n[100];

    scanf("%s", n);

    int len = strlen(n);

    long long runSum = 0;
    long long desSum = 0;

    int i = 0;

    while(i < len)
    {
        long long run = n[i] - '0';

        while(i < len - 1 && n[i] < n[i + 1])
        {
            run = run * 10 + (n[i + 1] - '0');
            i++;
        }

        runSum += run;

        if(i < len - 1)
        {
            long long descent =
                (n[i] - '0') * 10 + (n[i + 1] - '0');

            desSum += descent;
        }

        i++;
    }

    printf("%lld", runSum - desSum);

    return 0;
}