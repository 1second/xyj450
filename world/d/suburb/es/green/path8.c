// Room: "/d/green/path8.c

inherit ROOM;

void create()
{
	set("short", "С����");
	set("long", @LONG
����һ��СС�����ӣ�����������ʯ�ͻ������ϱ�����һ����������
���Ϸ������ӳ��ڲ�����ߡ��������Կ���һ��СС�Ĺ㳡����������һ
������·�ڡ�
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "west" : "/d/suburb/es/green/path3",
  "north" : "/d/suburb/es/green/house1",
  "east" : "/d/suburb/es/green/field0",
]));
	set("outdoors", "green");
	set("objects", ([
	"/d/suburb/es/green/npc/kid3" : 2,
	]) );

	setup();
	replace_program(ROOM);
}
