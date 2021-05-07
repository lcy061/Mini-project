// main.c
#include "movie.h"
#include "movie.c"

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
                        readMovie(*mlist);
                        // listMovie(mlist, index);
                }
                else if(menu == 2){
                        count += createMovie(&mlist[index++]);
                }
                else if(menu == 3){
                       /* int no = selectDataNo(mlist, index);
                        if(no == 0){
                                printf("=> 취소됨!\n");
                                continue;
                        }
                        updateMovie(&mlist[no-1]);*/
                        updateMovie(mlist);
                }
                else if(menu == 4){
                                int no = selectDataNo(mlist, index);
                                if(no == 0){
                                        printf("=> 취소됨!\n");
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

        }
        printf("종료됨!\n");
        return 0;
}
