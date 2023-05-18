#include <stdio.h>

int main(void)
{
	printf("\e[38;2;255;255;255;1m\e[48;2;106;170;100;1m" "Text with green background" "\e[0;39m\n");

	printf("\033[38;2;0;0;0;1m\033[48;2;170;0;0;1m" "White text with red background" "\033[0;39m\n");

	// Strike text
	printf("\033[9m" "Text with strike\n" "\033[0m");

	// Clear terminal window
	// printf("\033[2J");

	// Reset
	// printf("\033[0m")

	// Print text with proportional spacing
	printf("\033[26m" "Text with proportional spacing");
}