// Room: "/d/green/path4.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������һ����������ʯ·��, ������һ������·��. ������һ��
ľ�콨��, �����൱���ƾ�, һƬ��Ҫɢ���Ƶ�ľ���������ſ�, ����
���ּ��Ѿ����Ǻ������. ���Ϲ�ȥ��һ������ʯ��Ĵ�·.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : "/d/suburb/es/green/path5",
  "north" : "/d/suburb/es/green/path3",
  "east" : "/d/suburb/es/green/shop0",
]));
	set("outdoors", "green");

	setup();
	replace_program(ROOM);
}
