#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x45 = INT8_MAX;
int8_t x48 = INT8_MIN;
int32_t t2 = -538;
uint64_t x60 = UINT64_MAX;
static int16_t x115 = 412;
int32_t x116 = -542041;
uint64_t x150 = UINT64_MAX;
uint32_t x201 = 21464U;
volatile int32_t x213 = INT32_MAX;
uint8_t x215 = UINT8_MAX;
int64_t x230 = 2621186396882919LL;
int32_t x235 = INT32_MIN;
int32_t t15 = -185650;
uint64_t x255 = 608661LLU;
uint32_t x272 = UINT32_MAX;
uint8_t x285 = 10U;
volatile int16_t x288 = -63;
int32_t x335 = -1;
volatile int16_t x368 = -7;
int64_t x401 = 248400492740945LL;
volatile uint64_t x403 = 11209LLU;
volatile int16_t x437 = INT16_MAX;
uint64_t x438 = UINT64_MAX;
static volatile uint64_t x439 = UINT64_MAX;
int16_t x457 = 2759;
int32_t t26 = -48971;
int32_t x475 = -1;
uint32_t x525 = UINT32_MAX;
int32_t t30 = 912;
volatile int8_t x554 = -9;
int64_t x556 = INT64_MIN;
static int32_t t34 = 4049;
static int16_t x614 = -1;
uint64_t x615 = UINT64_MAX;
int8_t x616 = INT8_MAX;
uint64_t t36 = 3135896805865LLU;
uint16_t x651 = 2U;
uint64_t x652 = 375496LLU;
volatile uint64_t x674 = 18878LLU;
int64_t t41 = 6580703934902LL;
uint64_t x746 = 494338312413493705LLU;
int8_t x747 = 4;
int64_t x748 = -1103LL;
int16_t x763 = -6;
volatile uint64_t x764 = UINT64_MAX;
volatile int16_t x831 = INT16_MAX;
static uint8_t x838 = 4U;
int16_t x872 = -1;
static volatile int32_t t47 = -437377;
int8_t x873 = 0;
volatile int8_t x889 = INT8_MAX;
static volatile int32_t x891 = INT32_MIN;
static int32_t x892 = -16;
volatile uint32_t t50 = UINT32_MAX;
static uint32_t x926 = UINT32_MAX;
volatile int32_t x948 = INT32_MIN;
static uint64_t x959 = 1476314449LLU;
int16_t x995 = -92;
static volatile int64_t t56 = 6184090722609LL;
static uint32_t x1042 = 186U;
uint16_t x1076 = UINT16_MAX;
int32_t t58 = 179;
int16_t x1153 = 240;
volatile uint16_t x1179 = 0U;
uint16_t x1181 = 9U;
volatile int8_t x1183 = -1;
int32_t x1196 = INT32_MAX;
volatile int16_t x1207 = 7;
static volatile int64_t x1231 = -1LL;
volatile uint64_t x1298 = 75080825310655LLU;
int64_t x1320 = 258278396849LL;
int32_t x1321 = 3;
uint16_t x1322 = 479U;
volatile int32_t t72 = -1;
int64_t x1419 = -1LL;
int32_t t75 = -7;
volatile int32_t t76 = -170998366;
int16_t x1452 = INT16_MIN;
volatile int16_t x1472 = -1;
int8_t x1511 = 0;
int16_t x1512 = INT16_MIN;
uint8_t x1517 = 2U;
static uint16_t x1549 = 1948U;
int64_t x1552 = -27708258016LL;
static int32_t t85 = -526343;
volatile uint64_t x1577 = UINT64_MAX;
int8_t x1578 = -7;
volatile int64_t x1600 = -1605408481292764785LL;
int32_t x1616 = -1;
uint64_t x1670 = 0LLU;
int16_t x1671 = INT16_MIN;
static int32_t t94 = 5;
static volatile uint16_t x1685 = 4U;
static uint64_t x1731 = UINT64_MAX;


