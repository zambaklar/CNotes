#include <stdio.h>
#include <string.h>

#define NUM_COLORS 8

// lookup table

typedef struct {
    char name[10];
    int red, green, blue;
} Color;

Color color_table[NUM_COLORS] = {
    {"Red",   255, 0,   0},
    {"Green", 0,   255, 0},
    {"Blue",  0,   0,   255},
    {"Yellow",255, 255, 0},
};

int get_color_index(const char* name) {
    for (int i = 0; i < NUM_COLORS; i++) {
        if (strcmp(name, color_table[i].name) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char color_name[] = "Blue";
    int index = get_color_index(color_name);

    if (index != -1) {
        printf("Color '%s': red=%d, green=%d, blue=%d\n",
               color_table[index].name,
               color_table[index].red,
               color_table[index].green,
               color_table[index].blue);
    } else {
        printf("Invalid color name\n");
    }

    return 0;
}
