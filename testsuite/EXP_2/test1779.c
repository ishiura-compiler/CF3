#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x17 = 29240582U;
int32_t x60 = -62450978;
int16_t x65 = 12;
uint16_t x68 = 5U;
static int16_t x81 = INT16_MAX;
int64_t x82 = INT64_MIN;
int32_t x113 = INT32_MAX;
static int32_t t4 = INT32_MAX;
volatile uint64_t x145 = 60744497002298LLU;
static uint64_t t5 = 1654LLU;
int16_t x169 = 0;
uint64_t x170 = UINT64_MAX;
static uint8_t x185 = UINT8_MAX;
int16_t x188 = -1;
int64_t x207 = -1LL;
int64_t x253 = INT64_MAX;
uint16_t x265 = 14U;
static uint64_t x273 = 106247834LLU;
int32_t x274 = INT32_MIN;
int32_t x276 = INT32_MIN;
volatile int64_t t14 = 124487409LL;
int32_t x292 = -45277;
uint16_t x293 = UINT16_MAX;
volatile uint64_t x321 = UINT64_MAX;
uint16_t x323 = 3U;
static volatile uint8_t x411 = 1U;
static volatile int32_t t24 = 98130;
int16_t x475 = 2;
uint16_t x485 = UINT16_MAX;
static volatile uint8_t x487 = 66U;
static int64_t x488 = -1LL;
static uint16_t x521 = UINT16_MAX;
static uint16_t x524 = UINT16_MAX;
int32_t x536 = -1821498;
uint32_t x559 = 499763416U;
int16_t x567 = -1;
int32_t x621 = INT32_MAX;
int32_t x646 = INT32_MIN;
int8_t x648 = INT8_MIN;
static volatile uint32_t t38 = 66U;
uint8_t x690 = 1U;
int8_t x767 = 18;
uint16_t x782 = 16U;
uint8_t x791 = 5U;
static volatile uint16_t x825 = UINT16_MAX;
int8_t x828 = INT8_MAX;
int64_t x837 = 131480248241378276LL;
uint8_t x847 = 0U;
int32_t x848 = -1;
int64_t t49 = -60965684296LL;
uint8_t x857 = UINT8_MAX;
uint64_t x858 = 278501LLU;
static uint64_t t50 = 1413705LLU;
volatile int32_t t51 = 244678;
static volatile int64_t t52 = -13999908134LL;
static int8_t x1017 = 8;
uint8_t x1101 = 1U;
static int64_t t61 = -10078878875663LL;
static int64_t x1163 = INT64_MIN;
uint32_t x1204 = 26U;
int32_t t66 = 95;
int16_t x1218 = 1;
int8_t x1220 = -17;
uint16_t x1225 = UINT16_MAX;
int8_t x1226 = INT8_MIN;
volatile uint16_t x1235 = 13U;
int16_t x1284 = 7698;
int32_t x1306 = 89;
int16_t x1307 = -3920;
volatile uint8_t x1330 = 61U;
static uint64_t x1332 = 335630388129414505LLU;
volatile int32_t t75 = -3;
uint32_t x1385 = UINT32_MAX;
volatile int8_t x1457 = 1;
int32_t t82 = 139835;
static uint32_t x1502 = 1938U;
volatile int64_t t85 = 51110516595LL;
static int32_t x1529 = 10;
int64_t x1546 = INT64_MIN;
volatile int32_t x1583 = -1;
int64_t x1594 = 2087364641LL;
uint32_t x1665 = UINT32_MAX;
static uint32_t x1671 = 261395U;
uint8_t x1707 = 5U;
uint64_t x1708 = 384680203425143LLU;
uint64_t t93 = 49988975603641LLU;
int32_t x1763 = -58646768;
static uint8_t x1777 = UINT8_MAX;
int32_t x1780 = INT32_MIN;
static volatile int32_t t95 = -368128;
uint8_t x1807 = 11U;
int8_t x1850 = 0;
static uint16_t x1854 = 41U;
int32_t t99 = 4403;


