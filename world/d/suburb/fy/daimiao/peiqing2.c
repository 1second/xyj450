//mac's peiqing1.c
// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","���޵�");
  set("long",@LONG
��Ϊ̩ɽ���������ס������������һ�Ŵ�����̴͸����̵���
齣���ϵ��������б����ж������˯��˯��Ϊ̴ľ��̣������
��������������
LONG
  );
  set("exits",([
         "east":__DIR__"houqing.c",
               ]));
        set("objects", ([
        __DIR__"obj/huabei" : 1,
	__DIR__"obj/shenji" : 1,
                        ]) );
  setup();
}
void reset()
{
        object *inv;
        object con, item;
        ::reset();
        con = present("huabei", this_object());
        inv = all_inventory(con);
        if(!sizeof(inv)) {
        item = new(__DIR__"obj/xiang");
        item->move(con);
        }
}

