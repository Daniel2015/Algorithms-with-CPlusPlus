/*
Да се напише програма, която прочита от стандартния вход 2 цели числа
и извежда на стандартния изход тяхната сума,
Вход
Двете числа, които трябва да се съберат.
Изход
Сбора на двете прочетени числа. Не забравяйте символа за край на
ред(‘\n’).
Ограничения
TL: 0.1 s
ML: 16 MB
*/
#include <iostream>
#include <stdio.h>

int main() {
	int a, b, sum;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	return(0);
}