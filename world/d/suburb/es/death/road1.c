// Room: "/d/death/road1.c

inherit ROOM;

void create()
{
	set("short", "���Ŵ��");
	set("long", @LONG
������һ����ɭɭ��·��, ŨŨ���������������, ������
Զ������ɢȥ�Ƶ�. ���Ͽ�ȥ����ǿ���Էֱ��һ����¥��ģ��,
������Լ���Կ�����յ����, ��Ũ�����Եø���Ĺ���. ·������
����һ��ľ��Ľ���, �Ŷ��ǰ뿪��, ���㿴�����������ʲô.

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "north" : "/d/suburb/es/death/road2",
  "south" : "/d/suburb/es/death/gateway",
  "west" : "/d/suburb/es/death/inn1",
  "east" : "/d/suburb/es/death/inn2",
]));

	setup();
}

