#include <stdio.h>
int main() {
int amount, notes[8] = {0}, denominations[8] = {500, 100, 50, 20, 10, 5, 2, 1}; 
printf("input amount: ");
scanf("%d", &amount);
for(int i=0; i<8; i++) { 
if(amount >= denominations[i]) { 
notes[i] = amount / denominations[i]; 
amount = amount % denominations[i]; 
}
}
printf("Total number of notes:\n");
for(int i=0; i<8; i++) { 
printf("%d: %d\n", denominations[i], notes[i]); 
}
return 0;
}

