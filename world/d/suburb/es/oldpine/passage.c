// Room: "/d/oldpine/passage.c

inherit ROOM;

void create()
{
	set("short", "����ͨ�����");
	set("long", @LONG
��������վ��һ����ʯ��ͨ��֮�У������ϱ���һƬ����������Ļ
(curtain)������Ļ���洫�������¡¡��ˮ����ͨ�����ߵ�ʯ���ϰ���
�����ͭ������̨�������������Ѩ�������ƺ������⡣
LONG
	);
	set("item_desc", ([ /* sizeof() == 1 */
  "curtain" : "��Ƭ��Ļ�ƺ�����һ�ּ�����˿��֯�ɵģ����滹��������ˮ����\n",
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : "/d/suburb/es/oldpine/secrectpath1",
  "south" : "/d/suburb/es/oldpine/waterfall",
]));
/*	set("objects", ([ 
  "/d/suburb/es/oldpine/npc/maniac" : 1,
]));
*/
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
