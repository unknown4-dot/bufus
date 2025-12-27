#include <stdio.h>
#include <stdlib.h>

int main()
{
  char usb[100];
  char iso[100];
  char command[200];
  system("clear");
  system("lsblk");

  printf("enter your usb | ");
  scanf("%99s", usb);

  
  snprintf(command, sizeof(command), "sudo umount %s", usb);
  system(command);

  printf("enter the ISO | ");
  scanf("%99s", iso);

  snprintf(command, sizeof(command), "sudo dd if=%s of=%s bs=4M status=progress", iso, usb);
  system(command);
  printf("sync in progress");
  system("sync");
  printf("done you can remove you usb now!");

}
