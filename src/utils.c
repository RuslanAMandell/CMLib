// src/utils.c
#include <stdio.h>
#include <time.h>
#include "../include/utils.h"

void display_progress_bar(int current, int total) {
    static time_t start_time;
    int bar_width = 50;

    // Initialize start time on the first call
    if (current == 1) {
        start_time = time(NULL);
    }

    // Calculate elapsed time
    time_t now = time(NULL);
    int elapsed_seconds = (int)difftime(now, start_time);
    int hours = elapsed_seconds / 3600;
    int minutes = (elapsed_seconds % 3600) / 60;
    int seconds = elapsed_seconds % 60;

    // Calculate progress
    float progress = (float)current / total;
    int pos = (int)(bar_width * progress);

    // Display elapsed time, progress bar, and percentage
    printf("\r[Elapsed Time: %02d:%02d:%02d] [", hours, minutes, seconds);
    for (int i = 0; i < bar_width; ++i) {
        if (i < pos) {
            printf("█");
        } else {
            printf(" ");
        }
    }
    printf("] %3d%%   ", (int)(progress * 100)); // Extra spaces for padding
    fflush(stdout); // Ensure output is displayed immediately
}