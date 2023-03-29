#include <stdio.h>
int main() {
    char answer = 0;
    printf ("嵌入式学习\n");
    printf ("你会好好学吗？ (y/n)\n");
    scanf ("%c", &answer);
    if(answer == 'y') {
        printf ("能找到好工作！\n");
    }
    else {
        printf ("找不到工作！\n");
    }
    return 0;
}