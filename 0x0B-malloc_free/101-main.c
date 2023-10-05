#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

int main(void)
{
    char input[] = "      ALX School         #cisfun      ";
    char **tab;
    char *token;
    int i = 0;
    int j;

    /* Allocate memory for the tab array */
    tab = (char **)malloc(sizeof(char *));
    if (tab == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }

    /* Tokenize the input string and store the words in the tab array */
    token = strtok(input, " ");
    while (token != NULL)
    {
        tab[i] = strdup(token); /* Duplicate the token */
        if (tab[i] == NULL)
        {
            printf("Failed to allocate memory\n");
            return (1);
        }
        i++;

        /* Resize the tab array */
        tab = (char **)realloc(tab, (i + 1) * sizeof(char *));
        if (tab == NULL)
        {
            printf("Failed to allocate memory\n");
            return (1);
        }

        token = strtok(NULL, " ");
    }

    tab[i] = NULL; /* Null-terminate the tab array */

    print_tab(tab);

    /* Free the allocated memory */
    for (j = 0; j < i; j++)
    {
        free(tab[j]);
    }
    free(tab);

    return (0);
}
