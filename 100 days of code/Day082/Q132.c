/*
Q132: Enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go'.
Input: GREEN -> Output: Go
*/
#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    char input[20];
    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    if (scanf("%s", input) == 1) {
        enum TrafficLight light;
        if (strcmp(input, "RED") == 0) light = RED;
        else if (strcmp(input, "YELLOW") == 0) light = YELLOW;
        else if (strcmp(input, "GREEN") == 0) light = GREEN;
        else {
            printf("Invalid light\n");
            return 0;
        }

        switch (light) {
            case RED: printf("Stop\n"); break;
            case YELLOW: printf("Wait\n"); break;
            case GREEN: printf("Go\n"); break;
        }
    }
    return 0;
}
