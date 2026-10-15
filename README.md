#include <stdio.h>

void exerc1(){
    int score;
    int count = 0;
    int sum = 0;

    while(count < 3){
        printf("점수를 입력하세요 (0~100, 종료: -1): ");
        scanf("%d", &score);
        if (score == -1){
            break;
        }
        if (score < 0 || score > 100){
            printf("0~100 사이의 값을 입력하세요.\n");
            continue;
        }
        sum += score;
        count ++;
    }
    if (count == 0){
        printf("입력된 점수가 없습니다.\n");
    } else {
        printf("유효한 점수의 개수: %d개\n", count);
        printf("평균값: %.2f\n", (double)sum / count);
    }
}

void exerc2(){
    int num;
    int test1 = 0;
    int test2 = 0;
    int total = 0;

    while(test2 < 3){
        printf("1~9 사이의 정수를 입력하세요: ");
        scanf("%d", &num);
        if (num < 1 || num > 9){
            printf("1~9 사이의 값을 입력하세요.\n");
            continue;
        }
        total ++;
        if (num == test1){
            test2 ++;
        } else {
            test1 = num;
            test2 = 1;
        }
    }
    printf("3번 연속 입력된 숫자: %d\n", test1);
    printf("전체 입력 횟수: %d회\n", total);
}

// 속이 빈 정사각형
void exerc3(){
    int n;

    while(1){
        printf("1~9 사이의 정수를 입력하세요: ");
        scanf("%d", &n);
        if (n >= 1 && n <= 9){
            break;
        }
        printf("1~9 사이의 값을 입력하세요.\n");
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    // exerc1();
    // exerc2();
    exerc3();
    return 0;
}
-------------------------------------------------------------------------------------------------------------
void exerc1(void){
    int n, r, abs_r;
    double x;

    x = 1.0;

    printf("input n, r: ");
    scanf("%d%d", &n, &r);

    if(r < 0) abs_r = -r;
    else abs_r = r;

    for(int i=0; i < abs_r; i++){
        x *= n;
    }
    if(r < 0) x = 1.0 / x;

    printf("%d의 %d승은 %lf 입니다.", n, r, x);
}

void exerc2(void){
    int n, result;
    result = 1;
    
    printf("input n: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i--) result *= i;
    printf("%d factorial = %d입니다.", n, result);
}

void exerc3(void){
    int n;
    int n_1, n_2, result;
    n_1 = 1;
    n_2 = 0;

    printf("input n: ");
    scanf("%d", &n);

    if(n == 0)result = n_2;
    else if(n == 1) result = n_1;
    else{
        for(int i=2; i<=n; i++){
            result = n_1 + n_2;
            n_2 = n_1;
            n_1 = result;
        }
    }
    printf("%d 번째 숫자는 %d 입니다.", n, result);
}

void exerc4(void){
    int sum;
    double avg;
    int score;
    int i = 0;
    while(1){
        printf("input score: ");
        scanf("%d", &score);

        // if(score == -1) break;
        if(score == -1) continue;
        sum += score;
        i++;
        // printf("run\n");
    }
    avg = sum / (double)i;
    printf("avg = %lf\n", avg);
}

void exerc5(void){
    char star = '*';
    int line;
    printf("input line: ");
    scanf("%d", &line);
    for(int i=0; i < line; i++){
        int star_count = i * 2 + 1;
        for(int j=0; j < star_count; j++) printf("%c", star);
        printf("\n");
    }
}

void printStar(void){
    char star = '*';
    int line;
    printf("input line: ");
    scanf("%d", &line);
    for(int i=0; i < line; i++){
        int space_count = line - i - 1;
        int star_count = i * 2 + 1;
        for(int j=0; j < space_count; j++) printf(" ");
        for(int j=0; j < star_count; j++) printf("%c", star);
        printf("\n");
    }
}

int main(){
    // exerc1();
    // exerc2();
    // exerc3();
    // exerc4();
    // exerc5();
    printStar();
    return 0;
}
