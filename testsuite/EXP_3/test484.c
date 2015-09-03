#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = 1776933213LL;
int16_t x24 = INT16_MAX;
int8_t x40 = -1;
uint16_t x48 = 12U;
volatile int8_t x49 = INT8_MIN;
int64_t x60 = 1293LL;
volatile uint8_t x73 = UINT8_MAX;
int64_t x92 = 339715214324538169LL;
uint64_t t17 = 294104919762LLU;
static uint64_t x115 = 1004228659LLU;
uint32_t x116 = 0U;
static int8_t x130 = INT8_MIN;
int16_t x134 = INT16_MAX;
int16_t x142 = INT16_MIN;
uint8_t x143 = 16U;
int32_t t25 = 2;
int64_t x154 = 855354321432LL;
static volatile uint64_t x156 = 3859582637LLU;
int8_t x165 = 0;
volatile int16_t x181 = INT16_MIN;
volatile int8_t x184 = -1;
uint64_t t31 = 222665272148127957LLU;
int64_t x198 = -1LL;
int16_t x199 = INT16_MIN;
int16_t x217 = INT16_MIN;
int8_t x220 = INT8_MAX;
int8_t x228 = -1;
static int64_t t34 = 1164641534389478532LL;
uint64_t x252 = UINT64_MAX;
uint64_t t36 = 3163493272732916LLU;
static volatile int8_t x255 = 1;
static int8_t x273 = -31;
uint32_t x275 = 3433U;
int16_t x276 = 190;
int16_t x280 = INT16_MIN;
static int64_t x284 = 1LL;
volatile int8_t x290 = INT8_MIN;
volatile uint32_t x291 = 10722517U;
volatile int32_t x295 = -1;
uint8_t x307 = UINT8_MAX;
int16_t x308 = -1;
static int64_t x319 = -1LL;
int64_t t48 = -1LL;
int64_t t49 = -148LL;
uint16_t x333 = 571U;
static int8_t x340 = -1;
uint8_t x353 = 0U;
uint8_t x355 = 0U;
static volatile int32_t t52 = -1998094;
uint16_t x364 = 2000U;
int64_t x367 = -1LL;
int64_t t54 = -9181904885352LL;
uint16_t x370 = 613U;
static volatile uint16_t x371 = 40U;
volatile int8_t x386 = -1;
int16_t x388 = INT16_MIN;
uint8_t x401 = 1U;
uint32_t x404 = 190138691U;
static volatile uint8_t x412 = UINT8_MAX;
uint32_t x416 = UINT32_MAX;
static uint16_t x423 = 2U;
int16_t x426 = INT16_MIN;
int32_t x433 = INT32_MIN;
static uint16_t x437 = 14U;
uint32_t t68 = 913065U;
volatile int8_t x463 = INT8_MAX;
int16_t x483 = INT16_MIN;
int16_t x484 = INT16_MIN;
volatile uint8_t x489 = UINT8_MAX;
uint8_t x499 = 3U;
volatile int32_t t77 = -29292;
int8_t x518 = -1;
uint64_t x519 = 23839LLU;
int16_t x521 = -1;
volatile int64_t x528 = -28038232LL;
int64_t t80 = -101543913195199278LL;
static int64_t x541 = -1019719LL;
int64_t t82 = -4106529572LL;
uint64_t x552 = 743LLU;
int8_t x554 = -1;
volatile int32_t t85 = 193;
static uint16_t x560 = 77U;
int16_t x561 = INT16_MAX;
static uint8_t x562 = 20U;
int8_t x563 = -4;
int64_t x570 = 107497254546532LL;
int8_t x582 = 1;
static uint8_t x591 = 0U;
static int64_t t92 = 29750554359500532LL;
int32_t x600 = 269;
static uint8_t x610 = 16U;
volatile int64_t x615 = -99LL;
uint64_t x618 = 0LLU;
volatile int16_t x622 = INT16_MIN;


