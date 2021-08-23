# Battleships


# Plan

Example for a template of how the game would look-ish

```c
#include <stdio.h>
#include <string.h>

// Global Defines
#define FIELD_WIDTH  7
#define FIELD_HEIGHT 7
#define INDEX_BUFFER(x,y) ((u8)((y) * FIELD_WIDTH + (x)))

// Abstract types for simplicity and readability
typedef unsigned char u8;

// Function Declarations
void draw_boat(char sym, u8 x, u8 y);
void draw_screen();

// Screen Buffer
u8 player_field[FIELD_WIDTH * FIELD_HEIGHT];

int main() {
	// Set array value to '.' for all element
	memset(player_field, '.', FIELD_WIDTH * FIELD_HEIGHT);
	
	draw_boat('k', 3, 3); /* Put a boat at C3, where C = 3*/
	draw_screen(); /* Draw the dield to the screen */
	
	return 0;
}

/**
 * Abstracted function to draw a single chracter to the screen buffer
 */
void draw_boat(char sym, u8 x, u8 y) { 
    player_field[INDEX_BUFFER(x,y)] = sym; 
}

/**
 * Abstracted function to draw a screen (in terminal) using the player_field 
 * buffer
 */
void draw_screen() {
	for (u8 y = 0; y < FIELD_HEIGHT; ++y) {
		for (u8 x = 0; x < FIELD_WIDTH; ++x) {
			printf(" %c ", player_field[y * FIELD_WIDTH + x]);
		}
		printf("\n");
	}
}
```
