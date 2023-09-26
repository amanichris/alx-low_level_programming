	global main
	extern printf
main:
	mov edi, format
	xor eax, eax
	call printf
	mov eax, 0
	ret
<<<<<<< HEAD
format: db `Hello, Holberton\n`,0
=======
format: db `Hello, Holberton\n`,
>>>>>>> ea2cf201d3967483678bdffc91adc5b98a1503cb
