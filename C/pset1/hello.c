#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("May I have your name? ");
    printf("Say hello to the world, %s!\n", name);
}