// Room: "/d/snow/sroad2.c

inherit ROOM;

void create()
{
	set("short", "ѩͤ��ֵ�");
	set("long", @LONG
������ѩͤ��Ľֵ�����ı�����һ�ҿ�ջ��������Ϳ���������
ջ����������̸Ц���������ֵ�������Զ���и�ת�����������������
ֱ�߾�����ɽ��С���ˣ�����������ߵ������������ﲻ���Ĺٵ���
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "west" : "/d/suburb/es/snow/sroad3",
  "south" : "/d/suburb/es/snow/school",
  "east" : "/d/suburb/es/snow/sroad1",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/d/suburb/es/snow/npc/farmer" : 2,
]));
	set("outdoors", "snow");

	setup();
	replace_program(ROOM);
}
