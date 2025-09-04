
#include <stdio.h>

int main() {
    char names[10][50];
    int votes[10] = {0};
    int n, v, i, choice;
    
    printf("How many participants? ");
    scanf("%d", &n);
    if (n > 10) n = 10;
    
    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        scanf("%49s", names[i]);
    }
    
    printf("How many voters? ");
    scanf("%d", &v);
    
    for (i = 0; i < n; i++) {
        printf("[%d] %s\n", i + 1, names[i]);
    }
    
    printf("Vote (1-%d, 10 to stop):\n", n);
    for (i = 0; i < v; i++) {
        printf("Voter %d: ", i + 1);
        scanf("%d", &choice);
        
        if (choice == 10) {
            printf("Stopped.\n");
            break;
        }
        
        if (choice >= 1 && choice <= n) {
            votes[choice - 1]++;
        }
    }
    
    printf("\nResults:\n");
    for (i = 0; i < n; i++) {
        printf("%s: %d votes\n", names[i], votes[i]);
    }
    
    return 0;
}



