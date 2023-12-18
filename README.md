# 2023-2-OSSP2-codingdowajo-3
> 2023-02 공개SW프로젝트 3팀 코딩도와조

#### 흑역사를 잊고 싶은 사람들을 위한 힐링 게임:

### '기억의 바다'🌊
> 흑역사 회고 후 경험치를 받아 캐릭터를 성장시키는 성장형 힐링 게임
----------------------------

## 🙋‍♂️ 팀원 소개

|학번|이름|역할|
|------|---|---|
|2021111633|박재윤|회고 및 일기장, 상점, 스토리 구현|
|2019112055|박형준|메인 화면, 도감, 튜토리얼 및 엔딩 구현|
|2019112016|성시윤|메인 화면, 도감, 스토리 구현|
|2021112125|이효정|회고 및 일기장, 상점, 미니게임, 로딩 구현|

----------------------------

## 🛠️ 개발 환경

<div align=center>
  <img src="https://img.shields.io/badge/.net-512BD4?style=for-the-badge&logo=.net&logoColor=white">
  <img src="https://img.shields.io/badge/c%23-512BD4?style=for-the-badge&logo=csharp&logoColor=white">
  <img src="https://img.shields.io/badge/json-000000?style=for-the-badge&logo=json&logoColor=white">
  <br>
  
  <img src = "https://img.shields.io/badge/Unity-FFFFFF?style=for-the-badge&logo=Unity&logoColor=black">
  <img src="https://img.shields.io/badge/visualstudio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white">
</div>

----------------------------
## 📌 메인 기능
### 0. 흑역사 이미지화 기능
#### 1) 프롬프트 생성

<img src="https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/ebc3e1a6-df4c-4a25-904b-0423ac6aef87"/>

- 사용자가 작성한 흑역사 내용을 이미지 생성 인공 지능인 'DALL-E 3' 프롬프트에 맞게 전처리하여 프롬프트 문자열을 만든다.
- gpt(프롬프트에 맞는 요약), 흑역사 장소, 사용자의 나이, 성별을 사용하여 전처리한다.

#### 2) 이미지 생성
<img src="https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/f79de490-0f72-4b05-a538-a0ed2de3f87f"/>

- 프롬프트를 'DALL-E 3'에게 보내 반환된 이미지 결과를 받아온다.

### 1. 튜토리얼 및 엔딩

<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/0a289ca9-745b-45c2-9fb3-bb485590bb27"/>
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/483c0e6b-0e05-46df-824f-084d18256e03"/>
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/2e3c5955-3c49-4160-8f55-307b16d82b3b"/>

- 게임 첫 시작 시 시놉시스
- 캐릭터 성별 선택
- 게임 첫 시작 시 게임의 각종 요소 설명


<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/cfb01949-4248-4cda-a028-1163f3c1dce0"/>

- 도감 전부 수집, 게임 레벨 만렙 달성시에 보이는 엔딩

### 2. 회고
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/121a7d26-cc81-423b-b9e9-077c98beee17"/>
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/d5fd7b02-22e0-4803-995d-27a502a050ed"/>

- 자신의 흑역사 작성시 이를 이미지로 만들어 준다.
- 회고시 일정 포인트와 경험치 지급

### 3. 상점

<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/bfecbcfc-aaf0-429e-ab6b-3c044ed5ea72"/>
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/b3d756be-add1-4d7a-b988-f0d27fa1b143"/>

- 아이템 착용 미리보기 가능
- 아이템 구매 및 구매시 버튼 비활성화

### 4. 인벤토리

<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/9cc9fb96-92d2-46cf-9235-02cc2d80268e"/>

- 인벤토리를 통해 구매한 아이템 착용하여 꾸미기 가능

### 4. 도감

<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/3a486910-ca84-4f60-90c5-b98318c8c779"/>
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/72b8d743-5d89-4d7a-be93-0eb759cc5abc"/>

- 회고로 얻는 흑역사 캐릭터 보관함
- 레어캐릭터를 통해서 스토리씬으로 진입가능

### 5. 스토리

<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/070a8a02-4943-4bdc-b1c6-62b66f046b7f"/>
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/5842d69c-8ea1-4f8f-b013-3a0ad1d8f3d1"/>

- 레어캐릭터 획득시 과거 스토리 보기 가능

### 6. 일기장
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/0bca7c52-a78e-4e24-b65c-8f484250278a"/>

- 회고시 작성한 내용과 생성된 이미지들 확인하는 일기장

### 7. 미니 게임
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/a38225f0-4805-4468-bb80-82d5c8515551"/>

- 회고 가능한 횟수를 늘려주는 흑역사 종이를 얻을 수 있는 미니게임
- 파란색 공 피하기 게임

### 8. 캐릭터 성장
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/c1f8a683-110c-4809-8a0f-7d94808dc4f2"/>
<img  width="223" src = "https://github.com/CSID-DGU/2023-2-OSSP2-codingdowajo-3/assets/111339008/9d0bc4ca-a57a-4f39-8cfa-2a83b74302f7"/>

- 회고로 경험치 획득 후 일정 레벨 도달 시 캐릭터 진화(외형 변화(옷, 표정))
