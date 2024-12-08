// kernel.c
void kernel_main() {
    const char* message = "Hello from the Kernel!";
    unsigned short* video_memory = (unsigned short*)0xB8000;

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 80; j++) {
            video_memory[(i * 80) + j] = ((unsigned short)message[i * 80 + j]) | 0x0F00;
        }
    }
}
