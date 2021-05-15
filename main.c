// main.c
#include "movie.h"
#include "movie.c"
#include "manager.c"

int main(){
        Movie mlist[100];
        int index = 0;
        int count = 0;
        int menu;

        while(1){
                menu = selectMenu();
                if(menu == 0) break;
                if(menu == 1 || menu == 3 || menu == 4){
                        if(count == 0){
                                printf("데이터가 없습니다.\n");
                                continue;
                        }
                }
                if(menu == 1){
                        listMovie(mlist, index);
                }
                else if(menu == 2){
                        count += createMovie(&mlist[index++]);
                }
                else if(menu == 3){
                       int no = selectDataNo(mlist, index);
                       if(no == 0){
                                printf("=> 취소되었습니다!\n");
                                continue;
                        }
                        updateMovie(&mlist[no-1]);
                }
                else if(menu == 4){
                                int no = selectDataNo(mlist, index);
                                if(no == 0){
                                        printf("=> 취소되었습니다!\n");
                                        continue;
                                }
                                int delok;
                                printf("정말로 삭제하시겠습니까?(삭제:1)");
                                scanf("%d", &delok);

                                if(delok == 1){
                                    if(deleteMovie(&mlist[no-1])) count--;
                                }
                                else continue;
                }
                else if(menu == 5){
                        saveData(mlist, index);
                }
                else if(menu == 6){
                        index = loadData(mlist);
                        count = index; 
                }
                else if(menu == 7){
                        searchMovie(mlist, index);
                }
                else if(menu == 8){
                        searchStar(mlist, index);
                }
                else if(menu == 9){
                        searchDirector(mlist, index);
                }
                else if(menu == 10){
                        searchGenre(mlist, index);
                }
        }
        printf("\n=> 프로그램이 종료 되었습니다!\n");        

	return 0;
}


