# Day 15 문제

## 1. 기본 - 헤더 분리

사칙연산 함수 선언을 `calculator.h`, 구현을 `calculator.c`, 사용 코드를 `main.c`로 분리하고 include guard를 적용하세요.

## 2. 응용 - 조건부 로그

`DEBUG` 정의 여부에 따라 파일명과 줄 번호를 출력하거나 아무 일도 하지 않는 로그 매크로를 만드세요.

## 3. 도전 - 매크로 부작용 분석

`#define SQUARE(x) ((x) * (x))`에 `value++`를 전달한 결과를 예측하고 실행 위험을 설명한 뒤 `static inline` 함수로 교체하세요.
