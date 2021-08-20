# Plan

Example for a template of how the game would look-ish

```c
#include <stdio.h>
#include <string.h>

#define FIELD_WIDTH  7
#define FIELD_HEIGHT 7

typedef unsigned char u8;

/* ============================ */

u8 player_field[FIELD_WIDTH * FIELD_HEIGHT];

void draw_boat(char sym, u8 x, u8 y) { player_field[y * FIELD_WIDTH + x] = sym; }

void draw_screen() {
	for (u8 y = 0; y < FIELD_HEIGHT; ++y) {
		for (u8 x = 0; x < FIELD_WIDTH; ++x) {
			printf(" %c ", player_field[y * FIELD_WIDTH + x]);
		}
		printf("\n");
	}
}


int main() {
	// Set array value to '.' for all element
	memset(player_field, '.', FIELD_WIDTH * FIELD_HEIGHT);
	
	draw_boat('k', 3, 3); /* Put a boat at C3, where C = 3*/
	draw_screen(); /* Draw the dield to the screen */
	
	return 0;
}


```
