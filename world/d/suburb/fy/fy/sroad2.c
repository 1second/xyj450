// 
// 


inherit ROOM;
void create()
{
        set("short", "Сɽ�¶�");
        set("long", @LONG
ɽ���䲻�ߣ���Ҳ���԰�����������ͱ���ķ��ƳǾ����۵ס�ռ
�ؼ�����ķ��Ƴ�һ���������߼ʣ������Ƕ���Զ����չ�����ڴ�صĽ�
�紦���������������֮�����Եû�Į�Ŀ�����
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "westdown" : __DIR__"sroad1",
]));
        set("objects", ([
        __DIR__"npc/shiren": 1,
                        ]) );
        set("outdoors", "fengyun");
        setup();
        replace_program(ROOM);
}
