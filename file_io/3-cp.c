#include "main.h"
/**
 * cp - copies the content of a file to another file
 * @file_from: source file
 * @file_to: destination file
 */
void cp(char *file_from, char *file_to)
{
int fd_from, fd_to, r, w;
char buffer[1024];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd_from);
exit(99);
}
do {
r = read(fd_from, buffer, 1024);
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close(fd_from);
close(fd_to);
exit(98);
}
w = write(fd_to, buffer, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd_from);
close(fd_to);
exit(99);
}
} while (r > 0);
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
}
/** * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
cp(argv[1], argv[2]);
return (0);
}