void f0(void) {
	int8_t x5 = 26;
	int8_t x6 = INT8_MAX;
	static int16_t x7 = INT16_MAX;
	int8_t x8 = -1;
	int32_t t0 = -61594;

	t0 = ((x5|x6)*(x7*x8));

	if (t0 != -4161409) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 236;
	int16_t x10 = -1030;
	uint64_t x12 = 11056LLU;
	static uint64_t t1 = 828LLU;

	t1 = ((x9|x10)*(x11*x12));

	if (t1 != 18426587509992947488LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 13;
	int32_t x14 = INT32_MIN;
	static uint32_t x15 = UINT32_MAX;
	volatile int32_t x16 = INT32_MIN;
	volatile uint32_t t2 = 187U;

	t2 = ((x13|x14)*(x15*x16));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x21 = INT16_MIN;
	volatile int32_t x22 = -1;
	int8_t x23 = -1;
	volatile int32_t t3 = 65164813;

	t3 = ((x21|x22)*(x23*x24));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x29 = INT16_MIN;
	static uint8_t x30 = UINT8_MAX;
	int8_t x31 = 1;
	int8_t x32 = -1;
	volatile int32_t t4 = -1010201;

	t4 = ((x29|x30)*(x31*x32));

	if (t4 != 32513) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -1;
	static uint32_t x38 = 65848020U;
	int8_t x39 = INT8_MIN;
	uint32_t t5 = 49637U;

	t5 = ((x37|x38)*(x39*x40));

	if (t5 != 4294967168U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MAX;
	static uint8_t x46 = 1U;
	uint16_t x47 = 353U;
	static volatile int32_t t6 = 7;

	t6 = ((x45|x46)*(x47*x48));

	if (t6 != 537972) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x50 = INT8_MIN;
	uint16_t x51 = UINT16_MAX;
	static int64_t x52 = -190331758LL;
	int64_t t7 = -170141573543LL;

	t7 = ((x49|x50)*(x51*x52));

	if (t7 != 1596594145347840LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MAX;
	volatile uint64_t x54 = UINT64_MAX;
	static volatile int8_t x55 = INT8_MIN;
	static int64_t x56 = -1LL;
	uint64_t t8 = 345274LLU;

	t8 = ((x53|x54)*(x55*x56));

	if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x57 = 14446U;
	int32_t x58 = INT32_MIN;
	int8_t x59 = 1;
	volatile int64_t t9 = -3994812LL;

	t9 = ((x57|x58)*(x59*x60));

	if (t9 != -2776677678186LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = -1;
	int16_t x62 = 1;
	static int64_t x63 = 1495006890253662LL;
	volatile int16_t x64 = 1399;
	volatile int64_t t10 = 4238969193800675853LL;

	t10 = ((x61|x62)*(x63*x64));

	if (t10 != -2091514639464873138LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x65 = -1;
	int16_t x66 = -1;
	uint64_t x67 = 3729LLU;
	static int64_t x68 = INT64_MIN;
	volatile uint64_t t11 = 24LLU;

	t11 = ((x65|x66)*(x67*x68));

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	uint8_t x70 = UINT8_MAX;
	int16_t x71 = 0;
	int16_t x72 = INT16_MIN;
	int32_t t12 = -23104217;

	t12 = ((x69|x70)*(x71*x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x74 = 1U;
	uint64_t x75 = UINT64_MAX;
	static int8_t x76 = 1;
	static volatile uint64_t t13 = 1201926727332071919LLU;

	t13 = ((x73|x74)*(x75*x76));

	if (t13 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = 237U;
	volatile int64_t x79 = -1LL;
	int32_t x80 = -1;
	static int64_t t14 = 157962922979038779LL;

	t14 = ((x77|x78)*(x79*x80));

	if (t14 != -9223372036854775571LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = -1;
	volatile uint64_t x83 = 805430LLU;
	uint64_t x84 = 162130LLU;
	volatile uint64_t t15 = 40015316027300LLU;

	t15 = ((x81|x82)*(x83*x84));

	if (t15 != 18446743943125185716LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int32_t x86 = INT32_MIN;
	uint32_t x87 = 39U;
	static int8_t x88 = 11;
	uint64_t t16 = 54215074LLU;

	t16 = ((x85|x86)*(x87*x88));

	if (t16 != 18446744073709551187LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MAX;
	static volatile int64_t x90 = 5541070430704438LL;
	volatile uint64_t x91 = UINT64_MAX;

	t17 = ((x89|x90)*(x91*x92));

	if (t17 != 14500553363711335225LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x97 = 85998120502LLU;
	static uint8_t x98 = 2U;
	volatile int8_t x99 = -1;
	volatile int64_t x100 = 53539324831LL;
	volatile uint64_t t18 = 421799802469LLU;

	t18 = ((x97|x98)*(x99*x100));

	if (t18 != 7404710015329118838LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int8_t x110 = 14;
	int64_t x111 = -1LL;
	int8_t x112 = INT8_MIN;
	volatile int64_t t19 = -5204893866735LL;

	t19 = ((x109|x110)*(x111*x112));

	if (t19 != 32640LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = -1LL;
	int64_t x114 = INT64_MIN;
	static uint64_t t20 = 1LLU;

	t20 = ((x113|x114)*(x115*x116));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x117 = 1272;
	volatile int16_t x118 = INT16_MIN;
	int64_t x119 = -89783895LL;
	int32_t x120 = 1741;
	volatile int64_t t21 = 1183662LL;

	t21 = ((x117|x118)*(x119*x120));

	if (t21 != 4923258222597720LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x125 = UINT16_MAX;
	static int8_t x126 = INT8_MIN;
	int32_t x127 = -1;
	uint8_t x128 = 38U;
	int32_t t22 = 70469;

	t22 = ((x125|x126)*(x127*x128));

	if (t22 != 38) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x129 = 4208U;
	volatile int32_t x131 = -1;
	static int32_t x132 = 16269;
	volatile int32_t t23 = 9016;

	t23 = ((x129|x130)*(x131*x132));

	if (t23 != 260304) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x133 = INT64_MIN;
	uint64_t x135 = 5LLU;
	int32_t x136 = 2480752;
	static volatile uint64_t t24 = 31035216LLU;

	t24 = ((x133|x134)*(x135*x136));

	if (t24 != 406434003920LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x141 = 623;
	volatile int16_t x144 = 6;

	t25 = ((x141|x142)*(x143*x144));

	if (t25 != -3085920) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x145 = INT8_MAX;
	volatile uint8_t x146 = UINT8_MAX;
	uint32_t x147 = 7906644U;
	volatile int32_t x148 = -1;
	uint32_t t26 = 738U;

	t26 = ((x145|x146)*(x147*x148));

	if (t26 != 2278773076U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = -57375671718LL;
	int64_t x155 = 0LL;
	static uint64_t t27 = 0LLU;

	t27 = ((x153|x154)*(x155*x156));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x166 = UINT64_MAX;
	int16_t x167 = -299;
	uint64_t x168 = 179595054361LLU;
	uint64_t t28 = 7117345640097LLU;

	t28 = ((x165|x166)*(x167*x168));

	if (t28 != 53698921253939LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x182 = 172;
	uint64_t x183 = UINT64_MAX;
	volatile uint64_t t29 = 30389443975178426LLU;

	t29 = ((x181|x182)*(x183*x184));

	if (t29 != 18446744073709519020LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x185 = 49U;
	int8_t x186 = INT8_MAX;
	uint64_t x187 = UINT64_MAX;
	int16_t x188 = 1944;
	volatile uint64_t t30 = 28847728LLU;

	t30 = ((x185|x186)*(x187*x188));

	if (t30 != 18446744073709304728LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x189 = 117169723708LLU;
	int8_t x190 = INT8_MIN;
	volatile uint16_t x191 = 0U;
	volatile uint16_t x192 = UINT16_MAX;

	t31 = ((x189|x190)*(x191*x192));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x197 = -1;
	uint64_t x200 = UINT64_MAX;
	uint64_t t32 = 516255421790LLU;

	t32 = ((x197|x198)*(x199*x200));

	if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x218 = 1332433187U;
	volatile uint16_t x219 = 12U;
	volatile uint32_t t33 = 4554243U;

	t33 = ((x217|x218)*(x219*x220));

	if (t33 != 4276683868U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x225 = 110661478U;
	int16_t x226 = INT16_MIN;
	volatile int64_t x227 = -39705LL;

	t34 = ((x225|x226)*(x227*x228));

	if (t34 != 170530531951350LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MAX;
	int64_t x231 = 0LL;
	int64_t x232 = -898698963LL;
	static volatile int64_t t35 = 727497246772466LL;

	t35 = ((x229|x230)*(x231*x232));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x249 = 1U;
	uint32_t x250 = 2322710U;
	static int8_t x251 = INT8_MAX;

	t36 = ((x249|x250)*(x251*x252));

	if (t36 != 18446744073414567319LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x253 = INT16_MIN;
	uint64_t x254 = UINT64_MAX;
	volatile int32_t x256 = INT32_MIN;
	volatile uint64_t t37 = 1825725157541118LLU;

	t37 = ((x253|x254)*(x255*x256));

	if (t37 != 2147483648LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x257 = -2;
	static int32_t x258 = INT32_MIN;
	volatile uint8_t x259 = UINT8_MAX;
	int16_t x260 = 9163;
	volatile int32_t t38 = -62;

	t38 = ((x257|x258)*(x259*x260));

	if (t38 != -4673130) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x265 = INT16_MAX;
	uint16_t x266 = UINT16_MAX;
	int16_t x267 = INT16_MIN;
	int64_t x268 = -1LL;
	volatile int64_t t39 = -42641399149LL;

	t39 = ((x265|x266)*(x267*x268));

	if (t39 != 2147450880LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x274 = -4232809672692LL;
	volatile int64_t t40 = -1766500221023LL;

	t40 = ((x273|x274)*(x275*x276));

	if (t40 != -12393130LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = -2;
	uint16_t x279 = 1074U;
	volatile int32_t t41 = -586;

	t41 = ((x277|x278)*(x279*x280));

	if (t41 != 70385664) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x281 = -1LL;
	volatile uint32_t x282 = 0U;
	volatile uint32_t x283 = 1647U;
	volatile int64_t t42 = 404966035LL;

	t42 = ((x281|x282)*(x283*x284));

	if (t42 != -1647LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x289 = 4U;
	int64_t x292 = 30LL;
	int64_t t43 = 683532941LL;

	t43 = ((x289|x290)*(x291*x292));

	if (t43 != -39887763240LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x293 = -3;
	uint8_t x294 = UINT8_MAX;
	int16_t x296 = INT16_MIN;
	static int32_t t44 = -27483;

	t44 = ((x293|x294)*(x295*x296));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x297 = -1LL;
	uint8_t x298 = UINT8_MAX;
	uint32_t x299 = 0U;
	static volatile uint8_t x300 = 1U;
	int64_t t45 = 3LL;

	t45 = ((x297|x298)*(x299*x300));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 173U;
	volatile uint64_t t46 = 56602237LLU;

	t46 = ((x305|x306)*(x307*x308));

	if (t46 != 255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x313 = 127U;
	volatile uint8_t x314 = 1U;
	uint8_t x315 = 22U;
	int16_t x316 = INT16_MAX;
	static volatile int32_t t47 = 0;

	t47 = ((x313|x314)*(x315*x316));

	if (t47 != 91550998) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x317 = 1554U;
	int32_t x318 = INT32_MIN;
	static volatile int16_t x320 = INT16_MAX;

	t48 = ((x317|x318)*(x319*x320));

	if (t48 != 70366545774098LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x321 = INT32_MIN;
	volatile int16_t x322 = 205;
	static int64_t x323 = -1LL;
	int16_t x324 = -214;

	t49 = ((x321|x322)*(x323*x324));

	if (t49 != -459561456802LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x334 = 56927845U;
	int64_t x335 = 231LL;
	uint8_t x336 = 5U;
	int64_t t50 = -18LL;

	t50 = ((x333|x334)*(x335*x336));

	if (t50 != 65751691005LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x337 = UINT32_MAX;
	int32_t x338 = -3274631;
	int32_t x339 = -1;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = ((x337|x338)*(x339*x340));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x354 = INT8_MIN;
	int8_t x356 = -2;

	t52 = ((x353|x354)*(x355*x356));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x361 = 0;
	uint32_t x362 = 490556U;
	int8_t x363 = -1;
	volatile uint32_t t53 = 242U;

	t53 = ((x361|x362)*(x363*x364));

	if (t53 != 3313855296U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x365 = INT32_MIN;
	volatile int64_t x366 = INT64_MIN;
	static int16_t x368 = INT16_MIN;

	t54 = ((x365|x366)*(x367*x368));

	if (t54 != -70368744177664LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x369 = 702;
	uint8_t x372 = UINT8_MAX;
	static int32_t t55 = 479322;

	t55 = ((x369|x370)*(x371*x372));

	if (t55 != 7823400) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x373 = -3083;
	static volatile int64_t x374 = INT64_MAX;
	volatile int16_t x375 = INT16_MAX;
	static int16_t x376 = INT16_MIN;
	int64_t t56 = -7034364071854LL;

	t56 = ((x373|x374)*(x375*x376));

	if (t56 != 1073709056LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x385 = -1;
	int16_t x387 = INT16_MAX;
	volatile int32_t t57 = -3;

	t57 = ((x385|x386)*(x387*x388));

	if (t57 != 1073709056) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x397 = UINT16_MAX;
	int64_t x398 = INT64_MIN;
	int16_t x399 = 11;
	uint64_t x400 = UINT64_MAX;
	static volatile uint64_t t58 = 11546126826127LLU;

	t58 = ((x397|x398)*(x399*x400));

	if (t58 != 9223372036854054923LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x402 = -47018435;
	volatile int16_t x403 = -1;
	volatile uint32_t t59 = 1714088971U;

	t59 = ((x401|x402)*(x403*x404));

	if (t59 != 2012504329U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x405 = -12;
	uint32_t x406 = 33721U;
	int8_t x407 = -1;
	static int16_t x408 = INT16_MIN;
	volatile uint32_t t60 = 525U;

	t60 = ((x405|x406)*(x407*x408));

	if (t60 != 4294868992U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x409 = -20;
	int64_t x410 = 35086684643172LL;
	int32_t x411 = -1;
	int64_t t61 = 104087941896809LL;

	t61 = ((x409|x410)*(x411*x412));

	if (t61 != 5100LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x413 = 61762879565937938LLU;
	uint8_t x414 = 3U;
	volatile int32_t x415 = INT32_MAX;
	volatile uint64_t t62 = 2011LLU;

	t62 = ((x413|x414)*(x415*x416));

	if (t62 != 9315145577347235091LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x417 = 235243914733956465LL;
	static int8_t x418 = INT8_MAX;
	uint32_t x419 = 36708U;
	static int8_t x420 = 0;
	int64_t t63 = 4294207205LL;

	t63 = ((x417|x418)*(x419*x420));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x421 = UINT8_MAX;
	static uint64_t x422 = UINT64_MAX;
	int16_t x424 = -283;
	volatile uint64_t t64 = 178677603LLU;

	t64 = ((x421|x422)*(x423*x424));

	if (t64 != 566LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x425 = INT16_MIN;
	int8_t x427 = INT8_MAX;
	uint64_t x428 = UINT64_MAX;
	uint64_t t65 = 65LLU;

	t65 = ((x425|x426)*(x427*x428));

	if (t65 != 4161536LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x434 = -210186508332157265LL;
	volatile int16_t x435 = INT16_MIN;
	uint64_t x436 = 25892LLU;
	static uint64_t t66 = 1872622410937064356LLU;

	t66 = ((x433|x434)*(x435*x436));

	if (t66 != 81390397484564480LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x438 = 2U;
	uint32_t x439 = 27U;
	static int16_t x440 = -30;
	volatile uint32_t t67 = 82U;

	t67 = ((x437|x438)*(x439*x440));

	if (t67 != 4294955956U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	int32_t x443 = INT32_MIN;
	static uint32_t x444 = 4690U;

	t68 = ((x441|x442)*(x443*x444));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x453 = 22;
	static uint32_t x454 = 27463U;
	static volatile uint8_t x455 = 4U;
	uint32_t x456 = 15U;
	volatile uint32_t t69 = 2831U;

	t69 = ((x453|x454)*(x455*x456));

	if (t69 != 1648740U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x461 = INT32_MIN;
	int64_t x462 = INT64_MAX;
	int16_t x464 = INT16_MIN;
	int64_t t70 = 277391487259349LL;

	t70 = ((x461|x462)*(x463*x464));

	if (t70 != 4161536LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x477 = 23543U;
	volatile int64_t x478 = INT64_MIN;
	uint32_t x479 = 203359111U;
	static uint64_t x480 = 20LLU;
	uint64_t t71 = 1034017018644576759LLU;

	t71 = ((x477|x478)*(x479*x480));

	if (t71 != 95753671005460LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x481 = INT64_MAX;
	int32_t x482 = INT32_MIN;
	int64_t t72 = -1LL;

	t72 = ((x481|x482)*(x483*x484));

	if (t72 != -1073741824LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x485 = -1;
	int64_t x486 = INT64_MIN;
	int16_t x487 = 1;
	int16_t x488 = -13233;
	int64_t t73 = 10815LL;

	t73 = ((x485|x486)*(x487*x488));

	if (t73 != 13233LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x490 = INT32_MAX;
	int32_t x491 = -1;
	static int8_t x492 = 1;
	volatile int32_t t74 = -194345292;

	t74 = ((x489|x490)*(x491*x492));

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x493 = 3936108LL;
	static volatile int32_t x494 = INT32_MAX;
	int16_t x495 = -1;
	volatile int16_t x496 = INT16_MAX;
	int64_t t75 = -43627919469587001LL;

	t75 = ((x493|x494)*(x495*x496));

	if (t75 != -70366596661249LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x497 = UINT16_MAX;
	uint16_t x498 = 103U;
	volatile uint32_t x500 = 1839270986U;
	volatile uint32_t t76 = 3U;

	t76 = ((x497|x498)*(x499*x500));

	if (t76 != 3690650402U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x505 = 1U;
	uint16_t x506 = 2U;
	int16_t x507 = -1;
	int16_t x508 = INT16_MAX;

	t77 = ((x505|x506)*(x507*x508));

	if (t77 != -98301) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x517 = -10538331;
	int8_t x520 = INT8_MAX;
	volatile uint64_t t78 = 8109LLU;

	t78 = ((x517|x518)*(x519*x520));

	if (t78 != 18446744073706524063LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x522 = INT8_MIN;
	uint8_t x523 = 2U;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t79 = -5;

	t79 = ((x521|x522)*(x523*x524));

	if (t79 != -131070) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x525 = 6U;
	int16_t x526 = 0;
	int8_t x527 = INT8_MAX;

	t80 = ((x525|x526)*(x527*x528));

	if (t80 != -21365132784LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x529 = 3U;
	int8_t x530 = 41;
	uint64_t x531 = 299051951127586868LLU;
	volatile uint64_t x532 = UINT64_MAX;
	volatile uint64_t t81 = 10940506LLU;

	t81 = ((x529|x530)*(x531*x532));

	if (t81 != 5587510175223316292LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x542 = INT32_MIN;
	int32_t x543 = -1;
	int32_t x544 = INT32_MAX;

	t82 = ((x541|x542)*(x543*x544));

	if (t82 != 2189829877035193LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x545 = 8265U;
	uint64_t x546 = UINT64_MAX;
	volatile uint32_t x547 = UINT32_MAX;
	int64_t x548 = -1LL;
	volatile uint64_t t83 = 142380907032746LLU;

	t83 = ((x545|x546)*(x547*x548));

	if (t83 != 4294967295LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x549 = -1;
	volatile int8_t x550 = -2;
	uint32_t x551 = UINT32_MAX;
	volatile uint64_t t84 = 4376980111350LLU;

	t84 = ((x549|x550)*(x551*x552));

	if (t84 != 18446740882548851431LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x553 = INT16_MIN;
	uint8_t x555 = 6U;
	static int16_t x556 = INT16_MAX;

	t85 = ((x553|x554)*(x555*x556));

	if (t85 != -196602) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x557 = -91160;
	int32_t x558 = 55846379;
	static volatile uint8_t x559 = UINT8_MAX;
	static volatile int32_t t86 = -1;

	t86 = ((x557|x558)*(x559*x560));

	if (t86 != -1608911535) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x564 = 132353411495748LLU;
	uint64_t t87 = 3638641540857312816LLU;

	t87 = ((x561|x562)*(x563*x564));

	if (t87 != 1099447135784852752LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x569 = INT16_MIN;
	int8_t x571 = INT8_MIN;
	uint8_t x572 = UINT8_MAX;
	int64_t t88 = -182967LL;

	t88 = ((x569|x570)*(x571*x572));

	if (t88 != 163852800LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x581 = 14377;
	int16_t x583 = 0;
	static int8_t x584 = 1;
	volatile int32_t t89 = -4;

	t89 = ((x581|x582)*(x583*x584));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x585 = -1;
	int64_t x586 = -1LL;
	uint16_t x587 = UINT16_MAX;
	volatile int16_t x588 = -1;
	volatile int64_t t90 = 16687343LL;

	t90 = ((x585|x586)*(x587*x588));

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x589 = INT16_MIN;
	int64_t x590 = -1LL;
	int32_t x592 = INT32_MIN;
	int64_t t91 = 88255928640808LL;

	t91 = ((x589|x590)*(x591*x592));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x593 = -1;
	volatile int8_t x594 = INT8_MIN;
	volatile int64_t x595 = -367476888192LL;
	int8_t x596 = -7;

	t92 = ((x593|x594)*(x595*x596));

	if (t92 != -2572338217344LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x597 = INT16_MIN;
	static int64_t x598 = INT64_MIN;
	int16_t x599 = 8969;
	volatile int64_t t93 = -65144057703574LL;

	t93 = ((x597|x598)*(x599*x600));

	if (t93 != -79058075648LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x601 = INT16_MAX;
	int32_t x602 = INT32_MAX;
	static uint64_t x603 = UINT64_MAX;
	int32_t x604 = INT32_MIN;
	volatile uint64_t t94 = 2129329631176912119LLU;

	t94 = ((x601|x602)*(x603*x604));

	if (t94 != 4611686016279904256LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x605 = -1;
	static int8_t x606 = INT8_MIN;
	uint8_t x607 = 6U;
	uint64_t x608 = UINT64_MAX;
	static volatile uint64_t t95 = 29419783LLU;

	t95 = ((x605|x606)*(x607*x608));

	if (t95 != 6LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x609 = 1U;
	volatile uint64_t x611 = 217584865140412639LLU;
	static int16_t x612 = 1;
	uint64_t t96 = 141801867003LLU;

	t96 = ((x609|x610)*(x611*x612));

	if (t96 != 3698942707387014863LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x613 = -1;
	int64_t x614 = INT64_MIN;
	static volatile int32_t x616 = INT32_MIN;
	static int64_t t97 = -13LL;

	t97 = ((x613|x614)*(x615*x616));

	if (t97 != -212600881152LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x617 = INT16_MIN;
	int16_t x619 = -1;
	int32_t x620 = INT32_MAX;
	volatile uint64_t t98 = 94697744LLU;

	t98 = ((x617|x618)*(x619*x620));

	if (t98 != 70368744144896LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x621 = -1LL;
	uint16_t x623 = 1615U;
	static int8_t x624 = -38;
	volatile int64_t t99 = -5859979LL;

	t99 = ((x621|x622)*(x623*x624));

	if (t99 != 61370LL) { NG(); } else { ; }
	
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

