#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x37 = UINT16_MAX;
int16_t x40 = INT16_MAX;
int32_t x42 = 2;
int16_t x43 = INT16_MAX;
volatile int64_t x85 = 10129553038LL;
static int32_t x87 = -1;
static int64_t t2 = 2839497520093130LL;
volatile int32_t t3 = -11;
static int64_t x143 = 657679LL;
static uint8_t x144 = 35U;
volatile int32_t t4 = 54427346;
uint32_t t5 = 1U;
int64_t x175 = INT64_MIN;
int64_t x177 = INT64_MAX;
static int32_t t8 = 99007215;
int32_t x250 = INT32_MIN;
volatile uint32_t t10 = UINT32_MAX;
uint8_t x298 = 7U;
volatile int32_t t13 = 219212;
volatile int32_t x346 = -774257116;
volatile int32_t t15 = -6;
volatile int32_t x361 = INT32_MAX;
uint64_t x364 = 29789874274796310LLU;
uint8_t x437 = 2U;
uint64_t x438 = 74158523951186405LLU;
static volatile uint64_t x469 = 122571LLU;
uint64_t x471 = 371816916LLU;
uint32_t x502 = UINT32_MAX;
uint32_t x503 = UINT32_MAX;
int8_t x504 = INT8_MIN;
volatile int32_t t20 = 3966;
static volatile uint16_t x513 = 1898U;
int64_t x515 = -1LL;
int32_t x528 = 12720468;
int8_t x529 = 1;
volatile int8_t x531 = 59;
volatile uint64_t x539 = 2LLU;
int32_t t27 = 1;
int32_t x632 = INT32_MAX;
int32_t t30 = INT32_MAX;
int8_t x633 = 0;
volatile int64_t x661 = INT64_MAX;
static int8_t x685 = INT8_MAX;
int32_t x749 = INT32_MAX;
int8_t x750 = INT8_MAX;
int64_t x820 = INT64_MIN;
volatile int32_t x821 = 23281;
volatile uint16_t x823 = 137U;
uint16_t x886 = 25U;
static uint64_t x937 = UINT64_MAX;
uint16_t x941 = UINT16_MAX;
uint8_t x992 = UINT8_MAX;
int32_t t49 = 6;
static int8_t x1088 = INT8_MIN;
uint64_t x1097 = UINT64_MAX;
uint64_t x1100 = UINT64_MAX;
uint8_t x1113 = 0U;
uint8_t x1116 = 44U;
volatile int64_t x1132 = 84467072LL;
volatile uint32_t x1145 = 49U;
int16_t x1146 = INT16_MIN;
int8_t x1148 = INT8_MIN;
int64_t x1186 = INT64_MIN;
int64_t x1188 = INT64_MIN;
uint8_t x1193 = 30U;
int64_t x1207 = INT64_MIN;
int64_t x1239 = INT64_MIN;
volatile int32_t t62 = 21220;
int16_t x1258 = 3;
volatile int32_t t63 = 8304880;
int64_t x1276 = INT64_MIN;
int8_t x1291 = INT8_MAX;
static int16_t x1292 = INT16_MAX;
static uint32_t x1305 = 18535935U;
int32_t x1306 = -290;
int32_t x1427 = 7;
int64_t t71 = 85673725424389959LL;
uint16_t x1448 = 3U;
uint32_t t72 = 17203U;
int64_t x1455 = INT64_MIN;
uint16_t x1473 = UINT16_MAX;
volatile uint64_t x1474 = UINT64_MAX;
int8_t x1488 = INT8_MIN;
uint64_t x1489 = 10954367512LLU;
int64_t x1503 = -1LL;
int64_t x1511 = -1LL;
uint8_t x1525 = 18U;
int8_t x1526 = 0;
int32_t x1527 = INT32_MIN;
static int32_t t83 = -55192;
int8_t x1544 = INT8_MIN;
volatile int64_t x1554 = INT64_MAX;
volatile uint32_t t85 = 12910212U;
int64_t x1568 = INT64_MIN;
static volatile uint64_t t86 = UINT64_MAX;
uint32_t x1578 = UINT32_MAX;
volatile int16_t x1579 = INT16_MAX;
volatile int64_t t87 = 16LL;
uint64_t x1592 = 3534LLU;
uint8_t x1598 = 0U;
volatile uint32_t t89 = 4451U;
uint32_t x1606 = UINT32_MAX;
volatile int32_t t90 = 5;
volatile int16_t x1642 = INT16_MIN;
static int32_t x1644 = INT32_MAX;
int32_t t92 = -104;
static volatile int64_t x1668 = INT64_MAX;
int32_t t93 = -15;
static uint8_t x1733 = 5U;
uint16_t x1751 = 74U;
static uint32_t x1752 = 10U;
uint64_t t97 = 15341050LLU;
static int16_t x1762 = INT16_MAX;
int8_t x1764 = 4;
uint32_t t99 = 8U;


