#include<stdio.h>
#include<string.h>

struct Team
{
    char name[30];
    int runs,wickets;
    int over,ball;
};

struct Batter
{
    char name[30];
    int runs,balls,four,six;
};

struct Bowler
{
    char name[30];
    int over,ball,runs,wickets;
};

void scorecard(struct Team t,struct Batter s,struct Batter ns,struct Bowler b,char last[])
{
    float crr=0;

    if(t.over!=0 || t.ball!=0)
        crr=t.runs/(t.over+t.ball/6.0);

    printf("\n\n====================================================");
    printf("\n               CRICBUZZ LIVE SCORECARD");
    printf("\n====================================================");

    printf("\n%s  %d/%d (%d.%d)",
           t.name,t.runs,t.wickets,t.over,t.ball);

    printf("\nCRR : %.2f",crr);

    printf("\n----------------------------------------------------");
    printf("\nBATTERS              R    B    4s   6s");
    printf("\n----------------------------------------------------");

    printf("\n%-18s %2d   %2d   %2d   %2d *",
           s.name,s.runs,s.balls,s.four,s.six);

    printf("\n%-18s %2d   %2d   %2d   %2d",
           ns.name,ns.runs,ns.balls,ns.four,ns.six);

    printf("\n----------------------------------------------------");

    printf("\nBowler : %s",b.name);
    printf("\nFigures : %d.%d - %d - %d",
           b.over,b.ball,b.runs,b.wickets);

    printf("\nLast Ball : %s",last);

    printf("\n====================================================");
}

int main()
{
    struct Team t1,t2;
    struct Batter striker,nonstriker,temp;
    struct Bowler bowler;

    int ch,run,target=0;
    char last[5]="-";

    printf("Enter Team 1 : ");
    scanf("%s",t1.name);

    printf("Enter Team 2 : ");
    scanf("%s",t2.name);

    printf("Enter Striker : ");
    scanf("%s",striker.name);

    printf("Enter Non-Striker : ");
    scanf("%s",nonstriker.name);

    printf("Enter Bowler : ");
    scanf("%s",bowler.name);

    t1.runs=t1.wickets=t1.over=t1.ball=0;

    striker.runs=striker.balls=striker.four=striker.six=0;
    nonstriker.runs=nonstriker.balls=nonstriker.four=nonstriker.six=0;

    bowler.over=bowler.ball=bowler.runs=bowler.wickets=0;

    while(1)
    {
        scorecard(t1,striker,nonstriker,bowler,last);

        printf("\n\n1.Add Runs");
        printf("\n2.Wicket");
        printf("\n3.Dot Ball");
        printf("\n4.Change Bowler");
        printf("\n5.End Innings");

        printf("\nChoice : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Runs (0,1,2,3,4,6): ");
            scanf("%d",&run);

            t1.runs+=run;
            striker.runs+=run;
            striker.balls++;

            bowler.runs+=run;
            bowler.ball++;

            sprintf(last,"%d",run);

            if(run==4)
                striker.four++;

            if(run==6)
                striker.six++;

            t1.ball++;

            if(run==1 || run==3)
            {
                temp=striker;
                striker=nonstriker;
                nonstriker=temp;
            }
        }

        else if(ch==2)
        {
            t1.wickets++;
            striker.balls++;

            bowler.wickets++;
            bowler.ball++;
            t1.ball++;

            strcpy(last,"W");

            printf("New Batsman : ");
            scanf("%s",striker.name);

            striker.runs=0;
            striker.balls=0;
            striker.four=0;
            striker.six=0;
        }

        else if(ch==3)
        {
            striker.balls++;
            bowler.ball++;
            t1.ball++;

            strcpy(last,".");
        }

        else if(ch==4)
        {
            printf("New Bowler : ");
            scanf("%s",bowler.name);

            bowler.over=0;
            bowler.ball=0;
            bowler.runs=0;
            bowler.wickets=0;
        }

        else if(ch==5)
        {
            target=t1.runs+1;
            printf("\n\n%s scored %d/%d",
                   t1.name,t1.runs,t1.wickets);

            printf("\nTarget for %s : %d\n",
                   t2.name,target);

            break;
        }

        if(t1.ball==6)
        {
            t1.over++;
            t1.ball=0;

            bowler.over++;
            bowler.ball=0;

            temp=striker;
            striker=nonstriker;
            nonstriker=temp;

            printf("\n******** END OF OVER ********\n");
        }

        if(t1.over==20 || t1.wickets==10)
        {
            target=t1.runs+1;
            break;
        }
    }
    /* ---------- SECOND INNINGS ---------- */

