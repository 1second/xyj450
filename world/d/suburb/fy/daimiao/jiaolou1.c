//mac's jiaolou1.c
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
[33m
				��
[37m
LONG
  );
  set("exits",([
         "north":__DIR__"jiaolou3.c",
         "east" :__DIR__"zhengyan.c",
               ]));
   
        set("objects", ([
                __DIR__"npc/gang1" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
