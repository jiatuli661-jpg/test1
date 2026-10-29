
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    char **str_arr;  // 二级指针，存放若干char*
    char temp_buf[128];

    printf("How many words do you wish to enter? ");
    scanf("%d", &n);
    getchar();   // 吸收scanf留下的换行

    // 第一次malloc：分配n个char*指针
    str_arr = (char **)malloc(n * sizeof(char *));
    if (str_arr == NULL)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

    printf("Enter %d words now:\n", n);
    for (int i = 0; i < n; i++)
    {
        fgets(temp_buf, sizeof(temp_buf), stdin);
        // 去掉fgets读到的换行符
        temp_buf[strcspn(temp_buf, "\n")] = '\0';

        // 第二次malloc：按单词实际长度分配空间
        str_arr[i] = (char *)malloc(strlen(temp_buf) + 1);
        if (str_arr[i] == NULL)
        {
            perror("malloc failed");
            exit(EXIT_FAILURE);
        }
        strcpy(str_arr[i], temp_buf);
    }

    // 输出
    printf("Here are your words:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str_arr[i]);
    }

    // 释放内存，顺序不能颠倒
    for (int i = 0; i < n; i++)
    {
        free(str_arr[i]);
    }
    free(str_arr);

    return 0;
}