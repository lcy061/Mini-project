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
    int max = 50; 
    int count = 0; 
    FILE *fp;
    fp = fopen("movie.txt", "rt");

    if(fp == NULL){
    	printf("\n=> 불러올 파일이 없습니다!\n");
	return 0;
    }

    while( EOF!=fscanf(fp, "%s | %s %f %s %s %d\n", m[count].movie_name, m[count].director, &m[count].star, m[count].genre, m[count].date, &m[count].ranking)){         

        count++; 

    }

    fclose(fp);
    printf("성공적으로 불러오기 되었습니다!\n");


    return count;
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
    int scnt = 0;
    char name[50];

        printf("검색할 감독은? ");
        scanf("%s", name); 
        
        printf("\nNo %-20s / %s / %s / %s / %s / %s \n", "Movie Title", "Director", "Start", "Genre", "Open Date", "Ranking");
	printf("**************************************************************************\n");

        for(int i=0; i<count; i++){ 
                if(m[i].ranking == -1) continue;
                if(!strcmp(name, m[i].director)){ 
                        printf("%2d ", i+1);
                        readMovie(m[i]);                        
                        scnt++;                        
                }
        }
        if(scnt == 0){
        printf("=> 검색된 감독이 없습니다!\n");
    }    
}

void searchGenre(Movie *m, int count){
    int scnt = 0;
    char name[50];

        printf("검색할 장르는? ");
        scanf("%s", name); 
        
        printf("\nNo %-20s / %s / %s / %s / %s / %s \n", "Movie Title", "Director", "Start", "Genre", "Open Date", "Ranking");
	printf("**************************************************************************\n");

    for(int i=0; i<count; i++){ 
                if(m[i].ranking == -1) continue;
                if(!strcmp(name, m[i].genre)){ 
                        printf("%2d ", i+1);
                        readMovie(m[i]);                        
                        scnt++;                                
                }
    }     
    if(scnt == 0){
        printf("=> 검색된 장르가 없습니다!\n");
    }

}


