// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","٤����");
  set("long",@LONG
٤�����ڹ�������ػ�٤�����ص���������Ϊʩ����԰�����
���¶����ߣ�����Ϊ����̫�ӣ��丸��˹�������ҡ�
LONG
  );
  set("exits",([
         "east":__DIR__"tianwang.c"
               ]));
        set("objects", ([
                __DIR__"npc/bonze1":1,
       ]) );

  setup();
  replace_program(ROOM);
}
