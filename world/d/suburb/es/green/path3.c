// Room: "/d/green/path3.c

inherit ROOM;

void create()
{
	set("short", "����·��");
	set("long", @LONG
������һ������·��, ������ȥ����һ����С��խ�Ļ���·, ��Ҫ
��·���ϱ����, ������һ����լ.
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "north" : "/d/suburb/es/green/path2",
  "south" : "/d/suburb/es/green/path4",
  "west" : "/d/suburb/es/green/house0",
  "east" : "/d/suburb/es/green/path8",
]));
	set("outdoors", "green");

	setup();
	replace_program(ROOM);
}
