// 
// 

//mac's jiaolou4.c
#include <room.h>
inherit ROOM;
void create()
{
  set("short","���¥");
  set("long",@LONG
�������Χǽ����Ľ�¥���ֱ�������Ϊ�����������������¥��
��һ��󱮣�������һ���֣�
[33m
				��
[37m
LONG
  );
  set("exits",([
         "south":__DIR__"jiaolou2.c",
         "west" :__DIR__"houzai.c",
               ]));
          set("objects", ([
                __DIR__"npc/gang4" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
