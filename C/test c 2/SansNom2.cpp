#include <windows.h>
#include <stdio.h>
#include <conio.h>
int main(int argc, char * argv[])
{
     HWND hFore;
     char szBuffer[128];
     int iNbChar;

     printf("Vous avez 5 secondes pour activer la fen�tre dont vous voulez conna�tre le class name\r\n");
     printf("Appuyez sur une touche pour d�clancher le compteur ...");
     getch();
     Sleep(5000);

     hFore = GetForegroundWindow();
     iNbChar = GetClassName(hFore,szBuffer,128);
     if (iNbChar && (iNbChar < 128))
     {
          printf("\r\nLe class name de cette fen�tre est :\r\n|%s|",szBuffer);
          printf("\r\nLes barres verticales (|) de gauche et droite n'en font pas partie\r\n");
     }
     else
     {
          printf("Impossible de r�cup�rer le class name ou celui-ci est trop long\r\n");
     }
     return 0;
}
