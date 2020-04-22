#include <stdio.h>
int main()
{
    float light, distance, time;
    int time_min, time_sec;
    
    light = 3000000.;
    distance = 149600000.;

    time = distance / light;
    time_min = (int)time;
    time_sec = (time-time_min) / 60;
    time_sec = (int)time_sec;

    printf("Speed of light : %fkm.s", light);
    printf("Distance of between sun and earth : %fkm", distance);
    printf("Arrival time : %d분 %d초", time_min, time_sec);

    return 0;
}