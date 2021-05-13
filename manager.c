#include <stdlib.h>
#include <string.h>

void saveData(Movie *m, int count){
    FILE *fp;
    fp = fopen("movie.txt", "wt");

    for(int i = 0 ; i < count ; i++){
        if(m[i].ranking == -1) continue;
        fprintf(fp, "%s | %s %.1f %s %s %d\n", m[i].movie_name, m[i].director, m[i].star, m[i].genre, m[i].date, m[i].ranking);
    }

    fclose(fp);
    printf("성공적으로 저장되었습니다!\n");
}

int loadData(Movie *m){
    return 0;
}

void searchMovie(Movie *m, int count){
    int scnt = 0;
    char search_name[100];

    printf("검색할 영화 제목은? ");
    scanf("%s", search_name);

    printf("\nNo %-20s / %s / %s / %s / %s / %s \n", "Movie Title", "Director", "Start", "Genre", "Open Date", "Ranking");
	printf("**************************************************************************\n");
    for(int i = 0 ; i < count ; i++){
        if(m[i].ranking == -1) continue;
        if(strstr(m[i].movie_name, search_name)) {
            printf("%2d ", i+1);
            readMovie(m[i]);
            scnt++;
        }
    }
    if(scnt == 0){
        printf("=> 검색된 영화 제목이 없습니다!\n");
    }
}

void searchStar(Movie *m, int count){
    int scnt = 0;
    float search_star;

    printf("검색할 영화 별점은? ");
    scanf("%f", &search_star);

    printf("\nNo %-20s / %s / %s / %s / %s / %s \n", "Movie Title", "Director", "Start", "Genre", "Open Date", "Ranking");
	printf("**************************************************************************\n");
    for(int i = 0 ; i < count ; i++){
        if(m[i].ranking == -1) continue;
        if(m[i].star == search_star) {
            printf("%2d ", i+1);
            readMovie(m[i]);
            scnt++;
        }
    }
    if(scnt == 0){
        printf("=> 검색된 별점이 없습니다!\n");
    }
}   

void searchDirector(Movie *m, int count){

}

void searchGenre(Movie *m, int count){

}

