#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x63 = UINT16_MAX;
int32_t t3 = -5203;
static uint64_t x122 = UINT64_MAX;
static int32_t x149 = -4517507;
uint8_t x158 = 14U;
uint16_t x159 = 777U;
int16_t x205 = -2766;
int8_t x215 = 1;
int32_t x237 = -1;
int32_t t14 = -115754832;
uint8_t x277 = UINT8_MAX;
static int8_t x280 = INT8_MAX;
int64_t x288 = INT64_MIN;
static uint64_t x354 = 7094268353LLU;
uint64_t t20 = 1LLU;
static uint8_t x386 = 50U;
static int8_t x387 = INT8_MIN;
uint16_t x388 = 1U;
uint32_t t22 = 1U;
int16_t x413 = -1;
int16_t x414 = INT16_MAX;
int32_t x448 = -4;
uint64_t x477 = 5LLU;
int64_t x514 = 1LL;
int16_t x516 = -2;
volatile int64_t t29 = -1013LL;
static uint32_t x519 = 10U;
int8_t x541 = -1;
volatile uint8_t x563 = 3U;
static uint64_t t34 = 82070517LLU;
volatile int8_t x650 = INT8_MAX;
int64_t x651 = 18LL;
uint64_t t37 = 917LLU;
uint32_t x741 = UINT32_MAX;
static uint8_t x744 = 3U;
int16_t x786 = INT16_MAX;
uint64_t x792 = 32LLU;
int8_t x793 = 1;
uint16_t x794 = 5U;
static volatile int8_t x825 = INT8_MAX;
int8_t x828 = INT8_MIN;
static uint64_t t44 = 449321919770266LLU;
int64_t x924 = 1LL;
volatile int32_t t49 = -1511668;
static int32_t x1045 = INT32_MIN;
static uint32_t x1078 = 52967542U;
uint32_t t51 = 5499U;
static int16_t x1127 = INT16_MIN;
static volatile int16_t x1128 = INT16_MIN;
uint8_t x1133 = 56U;
uint16_t x1134 = 9868U;
static int64_t x1135 = INT64_MIN;
volatile uint32_t t56 = 1675347740U;
uint8_t x1158 = UINT8_MAX;
volatile uint64_t x1160 = UINT64_MAX;
int16_t x1224 = 3993;
static uint8_t x1250 = 7U;
int64_t x1274 = INT64_MAX;
int8_t x1276 = -1;
int64_t t63 = 203522257779LL;
uint16_t x1305 = UINT16_MAX;
static volatile uint8_t x1308 = 3U;
volatile uint16_t x1310 = 508U;
int32_t x1312 = -1;
static volatile uint16_t x1333 = UINT16_MAX;
static int8_t x1348 = 1;
int32_t x1374 = INT32_MAX;
int16_t x1376 = INT16_MIN;
volatile int32_t t69 = -377;
int16_t x1511 = INT16_MAX;
volatile int32_t t73 = -89593;
static int16_t x1521 = INT16_MIN;
int16_t x1523 = INT16_MIN;
uint64_t t74 = 56LLU;
uint64_t x1554 = UINT64_MAX;
uint16_t x1557 = 15U;
static uint64_t x1606 = UINT64_MAX;
int64_t x1607 = INT64_MAX;
volatile int32_t t80 = -14260494;
uint64_t x1710 = 14606809221484002LLU;
volatile uint64_t t83 = 364190LLU;
static volatile int32_t x1753 = -6855474;
uint32_t t84 = 44092445U;
int8_t x1779 = 24;
uint32_t x1783 = UINT32_MAX;
int64_t x1786 = 2822327898490070138LL;
int16_t x1808 = 31;
static uint32_t t89 = 5U;
static int16_t x1809 = 12132;
volatile int32_t t90 = 3528833;
volatile uint32_t t94 = 1832U;
int32_t x1877 = INT32_MAX;
int64_t t95 = -1LL;
static int32_t x1881 = INT32_MIN;
int8_t x1882 = INT8_MAX;
uint32_t x1918 = UINT32_MAX;
int8_t x1920 = INT8_MIN;
uint64_t x1947 = UINT64_MAX;


