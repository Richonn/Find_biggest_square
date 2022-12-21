/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** open_file
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "bsq.h"

char *open_file(char *filename)
{
    int fd;
    int size;
    char *buffer;
    struct stat file;

    stat(filename, &file);
    buffer = malloc(sizeof(char) * (file.st_size + 1));
    fd = open(filename, O_RDONLY);
    size = file.st_size;
    read(fd, buffer, size);
    buffer[size] = '\0';
    close(fd);
    return buffer;
}
