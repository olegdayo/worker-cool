#ifndef COOL_H
#define COOL_H

typedef int (*Task)();

typedef struct {
    int max_threads;
} Cool;

Cool* new_cool(int max_threads);

void add_task(Task t);

void execute();

#endif
