#include<stdio.h>
#include<windows.h>

int main(int argc, char *argv[])
{
	int t[4][4];
	 POINT pt;
	 BOOL bContinue = TRUE;
	 const SHORT Mask = 32768;
	  for(int i=0;i<4;i++)
	 {
	 	for(int j=0;i<4;j++)
	 	{
	 		t[i][j]=4;	
		}
	 }
	 for(int i=0;i<4;i++)
	 {
	 	for(int j=0;i<4;j++)
	 	{
	 		printf("%d",t[i][j]);
		}
	 }
	 while (bContinue)
	 {
	      if (GetKeyState(VK_ESCAPE) & Mask)
	           bContinue = FALSE;
	      GetCursorPos(&pt);
	      if (GetKeyState(VK_UP) & Mask)
	           pt.y -= 1;
	      if (GetKeyState(VK_DOWN) & Mask)
	           pt.y += 1;
	      if (GetKeyState(VK_LEFT) & Mask)
	           pt.x -= 1;
	      if (GetKeyState(VK_RIGHT) & Mask)
	           pt.x += 1;
	      SetCursorPos(pt.x,pt.y);
	      Sleep(10);
	 }
	
	 return 0;
	 
	
}
