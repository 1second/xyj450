// 
// 

inherit ROOM;
void create()
{
        set("short", "ɽ�о޺�");
        set("long", @LONG
��ˮ�峺���ף�����ɫ��ˮ���沨ҡ�ڡ�ββС�㻺���ζ���������ˮ��
֮�䡣һϯ�ٲ�к����У�����¡¡֮�����ص���Ⱥɽ�����������С������
��������γ�һ��СϪ������ɽ�¡�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"jungle",
  "east" : __DIR__"waterfall",
]));
	set("outdoors","wanmei");
        setup();
        replace_program(ROOM);
}
