// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","�ӹ�¥");
  set("long",@LONG
�����ǰ��÷��ӣ���ĵĵط������ڳ����ӣ�ĺ���ģ�����������
������࣬����ʾ�������е�ɮ�ڡ�
LONG
  );
  set("exits",([
            "westdown":__DIR__"weituo.c"
               ]));
          set("objects", ([
                __DIR__"npc/bonze7" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
