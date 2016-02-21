// Room: "/d/snow/inneryard.c

inherit ROOM;

void create()
{
	set("short", "�쾮");
	set("long", @LONG
�����Ǵ�������е��쾮�������߿��Իص����������������鷿��
�ϱ����д����˵��᷿������һ������ͨ�������Ժ���쾮����������
���滨��ݣ���������һ��ʯ��(pillar)�������ƺ������֡�
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "south" : "/d/suburb/es/snow/guestroom",
  "north" : "/d/suburb/es/snow/nyard",
  "west" : "/d/suburb/es/snow/schoolhall",
  "east" : "/d/suburb/es/snow/innerhall",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "pillar" : "ʯ���Ͽ���������ָ�졢������������â���ԡ�������硣
",
]));
	set("no_clean_up", 0);
	set("outdoors", "snow");

	setup();
	replace_program(ROOM);
}
