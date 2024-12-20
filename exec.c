#include <stdio.h>
#include <stdlib.h>

int main() {
    if (system("pip install -r requirements.txt") != 0) {
        printf("Error installing requirements.\n");
        return 1;
    }

    if (system("python3 main.py") != 0) {
        printf("Error running the Python script.\n");
        return 1;
    }

    return 0;  // Successfully kam kr rha h
}
