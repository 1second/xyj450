// tmp cave room until the cave section is done.
#include <room.h>
 
inherit ROOM;
 
void create()
{
        set("short", "����");
        set("long", @LONG
������ɽ�������, ���Ͽ�ȥ��һ��СС����ʯ·, ���Գ���
�Ӳ�, �����ܲ�����. ������һ������ľ��, ������һ���ֱ۴�
������˩��. ��Ȼ���, ���Կ��Ըе�һ�ɺ���������͸����.
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/suburb/es/green/path0",
  "north" : "/d/suburb/es/green/cave1",
]));
	create_door("north","ľ��","south",DOOR_CLOSED); 
	set("objects", ([
		"/d/suburb/es/green/npc/kid4" : 2,
		]) );
        setup();
        replace_program(ROOM);
}
 
