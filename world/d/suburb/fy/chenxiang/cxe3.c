// 
// 

inherit ROOM;
void create()
{
        set("short", "��������");
        set("long", @LONG
�����Ѿ��ǳ��������ߡ���������������ĵ�·�����･������
��Ӱ���١�é��Խ��Խ�񣬾�ɫԽ��Խ�������������������ޱ߼ʵ�ç�֡�
����һ�����˽���ç���м���ɱ���ķ������壬Ҳ�����书������������
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "east" : "/d/suburb/fy/manglin/edge1",
  "west" : __DIR__"cxe2",
  "south" : __DIR__"dangpu",
]));
        set("objects", ([
        __DIR__"npc/girl": 2,
                        ]) );
        set("outdoors", "chenxiang");
        setup();
        replace_program(ROOM);
}
