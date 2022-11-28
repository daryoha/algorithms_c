#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int count = 1;
    int max_count = 1;
    int previous_num;
    scanf("%d", &previous_num);

    for (int i = 1; i < n; i++) {
        int current_num;
        scanf("%d", &current_num);
        if (current_num > previous_num){
            count++;
            if (max_count < count){
                max_count = count;
            }
        }
        else{
            if (max_count < count){
                max_count = count;
            }
            count = 1;
        }
        previous_num = current_num;
    }
    
    printf("%d\n", max_count);
    return 0;
}