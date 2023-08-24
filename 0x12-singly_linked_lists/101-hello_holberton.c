#include <stdio.h>

int main(void)
{
	asm
		(
			"mov $4, %%rax;"
			"mov $1, %%rdi;"
			"mov %[message], %%rsi;"
			"mov $14, %%rdx;"
			"syscall;"
			:
			:[message] "m" ("Hello Holberton\n")
			: "rax", "rdi", "rsi", "rdx"
		);
	return (0);
}

