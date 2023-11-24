#include "factor.h"
/**
*main - main file
*@argc: number of arguments
*@argv: array of arguments
*Return: int
*/

int main(int argc, char *argv[])
{
FILE *file;
ssize_t line;
size_t count = 0;
char *line_buf = NULL;

if (argc != 2)
{
fprintf(stderr, "Usage: factor <filename>\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (file == NULL)
{
fprintf(stderr, "Error: could not open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while ((line = getline(&line_buf, &count, file)) != -1)
{
_factorize(line_buf);
}
}
