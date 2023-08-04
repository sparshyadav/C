#include <stdio.h>

int main()
{

    float price[5] = {102, 532, 53, 675, 234};
    for (int i = 0; i < 5; i++)
    {
        float finalPrice = price[i] + (0.18 * price[i]);
        printf("%f \n", finalPrice);
    }

    return 0;
}