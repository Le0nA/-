#include <iostream>
#include <GL/glut.h>
#include <cmath>
#include <vector>

#define PI 3.14159265

using namespace std;

struct Date
{
    int dd;
    int mm;
    int year;
};

struct SolarPlanet
{
float x;
float y;
float m;
float perigel;
float aphel;
float vp;
float period;
float xper;
float r;
float agl;
float beta;
float e;
float alpha;
};

Date risedate(Date& cur) {
        if ((cur.mm == 1) && (cur.dd == 31)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 2) && (cur.dd == 28) && (cur.year % 4 != 0)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 2) && (cur.dd == 29) && (cur.year % 4 == 0)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 3) && (cur.dd == 31)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 4) && (cur.dd == 30)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 5) && (cur.dd == 31)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 6) && (cur.dd == 30)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 7) && (cur.dd == 31)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 8) && (cur.dd == 31)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 9) && (cur.dd == 30)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 10) && (cur.dd == 31)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 11) && (cur.dd == 30)) {
            cur.mm++;
            cur.dd = 0;
        }
        if ((cur.mm == 12) && (cur.dd == 31)) {
            cur.mm = 1;
            cur.dd = 0;
            cur.year++;
        }
        cur.dd++;
        cout << cur.dd << " " << cur.mm << " " << cur.year << endl;
        return cur;
    }


const int N = 10;
SolarPlanet solarsystem[N];

const int n = 0;
Date current[n];

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POINTS);
glPointSize(50);
glColor3d(1, 1, 1);
for(int i = 0; i < N; i++) {
    glVertex2f(solarsystem[i].x, solarsystem[i].y);
}

glEnd();

glBegin(GL_POINTS);
glPointSize(50);
glColor3d(1,0,0);
glVertex2f(400, 400);
glEnd();

glutSwapBuffers();
}

void timer(int = 0)
{
    Date &d = current[0];
    SolarPlanet &sun = solarsystem[0];
    for(int i = 1; i < N; i++) {
        SolarPlanet &planet = solarsystem[i];
        for (int j = 1; j < N; j++) {
            float step = 0.08;
            float fi = planet.agl + (planet.vp / (planet.perigel / 10)) * ((planet.perigel / 10) * (planet.perigel / 10) / (planet.r * planet.r)) * step + planet.e * step * step / 2.0;
            float rast1 = (planet.perigel / 10) * ((planet.alpha + 1.0) * cos(fi) - planet.alpha);
            planet.r = rast1;
            planet.agl = fi;
    }
    planet.x = 400.0 + planet.r * cos(2 * PI - planet.agl + planet.beta) * 10;
    planet.y = 400.0 + planet.r * sin(2 * PI - planet.agl + planet.beta) * 10;
    }
    risedate(d);
display();
glutTimerFunc(1000, timer, 0);
}

