#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x48 = 123U;
int16_t x58 = INT16_MIN;
int16_t x64 = INT16_MAX;
int16_t x70 = INT16_MIN;
uint32_t x71 = 776U;
static volatile int8_t x72 = -1;
static int64_t x85 = 239LL;
static int32_t x86 = INT32_MIN;
volatile int8_t x128 = INT8_MAX;
static int32_t x166 = INT32_MIN;
int64_t t12 = 8LL;
int32_t x197 = -43032;
int32_t t14 = -157;
int16_t x209 = -314;
static volatile int32_t t15 = 0;
int64_t x226 = -1LL;
static uint32_t x238 = 39U;
int64_t x253 = INT64_MIN;
uint64_t x258 = 23LLU;
int16_t x266 = INT16_MIN;
uint8_t x267 = 1U;
int64_t t23 = 2724980LL;
static int64_t x271 = -1LL;
static uint16_t x299 = 25U;
static volatile int16_t x311 = INT16_MAX;
uint16_t x312 = UINT16_MAX;
static int16_t x319 = 3929;
volatile uint32_t x320 = 1689665U;
volatile int16_t x333 = INT16_MIN;
int8_t x336 = -1;
int64_t t29 = 32LL;
int32_t x371 = -3477907;
uint16_t x374 = 4318U;
volatile int8_t x375 = INT8_MIN;
uint16_t x390 = 107U;
static int8_t x393 = -1;
volatile int32_t t36 = 423;
uint8_t x440 = UINT8_MAX;
static int64_t x461 = 492LL;
int8_t x466 = 16;
uint16_t x468 = UINT16_MAX;
uint16_t x472 = UINT16_MAX;
static volatile int8_t x482 = INT8_MAX;
int16_t x489 = INT16_MAX;
static volatile int32_t x490 = INT32_MIN;
int32_t x491 = -1;
static volatile uint64_t t47 = 69039LLU;
int8_t x510 = INT8_MIN;
int64_t x511 = 12LL;
volatile int32_t t49 = -5;
int16_t x520 = INT16_MAX;
static int8_t x523 = -1;
uint64_t x527 = 21927LLU;
int32_t x528 = INT32_MIN;
int64_t x536 = 30665763526239LL;
static uint64_t x539 = 427720716LLU;
static uint32_t x540 = UINT32_MAX;
static int8_t x542 = INT8_MIN;
volatile uint32_t x543 = 130266221U;
static volatile int16_t x565 = 178;
static int64_t x567 = INT64_MIN;
static volatile int32_t t56 = 13;
int32_t x570 = INT32_MAX;
uint16_t x572 = 2U;
static volatile uint64_t t57 = 1105740508548793LLU;
uint16_t x577 = UINT16_MAX;
static uint32_t x579 = 1245632U;
uint8_t x581 = 37U;
static uint64_t x617 = 6956LLU;
static uint16_t x618 = UINT16_MAX;
static int16_t x627 = INT16_MIN;
static uint8_t x632 = UINT8_MAX;
static volatile int64_t t63 = 1517110969LL;
int8_t x644 = INT8_MAX;
volatile int64_t t65 = 0LL;
static int16_t x647 = INT16_MIN;
int64_t x651 = -12896668LL;
static int32_t x675 = -1;
volatile int8_t x677 = INT8_MIN;
static int64_t t70 = 17129462053531010LL;
static int8_t x681 = INT8_MIN;
static int64_t x692 = -1LL;
int32_t x693 = INT32_MAX;
int8_t x696 = 1;
static volatile int16_t x722 = INT16_MIN;
int32_t t75 = -23;
static int8_t x733 = -1;
int16_t x763 = -363;
volatile int64_t t78 = 1LL;
int16_t x856 = INT16_MAX;
uint64_t t88 = 3253LLU;
uint8_t x867 = 14U;
int16_t x870 = 2;
static int64_t x872 = -1LL;
volatile int32_t t93 = -127;
static int8_t x918 = -1;
static uint64_t x931 = 1417016LLU;
volatile uint64_t t99 = 22LLU;


