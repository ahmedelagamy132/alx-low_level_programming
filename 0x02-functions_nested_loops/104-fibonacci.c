#include <stdio.h>
int main() {
unsigned long first = 1, sec = 1, tot, number;


printf("%ld, %ld, ", first ,sec);

for (number = 3; number <= 98; number++) {
tot = first + sec;
first = sec;
sec = tot;

if (number % 31 == 0) {
printf("\n");
}
printf("%ld, ", tot);
}

printf("\n");
return 0;
}
