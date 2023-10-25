#include <stdio.h>
#include <stdbool.h>

int same(char _class[][9][9], int current);

int main()
{
	int n;
	scanf("%d", &n);
	
	char _class[100][9][9]={}; 
	
	for (int cnt = 0; cnt < n; cnt++)
	{
		for (int i = 0; i < 8; i++)
		{
//			for (int j = 0; j < 8; j++)
//			{
//				scanf("%s", _class[cnt][i]); 
//			}
			scanf("%s", _class[cnt][i]);
			getchar();
			_class[cnt][i][8]='\0';
			//	printf("ans:%s\n",_class[cnt][i]);
		}
	}
	
	int number[n]={};
	
	for (int cnt = 0; cnt < n; cnt++)
	{
		number[cnt]=same(_class,cnt);
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}
	
	return 0;
}

int same(char _class[][9][9], int current)
{
	int cishu=1;
	bool sim=true;
	
	for (int i = 0; i < current; i++)
	{
		for (int x = 0; x < 8; x++)
		{
			for (int y = 0; y < 8; y++)
			{
				if (_class[current][x][y] != _class[i][x][y])
				{
					sim=false;
					
				}
				
			}
		}
		
		if(sim)
			cishu++;
		sim=true;
	}
	
	return cishu;
	//
	//
}