printf("\n\n========== SECOND INNINGS ==========\n");

strcpy(striker.name,"Player1");
strcpy(nonstriker.name,"Player2");
strcpy(bowler.name,"Bowler1");

striker.runs=striker.balls=striker.four=striker.six=0;
nonstriker.runs=nonstriker.balls=nonstriker.four=nonstriker.six=0;

bowler.over=0;
bowler.ball=0;
bowler.runs=0;
bowler.wickets=0;

t2.runs=0;
t2.wickets=0;
t2.over=0;
t2.ball=0;

while(1)
{
    int need,ballsLeft;

    scorecard(t2,striker,nonstriker,bowler,last);

    need=target-t2.runs;
    ballsLeft=(20-t2.over)*6-t2.ball;

    printf("\nNeed %d Runs From %d Balls",need,ballsLeft);

    printf("\n\n1.Add Runs");
    printf("\n2.Wicket");
    printf("\n3.Dot Ball");
    printf("\n4.Change Bowler");
    printf("\n5.End Match");

    printf("\nChoice : ");
    scanf("%d",&ch);

    if(ch==1)
    {
        printf("Runs (0,1,2,3,4,6): ");
        scanf("%d",&run);

        t2.runs+=run;
        striker.runs+=run;
        striker.balls++;

        bowler.runs+=run;
        bowler.ball++;
        t2.ball++;

        sprintf(last,"%d",run);

        if(run==4)
            striker.four++;

        if(run==6)
            striker.six++;

        if(run==1 || run==3)
        {
            temp=striker;
            striker=nonstriker;
            nonstriker=temp;
        }
    }

    else if(ch==2)
    {
        t2.wickets++;
        striker.balls++;

        bowler.wickets++;
        bowler.ball++;
        t2.ball++;

        strcpy(last,"W");

        printf("New Batsman : ");
        scanf("%s",striker.name);

        striker.runs=0;
        striker.balls=0;
        striker.four=0;
        striker.six=0;
    }

    else if(ch==3)
    {
        striker.balls++;
        bowler.ball++;
        t2.ball++;

        strcpy(last,".");
    }

    else if(ch==4)
    {
        printf("New Bowler : ");
        scanf("%s",bowler.name);

        bowler.over=0;
        bowler.ball=0;
        bowler.runs=0;
        bowler.wickets=0;
    }

    else if(ch==5)
        break;

    if(t2.ball==6)
    {
        t2.over++;
        t2.ball=0;

        bowler.over++;
        bowler.ball=0;

        temp=striker;
        striker=nonstriker;
        nonstriker=temp;
    }

    if(t2.runs>=target)
    {
        printf("\n\n%s WON BY %d WICKETS",
               t2.name,10-t2.wickets);
        break;
    }

    if(t2.over==20 || t2.wickets==10)
        break;
}

if(t2.runs<target)
{
    printf("\n\n%s WON BY %d RUNS",
           t1.name,target-t2.runs-1);
}

printf("\n\n========== MATCH SUMMARY ==========");
printf("\n%s : %d/%d",t1.name,t1.runs,t1.wickets);
printf("\n%s : %d/%d",t2.name,t2.runs,t2.wickets);
printf("\n==================================");

return 0;
}