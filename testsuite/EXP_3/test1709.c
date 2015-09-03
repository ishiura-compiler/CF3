#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 6U;
volatile int64_t x3 = INT64_MIN;
static volatile int64_t x39 = INT64_MIN;
volatile int8_t x46 = INT8_MIN;
int16_t x53 = INT16_MAX;
int32_t t3 = -6019;
int64_t x127 = INT64_MIN;
volatile int8_t x166 = -1;
static int32_t x270 = INT32_MIN;
int8_t x271 = INT8_MIN;
uint8_t x272 = 0U;
int8_t x315 = INT8_MAX;
volatile uint64_t t13 = 5923200037246844LLU;
uint64_t x390 = UINT64_MAX;
uint8_t x460 = 0U;
int32_t x463 = INT32_MIN;
volatile int64_t t17 = 2827541780263241854LL;
static int32_t x495 = 0;
volatile int32_t t18 = -9;
volatile int32_t t21 = -714302;
volatile uint64_t t22 = 2620888522458486511LLU;
uint64_t x541 = 15569211140638749LLU;
static uint8_t x543 = 0U;
volatile uint32_t t26 = 2U;
volatile uint32_t x685 = UINT32_MAX;
static int32_t x687 = 1041;
uint32_t x688 = 432523U;
int8_t x710 = -1;
uint8_t x712 = 24U;
static volatile int32_t t31 = 1068326;
int64_t x755 = INT64_MIN;
uint8_t x787 = UINT8_MAX;
int16_t x807 = INT16_MIN;
int64_t x869 = INT64_MAX;
volatile int8_t x923 = 1;
int8_t x1078 = INT8_MIN;
uint16_t x1108 = 7U;
uint64_t x1133 = 8426621008546848LLU;
uint8_t x1254 = 0U;
int8_t x1256 = INT8_MIN;
int32_t x1266 = -1;
static int8_t x1291 = INT8_MIN;
volatile uint64_t x1349 = 19065LLU;
static uint64_t t54 = 55379727038426LLU;
uint32_t x1368 = 5U;
int32_t t57 = 9;
uint16_t x1381 = 80U;
int16_t x1382 = -911;
static int32_t t58 = 26827;
int64_t x1410 = INT64_MAX;
static uint32_t x1413 = 28U;
volatile int16_t x1415 = 0;
int8_t x1416 = INT8_MIN;
uint16_t x1419 = 2459U;
static uint64_t x1443 = 3LLU;
int8_t x1504 = INT8_MAX;
volatile int8_t x1553 = INT8_MIN;
volatile int64_t t67 = -29402943118561595LL;
int8_t x1590 = INT8_MIN;
static uint32_t x1593 = 87465U;
static uint64_t x1621 = UINT64_MAX;
uint64_t x1629 = 414463023LLU;
volatile uint16_t x1633 = 453U;
uint64_t x1658 = 99319198LLU;
uint8_t x1684 = 85U;
int64_t x1689 = 22239803302607LL;
int32_t x1690 = INT32_MAX;
uint32_t x1691 = 90U;
volatile uint32_t x1706 = 24911U;
uint64_t x1708 = 44714945LLU;
uint64_t t79 = 90681481537628849LLU;
uint16_t x1749 = UINT16_MAX;
uint16_t x1751 = 27U;
uint64_t x1795 = UINT64_MAX;
int8_t x1797 = INT8_MAX;
int64_t t85 = 12241860002LL;
uint64_t x1801 = 17356686486045LLU;
int16_t x1802 = -510;
int64_t t88 = 2042974211686LL;
static uint8_t x1879 = 2U;
volatile uint64_t t92 = 259529720LLU;
int32_t x1894 = INT32_MAX;
static int16_t x1914 = 3;
static int32_t x1916 = 539464156;
int16_t x1917 = INT16_MAX;
int32_t t96 = 836;
static int16_t x1922 = INT16_MIN;
volatile uint64_t x1924 = 10LLU;
uint8_t x1977 = 54U;
volatile int32_t t98 = 1;
int64_t x2001 = INT64_MIN;
uint16_t x2004 = 107U;


