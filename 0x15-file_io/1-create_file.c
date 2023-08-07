/*****************************************************************************************************/
/*                                  						                                         */
/*                                  						             _____  ______    ____  ___  */
/* 0-print_list.c                   						            /  _  \ |    |    \   \/  /  */
/*                                  						           /  /_\  \|    |     \     /   */
/* By: Abdessamad El Majdouly   <elmajdouly.abdessamad@gmail.com>  	  /    |    \    |___  /     \   */
/*                                   						      	  \____|__  /_______ \/___/\  \  */
/* Created: 2023-08-07 09:44:03   $Abdessamad   					   	      \/        \/      \_/  */
/* Updated: 2023-08-07 09:44:03 by Abdessamad                             							 */
/*                                                                         						     */
/*****************************************************************************************************/

#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUF_SIZE 9096

/**
 * create_file - a function ...
 * @filename: the list
 * @text_content: the number
 *
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 600);

	if (fd == -1)
		return (-1);

	chmod(filename, 644);

	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}

