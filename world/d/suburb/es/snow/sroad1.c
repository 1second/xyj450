// Room: "/d/snow/sroad1.c

inherit ROOM;

void create()
{
	set("short", "ѩͤ��ֵ�");
	set("long", @LONG
������ѩͤ��Ľֵ���������һ�����ֵĹ㳡���ϱ�����С·ͨ��
һ�����ӣ���������һ��С������ɽ��ͨ��ɽ�ϣ�������һ���Ƚ�խ��
�ֵ����β�������֮�䴫������Ȯ�͡�
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : "/d/suburb/es/snow/sroad2",
  "north" : "/d/suburb/es/snow/square",
//  "south" : "/d/suburb/es/oldpine/npath1",
  "south" : "/u/cloud/dragonhill/nroad",
  "east" : "/d/suburb/es/snow/eroad1",
]));
	set("outdoors", "snow");

	setup();
	replace_program(ROOM);
}
