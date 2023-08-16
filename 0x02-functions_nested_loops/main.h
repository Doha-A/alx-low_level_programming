#include"_putchar"

char *Putchar = "_putchar\n";

void print_alphabet(void)
{
        char c;
        for (c = 'a'; c <= 'z'; c++)
                putchar(c);
        putchar('\n');
}
