//mac's tiankuang.c
// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","���ܵ�");
  set("long",@LONG
���ܵ�Ϊ�������Ϊ�ߴ�Ķ�����۲�������Χ�ڷ�������
�ʵ۾��м���ʱ�õļ�������������ڶ���������Ϊ���ͱڻ���չʾ
̩ɽ���Ѳʱ�ĺƴ��档
LONG
  );
  set("exits",([
         "north":__DIR__"houqing.c",
         "south":__DIR__"zhengyuan.c",
               ]));
        set("objects", ([
                __DIR__"npc/xi" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
