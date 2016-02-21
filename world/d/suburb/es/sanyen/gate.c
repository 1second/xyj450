// Room: "/d/sanyen/gate.c

inherit ROOM;

void create()
{
	set("short", "ɽ����ɽ��");
	set("long", @LONG
��������ɽ���µ�ɽ�ţ�������һ������ɽ���������ɽ��������
�Ķ�������Զ���������е��Ϸ������Ǻ���ҽ��ͨ�񣬲����ܹ����ݵ�
���ظ�����ɽ���������ý�̻Իͣ�ׯ����ΰ�����ɽ���¹�ģ��Ȼ��
�����ǵİ�����Ժ����������ȴ�Ǵ�ö��ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
		"west" : "/d/suburb/es/sanyen/sroad2",
		"east" : "/d/suburb/es/sanyen/front_yard",
	//	"south" : "/d/suburb/es/latemoon/sroad1"
	]));
	set("objects", ([ /* sizeof() == 1 */
		"/d/suburb/es/sanyen/npc/greeting" : 2,
	]));
	set("outdoors", "sanyen");

	setup();
	replace_program(ROOM);
}
