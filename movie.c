int selectMenu(){
        int menu;
        int i = 0;
        printf("\n*** 영화 정보 관리 프로그램 ***\n");
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        printf("5. 파일 저장\n");
        printf("6. 영화 제목 검색\n");
        printf("7. 영화 별점 검색\n");
        printf("8. 영화 감독 검색\n");
        printf("9. 영화 장르 검색\n");
        printf("0. 종료\n");
        printf("=> 원하는 메뉴는? ");
        scanf("%d", &menu);

        return menu;
}

int selectDataNo(Movie *m, int count){
        int num;
        listMovie(m, count); 
        printf("\n번호는 (취소:0)? "); 
        scanf("%d", &num); 

        return num;
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
        printf("=> 영화 정보가 추가되었습니다!\n");

        return 1;
}

void readMovie(Movie m){
        if(m.ranking!=-1){
		printf("%-20s / %-5s / %-3.1f / %-5s / %-10s / %d\n",
                m.movie_name, m.director, m.star, m.genre, m.date, m.ranking);
        }
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
        m-> ranking = -1; 
        printf("\n=> 선택한 영화가 삭제되었습니다!\n"); 

        return 1;
}

void listMovie(Movie *m, int count){
          printf("\nNo %-20s / %s / %s / %s / %s / %s \n", "Movie Title", "Director", "Start", "Genre", "Open Date", "Ranking");
	  printf("**************************************************************************\n");
          for(int i = 0; i < count; i++){ 
		if(m[i].ranking == -1) continue;
		printf("%2d ", i+1);
                readMovie(m[i]); 
        }
}

