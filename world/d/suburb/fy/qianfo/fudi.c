// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","���츣��");
  set("long",@LONG
���·ת����һʯ�����ڵ��ϣ������ĸ����֣����츣�ء���
һ��������Լ�ɼ���ɽ�紵����������ˬ�����˾���һ������ɽ��
��û������֮�У����ɼ�һ����⡣
LONG
  );
  set("exits",([
         "westdown":__DIR__"qiyan.c",
         "northup" :__DIR__"chansi.c"
               ]));
        set("objects", ([
                __DIR__"npc/laoshi" : 1,
       ]) );
        set("outdoors", "qianfo");
  setup();
  replace_program(ROOM);
}
