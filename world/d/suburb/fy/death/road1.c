// Room: /d/death/road1.c

inherit ROOM;

void create()
{
	set("short", "���Ŵ��");
	set("long", @LONG
������һ����ɭɭ��·��, ŨŨ���������������, ������
Զ������ɢȥ�Ƶ�. ���Ͽ�ȥ����ǿ���Էֱ��һ����¥��ģ��,
������Լ���Կ�����յ����, ��Ũ�����Եø���Ĺ���. ·������
����һ��ľ���С��, �Ŷ��ǰ뿪��, ���㿴�����������ʲ��.

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "north" : "/d/suburb/fy/death/road2",
  "south" : "/d/suburb/fy/death/gateway",
  "west" : "/d/suburb/fy/death/inn1",
  "east" : "/d/suburb/fy/death/inn2",
]));

	setup();
}

