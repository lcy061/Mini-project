#include <stdio.h> 

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
int selectDataNo(Score s[], int count);

//CRUD
void Create(Movie *s, int count);
void Read(Movie *s, int count);
void Update(Movie *s, int num);
void Delete(Movie *s, int num);

//Save&Load
void saveData(Movie *s, int count);
int loadData(Movie *s);

//Search
void searchMovie(Movie *s, int count);
void searchStar(Movie *s, int count);
void searchDirector(Movie *s, int count);
void searchGenre(Movie *s, int count);
