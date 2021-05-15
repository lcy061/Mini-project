# 프로그램 기능 설명

## 메인 메뉴

* selectMenu()
 > + main 함수에서 불려지는 함수로, 사용자가 추가, 수정, 삭제, 종료 등의 기능을 수행할 수 있도록 메뉴를 선택하게 하는 함수이다.   
 > + 이 함수의 return type은 int형으로, 사용자가 입력하는 숫자가 리턴되게 하여 main함수에서 숫자에 맞는 기능 함수를 부르게 한다.   
 > + 아래 사진은 사용자가 종료 메뉴 숫자인 '0'을 입력하면, 프로그램이 종료되는 결과 이미지이다.
<img width="243" alt="KakaoTalk_20210508_212825687_04" src="https://user-images.githubusercontent.com/61354751/117539177-7315b800-b044-11eb-925a-93cfe21508ca.png">

## CRUD


### 영화 정보 생성
* createMovie(Movie *m) 
 > + 사용자로부터 추가하고자 하는 영화의 정보를 입력받는 함수이다.   
 > + 영화 제목, 영화 감독, 영화 별점, 영화 장르, 개봉 날짜, 영화 순위를 입력 받아 영화 정보를 프로그램에 추가한다.
 > + return type은 int형으로, 성공적으로 추가가 되면 1을 return 한다. 
 > + 이 return값은 main함수에서 영화 데이터의 개수에 영향을 미친다.   
 
 <img width="263" alt="KakaoTalk_20210508_212825687_02" src="https://user-images.githubusercontent.com/61354751/117539204-9476a400-b044-11eb-8f4d-b415d74948f0.png">

 
 ### 영화 정보 읽기
 
 * readMovie(Movie m)
 > + 저장된 영화 중 하나의 정보를 불러와 출력하는 함수이다. 
 > + 영화 제목, 영화 감독, 영화 별점, 영화 장르, 개봉 날짜, 영화 순위 등을 화면 상에 출력한다.

* listMovie(Movie *m, int count)
> + readMovie함수를 사용하여, 영화 정보의 전체 목록을 불러오는 함수이다. 
> + 삭제 된 상태의 정보를 미리 제거하고 출력한다. 
> 

<img width="531" alt="KakaoTalk_20210508_212825687" src="https://user-images.githubusercontent.com/61354751/117539186-7f9a1080-b044-11eb-9a1e-a0143cd69939.png">



 ### 영화 정보 수정
 * updateMovie(Movie *m)
 > + 추가한 영화 정보를 수정할 때에 사용되는 함수이다.   
 > + 수정할 영화 제목, 수정할 영화 감독, 수정할 영화의 별점, 수정활 영화의 장르, 수정할 영화의 개봉 날짜, 수정할 영화의 순위를 다시 입력받고, 기존의 영화 정보를 수정하는 역할을 하는 함수이다.   
 >

<img width="531" alt="KakaoTalk_20210508_212825687_03" src="https://user-images.githubusercontent.com/61354751/117539188-86c11e80-b044-11eb-9d9f-908ddb7f554e.png">

### 영화 정보 삭제
* deleteMovie(Movie *m)
> + 삭제하고 싶은 영화의 번호를 선택해 해당 영화 정보를 삭제할 수 있게 하는 함수이다. 
> + 삭제된 영화의 정보는 ranking을 -1로 표시하도록 한다. 
> 

<img width="531" alt="KakaoTalk_20210508_212825687_03" src="https://user-images.githubusercontent.com/61354751/117539214-a0626600-b044-11eb-837c-07b6243085f8.png">

## Save&Load
 
### 세이브 
* saveData(Movie *m, int count)
> + 프로그램 내 추가 된 영화 목록을 txt 파일로 만들어 저장한다. 
<img width="373" alt="저장" src="https://user-images.githubusercontent.com/61354751/118361061-a2886f80-b5c4-11eb-8286-982f5da57dc7.png">
<img width="532" alt="저장2" src="https://user-images.githubusercontent.com/61354751/118361056-a0261580-b5c4-11eb-8b16-63e2fa805f73.png">


### 로드
* loadData(Movie *m)
> + txt 파일로 된 영화 목록을 프로그램의 배열에 저장한다. 
> + 저장 된 영화의 갯수가 return 값이 된다. 
<img width="465" alt="로드2" src="https://user-images.githubusercontent.com/61354751/118361053-9bf9f800-b5c4-11eb-8d08-c493916c256d.png">
<img width="465" alt="로드" src="https://user-images.githubusercontent.com/61354751/118361078-b2a04f00-b5c4-11eb-92f5-3314ea62c663.png">



## Search 
* searchMovie(Movie *m, int count)
> + 영화의 이름을 검색하는 함수.
> + 검색 내용이 포함 된 영화의 리스트를 보여준다.
<img width="532" alt="제목" src="https://user-images.githubusercontent.com/61354751/118361049-98ff0780-b5c4-11eb-913b-af4efbf901b7.png">


* searchStar(Movie *m, int count)
> + 별점으로 영화를 검색하는 함수.
> + 별점과 일치하는 영화를 리스트로 보여준다. 
<img width="532" alt="별점" src="https://user-images.githubusercontent.com/61354751/118361044-943a5380-b5c4-11eb-93f9-84fb708f5e1e.png">


* searchDirector(Movie *m, int count) 
> + 영화 감독명을 검색하는 함수
> + 영화 감독의 이름과 일치하는 영화를 리스트로 보여준다. 
<img width="532" alt="감독" src="https://user-images.githubusercontent.com/61354751/118361042-91d7f980-b5c4-11eb-8b80-416afffe544e.png">


* searchGenre(Movie *m, int count)
> + 영화 장르로 검색하는 함수
> + 영화 장르와 일치하는 영화를 리스트로 보여준다. 
<img width="530" alt="장르" src="https://user-images.githubusercontent.com/61354751/118361040-8d134580-b5c4-11eb-9cad-d379a3486680.png">