void f0(void) {
	int8_t x13 = INT8_MIN;
	static int16_t x14 = -1;
	volatile int64_t x15 = INT64_MIN;
	static uint32_t x16 = 247840U;
	static int32_t t0 = -2064;

	t0 = ((x13%x14)/(x15<x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x45 = UINT64_MAX;
	uint64_t x46 = 513000121LLU;
	volatile int16_t x47 = -1;
	uint64_t t1 = 130149LLU;

	t1 = ((x45%x46)/(x47<x48));

	if (t1 != 192158971LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x49 = INT8_MIN;
	int64_t x50 = -30504LL;
	static int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MAX;
	volatile int64_t t2 = 20626945662LL;

	t2 = ((x49%x50)/(x51<x52));

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x57 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	int32_t x60 = -1;
	volatile int64_t t3 = -84388385818310278LL;

	t3 = ((x57%x58)/(x59<x60));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x61 = 27;
	int32_t x62 = 371;
	int16_t x63 = INT16_MIN;
	volatile int32_t t4 = -635465;

	t4 = ((x61%x62)/(x63<x64));

	if (t4 != 27) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x69 = 5U;
	static volatile int32_t t5 = 89;

	t5 = ((x69%x70)/(x71<x72));

	if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x87 = 2U;
	int32_t x88 = INT32_MAX;
	int64_t t6 = 21208LL;

	t6 = ((x85%x86)/(x87<x88));

	if (t6 != 239LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x121 = 17499950U;
	int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = 177460U;
	static volatile uint32_t x124 = 429876472U;
	uint32_t t7 = 46149069U;

	t7 = ((x121%x122)/(x123<x124));

	if (t7 != 17499950U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x125 = 1U;
	int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MIN;
	int32_t t8 = 2664;

	t8 = ((x125%x126)/(x127<x128));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x149 = -1LL;
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = -7460;
	static uint16_t x152 = 492U;
	int64_t t9 = -632705LL;

	t9 = ((x149%x150)/(x151<x152));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x165 = INT8_MAX;
	int16_t x167 = 0;
	volatile uint8_t x168 = 5U;
	volatile int32_t t10 = -265;

	t10 = ((x165%x166)/(x167<x168));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x169 = INT32_MIN;
	volatile int64_t x170 = INT64_MIN;
	static volatile uint8_t x171 = 26U;
	static volatile uint32_t x172 = 93U;
	int64_t t11 = 18237243139613LL;

	t11 = ((x169%x170)/(x171<x172));

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	int8_t x175 = -1;
	volatile int8_t x176 = INT8_MAX;

	t12 = ((x173%x174)/(x175<x176));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	int32_t x180 = -111019;
	volatile int64_t t13 = -232387527LL;

	t13 = ((x177%x178)/(x179<x180));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x198 = -15;
	uint16_t x199 = 22U;
	int32_t x200 = INT32_MAX;

	t14 = ((x197%x198)/(x199<x200));

	if (t14 != -12) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x210 = 3U;
	static int64_t x211 = INT64_MIN;
	uint8_t x212 = 0U;

	t15 = ((x209%x210)/(x211<x212));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x221 = -238;
	volatile int64_t x222 = 5135374886303LL;
	volatile uint8_t x223 = 108U;
	uint32_t x224 = 311009335U;
	int64_t t16 = -57568842059LL;

	t16 = ((x221%x222)/(x223<x224));

	if (t16 != -238LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x225 = 7040LL;
	int64_t x227 = INT64_MIN;
	int16_t x228 = -104;
	volatile int64_t t17 = 2950504483954190436LL;

	t17 = ((x225%x226)/(x227<x228));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x237 = 0;
	int8_t x239 = INT8_MIN;
	static uint16_t x240 = UINT16_MAX;
	uint32_t t18 = 1304889605U;

	t18 = ((x237%x238)/(x239<x240));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x245 = -1;
	static int8_t x246 = -6;
	static int32_t x247 = INT32_MIN;
	volatile int8_t x248 = INT8_MIN;
	int32_t t19 = -3;

	t19 = ((x245%x246)/(x247<x248));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x249 = 51789641231893LLU;
	uint16_t x250 = 1U;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -1;
	uint64_t t20 = 2197472607LLU;

	t20 = ((x249%x250)/(x251<x252));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x254 = 194U;
	volatile int64_t x255 = INT64_MIN;
	uint16_t x256 = 2882U;
	int64_t t21 = -296LL;

	t21 = ((x253%x254)/(x255<x256));

	if (t21 != -176LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x257 = 113U;
	int8_t x259 = INT8_MIN;
	int64_t x260 = -1LL;
	volatile uint64_t t22 = 429084946LLU;

	t22 = ((x257%x258)/(x259<x260));

	if (t22 != 21LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x265 = INT64_MIN;
	static uint8_t x268 = 3U;

	t23 = ((x265%x266)/(x267<x268));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MAX;
	int8_t x272 = 1;
	int32_t t24 = -320;

	t24 = ((x269%x270)/(x271<x272));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x297 = UINT32_MAX;
	volatile int8_t x298 = -1;
	uint64_t x300 = 2804949LLU;
	uint32_t t25 = 114330U;

	t25 = ((x297%x298)/(x299<x300));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x309 = 31;
	uint8_t x310 = 87U;
	volatile int32_t t26 = -5;

	t26 = ((x309%x310)/(x311<x312));

	if (t26 != 31) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x317 = -603;
	int64_t x318 = 282627061333704263LL;
	int64_t t27 = 2777LL;

	t27 = ((x317%x318)/(x319<x320));

	if (t27 != -603LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x321 = INT32_MIN;
	int32_t x322 = INT32_MAX;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = 3U;
	volatile int32_t t28 = -4561249;

	t28 = ((x321%x322)/(x323<x324));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x334 = -1LL;
	volatile int8_t x335 = INT8_MIN;

	t29 = ((x333%x334)/(x335<x336));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x337 = INT64_MIN;
	static uint16_t x338 = 5U;
	int32_t x339 = 1656923;
	uint64_t x340 = UINT64_MAX;
	volatile int64_t t30 = 22636952LL;

	t30 = ((x337%x338)/(x339<x340));

	if (t30 != -3LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x341 = -1;
	int8_t x342 = INT8_MAX;
	uint32_t x343 = 24064180U;
	static int8_t x344 = INT8_MIN;
	static volatile int32_t t31 = -16479532;

	t31 = ((x341%x342)/(x343<x344));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x361 = -45;
	static int32_t x362 = -1;
	int32_t x363 = -524289;
	int32_t x364 = -1;
	volatile int32_t t32 = 167380;

	t32 = ((x361%x362)/(x363<x364));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = -1;
	volatile int16_t x372 = -1;
	static int32_t t33 = 7;

	t33 = ((x369%x370)/(x371<x372));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x373 = INT16_MIN;
	volatile int64_t x376 = -1LL;
	int32_t t34 = -92;

	t34 = ((x373%x374)/(x375<x376));

	if (t34 != -2542) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x389 = INT8_MIN;
	uint64_t x391 = 113820696824786LLU;
	int16_t x392 = INT16_MIN;
	volatile int32_t t35 = 241147;

	t35 = ((x389%x390)/(x391<x392));

	if (t35 != -21) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x394 = UINT16_MAX;
	uint8_t x395 = 53U;
	uint16_t x396 = 93U;

	t36 = ((x393%x394)/(x395<x396));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x417 = 3333826U;
	int32_t x418 = INT32_MIN;
	uint64_t x419 = 1079LLU;
	int16_t x420 = INT16_MAX;
	uint32_t t37 = 250769528U;

	t37 = ((x417%x418)/(x419<x420));

	if (t37 != 3333826U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x429 = 0U;
	int64_t x430 = -3404472199147LL;
	int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MAX;
	volatile int64_t t38 = -26523LL;

	t38 = ((x429%x430)/(x431<x432));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x437 = INT16_MIN;
	uint32_t x438 = 1213U;
	int16_t x439 = INT16_MIN;
	volatile uint32_t t39 = 1366237487U;

	t39 = ((x437%x438)/(x439<x440));

	if (t39 != 1139U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x462 = INT8_MIN;
	int32_t x463 = -1;
	int32_t x464 = INT32_MAX;
	int64_t t40 = -104421431873946LL;

	t40 = ((x461%x462)/(x463<x464));

	if (t40 != 108LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x465 = INT32_MIN;
	uint16_t x467 = 209U;
	int32_t t41 = -4150794;

	t41 = ((x465%x466)/(x467<x468));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x469 = 5;
	uint16_t x470 = 523U;
	volatile int64_t x471 = -307209683654671LL;
	static volatile int32_t t42 = 6362;

	t42 = ((x469%x470)/(x471<x472));

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x477 = INT8_MIN;
	volatile int32_t x478 = INT32_MIN;
	uint32_t x479 = 176U;
	int16_t x480 = 15697;
	int32_t t43 = -505641861;

	t43 = ((x477%x478)/(x479<x480));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x481 = INT32_MAX;
	volatile int16_t x483 = INT16_MIN;
	int16_t x484 = INT16_MAX;
	volatile int32_t t44 = -19;

	t44 = ((x481%x482)/(x483<x484));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x485 = -639691;
	int16_t x486 = 1;
	int16_t x487 = INT16_MAX;
	static uint32_t x488 = 156285181U;
	int32_t t45 = 357374231;

	t45 = ((x485%x486)/(x487<x488));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x492 = INT32_MAX;
	volatile int32_t t46 = -19780478;

	t46 = ((x489%x490)/(x491<x492));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x505 = INT8_MIN;
	uint64_t x506 = 10715LLU;
	uint8_t x507 = UINT8_MAX;
	static uint64_t x508 = 83913715271057LLU;

	t47 = ((x505%x506)/(x507<x508));

	if (t47 != 3778LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x509 = UINT8_MAX;
	int64_t x512 = 60035995379976427LL;
	static int32_t t48 = -2;

	t48 = ((x509%x510)/(x511<x512));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x513 = -1;
	int16_t x514 = -1;
	volatile int32_t x515 = -95;
	int32_t x516 = INT32_MAX;

	t49 = ((x513%x514)/(x515<x516));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x517 = 0U;
	volatile int8_t x518 = INT8_MIN;
	int8_t x519 = -1;
	volatile int32_t t50 = -4337000;

	t50 = ((x517%x518)/(x519<x520));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x521 = INT16_MIN;
	int32_t x522 = -643705;
	static int32_t x524 = 1732869;
	volatile int32_t t51 = 29565611;

	t51 = ((x521%x522)/(x523<x524));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x525 = 14U;
	int64_t x526 = -1LL;
	int64_t t52 = 102464238LL;

	t52 = ((x525%x526)/(x527<x528));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x533 = 1346101U;
	volatile int64_t x534 = INT64_MIN;
	static uint16_t x535 = UINT16_MAX;
	volatile int64_t t53 = 2777LL;

	t53 = ((x533%x534)/(x535<x536));

	if (t53 != 1346101LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x537 = 3U;
	volatile uint64_t x538 = UINT64_MAX;
	uint64_t t54 = 2035720093875LLU;

	t54 = ((x537%x538)/(x539<x540));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x541 = UINT8_MAX;
	int16_t x544 = -918;
	int32_t t55 = -7;

	t55 = ((x541%x542)/(x543<x544));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x566 = -1;
	int8_t x568 = INT8_MIN;

	t56 = ((x565%x566)/(x567<x568));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x569 = UINT64_MAX;
	int16_t x571 = INT16_MIN;

	t57 = ((x569%x570)/(x571<x572));

	if (t57 != 3LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x578 = -1;
	int32_t x580 = -3419;
	int32_t t58 = 12;

	t58 = ((x577%x578)/(x579<x580));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x582 = INT8_MIN;
	uint64_t x583 = 6074254LLU;
	volatile int32_t x584 = INT32_MAX;
	int32_t t59 = 16321827;

	t59 = ((x581%x582)/(x583<x584));

	if (t59 != 37) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x613 = INT16_MIN;
	uint16_t x614 = UINT16_MAX;
	int16_t x615 = -71;
	int16_t x616 = -2;
	volatile int32_t t60 = -105334025;

	t60 = ((x613%x614)/(x615<x616));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x619 = -84762;
	static uint8_t x620 = UINT8_MAX;
	volatile uint64_t t61 = 2LLU;

	t61 = ((x617%x618)/(x619<x620));

	if (t61 != 6956LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x625 = 39834889;
	int16_t x626 = INT16_MIN;
	static uint16_t x628 = UINT16_MAX;
	static volatile int32_t t62 = 4809453;

	t62 = ((x625%x626)/(x627<x628));

	if (t62 != 21769) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x629 = -1;
	int64_t x630 = INT64_MIN;
	int64_t x631 = -7840491275125LL;

	t63 = ((x629%x630)/(x631<x632));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x637 = INT32_MIN;
	static int16_t x638 = -182;
	static int32_t x639 = INT32_MIN;
	volatile int32_t x640 = -1;
	volatile int32_t t64 = 546187;

	t64 = ((x637%x638)/(x639<x640));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x641 = -1;
	int64_t x642 = INT64_MIN;
	uint16_t x643 = 59U;

	t65 = ((x641%x642)/(x643<x644));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x645 = INT64_MIN;
	static int16_t x646 = -13321;
	volatile uint8_t x648 = UINT8_MAX;
	int64_t t66 = -14149520185LL;

	t66 = ((x645%x646)/(x647<x648));

	if (t66 != -4089LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x649 = INT8_MIN;
	int64_t x650 = -1LL;
	int8_t x652 = -1;
	volatile int64_t t67 = 3921336575LL;

	t67 = ((x649%x650)/(x651<x652));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x653 = 15;
	int16_t x654 = -6506;
	int32_t x655 = -102832;
	int8_t x656 = 0;
	int32_t t68 = -2261815;

	t68 = ((x653%x654)/(x655<x656));

	if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x673 = UINT8_MAX;
	int8_t x674 = INT8_MIN;
	int16_t x676 = INT16_MAX;
	volatile int32_t t69 = -15766;

	t69 = ((x673%x674)/(x675<x676));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x678 = -1LL;
	int64_t x679 = INT64_MIN;
	volatile int32_t x680 = INT32_MIN;

	t70 = ((x677%x678)/(x679<x680));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x682 = -4LL;
	static int8_t x683 = INT8_MIN;
	static uint32_t x684 = UINT32_MAX;
	int64_t t71 = 4448297494208169739LL;

	t71 = ((x681%x682)/(x683<x684));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x689 = 0;
	int32_t x690 = INT32_MIN;
	int32_t x691 = INT32_MIN;
	static int32_t t72 = -8;

	t72 = ((x689%x690)/(x691<x692));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x694 = 676;
	int32_t x695 = INT32_MIN;
	volatile int32_t t73 = 16393083;

	t73 = ((x693%x694)/(x695<x696));

	if (t73 != 647) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x697 = INT32_MIN;
	static int64_t x698 = INT64_MIN;
	int16_t x699 = INT16_MIN;
	int32_t x700 = 577;
	static volatile int64_t t74 = -458740983216424371LL;

	t74 = ((x697%x698)/(x699<x700));

	if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x721 = INT16_MAX;
	int32_t x723 = INT32_MIN;
	static volatile uint64_t x724 = UINT64_MAX;

	t75 = ((x721%x722)/(x723<x724));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x734 = INT64_MIN;
	volatile int64_t x735 = INT64_MIN;
	int8_t x736 = -1;
	volatile int64_t t76 = 12930LL;

	t76 = ((x733%x734)/(x735<x736));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x757 = INT64_MAX;
	int64_t x758 = -831035LL;
	static int8_t x759 = 49;
	int32_t x760 = INT32_MAX;
	volatile int64_t t77 = 1LL;

	t77 = ((x757%x758)/(x759<x760));

	if (t77 != 152207LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x761 = -1LL;
	uint16_t x762 = 2522U;
	uint32_t x764 = UINT32_MAX;

	t78 = ((x761%x762)/(x763<x764));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x765 = 13305U;
	int16_t x766 = INT16_MIN;
	uint64_t x767 = 261302LLU;
	static uint64_t x768 = UINT64_MAX;
	int32_t t79 = -1519730;

	t79 = ((x765%x766)/(x767<x768));

	if (t79 != 13305) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x801 = INT16_MAX;
	uint16_t x802 = UINT16_MAX;
	static volatile int64_t x803 = -69050958LL;
	int8_t x804 = INT8_MIN;
	volatile int32_t t80 = 135371204;

	t80 = ((x801%x802)/(x803<x804));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x809 = 312523LLU;
	volatile uint64_t x810 = 254650656096LLU;
	static int16_t x811 = -15;
	int8_t x812 = -1;
	static volatile uint64_t t81 = 103159998760LLU;

	t81 = ((x809%x810)/(x811<x812));

	if (t81 != 312523LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x821 = 0;
	int8_t x822 = 1;
	int64_t x823 = 3LL;
	int16_t x824 = 776;
	static volatile int32_t t82 = 0;

	t82 = ((x821%x822)/(x823<x824));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x833 = INT8_MIN;
	static int64_t x834 = -1LL;
	int32_t x835 = -1;
	static int64_t x836 = 57LL;
	static int64_t t83 = -10LL;

	t83 = ((x833%x834)/(x835<x836));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x837 = 403U;
	static uint16_t x838 = 12U;
	int16_t x839 = INT16_MIN;
	int8_t x840 = 3;
	static volatile int32_t t84 = 12;

	t84 = ((x837%x838)/(x839<x840));

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x841 = INT8_MAX;
	uint16_t x842 = UINT16_MAX;
	uint32_t x843 = 107376U;
	volatile int16_t x844 = -1;
	int32_t t85 = -3614;

	t85 = ((x841%x842)/(x843<x844));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x845 = INT32_MIN;
	uint32_t x846 = UINT32_MAX;
	uint16_t x847 = 15125U;
	int16_t x848 = INT16_MAX;
	static uint32_t t86 = 73U;

	t86 = ((x845%x846)/(x847<x848));

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x849 = 484839U;
	uint32_t x850 = UINT32_MAX;
	static int8_t x851 = -1;
	uint8_t x852 = 1U;
	uint32_t t87 = 0U;

	t87 = ((x849%x850)/(x851<x852));

	if (t87 != 484839U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x853 = 1;
	volatile uint64_t x854 = UINT64_MAX;
	int8_t x855 = 1;

	t88 = ((x853%x854)/(x855<x856));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x861 = INT32_MIN;
	int64_t x862 = -20079972LL;
	int8_t x863 = INT8_MIN;
	int32_t x864 = 125;
	int64_t t89 = 25235061704267LL;

	t89 = ((x861%x862)/(x863<x864));

	if (t89 != -19006616LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x865 = -16456433;
	static uint32_t x866 = UINT32_MAX;
	volatile uint16_t x868 = 1898U;
	uint32_t t90 = 322336933U;

	t90 = ((x865%x866)/(x867<x868));

	if (t90 != 4278510863U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x869 = 0U;
	int8_t x871 = INT8_MIN;
	int32_t t91 = -12553899;

	t91 = ((x869%x870)/(x871<x872));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x889 = 0;
	static int32_t x890 = INT32_MIN;
	static int8_t x891 = INT8_MIN;
	int64_t x892 = INT64_MAX;
	static volatile int32_t t92 = -2;

	t92 = ((x889%x890)/(x891<x892));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x893 = INT8_MAX;
	int8_t x894 = INT8_MIN;
	int8_t x895 = 0;
	volatile uint16_t x896 = UINT16_MAX;

	t93 = ((x893%x894)/(x895<x896));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x897 = INT64_MAX;
	volatile int16_t x898 = INT16_MIN;
	static int16_t x899 = INT16_MIN;
	static int64_t x900 = -24496LL;
	static int64_t t94 = -235022344LL;

	t94 = ((x897%x898)/(x899<x900));

	if (t94 != 32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x901 = -1;
	uint16_t x902 = 157U;
	int8_t x903 = -3;
	int16_t x904 = -1;
	int32_t t95 = 85137;

	t95 = ((x901%x902)/(x903<x904));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x913 = -1;
	static volatile int16_t x914 = 832;
	int16_t x915 = INT16_MIN;
	volatile int16_t x916 = 4;
	static int32_t t96 = -1945374;

	t96 = ((x913%x914)/(x915<x916));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x917 = INT64_MIN;
	static uint16_t x919 = 195U;
	uint16_t x920 = 1112U;
	int64_t t97 = 54208045341291LL;

	t97 = ((x917%x918)/(x919<x920));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x929 = 32;
	volatile int64_t x930 = -1LL;
	static int32_t x932 = -1;
	static int64_t t98 = -57LL;

	t98 = ((x929%x930)/(x931<x932));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x933 = UINT64_MAX;
	volatile int32_t x934 = INT32_MIN;
	uint32_t x935 = 12U;
	int16_t x936 = INT16_MIN;

	t99 = ((x933%x934)/(x935<x936));

	if (t99 != 2147483647LLU) { NG(); } else { ; }
	
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

