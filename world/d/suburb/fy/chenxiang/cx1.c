// 
// 

inherit ROOM;
void create()
{
        set("short", "�����򱱽�");
        set("long", @LONG
�ֵ��ɰ���ɫ��ʯש�̳ɡ�������Ĵ󲿷ַ��ݶ���������ʯש����
�ġ��ֵ������պÿ�����һ��������ͨ����������һ��СС����ݡ�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "northeast" : __DIR__"chenxiang3",
  "southeast" : __DIR__"cx2",
  "west" : __DIR__"mian",
]));
        set("objects", ([
        __DIR__"npc/moo": 1,
                        ]) );
        set("outdoors", "chenxiang");
        setup();
        replace_program(ROOM);
}
