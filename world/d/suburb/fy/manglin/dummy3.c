inherit ROOM;
// 
// 


void create()
{
        set("short", "ç��֮��");
        set("long", @LONG
���ܹ������죬�����ܲ���Ũ�ܿ�����Ҷ�ڱ��������ǳ���ʹ�˷ֲ���
��ҹ����������һ��ļž���ֻ�з紵�����ҵ�ɳɳ֮����ż��һ������Х��
�������ȷ�Ʈ�����ʡ�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"groupn3",
  "south" : __DIR__"groups3",
  "east" : __DIR__"groupe3",
  "west" : __DIR__"groupw3",
]));
        setup();
        replace_program(ROOM);
}
