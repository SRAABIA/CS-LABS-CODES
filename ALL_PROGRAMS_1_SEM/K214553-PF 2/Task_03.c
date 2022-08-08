#include<stdio.h>
int main(){
	float NOL,OLM,LMN,MNO,s1,s2,s3,s4,sum,l,m,n,o;
	printf("\tEnter lengths of four sides\n");
    scanf("%f%f%f%f",&s1,&s2,&s3,&s4);
    printf("\n\tNow you are required to enter four angles of quadrilateral\n");
    scanf("%f%f%f%f",&NOL,&OLM,&LMN,&MNO); 
    sum=NOL+OLM+LMN+MNO;
    if(sum==360)
    {
        if(s1==s2 && s2==s3&& s3==s4 && s4==s1)
        {
            if(NOL==90&&OLM==90&&LMN==90&&MNO==90)
            {printf("\nSQUARE.\n");
            }
            else if(NOL==LMN && MNO==OLM && LMN!=MNO && LMN!=90 && NOL!=90 && MNO!=90 && OLM!=90)
            {printf("\nRHOMBUS\n");
            }
        }
        else if(s1==s3 &&s2==s4 && s2!=s3 )
        {
            if(NOL==90 && OLM==90 && LMN==90 && MNO==90)
            {printf("\nRECTANGLE\n");
            }
            else if(NOL==LMN && OLM==MNO && LMN!=OLM)
            {printf("\nPARALLELOGRAM\n");
            }
        }
        else if((s1==s3&&s2==s4)||(s1==s4 && s2==s3)||(s1==s2 && s3==s4))
        {if(NOL==OLM){
        printf("\nKITE\n");
        }}
        else if(s1!=s2 && s2!=s3 && s3!=s4 && s4!=s1)
        {printf("\nTRAPEZOID\n");
        }

    }
    else
    printf("NOT A QUADRILATERAL");
}
