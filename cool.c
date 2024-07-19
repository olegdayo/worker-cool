#include <stdlib.h>
#include <pthread.h>

#include "cool.h"

Cool* new_cool(int max_threads) {
    Cool* cool = malloc(sizeof(Cool));
    cool->max_threads = max_threads;
    return cool;
}

void add_task(Task t) {
}

void execute() {
}
