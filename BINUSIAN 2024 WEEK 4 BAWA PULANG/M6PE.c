#include <stdio.h>

int main()
{
   int N, M, Q, i, c, x, y, kuda = 0, seluncur = 0, benteng = 0;
   int papan[200][200] = {0};
   scanf("%d %d", &N, &M);
   getchar();
   for (i = 1; i <= M; i++)
   {
      scanf("%d %d", &x, &y);
      getchar();
      papan[x][y] = 1;
   }
   scanf("%d", &Q);
   getchar();
   for (i = 0; i < Q; i++)
   {
      kuda = 0;
      seluncur = 0;
      benteng = 0;
      scanf("%d %d", &x, &y);
      getchar();

      //knight
      if(papan[x - 2][y - 1] == 1 && x - 2 > 0 && y - 1 > 0) kuda++;
      if(papan[x - 1][y - 2] == 1 && x - 1 > 0 && y - 2 > 0) kuda++;
      if(papan[x + 2][y + 1] == 1 && x + 2 <= N && y + 1 <= N) kuda++;
      if(papan[x + 1][y + 2] == 1 && x + 1 <= N && y + 2 <= N) kuda++;
      if(papan[x - 1][y + 2] == 1 && x - 1 > 0 && y + 2 <= N) kuda++;
      if(papan[x - 2][y + 1] == 1 && x - 2 > 0 && y + 1 <= N) kuda++;
      if(papan[x + 2][y - 1] == 1 && x + 2 <= N && y - 1 > 0) kuda++;
      if(papan[x + 1][y - 2] == 1 && x + 1 <= N && y + 2 > 0) kuda++;

      //bishop
      for (c = 1; x - c > 0 && y - c > 0; c++)
      {
         if (papan[x - c][y - c] == 1)
         {
            seluncur++;
            break;
         }
      }
      for (c = 1; x + c <= N && y - c > 0; c++)
      {
         if (papan[x + c][y - c] == 1)
         {
            seluncur++;
            break;
         }
      }
      for (c = 1; x - c > 0 && y + c <= N; c++)
      {
         if (papan[x - c][y + c] == 1)
         {
            seluncur++;
            break;
         }
      }
      for (c = 1; x + c <= N && y + c <= N; c++)
      {
         if (papan[x + c][y + c] == 1)
         {
            seluncur++;
            break;
         }
      }

      //rook
      for(c = 1; x - c > 0; c++)
      {
         if (papan[x - c][y] == 1)
         {
            benteng++;
            break;
         }
      }
      for(c = 1; x + c <= N; c++)
      {
         if (papan[x + c][y] == 1)
         {
            benteng++;
            break;
         }
      }
      for(c = 1; y - c > 0; c++)
      {
         if (papan[x][y - c] == 1)
         {
            benteng++;
            break;
         }
      }
      for(c = 1; y + c > 0; c++)
      {
         if (papan[x][y + c] == 1)
         {
            benteng++;
            break;
         }
      }

      if (kuda >= seluncur && kuda >= benteng)
         printf("1\n");
      else if (seluncur >= benteng && seluncur > kuda)
         printf("2\n");
      else if (benteng > kuda && benteng > seluncur)
         printf("3\n");
   }

   return 0;
}
