// 
// 

inherit ROOM;
void create()
{
        set("short", "С��������");
        set("long", @LONG
����ĺӴ��Ͽ�ˮ���������ӱߵ�«έ����������������ɳɳ��������
ż����������ҰѼ�ĸ¸������ӱ��м�����ϡ��С�����ѵ�����Զ����������
᾵Ĺ�ʯ������С���ԡ�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"jungle",
  "south" : __DIR__"playground",
]));
	set("outdoors","wanmei");
        setup();
        replace_program(ROOM);
}
