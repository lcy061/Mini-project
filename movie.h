#include <stdio.h> 
#include <string.h> 

// 구조체 선언
typedef struct {
  char movie_name[100];
  char director[50];
  float star;
  char genre[30];
  char date[15];
  int ranking;
} Movie;

//Menu
int selectMenu();
int selectDataNo(Movie *m, int count);

//CRUD
int createMovie(Movie *m);
void readMovie(Movie m);
void updateMovie(Movie *m);
int deleteMovie(Movie *m);
void listMovie(Movie *m, int count);

//Save&Load
void saveData(Movie *m, int count);
int loadData(Movie *m);

//Search
void searchMovie(Movie *m, int count);
void searchStar(Movie *m, int count);
void searchDirector(Movie *m, int count);
void searchGenre(Movie *m, int count);
