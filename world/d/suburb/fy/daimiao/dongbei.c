//mac's dongbei.c
// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","������");
  set("long",@LONG
��Ϊ̩��������ǵı��ȣ������������Ƹ��ں���������������
��ǲ��ʿ�����浽̩ɽ��������ʱ������˫���������ԧ�챮����
����������ͬ��ʯ�������ɣ������������ڲ���������ͬ�����¡�
LONG
  );
  set("exits",([
         "west":__DIR__"zhengyuan.c",
               ]));
        set("objects", ([
                __DIR__"npc/tian" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
