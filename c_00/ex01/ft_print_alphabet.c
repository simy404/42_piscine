#include <unistd.h>

void ft_print_alphabet()
{
    for (char letter = 'a'; letter <= 'z' ; ++letter) {
        write(1, &letter, 1);
    }
}