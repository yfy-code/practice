#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�����ǵ�������ʱ���ϵĿ�Ȫˮ�ܹ���Yǧ�ˡ�
//������ʱ����kͰһ����С��ˮ��������С�ڵ���nǧ�ˣ��������˶���ǧ�˵�ˮ��
//ÿͰˮ��Ϊ����ǧ��
int main()
{
    int Y, k, n, s, x;
    scanf("%d %d %d", &Y, &k, &n);
    s = ceil(Y / k);/*s�ǵ���ʱÿͰˮ������*/
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
