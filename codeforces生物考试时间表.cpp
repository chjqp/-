#include <stdio.h>
int main(void)
{
	int d,sumtime;
	scanf("%d %d",&d,&sumtime);
	int min[d],max[d];
	int sum_min=0,sum_max=0;
	
	
	for(int i=0;i<d;i++)
	{
		scanf("%d %d",&min[i],&max[i]);
		sum_min+=min[i];
		sum_max+=max[i];
		
	}
	if(sum_min<=sumtime&&sum_max>=sumtime)
	{
		printf("YES\n");
		int cnt=0;
	
	int sh=sumtime-sum_min;
	for(int i=0;i<d;i++)
	{
		if(sh>=max[i])
		{
			printf("%d ",max[i]);
			sh-=max[i];
			cnt++;
		}}
		
	for(;cnt<d;cnt++)
		{ if(sh>=min[cnt])
		{
			printf("%d ",sh);
			
		}}
		
	
	}
	else
		printf("NO");
	return 0;
	
	
	
	
}
