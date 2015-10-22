/*
Отегчени от трудния учебен ден във ФМИ Страхил и колегите му решили
да си направят купон. Купонът не вървял много добре, затова Страхил
предложил да играят на една игра. Който сбърка дадена операция – пие.
Участниците се нареждат в кръг и всеки казва операция (добавяне,
проверяване или премахване). Започва се с празен списък. При операция
добавяне участникът трябва да добави едно число в списъка. При операция
проверяване участникът трябва да каже кое е най-голямото число в списъка.
При операция премахване участникът трябва да види кое е най-голямото число
в списъка, да го каже и да го изкара от списъка. Тъй като Страхил бил вече на
градус, а не му се пие повече, ви моли за помощ.
Вход
На всеки ред от стандартния вход се задава по една команда от вида:
• A B – команда A(add) и число B, което трябва да се добави в
списъка
• R – команда R(remove) - премахва и извежда най-голямото число
• L – команда L(look) - извежда най-голямото число
• Q – команда Q(quit) - прекратява програмата
Изход
При команда А или Q не се извежда нищо. При команда R или L трябва
да се изведе най-голямото число в списъка. Ако списъка е празен и е зададена
команда R или L да се изведе “Not available” вместо исканата стойност.
Ограничения
Броят на командите не надвишава 220 и 1 ≤ B ≤ 100 000 000.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int heap[1<<20];
int size = 0;
char command1;
int numberToAdd;
void siftUp(int len)
{
    int i=len;
    while(i>0 && heap[i] > heap[(i-1)/2])
    {
        swap(heap[i], heap[(i-1)/2]);
        i=(i-1)/2;
    }
    size++;
}

int siftDown(int len)
{
    int top = heap[0];
    heap[0] = heap[--len];
    int i=0;
    while(2*i+1 < len)
    {
        int mi=i;
        if(heap[i*2+1] > heap[mi])
        {
            mi = i*2 +1;
        }
        if((i*2 + 2 < len) && heap[i*2+2] > heap[mi])
        {
            mi = i*2 +2;
        }
        if(i==mi)
        {
            break;
        }
        int t = heap[i];
        heap[i] = heap[mi];
        heap[mi] = t;
        i = mi;
    }
    size--;
    return top;
}

void Add(int number)
{
    heap[size] = number;
    siftUp(size);
}

int Remove()
{
    return siftDown(size);
}

int Look()
{
    return heap[0];
}
int main()
{
    bool shouldBreak = false;
    while (scanf("%c", &n))
    {
        switch(command1){
            case 'A':
                scanf("%d", &numberToAdd);
                Add(numberToAdd);
                break;
            case 'R':
                if (size)
                    printf("%d\n", Remove());
                else
                    printf("Not available\n");
                break;
            case 'L':
                if (size)
                    printf("%d\n", Look());
                else
                    printf("Not available\n");
                break;
            case 'Q':
                shouldBreak = true;
        }
        if (shouldBreak) break;
	}
    return 0;
}
