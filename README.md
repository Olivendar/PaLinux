# PaLinux
This is a Open Source Linux Project developed by me

Here are Few Steps to compile it !

1. nasm -o bootloader.bin bootloader.asm
2. gcc -ffreestanding -c kernel.c -o kernel.o
3. dd if=bootloader.bin of=floppy.img bs=512 count=1
4. dd if=kernel.o of=floppy.img bs=512 seek=1
5. gcc -o shell shell.c
6. qemu-system-x86_64 -fda floppy.img



