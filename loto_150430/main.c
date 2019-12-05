#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define na_mega 6
#define np_mega 60
#define na_lf 15
#define np_lf 25

int main(int argc,char *argv[]){
int k,l,n,num;
int ym[np_mega],xm[na_mega],ym2[np_mega],xm2[na_mega];
int ylf[np_lf],xlf[na_lf];


char date_time[50];
time_t now = time(NULL);
struct tm *t = localtime(&now);
strftime(date_time, sizeof(date_time)-1, "%Y%m%d_%H%M%S", t);
printf("%s\n\n",date_time);

    k=0;
    l=0;
    n=0;

	for(k=0;k<np_mega;k++){
		xm[k]=0;
		ym[k]=0;
		xm2[k]=0;
		ym2[k]=0;
	}
	for(k=0;k<np_lf;k++){
		xlf[k]=0;
		ylf[k]=0;
	}
	srand(time(NULL));
	for(k=0;k<100;k++)
    {
		num=1+rand()%100;
	}
    printf("MegaSena\n----------------------------------------\n");
    for(k=0; k<na_mega; k++)
    {
        xm[k]=1+rand()%np_mega;
        for(n=0;n<2;n++)
        {
            for(l=0; l<k; l++)
            {
                if(xm[l] == xm[k])
                {
                    xm[k]=1+rand()%np_mega;
                    l=0;
                }
            }
        }
    }
    for(k=0;k<np_mega;k++)
    {
        ym[k]=0;
    }
    for(k=0;k<np_mega;k++)
    {
        for(l=0;l<np_mega;l++)
        {
            if(xm[k]==(l+1))
            {
                ym[l]=xm[k];
            }
        }
    }
    for(k=0;k<np_mega;k++)
    {
        if(ym[k]==0)
        {
            printf("    ");
        }
        else
        {
        printf("%4d",ym[k]);
        }
        if(k%10==9)
        {
            printf("\n");
        }
    }
    printf("----------------------------------------\n");
    for(k=0;k<np_mega;k++)
    {
		xm2[k]=0;
		ym2[k]=0;
	}

	for(k=0;k<100;k++)
    {
		num=1+rand()%100;
	}
    printf("MegaSena\n----------------------------------------\n");
    for(k=0; k<na_mega; k++)
    {
        xm2[k]=1+rand()%np_mega;
        for(n=0;n<2;n++)
        {
            for(l=0; l<k; l++)
            {
                if(xm2[l] == xm2[k])
                {
                    xm2[k]=1+rand()%np_mega;
                    l=0;
                }
            }
        }
    }
    for(k=0;k<np_mega;k++)
    {
        ym2[k]=0;
    }
    for(k=0;k<np_mega;k++)
    {
        for(l=0;l<np_mega;l++)
        {
            if(xm2[k]==(l+1))
            {
                ym2[l]=xm2[k];
            }
        }
    }
    for(k=0;k<np_mega;k++)
    {
        if(ym2[k]==0)
        {
            printf("    ");
        }
        else
        {
        printf("%4d",ym2[k]);
        }
        if(k%10==9)
        {
            printf("\n");
        }
    }
    printf("----------------------------------------\n");


	for(k=0;k<100;k++)
    {
		num=1+rand()%100;
	}
    printf("LotoFacil\n--------------------\n");
    for(k=0; k<na_lf; k++)
    {
        xlf[k]=1+rand()%np_lf;
        for(n=0;n<2;n++)
        {
            for(l=0; l<k; l++)
            {
                if(xlf[l] == xlf[k])
                {
                    xlf[k]=1+rand()%np_lf;
                    l=0;
                }
            }
        }
    }
    for(k=0;k<np_lf;k++)
    {
        ylf[k]=0;
    }
    for(k=0;k<np_lf;k++)
    {
        for(l=0;l<np_lf;l++)
        {
            if(xlf[k]==(l+1))
            {
                ylf[l]=xlf[k];
            }
        }
    }
    for(k=0;k<np_lf;k++)
    {
        if(ylf[k]==0)
        {
            printf("    ");
        }
        else
        {
        printf("%4d",ylf[k]);
        }
        if(k%5==4)
        {
            printf("\n");
        }
    }
    printf("--------------------\n");
	for(k=0;k<100;k++)
    {
		num=1+rand()%100;
	}
    printf("LotoFacil\n--------------------\n");
    for(k=0; k<na_lf; k++)
    {
        xlf[k]=1+rand()%np_lf;
        for(n=0;n<2;n++)
        {
            for(l=0; l<k; l++)
            {
                if(xlf[l] == xlf[k])
                {
                    xlf[k]=1+rand()%np_lf;
                    l=0;
                }
            }
        }
    }
    for(k=0;k<np_lf;k++)
    {
        ylf[k]=0;
    }
    for(k=0;k<np_lf;k++)
    {
        for(l=0;l<np_lf;l++)
        {
            if(xlf[k]==(l+1))
            {
                ylf[l]=xlf[k];
            }
        }
    }
    for(k=0;k<np_lf;k++)
    {
        if(ylf[k]==0)
        {
            printf("    ");
        }
        else
        {
        printf("%4d",ylf[k]);
        }
        if(k%5==4)
        {
            printf("\n");
        }
    }
    printf("--------------------\n");


char fim[50];
time_t now2 = time(NULL);
struct tm *t2 = localtime(&now2);
strftime(fim, sizeof(fim)-1, "%Y%m%d_%H%M%S", t2);
printf("%s\n\n",fim);
system("PAUSE");
}

