            #include<stdio.h>
            #include<conio.h>
            #include<graphics.h>

            void main()
            {
            int i, driver=DETECT, mode=0;
            initgraph(&driver, &mode, "c:\\tc3\bgi");
            circle(200,160,65);
            setfillstyle(1,RED);
            floodfill(200,160,WHITE);
            rectangle(100,100,300,220);
            setfillstyle(1,GREEN);
            floodfill(102,102,WHITE);
            getch();
            }
