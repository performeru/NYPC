# 넥슨은 다람쥐를 뿌려라

[문제 링크](https://nypc.github.io/2016/daramg)
___

## 문제 설명

옛날 옛적, 1996년에 출시된 "바람의 나라"에선 플레이어들이 이런 메세지를 외치곤 했다.
![Alt](https://nypc.github.io/2016/daramg.jpg)

옛날 옛적, 1996년에 출시된 "바람의 나라"에선 플레이어들이 이런 메세지를 외치곤 했다.
넥슨은 다람쥐를 뿌려라
사냥터에 다람쥐가 모두 사냥당하는 동안에도 새로운 다람쥐가 생성되지 않으면, 어서 생성되기를 재촉하면서 플레이어들은 저런 메세지를 썼다.

2038년, 바람의 나라 출시 42년이 지나, 주모 왈숙은 사냥터에 다람쥐를 생성하는 규칙을 바꾸기로 하였다. 
DoD(DaramG on Demand)라 불리는 최첨단 기술을 통해 다람쥐가 적어도 플레이어 수보다 두 배가 되도록 유지해서 사람이 많을 때도 충분한 양의 다람쥐가 있게끔 하기로 했다.

가로 N칸, 세로 N칸으로 구성된 게임 화면에서 칸마다 캐릭터 또는 다람쥐가 있는지 주어질 때, 다람쥐가 모자란 지 판단해 모자란다면 필요한 다람쥐를 생성할 위치를 출력하는 프로그램을 작성하여라.


## 입력
첫 줄에 게임 화면의 크기 N이 주어진다. 
N은 5 이상 20 이하이다. 
다음 N 줄에 걸쳐 N개의 문자가 공백 없이 주어진다. 문자는 다음 중 하나이다
D: 다람쥐가 있음
C: 플레이어 캐릭터가 있음
.: 빈칸임

## 출력
입력 형식에서 게임 화면을 출력한 것과 동일하게, 먼저 첫 줄에 N을 출력하고 그 다음 N줄에 걸쳐 N개의 문자를 공백 없이 사용하여 임의로 정한 다람쥐의 배치 상태를 출력한다. 문자는 D, C, . 중 하나가 되어야 한다.

새로운 다람쥐는 같이 D문자를 사용하며, 위치는 수만 만족하면 아무 곳이나 지정하여도 무방하다.

다람쥐가 모자라지 않으면 새로운 다람쥐를 생성하지 않고 입력된 내용을 그대로 출력해야 한다. 반면 다람쥐가 모자라다면 출력된 다람쥐의 수가 적어도 플레이어 수보다 두 배가 되도록 하여야 한다. 
다람쥐 및 플레이어 캐릭터들은 서로 겹쳐있을 수 없다. 입력은 필요로 하는 다람쥐를 항상 생성할 수 있음이 보장된다.
