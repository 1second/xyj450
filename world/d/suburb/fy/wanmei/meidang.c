inherit ROOM;
// 
// 


void create()
{
        set("short", "��÷��");
        set("long", @LONG
���нྻ��ϴ��̴��Ʈ�졣�������Կ�÷������ȴʵΪ�Ϻ�
̴��ľ���졣�����ܸߣ��ϹҰ�յ�͵ƣ���о��˸ɢ����������
�̡�����ӳ����̣�����������ۡ�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"frontyard",
  "east" : __DIR__"yard",
]));
        set("objects", ([
        __DIR__"npc/oldman": 1,
                        ]) );

        setup();
        replace_program(ROOM);
}
