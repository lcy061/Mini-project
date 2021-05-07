int selectMenu(){
        int menu;
        printf("\n*** 영화 정보 관리 프로그램 ***\n");
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        printf("0. 종료\n");
        printf("=> 원하는 메뉴는? ");
        scanf("%d", &menu);

        return menu;
}

int createMovie(Movie *m){
        getchar();
        printf("영화 제목은? ");
        scanf("%[^\n]s", m->movie_name);
        getchar();
        printf("영화 감독은? ");
        scanf("%s", m->director);
        printf("영화 별점은? ");
        scanf("%f", &m->star);
        printf("영화 장르는? ");
        scanf("%s", m->genre);
        printf("개봉 날짜는? ");
        scanf("%s", m->date);
        printf("영화 순위는? ");
        scanf("%d", &m->ranking);
        printf("=> 추가됨!\n");

        return 1;
}

void readMovie(Movie m){
        printf("Movie Title\t Director Star Genre Date Ranking\n");
        printf("%15s %10s %.1f %6s %s %2d\n",
        m.movie_name, m.director, m.star, m.genre, m.date, m.ranking);
}

int selectDataNo(Movie *m, int count){
        return 0;
}

void updateMovie(Movie *m){
        getchar();
        printf("수정할 영화 제목은? ");
        scanf("%[^\n]s", m->movie_name);
        getchar();
        printf("수정할 영화 감독은? ");
        scanf("%s", m->director);
        printf("수정할 영화 별점은? ");
        scanf("%f", &m->star);
        printf("수정할 영화 장르는? ");
        scanf("%s", m->genre);
        printf("수정할 개봉 날짜는? ");
        scanf("%s", m->date);
        printf("수정할 영화 순위는? ");
        scanf("%d", &m->ranking);
        printf("=> 수정됨!\n");

}

int deleteMovie(Movie *m){
        return 0;

}

void listMovie(Movie *m, int count){
}

