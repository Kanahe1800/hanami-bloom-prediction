// gcc run.c -o run
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

// goto localhost:3000
int main() {
    int pid = fork();
    if (pid == 0){
        execlp("sh", "sh", "-c", "source ./hanami-bloom-prediction-backend/venv/bin/activate && python3 ./hanami-bloom-prediction-backend/app.py", NULL);
    } else{
        execlp("sh", "sh", "-c", "cd Sakura-map && npm run dev", NULL);
    }


    perror("execlp failed");
    return 1;
}