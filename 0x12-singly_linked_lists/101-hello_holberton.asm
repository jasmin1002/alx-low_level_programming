section .text
	global main

main:
	mov edx, len	;message length
	mov ecx, msg	;message to write
	mov ebx, 1	;file descriptor (stdout)
	mov al, 0	;magic for varargs (0==no magic, to prevent a crash!)

	extern printf
	call printf

	ret
section .data
msg db 'Hello, Holberton', 0	;our dear string
len equ $ - msg			;length of our dear string
