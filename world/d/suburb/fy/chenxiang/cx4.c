// 
// 

inherit ROOM;
void create()
{
        set("short", "������ʯ��");
        set("long", @LONG
�����ֵ���ʾ�Ž���С�����ֶ��ؽ��еķ��԰���ε�С�ź��
һ�������С���������µ���ˮ����ƼȾ�ɰ��˵Ĵ��̡�ż��һ��ֻ����
�����������źӱߵ���ź��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"cx3",
  "south" : __DIR__"cxcenter",
]));
        set("outdoors", "chenxiang");
        setup();
        replace_program(ROOM);
}