void f0(void) {
	uint32_t x25 = 733182U;
	int8_t x26 = INT8_MIN;
	int16_t x27 = 4;
	uint64_t x28 = UINT64_MAX;
	volatile uint32_t t0 = 1U;

	t0 = (x25>>((x26*x27)/x28));

	if (t0 != 733182U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x37 = 1442509303791LLU;
	uint64_t x38 = 267375LLU;
	uint16_t x39 = 137U;
	int64_t x40 = -748LL;
	uint64_t t1 = 57875234813739LLU;

	t1 = (x37>>((x38*x39)/x40));

	if (t1 != 1442509303791LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x46 = INT64_MIN;
	uint64_t x47 = 2033218499556095LLU;

	t2 = (x45>>((x46*x47)/x48));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x49 = UINT32_MAX;
	static volatile int8_t x50 = 3;
	int32_t x51 = 0;
	volatile uint64_t x52 = 11LLU;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x49>>((x50*x51)/x52));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x57 = 2U;
	volatile int64_t x58 = -1LL;
	int8_t x59 = INT8_MIN;
	uint32_t t4 = 36925306U;

	t4 = (x57>>((x58*x59)/x60));

	if (t4 != 2U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x113 = 986;
	volatile uint64_t x114 = UINT64_MAX;
	static volatile int32_t t5 = 339726943;

	t5 = (x113>>((x114*x115)/x116));

	if (t5 != 493) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x117 = 196U;
	int64_t x118 = INT64_MAX;
	volatile uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t6 = 40810;

	t6 = (x117>>((x118*x119)/x120));

	if (t6 != 196) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x145 = 90473662U;
	int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MIN;
	volatile int32_t x148 = -115356759;
	static volatile uint32_t t7 = 4285U;

	t7 = (x145>>((x146*x147)/x148));

	if (t7 != 176706U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x149 = 2U;
	int8_t x151 = INT8_MIN;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t8 = 834912513;

	t8 = (x149>>((x150*x151)/x152));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x153 = 15U;
	static int64_t x154 = INT64_MAX;
	static int8_t x155 = -1;
	static uint64_t x156 = UINT64_MAX;
	static volatile int32_t t9 = 118;

	t9 = (x153>>((x154*x155)/x156));

	if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x177 = 3914U;
	int64_t x178 = 2137668841410478781LL;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MIN;
	volatile uint32_t t10 = 162942U;

	t10 = (x177>>((x178*x179)/x180));

	if (t10 != 3914U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x202 = 305;
	int32_t x203 = -1;
	int64_t x204 = INT64_MAX;
	uint32_t t11 = 4272U;

	t11 = (x201>>((x202*x203)/x204));

	if (t11 != 21464U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x214 = -1;
	volatile int16_t x216 = INT16_MIN;
	int32_t t12 = INT32_MAX;

	t12 = (x213>>((x214*x215)/x216));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x229 = 126U;
	volatile int8_t x231 = -20;
	int64_t x232 = INT64_MAX;
	static volatile int32_t t13 = 5;

	t13 = (x229>>((x230*x231)/x232));

	if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x233 = 5U;
	uint32_t x234 = 0U;
	int16_t x236 = INT16_MIN;
	static int32_t t14 = -204907;

	t14 = (x233>>((x234*x235)/x236));

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x241 = 7U;
	int8_t x242 = 1;
	static volatile int16_t x243 = -1;
	int16_t x244 = 91;

	t15 = (x241>>((x242*x243)/x244));

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x249 = INT16_MAX;
	volatile int16_t x250 = 4;
	volatile int8_t x251 = -51;
	uint16_t x252 = 4017U;
	volatile int32_t t16 = -3881;

	t16 = (x249>>((x250*x251)/x252));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x253 = 4U;
	int16_t x254 = INT16_MIN;
	int16_t x256 = -1;
	volatile int32_t t17 = 6666;

	t17 = (x253>>((x254*x255)/x256));

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x269 = 1;
	int64_t x270 = -41268LL;
	uint8_t x271 = UINT8_MAX;
	int32_t t18 = -348337950;

	t18 = (x269>>((x270*x271)/x272));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x286 = -1;
	int16_t x287 = -1;
	int32_t t19 = -204;

	t19 = (x285>>((x286*x287)/x288));

	if (t19 != 10) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x333 = 22484046U;
	volatile int8_t x334 = INT8_MIN;
	uint8_t x336 = 24U;
	volatile uint32_t t20 = 593500U;

	t20 = (x333>>((x334*x335)/x336));

	if (t20 != 702626U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = 57;
	uint16_t x355 = 87U;
	uint32_t x356 = UINT32_MAX;
	static int32_t t21 = -19;

	t21 = (x353>>((x354*x355)/x356));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x365 = UINT32_MAX;
	int8_t x366 = -1;
	static volatile uint16_t x367 = 57U;
	uint32_t t22 = 1218U;

	t22 = (x365>>((x366*x367)/x368));

	if (t22 != 16777215U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x373 = 65183;
	uint64_t x374 = 3540002038LLU;
	int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t23 = -98833219;

	t23 = (x373>>((x374*x375)/x376));

	if (t23 != 65183) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x402 = 12894;
	int8_t x404 = -1;
	static int64_t t24 = -263710126LL;

	t24 = (x401>>((x402*x403)/x404));

	if (t24 != 248400492740945LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x440 = 4U;
	volatile int32_t t25 = -1;

	t25 = (x437>>((x438*x439)/x440));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x458 = INT64_MAX;
	uint8_t x459 = 0U;
	int64_t x460 = 114LL;

	t26 = (x457>>((x458*x459)/x460));

	if (t26 != 2759) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x465 = 17U;
	int64_t x466 = INT64_MIN;
	volatile uint64_t x467 = 477LLU;
	int32_t x468 = -1;
	volatile int32_t t27 = -248815822;

	t27 = (x465>>((x466*x467)/x468));

	if (t27 != 17) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x473 = 2868386559209369392LL;
	int32_t x474 = -174;
	static volatile int64_t x476 = INT64_MIN;
	int64_t t28 = -22842LL;

	t28 = (x473>>((x474*x475)/x476));

	if (t28 != 2868386559209369392LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x526 = 690664LLU;
	uint8_t x527 = 3U;
	static int64_t x528 = -51LL;
	uint32_t t29 = UINT32_MAX;

	t29 = (x525>>((x526*x527)/x528));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x529 = 355815248;
	uint16_t x530 = 1U;
	int32_t x531 = 219;
	static uint64_t x532 = 180LLU;

	t30 = (x529>>((x530*x531)/x532));

	if (t30 != 177907624) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x553 = INT64_MAX;
	uint64_t x555 = 6224187LLU;
	static int64_t t31 = 7359639LL;

	t31 = (x553>>((x554*x555)/x556));

	if (t31 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x565 = 13U;
	uint8_t x566 = 11U;
	int32_t x567 = -1;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t32 = -3328;

	t32 = (x565>>((x566*x567)/x568));

	if (t32 != 13) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x585 = 122865365514905798LL;
	volatile int32_t x586 = 112;
	uint8_t x587 = 0U;
	uint32_t x588 = 42478U;
	static volatile int64_t t33 = -13741LL;

	t33 = (x585>>((x586*x587)/x588));

	if (t33 != 122865365514905798LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x597 = UINT16_MAX;
	int8_t x598 = 0;
	int32_t x599 = -12211800;
	int32_t x600 = INT32_MIN;

	t34 = (x597>>((x598*x599)/x600));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x601 = UINT16_MAX;
	volatile int8_t x602 = -6;
	uint32_t x603 = UINT32_MAX;
	volatile int64_t x604 = INT64_MAX;
	int32_t t35 = 0;

	t35 = (x601>>((x602*x603)/x604));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x613 = 31571682LLU;

	t36 = (x613>>((x614*x615)/x616));

	if (t36 != 31571682LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x621 = 1;
	static uint32_t x622 = UINT32_MAX;
	static int8_t x623 = -27;
	int8_t x624 = INT8_MIN;
	volatile int32_t t37 = 9281;

	t37 = (x621>>((x622*x623)/x624));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x629 = 4087975165215782LL;
	uint16_t x630 = 20195U;
	int8_t x631 = INT8_MAX;
	int64_t x632 = INT64_MIN;
	int64_t t38 = 268025790859846LL;

	t38 = (x629>>((x630*x631)/x632));

	if (t38 != 4087975165215782LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x649 = 2567U;
	int32_t x650 = 19;
	uint32_t t39 = 18U;

	t39 = (x649>>((x650*x651)/x652));

	if (t39 != 2567U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x653 = 43;
	uint32_t x654 = UINT32_MAX;
	int8_t x655 = 0;
	int16_t x656 = 1;
	volatile int32_t t40 = -321;

	t40 = (x653>>((x654*x655)/x656));

	if (t40 != 43) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x673 = 204395287058664932LL;
	static uint64_t x675 = UINT64_MAX;
	uint64_t x676 = UINT64_MAX;

	t41 = (x673>>((x674*x675)/x676));

	if (t41 != 204395287058664932LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x745 = 13895;
	int32_t t42 = 1;

	t42 = (x745>>((x746*x747)/x748));

	if (t42 != 13895) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x761 = INT32_MAX;
	uint32_t x762 = 7399496U;
	int32_t t43 = INT32_MAX;

	t43 = (x761>>((x762*x763)/x764));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x809 = 1U;
	static volatile uint8_t x810 = 3U;
	uint64_t x811 = 7LLU;
	static int8_t x812 = INT8_MIN;
	static int32_t t44 = -93;

	t44 = (x809>>((x810*x811)/x812));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x829 = INT32_MAX;
	uint64_t x830 = 132407010094LLU;
	int64_t x832 = -1LL;
	int32_t t45 = INT32_MAX;

	t45 = (x829>>((x830*x831)/x832));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x837 = INT32_MAX;
	int16_t x839 = -1;
	static volatile uint8_t x840 = UINT8_MAX;
	int32_t t46 = INT32_MAX;

	t46 = (x837>>((x838*x839)/x840));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x869 = 20;
	volatile int64_t x870 = -1570739902989753LL;
	uint8_t x871 = 0U;

	t47 = (x869>>((x870*x871)/x872));

	if (t47 != 20) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x874 = -1;
	static volatile int32_t x875 = -2;
	int64_t x876 = 8864906616LL;
	int32_t t48 = -2643;

	t48 = (x873>>((x874*x875)/x876));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x890 = 1U;
	int32_t t49 = 5214;

	t49 = (x889>>((x890*x891)/x892));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x897 = UINT32_MAX;
	uint16_t x898 = 1160U;
	volatile int8_t x899 = INT8_MIN;
	volatile int32_t x900 = INT32_MIN;

	t50 = (x897>>((x898*x899)/x900));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x925 = UINT8_MAX;
	int32_t x927 = -5;
	uint8_t x928 = UINT8_MAX;
	volatile int32_t t51 = 216;

	t51 = (x925>>((x926*x927)/x928));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x945 = INT32_MAX;
	static volatile int32_t x946 = -1;
	int16_t x947 = INT16_MIN;
	int32_t t52 = INT32_MAX;

	t52 = (x945>>((x946*x947)/x948));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x957 = INT32_MAX;
	uint64_t x958 = UINT64_MAX;
	int64_t x960 = INT64_MIN;
	volatile int32_t t53 = 35093920;

	t53 = (x957>>((x958*x959)/x960));

	if (t53 != 1073741823) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x973 = INT32_MAX;
	int8_t x974 = 0;
	int32_t x975 = INT32_MIN;
	static int32_t x976 = INT32_MAX;
	volatile int32_t t54 = INT32_MAX;

	t54 = (x973>>((x974*x975)/x976));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x993 = 1;
	int8_t x994 = 0;
	volatile uint16_t x996 = UINT16_MAX;
	int32_t t55 = 2181167;

	t55 = (x993>>((x994*x995)/x996));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1021 = 12212767391550529LL;
	uint32_t x1022 = 5U;
	int8_t x1023 = -2;
	uint64_t x1024 = 995912641173LLU;

	t56 = (x1021>>((x1022*x1023)/x1024));

	if (t56 != 12212767391550529LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1041 = 659206LLU;
	static uint64_t x1043 = 379LLU;
	int16_t x1044 = -1;
	volatile uint64_t t57 = 10LLU;

	t57 = (x1041>>((x1042*x1043)/x1044));

	if (t57 != 659206LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x1073 = 0U;
	static int16_t x1074 = 0;
	static volatile int64_t x1075 = -1LL;

	t58 = (x1073>>((x1074*x1075)/x1076));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x1105 = 90U;
	uint32_t x1106 = 231U;
	uint16_t x1107 = 8109U;
	int32_t x1108 = INT32_MAX;
	static int32_t t59 = 493;

	t59 = (x1105>>((x1106*x1107)/x1108));

	if (t59 != 90) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1154 = UINT32_MAX;
	int32_t x1155 = INT32_MIN;
	int16_t x1156 = -1;
	volatile int32_t t60 = -32650;

	t60 = (x1153>>((x1154*x1155)/x1156));

	if (t60 != 240) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1177 = 23U;
	static int8_t x1178 = INT8_MIN;
	int8_t x1180 = INT8_MIN;
	int32_t t61 = 965;

	t61 = (x1177>>((x1178*x1179)/x1180));

	if (t61 != 23) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1182 = INT16_MIN;
	uint32_t x1184 = 1623U;
	int32_t t62 = -133465798;

	t62 = (x1181>>((x1182*x1183)/x1184));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1193 = INT64_MAX;
	volatile uint8_t x1194 = 3U;
	static int8_t x1195 = 10;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x1193>>((x1194*x1195)/x1196));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x1205 = UINT32_MAX;
	int16_t x1206 = -1;
	static int32_t x1208 = 540804784;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (x1205>>((x1206*x1207)/x1208));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x1229 = 552867355844914LLU;
	volatile uint64_t x1230 = 397569426LLU;
	uint64_t x1232 = UINT64_MAX;
	uint64_t t65 = 2737847963689LLU;

	t65 = (x1229>>((x1230*x1231)/x1232));

	if (t65 != 552867355844914LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1245 = 57273;
	uint32_t x1246 = 358730567U;
	uint8_t x1247 = UINT8_MAX;
	static volatile int8_t x1248 = INT8_MIN;
	int32_t t66 = -12787;

	t66 = (x1245>>((x1246*x1247)/x1248));

	if (t66 != 57273) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1297 = UINT16_MAX;
	int64_t x1299 = 6616LL;
	int32_t x1300 = INT32_MIN;
	volatile int32_t t67 = 8336;

	t67 = (x1297>>((x1298*x1299)/x1300));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x1317 = 2268903881LLU;
	static uint32_t x1318 = 669U;
	uint32_t x1319 = 2030993830U;
	volatile uint64_t t68 = 3883980584LLU;

	t68 = (x1317>>((x1318*x1319)/x1320));

	if (t68 != 2268903881LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1323 = UINT8_MAX;
	uint64_t x1324 = 2143070LLU;
	int32_t t69 = 12;

	t69 = (x1321>>((x1322*x1323)/x1324));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1337 = 1U;
	int64_t x1338 = -1LL;
	int16_t x1339 = INT16_MAX;
	volatile int64_t x1340 = INT64_MIN;
	volatile int32_t t70 = -403186885;

	t70 = (x1337>>((x1338*x1339)/x1340));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1353 = 2745LLU;
	static uint8_t x1354 = 32U;
	static int16_t x1355 = -2818;
	int32_t x1356 = INT32_MIN;
	volatile uint64_t t71 = 350342764LLU;

	t71 = (x1353>>((x1354*x1355)/x1356));

	if (t71 != 2745LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1373 = UINT16_MAX;
	int8_t x1374 = -1;
	volatile uint8_t x1375 = 125U;
	int16_t x1376 = INT16_MIN;

	t72 = (x1373>>((x1374*x1375)/x1376));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x1381 = UINT16_MAX;
	int16_t x1382 = -1;
	int16_t x1383 = 45;
	uint64_t x1384 = UINT64_MAX;
	int32_t t73 = -4031581;

	t73 = (x1381>>((x1382*x1383)/x1384));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1413 = 6005;
	static uint64_t x1414 = 2776838LLU;
	int64_t x1415 = INT64_MIN;
	static int64_t x1416 = INT64_MAX;
	volatile int32_t t74 = 3055897;

	t74 = (x1413>>((x1414*x1415)/x1416));

	if (t74 != 6005) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x1417 = 10188;
	int16_t x1418 = -42;
	uint8_t x1420 = 5U;

	t75 = (x1417>>((x1418*x1419)/x1420));

	if (t75 != 39) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1437 = 220U;
	int8_t x1438 = INT8_MAX;
	uint32_t x1439 = 243449U;
	volatile int8_t x1440 = INT8_MIN;

	t76 = (x1437>>((x1438*x1439)/x1440));

	if (t76 != 220) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1441 = 117U;
	int16_t x1442 = -1;
	uint16_t x1443 = 5U;
	int16_t x1444 = INT16_MIN;
	static volatile uint32_t t77 = 239687U;

	t77 = (x1441>>((x1442*x1443)/x1444));

	if (t77 != 117U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x1445 = UINT32_MAX;
	int16_t x1446 = -2;
	static uint8_t x1447 = 2U;
	volatile uint16_t x1448 = 175U;
	uint32_t t78 = UINT32_MAX;

	t78 = (x1445>>((x1446*x1447)/x1448));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1449 = 10U;
	static volatile int8_t x1450 = INT8_MAX;
	volatile int8_t x1451 = 5;
	volatile int32_t t79 = -7472798;

	t79 = (x1449>>((x1450*x1451)/x1452));

	if (t79 != 10) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1469 = INT8_MAX;
	volatile uint32_t x1470 = UINT32_MAX;
	static uint32_t x1471 = 0U;
	int32_t t80 = -14977;

	t80 = (x1469>>((x1470*x1471)/x1472));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x1497 = INT64_MAX;
	uint8_t x1498 = 2U;
	uint8_t x1499 = 93U;
	uint64_t x1500 = 7391021104070110709LLU;
	int64_t t81 = INT64_MAX;

	t81 = (x1497>>((x1498*x1499)/x1500));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1509 = UINT64_MAX;
	static uint32_t x1510 = 84U;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x1509>>((x1510*x1511)/x1512));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x1518 = 2015U;
	int8_t x1519 = -1;
	int16_t x1520 = -83;
	int32_t t83 = -6;

	t83 = (x1517>>((x1518*x1519)/x1520));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1545 = 2;
	int32_t x1546 = INT32_MIN;
	static volatile uint64_t x1547 = 3196LLU;
	static int64_t x1548 = INT64_MIN;
	int32_t t84 = 787844466;

	t84 = (x1545>>((x1546*x1547)/x1548));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1550 = 233196U;
	uint8_t x1551 = 1U;

	t85 = (x1549>>((x1550*x1551)/x1552));

	if (t85 != 1948) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1553 = 2LLU;
	volatile int16_t x1554 = INT16_MIN;
	int8_t x1555 = INT8_MAX;
	static uint32_t x1556 = UINT32_MAX;
	uint64_t t86 = 1964966876085955LLU;

	t86 = (x1553>>((x1554*x1555)/x1556));

	if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1565 = INT16_MAX;
	int16_t x1566 = INT16_MIN;
	volatile uint32_t x1567 = 15267569U;
	int64_t x1568 = 8025814884065LL;
	static volatile int32_t t87 = 30395893;

	t87 = (x1565>>((x1566*x1567)/x1568));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1573 = INT8_MAX;
	int8_t x1574 = INT8_MIN;
	int8_t x1575 = INT8_MIN;
	static uint64_t x1576 = 4833121348693270LLU;
	static int32_t t88 = 200816;

	t88 = (x1573>>((x1574*x1575)/x1576));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1579 = 20229LLU;
	int32_t x1580 = INT32_MIN;
	volatile uint64_t t89 = 131480LLU;

	t89 = (x1577>>((x1578*x1579)/x1580));

	if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1597 = 62LL;
	int32_t x1598 = -402575;
	static volatile uint64_t x1599 = 11LLU;
	volatile int64_t t90 = -3LL;

	t90 = (x1597>>((x1598*x1599)/x1600));

	if (t90 != 31LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1613 = 104U;
	uint64_t x1614 = 90566990236075425LLU;
	static int64_t x1615 = -1LL;
	volatile int32_t t91 = -64007838;

	t91 = (x1613>>((x1614*x1615)/x1616));

	if (t91 != 104) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1629 = UINT32_MAX;
	static uint32_t x1630 = 5U;
	static int32_t x1631 = 386;
	volatile int8_t x1632 = INT8_MIN;
	static volatile uint32_t t92 = UINT32_MAX;

	t92 = (x1629>>((x1630*x1631)/x1632));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x1641 = UINT8_MAX;
	int8_t x1642 = INT8_MIN;
	int32_t x1643 = -1119358;
	static uint32_t x1644 = UINT32_MAX;
	int32_t t93 = 4275;

	t93 = (x1641>>((x1642*x1643)/x1644));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1669 = INT8_MAX;
	int64_t x1672 = INT64_MIN;

	t94 = (x1669>>((x1670*x1671)/x1672));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x1686 = -1LL;
	uint64_t x1687 = 6853322LLU;
	int64_t x1688 = INT64_MAX;
	int32_t t95 = 1;

	t95 = (x1685>>((x1686*x1687)/x1688));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1709 = 62352LLU;
	int8_t x1710 = INT8_MAX;
	int8_t x1711 = -9;
	int16_t x1712 = INT16_MIN;
	volatile uint64_t t96 = 304925LLU;

	t96 = (x1709>>((x1710*x1711)/x1712));

	if (t96 != 62352LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x1713 = 29034187316LLU;
	int8_t x1714 = -31;
	int32_t x1715 = -1;
	static volatile uint32_t x1716 = 42573U;
	static uint64_t t97 = 1794278061733LLU;

	t97 = (x1713>>((x1714*x1715)/x1716));

	if (t97 != 29034187316LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1725 = INT8_MAX;
	uint32_t x1726 = UINT32_MAX;
	volatile uint64_t x1727 = 3575706150LLU;
	int16_t x1728 = INT16_MIN;
	volatile int32_t t98 = 0;

	t98 = (x1725>>((x1726*x1727)/x1728));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1729 = UINT64_MAX;
	static uint8_t x1730 = 14U;
	volatile int32_t x1732 = -225;
	static volatile uint64_t t99 = 65148922LLU;

	t99 = (x1729>>((x1730*x1731)/x1732));

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

