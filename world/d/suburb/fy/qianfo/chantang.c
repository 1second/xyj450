// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","����");
  set("long",@LONG
����Ҳ��ɮ�û����ã���ɮ��ҹ�ڴ��е���������������ʦ��ʥ
ɮ�񣬴����뷨�ã���������������Ҫ������
LONG
  );
  set("exits",([
            "west":__DIR__"mile.c",
               ]));
        set("objects", ([
                __DIR__"npc/bonze3" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
