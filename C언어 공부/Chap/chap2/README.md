# 마크다운(Markdown) 문법 정리

## 1. 제목(Heading)

```markdown
# 제목1
## 제목2
### 제목3
#### 제목4
##### 제목5
###### 제목6
```

출력:

# 제목1
## 제목2
### 제목3

---

## 2. 강조

```markdown
*기울임*
_기울임_

**굵게**
__굵게__

***굵고 기울임***
```

출력:

*기울임*

**굵게**

***굵고 기울임***

---

## 3. 목록(List)

### 순서 없는 목록

```markdown
- 사과
- 바나나
- 포도

* 사과
* 바나나

+ 사과
+ 바나나
```

출력:

- 사과
- 바나나
- 포도

### 순서 있는 목록

```markdown
1. 첫 번째
2. 두 번째
3. 세 번째
```

출력:

1. 첫 번째
2. 두 번째
3. 세 번째

---

## 4. 링크(Link)

```markdown
[구글](https://www.google.com)
```

출력:

[구글](https://www.google.com)

---

## 5. 이미지(Image)

```markdown
![이미지 설명](image.png)
```

---

## 6. 인용문(Blockquote)

```markdown
> 인용문입니다.
>> 중첩 인용문입니다.
```

출력:

> 인용문입니다.
>> 중첩 인용문입니다.

---

## 7. 코드(Code)

### 한 줄 코드

```markdown
`printf("Hello");`
```

출력:

`printf("Hello");`

### 여러 줄 코드

````markdown
```c
#include <stdio.h>

int main()
{
    printf("Hello World");
    return 0;
}
```
