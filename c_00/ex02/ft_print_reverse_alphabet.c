#include <unistd.h>

void ft_print_reverse_alphabet()
{
    for (char letter = 'z'; letter >= 'a' ; --letter) {
        write(1,&letter,1);
    }
}