// 
// 

inherit ROOM;
void create()
{
        set("short", "�����򶫽�");
        set("long", @LONG
����Ľֵ��ԵñȽϻ��ߡ�һ��СϪ˳�Žֱ����������ʣ�ÿ��̫��
��ɽ��һ�����Ũ���Ӷ����ç�������������ؽ�������������û����
������֮�С�ֱ���ڶ���̫�����գ�Ũ��Ž���ɢȥ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"cxe3",
  "west" : __DIR__"cxe1",
]));
        set("outdoors", "chenxiang");
        setup();
        replace_program(ROOM);
}