void f0(void) {
	uint64_t x2 = 48760973412LLU;
	int8_t x4 = 27;
	volatile uint64_t t0 = 19LLU;

	t0 = ((x1-x2)<<(x3&x4));

	if (t0 != 18446744024948578210LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x37 = INT32_MIN;
	uint32_t x38 = UINT32_MAX;
	static uint16_t x40 = UINT16_MAX;
	uint32_t t1 = 115557729U;

	t1 = ((x37-x38)<<(x39&x40));

	if (t1 != 2147483649U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x45 = -1LL;
	uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 1U;
	volatile int64_t t2 = 0LL;

	t2 = ((x45-x46)<<(x47&x48));

	if (t2 != 254LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x54 = 0U;
	int8_t x55 = 10;
	int8_t x56 = INT8_MIN;

	t3 = ((x53-x54)<<(x55&x56));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x57 = 5;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = 3377;
	static uint8_t x60 = 76U;
	volatile uint32_t t4 = 47305718U;

	t4 = ((x57-x58)<<(x59&x60));

	if (t4 != 6U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x105 = -1;
	uint32_t x106 = 163585725U;
	volatile int16_t x107 = INT16_MAX;
	int64_t x108 = INT64_MIN;
	volatile uint32_t t5 = 276551711U;

	t5 = ((x105-x106)<<(x107&x108));

	if (t5 != 4131381570U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x109 = 0U;
	volatile int16_t x110 = -1;
	int64_t x111 = 1LL;
	int32_t x112 = 242183441;
	uint32_t t6 = 887555790U;

	t6 = ((x109-x110)<<(x111&x112));

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x125 = 1665U;
	uint32_t x126 = UINT32_MAX;
	int32_t x128 = 734;
	uint32_t t7 = 214792746U;

	t7 = ((x125-x126)<<(x127&x128));

	if (t7 != 1666U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x149 = 42LLU;
	volatile int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MAX;
	volatile uint64_t t8 = 3038LLU;

	t8 = ((x149-x150)<<(x151&x152));

	if (t8 != 9223372036854775850LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x165 = 1U;
	volatile uint64_t x167 = UINT64_MAX;
	int8_t x168 = 0;
	int32_t t9 = 43;

	t9 = ((x165-x166)<<(x167&x168));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x193 = UINT8_MAX;
	int16_t x194 = -1;
	int64_t x195 = INT64_MIN;
	int32_t x196 = 85137636;
	static int32_t t10 = -1168061;

	t10 = ((x193-x194)<<(x195&x196));

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x269 = 24712798936796309LLU;
	uint64_t t11 = 31017LLU;

	t11 = ((x269-x270)<<(x271&x272));

	if (t11 != 24712801084279957LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x313 = INT64_MAX;
	int32_t x314 = 7;
	int32_t x316 = INT32_MIN;
	int64_t t12 = 1LL;

	t12 = ((x313-x314)<<(x315&x316));

	if (t12 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x385 = 1905LLU;
	uint64_t x386 = 30555262393LLU;
	int8_t x387 = 3;
	static uint32_t x388 = UINT32_MAX;

	t13 = ((x385-x386)<<(x387&x388));

	if (t13 != 18446743829267467712LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x389 = -67;
	static uint32_t x391 = 13U;
	uint16_t x392 = 70U;
	uint64_t t14 = 149318LLU;

	t14 = ((x389-x390)<<(x391&x392));

	if (t14 != 18446744073709550560LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x457 = UINT16_MAX;
	volatile int8_t x458 = INT8_MAX;
	volatile int64_t x459 = -1LL;
	volatile int32_t t15 = -332846;

	t15 = ((x457-x458)<<(x459&x460));

	if (t15 != 65408) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x461 = UINT16_MAX;
	uint32_t x462 = UINT32_MAX;
	uint16_t x464 = UINT16_MAX;
	uint32_t t16 = 68361U;

	t16 = ((x461-x462)<<(x463&x464));

	if (t16 != 65536U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x465 = 34797U;
	int64_t x466 = -518152LL;
	int64_t x467 = INT64_MIN;
	uint32_t x468 = 6U;

	t17 = ((x465-x466)<<(x467&x468));

	if (t17 != 552949LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x493 = INT32_MIN;
	int32_t x494 = INT32_MIN;
	volatile int8_t x496 = -2;

	t18 = ((x493-x494)<<(x495&x496));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x509 = -1;
	static volatile int16_t x510 = -2;
	int8_t x511 = INT8_MAX;
	int8_t x512 = INT8_MIN;
	volatile int32_t t19 = -30;

	t19 = ((x509-x510)<<(x511&x512));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x521 = 23U;
	uint32_t x522 = 3212902U;
	int8_t x523 = 2;
	static int16_t x524 = -14333;
	uint32_t t20 = 75553U;

	t20 = ((x521-x522)<<(x523&x524));

	if (t20 != 4282115780U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x529 = 26;
	int8_t x530 = 0;
	volatile int8_t x531 = INT8_MIN;
	int64_t x532 = 31LL;

	t21 = ((x529-x530)<<(x531&x532));

	if (t21 != 26) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x537 = INT8_MIN;
	uint64_t x538 = UINT64_MAX;
	int8_t x539 = -2;
	int64_t x540 = 0LL;

	t22 = ((x537-x538)<<(x539&x540));

	if (t22 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x542 = 24U;
	uint8_t x544 = UINT8_MAX;
	volatile uint64_t t23 = 368121LLU;

	t23 = ((x541-x542)<<(x543&x544));

	if (t23 != 15569211140638725LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x577 = 937541432216LLU;
	static uint64_t x578 = 70213791283947163LLU;
	uint8_t x579 = UINT8_MAX;
	volatile uint16_t x580 = 40U;
	volatile uint64_t t24 = 614939812658264LLU;

	t24 = ((x577-x578)<<(x579&x580));

	if (t24 != 201814259766657024LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x593 = 43740792U;
	int8_t x594 = INT8_MIN;
	volatile uint64_t x595 = 0LLU;
	int32_t x596 = INT32_MAX;
	uint32_t t25 = 12041293U;

	t25 = ((x593-x594)<<(x595&x596));

	if (t25 != 43740920U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x609 = INT32_MIN;
	volatile uint32_t x610 = UINT32_MAX;
	uint8_t x611 = 127U;
	static int8_t x612 = INT8_MIN;

	t26 = ((x609-x610)<<(x611&x612));

	if (t26 != 2147483649U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x673 = 94375351U;
	volatile uint32_t x674 = UINT32_MAX;
	uint32_t x675 = 17U;
	int64_t x676 = -1LL;
	static uint32_t t27 = 670954754U;

	t27 = ((x673-x674)<<(x675&x676));

	if (t27 != 460324864U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x677 = 7;
	int64_t x678 = -9752461405347LL;
	uint32_t x679 = 1U;
	int8_t x680 = INT8_MAX;
	volatile int64_t t28 = 4LL;

	t28 = ((x677-x678)<<(x679&x680));

	if (t28 != 19504922810708LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x686 = 53;
	static volatile uint32_t t29 = 1348598U;

	t29 = ((x685-x686)<<(x687&x688));

	if (t29 != 4294967188U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x693 = -28;
	uint32_t x694 = 345441268U;
	static volatile int16_t x695 = INT16_MAX;
	static int32_t x696 = INT32_MIN;
	volatile uint32_t t30 = 352258U;

	t30 = ((x693-x694)<<(x695&x696));

	if (t30 != 3949526000U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x709 = 5U;
	int64_t x711 = -1LL;

	t31 = ((x709-x710)<<(x711&x712));

	if (t31 != 100663296) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x753 = 2U;
	uint64_t x754 = 30561024774844LLU;
	int32_t x756 = INT32_MAX;
	uint64_t t32 = 1202892LLU;

	t32 = ((x753-x754)<<(x755&x756));

	if (t32 != 18446713512684776774LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x785 = 27034249U;
	int32_t x786 = INT32_MIN;
	volatile int32_t x788 = INT32_MIN;
	volatile uint32_t t33 = 427025U;

	t33 = ((x785-x786)<<(x787&x788));

	if (t33 != 2174517897U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x797 = 55;
	uint64_t x798 = 3474049112525750969LLU;
	static uint16_t x799 = 3113U;
	static uint16_t x800 = 29U;
	volatile uint64_t t34 = 31908798920668107LLU;

	t34 = ((x797-x798)<<(x799&x800));

	if (t34 != 10621029536642038784LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x805 = 533946406444LLU;
	uint16_t x806 = UINT16_MAX;
	int16_t x808 = 187;
	uint64_t t35 = 9205537078LLU;

	t35 = ((x805-x806)<<(x807&x808));

	if (t35 != 533946340909LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x817 = 1526659849121LL;
	static int64_t x818 = -12471125646772LL;
	static int32_t x819 = -1;
	uint16_t x820 = 9U;
	volatile int64_t t36 = 1LL;

	t36 = ((x817-x818)<<(x819&x820));

	if (t36 != 7166866173897216LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x857 = 24U;
	uint32_t x858 = UINT32_MAX;
	uint64_t x859 = 999LLU;
	int32_t x860 = INT32_MIN;
	volatile uint32_t t37 = 314U;

	t37 = ((x857-x858)<<(x859&x860));

	if (t37 != 25U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x870 = 790U;
	static volatile int64_t x871 = INT64_MIN;
	uint8_t x872 = 0U;
	static volatile int64_t t38 = -27088255275872197LL;

	t38 = ((x869-x870)<<(x871&x872));

	if (t38 != 9223372036854775017LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x885 = INT64_MAX;
	static volatile uint64_t x886 = UINT64_MAX;
	uint8_t x887 = 7U;
	volatile int16_t x888 = INT16_MIN;
	volatile uint64_t t39 = 217447604085502LLU;

	t39 = ((x885-x886)<<(x887&x888));

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x913 = -1;
	int32_t x914 = INT32_MIN;
	static int64_t x915 = 0LL;
	int32_t x916 = INT32_MIN;
	int32_t t40 = INT32_MAX;

	t40 = ((x913-x914)<<(x915&x916));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x921 = INT16_MAX;
	static int8_t x922 = -1;
	uint8_t x924 = UINT8_MAX;
	static volatile int32_t t41 = 187;

	t41 = ((x921-x922)<<(x923&x924));

	if (t41 != 65536) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x941 = 96656629U;
	int32_t x942 = INT32_MIN;
	int16_t x943 = -37;
	volatile int8_t x944 = 61;
	uint32_t t42 = 163795U;

	t42 = ((x941-x942)<<(x943&x944));

	if (t42 != 3925868544U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x957 = -2;
	int16_t x958 = INT16_MIN;
	static uint16_t x959 = UINT16_MAX;
	int64_t x960 = INT64_MIN;
	int32_t t43 = 0;

	t43 = ((x957-x958)<<(x959&x960));

	if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1077 = -1;
	int64_t x1079 = INT64_MIN;
	uint16_t x1080 = 32587U;
	static volatile int32_t t44 = 25;

	t44 = ((x1077-x1078)<<(x1079&x1080));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1085 = -1LL;
	static volatile int16_t x1086 = -1;
	volatile int32_t x1087 = -1;
	static uint8_t x1088 = 37U;
	volatile int64_t t45 = -1112031334524801253LL;

	t45 = ((x1085-x1086)<<(x1087&x1088));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x1105 = 35U;
	int8_t x1106 = INT8_MIN;
	volatile int16_t x1107 = 2;
	volatile int32_t t46 = -41193580;

	t46 = ((x1105-x1106)<<(x1107&x1108));

	if (t46 != 652) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1134 = 2U;
	int8_t x1135 = INT8_MAX;
	static uint32_t x1136 = 7865646U;
	volatile uint64_t t47 = 398LLU;

	t47 = ((x1133-x1134)<<(x1135&x1136));

	if (t47 != 14053341899721277440LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1161 = 4U;
	uint32_t x1162 = 1364355473U;
	int8_t x1163 = -13;
	uint16_t x1164 = 8U;
	uint32_t t48 = 6U;

	t48 = ((x1161-x1162)<<(x1163&x1164));

	if (t48 != 2930611827U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1181 = 150941LLU;
	int8_t x1182 = 3;
	static int64_t x1183 = -302LL;
	uint8_t x1184 = 0U;
	uint64_t t49 = 1287522LLU;

	t49 = ((x1181-x1182)<<(x1183&x1184));

	if (t49 != 150938LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1253 = INT32_MAX;
	volatile uint8_t x1255 = 3U;
	volatile int32_t t50 = INT32_MAX;

	t50 = ((x1253-x1254)<<(x1255&x1256));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1265 = 3886067711442LL;
	int8_t x1267 = INT8_MIN;
	volatile uint8_t x1268 = 6U;
	volatile int64_t t51 = 56776591239LL;

	t51 = ((x1265-x1266)<<(x1267&x1268));

	if (t51 != 3886067711443LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1289 = INT8_MAX;
	static int16_t x1290 = -1;
	int8_t x1292 = INT8_MAX;
	volatile int32_t t52 = 188;

	t52 = ((x1289-x1290)<<(x1291&x1292));

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1313 = -1;
	uint64_t x1314 = UINT64_MAX;
	int8_t x1315 = 0;
	volatile int64_t x1316 = INT64_MAX;
	static uint64_t t53 = 100LLU;

	t53 = ((x1313-x1314)<<(x1315&x1316));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1350 = 34790959U;
	static int32_t x1351 = INT32_MAX;
	uint64_t x1352 = 6LLU;

	t54 = ((x1349-x1350)<<(x1351&x1352));

	if (t54 != 18446744071484150400LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1353 = UINT16_MAX;
	uint32_t x1354 = 16240703U;
	uint16_t x1355 = 3341U;
	int32_t x1356 = INT32_MIN;
	volatile uint32_t t55 = 94U;

	t55 = ((x1353-x1354)<<(x1355&x1356));

	if (t55 != 4278792128U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1365 = INT16_MAX;
	static int16_t x1366 = INT16_MIN;
	uint16_t x1367 = 6820U;
	volatile int32_t t56 = 8449348;

	t56 = ((x1365-x1366)<<(x1367&x1368));

	if (t56 != 1048560) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1377 = -695;
	int16_t x1378 = INT16_MIN;
	uint16_t x1379 = 117U;
	static int32_t x1380 = INT32_MIN;

	t57 = ((x1377-x1378)<<(x1379&x1380));

	if (t57 != 32073) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x1383 = UINT8_MAX;
	int8_t x1384 = 0;

	t58 = ((x1381-x1382)<<(x1383&x1384));

	if (t58 != 991) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x1409 = UINT64_MAX;
	volatile uint16_t x1411 = 26U;
	volatile int32_t x1412 = INT32_MIN;
	volatile uint64_t t59 = 612717787227600LLU;

	t59 = ((x1409-x1410)<<(x1411&x1412));

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1414 = INT32_MIN;
	static uint32_t t60 = 1760650U;

	t60 = ((x1413-x1414)<<(x1415&x1416));

	if (t60 != 2147483676U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1417 = INT8_MIN;
	static uint32_t x1418 = UINT32_MAX;
	uint16_t x1420 = 0U;
	uint32_t t61 = 1533456U;

	t61 = ((x1417-x1418)<<(x1419&x1420));

	if (t61 != 4294967169U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x1441 = 10101090726034974LL;
	int32_t x1442 = -1;
	volatile int8_t x1444 = INT8_MIN;
	int64_t t62 = 2473169899LL;

	t62 = ((x1441-x1442)<<(x1443&x1444));

	if (t62 != 10101090726034975LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1481 = UINT16_MAX;
	uint64_t x1482 = 3908311933LLU;
	uint16_t x1483 = 566U;
	static int16_t x1484 = 14786;
	volatile uint64_t t63 = 341903172751LLU;

	t63 = ((x1481-x1482)<<(x1483&x1484));

	if (t63 != 18446744058076566024LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1489 = 28U;
	int32_t x1490 = INT32_MIN;
	uint32_t x1491 = 768468424U;
	int64_t x1492 = INT64_MIN;
	uint32_t t64 = 1U;

	t64 = ((x1489-x1490)<<(x1491&x1492));

	if (t64 != 2147483676U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1501 = INT8_MIN;
	static int8_t x1502 = INT8_MIN;
	uint8_t x1503 = 1U;
	volatile int32_t t65 = -28;

	t65 = ((x1501-x1502)<<(x1503&x1504));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x1554 = -850923LL;
	static volatile uint16_t x1555 = 0U;
	int64_t x1556 = -136607508732LL;
	volatile int64_t t66 = 10293539324330965LL;

	t66 = ((x1553-x1554)<<(x1555&x1556));

	if (t66 != 850795LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1561 = 4981LL;
	uint8_t x1562 = 12U;
	static uint16_t x1563 = 3361U;
	int16_t x1564 = INT16_MIN;

	t67 = ((x1561-x1562)<<(x1563&x1564));

	if (t67 != 4969LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x1569 = UINT64_MAX;
	static volatile int8_t x1570 = -2;
	int16_t x1571 = 1;
	static int16_t x1572 = INT16_MAX;
	uint64_t t68 = 981376576176LLU;

	t68 = ((x1569-x1570)<<(x1571&x1572));

	if (t68 != 2LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x1589 = -1LL;
	int32_t x1591 = INT32_MIN;
	uint16_t x1592 = UINT16_MAX;
	int64_t t69 = -62365420LL;

	t69 = ((x1589-x1590)<<(x1591&x1592));

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x1594 = INT32_MIN;
	int8_t x1595 = 0;
	volatile int8_t x1596 = INT8_MIN;
	uint32_t t70 = 474U;

	t70 = ((x1593-x1594)<<(x1595&x1596));

	if (t70 != 2147571113U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1622 = INT32_MAX;
	int16_t x1623 = INT16_MIN;
	static uint16_t x1624 = 2U;
	volatile uint64_t t71 = 824685170883LLU;

	t71 = ((x1621-x1622)<<(x1623&x1624));

	if (t71 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x1625 = 5135754298462958LLU;
	uint64_t x1626 = UINT64_MAX;
	int64_t x1627 = INT64_MIN;
	static uint32_t x1628 = UINT32_MAX;
	uint64_t t72 = 284969895203287622LLU;

	t72 = ((x1625-x1626)<<(x1627&x1628));

	if (t72 != 5135754298462959LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1630 = INT8_MIN;
	uint8_t x1631 = 3U;
	static int16_t x1632 = -223;
	uint64_t t73 = 7LLU;

	t73 = ((x1629-x1630)<<(x1631&x1632));

	if (t73 != 828926302LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1634 = 11;
	volatile uint8_t x1635 = 7U;
	int64_t x1636 = -10LL;
	volatile int32_t t74 = -3989702;

	t74 = ((x1633-x1634)<<(x1635&x1636));

	if (t74 != 28288) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1657 = INT64_MIN;
	int16_t x1659 = INT16_MIN;
	uint32_t x1660 = 6304U;
	uint64_t t75 = 1131298938LLU;

	t75 = ((x1657-x1658)<<(x1659&x1660));

	if (t75 != 9223372036755456610LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x1681 = -1LL;
	int32_t x1682 = INT32_MIN;
	int64_t x1683 = -414402422683729LL;
	int64_t t76 = 11060406LL;

	t76 = ((x1681-x1682)<<(x1683&x1684));

	if (t76 != 68719476704LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1692 = 3;
	int64_t t77 = -1LL;

	t77 = ((x1689-x1690)<<(x1691&x1692));

	if (t77 != 88950623275840LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1693 = UINT16_MAX;
	int8_t x1694 = INT8_MIN;
	volatile int16_t x1695 = INT16_MIN;
	uint8_t x1696 = 119U;
	volatile int32_t t78 = -986042;

	t78 = ((x1693-x1694)<<(x1695&x1696));

	if (t78 != 65663) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1705 = 558497661LLU;
	volatile uint8_t x1707 = 21U;

	t79 = ((x1705-x1706)<<(x1707&x1708));

	if (t79 != 1116945500LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x1713 = 0U;
	static volatile uint64_t x1714 = 156596415446LLU;
	volatile uint16_t x1715 = 179U;
	int16_t x1716 = INT16_MIN;
	uint64_t t80 = 950925199LLU;

	t80 = ((x1713-x1714)<<(x1715&x1716));

	if (t80 != 18446743917113136170LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1733 = INT8_MIN;
	volatile uint64_t x1734 = 33464752024LLU;
	volatile int8_t x1735 = -1;
	uint16_t x1736 = 5U;
	uint64_t t81 = 10472LLU;

	t81 = ((x1733-x1734)<<(x1735&x1736));

	if (t81 != 18446743002837482752LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x1750 = UINT8_MAX;
	int8_t x1752 = INT8_MIN;
	int32_t t82 = 1843469;

	t82 = ((x1749-x1750)<<(x1751&x1752));

	if (t82 != 65280) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1777 = 12U;
	int16_t x1778 = -1;
	volatile int8_t x1779 = 1;
	int64_t x1780 = 2801LL;
	int32_t t83 = -1318255;

	t83 = ((x1777-x1778)<<(x1779&x1780));

	if (t83 != 26) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1793 = 787013LLU;
	int64_t x1794 = -1LL;
	int16_t x1796 = 15;
	volatile uint64_t t84 = 10249536712826964LLU;

	t84 = ((x1793-x1794)<<(x1795&x1796));

	if (t84 != 25788874752LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1798 = -9LL;
	int32_t x1799 = INT32_MIN;
	uint8_t x1800 = UINT8_MAX;

	t85 = ((x1797-x1798)<<(x1799&x1800));

	if (t85 != 136LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x1803 = INT32_MIN;
	int32_t x1804 = INT32_MAX;
	volatile uint64_t t86 = 114412223150LLU;

	t86 = ((x1801-x1802)<<(x1803&x1804));

	if (t86 != 17356686486555LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1813 = INT32_MAX;
	int32_t x1814 = INT32_MAX;
	uint32_t x1815 = 459329336U;
	static uint32_t x1816 = 3U;
	volatile int32_t t87 = 22905;

	t87 = ((x1813-x1814)<<(x1815&x1816));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1817 = INT64_MAX;
	uint32_t x1818 = 200350424U;
	int64_t x1819 = 68314699442793LL;
	uint32_t x1820 = 4U;

	t88 = ((x1817-x1818)<<(x1819&x1820));

	if (t88 != 9223372036654425383LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1849 = INT16_MIN;
	static uint64_t x1850 = UINT64_MAX;
	int32_t x1851 = INT32_MIN;
	int64_t x1852 = 514065830LL;
	uint64_t t89 = 8392859570559626204LLU;

	t89 = ((x1849-x1850)<<(x1851&x1852));

	if (t89 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1873 = 5361;
	uint8_t x1874 = 16U;
	int64_t x1875 = INT64_MIN;
	volatile int32_t x1876 = 1;
	int32_t t90 = 5058;

	t90 = ((x1873-x1874)<<(x1875&x1876));

	if (t90 != 5345) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1877 = 1582U;
	int8_t x1878 = INT8_MIN;
	static int32_t x1880 = INT32_MAX;
	static volatile uint32_t t91 = 6U;

	t91 = ((x1877-x1878)<<(x1879&x1880));

	if (t91 != 6840U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x1881 = UINT64_MAX;
	int64_t x1882 = INT64_MIN;
	int32_t x1883 = -465;
	uint8_t x1884 = 0U;

	t92 = ((x1881-x1882)<<(x1883&x1884));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1893 = 6268982569LL;
	volatile int32_t x1895 = INT32_MIN;
	static volatile uint8_t x1896 = 7U;
	volatile int64_t t93 = 25488LL;

	t93 = ((x1893-x1894)<<(x1895&x1896));

	if (t93 != 4121498922LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1901 = UINT64_MAX;
	int32_t x1902 = INT32_MIN;
	uint32_t x1903 = 727U;
	uint16_t x1904 = 19U;
	volatile uint64_t t94 = 261104728129010LLU;

	t94 = ((x1901-x1902)<<(x1903&x1904));

	if (t94 != 1125899906318336LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x1913 = 2086881525LLU;
	int64_t x1915 = INT64_MIN;
	static uint64_t t95 = 497LLU;

	t95 = ((x1913-x1914)<<(x1915&x1916));

	if (t95 != 2086881522LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1918 = INT16_MIN;
	volatile uint64_t x1919 = 17147443608LLU;
	int8_t x1920 = 0;

	t96 = ((x1917-x1918)<<(x1919&x1920));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1921 = INT8_MIN;
	uint32_t x1923 = UINT32_MAX;
	int32_t t97 = 3785;

	t97 = ((x1921-x1922)<<(x1923&x1924));

	if (t97 != 33423360) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1978 = 0U;
	int64_t x1979 = INT64_MAX;
	static int64_t x1980 = INT64_MIN;

	t98 = ((x1977-x1978)<<(x1979&x1980));

	if (t98 != 54) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2002 = 3986371125040LLU;
	int64_t x2003 = -26182491639LL;
	uint64_t t99 = 735194205232664LLU;

	t99 = ((x2001-x2002)<<(x2003&x2004));

	if (t99 != 18444703051693531136LLU) { NG(); } else { ; }
	
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

