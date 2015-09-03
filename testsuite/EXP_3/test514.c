#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x10 = UINT32_MAX;
uint32_t t1 = 48U;
int64_t x28 = INT64_MIN;
uint64_t x58 = 0LLU;
uint64_t x66 = 9335573693218979LLU;
static int8_t x94 = 52;
static volatile int8_t x95 = INT8_MIN;
uint8_t x131 = 3U;
int64_t x132 = -4105350565587LL;
uint64_t t8 = 100180889198969389LLU;
static int8_t x152 = -1;
int64_t x160 = -45335811933001941LL;
int64_t t12 = 2005260174LL;
volatile uint32_t x194 = 8694312U;
uint8_t x201 = UINT8_MAX;
static uint16_t x281 = 1U;
int8_t x301 = INT8_MAX;
int32_t x306 = INT32_MIN;
static int8_t x319 = INT8_MIN;
uint64_t x331 = 9086431623396983LLU;
int8_t x332 = -9;
uint64_t t22 = 58839LLU;
uint32_t x364 = UINT32_MAX;
uint16_t x365 = 3683U;
int64_t x373 = INT64_MAX;
uint64_t x394 = UINT64_MAX;
int64_t x396 = INT64_MIN;
volatile uint64_t t31 = 34544676301500834LLU;
uint64_t x406 = UINT64_MAX;
static volatile int32_t x407 = INT32_MIN;
int16_t x432 = INT16_MIN;
uint16_t x482 = UINT16_MAX;
int16_t x483 = INT16_MAX;
int32_t x484 = -1519715;
static uint64_t x489 = 3LLU;
uint32_t x505 = UINT32_MAX;
static uint32_t x510 = 112U;
uint32_t t43 = 202970U;
uint16_t x537 = 1U;
int64_t t46 = -32835238LL;
int16_t x541 = INT16_MAX;
int32_t x569 = -1;
uint16_t x571 = 13U;
int64_t x600 = INT64_MAX;
volatile int32_t x654 = INT32_MAX;
int8_t x665 = -1;
int8_t x666 = 14;
int32_t x710 = 52824101;
uint64_t x717 = 1LLU;
volatile int16_t x720 = INT16_MIN;
volatile uint64_t t58 = 13373417230039159LLU;
static int64_t x779 = -1LL;
int64_t x805 = 231293352441LL;
volatile int64_t t63 = 545616948304403LL;
int8_t x832 = INT8_MAX;
int16_t x843 = 11537;
uint64_t x861 = 12338054964LLU;
volatile uint8_t x870 = UINT8_MAX;
int64_t x889 = 2182868052723LL;
volatile int64_t t71 = 53155776LL;
static volatile int8_t x912 = -1;
int32_t t75 = 4909251;
uint32_t x979 = 269130083U;
uint32_t x989 = UINT32_MAX;
static uint32_t t78 = 1966566920U;
uint8_t x997 = 120U;
uint16_t x1006 = UINT16_MAX;
int64_t x1008 = INT64_MIN;
static uint64_t x1009 = 1076184592205109LLU;
int8_t x1017 = -1;
uint32_t x1020 = UINT32_MAX;
int32_t x1031 = INT32_MAX;
int32_t x1049 = -1;
volatile uint64_t x1053 = 194049LLU;
int32_t x1056 = INT32_MAX;
uint8_t x1058 = UINT8_MAX;
int64_t x1066 = -545LL;
static volatile int8_t x1087 = -1;
static uint64_t x1117 = 589026385645LLU;
volatile uint32_t x1118 = 190218U;
int32_t x1122 = INT32_MIN;
int64_t x1123 = INT64_MAX;
uint32_t x1126 = UINT32_MAX;
int64_t x1128 = -9459698758258LL;
uint8_t x1132 = 6U;
volatile uint64_t t95 = 325LLU;
uint8_t x1156 = 24U;
uint32_t t96 = 103U;
uint64_t x1161 = 1949415LLU;
int32_t t98 = 0;


