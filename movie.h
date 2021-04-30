#include<stdio.h> 

typedef struct {

  char movie_name[100];
  char director[50];
  float star;
  char genre[30];
  char date[15];
  int ranking;

} Movie;




//CRUD
void create(Movie *s, int count)
void read(Movie *s, int count)
void update(Movie *s, int num)
void delete(Movie *s, int num)
 
  
//Seach 
  
void searchDirector(Movie *s, int count)
void searchRank(Movie *s, int count)
