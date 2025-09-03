#include <stdio.h>

int main()
{
    int start, end, num;
    
    printf("Enter start number: ");
    scanf("%d", &start);
    
    printf("Enter end number: ");
    scanf("%d", &end);
    
    if (start > end)
    {
        printf("Error: Start should be less than end\n");
        return 0;
    }
    
    num = start;
    while (num <= end)
    {
        if (num % 2 == 0)
        {
            printf("%d is EVEN, Square: %d\n", num, num * num);
        }
        else
        {
            printf("%d is ODD,  Cube: %d\n", num, num * num * num);
        }
        num++;
    }
    
    return 0;
}

