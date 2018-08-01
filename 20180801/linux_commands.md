@@ 기본 명령어

 

# man [option] <command> -> 명령어에 대한 도움말 출력

-a  -> section 별 모든 설명서 출력

<space> -> 페이지단위로 스크롤

<d> -> 반페이지 이동

<b> -> 페이지단위로 이전페이지로 이동

<q> -> quit

 

# uname -> 시스템에 대한 정보 출력

-a -> 모든 정보 출력

-m -> 하드웨어 타입

-n -> hostname

-r -> 운영체제 release

-s -> 운영체제 name

 

# date -> 시스템 날짜정보 설정 및 출력

# date [MMDDhhmmYY] ->월일시간분년도

 

# cal -> 현재 월에 해당하는 달력 정보 출력

# cal YYYY -> 해당 년도의 1년의 달력 정보 출력

 

# hwclock -> 하드웨어 시간 동기화

-r -> 하드웨어 현재시간 출력

-s -> 하드웨어 시간을 현재시간에 동기화

-w -> 시스템시간을 하드웨어에 동기화

 

# rdate -> ntp(network time protocol)에 의해 시간동기화

-p -> ntp서버의 현재시간 확인 (time.bora.net)

-s -> ntp서버을 시스템 시간에 동기화

 

# pwd -> print working directory 경로 출력

 

# cd -> change directory 

# cd -> 로그인 사용자의 홈디렉토리로 이동

# cd ~ -> 로그인 사용자의 홈디렉토리로 이동

# cd ~[user_name] -> 특정사용자의 홈디렉토리로 이동

.  -> 자기자신의 디렉토리

.. -> 상위 디렉토리

~  -> 홈 디렉토리

 

 

 

# ls -> 파일/디렉토리 list 출력

-a -> 모든 파일 리스트 출력(숨김파일포함)

-l -> long type 으로 출력

-d -> 디렉토리 속성값 출력

-n -> id 값 출력

-i -> i-node 출력

-F -> 파일 유형 출력

-R -> Recursive (하위경로포함)

 

# which   -> PATH에 있는 명령어의 절대경로

# whereis -> PATH에 있는 명령어의 절대경로 및 man page 경로

# whatis  -> man page의 간략한 설명

 

# arch -> 시스템 cpu 에 대한 정보 출력

 

# clear -> 화면 정리

 

# echo [문자열] -> 입력문자열을 표준출력장치에 출력

 

# history -> 사용했던 명령어 목록 출력

# history <n>  -> n 만큼의 목록 출력

!<n> -> n번째 명령어 재사용

!!   -> 직전 명령어 재사용

-> Up&Down key 를 이용해서 이전 사용했던 명령어 재사용

 

# alias -> 별칭

# alias -> 별칭되어있는 정보 출력

# alias c='clear'

 

 

# script [file_name] -> 입력한 파일명으로 화면에 출력되는 모든 문자열을 저장

                     -> 종료는 'exit' 명령으로 저장 및 script 종료.

# diff [file1] [file2] -> file1과 file2를 비교.

-> 표본이 되는 문서는 두 번째 파일이 됨.

   첫번째 파일이 어떻게 수정되어야 두 번째 파일과 같아지느냐 임.

-> file2에서 file1로 추가되어야 할 것은 'a' 기호로 표현.

   file1에서 제거되어야 하는 내용은 'd'로

   두 파일의 내용이 바뀌어(change)하는 내용은 'c'기호로 표시됨.

-> "<" 는 원래 파일, ">"는 바뀐파일

-> 2c2,3 은 원래파일에서 2번째 라인이 바뀐파일에서는 2~3의 내용임을 의미.

 

# diff -u file1 file2

-> "---"는 원래파일, "+++"는 바뀐파일.

-> -라인은 제거되었으며, + 표시된 라인은 추가되었음을 의미.

Control 문자

-> 키보드 컨트롤 키(Ctrl)와 문자를 이용하여 특별한 기능을 사용할 수 있음.

     

Ctrl + c	명령 실행 중단 ex) #ping www.yahoo.co.kr

Ctrl + d	입력 종료 ex) #cat 이 때에는 c와 d 명령어 이용해도 됨.

Ctrl + u	터미널 입력 라인 초기화

Ctrl + w	터미널 마지막 입력단어 삭제

Ctrl + s	터미널 출력 중지 ex) #ls -lR / 

Ctrl + q	터미널 출력 재시작 ex) #ls -lR /

 

! 표준입력의 사용

-> 키보드를 주로 사용하며 파일을 직접 열수있는 명령은 표준입력 스트림을

   지정하지 않아도 되지만 그렇지 않은경우에는 표준입력 스트림을 사용.

 

# cat file1

# mail user1 < file1 

# cat << eof > file1	 'eof' 가 입력되면 입력 중지 및 저장.

# cat > file1 << eof

 

! 표준출력의 사용

# cat

# cat file1

# cat < file1		키보드 및 파일로부터의 입력을 표준출력장치로 출력

 

# cat > file1

# cat file1 > file2

# cat < file1 > file2		표준출력 장치가 아닌 파일로 출력

 

# cat >> file1

# cat file1 >> file2

# cat < file1 >> file2	표준출력장치가 아닌 파일에 내용 추가
