// Room: "/d/sanyen/tunnel.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
���߽���һ���䴩ɽ�ڿ��ɵ���������Ҳ��������Լ�ߡ�������
�ң����߾�������ĳ��ڣ������������ŵ�һ����ǵ�ζ���������
��������Ȫ���ǻ�ɽ��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/suburb/es/sanyen/sroad2",
  "east" : "/d/suburb/es/sanyen/tunnele",
]));

	setup();
	replace_program(ROOM);
}
