// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","ի��");
  set("long",@LONG
ի��Ϊ����ɮ�ڳԷ��ĵط�������ͷ®�����񣬴�˵��ɮ������
ע���ۣ�ҹ���μ���ɮ��ͷ®Ȱ����  ի�ã����Ǵ���֮����ի����
��֮��
LONG
  );
  set("exits",([
//            "north":__DIR__"changlang3.c",
            "east" :__DIR__"guanyin.c",
               ]));
          set("objects", ([
                __DIR__"npc/monk" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
