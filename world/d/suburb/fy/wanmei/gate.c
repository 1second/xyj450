inherit ROOM;
// 
// 


void create()
{
        set("short", "����÷֦��");
        set("long", @LONG
һ���øɿݵ�÷֦�����ׯ�������š���������һ����ͭ���塣
����翪�ϣ����巢���϶������Ķ���֮������������һ�У�
                �޽�Ϊ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"village",
  "east" : __DIR__"frontyard",
]));
        set("outdoors", "wanmei");
        setup();

}
int valid_leave(object me, string dir)
{
	if(dir == "east"){
	if( me->query_temp("played_qin"))
		return 1;		
	else
			return notify_fail("һ��ǿ���������ס���㡣\n");
	}
	return 1;
}

