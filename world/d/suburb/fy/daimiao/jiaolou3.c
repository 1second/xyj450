//mac's jiaolou3.c
// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","����¥");
  set("long",@LONG
�������Χǽ����Ľ�¥���ֱ�������Ϊ�����������������¥��
��һ��󱮣�������һ���֣�
[31m
				��
[37m
LONG
  );
  set("exits",([
         "south":__DIR__"jiaolou1.c",
         "east" :__DIR__"houzai.c",
               ]));
        set("objects", ([
                __DIR__"npc/gang3" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
