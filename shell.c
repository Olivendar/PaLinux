// shell.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void execute_command(const char* command) {
    if (strcmp(command, "exit") == 0) {
        printf("Exiting shell...\n");
        exit(0);
    } else if (strcmp(command, "nano") == 0) {
        printf("Launching nano (simulated)...\n");
    } else {
        printf("Unknown command: %s\n", command);
    }
}

int main() {
    char command[256];
    while (1) {
        printf("os-shell> ");
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0; // Entferne das Zeilenende
        execute_command(command);
    }
    return 0;
}
