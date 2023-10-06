#include <unistd.h>

extern char **environ;

int main()
{
    char *argv[2];
    char *minhas[4] = {"ola=mundo", "adeus=mundo", "a=b", NULL};
    
    argv[0] = "/usr/bin/env";
    argv[1] = NULL;
    execve("/usr/bin/env", argv, environ);

    return 0;
}
