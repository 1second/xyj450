inherit ROOM;
// 
// 


void create()
{
        set("short", "��÷ɽׯ");
        set("long", @LONG
������ǰ��֦�⽻���÷�֣�ÿ����ѩ����֮������ɽ÷��
���࿪�š�����֮�У�ѩ�����÷��ӳ�ɻԣ�����ʤ�ա�÷֦��
ӳ֮�У����嶣�ˣ��������֡�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"road2",
  "east" : __DIR__"gate",
]));
        set("outdoors", "wanmei");
        setup();
        replace_program(ROOM);
}
