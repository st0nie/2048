#include "rand.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "move.h"

int Random(GAMEMAP *my_gamemap)
{
    int (*mymap)[4]=my_gamemap->map;
    int i,j,k,zeros=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            int n=0;
            n=*(*(mymap+i)+j);
            if(n==0)
            {
                zeros++;
            }
        }
    }
    srand(time(NULL)+zeros*50000);
    if(zeros==0)
    {
        return 1;
    }
    int index =1+rand()%zeros;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            int n=0;
            n=*(*(mymap+i)+j);
            if(n==0)
            {
                k++;
                if(k==index)
                {
					if (rand()%2){
					  *(*(mymap+i)+j)=2;
					} else {
					  *(*(mymap+i)+j)=4;
					}
                }
            }
        }
    }
    /* if(!can_move(my_gamemap)) */
    /* { */
    /*     return 1; */
    /* } */
    return 0;
}