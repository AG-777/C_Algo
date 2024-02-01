#include <stdio.h>
void sort(int* arr,int len);
int main()
{
    int repeat;
    scanf("%d",&repeat);
    int maxtime_arr[repeat];
    int repeat_index=0;
    for(int z=0;z<repeat;z++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int cooking_time[n];
        for (int i= 0;i<n;i++){
            scanf("%d",&cooking_time[i]);
        }
        sort(cooking_time,n);
        int rate[n];
        int fatigue[n];
        for (int i= 0;i<n;i++){
            rate[i] = cooking_time[i];
            fatigue[i]= 2;
        }
        int predicting_time[n-1];
        int dish = 0;
        int max_time=cooking_time[n-1];
        
        int min_predicted_time = cooking_time[0];
        int cook_index=0;
        int previous_cook,previous_time;
        while(1){
            if(dish == m-n){
                break;
            }
            for(int i=0;i<n;i++){
                predicting_time[i] = cooking_time[i];
                predicting_time[i] += (rate[i]*fatigue[i]);
                if (predicting_time[i] < max_time){
                    min_predicted_time = predicting_time[i];
                    if(predicting_time[i]<min_predicted_time){
                        min_predicted_time =predicting_time[i];
                        cook_index =i;
                    }
                }
            }

            if(previous_time == min_predicted_time && previous_cook == cook_index){
                max_time=predicting_time[0];
                cook_index=0;
                min_predicted_time=max_time;
                for(int i=1;i<n;i++)
                {
                    if(max_time>predicting_time[i])
                    {
                        max_time = predicting_time[i];
                        cook_index=i;
                        min_predicted_time=max_time;
                    }
                }
            }
            
            cooking_time[cook_index]= min_predicted_time;

            dish++;
            previous_cook=cook_index;
            previous_time=min_predicted_time;
            fatigue[cook_index]++;
        }
        maxtime_arr[repeat_index]=max_time;
        repeat_index++;
    }
    for(int i=0;i<repeat;i++)
        printf("%d\n",maxtime_arr[i]);
    return 0;
}

void sort(int* arr,int len)
{
    int temp =0;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]=temp;
            }
        }
    }
}