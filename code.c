#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{     int a[5],i,j=0, maxiter,iter,t;
      float eps, f=1 , df=0,fm=1, newx,xo,x ;
      printf(" press 1 for newwton raphson , press 2 for regula falsi\n");
      scanf("%d",&t);
      if (t==1)
      {
          printf(" NEWTON RAPHSON first order \n enter the 5 coeffecients of the function starting from  a0 \n");

        for (i=0;i<5;i++)
        {
           scanf("%d", &a[i]);
        }
      printf(" enter the convergence epsilon  value and the maximum iteration size and the initial estimated value\n");
       scanf("%f %d %f", &eps ,&maxiter, &xo);
        x=xo;
        iter=0;
      while (iter<maxiter && abs(fm)>eps)
      {


            for (i=0;i<5;i++)
        {
            f= f +a[i]*pow(x,i);
        }
          printf(" ymnin degeri %f \n",f);
          for (i=1;i=4;i++)
            {
                df= df + a[i]*i*pow(x,(i-1));
            }

                newx= x - (float)f/df;
                printf(" xin degeri %f \n",newx);
                x = newx;
                  for (i=0;i<5;i++)
                   {
                   f= f +a[i]*pow(x,i);
                   }

                iter++;
            }


      } else
      {

            //regual falsi
            float xl, xr, fl=0,fr=0,fxm=1, xm ;
            printf(" regula falsi  \n enter the 5 coeffecients of the function starting from  a0 \n");

        for (i=0;i<5;i++)
        {
           scanf("%d", &a[i]);
        }
          printf(" enter xl xr and epsilon value\n");
       scanf("%f %f %f", &xl , &xr, &eps);
       while(abs(fxm)>eps)
       {



       for (i=0;i<5;i++)
        {
            fr= fr +a[i]*pow(xr,i);
        }
          printf(" frin degeri %f \n",fr);
          for (i=0;i<5;i++)
        {
            fl= fl +a[i]*pow(xl,i);
        }
          printf(" flnin degeri %f \n",fl);


            xm=(float)((xl*fr)-(xr*fl))/(fr-fl);
            printf(" xmin degeri %f \n",xm);

          for (i=0;i<5;i++)
        {
            fxm= fxm +a[i]*pow(xm,i);
        }
          printf(" fxmin degeri %f \n",fxm);


          if (fxm*fl<0)
          {
              xr=xm;
          }
          else
          {
              xl=xm;
          }
        printf(" xr %f, xl %f degerleri  \n",xr,xl);

        }
        }
            return 0 ;
}
