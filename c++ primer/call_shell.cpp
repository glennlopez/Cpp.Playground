/*
	This is an example of how you can call linux commands via cpp.
	You need to have stdio and stdlub headers as per example.
	Call a script or shell command by system(" ").
	
	system(); is invalid. You need to do system(""). In otherwords, system command needs a char for it to be valid
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("echo -n '1. Current Directory is '; pwd");
  system("");
  return 0;
}