void f0(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = 212090;
	uint8_t x19 = UINT8_MAX;
	volatile int8_t x20 = 2;
	int32_t t0 = 245816837;

	t0 = (x17%(x18<<(x19%x20)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x37 = INT32_MIN;
	volatile int8_t x38 = 20;
	int8_t x39 = 1;
	int64_t x40 = INT64_MAX;
	volatile int32_t t1 = 238836;

	t1 = (x37%(x38<<(x39%x40)));

	if (t1 != -8) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x57 = -1LL;
	int32_t x58 = INT32_MAX;
	volatile uint8_t x59 = 0U;
	int32_t x60 = -1;
	static int64_t t2 = -991003LL;

	t2 = (x57%(x58<<(x59%x60)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x61 = -399265200;
	uint16_t x62 = 2U;
	static volatile uint8_t x64 = 1U;

	t3 = (x61%(x62<<(x63%x64)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x109 = INT8_MAX;
	int32_t x110 = 1285;
	static volatile int32_t x111 = 150612403;
	int32_t x112 = -1;
	volatile int32_t t4 = 870114;

	t4 = (x109%(x110<<(x111%x112)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x117 = INT64_MAX;
	static volatile uint64_t x118 = 1122451690481627751LLU;
	uint64_t x119 = UINT64_MAX;
	static uint64_t x120 = UINT64_MAX;
	volatile uint64_t t5 = 347735389769LLU;

	t5 = (x117%(x118<<(x119%x120)));

	if (t5 != 243758513001753799LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x121 = 1U;
	uint32_t x123 = UINT32_MAX;
	static volatile uint8_t x124 = 4U;
	static uint64_t t6 = 389376LLU;

	t6 = (x121%(x122<<(x123%x124)));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x150 = 14U;
	int64_t x151 = INT64_MIN;
	int32_t x152 = -1;
	volatile int32_t t7 = 11137055;

	t7 = (x149%(x150<<(x151%x152)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x157 = -1;
	uint8_t x160 = 32U;
	int32_t t8 = -132;

	t8 = (x157%(x158<<(x159%x160)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MAX;
	static int8_t x208 = -1;
	volatile int32_t t9 = 16;

	t9 = (x205%(x206<<(x207%x208)));

	if (t9 != -2766) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x213 = 0U;
	volatile int16_t x214 = 3;
	volatile int32_t x216 = -6;
	static volatile int32_t t10 = -326495595;

	t10 = (x213%(x214<<(x215%x216)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x221 = 10750U;
	static uint32_t x222 = 9795912U;
	volatile uint32_t x223 = UINT32_MAX;
	int16_t x224 = 3;
	volatile uint32_t t11 = 720U;

	t11 = (x221%(x222<<(x223%x224)));

	if (t11 != 10750U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x234 = 1419077693857551LL;
	int16_t x235 = -1;
	uint64_t x236 = UINT64_MAX;
	static volatile int64_t t12 = 264142018721LL;

	t12 = (x233%(x234<<(x235%x236)));

	if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x238 = 2472330LLU;
	int16_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	uint64_t t13 = 106040LLU;

	t13 = (x237%(x238<<(x239%x240)));

	if (t13 != 973575LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x269 = INT16_MAX;
	static int16_t x270 = 4;
	int16_t x271 = -1;
	static int8_t x272 = -1;

	t14 = (x269%(x270<<(x271%x272)));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x278 = UINT64_MAX;
	uint32_t x279 = UINT32_MAX;
	uint64_t t15 = 816445844LLU;

	t15 = (x277%(x278<<(x279%x280)));

	if (t15 != 255LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x285 = INT8_MIN;
	uint8_t x286 = UINT8_MAX;
	int64_t x287 = INT64_MIN;
	static int32_t t16 = -1006001;

	t16 = (x285%(x286<<(x287%x288)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MAX;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t17 = -199;

	t17 = (x297%(x298<<(x299%x300)));

	if (t17 != -131072) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x305 = 967U;
	uint32_t x306 = UINT32_MAX;
	int16_t x307 = 0;
	int16_t x308 = INT16_MIN;
	static uint32_t t18 = 7530U;

	t18 = (x305%(x306<<(x307%x308)));

	if (t18 != 967U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x325 = INT32_MIN;
	volatile uint32_t x326 = 272U;
	static volatile uint8_t x327 = 24U;
	int32_t x328 = -21;
	volatile uint32_t t19 = 1994U;

	t19 = (x325%(x326<<(x327%x328)));

	if (t19 != 128U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x353 = 381U;
	int16_t x355 = INT16_MAX;
	int32_t x356 = -1;

	t20 = (x353%(x354<<(x355%x356)));

	if (t20 != 381LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x381 = INT64_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	static int16_t x383 = 24;
	volatile int64_t x384 = INT64_MIN;
	uint64_t t21 = 33878652LLU;

	t21 = (x381%(x382<<(x383%x384)));

	if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x385 = 2893188U;

	t22 = (x385%(x386<<(x387%x388)));

	if (t22 != 38U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MAX;
	int32_t x399 = INT32_MIN;
	int64_t x400 = 2LL;
	static int64_t t23 = 138612LL;

	t23 = (x397%(x398<<(x399%x400)));

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x415 = INT8_MIN;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t24 = 2166;

	t24 = (x413%(x414<<(x415%x416)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x445 = 8341354LLU;
	volatile uint32_t x446 = 341371387U;
	uint16_t x447 = 1569U;
	volatile uint64_t t25 = 14140511749590LLU;

	t25 = (x445%(x446<<(x447%x448)));

	if (t25 != 8341354LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x449 = 3211570505LLU;
	static uint64_t x450 = 6469818104598339LLU;
	int16_t x451 = 46;
	volatile int32_t x452 = INT32_MIN;
	uint64_t t26 = 561795627553856252LLU;

	t26 = (x449%(x450<<(x451%x452)));

	if (t26 != 3211570505LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x478 = 9461U;
	static int64_t x479 = INT64_MAX;
	int32_t x480 = INT32_MAX;
	static uint64_t t27 = 1LLU;

	t27 = (x477%(x478<<(x479%x480)));

	if (t27 != 5LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x509 = INT8_MAX;
	static uint16_t x510 = 189U;
	uint16_t x511 = 30240U;
	int8_t x512 = -1;
	int32_t t28 = -120567;

	t28 = (x509%(x510<<(x511%x512)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x513 = INT16_MAX;
	uint8_t x515 = 0U;

	t29 = (x513%(x514<<(x515%x516)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x517 = -1LL;
	uint16_t x518 = 468U;
	uint16_t x520 = UINT16_MAX;
	int64_t t30 = -1960337041LL;

	t30 = (x517%(x518<<(x519%x520)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x525 = 27U;
	static int32_t x526 = 213;
	static volatile int16_t x527 = -1;
	uint16_t x528 = 1U;
	volatile int32_t t31 = -325;

	t31 = (x525%(x526<<(x527%x528)));

	if (t31 != 27) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x542 = 79LLU;
	int32_t x543 = -31;
	int8_t x544 = 1;
	volatile uint64_t t32 = 58LLU;

	t32 = (x541%(x542<<(x543%x544)));

	if (t32 != 50LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x549 = INT64_MAX;
	int64_t x550 = 2029LL;
	static uint16_t x551 = UINT16_MAX;
	volatile uint8_t x552 = 2U;
	int64_t t33 = 33LL;

	t33 = (x549%(x550<<(x551%x552)));

	if (t33 != 1453LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x561 = -2377564LL;
	uint64_t x562 = 623817021LLU;
	int64_t x564 = INT64_MIN;

	t34 = (x561%(x562<<(x563%x564)));

	if (t34 != 3050439876LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x649 = INT64_MIN;
	int32_t x652 = 39029;
	volatile int64_t t35 = -758358376LL;

	t35 = (x649%(x650<<(x651%x652)));

	if (t35 != -2097152LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x677 = UINT8_MAX;
	int16_t x678 = 1;
	int64_t x679 = 148868566LL;
	int16_t x680 = -1;
	int32_t t36 = -349403;

	t36 = (x677%(x678<<(x679%x680)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x709 = 1U;
	static uint64_t x710 = 4883526914LLU;
	int64_t x711 = -9633LL;
	int8_t x712 = -13;

	t37 = (x709%(x710<<(x711%x712)));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x729 = INT32_MAX;
	uint16_t x730 = 15U;
	volatile int16_t x731 = INT16_MIN;
	uint32_t x732 = 26U;
	volatile int32_t t38 = 37955;

	t38 = (x729%(x730<<(x731%x732)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x742 = 416U;
	static int16_t x743 = 0;
	volatile uint32_t t39 = 16U;

	t39 = (x741%(x742<<(x743%x744)));

	if (t39 != 255U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x781 = INT8_MIN;
	int8_t x782 = 22;
	uint64_t x783 = 420571528125LLU;
	int16_t x784 = 10;
	int32_t t40 = 449910032;

	t40 = (x781%(x782<<(x783%x784)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x785 = -1;
	static int16_t x787 = -1;
	static int8_t x788 = 1;
	static int32_t t41 = 1;

	t41 = (x785%(x786<<(x787%x788)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x789 = 3;
	uint32_t x790 = 6019U;
	static volatile int64_t x791 = 701214705LL;
	uint32_t t42 = 218516152U;

	t42 = (x789%(x790<<(x791%x792)));

	if (t42 != 3U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x795 = 22U;
	int32_t x796 = 370648;
	int32_t t43 = 1595;

	t43 = (x793%(x794<<(x795%x796)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x826 = UINT64_MAX;
	volatile int8_t x827 = 3;

	t44 = (x825%(x826<<(x827%x828)));

	if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x909 = UINT16_MAX;
	static int8_t x910 = 2;
	volatile int8_t x911 = -1;
	static volatile int8_t x912 = -1;
	static int32_t t45 = -5;

	t45 = (x909%(x910<<(x911%x912)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x913 = UINT8_MAX;
	uint64_t x914 = 1620LLU;
	uint16_t x915 = 14U;
	static int64_t x916 = -1703705958LL;
	volatile uint64_t t46 = 967152572LLU;

	t46 = (x913%(x914<<(x915%x916)));

	if (t46 != 255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x921 = INT32_MAX;
	int64_t x922 = INT64_MAX;
	int16_t x923 = INT16_MIN;
	volatile int64_t t47 = 28669126LL;

	t47 = (x921%(x922<<(x923%x924)));

	if (t47 != 2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x965 = INT8_MAX;
	static volatile uint8_t x966 = UINT8_MAX;
	int16_t x967 = INT16_MIN;
	int64_t x968 = -1LL;
	int32_t t48 = -52566502;

	t48 = (x965%(x966<<(x967%x968)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1013 = UINT16_MAX;
	uint8_t x1014 = UINT8_MAX;
	static int16_t x1015 = 0;
	int64_t x1016 = -1LL;

	t49 = (x1013%(x1014<<(x1015%x1016)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1046 = 1264781179495560095LLU;
	static int16_t x1047 = INT16_MIN;
	static int8_t x1048 = INT8_MIN;
	volatile uint64_t t50 = 195LLU;

	t50 = (x1045%(x1046<<(x1047%x1048)));

	if (t50 != 739807558624226638LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x1077 = 1U;
	volatile uint64_t x1079 = UINT64_MAX;
	static volatile int16_t x1080 = -1;

	t51 = (x1077%(x1078<<(x1079%x1080)));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1085 = 6946U;
	int64_t x1086 = 487007135419647LL;
	int16_t x1087 = INT16_MIN;
	volatile int16_t x1088 = INT16_MIN;
	static int64_t t52 = -125251894LL;

	t52 = (x1085%(x1086<<(x1087%x1088)));

	if (t52 != 6946LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1109 = INT32_MIN;
	static volatile int16_t x1110 = 1;
	int8_t x1111 = 5;
	uint8_t x1112 = UINT8_MAX;
	int32_t t53 = 45168;

	t53 = (x1109%(x1110<<(x1111%x1112)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1125 = INT32_MIN;
	volatile uint64_t x1126 = 66LLU;
	uint64_t t54 = 23175335488LLU;

	t54 = (x1125%(x1126<<(x1127%x1128)));

	if (t54 != 14LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1136 = -1;
	int32_t t55 = -618282929;

	t55 = (x1133%(x1134<<(x1135%x1136)));

	if (t55 != 56) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1137 = INT32_MIN;
	static uint32_t x1138 = UINT32_MAX;
	uint32_t x1139 = 1U;
	int8_t x1140 = -7;

	t56 = (x1137%(x1138<<(x1139%x1140)));

	if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x1145 = 2;
	uint8_t x1146 = 123U;
	uint32_t x1147 = UINT32_MAX;
	int32_t x1148 = -1;
	int32_t t57 = 342666;

	t57 = (x1145%(x1146<<(x1147%x1148)));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x1157 = INT8_MIN;
	int8_t x1159 = 1;
	volatile int32_t t58 = -115;

	t58 = (x1157%(x1158<<(x1159%x1160)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x1197 = 56;
	int64_t x1198 = 2017474LL;
	volatile int32_t x1199 = INT32_MIN;
	int8_t x1200 = INT8_MIN;
	volatile int64_t t59 = -248747LL;

	t59 = (x1197%(x1198<<(x1199%x1200)));

	if (t59 != 56LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x1221 = UINT32_MAX;
	uint16_t x1222 = UINT16_MAX;
	static int8_t x1223 = 3;
	uint32_t t60 = 49627U;

	t60 = (x1221%(x1222<<(x1223%x1224)));

	if (t60 != 65535U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1249 = INT32_MIN;
	int32_t x1251 = -3;
	uint8_t x1252 = 1U;
	int32_t t61 = -1816;

	t61 = (x1249%(x1250<<(x1251%x1252)));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1253 = 6LLU;
	int64_t x1254 = 107331325174LL;
	uint8_t x1255 = UINT8_MAX;
	uint8_t x1256 = 41U;
	static uint64_t t62 = 372601055LLU;

	t62 = (x1253%(x1254<<(x1255%x1256)));

	if (t62 != 6LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x1273 = 998U;
	int16_t x1275 = 436;

	t63 = (x1273%(x1274<<(x1275%x1276)));

	if (t63 != 998LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1306 = INT32_MAX;
	volatile uint16_t x1307 = UINT16_MAX;
	static volatile int32_t t64 = -5019643;

	t64 = (x1305%(x1306<<(x1307%x1308)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1309 = 7835U;
	uint8_t x1311 = 95U;
	volatile int32_t t65 = -10135;

	t65 = (x1309%(x1310<<(x1311%x1312)));

	if (t65 != 215) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1321 = INT32_MIN;
	int8_t x1322 = INT8_MAX;
	static volatile uint32_t x1323 = UINT32_MAX;
	volatile uint32_t x1324 = 5U;
	static int32_t t66 = 438971;

	t66 = (x1321%(x1322<<(x1323%x1324)));

	if (t66 != -8) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1334 = 4098;
	volatile int16_t x1335 = -7;
	int64_t x1336 = -1LL;
	static volatile int32_t t67 = -1;

	t67 = (x1333%(x1334<<(x1335%x1336)));

	if (t67 != 4065) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1345 = -13;
	uint32_t x1346 = 5438958U;
	static uint32_t x1347 = 140706U;
	volatile uint32_t t68 = 5U;

	t68 = (x1345%(x1346<<(x1347%x1348)));

	if (t68 != 3629421U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1373 = INT16_MIN;
	volatile int32_t x1375 = INT32_MIN;

	t69 = (x1373%(x1374<<(x1375%x1376)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x1405 = UINT8_MAX;
	int16_t x1406 = INT16_MAX;
	uint16_t x1407 = 14U;
	uint8_t x1408 = UINT8_MAX;
	volatile int32_t t70 = -1;

	t70 = (x1405%(x1406<<(x1407%x1408)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1445 = 252905323LLU;
	volatile uint16_t x1446 = UINT16_MAX;
	int64_t x1447 = 47LL;
	volatile uint8_t x1448 = 1U;
	volatile uint64_t t71 = 221515710LLU;

	t71 = (x1445%(x1446<<(x1447%x1448)));

	if (t71 != 5758LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1477 = 4285;
	int64_t x1478 = INT64_MAX;
	volatile int64_t x1479 = INT64_MAX;
	static int32_t x1480 = -1;
	volatile int64_t t72 = 1771LL;

	t72 = (x1477%(x1478<<(x1479%x1480)));

	if (t72 != 4285LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x1509 = INT8_MIN;
	uint16_t x1510 = UINT16_MAX;
	int8_t x1512 = -1;

	t73 = (x1509%(x1510<<(x1511%x1512)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1522 = 1502187644LLU;
	static volatile int8_t x1524 = -1;

	t74 = (x1521%(x1522<<(x1523%x1524)));

	if (t74 != 1431665864LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1525 = 311U;
	int16_t x1526 = INT16_MAX;
	static int64_t x1527 = INT64_MAX;
	int64_t x1528 = -1LL;
	volatile uint32_t t75 = 48U;

	t75 = (x1525%(x1526<<(x1527%x1528)));

	if (t75 != 311U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1553 = INT64_MIN;
	static uint32_t x1555 = UINT32_MAX;
	int16_t x1556 = INT16_MAX;
	static uint64_t t76 = 166123389808147972LLU;

	t76 = (x1553%(x1554<<(x1555%x1556)));

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x1558 = 891941178U;
	static uint32_t x1559 = UINT32_MAX;
	int16_t x1560 = 107;
	static volatile uint32_t t77 = 884920U;

	t77 = (x1557%(x1558<<(x1559%x1560)));

	if (t77 != 15U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1605 = INT8_MIN;
	uint64_t x1608 = 1LLU;
	uint64_t t78 = 2875415LLU;

	t78 = (x1605%(x1606<<(x1607%x1608)));

	if (t78 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1629 = UINT16_MAX;
	int8_t x1630 = INT8_MAX;
	volatile uint8_t x1631 = 1U;
	uint16_t x1632 = UINT16_MAX;
	volatile int32_t t79 = -62797;

	t79 = (x1629%(x1630<<(x1631%x1632)));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x1641 = 0;
	volatile int32_t x1642 = INT32_MAX;
	uint8_t x1643 = 7U;
	uint8_t x1644 = 1U;

	t80 = (x1641%(x1642<<(x1643%x1644)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1645 = -1LL;
	static uint8_t x1646 = UINT8_MAX;
	uint32_t x1647 = UINT32_MAX;
	volatile int16_t x1648 = -2;
	volatile int64_t t81 = -821423426LL;

	t81 = (x1645%(x1646<<(x1647%x1648)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x1709 = INT32_MAX;
	static int64_t x1711 = INT64_MIN;
	static int16_t x1712 = INT16_MIN;
	static uint64_t t82 = 220LLU;

	t82 = (x1709%(x1710<<(x1711%x1712)));

	if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x1733 = INT8_MAX;
	uint64_t x1734 = UINT64_MAX;
	static volatile int16_t x1735 = INT16_MIN;
	int32_t x1736 = -1;

	t83 = (x1733%(x1734<<(x1735%x1736)));

	if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x1754 = UINT32_MAX;
	static uint8_t x1755 = 0U;
	int16_t x1756 = 2;

	t84 = (x1753%(x1754<<(x1755%x1756)));

	if (t84 != 4288111822U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x1777 = -26;
	static uint32_t x1778 = 6U;
	static uint8_t x1780 = 109U;
	volatile uint32_t t85 = 61104558U;

	t85 = (x1777%(x1778<<(x1779%x1780)));

	if (t85 != 67108838U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x1781 = 8U;
	int64_t x1782 = INT64_MAX;
	uint16_t x1784 = UINT16_MAX;
	volatile int64_t t86 = -230LL;

	t86 = (x1781%(x1782<<(x1783%x1784)));

	if (t86 != 8LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1785 = 7U;
	int16_t x1787 = -1;
	int64_t x1788 = -1LL;
	int64_t t87 = -1LL;

	t87 = (x1785%(x1786<<(x1787%x1788)));

	if (t87 != 7LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1801 = 1273894759509LLU;
	uint64_t x1802 = 3180908251119062730LLU;
	static uint32_t x1803 = 18082946U;
	uint16_t x1804 = 5U;
	uint64_t t88 = 36893225316092LLU;

	t88 = (x1801%(x1802<<(x1803%x1804)));

	if (t88 != 1273894759509LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x1805 = UINT32_MAX;
	uint8_t x1806 = 39U;
	volatile uint32_t x1807 = 3537010U;

	t89 = (x1805%(x1806<<(x1807%x1808)));

	if (t89 != 255U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1810 = 8U;
	int64_t x1811 = INT64_MIN;
	int64_t x1812 = INT64_MIN;

	t90 = (x1809%(x1810<<(x1811%x1812)));

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1833 = 3;
	uint32_t x1834 = 497U;
	int64_t x1835 = 47LL;
	volatile uint64_t x1836 = 19LLU;
	uint32_t t91 = 71609U;

	t91 = (x1833%(x1834<<(x1835%x1836)));

	if (t91 != 3U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x1841 = INT8_MIN;
	static int64_t x1842 = INT64_MAX;
	static int16_t x1843 = INT16_MIN;
	int16_t x1844 = INT16_MIN;
	volatile int64_t t92 = 484054820420124LL;

	t92 = (x1841%(x1842<<(x1843%x1844)));

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1853 = -1;
	uint16_t x1854 = UINT16_MAX;
	int64_t x1855 = INT64_MIN;
	int64_t x1856 = INT64_MIN;
	static volatile int32_t t93 = 28624857;

	t93 = (x1853%(x1854<<(x1855%x1856)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x1865 = -3;
	uint32_t x1866 = 9U;
	static int64_t x1867 = INT64_MIN;
	int16_t x1868 = -1;

	t94 = (x1865%(x1866<<(x1867%x1868)));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x1878 = 27815213LL;
	static volatile int64_t x1879 = INT64_MIN;
	uint8_t x1880 = 2U;

	t95 = (x1877%(x1878<<(x1879%x1880)));

	if (t95 != 5712246LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1883 = 7U;
	uint8_t x1884 = 6U;
	volatile int32_t t96 = -12045;

	t96 = (x1881%(x1882<<(x1883%x1884)));

	if (t96 != -8) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1917 = INT16_MAX;
	int32_t x1919 = INT32_MIN;
	static volatile uint32_t t97 = 251388995U;

	t97 = (x1917%(x1918<<(x1919%x1920)));

	if (t97 != 32767U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x1937 = 0U;
	uint32_t x1938 = UINT32_MAX;
	int8_t x1939 = -1;
	int64_t x1940 = -1LL;
	uint32_t t98 = 47646U;

	t98 = (x1937%(x1938<<(x1939%x1940)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x1945 = INT16_MIN;
	int8_t x1946 = INT8_MAX;
	volatile uint16_t x1948 = 314U;
	static int32_t t99 = -5;

	t99 = (x1945%(x1946<<(x1947%x1948)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