void f0(void) {
	int64_t x38 = INT64_MIN;
	static int64_t x39 = INT64_MIN;
	int32_t t0 = 4714;

	t0 = (x37>>(x38%(x39%x40)));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x41 = INT8_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t1 = 1415777;

	t1 = (x41>>(x42%(x43%x44)));

	if (t1 != 31) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x86 = 0U;
	static int8_t x88 = INT8_MIN;

	t2 = (x85>>(x86%(x87%x88)));

	if (t2 != 10129553038LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x93 = 9;
	static volatile int64_t x94 = 219621LL;
	static volatile uint16_t x95 = 32U;
	volatile int8_t x96 = -35;

	t3 = (x93>>(x94%(x95%x96)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x141 = INT16_MAX;
	int64_t x142 = 6169597301779343LL;

	t4 = (x141>>(x142%(x143%x144)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x169 = 1U;
	int64_t x170 = INT64_MAX;
	int32_t x171 = -15;
	uint8_t x172 = 94U;

	t5 = (x169>>(x170%(x171%x172)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x173 = UINT64_MAX;
	uint16_t x174 = 58U;
	uint32_t x176 = UINT32_MAX;
	volatile uint64_t t6 = 171LLU;

	t6 = (x173>>(x174%(x175%x176)));

	if (t6 != 63LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x178 = -1;
	static int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MAX;
	static int64_t t7 = INT64_MAX;

	t7 = (x177>>(x178%(x179%x180)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x201 = UINT16_MAX;
	uint64_t x202 = 8522LLU;
	int16_t x203 = INT16_MAX;
	uint8_t x204 = UINT8_MAX;

	t8 = (x201>>(x202%(x203%x204)));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x249 = 691U;
	int16_t x251 = INT16_MIN;
	uint8_t x252 = 31U;
	int32_t t9 = 0;

	t9 = (x249>>(x250%(x251%x252)));

	if (t9 != 691) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x257 = UINT32_MAX;
	static uint16_t x258 = 0U;
	volatile uint32_t x259 = 132986143U;
	int16_t x260 = INT16_MIN;

	t10 = (x257>>(x258%(x259%x260)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x297 = 45U;
	uint64_t x299 = 22370604259LLU;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t11 = 24227;

	t11 = (x297>>(x298%(x299%x300)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x301 = 250U;
	volatile uint32_t x302 = UINT32_MAX;
	uint32_t x303 = 1U;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t12 = -1758;

	t12 = (x301>>(x302%(x303%x304)));

	if (t12 != 250) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x321 = 11U;
	uint8_t x322 = 1U;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = 26;

	t13 = (x321>>(x322%(x323%x324)));

	if (t13 != 5) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x347 = -1LL;
	int64_t x348 = INT64_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = (x345>>(x346%(x347%x348)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x349 = 108910;
	volatile uint16_t x350 = 3893U;
	volatile int16_t x351 = INT16_MIN;
	uint16_t x352 = 3U;

	t15 = (x349>>(x350%(x351%x352)));

	if (t15 != 54455) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x362 = INT64_MIN;
	int16_t x363 = 918;
	static int32_t t16 = -70633;

	t16 = (x361>>(x362%(x363%x364)));

	if (t16 != 31) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x439 = 1U;
	volatile int16_t x440 = -14066;
	int32_t t17 = -992634;

	t17 = (x437>>(x438%(x439%x440)));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x470 = 3;
	volatile int32_t x472 = INT32_MIN;
	static uint64_t t18 = 15980LLU;

	t18 = (x469>>(x470%(x471%x472)));

	if (t18 != 15321LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x485 = 1541991628U;
	static volatile uint16_t x486 = 17U;
	static volatile uint8_t x487 = 15U;
	uint32_t x488 = 78654U;
	uint32_t t19 = 8U;

	t19 = (x485>>(x486%(x487%x488)));

	if (t19 != 385497907U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x501 = INT32_MAX;

	t20 = (x501>>(x502%(x503%x504)));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x514 = INT16_MIN;
	static volatile int32_t x516 = INT32_MAX;
	int32_t t21 = -237174;

	t21 = (x513>>(x514%(x515%x516)));

	if (t21 != 1898) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x525 = INT32_MAX;
	int8_t x526 = 15;
	static uint32_t x527 = UINT32_MAX;
	int32_t t22 = 31621;

	t22 = (x525>>(x526%(x527%x528)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x530 = 0U;
	volatile int32_t x532 = INT32_MAX;
	int32_t t23 = 518;

	t23 = (x529>>(x530%(x531%x532)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x537 = 5U;
	volatile int16_t x538 = -1;
	static volatile int64_t x540 = -1996802LL;
	uint32_t t24 = 1U;

	t24 = (x537>>(x538%(x539%x540)));

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x541 = UINT16_MAX;
	int32_t x542 = 7040279;
	int64_t x543 = INT64_MIN;
	uint8_t x544 = UINT8_MAX;
	int32_t t25 = 11142316;

	t25 = (x541>>(x542%(x543%x544)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x557 = INT64_MAX;
	static int64_t x558 = -1LL;
	int8_t x559 = 1;
	int32_t x560 = INT32_MAX;
	static int64_t t26 = INT64_MAX;

	t26 = (x557>>(x558%(x559%x560)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x601 = 24U;
	int32_t x602 = INT32_MAX;
	static uint32_t x603 = 117U;
	static int64_t x604 = INT64_MIN;

	t27 = (x601>>(x602%(x603%x604)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x613 = 31U;
	uint64_t x614 = 555526092841LLU;
	uint16_t x615 = 13824U;
	static uint8_t x616 = 34U;
	int32_t t28 = -52;

	t28 = (x613>>(x614%(x615%x616)));

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x617 = INT8_MAX;
	uint8_t x618 = UINT8_MAX;
	int32_t x619 = INT32_MIN;
	int32_t x620 = INT32_MAX;
	volatile int32_t t29 = 112559483;

	t29 = (x617>>(x618%(x619%x620)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x629 = INT32_MAX;
	volatile int8_t x630 = INT8_MAX;
	static int64_t x631 = -1LL;

	t30 = (x629>>(x630%(x631%x632)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x634 = 3;
	uint64_t x635 = 124624515LLU;
	int16_t x636 = INT16_MIN;
	volatile int32_t t31 = -4824;

	t31 = (x633>>(x634%(x635%x636)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x662 = 2U;
	static int8_t x663 = -1;
	int16_t x664 = INT16_MAX;
	int64_t t32 = INT64_MAX;

	t32 = (x661>>(x662%(x663%x664)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x669 = 29154024548209LLU;
	int16_t x670 = -1;
	int16_t x671 = INT16_MAX;
	uint32_t x672 = UINT32_MAX;
	static uint64_t t33 = 10326LLU;

	t33 = (x669>>(x670%(x671%x672)));

	if (t33 != 3644253068526LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x686 = INT64_MIN;
	int16_t x687 = -1;
	uint8_t x688 = 9U;
	int32_t t34 = -105;

	t34 = (x685>>(x686%(x687%x688)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x709 = 9563;
	static volatile int8_t x710 = -1;
	int64_t x711 = -1LL;
	int64_t x712 = INT64_MAX;
	int32_t t35 = -12;

	t35 = (x709>>(x710%(x711%x712)));

	if (t35 != 9563) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x725 = 28LLU;
	static uint16_t x726 = UINT16_MAX;
	int8_t x727 = -1;
	int64_t x728 = INT64_MAX;
	volatile uint64_t t36 = 3360LLU;

	t36 = (x725>>(x726%(x727%x728)));

	if (t36 != 28LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x741 = 455002U;
	volatile uint64_t x742 = 30486807535502498LLU;
	int8_t x743 = 12;
	int16_t x744 = -1878;
	volatile uint32_t t37 = 1492U;

	t37 = (x741>>(x742%(x743%x744)));

	if (t37 != 113750U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x751 = -1;
	int16_t x752 = INT16_MIN;
	int32_t t38 = INT32_MAX;

	t38 = (x749>>(x750%(x751%x752)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x785 = UINT16_MAX;
	int16_t x786 = INT16_MAX;
	int8_t x787 = 3;
	volatile int64_t x788 = 1808004909878095618LL;
	volatile int32_t t39 = -88952;

	t39 = (x785>>(x786%(x787%x788)));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x805 = UINT8_MAX;
	uint8_t x806 = 2U;
	uint64_t x807 = 6196039130248357972LLU;
	volatile int8_t x808 = INT8_MIN;
	volatile int32_t t40 = 3857677;

	t40 = (x805>>(x806%(x807%x808)));

	if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x817 = UINT16_MAX;
	static int64_t x818 = 1LL;
	int64_t x819 = -72272831LL;
	volatile int32_t t41 = -53661;

	t41 = (x817>>(x818%(x819%x820)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x822 = 123613117856LL;
	int8_t x824 = INT8_MAX;
	int32_t t42 = 21;

	t42 = (x821>>(x822%(x823%x824)));

	if (t42 != 363) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x865 = 24U;
	uint32_t x866 = UINT32_MAX;
	int8_t x867 = -6;
	int64_t x868 = -7224911690603LL;
	volatile uint32_t t43 = 1017767U;

	t43 = (x865>>(x866%(x867%x868)));

	if (t43 != 3U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x885 = 116;
	int32_t x887 = 4751;
	volatile int32_t x888 = INT32_MAX;
	volatile int32_t t44 = 15875;

	t44 = (x885>>(x886%(x887%x888)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x901 = 14177LLU;
	uint8_t x902 = 0U;
	volatile int16_t x903 = INT16_MIN;
	static int64_t x904 = -178995378514LL;
	uint64_t t45 = 249LLU;

	t45 = (x901>>(x902%(x903%x904)));

	if (t45 != 14177LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x938 = 0U;
	volatile int8_t x939 = INT8_MAX;
	uint32_t x940 = 46462U;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x937>>(x938%(x939%x940)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x942 = 1U;
	static uint16_t x943 = 104U;
	uint16_t x944 = UINT16_MAX;
	volatile int32_t t47 = 798677608;

	t47 = (x941>>(x942%(x943%x944)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x985 = 194615681;
	uint8_t x986 = 0U;
	uint64_t x987 = 960036683LLU;
	uint16_t x988 = UINT16_MAX;
	volatile int32_t t48 = 1;

	t48 = (x985>>(x986%(x987%x988)));

	if (t48 != 194615681) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x989 = INT16_MAX;
	uint64_t x990 = 1585387LLU;
	uint32_t x991 = 700U;

	t49 = (x989>>(x990%(x991%x992)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x1033 = UINT8_MAX;
	static uint64_t x1034 = UINT64_MAX;
	static int16_t x1035 = -19;
	static volatile int64_t x1036 = -37462177LL;
	int32_t t50 = 55885239;

	t50 = (x1033>>(x1034%(x1035%x1036)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1053 = UINT64_MAX;
	volatile int32_t x1054 = 195;
	int16_t x1055 = 183;
	uint64_t x1056 = UINT64_MAX;
	uint64_t t51 = 3534LLU;

	t51 = (x1053>>(x1054%(x1055%x1056)));

	if (t51 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1085 = UINT64_MAX;
	int32_t x1086 = 4164810;
	int32_t x1087 = -1;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x1085>>(x1086%(x1087%x1088)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x1098 = 75764U;
	static int16_t x1099 = 92;
	static volatile uint64_t t53 = 30659LLU;

	t53 = (x1097>>(x1098%(x1099%x1100)));

	if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x1114 = 85059818U;
	volatile uint8_t x1115 = 2U;
	int32_t t54 = 44886509;

	t54 = (x1113>>(x1114%(x1115%x1116)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1129 = INT8_MAX;
	volatile int16_t x1130 = 7;
	volatile int32_t x1131 = -1;
	volatile int32_t t55 = 423;

	t55 = (x1129>>(x1130%(x1131%x1132)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1147 = 1;
	uint32_t t56 = 96658U;

	t56 = (x1145>>(x1146%(x1147%x1148)));

	if (t56 != 49U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1185 = INT32_MAX;
	static int8_t x1187 = 2;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x1185>>(x1186%(x1187%x1188)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1194 = UINT16_MAX;
	uint16_t x1195 = UINT16_MAX;
	static int64_t x1196 = INT64_MIN;
	volatile int32_t t58 = -1010818;

	t58 = (x1193>>(x1194%(x1195%x1196)));

	if (t58 != 30) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1205 = INT64_MAX;
	volatile int16_t x1206 = INT16_MIN;
	static volatile int8_t x1208 = INT8_MAX;
	int64_t t59 = INT64_MAX;

	t59 = (x1205>>(x1206%(x1207%x1208)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x1213 = 0U;
	int64_t x1214 = 96009471882LL;
	int32_t x1215 = INT32_MAX;
	int16_t x1216 = INT16_MAX;
	volatile int32_t t60 = 3;

	t60 = (x1213>>(x1214%(x1215%x1216)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1217 = 21754U;
	int64_t x1218 = -1LL;
	volatile int16_t x1219 = 1;
	int8_t x1220 = INT8_MAX;
	uint32_t t61 = 10609U;

	t61 = (x1217>>(x1218%(x1219%x1220)));

	if (t61 != 21754U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1237 = INT16_MAX;
	uint8_t x1238 = 1U;
	int16_t x1240 = -930;

	t62 = (x1237>>(x1238%(x1239%x1240)));

	if (t62 != 16383) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1257 = INT8_MAX;
	volatile uint16_t x1259 = UINT16_MAX;
	static volatile int64_t x1260 = INT64_MIN;

	t63 = (x1257>>(x1258%(x1259%x1260)));

	if (t63 != 15) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x1273 = UINT64_MAX;
	uint16_t x1274 = 5U;
	uint16_t x1275 = 8U;
	static uint64_t t64 = 57LLU;

	t64 = (x1273>>(x1274%(x1275%x1276)));

	if (t64 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1289 = UINT64_MAX;
	uint64_t x1290 = UINT64_MAX;
	static volatile uint64_t t65 = 103396303683431675LLU;

	t65 = (x1289>>(x1290%(x1291%x1292)));

	if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1301 = 3073711719155419LLU;
	int32_t x1302 = INT32_MAX;
	int32_t x1303 = -99;
	int32_t x1304 = INT32_MAX;
	static volatile uint64_t t66 = 3026366LLU;

	t66 = (x1301>>(x1302%(x1303%x1304)));

	if (t66 != 1536855859577709LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1307 = UINT32_MAX;
	int8_t x1308 = -25;
	static uint32_t t67 = 25869U;

	t67 = (x1305>>(x1306%(x1307%x1308)));

	if (t67 != 1131U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1337 = INT16_MAX;
	static int32_t x1338 = -1;
	uint16_t x1339 = 29653U;
	volatile uint8_t x1340 = 3U;
	volatile int32_t t68 = 71;

	t68 = (x1337>>(x1338%(x1339%x1340)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1345 = INT16_MAX;
	int64_t x1346 = -469128LL;
	volatile int8_t x1347 = -1;
	volatile uint8_t x1348 = UINT8_MAX;
	volatile int32_t t69 = -562807239;

	t69 = (x1345>>(x1346%(x1347%x1348)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1421 = 754U;
	int16_t x1422 = INT16_MIN;
	int16_t x1423 = INT16_MIN;
	int8_t x1424 = 28;
	uint32_t t70 = 246U;

	t70 = (x1421>>(x1422%(x1423%x1424)));

	if (t70 != 754U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1425 = 130131534986LL;
	uint16_t x1426 = 10U;
	static uint8_t x1428 = UINT8_MAX;

	t71 = (x1425>>(x1426%(x1427%x1428)));

	if (t71 != 16266441873LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x1445 = 1189272548U;
	int16_t x1446 = INT16_MAX;
	int8_t x1447 = -1;

	t72 = (x1445>>(x1446%(x1447%x1448)));

	if (t72 != 1189272548U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1453 = 1U;
	static volatile uint16_t x1454 = UINT16_MAX;
	static int32_t x1456 = INT32_MAX;
	int32_t t73 = 298;

	t73 = (x1453>>(x1454%(x1455%x1456)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x1465 = 2096U;
	int8_t x1466 = 10;
	uint16_t x1467 = 1400U;
	static volatile uint64_t x1468 = 521809621455612LLU;
	int32_t t74 = -18;

	t74 = (x1465>>(x1466%(x1467%x1468)));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1475 = 3670389;
	volatile uint16_t x1476 = UINT16_MAX;
	volatile int32_t t75 = -2091621;

	t75 = (x1473>>(x1474%(x1475%x1476)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1477 = 68427U;
	int8_t x1478 = INT8_MAX;
	static uint32_t x1479 = 1326218049U;
	static volatile uint8_t x1480 = UINT8_MAX;
	static uint32_t t76 = 256895U;

	t76 = (x1477>>(x1478%(x1479%x1480)));

	if (t76 != 534U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1481 = INT64_MAX;
	static uint32_t x1482 = UINT32_MAX;
	int32_t x1483 = INT32_MAX;
	static uint16_t x1484 = 363U;
	int64_t t77 = -159LL;

	t77 = (x1481>>(x1482%(x1483%x1484)));

	if (t77 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1485 = 1U;
	int64_t x1486 = INT64_MAX;
	static int32_t x1487 = INT32_MAX;
	static uint32_t t78 = 130409715U;

	t78 = (x1485>>(x1486%(x1487%x1488)));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x1490 = 33930985217716048LL;
	int16_t x1491 = -3;
	int16_t x1492 = INT16_MAX;
	uint64_t t79 = 2368252LLU;

	t79 = (x1489>>(x1490%(x1491%x1492)));

	if (t79 != 5477183756LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x1501 = 1604;
	volatile int16_t x1502 = -1;
	static int64_t x1504 = INT64_MAX;
	int32_t t80 = 7;

	t80 = (x1501>>(x1502%(x1503%x1504)));

	if (t80 != 1604) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1509 = 12298261LLU;
	volatile int32_t x1510 = -1;
	static int32_t x1512 = INT32_MIN;
	static uint64_t t81 = 2LLU;

	t81 = (x1509>>(x1510%(x1511%x1512)));

	if (t81 != 12298261LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1513 = UINT16_MAX;
	static int8_t x1514 = INT8_MIN;
	uint8_t x1515 = 1U;
	static int16_t x1516 = -5657;
	int32_t t82 = 6;

	t82 = (x1513>>(x1514%(x1515%x1516)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1528 = 9U;

	t83 = (x1525>>(x1526%(x1527%x1528)));

	if (t83 != 18) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1541 = INT16_MAX;
	static int8_t x1542 = INT8_MAX;
	static int8_t x1543 = -62;
	volatile int32_t t84 = -57556;

	t84 = (x1541>>(x1542%(x1543%x1544)));

	if (t84 != 4095) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x1553 = 1931107318U;
	uint8_t x1555 = 10U;
	uint64_t x1556 = UINT64_MAX;

	t85 = (x1553>>(x1554%(x1555%x1556)));

	if (t85 != 15086775U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1565 = UINT64_MAX;
	uint16_t x1566 = 0U;
	int8_t x1567 = INT8_MIN;

	t86 = (x1565>>(x1566%(x1567%x1568)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1577 = 2340535767915306213LL;
	uint32_t x1580 = 10U;

	t87 = (x1577>>(x1578%(x1579%x1580)));

	if (t87 != 292566970989413276LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1589 = INT16_MAX;
	uint8_t x1590 = 1U;
	int32_t x1591 = -2608;
	int32_t t88 = 16;

	t88 = (x1589>>(x1590%(x1591%x1592)));

	if (t88 != 16383) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1597 = 27U;
	int16_t x1599 = INT16_MIN;
	static volatile uint32_t x1600 = 31463U;

	t89 = (x1597>>(x1598%(x1599%x1600)));

	if (t89 != 27U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x1605 = 1U;
	int32_t x1607 = 3829406;
	int8_t x1608 = INT8_MIN;

	t90 = (x1605>>(x1606%(x1607%x1608)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1617 = 189550;
	static volatile uint16_t x1618 = 2164U;
	uint8_t x1619 = UINT8_MAX;
	volatile int8_t x1620 = INT8_MIN;
	int32_t t91 = -284;

	t91 = (x1617>>(x1618%(x1619%x1620)));

	if (t91 != 5923) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x1641 = INT16_MAX;
	static volatile int16_t x1643 = INT16_MIN;

	t92 = (x1641>>(x1642%(x1643%x1644)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x1665 = 32U;
	static uint8_t x1666 = UINT8_MAX;
	int8_t x1667 = 63;

	t93 = (x1665>>(x1666%(x1667%x1668)));

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x1669 = 34U;
	int16_t x1670 = -1;
	int64_t x1671 = -1LL;
	uint8_t x1672 = 114U;
	static uint32_t t94 = 35U;

	t94 = (x1669>>(x1670%(x1671%x1672)));

	if (t94 != 34U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x1677 = 224948U;
	int16_t x1678 = -1;
	int16_t x1679 = -1;
	volatile int32_t x1680 = INT32_MAX;
	volatile uint32_t t95 = 1844445618U;

	t95 = (x1677>>(x1678%(x1679%x1680)));

	if (t95 != 224948U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x1734 = -14;
	static int16_t x1735 = INT16_MAX;
	int8_t x1736 = 9;
	volatile int32_t t96 = -1;

	t96 = (x1733>>(x1734%(x1735%x1736)));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x1749 = UINT64_MAX;
	uint64_t x1750 = UINT64_MAX;

	t97 = (x1749>>(x1750%(x1751%x1752)));

	if (t97 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1761 = 199437777415634LLU;
	int8_t x1763 = -1;
	volatile uint64_t t98 = 19616LLU;

	t98 = (x1761>>(x1762%(x1763%x1764)));

	if (t98 != 199437777415634LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x1765 = 208705U;
	uint64_t x1766 = UINT64_MAX;
	static int8_t x1767 = -1;
	int8_t x1768 = INT8_MIN;

	t99 = (x1765>>(x1766%(x1767%x1768)));

	if (t99 != 208705U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

