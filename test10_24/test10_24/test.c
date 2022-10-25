#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//当他们到达羊村的时候车上的矿泉水总共重Y千克。
//出发的时候有k桶一样大小的水，总重量小于等于n千克，共消耗了多少千克的水？
//每桶水都为整数千克
int main()
{
    int Y, k, n, s, x;
    scanf("%d %d %d", &Y, &k, &n);
    s = ceil(Y / k);/*s是到达时每桶水的重量*/
    x = 0;
    while (s <= ceil(n / k))
    {
        if (s * k >= Y && s * k <= n)
        {
            printf("%d ", s * k - Y);
        }
        x = 1;
        s++;
    }
    if (x == 0)
        printf("-1");
    return 0;
}
