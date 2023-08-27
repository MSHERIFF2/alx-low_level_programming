section .data
	hello : db "Hello, Holberton", 10
	helloLen:  equ $-hello

section .text
	global main
	extern printf

main:
	mov	rax,1
	mov	rdi,1
	mov	rsi,hello
	mov	rdx,helloLen
	syscall
	
	mov	rax,60
	mov	rdi,0
	syscall

section .data
	extern printf
