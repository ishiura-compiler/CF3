#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x39 = 6LLU;
static volatile int32_t t1 = -12833955;
int16_t x76 = -1;
int32_t x92 = INT32_MAX;
int32_t t3 = INT32_MAX;
volatile int16_t x178 = 2;
int16_t x179 = INT16_MAX;
uint64_t x193 = 571LLU;
uint16_t x340 = 3701U;
int32_t t15 = 1;
int32_t x369 = 29031302;
volatile int32_t t16 = 134066185;
int32_t x386 = INT32_MIN;
int64_t x393 = INT64_MAX;
uint32_t x395 = 41U;
int16_t x396 = -15936;
int32_t x514 = -598914;
int32_t t21 = INT32_MAX;
int32_t x535 = 899;
int8_t x536 = -1;
int16_t x585 = 1;
int8_t x588 = INT8_MIN;
static int32_t t25 = -2391;
uint16_t x613 = UINT16_MAX;
static int8_t x630 = 0;
static int64_t x650 = -1LL;
int16_t x679 = INT16_MAX;
volatile int64_t t33 = -11580840361437423LL;
int8_t x757 = 1;
volatile uint64_t t36 = UINT64_MAX;
volatile uint32_t x825 = 134764544U;
static int64_t x828 = -1LL;
uint8_t x870 = 65U;
int32_t x921 = 59204;
volatile int64_t x923 = INT64_MIN;
volatile int32_t x934 = -14192505;
volatile int8_t x935 = INT8_MAX;
int16_t x936 = INT16_MAX;
uint8_t x938 = 12U;
static volatile uint32_t t43 = 1U;
uint64_t x948 = UINT64_MAX;
static volatile uint64_t t44 = UINT64_MAX;
uint16_t x1002 = UINT16_MAX;
volatile int8_t x1006 = 0;
static volatile uint64_t t47 = UINT64_MAX;
uint32_t x1085 = 54843U;
static uint8_t x1142 = 50U;
volatile int16_t x1183 = -1;
uint16_t x1217 = UINT16_MAX;
int64_t x1267 = 87LL;
volatile uint32_t x1283 = UINT32_MAX;
uint16_t x1293 = 10U;
volatile int16_t x1294 = INT16_MAX;
static volatile uint8_t x1296 = UINT8_MAX;
static volatile uint64_t x1301 = UINT64_MAX;
int16_t x1303 = 0;
uint64_t t59 = UINT64_MAX;
int8_t x1321 = 0;
int32_t x1324 = INT32_MAX;
static int64_t x1382 = -300967263199696LL;
uint8_t x1383 = UINT8_MAX;
static int32_t x1480 = -166;
static uint64_t x1507 = 224LLU;
static int32_t t68 = 4081593;
int8_t x1510 = INT8_MAX;
volatile int32_t x1511 = INT32_MIN;
uint64_t x1582 = UINT64_MAX;
int16_t x1583 = 3;
int16_t x1584 = -1;
uint8_t x1602 = 23U;
int32_t x1604 = 6;
uint32_t x1623 = 13561U;
int32_t t75 = 623109717;
int8_t x1626 = 3;
uint32_t x1627 = 327436799U;
int64_t x1686 = INT64_MAX;
uint32_t x1687 = 4U;
int16_t x1704 = INT16_MAX;
int64_t x1707 = -2075129477LL;
uint8_t x1715 = 39U;
static uint64_t t80 = 6821LLU;
int8_t x1749 = 3;
uint8_t x1785 = UINT8_MAX;
uint64_t x1797 = 1187LLU;
static uint16_t x1801 = 0U;
volatile int8_t x1805 = 0;
static int32_t t87 = -8;
static int8_t x1815 = 2;
int16_t x1822 = INT16_MIN;
static volatile int32_t x1847 = 2599724;
volatile int64_t t90 = INT64_MAX;
volatile int32_t x1862 = INT32_MIN;
volatile uint8_t x1913 = UINT8_MAX;
uint32_t x1914 = 5146U;
volatile int64_t x1941 = INT64_MAX;
uint8_t x1963 = 7U;
volatile int64_t t95 = INT64_MAX;
int64_t x2023 = INT64_MIN;
uint16_t x2061 = 1U;
int32_t x2062 = -979856750;
int32_t t99 = 11540087;


