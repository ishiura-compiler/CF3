#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x23 = 7;
int32_t x81 = INT32_MAX;
int32_t x82 = INT32_MIN;
volatile int32_t t2 = -140;
int32_t x108 = -1;
int64_t x110 = INT64_MIN;
int64_t x198 = INT64_MIN;
uint16_t x213 = 1635U;
uint8_t x215 = 14U;
static int32_t t13 = 1;
int32_t x230 = 1;
uint64_t x258 = 1575154393LLU;
volatile uint8_t x268 = 4U;
volatile uint8_t x275 = 0U;
uint8_t x276 = UINT8_MAX;
volatile int16_t x297 = INT16_MAX;
int32_t x311 = INT32_MIN;
volatile int32_t t20 = -103;
int64_t x360 = -1LL;
uint32_t x361 = UINT32_MAX;
int16_t x364 = -1;
int32_t x390 = INT32_MIN;
int32_t t25 = -32993803;
uint16_t x398 = 48U;
int32_t x400 = -1;
volatile int32_t t26 = 47;
static int32_t x412 = 31581379;
int16_t x448 = -3;
volatile uint32_t t30 = 987011582U;
int32_t x513 = INT32_MAX;
static uint8_t x514 = 2U;
uint32_t x553 = 2974U;
static volatile uint32_t t34 = 3436721U;
int64_t x564 = 12279397LL;
static volatile int64_t t36 = 211557883398212LL;
uint64_t x575 = 62751LLU;
uint64_t t37 = UINT64_MAX;
volatile uint64_t t40 = 174016535LLU;
uint32_t x670 = 1741186U;
int32_t x671 = INT32_MIN;
uint64_t x741 = 533309096677LLU;
volatile uint64_t t43 = 13510LLU;
uint32_t x749 = 3558728U;
volatile int16_t x751 = -9186;
int32_t x757 = 28434731;
int64_t x758 = INT64_MAX;
volatile int64_t x759 = INT64_MIN;
volatile uint16_t x760 = 128U;
int32_t t45 = -1;
static int32_t x793 = 15;
static int16_t x796 = INT16_MAX;
static volatile int32_t x797 = 2;
int8_t x799 = -3;
uint64_t t48 = 1541579LLU;
int16_t x877 = 46;
uint8_t x880 = 4U;
volatile int32_t t50 = 15;
uint32_t x898 = 553562539U;
int64_t x903 = INT64_MIN;
int16_t x911 = -192;
uint32_t x917 = 1U;
int32_t x927 = 797002407;
volatile int32_t x936 = INT32_MAX;
volatile int32_t t56 = INT32_MAX;
int64_t x1008 = INT64_MIN;
uint16_t x1023 = 53U;
static int8_t x1024 = INT8_MAX;
volatile int32_t x1025 = INT32_MAX;
int32_t x1026 = INT32_MIN;
static volatile uint8_t x1027 = 7U;
volatile int32_t t61 = 5;
static uint32_t x1105 = 4U;
static int32_t x1108 = INT32_MAX;
volatile uint32_t t64 = 2804441U;
int16_t x1127 = 405;
int64_t t69 = -615087872219343606LL;
uint32_t x1158 = 618065405U;
volatile uint32_t t70 = 7368614U;
int32_t x1164 = INT32_MAX;
uint32_t x1186 = 0U;
int64_t x1247 = INT64_MIN;
static volatile uint64_t x1249 = UINT64_MAX;
volatile int16_t x1257 = 2;
uint8_t x1258 = UINT8_MAX;
static volatile uint8_t x1279 = 12U;
static int32_t x1344 = INT32_MIN;
int8_t x1351 = -1;
volatile int64_t t84 = 249330058LL;
static uint64_t t85 = 1981867298673640742LLU;
int32_t t86 = 47527042;
volatile uint16_t x1405 = UINT16_MAX;
int64_t x1441 = INT64_MAX;
static volatile uint32_t t90 = 508442227U;
uint32_t x1465 = 598U;
uint16_t x1560 = 19386U;
uint8_t x1576 = 15U;
volatile uint8_t x1658 = 2U;
uint32_t t95 = 38942182U;
int16_t x1668 = INT16_MIN;
static volatile uint16_t x1709 = UINT16_MAX;
int16_t x1711 = -223;
volatile int8_t x1807 = 1;