int main(int argc, char **argv) {

solarsystem[0].x = 400;
solarsystem[0].y = 400;
solarsystem[0].m = 1989100000 * pow(10, 21);
solarsystem[0].aphel = 0;
solarsystem[0].perigel = 0;
solarsystem[0].period = 0;
solarsystem[0].vp = 0;
solarsystem[0].xper = 0;

solarsystem[1].x = 400 - 0.3154783 * 10;
solarsystem[1].y = 400 - 0.3188370 * 10;
solarsystem[1].m = 330 * pow(10, 21);
solarsystem[1].aphel = 0.46670079 * 10;
solarsystem[1].perigel = 0.30749951 * 10;
solarsystem[1].period = 7600608;
solarsystem[1].vp = 3943 * pow (10, -10);
solarsystem[1].xper = 0.0743183 * 10;

solarsystem[2].x = 400 - 0.5504261 * 10;
solarsystem[2].y = 400 + 0.4602301 * 10;
solarsystem[2].m = 4870 * pow(10, 21);
solarsystem[2].aphel = 0.72823128 * 10;
solarsystem[2].perigel = 0.71843270 * 10;
solarsystem[2].period = 19413907.2;
solarsystem[2].vp = 2357 * pow(10, -10);
solarsystem[2].xper = - 0.4740288 * 10;

solarsystem[3].x = 400 - 0.1731202 * 10;
solarsystem[3].y = 400 + 0.9679650 * 10;
solarsystem[3].m = 5973.6 * pow (10, 21);
solarsystem[3].aphel = 1.01671388 * 10;
solarsystem[3].perigel = 0.98329134 * 10;
solarsystem[3].period = 31558152.96;
solarsystem[3].vp = 2025 * pow(10, -10);
solarsystem[3].xper = - 0.2141476 * 10;

solarsystem[4].x = 400 + 1.0867562 * 10;
solarsystem[4].y = 400 + 0.9650631 * 10;
solarsystem[4].m = 641.85 * pow(10, 21);
solarsystem[4].aphel = 1.666 * 10;
solarsystem[4].perigel = 1.381 * 10;
solarsystem[4].period = 59355072;
solarsystem[4].vp = 1771 * pow(10, -10);
solarsystem[4].xper = 1.2645198 * 10;

solarsystem[5].x = 400 - 2.1310672 * 10;
solarsystem[5].y = 400 - 4.9077657 * 10;
solarsystem[5].m = 1898600 * pow(10, 21);
solarsystem[5].aphel = 5.204267 * 10;
solarsystem[5].perigel = 4.950429 * 10;
solarsystem[5].period = 374335689.6;
solarsystem[5].vp = 917 * pow(10, -10);
solarsystem[5].xper = 4.7934712 * 10;

solarsystem[6].x = 400 + 2.0060805 * 10;
solarsystem[6].y = 400 - 9.8767645 * 10;
solarsystem[6].m = 568460 * pow(10, 21);
solarsystem[6].aphel = 10.116 * 10;
solarsystem[6].perigel = 9.048 * 10;
solarsystem[6].period = 929596608;
solarsystem[6].vp = 680 * pow(10, -10);
solarsystem[6].xper = 0.6056345 * 10;

solarsystem[7].x = 400 + 17.0151491 * 10;
solarsystem[7].y = 400 + 10.2495490 * 10;
solarsystem[7].m = 86832 * pow(10, 21);
solarsystem[7].aphel = 19.22941195 * 10;
solarsystem[7].perigel = 18.37551863 * 10;
solarsystem[7].period = 2651218560;
solarsystem[7].vp = 475 * pow(10, -10);
solarsystem[7].xper = - 18.3127901 * 10;

solarsystem[8].x = 400 + 29.0043138 * 10;
solarsystem[8].y = 400 - 7.3410985 * 10;
solarsystem[8].m = 102430 * pow(10, 21);
solarsystem[8].aphel = 30.44125206 * 10;
solarsystem[8].perigel = 29.76607095 * 10;
solarsystem[8].period = 5196817440;
solarsystem[8].vp = 368 * pow(10, -10);
solarsystem[8].xper = 19.6276826 * 10;

solarsystem[9].x = 400 + 12.0007258 * 10;
solarsystem[9].y = 400 - 31.4251214 * 10;
solarsystem[9].m = 13.105 * pow(10, 21);
solarsystem[9].aphel = 39.482117 * 10;
solarsystem[9].perigel = 29.667 * 10;
solarsystem[9].period = 7823780928;
solarsystem[9].vp = 408 * pow(10, -10);
solarsystem[9].xper = - 20.3687941 * 10;

current[0].dd = 0;
current[0].mm = 1;
current[0].year = 2019;


for (int i = 1; i < N; i++) {
        float G = 6.67408 * pow(10, -11);
    solarsystem[i].r = sqrt((solarsystem[i].x - solarsystem[0].x) * (solarsystem[i].x - solarsystem[0].x) +
                            (solarsystem[i].y - solarsystem[0].y) * (solarsystem[i].y - solarsystem[0].y)) / 10;
    solarsystem[i].beta = acos((solarsystem[i].xper)/solarsystem[i].perigel);
    solarsystem[i].alpha = -1.0 * (G * (solarsystem[0].m + solarsystem[i].m) / (solarsystem[i].perigel / 10 * 149597870700) / (solarsystem[i].vp * 149597870700) / (solarsystem[i].vp * 149597870700));
    float rs = solarsystem[i].r / (solarsystem[i].perigel / 10);
    float argfi = (1 + solarsystem[i].alpha * rs) / (solarsystem[i].alpha * rs + rs);
    solarsystem[i].e = sqrt(1.0 - solarsystem[i].perigel * solarsystem[i].perigel / (solarsystem[i].aphel * solarsystem[i].aphel));
    solarsystem[i].agl = acos(argfi);
}

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(1200, 1200);
glutInitWindowPosition(20, 810);
glutCreateWindow("Solar system");
glClearColor(0, 0, 0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0, 800, 800, 0, -1, 1);
glutDisplayFunc(display);
timer();
glutMainLoop();
}
