#include <room.h>

inherit ROOM;

void create()
{
	set("short","ɽ·");
	set("long",@LONG
����һ�λ��ߵ�ɽ·����Ȼ���������߹��������Ƕ��͵�
ɽ�ڣ�ɽ�������ǵĳ��ż���С��������������׵����£�
��ϸһ�����·���������������ˮ����ɽ·һֱ�����ѡ�
LONG
);
	set("exits",([
	"south":__DIR__"mpath0",
	"north":__DIR__"mpath2",
	]) );
	setup();
	replace_program(ROOM);
}
