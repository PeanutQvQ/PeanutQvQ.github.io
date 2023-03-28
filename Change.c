#include <stdio.h>
            int main() {
                int price = 0;
                int sou = 0;
                printf ("请输入物品金额 （元）：");
                scanf ("%d", &price);
                printf ("您收了多少 （元） ：");
                scanf ("%d", &sou);
                printf ("找您：%d 元\n", sou - price);
                return 0;
            }