void f0(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = ((x37>>(x38&x39))|x40);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x61 = 16;
	uint64_t x62 = 15045LLU;
	volatile uint8_t x63 = 28U;
	volatile uint16_t x64 = UINT16_MAX;

	t1 = ((x61>>(x62&x63))|x64);

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x73 = 71639055293957322LLU;
	int64_t x74 = 971LL;
	int16_t x75 = 6;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x73>>(x74&x75))|x76);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x89 = INT16_MAX;
	uint8_t x90 = 121U;
	volatile int8_t x91 = INT8_MIN;

	t3 = ((x89>>(x90&x91))|x92);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x109 = 905LLU;
	static uint32_t x110 = UINT32_MAX;
	static int8_t x111 = 45;
	volatile int32_t x112 = 10159106;
	static uint64_t t4 = 66751925LLU;

	t4 = ((x109>>(x110&x111))|x112);

	if (t4 != 10159106LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x137 = 2714U;
	int64_t x138 = INT64_MIN;
	volatile uint8_t x139 = 36U;
	volatile int32_t x140 = -1;
	static uint32_t t5 = UINT32_MAX;

	t5 = ((x137>>(x138&x139))|x140);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x177 = 0U;
	int16_t x180 = 1;
	int32_t t6 = 29892534;

	t6 = ((x177>>(x178&x179))|x180);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x194 = 657LL;
	int32_t x195 = INT32_MIN;
	static int64_t x196 = INT64_MIN;
	volatile uint64_t t7 = 16154042059597424LLU;

	t7 = ((x193>>(x194&x195))|x196);

	if (t7 != 9223372036854776379LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x245 = 315826U;
	uint8_t x246 = 34U;
	int64_t x247 = -66319245235642LL;
	static int16_t x248 = INT16_MIN;
	volatile uint32_t t8 = 1023944563U;

	t8 = ((x245>>(x246&x247))|x248);

	if (t8 != 4294947948U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x265 = 14602LLU;
	volatile uint8_t x266 = 1U;
	uint8_t x267 = 8U;
	int32_t x268 = INT32_MIN;
	uint64_t t9 = 104303632LLU;

	t9 = ((x265>>(x266&x267))|x268);

	if (t9 != 18446744071562082570LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x285 = 131U;
	volatile int16_t x286 = 4078;
	uint64_t x287 = 7LLU;
	volatile int8_t x288 = -47;
	volatile int32_t t10 = 16065210;

	t10 = ((x285>>(x286&x287))|x288);

	if (t10 != -45) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x293 = INT8_MAX;
	volatile uint8_t x294 = 1U;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t11 = -348163782;

	t11 = ((x293>>(x294&x295))|x296);

	if (t11 != -32641) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x305 = 3;
	static int32_t x306 = 11;
	int8_t x307 = INT8_MIN;
	int64_t x308 = -1LL;
	volatile int64_t t12 = 13326817LL;

	t12 = ((x305>>(x306&x307))|x308);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = 20;
	volatile int64_t x319 = INT64_MIN;
	volatile uint16_t x320 = 20U;
	volatile int32_t t13 = 39814;

	t13 = ((x317>>(x318&x319))|x320);

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x333 = 48U;
	int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MAX;
	static int32_t x336 = -1;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = ((x333>>(x334&x335))|x336);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x337 = INT16_MAX;
	int8_t x338 = 17;
	uint64_t x339 = UINT64_MAX;

	t15 = ((x337>>(x338&x339))|x340);

	if (t15 != 3701) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x370 = INT8_MIN;
	uint16_t x371 = 20U;
	uint8_t x372 = 12U;

	t16 = ((x369>>(x370&x371))|x372);

	if (t16 != 29031310) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x385 = INT64_MAX;
	uint32_t x387 = 137U;
	int64_t x388 = -881326111027LL;
	int64_t t17 = 83971797168LL;

	t17 = ((x385>>(x386&x387))|x388);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x394 = -1LL;
	volatile int64_t t18 = 243839318703886LL;

	t18 = ((x393>>(x394&x395))|x396);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x405 = 11587U;
	uint8_t x406 = UINT8_MAX;
	int8_t x407 = 5;
	int64_t x408 = INT64_MAX;
	static volatile int64_t t19 = INT64_MAX;

	t19 = ((x405>>(x406&x407))|x408);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x493 = UINT32_MAX;
	static int8_t x494 = INT8_MIN;
	static int8_t x495 = INT8_MAX;
	int64_t x496 = -1LL;
	int64_t t20 = -34265525LL;

	t20 = ((x493>>(x494&x495))|x496);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x513 = 17041U;
	uint8_t x515 = 2U;
	static int32_t x516 = INT32_MAX;

	t21 = ((x513>>(x514&x515))|x516);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x525 = 26192099U;
	volatile uint32_t x526 = 230756621U;
	static int32_t x527 = INT32_MIN;
	int64_t x528 = 102471885LL;
	static volatile int64_t t22 = 116074039920460345LL;

	t22 = ((x525>>(x526&x527))|x528);

	if (t22 != 127908079LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x533 = INT16_MAX;
	int16_t x534 = 24;
	static volatile int32_t t23 = 17347715;

	t23 = ((x533>>(x534&x535))|x536);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x553 = 408LLU;
	int64_t x554 = INT64_MIN;
	uint16_t x555 = 0U;
	volatile uint16_t x556 = UINT16_MAX;
	static uint64_t t24 = 95533166295314LLU;

	t24 = ((x553>>(x554&x555))|x556);

	if (t24 != 65535LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x586 = -1LL;
	uint32_t x587 = 1U;

	t25 = ((x585>>(x586&x587))|x588);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x589 = 0;
	uint32_t x590 = 10U;
	uint64_t x591 = 86LLU;
	static int32_t x592 = INT32_MAX;
	volatile int32_t t26 = INT32_MAX;

	t26 = ((x589>>(x590&x591))|x592);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x614 = 22;
	static uint16_t x615 = 0U;
	int16_t x616 = INT16_MIN;
	int32_t t27 = -1388;

	t27 = ((x613>>(x614&x615))|x616);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x621 = 114336210U;
	volatile int32_t x622 = INT32_MIN;
	static uint32_t x623 = 189766U;
	uint32_t x624 = UINT32_MAX;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = ((x621>>(x622&x623))|x624);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x629 = INT16_MAX;
	int64_t x631 = 20528LL;
	int16_t x632 = -133;
	int32_t t29 = -487687419;

	t29 = ((x629>>(x630&x631))|x632);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x649 = 10196;
	uint16_t x651 = 2U;
	uint32_t x652 = 404372U;
	uint32_t t30 = 1524242U;

	t30 = ((x649>>(x650&x651))|x652);

	if (t30 != 404469U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x677 = 10U;
	static int64_t x678 = INT64_MIN;
	int64_t x680 = INT64_MIN;
	int64_t t31 = -4334844910943973333LL;

	t31 = ((x677>>(x678&x679))|x680);

	if (t31 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x689 = UINT32_MAX;
	static int16_t x690 = -302;
	int8_t x691 = 43;
	static uint32_t x692 = 1094U;
	volatile uint32_t t32 = 165544579U;

	t32 = ((x689>>(x690&x691))|x692);

	if (t32 != 1073741823U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x737 = INT16_MAX;
	int64_t x738 = INT64_MIN;
	uint32_t x739 = UINT32_MAX;
	int64_t x740 = -1LL;

	t33 = ((x737>>(x738&x739))|x740);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x758 = 0;
	int64_t x759 = INT64_MIN;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t34 = 3248;

	t34 = ((x757>>(x758&x759))|x760);

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x765 = 7127U;
	int8_t x766 = 1;
	int32_t x767 = INT32_MIN;
	int64_t x768 = -66LL;
	int64_t t35 = 43140665LL;

	t35 = ((x765>>(x766&x767))|x768);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x805 = 1454LLU;
	static int16_t x806 = INT16_MIN;
	static int16_t x807 = 8764;
	volatile int32_t x808 = -1;

	t36 = ((x805>>(x806&x807))|x808);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x826 = -1LL;
	static volatile int32_t x827 = 1;
	int64_t t37 = 7544348LL;

	t37 = ((x825>>(x826&x827))|x828);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x857 = UINT8_MAX;
	uint8_t x858 = 23U;
	static uint8_t x859 = 6U;
	int8_t x860 = 2;
	int32_t t38 = -40;

	t38 = ((x857>>(x858&x859))|x860);

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x869 = UINT8_MAX;
	uint16_t x871 = 1U;
	volatile uint16_t x872 = 2U;
	int32_t t39 = -2;

	t39 = ((x869>>(x870&x871))|x872);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x922 = 0;
	int32_t x924 = -1;
	static int32_t t40 = -2;

	t40 = ((x921>>(x922&x923))|x924);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x925 = 2U;
	uint64_t x926 = 560177247LLU;
	volatile int32_t x927 = INT32_MIN;
	uint64_t x928 = 385102736714268065LLU;
	uint64_t t41 = 2513518652952576698LLU;

	t41 = ((x925>>(x926&x927))|x928);

	if (t41 != 385102736714268067LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x933 = UINT64_MAX;
	volatile uint64_t t42 = 223088961309139701LLU;

	t42 = ((x933>>(x934&x935))|x936);

	if (t42 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x937 = UINT32_MAX;
	int32_t x939 = INT32_MAX;
	uint16_t x940 = 4968U;

	t43 = ((x937>>(x938&x939))|x940);

	if (t43 != 1048575U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x945 = 3U;
	int64_t x946 = 27942794LL;
	int64_t x947 = INT64_MIN;

	t44 = ((x945>>(x946&x947))|x948);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x953 = 14U;
	int32_t x954 = -1;
	volatile int32_t x955 = 1;
	uint32_t x956 = 28170U;
	uint32_t t45 = 147776049U;

	t45 = ((x953>>(x954&x955))|x956);

	if (t45 != 28175U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x1001 = 0U;
	uint16_t x1003 = 10U;
	int8_t x1004 = INT8_MIN;
	static int32_t t46 = 851;

	t46 = ((x1001>>(x1002&x1003))|x1004);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x1005 = UINT32_MAX;
	volatile uint64_t x1007 = 56487833860798LLU;
	uint64_t x1008 = UINT64_MAX;

	t47 = ((x1005>>(x1006&x1007))|x1008);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1086 = 0;
	uint8_t x1087 = 0U;
	int8_t x1088 = INT8_MIN;
	volatile uint32_t t48 = 7670U;

	t48 = ((x1085>>(x1086&x1087))|x1088);

	if (t48 != 4294967227U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x1105 = 10062;
	volatile int16_t x1106 = 9;
	uint32_t x1107 = 0U;
	volatile uint64_t x1108 = UINT64_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x1105>>(x1106&x1107))|x1108);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1141 = 7U;
	uint64_t x1143 = 400LLU;
	int64_t x1144 = INT64_MIN;
	int64_t t50 = INT64_MIN;

	t50 = ((x1141>>(x1142&x1143))|x1144);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1161 = INT64_MAX;
	uint8_t x1162 = 2U;
	static int8_t x1163 = 20;
	int64_t x1164 = INT64_MAX;
	int64_t t51 = INT64_MAX;

	t51 = ((x1161>>(x1162&x1163))|x1164);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1181 = 166070249;
	int8_t x1182 = 1;
	uint64_t x1184 = UINT64_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x1181>>(x1182&x1183))|x1184);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1218 = -1LL;
	int8_t x1219 = 0;
	uint64_t x1220 = 547LLU;
	volatile uint64_t t53 = 519191900774934LLU;

	t53 = ((x1217>>(x1218&x1219))|x1220);

	if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x1229 = INT16_MAX;
	volatile int8_t x1230 = -6;
	int32_t x1231 = 0;
	uint32_t x1232 = UINT32_MAX;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x1229>>(x1230&x1231))|x1232);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1265 = 487652;
	static int64_t x1266 = INT64_MIN;
	volatile int32_t x1268 = 196;
	int32_t t55 = 523;

	t55 = ((x1265>>(x1266&x1267))|x1268);

	if (t55 != 487652) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1277 = 3948;
	static int32_t x1278 = INT32_MIN;
	int32_t x1279 = INT32_MAX;
	int32_t x1280 = INT32_MIN;
	volatile int32_t t56 = -6;

	t56 = ((x1277>>(x1278&x1279))|x1280);

	if (t56 != -2147479700) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x1281 = 119125211U;
	volatile int8_t x1282 = 5;
	int8_t x1284 = 0;
	uint32_t t57 = 2922U;

	t57 = ((x1281>>(x1282&x1283))|x1284);

	if (t57 != 3722662U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x1295 = 0U;
	int32_t t58 = -362;

	t58 = ((x1293>>(x1294&x1295))|x1296);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1302 = 1;
	volatile uint64_t x1304 = 0LLU;

	t59 = ((x1301>>(x1302&x1303))|x1304);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1322 = 2U;
	uint8_t x1323 = 15U;
	int32_t t60 = INT32_MAX;

	t60 = ((x1321>>(x1322&x1323))|x1324);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x1365 = UINT32_MAX;
	uint8_t x1366 = 2U;
	int8_t x1367 = -1;
	static int32_t x1368 = INT32_MAX;
	volatile uint32_t t61 = 535U;

	t61 = ((x1365>>(x1366&x1367))|x1368);

	if (t61 != 2147483647U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1381 = UINT64_MAX;
	volatile int32_t x1384 = -1;
	static volatile uint64_t t62 = UINT64_MAX;

	t62 = ((x1381>>(x1382&x1383))|x1384);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x1385 = 455271348U;
	int16_t x1386 = 6;
	int16_t x1387 = INT16_MAX;
	int32_t x1388 = -1;
	uint32_t t63 = UINT32_MAX;

	t63 = ((x1385>>(x1386&x1387))|x1388);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1409 = 8;
	uint64_t x1410 = 2LLU;
	volatile int16_t x1411 = 10355;
	int32_t x1412 = INT32_MAX;
	volatile int32_t t64 = INT32_MAX;

	t64 = ((x1409>>(x1410&x1411))|x1412);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1453 = 1436523004U;
	int64_t x1454 = INT64_MIN;
	int64_t x1455 = INT64_MAX;
	int8_t x1456 = INT8_MIN;
	volatile uint32_t t65 = 29U;

	t65 = ((x1453>>(x1454&x1455))|x1456);

	if (t65 != 4294967292U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1457 = 12580;
	static int8_t x1458 = 1;
	static uint32_t x1459 = 76U;
	uint32_t x1460 = 157722U;
	volatile uint32_t t66 = 3759411U;

	t66 = ((x1457>>(x1458&x1459))|x1460);

	if (t66 != 162110U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1477 = INT32_MAX;
	uint8_t x1478 = 25U;
	int16_t x1479 = INT16_MIN;
	volatile int32_t t67 = -1706;

	t67 = ((x1477>>(x1478&x1479))|x1480);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x1505 = 21U;
	volatile uint64_t x1506 = 28LLU;
	int32_t x1508 = 22652;

	t68 = ((x1505>>(x1506&x1507))|x1508);

	if (t68 != 22653) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x1509 = INT8_MAX;
	int16_t x1512 = INT16_MAX;
	int32_t t69 = -19;

	t69 = ((x1509>>(x1510&x1511))|x1512);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1541 = 10769668LL;
	int8_t x1542 = -15;
	volatile int8_t x1543 = 2;
	volatile int16_t x1544 = INT16_MIN;
	int64_t t70 = -18273618LL;

	t70 = ((x1541>>(x1542&x1543))|x1544);

	if (t70 != -11004LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1581 = 703U;
	uint32_t t71 = UINT32_MAX;

	t71 = ((x1581>>(x1582&x1583))|x1584);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1593 = INT32_MAX;
	int64_t x1594 = 514069970494503LL;
	int16_t x1595 = 9;
	int16_t x1596 = INT16_MAX;
	int32_t t72 = 1;

	t72 = ((x1593>>(x1594&x1595))|x1596);

	if (t72 != 1073741823) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x1601 = INT8_MAX;
	volatile uint32_t x1603 = 236914465U;
	int32_t t73 = -244745;

	t73 = ((x1601>>(x1602&x1603))|x1604);

	if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x1613 = INT64_MAX;
	int16_t x1614 = 13;
	int16_t x1615 = INT16_MAX;
	volatile int64_t x1616 = INT64_MAX;
	volatile int64_t t74 = INT64_MAX;

	t74 = ((x1613>>(x1614&x1615))|x1616);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1621 = 1647U;
	int32_t x1622 = INT32_MIN;
	static int16_t x1624 = 2132;

	t75 = ((x1621>>(x1622&x1623))|x1624);

	if (t75 != 3711) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1625 = 31301U;
	int64_t x1628 = 0LL;
	volatile int64_t t76 = -76814338LL;

	t76 = ((x1625>>(x1626&x1627))|x1628);

	if (t76 != 3912LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x1685 = 2U;
	int32_t x1688 = INT32_MIN;
	int32_t t77 = INT32_MIN;

	t77 = ((x1685>>(x1686&x1687))|x1688);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1701 = INT64_MAX;
	int8_t x1702 = 1;
	int16_t x1703 = INT16_MAX;
	static int64_t t78 = -71057LL;

	t78 = ((x1701>>(x1702&x1703))|x1704);

	if (t78 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x1705 = INT64_MAX;
	volatile uint8_t x1706 = 39U;
	volatile int8_t x1708 = INT8_MIN;
	volatile int64_t t79 = -1LL;

	t79 = ((x1705>>(x1706&x1707))|x1708);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1713 = 3690385LLU;
	static int16_t x1714 = INT16_MAX;
	static volatile uint64_t x1716 = 1501811LLU;

	t80 = ((x1713>>(x1714&x1715))|x1716);

	if (t80 != 1501811LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1750 = INT32_MIN;
	static int16_t x1751 = INT16_MAX;
	int64_t x1752 = -1LL;
	static int64_t t81 = -4096081952115527619LL;

	t81 = ((x1749>>(x1750&x1751))|x1752);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x1761 = INT64_MAX;
	int32_t x1762 = 0;
	int32_t x1763 = -110964;
	int64_t x1764 = INT64_MIN;
	volatile int64_t t82 = 119341827995LL;

	t82 = ((x1761>>(x1762&x1763))|x1764);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1786 = 4U;
	int64_t x1787 = INT64_MIN;
	int64_t x1788 = -1LL;
	int64_t t83 = 499084LL;

	t83 = ((x1785>>(x1786&x1787))|x1788);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x1793 = 6531377177744185772LLU;
	uint8_t x1794 = 1U;
	int64_t x1795 = -1LL;
	uint32_t x1796 = 15214U;
	static uint64_t t84 = 14766979702734LLU;

	t84 = ((x1793>>(x1794&x1795))|x1796);

	if (t84 != 3265688588872105982LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1798 = 3U;
	uint16_t x1799 = 4U;
	uint16_t x1800 = 1854U;
	uint64_t t85 = 1281393LLU;

	t85 = ((x1797>>(x1798&x1799))|x1800);

	if (t85 != 1983LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1802 = UINT32_MAX;
	volatile uint8_t x1803 = 18U;
	volatile int64_t x1804 = INT64_MAX;
	static volatile int64_t t86 = INT64_MAX;

	t86 = ((x1801>>(x1802&x1803))|x1804);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1806 = INT64_MIN;
	volatile int8_t x1807 = 0;
	static int8_t x1808 = INT8_MIN;

	t87 = ((x1805>>(x1806&x1807))|x1808);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x1813 = INT32_MAX;
	static volatile int32_t x1814 = -1;
	uint8_t x1816 = 1U;
	int32_t t88 = -1;

	t88 = ((x1813>>(x1814&x1815))|x1816);

	if (t88 != 536870911) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1821 = INT16_MAX;
	static int16_t x1823 = INT16_MAX;
	static uint64_t x1824 = 21127203967LLU;
	uint64_t t89 = 80LLU;

	t89 = ((x1821>>(x1822&x1823))|x1824);

	if (t89 != 21127233535LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1845 = INT64_MAX;
	int64_t x1846 = INT64_MIN;
	int16_t x1848 = INT16_MAX;

	t90 = ((x1845>>(x1846&x1847))|x1848);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x1861 = UINT32_MAX;
	volatile uint8_t x1863 = UINT8_MAX;
	int64_t x1864 = INT64_MIN;
	volatile int64_t t91 = -1919743422859080LL;

	t91 = ((x1861>>(x1862&x1863))|x1864);

	if (t91 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1915 = INT64_MIN;
	static int16_t x1916 = INT16_MAX;
	volatile int32_t t92 = -248;

	t92 = ((x1913>>(x1914&x1915))|x1916);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1942 = INT16_MAX;
	volatile int32_t x1943 = 0;
	volatile uint32_t x1944 = UINT32_MAX;
	volatile int64_t t93 = INT64_MAX;

	t93 = ((x1941>>(x1942&x1943))|x1944);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1961 = 19U;
	int16_t x1962 = 2402;
	uint32_t x1964 = UINT32_MAX;
	uint32_t t94 = UINT32_MAX;

	t94 = ((x1961>>(x1962&x1963))|x1964);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1973 = INT64_MAX;
	volatile int32_t x1974 = INT32_MIN;
	uint16_t x1975 = 63U;
	static volatile int8_t x1976 = 1;

	t95 = ((x1973>>(x1974&x1975))|x1976);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x2009 = 169117129U;
	uint32_t x2010 = 31U;
	uint16_t x2011 = 26U;
	uint64_t x2012 = 1213LLU;
	uint64_t t96 = 1377460LLU;

	t96 = ((x2009>>(x2010&x2011))|x2012);

	if (t96 != 1215LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2021 = UINT64_MAX;
	uint32_t x2022 = 80509U;
	int64_t x2024 = 454386047004269249LL;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = ((x2021>>(x2022&x2023))|x2024);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2041 = 541213035U;
	volatile int16_t x2042 = 1;
	uint64_t x2043 = 2760052000381815LLU;
	int64_t x2044 = INT64_MIN;
	volatile int64_t t98 = 3LL;

	t98 = ((x2041>>(x2042&x2043))|x2044);

	if (t98 != -9223372036584169291LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2063 = 1LLU;
	int8_t x2064 = -1;

	t99 = ((x2061>>(x2062&x2063))|x2064);

	if (t99 != -1) { NG(); } else { ; }
	
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

