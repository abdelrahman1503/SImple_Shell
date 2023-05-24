#include "simple_shell.h"

/**
 * _env - prints the current environment
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 * Return: Always 0
 */
int _env(st_info_t *info)
{
	print_list_str(info->env);
	return (0);
}