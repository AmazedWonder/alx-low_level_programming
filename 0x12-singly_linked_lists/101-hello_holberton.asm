section .data
string db "Hello, Holberton", 0
format db "%s", 10, 0

section .text
global main
extern printf

main:
sub rsp, 8
mov edi, format
mov esi, string
xor eax, eax
call printf
add rsp, 8

mov eax, 0
ret
