#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = 7;
uint8_t x10 = 1U;
static int32_t t1 = 3819;
int64_t x63 = 2113050165461469LL;
int16_t x93 = INT16_MIN;
static int16_t x96 = -1;
static volatile int64_t t4 = -264007564193414LL;
uint64_t x125 = 89912619LLU;
uint64_t x126 = 124LLU;
volatile uint64_t t5 = 32599122LLU;
int8_t x144 = -1;
int64_t x156 = -1LL;
int64_t t7 = 1913785933002703LL;
int64_t x181 = -1LL;
int16_t x196 = INT16_MAX;
static uint16_t x241 = 3720U;
int64_t x243 = INT64_MAX;
static volatile int32_t t10 = -177584063;
static int32_t x249 = INT32_MAX;
volatile int16_t x251 = 27;
volatile int32_t x252 = -1;
uint32_t x256 = UINT32_MAX;
uint32_t x297 = 49546U;
uint16_t x299 = 1907U;
uint32_t x310 = UINT32_MAX;
volatile uint32_t x417 = 59U;
uint64_t x557 = 790363239384385LLU;
int32_t x559 = INT32_MAX;
uint32_t x586 = 6U;
static uint16_t x587 = 3U;
static int64_t x615 = 108355238470937306LL;
volatile int8_t x629 = INT8_MIN;
static volatile uint32_t t25 = 4903U;
int16_t x652 = INT16_MAX;
static uint16_t x661 = UINT16_MAX;
int8_t x701 = INT8_MIN;
int64_t x703 = INT64_MIN;
int32_t t30 = -8170;
int64_t x712 = INT64_MIN;
int64_t t31 = -668LL;
int64_t x749 = -1LL;
volatile uint32_t x750 = 418167U;
int8_t x757 = INT8_MIN;
int64_t x759 = INT64_MIN;
uint64_t t34 = 26903466043648LLU;
int8_t x786 = 5;
int8_t x788 = -1;
uint16_t x798 = UINT16_MAX;
volatile uint64_t t37 = 21165LLU;
static int8_t x855 = -1;
static volatile uint8_t x876 = 15U;
int32_t x928 = INT32_MIN;
uint32_t t43 = 500510864U;
static uint64_t x989 = 15734478837211359LLU;
volatile uint64_t t44 = 20996141250178360LLU;
int8_t x1016 = 61;
int64_t x1019 = 45LL;
int8_t x1020 = INT8_MAX;
volatile uint64_t t46 = 287779921450LLU;
uint16_t x1057 = 93U;
uint64_t x1098 = 4557LLU;
volatile int16_t x1100 = -1;
volatile int32_t x1117 = INT32_MIN;
int32_t t51 = -3;
int32_t x1130 = 1749;
int8_t x1140 = INT8_MIN;
volatile int32_t x1158 = INT32_MAX;
uint16_t x1198 = UINT16_MAX;
uint16_t x1199 = UINT16_MAX;
int64_t x1218 = INT64_MAX;
volatile uint32_t x1239 = UINT32_MAX;
int16_t x1240 = -1;
uint64_t t58 = 2771712075LLU;
uint64_t x1282 = 362131LLU;
int8_t x1334 = 24;
int32_t x1336 = INT32_MIN;
volatile int32_t t63 = 9712644;
int8_t x1347 = 9;
uint16_t x1353 = 0U;
uint32_t x1365 = 108288612U;
volatile uint32_t x1368 = UINT32_MAX;
uint32_t x1398 = 3U;
volatile uint8_t x1431 = 105U;
static uint16_t x1432 = 2U;
int32_t t70 = 1795212;
int32_t x1481 = INT32_MAX;
int32_t x1561 = -54907;
static uint16_t x1562 = 1U;
int32_t x1564 = INT32_MAX;
static volatile int8_t x1571 = INT8_MIN;
int32_t x1572 = -1;
volatile int8_t x1584 = INT8_MIN;
static int8_t x1692 = INT8_MIN;
uint32_t x1694 = UINT32_MAX;
uint32_t x1695 = UINT32_MAX;
uint32_t x1709 = 0U;
int64_t t81 = -3757463706315775LL;
volatile int32_t x1713 = 14570;
uint32_t x1714 = 2022746U;
uint8_t x1716 = 1U;
int16_t x1749 = 1;
int64_t x1751 = INT64_MIN;
int32_t x1756 = 1;
static int64_t t85 = -694615933662294311LL;
volatile int32_t x1771 = INT32_MAX;
uint64_t t87 = 5815961114430130726LLU;
static volatile uint8_t x1781 = 61U;
volatile int16_t x1784 = -1;
int32_t x1785 = INT32_MIN;
uint16_t x1786 = UINT16_MAX;
volatile int64_t x1859 = INT64_MAX;
int64_t x1860 = INT64_MAX;
volatile int64_t x1861 = -12LL;
static int8_t x1864 = INT8_MIN;
volatile int64_t t92 = 9086783518LL;
int32_t x1897 = -695648923;
int16_t x1914 = 6846;
volatile uint16_t x1937 = 11U;
volatile int16_t x2014 = INT16_MAX;
uint16_t x2015 = 14U;
int32_t x2016 = INT32_MIN;


