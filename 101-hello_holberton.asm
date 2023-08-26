section .data
    hello db "Hello, Holberton",0
    format db "%s", 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8      ; Align the stack
    mov rdi, format ; Load format string
    mov rsi, hello  ; Load string to be printed
    call printf     ; Call printf function
    add rsp, 8      ; Restore the stack alignment

    xor rax, rax    ; Return 0
    ret

