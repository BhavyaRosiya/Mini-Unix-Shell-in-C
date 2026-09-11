#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>
#include<stdlib.h>

#define size 100

int main()
{
  char *cmd,**args;
  
  cmd = (char *)malloc(size * sizeof(char)); // dma for arr
  args = (char **) malloc(10 * sizeof(char *));
  
  if(cmd == 0 || args == 0)
  {
    printf("memeory Not Allocated \n");
    return 1;
  }
  
  while(1){
  
  printf("Lucifer# ");
  fflush(stdout);
  
  fgets(cmd,size,stdin);
  
  cmd[strcspn(cmd,"\n")] = '\0';
  
  if(strcmp(cmd,"Logoff") == 0 || strcmp(cmd , "exit") == 0)
  break;
  
  
  int  i = 0;
  char *token = strtok(cmd, " ");
  
  while(token != 0 && i < 9)
  {
    args[i++] = token;
    token = strtok(0, " ");
  }
  
  args[i] = 0;
  
  if(args[0] == 0)
  continue;
  
  
  pid_t pid = fork();
  
  if(pid < 0)
  perror("fork");
  
 else if(pid == 0)
  {
    execvp(args[0],args);
    
    perror("Command Not Found");
    exit(1);
  }
  else
  wait(0);
 }
 
 free(args);
 free(cmd);
 printf("Shell Terminated\n");
 return 0;
}