void f0(void) {
	uint32_t x5 = 505289056U;
	static int16_t x6 = INT16_MIN;
	uint8_t x7 = 50U;
	volatile uint8_t x8 = 31U;
	uint32_t t0 = 887696U;

	t0 = ((x5+x6)>>(x7/x8));

	if (t0 != 252628144U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 180U;
	uint8_t x11 = 13U;
	uint64_t x12 = 100505033974578196LLU;

	t1 = ((x9+x10)>>(x11/x12));

	if (t1 != 179U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = 83860LL;
	int8_t x26 = INT8_MIN;
	static int32_t x27 = INT32_MAX;
	int64_t t2 = -242636336217022LL;

	t2 = ((x25+x26)>>(x27/x28));

	if (t2 != 83732LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x57 = 56234208;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = 4915LL;
	uint64_t t3 = 324LLU;

	t3 = ((x57+x58)>>(x59/x60));

	if (t3 != 6864LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x65 = INT64_MAX;
	static int32_t x67 = INT32_MAX;
	uint64_t x68 = 265943509LLU;
	uint64_t t4 = 1776312225LLU;

	t4 = ((x65+x66)>>(x67/x68));

	if (t4 != 36065264103703104LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x77 = 706143081LL;
	static uint8_t x78 = 0U;
	volatile int32_t x79 = -1;
	static int8_t x80 = 3;
	int64_t t5 = -930344LL;

	t5 = ((x77+x78)>>(x79/x80));

	if (t5 != 706143081LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x93 = -1LL;
	static uint32_t x96 = UINT32_MAX;
	static volatile int64_t t6 = -8695121254476041LL;

	t6 = ((x93+x94)>>(x95/x96));

	if (t6 != 51LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x129 = -19;
	uint64_t x130 = 5LLU;
	volatile uint64_t t7 = 5446184LLU;

	t7 = ((x129+x130)>>(x131/x132));

	if (t7 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	int64_t x148 = INT64_MAX;

	t8 = ((x145+x146)>>(x147/x148));

	if (t8 != 31LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x149 = 10025U;
	static uint64_t x150 = UINT64_MAX;
	uint64_t x151 = 1076280772890228LLU;
	uint64_t t9 = 42200334LLU;

	t9 = ((x149+x150)>>(x151/x152));

	if (t9 != 10024LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x157 = -671209LL;
	static uint64_t x158 = 1086027359740671808LLU;
	static int16_t x159 = INT16_MIN;
	static volatile uint64_t t10 = 5388203868131098573LLU;

	t10 = ((x157+x158)>>(x159/x160));

	if (t10 != 1086027359740000599LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x181 = UINT64_MAX;
	static uint32_t x182 = 3U;
	int32_t x183 = 26935;
	static int32_t x184 = INT32_MIN;
	volatile uint64_t t11 = 8157LLU;

	t11 = ((x181+x182)>>(x183/x184));

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x189 = 30844614;
	int64_t x190 = 2LL;
	int8_t x191 = -55;
	int64_t x192 = -3LL;

	t12 = ((x189+x190)>>(x191/x192));

	if (t12 != 117LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x193 = -1;
	uint32_t x195 = 469U;
	uint8_t x196 = 127U;
	volatile uint32_t t13 = 408801U;

	t13 = ((x193+x194)>>(x195/x196));

	if (t13 != 1086788U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x202 = -1;
	int8_t x203 = 0;
	int16_t x204 = INT16_MIN;
	int32_t t14 = 3;

	t14 = ((x201+x202)>>(x203/x204));

	if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x209 = 430U;
	volatile int8_t x210 = INT8_MIN;
	uint16_t x211 = UINT16_MAX;
	uint64_t x212 = 8839686934LLU;
	volatile int32_t t15 = -2591;

	t15 = ((x209+x210)>>(x211/x212));

	if (t15 != 302) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x257 = 54256930880LL;
	int64_t x258 = -24915LL;
	int32_t x259 = -85;
	static uint16_t x260 = 4981U;
	int64_t t16 = -426866599668654601LL;

	t16 = ((x257+x258)>>(x259/x260));

	if (t16 != 54256905965LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	static int32_t t17 = -3012;

	t17 = ((x281+x282)>>(x283/x284));

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x293 = 30218U;
	uint16_t x294 = UINT16_MAX;
	static int32_t x295 = -1;
	int32_t x296 = 121;
	volatile int32_t t18 = 512104;

	t18 = ((x293+x294)>>(x295/x296));

	if (t18 != 95753) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x302 = INT16_MAX;
	volatile int8_t x303 = -51;
	int16_t x304 = 1009;
	int32_t t19 = -3724;

	t19 = ((x301+x302)>>(x303/x304));

	if (t19 != 32894) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x305 = INT64_MAX;
	volatile int32_t x307 = -1;
	int64_t x308 = -158521572692LL;
	int64_t t20 = 127872LL;

	t20 = ((x305+x306)>>(x307/x308));

	if (t20 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x317 = 3721801903LLU;
	uint32_t x318 = 489225U;
	int16_t x320 = INT16_MIN;
	uint64_t t21 = 50084496451950081LLU;

	t21 = ((x317+x318)>>(x319/x320));

	if (t21 != 3722291128LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x330 = 4166894985978788LLU;

	t22 = ((x329+x330)>>(x331/x332));

	if (t22 != 4166894985979043LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MAX;
	volatile int32_t x335 = 6;
	static int32_t x336 = INT32_MAX;
	volatile int64_t t23 = 0LL;

	t23 = ((x333+x334)>>(x335/x336));

	if (t23 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x337 = 86U;
	volatile int16_t x338 = INT16_MAX;
	uint32_t x339 = UINT32_MAX;
	volatile int16_t x340 = INT16_MIN;
	volatile uint32_t t24 = 492U;

	t24 = ((x337+x338)>>(x339/x340));

	if (t24 != 16426U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x345 = INT16_MAX;
	int64_t x346 = 4LL;
	uint16_t x347 = 2U;
	volatile uint64_t x348 = 55060437108LLU;
	volatile int64_t t25 = -1044956879040LL;

	t25 = ((x345+x346)>>(x347/x348));

	if (t25 != 32771LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x361 = INT8_MIN;
	uint16_t x362 = 818U;
	uint8_t x363 = UINT8_MAX;
	volatile int32_t t26 = 31;

	t26 = ((x361+x362)>>(x363/x364));

	if (t26 != 690) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int32_t x368 = INT32_MAX;
	volatile int32_t t27 = -7498;

	t27 = ((x365+x366)>>(x367/x368));

	if (t27 != 3555) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x374 = -1LL;
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = INT64_MAX;
	static int64_t t28 = -146339421692LL;

	t28 = ((x373+x374)>>(x375/x376));

	if (t28 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x381 = INT32_MIN;
	volatile uint32_t x382 = 3U;
	uint8_t x383 = 10U;
	uint32_t x384 = UINT32_MAX;
	static uint32_t t29 = 7U;

	t29 = ((x381+x382)>>(x383/x384));

	if (t29 != 2147483651U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x385 = 1019146854;
	int8_t x386 = INT8_MIN;
	int32_t x387 = -60;
	int8_t x388 = INT8_MIN;
	volatile int32_t t30 = -47;

	t30 = ((x385+x386)>>(x387/x388));

	if (t30 != 1019146726) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x393 = 10;
	int64_t x395 = -1LL;

	t31 = ((x393+x394)>>(x395/x396));

	if (t31 != 9LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x405 = 1U;
	static int64_t x408 = INT64_MAX;
	volatile uint64_t t32 = 127901940406958989LLU;

	t32 = ((x405+x406)>>(x407/x408));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x417 = 32474240U;
	int64_t x418 = -1LL;
	uint32_t x419 = 14763U;
	uint8_t x420 = UINT8_MAX;
	static volatile int64_t t33 = -200315809809LL;

	t33 = ((x417+x418)>>(x419/x420));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x425 = INT32_MIN;
	static uint64_t x426 = 109310087692633LLU;
	int8_t x427 = INT8_MIN;
	static volatile int8_t x428 = -19;
	volatile uint64_t t34 = 6556066760528593120LLU;

	t34 = ((x425+x426)>>(x427/x428));

	if (t34 != 1707936565765LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x429 = UINT32_MAX;
	int32_t x430 = -25153;
	uint8_t x431 = UINT8_MAX;
	static uint32_t t35 = 208U;

	t35 = ((x429+x430)>>(x431/x432));

	if (t35 != 4294942142U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x437 = UINT64_MAX;
	volatile uint16_t x438 = 28729U;
	int16_t x439 = INT16_MAX;
	static volatile int32_t x440 = -41140;
	volatile uint64_t t36 = 13241083074LLU;

	t36 = ((x437+x438)>>(x439/x440));

	if (t36 != 28728LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x477 = 7U;
	int32_t x478 = 1;
	int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MAX;
	int32_t t37 = 26951985;

	t37 = ((x477+x478)>>(x479/x480));

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x481 = 241095965U;
	uint32_t t38 = 3255U;

	t38 = ((x481+x482)>>(x483/x484));

	if (t38 != 241161500U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x490 = UINT8_MAX;
	uint32_t x491 = 47480047U;
	int64_t x492 = INT64_MIN;
	volatile uint64_t t39 = 236047474026LLU;

	t39 = ((x489+x490)>>(x491/x492));

	if (t39 != 258LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x497 = INT16_MIN;
	volatile uint32_t x498 = UINT32_MAX;
	int16_t x499 = -1860;
	volatile int64_t x500 = INT64_MIN;
	static uint32_t t40 = 14216U;

	t40 = ((x497+x498)>>(x499/x500));

	if (t40 != 4294934527U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x506 = -1LL;
	static int32_t x507 = -7;
	int8_t x508 = INT8_MIN;
	int64_t t41 = -31LL;

	t41 = ((x505+x506)>>(x507/x508));

	if (t41 != 4294967294LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x509 = -9820554;
	int16_t x511 = INT16_MIN;
	uint32_t x512 = UINT32_MAX;
	uint32_t t42 = 595U;

	t42 = ((x509+x510)>>(x511/x512));

	if (t42 != 4285146854U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x513 = 8U;
	volatile int8_t x514 = 15;
	volatile int16_t x515 = INT16_MAX;
	int64_t x516 = INT64_MIN;

	t43 = ((x513+x514)>>(x515/x516));

	if (t43 != 23U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x521 = -1;
	int16_t x522 = 3329;
	uint8_t x523 = UINT8_MAX;
	volatile uint64_t x524 = 53LLU;
	int32_t t44 = 986686750;

	t44 = ((x521+x522)>>(x523/x524));

	if (t44 != 208) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x529 = INT32_MIN;
	volatile uint64_t x530 = 2377182164199704LLU;
	static int32_t x531 = 28161;
	static int32_t x532 = 10366612;
	volatile uint64_t t45 = 5926665036307LLU;

	t45 = ((x529+x530)>>(x531/x532));

	if (t45 != 2377180016716056LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x538 = -1LL;
	int16_t x539 = -14;
	int32_t x540 = INT32_MIN;

	t46 = ((x537+x538)>>(x539/x540));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x542 = -1LL;
	volatile uint32_t x543 = 824806U;
	int16_t x544 = -605;
	int64_t t47 = -43LL;

	t47 = ((x541+x542)>>(x543/x544));

	if (t47 != 32766LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x570 = 251;
	int16_t x572 = -43;
	int32_t t48 = 24303;

	t48 = ((x569+x570)>>(x571/x572));

	if (t48 != 250) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x597 = UINT8_MAX;
	uint8_t x598 = UINT8_MAX;
	uint64_t x599 = 268394492736630937LLU;
	int32_t t49 = -1;

	t49 = ((x597+x598)>>(x599/x600));

	if (t49 != 510) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x605 = UINT32_MAX;
	static int64_t x606 = -2257LL;
	volatile int16_t x607 = INT16_MIN;
	int64_t x608 = -1610188385267950562LL;
	int64_t t50 = -439567972049087LL;

	t50 = ((x605+x606)>>(x607/x608));

	if (t50 != 4294965038LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x609 = 6820577;
	uint8_t x610 = 3U;
	static uint16_t x611 = 0U;
	int64_t x612 = INT64_MIN;
	static int32_t t51 = -701204381;

	t51 = ((x609+x610)>>(x611/x612));

	if (t51 != 6820580) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x613 = 36854LLU;
	static int8_t x614 = INT8_MAX;
	uint8_t x615 = 22U;
	volatile int16_t x616 = INT16_MIN;
	uint64_t t52 = 84396LLU;

	t52 = ((x613+x614)>>(x615/x616));

	if (t52 != 36981LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x653 = 16572957LLU;
	int64_t x655 = INT64_MAX;
	uint64_t x656 = UINT64_MAX;
	uint64_t t53 = 325LLU;

	t53 = ((x653+x654)>>(x655/x656));

	if (t53 != 2164056604LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x667 = INT16_MIN;
	uint32_t x668 = 159830870U;
	volatile int32_t t54 = -290;

	t54 = ((x665+x666)>>(x667/x668));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x709 = INT8_MIN;
	static int8_t x711 = INT8_MAX;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t55 = 1705;

	t55 = ((x709+x710)>>(x711/x712));

	if (t55 != 52823973) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x718 = INT8_MAX;
	static uint64_t x719 = 3626387573264LLU;
	static uint64_t t56 = 57971454604LLU;

	t56 = ((x717+x718)>>(x719/x720));

	if (t56 != 128LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x729 = INT16_MAX;
	int8_t x730 = -1;
	uint8_t x731 = 0U;
	int8_t x732 = -7;
	int32_t t57 = 124;

	t57 = ((x729+x730)>>(x731/x732));

	if (t57 != 32766) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x733 = UINT64_MAX;
	int16_t x734 = -6;
	int32_t x735 = 1270370;
	volatile uint64_t x736 = 376070759004196LLU;

	t58 = ((x733+x734)>>(x735/x736));

	if (t58 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x737 = -1;
	static volatile int16_t x738 = INT16_MAX;
	static uint64_t x739 = 7237974001872651LLU;
	int8_t x740 = INT8_MIN;
	int32_t t59 = 3;

	t59 = ((x737+x738)>>(x739/x740));

	if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x749 = -1;
	static uint32_t x750 = 26567373U;
	int32_t x751 = INT32_MAX;
	volatile uint32_t x752 = 622636428U;
	uint32_t t60 = 90356708U;

	t60 = ((x749+x750)>>(x751/x752));

	if (t60 != 3320921U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x777 = 57836LLU;
	static uint64_t x778 = 4007951357LLU;
	uint8_t x780 = UINT8_MAX;
	uint64_t t61 = 1397907305398LLU;

	t61 = ((x777+x778)>>(x779/x780));

	if (t61 != 4008009193LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x793 = UINT32_MAX;
	uint16_t x794 = 8933U;
	uint32_t x795 = 19636U;
	int16_t x796 = INT16_MIN;
	volatile uint32_t t62 = 20120087U;

	t62 = ((x793+x794)>>(x795/x796));

	if (t62 != 8932U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x806 = UINT32_MAX;
	int8_t x807 = -1;
	int8_t x808 = 49;

	t63 = ((x805+x806)>>(x807/x808));

	if (t63 != 235588319736LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x829 = 95U;
	static int16_t x830 = INT16_MAX;
	static volatile int64_t x831 = 172LL;
	int32_t t64 = -63070896;

	t64 = ((x829+x830)>>(x831/x832));

	if (t64 != 16431) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x833 = 3898994LLU;
	static int64_t x834 = -112009902950LL;
	int16_t x835 = -1;
	int64_t x836 = 737640983792505216LL;
	static volatile uint64_t t65 = 7081998776034LLU;

	t65 = ((x833+x834)>>(x835/x836));

	if (t65 != 18446743961703547660LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x841 = -1;
	volatile int64_t x842 = INT64_MAX;
	int64_t x844 = INT64_MIN;
	int64_t t66 = 24689LL;

	t66 = ((x841+x842)>>(x843/x844));

	if (t66 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x845 = 238U;
	volatile uint32_t x846 = 2U;
	static volatile uint8_t x847 = 0U;
	static uint32_t x848 = UINT32_MAX;
	uint32_t t67 = 3237U;

	t67 = ((x845+x846)>>(x847/x848));

	if (t67 != 240U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x857 = INT64_MIN;
	volatile uint64_t x858 = 99380763LLU;
	int16_t x859 = INT16_MIN;
	volatile int64_t x860 = INT64_MIN;
	uint64_t t68 = 67LLU;

	t68 = ((x857+x858)>>(x859/x860));

	if (t68 != 9223372036954156571LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x862 = UINT8_MAX;
	static volatile int8_t x863 = 0;
	int8_t x864 = 1;
	uint64_t t69 = 27325969081889017LLU;

	t69 = ((x861+x862)>>(x863/x864));

	if (t69 != 12338055219LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x869 = 2368801368964888LLU;
	uint64_t x871 = UINT64_MAX;
	int8_t x872 = -1;
	uint64_t t70 = 71259281865LLU;

	t70 = ((x869+x870)>>(x871/x872));

	if (t70 != 1184400684482571LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x890 = -7;
	volatile uint8_t x891 = 0U;
	int32_t x892 = -12861;

	t71 = ((x889+x890)>>(x891/x892));

	if (t71 != 2182868052716LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x909 = 1;
	volatile uint32_t x910 = 20611385U;
	int8_t x911 = -1;
	volatile uint32_t t72 = 1027U;

	t72 = ((x909+x910)>>(x911/x912));

	if (t72 != 10305693U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x913 = INT8_MIN;
	static volatile int32_t x914 = 915;
	int16_t x915 = INT16_MAX;
	uint64_t x916 = UINT64_MAX;
	static volatile int32_t t73 = -347;

	t73 = ((x913+x914)>>(x915/x916));

	if (t73 != 787) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x945 = INT8_MIN;
	uint32_t x946 = 64709370U;
	uint64_t x947 = 2LLU;
	int16_t x948 = INT16_MIN;
	static volatile uint32_t t74 = 29687U;

	t74 = ((x945+x946)>>(x947/x948));

	if (t74 != 64709242U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x957 = 505;
	volatile int32_t x958 = 1274;
	uint8_t x959 = UINT8_MAX;
	int8_t x960 = INT8_MAX;

	t75 = ((x957+x958)>>(x959/x960));

	if (t75 != 444) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x961 = INT8_MAX;
	uint64_t x962 = 1691301071LLU;
	uint32_t x963 = UINT32_MAX;
	uint64_t x964 = UINT64_MAX;
	uint64_t t76 = 7LLU;

	t76 = ((x961+x962)>>(x963/x964));

	if (t76 != 1691301198LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x977 = 21U;
	int16_t x978 = -1;
	static volatile int32_t x980 = -15716577;
	int32_t t77 = -256979;

	t77 = ((x977+x978)>>(x979/x980));

	if (t77 != 20) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x990 = INT32_MAX;
	int16_t x991 = -16;
	int64_t x992 = -1LL;

	t78 = ((x989+x990)>>(x991/x992));

	if (t78 != 32767U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x998 = -1;
	static volatile int8_t x999 = 0;
	int8_t x1000 = INT8_MIN;
	static volatile int32_t t79 = 251;

	t79 = ((x997+x998)>>(x999/x1000));

	if (t79 != 119) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x1005 = 2U;
	int16_t x1007 = INT16_MIN;
	int32_t t80 = -77883678;

	t80 = ((x1005+x1006)>>(x1007/x1008));

	if (t80 != 65537) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x1010 = -1LL;
	static volatile uint8_t x1011 = 1U;
	int64_t x1012 = -2099088413LL;
	static uint64_t t81 = 3831262139594879648LLU;

	t81 = ((x1009+x1010)>>(x1011/x1012));

	if (t81 != 1076184592205108LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x1018 = INT64_MAX;
	volatile int8_t x1019 = 0;
	volatile int64_t t82 = 515866355700491995LL;

	t82 = ((x1017+x1018)>>(x1019/x1020));

	if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x1029 = 113661U;
	int32_t x1030 = INT32_MIN;
	int64_t x1032 = INT64_MIN;
	volatile uint32_t t83 = 3U;

	t83 = ((x1029+x1030)>>(x1031/x1032));

	if (t83 != 2147597309U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1050 = UINT32_MAX;
	volatile uint16_t x1051 = 76U;
	int8_t x1052 = INT8_MIN;
	uint32_t t84 = 46203U;

	t84 = ((x1049+x1050)>>(x1051/x1052));

	if (t84 != 4294967294U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x1054 = 13805LLU;
	volatile uint32_t x1055 = 13U;
	static volatile uint64_t t85 = 468358697170200LLU;

	t85 = ((x1053+x1054)>>(x1055/x1056));

	if (t85 != 207854LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1057 = 3031988578360124601LLU;
	uint64_t x1059 = 790988195006650LLU;
	int64_t x1060 = -171LL;
	uint64_t t86 = 399157908771LLU;

	t86 = ((x1057+x1058)>>(x1059/x1060));

	if (t86 != 3031988578360124856LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1065 = UINT64_MAX;
	int32_t x1067 = -1;
	volatile uint64_t x1068 = UINT64_MAX;
	static volatile uint64_t t87 = 4675633918LLU;

	t87 = ((x1065+x1066)>>(x1067/x1068));

	if (t87 != 9223372036854775535LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x1077 = -1LL;
	uint16_t x1078 = 408U;
	int8_t x1079 = -1;
	int64_t x1080 = INT64_MIN;
	volatile int64_t t88 = -459405996002612100LL;

	t88 = ((x1077+x1078)>>(x1079/x1080));

	if (t88 != 407LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1085 = 2;
	static uint64_t x1086 = 57246731593LLU;
	int32_t x1088 = INT32_MIN;
	static uint64_t t89 = 700936580764645283LLU;

	t89 = ((x1085+x1086)>>(x1087/x1088));

	if (t89 != 57246731595LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x1119 = 556;
	uint32_t x1120 = 159U;
	uint64_t t90 = 1083687351135LLU;

	t90 = ((x1117+x1118)>>(x1119/x1120));

	if (t90 != 73628321982LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1121 = UINT64_MAX;
	int64_t x1124 = INT64_MIN;
	volatile uint64_t t91 = 3394523375LLU;

	t91 = ((x1121+x1122)>>(x1123/x1124));

	if (t91 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x1125 = -1;
	int8_t x1127 = INT8_MIN;
	volatile uint32_t t92 = 28U;

	t92 = ((x1125+x1126)>>(x1127/x1128));

	if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x1129 = UINT8_MAX;
	uint32_t x1130 = UINT32_MAX;
	int16_t x1131 = -1;
	uint32_t t93 = 1U;

	t93 = ((x1129+x1130)>>(x1131/x1132));

	if (t93 != 254U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1133 = 65666;
	volatile uint64_t x1134 = 22LLU;
	int32_t x1135 = INT32_MIN;
	uint32_t x1136 = 375626810U;
	volatile uint64_t t94 = 14276912966713LLU;

	t94 = ((x1133+x1134)>>(x1135/x1136));

	if (t94 != 2052LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1141 = INT32_MIN;
	uint64_t x1142 = 14LLU;
	uint16_t x1143 = 4U;
	int32_t x1144 = INT32_MAX;

	t95 = ((x1141+x1142)>>(x1143/x1144));

	if (t95 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1153 = -216;
	static uint32_t x1154 = UINT32_MAX;
	static uint8_t x1155 = 54U;

	t96 = ((x1153+x1154)>>(x1155/x1156));

	if (t96 != 1073741769U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1162 = 54874310;
	uint16_t x1163 = 2U;
	int8_t x1164 = 15;
	uint64_t t97 = 1011571339LLU;

	t97 = ((x1161+x1162)>>(x1163/x1164));

	if (t97 != 56823725LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x1169 = INT16_MAX;
	int16_t x1170 = -1;
	int32_t x1171 = -1;
	static int32_t x1172 = -1;

	t98 = ((x1169+x1170)>>(x1171/x1172));

	if (t98 != 16383) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x1173 = -1;
	int16_t x1174 = 2809;
	static uint16_t x1175 = UINT16_MAX;
	volatile uint16_t x1176 = UINT16_MAX;
	int32_t t99 = 7310;

	t99 = ((x1173+x1174)>>(x1175/x1176));

	if (t99 != 1404) { NG(); } else { ; }
	
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