void f0(void) {
	static int16_t x5 = 2;
	uint8_t x6 = 3U;
	volatile int16_t x7 = -8;
	int32_t x8 = -1;
	volatile int32_t t0 = 21848788;

	t0 = (x5/(x6<<(x7%x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x11 = INT32_MIN;
	int8_t x12 = -1;

	t1 = (x9/(x10<<(x11%x12)));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = 1;
	uint8_t x62 = UINT8_MAX;
	int8_t x64 = -4;
	int32_t t2 = 386528207;

	t2 = (x61/(x62<<(x63%x64)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x94 = 40010757U;
	int8_t x95 = -12;
	uint32_t t3 = 79051U;

	t3 = (x93/(x94<<(x95%x96)));

	if (t3 != 107U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x101 = 0;
	int64_t x102 = INT64_MAX;
	int64_t x103 = -1LL;
	int8_t x104 = 1;

	t4 = (x101/(x102<<(x103%x104)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x127 = -1;
	volatile int8_t x128 = -1;

	t5 = (x125/(x126<<(x127%x128)));

	if (t5 != 725101LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x141 = -26841837565LL;
	uint64_t x142 = 366762LLU;
	volatile int32_t x143 = INT32_MIN;
	volatile uint64_t t6 = 40325310087LLU;

	t6 = (x141/(x142<<(x143%x144)));

	if (t6 != 50296224927521LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x153 = -1;
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MIN;

	t7 = (x153/(x154<<(x155%x156)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x182 = UINT8_MAX;
	volatile uint8_t x183 = 0U;
	int32_t x184 = -6286;
	volatile int64_t t8 = 10LL;

	t8 = (x181/(x182<<(x183%x184)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x193 = -1LL;
	int32_t x194 = INT32_MAX;
	volatile int16_t x195 = INT16_MAX;
	volatile int64_t t9 = 15LL;

	t9 = (x193/(x194<<(x195%x196)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x242 = 39U;
	int16_t x244 = INT16_MAX;

	t10 = (x241/(x242<<(x243%x244)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x250 = INT64_MAX;
	static volatile int64_t t11 = 2001274204LL;

	t11 = (x249/(x250<<(x251%x252)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x253 = INT16_MAX;
	int32_t x254 = 32642;
	static uint32_t x255 = UINT32_MAX;
	volatile int32_t t12 = -64395027;

	t12 = (x253/(x254<<(x255%x256)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x269 = -508572;
	int64_t x270 = INT64_MAX;
	static int8_t x271 = 0;
	int32_t x272 = -23;
	volatile int64_t t13 = -95391LL;

	t13 = (x269/(x270<<(x271%x272)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x298 = 3252;
	static int64_t x300 = -3LL;
	uint32_t t14 = 23U;

	t14 = (x297/(x298<<(x299%x300)));

	if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x309 = -40;
	volatile int8_t x311 = INT8_MIN;
	int64_t x312 = -1LL;
	static volatile uint32_t t15 = 87057U;

	t15 = (x309/(x310<<(x311%x312)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x317 = UINT64_MAX;
	uint8_t x318 = UINT8_MAX;
	static int16_t x319 = -1;
	uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t16 = 2652LLU;

	t16 = (x317/(x318<<(x319%x320)));

	if (t16 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = UINT8_MAX;
	int8_t x323 = 1;
	static int16_t x324 = INT16_MIN;
	static volatile int32_t t17 = -8199;

	t17 = (x321/(x322<<(x323%x324)));

	if (t17 != -4210752) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x409 = INT16_MAX;
	uint8_t x410 = 2U;
	uint16_t x411 = 28U;
	volatile uint64_t x412 = 3422LLU;
	volatile int32_t t18 = -32418;

	t18 = (x409/(x410<<(x411%x412)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x418 = INT8_MAX;
	uint8_t x419 = 0U;
	int64_t x420 = -363141LL;
	uint32_t t19 = 9U;

	t19 = (x417/(x418<<(x419%x420)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x445 = 72U;
	int64_t x446 = 687631LL;
	static volatile int64_t x447 = -1LL;
	int16_t x448 = -1;
	int64_t t20 = -961147252332LL;

	t20 = (x445/(x446<<(x447%x448)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x558 = 1U;
	int16_t x560 = 1;
	volatile uint64_t t21 = 490871477119359074LLU;

	t21 = (x557/(x558<<(x559%x560)));

	if (t21 != 790363239384385LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x585 = -1LL;
	volatile uint32_t x588 = 454U;
	volatile int64_t t22 = -1948801LL;

	t22 = (x585/(x586<<(x587%x588)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x613 = INT64_MIN;
	uint64_t x614 = 128697029708LLU;
	int64_t x616 = -1LL;
	static uint64_t t23 = 3486294363LLU;

	t23 = (x613/(x614<<(x615%x616)));

	if (t23 != 71667326LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x621 = INT64_MAX;
	static uint8_t x622 = 25U;
	uint16_t x623 = 6U;
	static int16_t x624 = INT16_MAX;
	static volatile int64_t t24 = -503LL;

	t24 = (x621/(x622<<(x623%x624)));

	if (t24 != 5764607523034234LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x630 = 8083036U;
	static volatile int32_t x631 = INT32_MIN;
	int8_t x632 = -1;

	t25 = (x629/(x630<<(x631%x632)));

	if (t25 != 531U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x633 = INT64_MIN;
	uint8_t x634 = 13U;
	volatile int32_t x635 = -1;
	int8_t x636 = -1;
	int64_t t26 = 26LL;

	t26 = (x633/(x634<<(x635%x636)));

	if (t26 != -709490156681136600LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x649 = -1;
	static uint16_t x650 = UINT16_MAX;
	static volatile int16_t x651 = INT16_MAX;
	volatile int32_t t27 = 1;

	t27 = (x649/(x650<<(x651%x652)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x662 = 12U;
	uint32_t x663 = 2U;
	uint32_t x664 = 107907U;
	volatile int32_t t28 = -46455;

	t28 = (x661/(x662<<(x663%x664)));

	if (t28 != 1365) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x673 = INT32_MIN;
	uint32_t x674 = 3U;
	int32_t x675 = INT32_MAX;
	static int16_t x676 = -1;
	uint32_t t29 = 11287868U;

	t29 = (x673/(x674<<(x675%x676)));

	if (t29 != 715827882U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x702 = 176U;
	int64_t x704 = -1LL;

	t30 = (x701/(x702<<(x703%x704)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x709 = -41217197194968LL;
	volatile int16_t x710 = INT16_MAX;
	int8_t x711 = 1;

	t31 = (x709/(x710<<(x711%x712)));

	if (t31 != -628943711LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x751 = 6;
	int8_t x752 = 9;
	volatile int64_t t32 = -609447421LL;

	t32 = (x749/(x750<<(x751%x752)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x758 = 19563667U;
	int32_t x760 = -1;
	static uint32_t t33 = 698U;

	t33 = (x757/(x758<<(x759%x760)));

	if (t33 != 219U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x761 = 58959020677145927LLU;
	static uint64_t x762 = UINT64_MAX;
	uint8_t x763 = UINT8_MAX;
	int8_t x764 = 1;

	t34 = (x761/(x762<<(x763%x764)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x785 = INT64_MAX;
	uint16_t x787 = 11U;
	int64_t t35 = -3225977365LL;

	t35 = (x785/(x786<<(x787%x788)));

	if (t35 != 1844674407370955161LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x797 = 6U;
	uint64_t x799 = 6LLU;
	int32_t x800 = INT32_MAX;
	int32_t t36 = -160351;

	t36 = (x797/(x798<<(x799%x800)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x805 = UINT64_MAX;
	static uint64_t x806 = 191089729172LLU;
	static int64_t x807 = INT64_MIN;
	int64_t x808 = INT64_MIN;

	t37 = (x805/(x806<<(x807%x808)));

	if (t37 != 96534461LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x853 = -1;
	uint32_t x854 = 62U;
	static int16_t x856 = -1;
	uint32_t t38 = 63632985U;

	t38 = (x853/(x854<<(x855%x856)));

	if (t38 != 69273666U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x861 = -1LL;
	static uint64_t x862 = UINT64_MAX;
	uint64_t x863 = UINT64_MAX;
	int64_t x864 = INT64_MAX;
	uint64_t t39 = 39701392LLU;

	t39 = (x861/(x862<<(x863%x864)));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x873 = INT8_MIN;
	static int32_t x874 = 3689654;
	int64_t x875 = INT64_MAX;
	int32_t t40 = -2;

	t40 = (x873/(x874<<(x875%x876)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x901 = -1;
	static uint16_t x902 = 1712U;
	uint32_t x903 = UINT32_MAX;
	static uint16_t x904 = UINT16_MAX;
	volatile int32_t t41 = 129553;

	t41 = (x901/(x902<<(x903%x904)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x925 = 3U;
	uint32_t x926 = 1053512304U;
	int32_t x927 = INT32_MIN;
	volatile uint32_t t42 = 13625963U;

	t42 = (x925/(x926<<(x927%x928)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x953 = 11191U;
	volatile uint32_t x954 = UINT32_MAX;
	static uint64_t x955 = UINT64_MAX;
	static uint16_t x956 = UINT16_MAX;

	t43 = (x953/(x954<<(x955%x956)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x990 = 7892U;
	volatile uint32_t x991 = 0U;
	int32_t x992 = 730459;

	t44 = (x989/(x990<<(x991%x992)));

	if (t44 != 1993725144096LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1013 = INT64_MIN;
	uint64_t x1014 = 48LLU;
	int8_t x1015 = 59;
	uint64_t t45 = 1689943001683LLU;

	t45 = (x1013/(x1014<<(x1015%x1016)));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1017 = INT16_MIN;
	uint64_t x1018 = UINT64_MAX;

	t46 = (x1017/(x1018<<(x1019%x1020)));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1058 = UINT8_MAX;
	int8_t x1059 = 25;
	volatile int64_t x1060 = -1LL;
	static int32_t t47 = 0;

	t47 = (x1057/(x1058<<(x1059%x1060)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1073 = INT32_MAX;
	uint64_t x1074 = 1LLU;
	uint8_t x1075 = UINT8_MAX;
	int8_t x1076 = -1;
	uint64_t t48 = 0LLU;

	t48 = (x1073/(x1074<<(x1075%x1076)));

	if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1081 = 0;
	int8_t x1082 = INT8_MAX;
	static int32_t x1083 = INT32_MIN;
	int16_t x1084 = INT16_MIN;
	static int32_t t49 = -219578;

	t49 = (x1081/(x1082<<(x1083%x1084)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1097 = INT8_MIN;
	int8_t x1099 = INT8_MIN;
	volatile uint64_t t50 = 6LLU;

	t50 = (x1097/(x1098<<(x1099%x1100)));

	if (t50 != 4048001771715942LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1118 = 57U;
	int32_t x1119 = INT32_MAX;
	int32_t x1120 = -1;

	t51 = (x1117/(x1118<<(x1119%x1120)));

	if (t51 != -37675151) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x1125 = -822;
	int16_t x1126 = 1;
	uint32_t x1127 = UINT32_MAX;
	uint16_t x1128 = UINT16_MAX;
	volatile int32_t t52 = 1246;

	t52 = (x1125/(x1126<<(x1127%x1128)));

	if (t52 != -822) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x1129 = UINT8_MAX;
	volatile uint64_t x1131 = 135960790348397141LLU;
	int16_t x1132 = 2;
	volatile int32_t t53 = 27;

	t53 = (x1129/(x1130<<(x1131%x1132)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1137 = -1;
	int32_t x1138 = 23354;
	volatile int16_t x1139 = INT16_MIN;
	int32_t t54 = 2560951;

	t54 = (x1137/(x1138<<(x1139%x1140)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1157 = 3U;
	int64_t x1159 = INT64_MIN;
	int8_t x1160 = -1;
	int32_t t55 = 0;

	t55 = (x1157/(x1158<<(x1159%x1160)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1197 = INT64_MIN;
	static int32_t x1200 = -86;
	int64_t t56 = 61934330250LL;

	t56 = (x1197/(x1198<<(x1199%x1200)));

	if (t56 != -17592454483968LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1217 = -1;
	int8_t x1219 = -1;
	int32_t x1220 = -1;
	static volatile int64_t t57 = -2027LL;

	t57 = (x1217/(x1218<<(x1219%x1220)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1237 = 27U;
	static volatile uint64_t x1238 = 273261LLU;

	t58 = (x1237/(x1238<<(x1239%x1240)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1281 = 39707509;
	int16_t x1283 = INT16_MAX;
	int16_t x1284 = INT16_MAX;
	volatile uint64_t t59 = 178211LLU;

	t59 = (x1281/(x1282<<(x1283%x1284)));

	if (t59 != 109LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1305 = UINT16_MAX;
	static volatile uint64_t x1306 = 117273LLU;
	int16_t x1307 = INT16_MIN;
	int64_t x1308 = -1LL;
	volatile uint64_t t60 = 338172140337434LLU;

	t60 = (x1305/(x1306<<(x1307%x1308)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1309 = 25U;
	uint64_t x1310 = 6515851529267LLU;
	int8_t x1311 = 0;
	int16_t x1312 = -1;
	volatile uint64_t t61 = 3LLU;

	t61 = (x1309/(x1310<<(x1311%x1312)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1325 = 500916U;
	uint32_t x1326 = UINT32_MAX;
	int64_t x1327 = INT64_MIN;
	int16_t x1328 = -1;
	volatile uint32_t t62 = 18506U;

	t62 = (x1325/(x1326<<(x1327%x1328)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x1333 = INT8_MAX;
	static int16_t x1335 = 3;

	t63 = (x1333/(x1334<<(x1335%x1336)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1345 = INT32_MAX;
	uint64_t x1346 = 3983100833LLU;
	static int64_t x1348 = INT64_MIN;
	uint64_t t64 = 8192622581828LLU;

	t64 = (x1345/(x1346<<(x1347%x1348)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1354 = 249699701431034732LL;
	volatile int32_t x1355 = INT32_MIN;
	volatile uint8_t x1356 = 1U;
	volatile int64_t t65 = 32LL;

	t65 = (x1353/(x1354<<(x1355%x1356)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x1366 = 2867025U;
	volatile uint64_t x1367 = UINT64_MAX;
	static uint32_t t66 = 3617019U;

	t66 = (x1365/(x1366<<(x1367%x1368)));

	if (t66 != 37U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1369 = 55U;
	volatile int16_t x1370 = 8341;
	int64_t x1371 = INT64_MAX;
	int16_t x1372 = 5;
	volatile uint32_t t67 = 639984U;

	t67 = (x1369/(x1370<<(x1371%x1372)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1397 = UINT32_MAX;
	uint16_t x1399 = 0U;
	int8_t x1400 = 12;
	uint32_t t68 = 1U;

	t68 = (x1397/(x1398<<(x1399%x1400)));

	if (t68 != 1431655765U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1429 = UINT16_MAX;
	volatile uint32_t x1430 = 2575642U;
	uint32_t t69 = 128854698U;

	t69 = (x1429/(x1430<<(x1431%x1432)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x1441 = -1;
	uint16_t x1442 = 5795U;
	static int8_t x1443 = -49;
	int64_t x1444 = -1LL;

	t70 = (x1441/(x1442<<(x1443%x1444)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x1453 = UINT64_MAX;
	uint8_t x1454 = 1U;
	int32_t x1455 = -1;
	int16_t x1456 = -1;
	uint64_t t71 = UINT64_MAX;

	t71 = (x1453/(x1454<<(x1455%x1456)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1473 = INT16_MIN;
	int8_t x1474 = 5;
	int8_t x1475 = 29;
	volatile int8_t x1476 = -2;
	static int32_t t72 = -697;

	t72 = (x1473/(x1474<<(x1475%x1476)));

	if (t72 != -3276) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1482 = UINT32_MAX;
	int16_t x1483 = -34;
	int64_t x1484 = -1LL;
	volatile uint32_t t73 = 11781U;

	t73 = (x1481/(x1482<<(x1483%x1484)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x1485 = -52;
	uint16_t x1486 = 183U;
	uint32_t x1487 = 30055890U;
	int8_t x1488 = 4;
	volatile int32_t t74 = 32348;

	t74 = (x1485/(x1486<<(x1487%x1488)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1525 = INT64_MIN;
	uint64_t x1526 = 16212095LLU;
	int64_t x1527 = INT64_MIN;
	int16_t x1528 = -1;
	volatile uint64_t t75 = 55578450785669LLU;

	t75 = (x1525/(x1526<<(x1527%x1528)));

	if (t75 != 568919195011LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x1563 = 2U;
	volatile int32_t t76 = 245006;

	t76 = (x1561/(x1562<<(x1563%x1564)));

	if (t76 != -13726) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x1569 = INT32_MAX;
	int32_t x1570 = 1605903;
	volatile int32_t t77 = 249222300;

	t77 = (x1569/(x1570<<(x1571%x1572)));

	if (t77 != 1337) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1581 = 53;
	int8_t x1582 = INT8_MAX;
	uint8_t x1583 = 8U;
	volatile int32_t t78 = -3716;

	t78 = (x1581/(x1582<<(x1583%x1584)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1689 = INT32_MIN;
	static uint64_t x1690 = 3621674423944811400LLU;
	int32_t x1691 = INT32_MIN;
	static volatile uint64_t t79 = 2145258897LLU;

	t79 = (x1689/(x1690<<(x1691%x1692)));

	if (t79 != 5LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x1693 = 7U;
	volatile uint8_t x1696 = UINT8_MAX;
	volatile uint32_t t80 = 5593U;

	t80 = (x1693/(x1694<<(x1695%x1696)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1710 = INT64_MAX;
	uint16_t x1711 = 0U;
	static int16_t x1712 = -2;

	t81 = (x1709/(x1710<<(x1711%x1712)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x1715 = -1;
	volatile uint32_t t82 = 5333225U;

	t82 = (x1713/(x1714<<(x1715%x1716)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1750 = 50268877;
	static volatile uint8_t x1752 = 4U;
	int32_t t83 = 74316;

	t83 = (x1749/(x1750<<(x1751%x1752)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1753 = 57;
	uint8_t x1754 = 76U;
	int32_t x1755 = -1;
	volatile int32_t t84 = -10996858;

	t84 = (x1753/(x1754<<(x1755%x1756)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1765 = INT64_MIN;
	uint32_t x1766 = 50511U;
	uint32_t x1767 = UINT32_MAX;
	uint64_t x1768 = 5LLU;

	t85 = (x1765/(x1766<<(x1767%x1768)));

	if (t85 != -182601255901779LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1769 = 2197135U;
	uint16_t x1770 = UINT16_MAX;
	static volatile int8_t x1772 = -1;
	static volatile uint32_t t86 = 418205570U;

	t86 = (x1769/(x1770<<(x1771%x1772)));

	if (t86 != 33U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1777 = 987LLU;
	static uint16_t x1778 = 2U;
	uint8_t x1779 = UINT8_MAX;
	static int32_t x1780 = -1;

	t87 = (x1777/(x1778<<(x1779%x1780)));

	if (t87 != 493LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x1782 = 3613U;
	static int16_t x1783 = INT16_MIN;
	volatile uint32_t t88 = 18353U;

	t88 = (x1781/(x1782<<(x1783%x1784)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1787 = 1U;
	static int8_t x1788 = INT8_MIN;
	volatile int32_t t89 = -129693716;

	t89 = (x1785/(x1786<<(x1787%x1788)));

	if (t89 != -16384) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x1813 = INT16_MIN;
	uint8_t x1814 = 3U;
	uint8_t x1815 = UINT8_MAX;
	int16_t x1816 = -1;
	volatile int32_t t90 = 53;

	t90 = (x1813/(x1814<<(x1815%x1816)));

	if (t90 != -10922) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1857 = -236LL;
	static int8_t x1858 = 3;
	volatile int64_t t91 = -43392LL;

	t91 = (x1857/(x1858<<(x1859%x1860)));

	if (t91 != -78LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1862 = INT32_MAX;
	int8_t x1863 = INT8_MIN;

	t92 = (x1861/(x1862<<(x1863%x1864)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1865 = -99;
	static int8_t x1866 = INT8_MAX;
	int16_t x1867 = 4;
	static uint64_t x1868 = UINT64_MAX;
	int32_t t93 = 55;

	t93 = (x1865/(x1866<<(x1867%x1868)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1898 = 81080557U;
	volatile int8_t x1899 = 1;
	int8_t x1900 = 40;
	uint32_t t94 = 3U;

	t94 = (x1897/(x1898<<(x1899%x1900)));

	if (t94 != 22U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x1913 = -5;
	int64_t x1915 = 15724695LL;
	volatile int16_t x1916 = -46;
	volatile int32_t t95 = 4188181;

	t95 = (x1913/(x1914<<(x1915%x1916)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1938 = UINT8_MAX;
	int8_t x1939 = -10;
	int16_t x1940 = -1;
	volatile int32_t t96 = 521915;

	t96 = (x1937/(x1938<<(x1939%x1940)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1941 = 366U;
	uint8_t x1942 = UINT8_MAX;
	int16_t x1943 = -4400;
	int8_t x1944 = -2;
	int32_t t97 = 13479567;

	t97 = (x1941/(x1942<<(x1943%x1944)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1997 = INT16_MIN;
	uint64_t x1998 = 8380218588831129162LLU;
	int64_t x1999 = INT64_MAX;
	int8_t x2000 = 3;
	uint64_t t98 = 3733LLU;

	t98 = (x1997/(x1998<<(x1999%x2000)));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2013 = INT32_MIN;
	int32_t t99 = -178312;

	t99 = (x2013/(x2014<<(x2015%x2016)));

	if (t99 != -4) { NG(); } else { ; }
	
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

