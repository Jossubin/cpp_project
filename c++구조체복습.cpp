#include <stdio.h> 
#include <math.h> 
struct Line {
int sx, sy;
int ex, ey;
};

int main() {
    struct Line myline;
    printf("시작점 좌표 정수 두 개를 입력하세요.\n"); 
    scanf("%d %d", &myline.sx, &myline.sy); 
    printf("끝점 좌표 정수 두 개를 입력하세요.\n"); 
    scanf("%d %d", &myline.ex, &myline.ey);
    
    double d = sqrt( pow(myline.ex - myline.sx, 2) + pow(myline.ey - myline.sy, 2) ); 
    printf("myline의 길이는 %f 입니다. \n", d);
}