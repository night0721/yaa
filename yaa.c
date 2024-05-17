#include <stdio.h>

int main(int argc, char **argv)
{
    fprintf(stderr, "Usage: %s [-l]\n", argv[0]);
    return 0;
}