void f0(void) {
	uint64_t x21 = 741LLU;
	int64_t x22 = 752968024LL;
	int64_t x24 = INT64_MIN;
	volatile uint64_t t0 = 1569351306LLU;

	t0 = ((x21>>(x22&x23))+x24);

	if (t0 != 9223372036854776549LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = 14516631343051LL;
	int64_t x38 = INT64_MAX;
	int64_t x39 = INT64_MIN;
	volatile int32_t x40 = -1;
	int64_t t1 = -13338081LL;

	t1 = ((x37>>(x38&x39))+x40);

	if (t1 != 14516631343050LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x83 = 12971;
	volatile int8_t x84 = INT8_MIN;

	t2 = ((x81>>(x82&x83))+x84);

	if (t2 != 2147483519) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x85 = INT32_MAX;
	volatile uint8_t x86 = 1U;
	int64_t x87 = INT64_MIN;
	uint32_t x88 = 4371390U;
	uint32_t t3 = 13188U;

	t3 = ((x85>>(x86&x87))+x88);

	if (t3 != 2151855037U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x97 = 2316U;
	int8_t x98 = 3;
	int32_t x99 = INT32_MAX;
	static int16_t x100 = INT16_MIN;
	volatile uint32_t t4 = 3944U;

	t4 = ((x97>>(x98&x99))+x100);

	if (t4 != 4294934817U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x105 = 178;
	static uint8_t x106 = 0U;
	int8_t x107 = -1;
	static int32_t t5 = -270;

	t5 = ((x105>>(x106&x107))+x108);

	if (t5 != 177) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x109 = UINT8_MAX;
	uint16_t x111 = 2448U;
	uint64_t x112 = 68045355LLU;
	volatile uint64_t t6 = 3801LLU;

	t6 = ((x109>>(x110&x111))+x112);

	if (t6 != 68045610LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x113 = 27U;
	volatile int16_t x114 = INT16_MIN;
	volatile int64_t x115 = 25432LL;
	volatile uint16_t x116 = 15U;
	static volatile int32_t t7 = -32805106;

	t7 = ((x113>>(x114&x115))+x116);

	if (t7 != 42) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x125 = 1;
	uint8_t x126 = 41U;
	volatile int16_t x127 = INT16_MIN;
	static int64_t x128 = INT64_MIN;
	int64_t t8 = 0LL;

	t8 = ((x125>>(x126&x127))+x128);

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x137 = 220U;
	static int16_t x138 = 4;
	int32_t x139 = INT32_MIN;
	int32_t x140 = -1;
	volatile int32_t t9 = 395;

	t9 = ((x137>>(x138&x139))+x140);

	if (t9 != 219) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x197 = INT8_MAX;
	int64_t x199 = INT64_MAX;
	int32_t x200 = -1;
	int32_t t10 = 782;

	t10 = ((x197>>(x198&x199))+x200);

	if (t10 != 126) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x201 = 0LL;
	volatile uint8_t x202 = 17U;
	uint8_t x203 = 0U;
	uint8_t x204 = 5U;
	int64_t t11 = -273LL;

	t11 = ((x201>>(x202&x203))+x204);

	if (t11 != 5LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int16_t x210 = 16;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = 0U;
	volatile int32_t t12 = -1;

	t12 = ((x209>>(x210&x211))+x212);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x214 = INT8_MIN;
	uint8_t x216 = 2U;

	t13 = ((x213>>(x214&x215))+x216);

	if (t13 != 1637) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x229 = INT16_MAX;
	volatile int16_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	static int32_t t14 = -356251351;

	t14 = ((x229>>(x230&x231))+x232);

	if (t14 != 16255) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x253 = 68954830227LL;
	volatile uint16_t x254 = 6416U;
	volatile uint32_t x255 = 30U;
	static int64_t x256 = -766607996431327LL;
	int64_t t15 = 147622000457LL;

	t15 = ((x253>>(x254&x255))+x256);

	if (t15 != -766607995379160LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x257 = INT8_MAX;
	uint16_t x259 = 2U;
	int32_t x260 = -1241224;
	volatile int32_t t16 = 16186;

	t16 = ((x257>>(x258&x259))+x260);

	if (t16 != -1241097) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x265 = INT64_MAX;
	int32_t x266 = -1;
	volatile uint8_t x267 = 18U;
	int64_t t17 = -52268LL;

	t17 = ((x265>>(x266&x267))+x268);

	if (t17 != 35184372088835LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int32_t x274 = INT32_MIN;
	volatile int32_t t18 = 30775124;

	t18 = ((x273>>(x274&x275))+x276);

	if (t18 != 510) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x298 = INT32_MIN;
	int8_t x299 = 18;
	int16_t x300 = INT16_MAX;
	int32_t t19 = 604370;

	t19 = ((x297>>(x298&x299))+x300);

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x309 = UINT8_MAX;
	int8_t x310 = INT8_MAX;
	int8_t x312 = 1;

	t20 = ((x309>>(x310&x311))+x312);

	if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x317 = INT32_MAX;
	volatile uint64_t x318 = 1112498118905914LLU;
	volatile int64_t x319 = 9LL;
	int32_t x320 = 1051;
	volatile int32_t t21 = -152;

	t21 = ((x317>>(x318&x319))+x320);

	if (t21 != 8389658) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x357 = 3800152753809LLU;
	uint64_t x358 = 0LLU;
	static uint32_t x359 = 579175814U;
	uint64_t t22 = 393482106119602LLU;

	t22 = ((x357>>(x358&x359))+x360);

	if (t22 != 3800152753808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x362 = -9LL;
	volatile uint16_t x363 = 0U;
	static volatile uint32_t t23 = 21645671U;

	t23 = ((x361>>(x362&x363))+x364);

	if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x389 = 2;
	volatile uint32_t x391 = 10419U;
	int16_t x392 = INT16_MIN;
	int32_t t24 = 47;

	t24 = ((x389>>(x390&x391))+x392);

	if (t24 != -32766) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x393 = 4292553;
	static int64_t x394 = INT64_MIN;
	static int64_t x395 = 6289LL;
	int32_t x396 = -1;

	t25 = ((x393>>(x394&x395))+x396);

	if (t25 != 4292552) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x397 = UINT16_MAX;
	static int16_t x399 = INT16_MIN;

	t26 = ((x397>>(x398&x399))+x400);

	if (t26 != 65534) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x401 = 124U;
	int64_t x402 = 0LL;
	static int8_t x403 = INT8_MAX;
	int64_t x404 = -1663309380LL;
	int64_t t27 = 14244658508LL;

	t27 = ((x401>>(x402&x403))+x404);

	if (t27 != -1663309256LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x409 = UINT8_MAX;
	uint8_t x410 = 41U;
	int64_t x411 = INT64_MIN;
	int32_t t28 = 95808300;

	t28 = ((x409>>(x410&x411))+x412);

	if (t28 != 31581634) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x445 = 16242U;
	int32_t x446 = 4;
	int16_t x447 = 752;
	volatile uint32_t t29 = 161U;

	t29 = ((x445>>(x446&x447))+x448);

	if (t29 != 16239U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x469 = 107285380U;
	int64_t x470 = -1LL;
	volatile int8_t x471 = 10;
	uint32_t x472 = 313U;

	t30 = ((x469>>(x470&x471))+x472);

	if (t30 != 105083U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x473 = 88U;
	int64_t x474 = 4564871783LL;
	int64_t x475 = INT64_MIN;
	int64_t x476 = INT64_MIN;
	int64_t t31 = 1981LL;

	t31 = ((x473>>(x474&x475))+x476);

	if (t31 != -9223372036854775720LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x515 = INT16_MIN;
	uint32_t x516 = 272719632U;
	volatile uint32_t t32 = 28989U;

	t32 = ((x513>>(x514&x515))+x516);

	if (t32 != 2420203279U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x525 = 1LL;
	int8_t x526 = 6;
	static uint8_t x527 = 3U;
	uint8_t x528 = 4U;
	int64_t t33 = -855311LL;

	t33 = ((x525>>(x526&x527))+x528);

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x554 = 847618U;
	int32_t x555 = INT32_MIN;
	int32_t x556 = 202237;

	t34 = ((x553>>(x554&x555))+x556);

	if (t34 != 205211U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x557 = UINT64_MAX;
	int16_t x558 = INT16_MIN;
	volatile int16_t x559 = INT16_MAX;
	static int8_t x560 = -1;
	static volatile uint64_t t35 = 551198797397LLU;

	t35 = ((x557>>(x558&x559))+x560);

	if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x561 = 12U;
	volatile int32_t x562 = 18151474;
	int64_t x563 = INT64_MIN;

	t36 = ((x561>>(x562&x563))+x564);

	if (t36 != 12279409LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x573 = 292U;
	static volatile int8_t x574 = INT8_MAX;
	uint64_t x576 = UINT64_MAX;

	t37 = ((x573>>(x574&x575))+x576);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x577 = 33;
	static uint16_t x578 = 26U;
	static int64_t x579 = INT64_MIN;
	int32_t x580 = -503;
	int32_t t38 = 128;

	t38 = ((x577>>(x578&x579))+x580);

	if (t38 != -470) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x609 = 8078864712215254LL;
	int32_t x610 = 25854509;
	int64_t x611 = INT64_MIN;
	volatile int16_t x612 = -1;
	static int64_t t39 = -1931620115380LL;

	t39 = ((x609>>(x610&x611))+x612);

	if (t39 != 8078864712215253LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x633 = INT8_MAX;
	uint8_t x634 = 4U;
	static int16_t x635 = INT16_MAX;
	uint64_t x636 = UINT64_MAX;

	t40 = ((x633>>(x634&x635))+x636);

	if (t40 != 6LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x645 = INT16_MAX;
	static int8_t x646 = INT8_MAX;
	volatile int8_t x647 = 6;
	int16_t x648 = INT16_MAX;
	volatile int32_t t41 = -1;

	t41 = ((x645>>(x646&x647))+x648);

	if (t41 != 33278) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x669 = INT32_MAX;
	int64_t x672 = -1LL;
	volatile int64_t t42 = 252955777592373LL;

	t42 = ((x669>>(x670&x671))+x672);

	if (t42 != 2147483646LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x742 = INT64_MIN;
	uint16_t x743 = 56U;
	volatile uint8_t x744 = 4U;

	t43 = ((x741>>(x742&x743))+x744);

	if (t43 != 533309096681LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x750 = INT8_MAX;
	int8_t x752 = INT8_MIN;
	static volatile uint32_t t44 = 513759662U;

	t44 = ((x749>>(x750&x751))+x752);

	if (t44 != 4294967168U) { NG(); } else { ; }
	
}

void f45(void) {


	t45 = ((x757>>(x758&x759))+x760);

	if (t45 != 28434859) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x765 = 34215009778LL;
	int32_t x766 = INT32_MIN;
	uint16_t x767 = UINT16_MAX;
	uint32_t x768 = UINT32_MAX;
	int64_t t46 = -423LL;

	t46 = ((x765>>(x766&x767))+x768);

	if (t46 != 38509977073LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x794 = 8U;
	volatile uint64_t x795 = UINT64_MAX;
	volatile int32_t t47 = 11731176;

	t47 = ((x793>>(x794&x795))+x796);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x798 = 0;
	uint64_t x800 = 473713707361LLU;

	t48 = ((x797>>(x798&x799))+x800);

	if (t48 != 473713707363LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x805 = 32U;
	int8_t x806 = INT8_MIN;
	uint16_t x807 = 9U;
	int16_t x808 = -4;
	volatile int32_t t49 = 36527;

	t49 = ((x805>>(x806&x807))+x808);

	if (t49 != 28) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x878 = 58U;
	int8_t x879 = INT8_MIN;

	t50 = ((x877>>(x878&x879))+x880);

	if (t50 != 50) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x897 = 11U;
	static int32_t x899 = INT32_MIN;
	volatile int64_t x900 = -1LL;
	int64_t t51 = -143186147LL;

	t51 = ((x897>>(x898&x899))+x900);

	if (t51 != 10LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x901 = 2065U;
	uint16_t x902 = 126U;
	int8_t x904 = -10;
	volatile int32_t t52 = 1;

	t52 = ((x901>>(x902&x903))+x904);

	if (t52 != 2055) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x909 = 21U;
	volatile uint8_t x910 = 15U;
	volatile uint32_t x912 = 60U;
	static volatile uint32_t t53 = 116568U;

	t53 = ((x909>>(x910&x911))+x912);

	if (t53 != 81U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x918 = 16776151833LL;
	uint64_t x919 = 6LLU;
	int8_t x920 = INT8_MIN;
	volatile uint32_t t54 = 5U;

	t54 = ((x917>>(x918&x919))+x920);

	if (t54 != 4294967169U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x925 = 7;
	static int32_t x926 = INT32_MIN;
	int8_t x928 = 3;
	int32_t t55 = -2;

	t55 = ((x925>>(x926&x927))+x928);

	if (t55 != 10) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x933 = 4U;
	uint32_t x934 = 12687U;
	volatile uint8_t x935 = 12U;

	t56 = ((x933>>(x934&x935))+x936);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x997 = 291419849548LLU;
	int8_t x998 = 5;
	uint16_t x999 = 0U;
	static int64_t x1000 = INT64_MAX;
	volatile uint64_t t57 = 2555758653626743LLU;

	t57 = ((x997>>(x998&x999))+x1000);

	if (t57 != 9223372328274625355LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1005 = UINT16_MAX;
	static volatile int32_t x1006 = INT32_MIN;
	volatile int8_t x1007 = INT8_MAX;
	int64_t t58 = 0LL;

	t58 = ((x1005>>(x1006&x1007))+x1008);

	if (t58 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1009 = 849;
	int64_t x1010 = INT64_MIN;
	uint32_t x1011 = 25044U;
	uint32_t x1012 = UINT32_MAX;
	volatile uint32_t t59 = 199407U;

	t59 = ((x1009>>(x1010&x1011))+x1012);

	if (t59 != 848U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x1021 = UINT32_MAX;
	uint16_t x1022 = 656U;
	static volatile uint32_t t60 = 306477521U;

	t60 = ((x1021>>(x1022&x1023))+x1024);

	if (t60 != 65662U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x1028 = INT16_MIN;

	t61 = ((x1025>>(x1026&x1027))+x1028);

	if (t61 != 2147450879) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x1033 = 9U;
	static uint8_t x1034 = 1U;
	int8_t x1035 = -1;
	int8_t x1036 = INT8_MAX;
	int32_t t62 = 12427887;

	t62 = ((x1033>>(x1034&x1035))+x1036);

	if (t62 != 131) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1097 = INT64_MAX;
	int16_t x1098 = 25;
	uint32_t x1099 = 743380700U;
	int64_t x1100 = INT64_MIN;
	volatile int64_t t63 = -3093968636LL;

	t63 = ((x1097>>(x1098&x1099))+x1100);

	if (t63 != -9223371487098961921LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1106 = UINT32_MAX;
	int8_t x1107 = 6;

	t64 = ((x1105>>(x1106&x1107))+x1108);

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1125 = 3;
	volatile int64_t x1126 = INT64_MIN;
	int32_t x1128 = INT32_MIN;
	int32_t t65 = -107023;

	t65 = ((x1125>>(x1126&x1127))+x1128);

	if (t65 != -2147483645) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x1129 = 349658U;
	int32_t x1130 = INT32_MIN;
	uint16_t x1131 = 6784U;
	static volatile int16_t x1132 = INT16_MIN;
	static volatile uint32_t t66 = 4714U;

	t66 = ((x1129>>(x1130&x1131))+x1132);

	if (t66 != 316890U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1137 = 2;
	int32_t x1138 = INT32_MIN;
	uint8_t x1139 = 4U;
	uint64_t x1140 = UINT64_MAX;
	uint64_t t67 = 513410253LLU;

	t67 = ((x1137>>(x1138&x1139))+x1140);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1145 = 26U;
	uint8_t x1146 = 28U;
	volatile int32_t x1147 = INT32_MIN;
	uint32_t x1148 = 586400328U;
	uint32_t t68 = 1547316835U;

	t68 = ((x1145>>(x1146&x1147))+x1148);

	if (t68 != 586400354U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1149 = 5515LL;
	int8_t x1150 = 40;
	volatile int32_t x1151 = 3091;
	uint16_t x1152 = 12U;

	t69 = ((x1149>>(x1150&x1151))+x1152);

	if (t69 != 5527LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1157 = INT16_MAX;
	int32_t x1159 = INT32_MIN;
	uint32_t x1160 = 8736875U;

	t70 = ((x1157>>(x1158&x1159))+x1160);

	if (t70 != 8769642U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x1161 = 432031815LLU;
	volatile uint32_t x1162 = UINT32_MAX;
	int32_t x1163 = 25;
	uint64_t t71 = 64LLU;

	t71 = ((x1161>>(x1162&x1163))+x1164);

	if (t71 != 2147483659LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x1177 = 8U;
	uint32_t x1178 = 14U;
	uint8_t x1179 = UINT8_MAX;
	volatile int64_t x1180 = 1495818671LL;
	int64_t t72 = -12373LL;

	t72 = ((x1177>>(x1178&x1179))+x1180);

	if (t72 != 1495818671LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1185 = UINT64_MAX;
	int8_t x1187 = INT8_MIN;
	static int32_t x1188 = -1;
	uint64_t t73 = 424140LLU;

	t73 = ((x1185>>(x1186&x1187))+x1188);

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x1197 = 20U;
	int16_t x1198 = INT16_MAX;
	uint32_t x1199 = 10U;
	static int16_t x1200 = -1;
	int32_t t74 = -2453;

	t74 = ((x1197>>(x1198&x1199))+x1200);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1233 = 47;
	int16_t x1234 = INT16_MIN;
	uint16_t x1235 = 3U;
	int32_t x1236 = 2;
	static int32_t t75 = 110;

	t75 = ((x1233>>(x1234&x1235))+x1236);

	if (t75 != 49) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1245 = 98U;
	static int8_t x1246 = 0;
	uint64_t x1248 = UINT64_MAX;
	volatile uint64_t t76 = 480411732LLU;

	t76 = ((x1245>>(x1246&x1247))+x1248);

	if (t76 != 97LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1250 = 0;
	volatile int8_t x1251 = 5;
	static volatile int32_t x1252 = -16892119;
	uint64_t t77 = 4237876594611498101LLU;

	t77 = ((x1249>>(x1250&x1251))+x1252);

	if (t77 != 18446744073692659496LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1253 = 4908;
	int16_t x1254 = 0;
	volatile uint16_t x1255 = 3U;
	volatile int16_t x1256 = -1;
	int32_t t78 = 384;

	t78 = ((x1253>>(x1254&x1255))+x1256);

	if (t78 != 4907) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x1259 = 15U;
	static volatile int64_t x1260 = 17056152389503226LL;
	int64_t t79 = -19136474558689286LL;

	t79 = ((x1257>>(x1258&x1259))+x1260);

	if (t79 != 17056152389503226LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1277 = INT64_MAX;
	uint8_t x1278 = UINT8_MAX;
	int16_t x1280 = INT16_MAX;
	int64_t t80 = 690826567036LL;

	t80 = ((x1277>>(x1278&x1279))+x1280);

	if (t80 != 2251799813718014LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1281 = UINT64_MAX;
	uint32_t x1282 = 1U;
	static volatile int8_t x1283 = INT8_MIN;
	int64_t x1284 = -1LL;
	uint64_t t81 = 266286LLU;

	t81 = ((x1281>>(x1282&x1283))+x1284);

	if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1341 = 32036483;
	static volatile uint8_t x1342 = 14U;
	int32_t x1343 = INT32_MIN;
	int32_t t82 = -98234;

	t82 = ((x1341>>(x1342&x1343))+x1344);

	if (t82 != -2115447165) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1345 = INT8_MAX;
	static int64_t x1346 = 0LL;
	int64_t x1347 = -1LL;
	uint8_t x1348 = 7U;
	volatile int32_t t83 = 1;

	t83 = ((x1345>>(x1346&x1347))+x1348);

	if (t83 != 134) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x1349 = 268LL;
	static volatile uint32_t x1350 = 2U;
	int32_t x1352 = INT32_MIN;

	t84 = ((x1349>>(x1350&x1351))+x1352);

	if (t84 != -2147483581LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1365 = 17152991930919LLU;
	static int16_t x1366 = 4;
	static int64_t x1367 = INT64_MIN;
	int32_t x1368 = INT32_MIN;

	t85 = ((x1365>>(x1366&x1367))+x1368);

	if (t85 != 17150844447271LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1389 = INT32_MAX;
	uint16_t x1390 = 3529U;
	int8_t x1391 = 7;
	int32_t x1392 = INT32_MIN;

	t86 = ((x1389>>(x1390&x1391))+x1392);

	if (t86 != -1073741825) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x1401 = UINT64_MAX;
	int32_t x1402 = INT32_MIN;
	uint64_t x1403 = 212382LLU;
	uint8_t x1404 = 56U;
	volatile uint64_t t87 = 107590LLU;

	t87 = ((x1401>>(x1402&x1403))+x1404);

	if (t87 != 55LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1406 = INT64_MIN;
	int16_t x1407 = INT16_MAX;
	static int32_t x1408 = -1;
	volatile int32_t t88 = 58664;

	t88 = ((x1405>>(x1406&x1407))+x1408);

	if (t88 != 65534) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1442 = 949362299;
	uint16_t x1443 = 27U;
	int32_t x1444 = INT32_MIN;
	volatile int64_t t89 = 20663153933015437LL;

	t89 = ((x1441>>(x1442&x1443))+x1444);

	if (t89 != 66571993087LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1453 = 5114U;
	int64_t x1454 = INT64_MIN;
	static int32_t x1455 = INT32_MAX;
	int8_t x1456 = INT8_MIN;

	t90 = ((x1453>>(x1454&x1455))+x1456);

	if (t90 != 4986U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1461 = INT16_MAX;
	uint8_t x1462 = UINT8_MAX;
	int32_t x1463 = INT32_MIN;
	int32_t x1464 = 154;
	volatile int32_t t91 = -561115826;

	t91 = ((x1461>>(x1462&x1463))+x1464);

	if (t91 != 32921) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1466 = INT64_MIN;
	static int16_t x1467 = 722;
	uint32_t x1468 = UINT32_MAX;
	volatile uint32_t t92 = 5180U;

	t92 = ((x1465>>(x1466&x1467))+x1468);

	if (t92 != 597U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1557 = INT32_MAX;
	volatile int64_t x1558 = INT64_MAX;
	int8_t x1559 = 10;
	int32_t t93 = -1537413;

	t93 = ((x1557>>(x1558&x1559))+x1560);

	if (t93 != 2116537) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1573 = 0;
	volatile uint64_t x1574 = 8LLU;
	static int32_t x1575 = -4468570;
	volatile int32_t t94 = 39;

	t94 = ((x1573>>(x1574&x1575))+x1576);

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1657 = 125U;
	int16_t x1659 = INT16_MIN;
	uint8_t x1660 = UINT8_MAX;

	t95 = ((x1657>>(x1658&x1659))+x1660);

	if (t95 != 380U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1665 = 1U;
	uint16_t x1666 = 1U;
	volatile int64_t x1667 = -1LL;
	int32_t t96 = 3731;

	t96 = ((x1665>>(x1666&x1667))+x1668);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1677 = 21U;
	volatile uint8_t x1678 = 2U;
	static uint64_t x1679 = 5749021157LLU;
	int16_t x1680 = INT16_MIN;
	volatile int32_t t97 = -1;

	t97 = ((x1677>>(x1678&x1679))+x1680);

	if (t97 != -32747) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1710 = 79U;
	int32_t x1712 = INT32_MIN;
	static volatile int32_t t98 = 0;

	t98 = ((x1709>>(x1710&x1711))+x1712);

	if (t98 != -2147450881) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1805 = 296303U;
	volatile uint32_t x1806 = 2748U;
	volatile int16_t x1808 = INT16_MIN;
	volatile uint32_t t99 = 1738455U;

	t99 = ((x1805>>(x1806&x1807))+x1808);

	if (t99 != 263535U) { NG(); } else { ; }
	
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