void f0(void) {
	int32_t x18 = 6;
	volatile uint8_t x19 = 3U;
	uint8_t x20 = UINT8_MAX;
	static volatile uint32_t t0 = 33804295U;

	t0 = ((x17>>(x18&x19))&x20);

	if (t0 != 65U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x57 = 359623702778280564LLU;
	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MAX;
	static volatile uint64_t t1 = 1725214318139210399LLU;

	t1 = ((x57>>(x58&x59))&x60);

	if (t1 != 359623702767211092LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MAX;
	volatile int32_t t2 = -22728831;

	t2 = ((x65>>(x66&x67))&x68);

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x83 = 1;
	int8_t x84 = INT8_MIN;
	int32_t t3 = -61118;

	t3 = ((x81>>(x82&x83))&x84);

	if (t3 != 32640) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x114 = INT64_MIN;
	int64_t x115 = 1019LL;
	static int32_t x116 = -1;

	t4 = ((x113>>(x114&x115))&x116);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x146 = 14263;
	int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MAX;

	t5 = ((x145>>(x146&x147))&x148);

	if (t5 != 774534970LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x171 = 4;
	uint64_t x172 = UINT64_MAX;
	uint64_t t6 = 535841057LLU;

	t6 = ((x169>>(x170&x171))&x172);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x186 = 2U;
	static uint8_t x187 = 13U;
	volatile int32_t t7 = -448;

	t7 = ((x185>>(x186&x187))&x188);

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = 14LL;
	volatile int64_t x208 = INT64_MIN;
	static int64_t t8 = -103LL;

	t8 = ((x205>>(x206&x207))&x208);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x221 = 8U;
	uint16_t x222 = 31U;
	int8_t x223 = INT8_MIN;
	int8_t x224 = -1;
	volatile int32_t t9 = -8;

	t9 = ((x221>>(x222&x223))&x224);

	if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x249 = UINT64_MAX;
	int8_t x250 = 3;
	volatile int8_t x251 = INT8_MIN;
	uint16_t x252 = 1U;
	static volatile uint64_t t10 = 5422604366796LLU;

	t10 = ((x249>>(x250&x251))&x252);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x254 = 12U;
	int16_t x255 = -3;
	volatile uint16_t x256 = 215U;
	int64_t t11 = 4736LL;

	t11 = ((x253>>(x254&x255))&x256);

	if (t11 != 215LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x266 = -115807470;
	uint16_t x267 = 23U;
	volatile int16_t x268 = INT16_MAX;
	volatile int32_t t12 = 5882624;

	t12 = ((x265>>(x266&x267))&x268);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x275 = INT8_MAX;
	uint64_t t13 = 105678624730LLU;

	t13 = ((x273>>(x274&x275))&x276);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x277 = UINT32_MAX;
	static int16_t x278 = INT16_MAX;
	volatile uint8_t x279 = 15U;
	int64_t x280 = -7359LL;

	t14 = ((x277>>(x278&x279))&x280);

	if (t14 != 123713LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MIN;
	volatile uint16_t x283 = 3529U;
	int8_t x284 = -1;
	int32_t t15 = INT32_MAX;

	t15 = ((x281>>(x282&x283))&x284);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x285 = 314928218LLU;
	volatile int32_t x286 = INT32_MIN;
	int16_t x287 = 2;
	int32_t x288 = 376563730;
	static uint64_t t16 = 14317LLU;

	t16 = ((x285>>(x286&x287))&x288);

	if (t16 != 306276370LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x289 = 31414U;
	int8_t x290 = 0;
	int16_t x291 = INT16_MIN;
	static int32_t t17 = 14002337;

	t17 = ((x289>>(x290&x291))&x292);

	if (t17 != 18978) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MAX;
	volatile uint32_t x296 = 168860U;
	volatile uint32_t t18 = 14U;

	t18 = ((x293>>(x294&x295))&x296);

	if (t18 != 37788U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x301 = 1;
	uint8_t x302 = 97U;
	uint8_t x303 = 0U;
	int64_t x304 = 368289LL;
	static int64_t t19 = 89463429112255LL;

	t19 = ((x301>>(x302&x303))&x304);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x322 = 324572289LLU;
	volatile int8_t x324 = -27;
	volatile uint64_t t20 = 560411LLU;

	t20 = ((x321>>(x322&x323))&x324);

	if (t20 != 9223372036854775781LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x341 = INT64_MAX;
	volatile int8_t x342 = 0;
	volatile uint64_t x343 = 1166414662692869LLU;
	static volatile uint64_t x344 = 447937484695988729LLU;
	static volatile uint64_t t21 = 4495543844004334LLU;

	t21 = ((x341>>(x342&x343))&x344);

	if (t21 != 447937484695988729LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x349 = 977;
	uint64_t x350 = 1LLU;
	int8_t x351 = INT8_MIN;
	static int16_t x352 = -1;
	int32_t t22 = 118797239;

	t22 = ((x349>>(x350&x351))&x352);

	if (t22 != 977) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	int8_t x412 = -1;
	static volatile int32_t t23 = -99681106;

	t23 = ((x409>>(x410&x411))&x412);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x417 = 1;
	int16_t x418 = INT16_MIN;
	static uint16_t x419 = 24U;
	int16_t x420 = -1;

	t24 = ((x417>>(x418&x419))&x420);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x469 = INT16_MAX;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 5U;
	static uint64_t x472 = 1013284LLU;
	static uint64_t t25 = 4140618LLU;

	t25 = ((x469>>(x470&x471))&x472);

	if (t25 != 30244LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x473 = 1817U;
	static volatile uint32_t x474 = 0U;
	uint16_t x476 = UINT16_MAX;
	static uint32_t t26 = 335787U;

	t26 = ((x473>>(x474&x475))&x476);

	if (t26 != 1817U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x486 = INT64_MIN;
	int64_t t27 = -1LL;

	t27 = ((x485>>(x486&x487))&x488);

	if (t27 != 65535LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x517 = 14U;
	uint8_t x518 = 63U;
	uint64_t x519 = 15LLU;
	uint16_t x520 = 9U;
	volatile int32_t t28 = 6;

	t28 = ((x517>>(x518&x519))&x520);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x522 = 3468U;
	int16_t x523 = 1;
	volatile int32_t t29 = -179895;

	t29 = ((x521>>(x522&x523))&x524);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x525 = 143U;
	static uint16_t x526 = 4148U;
	int64_t x527 = INT64_MIN;
	static int16_t x528 = INT16_MIN;
	int32_t t30 = -927101561;

	t30 = ((x525>>(x526&x527))&x528);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x533 = 905692LLU;
	int64_t x534 = INT64_MIN;
	volatile uint16_t x535 = 60U;
	volatile uint64_t t31 = 43909131LLU;

	t31 = ((x533>>(x534&x535))&x536);

	if (t31 != 266436LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x545 = UINT8_MAX;
	uint16_t x546 = 1U;
	volatile uint64_t x547 = 24200031LLU;
	static int16_t x548 = -1;
	volatile int32_t t32 = 58373;

	t32 = ((x545>>(x546&x547))&x548);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x557 = 15127U;
	uint16_t x558 = 4U;
	static volatile uint32_t x560 = UINT32_MAX;
	volatile uint32_t t33 = 183U;

	t33 = ((x557>>(x558&x559))&x560);

	if (t33 != 15127U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x565 = 3;
	uint8_t x566 = 15U;
	volatile int64_t x568 = INT64_MIN;
	int64_t t34 = -22202780773586LL;

	t34 = ((x565>>(x566&x567))&x568);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x573 = INT32_MAX;
	int64_t x574 = INT64_MIN;
	int8_t x575 = INT8_MAX;
	int16_t x576 = INT16_MIN;
	static volatile int32_t t35 = -29183;

	t35 = ((x573>>(x574&x575))&x576);

	if (t35 != 2147450880) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x601 = UINT16_MAX;
	int8_t x602 = -4;
	volatile uint8_t x603 = 1U;
	int8_t x604 = -1;
	int32_t t36 = -6;

	t36 = ((x601>>(x602&x603))&x604);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x622 = 25;
	static int16_t x623 = 49;
	static uint64_t x624 = 13002201LLU;
	static volatile uint64_t t37 = 12531459731028LLU;

	t37 = ((x621>>(x622&x623))&x624);

	if (t37 != 9689LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x645 = UINT32_MAX;
	static uint8_t x647 = 98U;

	t38 = ((x645>>(x646&x647))&x648);

	if (t38 != 4294967168U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x649 = 93959LL;
	uint16_t x650 = 16382U;
	int32_t x651 = INT32_MIN;
	int16_t x652 = 1;
	int64_t t39 = 28164584LL;

	t39 = ((x649>>(x650&x651))&x652);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x689 = 4;
	static uint16_t x691 = 646U;
	volatile int16_t x692 = -1;
	int32_t t40 = 112896649;

	t40 = ((x689>>(x690&x691))&x692);

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x705 = 2U;
	static volatile int8_t x706 = 24;
	volatile int8_t x707 = INT8_MIN;
	int64_t x708 = INT64_MAX;
	volatile int64_t t41 = 1088LL;

	t41 = ((x705>>(x706&x707))&x708);

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x753 = 45;
	static uint64_t x754 = 15697824LLU;
	uint8_t x755 = 79U;
	int16_t x756 = -1;
	static volatile int32_t t42 = 2321382;

	t42 = ((x753>>(x754&x755))&x756);

	if (t42 != 45) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x765 = INT64_MAX;
	static uint8_t x766 = 3U;
	int8_t x768 = INT8_MIN;
	static int64_t t43 = -2LL;

	t43 = ((x765>>(x766&x767))&x768);

	if (t43 != 2305843009213693824LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x777 = 3U;
	int16_t x778 = -14;
	static int8_t x779 = 19;
	volatile uint32_t x780 = 18U;
	volatile uint32_t t44 = 17460U;

	t44 = ((x777>>(x778&x779))&x780);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x781 = 8U;
	static volatile int16_t x783 = INT16_MIN;
	uint16_t x784 = 475U;
	volatile int32_t t45 = 5;

	t45 = ((x781>>(x782&x783))&x784);

	if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x789 = 31;
	int16_t x790 = -240;
	static int8_t x792 = 0;
	int32_t t46 = 893280;

	t46 = ((x789>>(x790&x791))&x792);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x826 = 2U;
	int64_t x827 = INT64_MIN;
	volatile int32_t t47 = -185;

	t47 = ((x825>>(x826&x827))&x828);

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x838 = 1054036244795472396LLU;
	uint8_t x839 = 121U;
	volatile int16_t x840 = 8;
	int64_t t48 = -15LL;

	t48 = ((x837>>(x838&x839))&x840);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x845 = 118322LL;
	int32_t x846 = -1;

	t49 = ((x845>>(x846&x847))&x848);

	if (t49 != 118322LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x859 = 1;
	uint64_t x860 = UINT64_MAX;

	t50 = ((x857>>(x858&x859))&x860);

	if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x873 = 0U;
	int64_t x874 = -76133332LL;
	static volatile int64_t x875 = 3LL;
	int16_t x876 = INT16_MIN;

	t51 = ((x873>>(x874&x875))&x876);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x965 = INT16_MAX;
	int64_t x966 = -2917913LL;
	uint8_t x967 = 0U;
	static int64_t x968 = INT64_MAX;

	t52 = ((x965>>(x966&x967))&x968);

	if (t52 != 32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x973 = 23U;
	static uint16_t x974 = 43U;
	int64_t x975 = -3676598LL;
	volatile int8_t x976 = INT8_MAX;
	int32_t t53 = -27020;

	t53 = ((x973>>(x974&x975))&x976);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1009 = UINT64_MAX;
	uint8_t x1010 = 1U;
	static volatile uint16_t x1011 = UINT16_MAX;
	int32_t x1012 = INT32_MIN;
	volatile uint64_t t54 = 5655484109LLU;

	t54 = ((x1009>>(x1010&x1011))&x1012);

	if (t54 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1018 = UINT8_MAX;
	int16_t x1019 = -240;
	int16_t x1020 = INT16_MIN;
	int32_t t55 = 0;

	t55 = ((x1017>>(x1018&x1019))&x1020);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1057 = UINT32_MAX;
	uint16_t x1058 = 2065U;
	uint8_t x1059 = 0U;
	volatile uint16_t x1060 = UINT16_MAX;
	uint32_t t56 = 104108U;

	t56 = ((x1057>>(x1058&x1059))&x1060);

	if (t56 != 65535U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1102 = 8;
	static uint64_t x1103 = UINT64_MAX;
	static uint16_t x1104 = 559U;
	int32_t t57 = 49;

	t57 = ((x1101>>(x1102&x1103))&x1104);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1133 = 0;
	int16_t x1134 = -1673;
	uint16_t x1135 = 1U;
	static int8_t x1136 = INT8_MIN;
	volatile int32_t t58 = 72886640;

	t58 = ((x1133>>(x1134&x1135))&x1136);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1145 = 330U;
	volatile uint16_t x1146 = 286U;
	int32_t x1147 = INT32_MIN;
	int16_t x1148 = INT16_MAX;
	volatile uint32_t t59 = 918932U;

	t59 = ((x1145>>(x1146&x1147))&x1148);

	if (t59 != 330U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1149 = UINT16_MAX;
	uint8_t x1150 = UINT8_MAX;
	static int32_t x1151 = 2;
	volatile uint64_t x1152 = 0LLU;
	volatile uint64_t t60 = 7LLU;

	t60 = ((x1149>>(x1150&x1151))&x1152);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1157 = 50308419761LL;
	static uint16_t x1158 = 6U;
	uint32_t x1159 = 60U;
	int64_t x1160 = INT64_MIN;

	t61 = ((x1157>>(x1158&x1159))&x1160);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1161 = 12U;
	int8_t x1162 = 0;
	static uint64_t x1164 = 17062505087343780LLU;
	uint64_t t62 = 57293302LLU;

	t62 = ((x1161>>(x1162&x1163))&x1164);

	if (t62 != 4LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1165 = UINT64_MAX;
	int16_t x1166 = 0;
	static int8_t x1167 = INT8_MAX;
	int32_t x1168 = INT32_MIN;
	uint64_t t63 = 24465LLU;

	t63 = ((x1165>>(x1166&x1167))&x1168);

	if (t63 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1181 = INT8_MAX;
	static int64_t x1182 = 31280LL;
	int32_t x1183 = 138;
	static uint32_t x1184 = 4380726U;
	volatile uint32_t t64 = 429991U;

	t64 = ((x1181>>(x1182&x1183))&x1184);

	if (t64 != 54U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x1201 = 57U;
	int32_t x1202 = INT32_MIN;
	int8_t x1203 = INT8_MAX;
	volatile uint32_t t65 = 74283247U;

	t65 = ((x1201>>(x1202&x1203))&x1204);

	if (t65 != 24U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1205 = INT8_MAX;
	int16_t x1206 = 2;
	uint16_t x1207 = 11064U;
	uint8_t x1208 = UINT8_MAX;

	t66 = ((x1205>>(x1206&x1207))&x1208);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1217 = INT16_MAX;
	int32_t x1219 = -36561963;
	int32_t t67 = -109763;

	t67 = ((x1217>>(x1218&x1219))&x1220);

	if (t67 != 16367) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x1227 = 103;
	int32_t x1228 = -77;
	volatile int32_t t68 = 12;

	t68 = ((x1225>>(x1226&x1227))&x1228);

	if (t68 != 65459) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1233 = INT64_MAX;
	uint16_t x1234 = UINT16_MAX;
	int8_t x1236 = -1;
	static int64_t t69 = 8174254124604781LL;

	t69 = ((x1233>>(x1234&x1235))&x1236);

	if (t69 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1253 = 15756318762911359LL;
	volatile int8_t x1254 = INT8_MAX;
	volatile int32_t x1255 = INT32_MIN;
	volatile int32_t x1256 = -35;
	volatile int64_t t70 = 47359452734LL;

	t70 = ((x1253>>(x1254&x1255))&x1256);

	if (t70 != 15756318762911325LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x1281 = INT32_MAX;
	static int16_t x1282 = 645;
	volatile uint8_t x1283 = 2U;
	int32_t t71 = 188221;

	t71 = ((x1281>>(x1282&x1283))&x1284);

	if (t71 != 7698) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1301 = 3195582096169311LL;
	static int8_t x1302 = INT8_MIN;
	int8_t x1303 = 2;
	static int16_t x1304 = INT16_MIN;
	static int64_t t72 = -41093LL;

	t72 = ((x1301>>(x1302&x1303))&x1304);

	if (t72 != 3195582096146432LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x1305 = UINT8_MAX;
	int32_t x1308 = -5533878;
	volatile int32_t t73 = -7;

	t73 = ((x1305>>(x1306&x1307))&x1308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1329 = 1U;
	int32_t x1331 = 78594;
	uint64_t t74 = 1967976132701LLU;

	t74 = ((x1329>>(x1330&x1331))&x1332);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x1349 = INT8_MAX;
	volatile uint8_t x1350 = 3U;
	int64_t x1351 = -172679LL;
	int16_t x1352 = 15;

	t75 = ((x1349>>(x1350&x1351))&x1352);

	if (t75 != 15) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1365 = UINT32_MAX;
	int8_t x1366 = -1;
	uint8_t x1367 = 8U;
	uint16_t x1368 = 411U;
	uint32_t t76 = 4861408U;

	t76 = ((x1365>>(x1366&x1367))&x1368);

	if (t76 != 411U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1386 = INT32_MIN;
	uint16_t x1387 = UINT16_MAX;
	static int64_t x1388 = -7899957809LL;
	int64_t t77 = -58393779654LL;

	t77 = ((x1385>>(x1386&x1387))&x1388);

	if (t77 != 689976783LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1393 = INT32_MAX;
	uint16_t x1394 = 8U;
	int8_t x1395 = INT8_MIN;
	volatile int16_t x1396 = INT16_MIN;
	int32_t t78 = -3;

	t78 = ((x1393>>(x1394&x1395))&x1396);

	if (t78 != 2147450880) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1449 = 1646945LL;
	volatile uint8_t x1450 = 12U;
	static int64_t x1451 = -1LL;
	uint64_t x1452 = 7LLU;
	uint64_t t79 = 49423541LLU;

	t79 = ((x1449>>(x1450&x1451))&x1452);

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1458 = -10;
	static uint8_t x1459 = 13U;
	static int32_t x1460 = -1510;
	static volatile int32_t t80 = 885722;

	t80 = ((x1457>>(x1458&x1459))&x1460);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1461 = UINT16_MAX;
	uint8_t x1462 = UINT8_MAX;
	int32_t x1463 = INT32_MIN;
	static uint8_t x1464 = 60U;
	volatile int32_t t81 = 0;

	t81 = ((x1461>>(x1462&x1463))&x1464);

	if (t81 != 60) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1477 = 463;
	uint8_t x1478 = UINT8_MAX;
	volatile uint8_t x1479 = 4U;
	volatile int16_t x1480 = -6;

	t82 = ((x1477>>(x1478&x1479))&x1480);

	if (t82 != 24) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x1489 = 15993631LLU;
	uint8_t x1490 = 2U;
	uint32_t x1491 = UINT32_MAX;
	int32_t x1492 = 16270;
	uint64_t t83 = 431520451296708914LLU;

	t83 = ((x1489>>(x1490&x1491))&x1492);

	if (t83 != 646LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x1501 = UINT16_MAX;
	int8_t x1503 = 13;
	static uint64_t x1504 = 12269704528LLU;
	uint64_t t84 = 27LLU;

	t84 = ((x1501>>(x1502&x1503))&x1504);

	if (t84 != 54608LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x1525 = 1839LL;
	static int64_t x1526 = INT64_MIN;
	int8_t x1527 = INT8_MAX;
	static int64_t x1528 = 593534392192099847LL;

	t85 = ((x1525>>(x1526&x1527))&x1528);

	if (t85 != 1543LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1530 = INT32_MIN;
	volatile int16_t x1531 = INT16_MAX;
	uint8_t x1532 = 1U;
	volatile int32_t t86 = -70;

	t86 = ((x1529>>(x1530&x1531))&x1532);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x1545 = 5078986214LLU;
	uint16_t x1547 = 0U;
	int16_t x1548 = 1;
	volatile uint64_t t87 = 12651299536LLU;

	t87 = ((x1545>>(x1546&x1547))&x1548);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1581 = 34889486960623LL;
	uint16_t x1582 = 3U;
	int8_t x1584 = INT8_MIN;
	static int64_t t88 = 11LL;

	t88 = ((x1581>>(x1582&x1583))&x1584);

	if (t88 != 4361185869952LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1593 = INT32_MAX;
	static uint64_t x1595 = 5LLU;
	uint8_t x1596 = 0U;
	volatile int32_t t89 = 46;

	t89 = ((x1593>>(x1594&x1595))&x1596);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x1653 = 4U;
	static volatile int64_t x1654 = 0LL;
	int16_t x1655 = 1827;
	int8_t x1656 = INT8_MIN;
	int32_t t90 = 260699085;

	t90 = ((x1653>>(x1654&x1655))&x1656);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1666 = 15U;
	static uint16_t x1667 = 29U;
	static int32_t x1668 = INT32_MIN;
	volatile uint32_t t91 = 15U;

	t91 = ((x1665>>(x1666&x1667))&x1668);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1669 = INT64_MAX;
	int8_t x1670 = INT8_MAX;
	int8_t x1672 = -41;
	int64_t t92 = 48642LL;

	t92 = ((x1669>>(x1670&x1671))&x1672);

	if (t92 != 17592186044375LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1705 = 64153;
	int16_t x1706 = INT16_MIN;

	t93 = ((x1705>>(x1706&x1707))&x1708);

	if (t93 != 36881LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1761 = INT64_MAX;
	int8_t x1762 = INT8_MAX;
	static int8_t x1764 = 57;
	int64_t t94 = 10584341692LL;

	t94 = ((x1761>>(x1762&x1763))&x1764);

	if (t94 != 57LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1778 = 1;
	static int64_t x1779 = INT64_MIN;

	t95 = ((x1777>>(x1778&x1779))&x1780);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x1805 = 247005362;
	int32_t x1806 = -1;
	uint8_t x1808 = UINT8_MAX;
	volatile int32_t t96 = -486;

	t96 = ((x1805>>(x1806&x1807))&x1808);

	if (t96 != 32) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1809 = INT32_MAX;
	int64_t x1810 = INT64_MIN;
	uint64_t x1811 = 39152LLU;
	volatile int64_t x1812 = 4671LL;
	volatile int64_t t97 = -3312LL;

	t97 = ((x1809>>(x1810&x1811))&x1812);

	if (t97 != 4671LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1849 = INT16_MAX;
	int32_t x1851 = 6;
	int16_t x1852 = -729;
	volatile int32_t t98 = 30064;

	t98 = ((x1849>>(x1850&x1851))&x1852);

	if (t98 != 32039) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1853 = 6857U;
	int32_t x1855 = -6641;
	uint16_t x1856 = 13U;

	t99 = ((x1853>>(x1854&x1855))&x1856);

	if (t99 != 13) { NG(); } else { ; }
	
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

