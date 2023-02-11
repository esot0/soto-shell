#include "main.h"

int main(int ac, char **argv)
{
	(void)ac; 
	(void)argv;
	char *shellPrompt = "(ShellSoto):~$ ";
	char *buffer;
	size_t bufsize = 32;
	size_t user_input;


	while (1)
	{
		buffer = (char *)malloc(bufsize * sizeof(char));

		if (buffer == NULL)
		{
			perror("Error: Could not allocate buffer.");
			exit(1);
		}

		printf("%s", shellPrompt);
		user_input = getline(&buffer, &bufsize, stdin);

		printf("Read:%zu ", user_input);
		printf("Buffer: %s", buffer);

		free(buffer);
	}
	return 0;
}