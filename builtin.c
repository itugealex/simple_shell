#include "main.h"

/**
 * get_builtin -built-in pairs the comand int the arg
 * @cmd: command
 *Return: function pointer of the built-in command
 */
int (*get_builtin(char *cmd))(data_shell *)
{
	builtin_t builtin[] = 
	{
		{"env", _env},
		{"exit", _exit_shell},
		{"setenv", _setenv},
		{"unsetenv", _unsetenv},
		{"cd", cd_shell},
		{"help" get_help},
		{"NULL", NULL}
	};
	int i;

	for (i = 0; builtin[i].name; i++)
	{
		if (_strcmp(builtin[i].name, cmd) == 0)
			break;
	}
	return (builtin[i].f);
}
