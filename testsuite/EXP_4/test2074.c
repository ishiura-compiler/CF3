#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x33 = UINT64_MAX;
int32_t t3 = INT32_MAX;
int32_t x71 = -133715;
volatile uint32_t x74 = 194331U;
int32_t t6 = 24634784;
int32_t x89 = 959993;
uint64_t x90 = 620097821165626LLU;
volatile int64_t x91 = -1LL;
int32_t x118 = -1;
int16_t x182 = -5735;
static uint32_t x185 = 1724435U;
static int64_t x187 = 3313415LL;
int8_t x188 = INT8_MIN;
int64_t x193 = 8826756526LL;
int16_t x195 = INT16_MIN;
static int16_t x201 = INT16_MAX;
int16_t x202 = -1;
uint16_t x204 = UINT16_MAX;
int32_t t16 = -14175;
int8_t x224 = 5;
uint8_t x245 = UINT8_MAX;
uint16_t x247 = UINT16_MAX;
static int32_t t19 = 35585815;
int64_t x268 = INT64_MIN;
int32_t x275 = -115240602;
static uint32_t x282 = UINT32_MAX;
int32_t x284 = 1432;
static volatile int32_t t23 = -93371985;
static volatile int64_t x300 = -3812860446LL;
int16_t x305 = 380;
static int8_t x307 = INT8_MIN;
uint64_t x308 = 226LLU;
volatile int32_t x324 = INT32_MIN;
static volatile int32_t t26 = 28;
uint8_t x325 = 5U;
static int32_t x327 = 257435;
int8_t x335 = INT8_MIN;
static int64_t x344 = INT64_MIN;
uint64_t t30 = 738017LLU;
uint32_t x349 = 25917873U;
static int32_t x379 = INT32_MIN;
static int32_t x392 = -478937;
int8_t x393 = 1;
static int16_t x395 = 0;
int32_t x396 = -602960;
int32_t t34 = -118352135;
volatile uint64_t x405 = 36622738LLU;
volatile int8_t x406 = -1;
uint64_t x407 = 20372LLU;
uint8_t x456 = 17U;
int64_t x467 = INT64_MAX;
static volatile uint32_t x468 = 3057U;
static int32_t t39 = -182825939;
static volatile int16_t x479 = 0;
int16_t x491 = INT16_MIN;
static uint16_t x494 = 24U;
uint16_t x495 = UINT16_MAX;
int32_t t42 = 112;
uint64_t x509 = 61709934LLU;
volatile int64_t x511 = -535772021348060LL;
int32_t t46 = -380776039;
int64_t x546 = -1LL;
int16_t x548 = 1;
uint32_t t48 = 624610U;
uint8_t x564 = 34U;
uint32_t t49 = UINT32_MAX;
uint32_t x572 = UINT32_MAX;
volatile int64_t x599 = 6825631502LL;
volatile int32_t t53 = -1575;
volatile uint32_t t54 = UINT32_MAX;
int64_t x620 = -1LL;
volatile int64_t x626 = INT64_MAX;
volatile int32_t t57 = 0;
uint32_t x630 = 331221U;
uint64_t x632 = 222668516603267316LLU;
int32_t x636 = -1;
int64_t x651 = INT64_MAX;
volatile int64_t x668 = 3820009LL;
int16_t x671 = INT16_MAX;
uint8_t x672 = 3U;
uint32_t t66 = 6705780U;
static uint64_t t67 = UINT64_MAX;
static int8_t x710 = 0;
volatile int8_t x723 = 43;
uint16_t x737 = 3435U;
int8_t x745 = 0;
uint64_t x770 = 4771LLU;
int32_t t75 = -4;
static volatile int64_t t76 = INT64_MAX;
int32_t x834 = 21900;
static volatile uint32_t x836 = 7737962U;
static volatile uint8_t x841 = UINT8_MAX;
volatile int64_t x859 = INT64_MIN;
volatile uint64_t t81 = 10478262557LLU;
uint8_t x873 = 21U;
volatile int32_t t82 = 535;
uint64_t x877 = 3888287554001845119LLU;
volatile int8_t x879 = -1;
int32_t x903 = INT32_MIN;
volatile int32_t t87 = -640166650;
uint8_t x941 = UINT8_MAX;
uint16_t x954 = 9285U;
uint32_t x955 = UINT32_MAX;
uint32_t x956 = 239U;
uint8_t x969 = 42U;
int32_t x1015 = INT32_MIN;
static int64_t x1016 = INT64_MIN;
uint64_t t94 = 6113840LLU;
int8_t x1032 = -1;
uint16_t x1037 = UINT16_MAX;
volatile uint8_t x1039 = 0U;
volatile int8_t x1070 = INT8_MIN;
int32_t x1073 = INT32_MAX;
int64_t x1076 = INT64_MIN;


void f0(void) {
	int32_t x5 = INT32_MAX;
	int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	int64_t x8 = 23111973207LL;
	int32_t t0 = INT32_MAX;

	t0 = (x5>>(x6/(x7^x8)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x25 = 1U;
	int16_t x26 = INT16_MIN;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t x28 = INT32_MAX;
	static volatile int32_t t1 = -133;

	t1 = (x25>>(x26/(x27^x28)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x34 = INT8_MAX;
	int32_t x35 = INT32_MAX;
	uint64_t x36 = 5706849311722785LLU;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x33>>(x34/(x35^x36)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x53 = INT32_MAX;
	uint32_t x54 = 1U;
	int8_t x55 = 1;
	uint16_t x56 = UINT16_MAX;

	t3 = (x53>>(x54/(x55^x56)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x65 = 62LLU;
	int8_t x66 = -1;
	uint8_t x67 = 49U;
	int8_t x68 = INT8_MIN;
	static volatile uint64_t t4 = 96840917352LLU;

	t4 = (x65>>(x66/(x67^x68)));

	if (t4 != 62LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x69 = 801U;
	volatile int16_t x70 = -1;
	int16_t x72 = 25;
	volatile int32_t t5 = 64741119;

	t5 = (x69>>(x70/(x71^x72)));

	if (t5 != 801) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x73 = 38;
	int32_t x75 = 7365504;
	int64_t x76 = INT64_MAX;

	t6 = (x73>>(x74/(x75^x76)));

	if (t6 != 38) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x92 = 1533U;
	int32_t t7 = -2;

	t7 = (x89>>(x90/(x91^x92)));

	if (t7 != 959993) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x93 = 0;
	volatile uint64_t x94 = 8676927642822LLU;
	static int16_t x95 = INT16_MAX;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t8 = -359441056;

	t8 = (x93>>(x94/(x95^x96)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x101 = INT16_MAX;
	uint8_t x102 = 6U;
	int8_t x103 = -61;
	uint8_t x104 = 7U;
	static volatile int32_t t9 = -92;

	t9 = (x101>>(x102/(x103^x104)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MAX;
	static int8_t x111 = -4;
	volatile uint8_t x112 = UINT8_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x109>>(x110/(x111^x112)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x117 = 7LL;
	int64_t x119 = -1LL;
	int16_t x120 = INT16_MIN;
	volatile int64_t t11 = 1057810030158703048LL;

	t11 = (x117>>(x118/(x119^x120)));

	if (t11 != 7LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x181 = UINT32_MAX;
	static int16_t x183 = INT16_MIN;
	int16_t x184 = 754;
	uint32_t t12 = UINT32_MAX;

	t12 = (x181>>(x182/(x183^x184)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x186 = UINT8_MAX;
	volatile uint32_t t13 = 7U;

	t13 = (x185>>(x186/(x187^x188)));

	if (t13 != 1724435U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x194 = INT16_MIN;
	volatile uint8_t x196 = UINT8_MAX;
	volatile int64_t t14 = -44325338533408LL;

	t14 = (x193>>(x194/(x195^x196)));

	if (t14 != 4413378263LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x197 = 14;
	uint64_t x198 = UINT64_MAX;
	uint64_t x199 = UINT64_MAX;
	int64_t x200 = 1LL;
	volatile int32_t t15 = -15828346;

	t15 = (x197>>(x198/(x199^x200)));

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x203 = INT64_MIN;

	t16 = (x201>>(x202/(x203^x204)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x221 = INT16_MAX;
	int16_t x222 = 0;
	int16_t x223 = INT16_MIN;
	volatile int32_t t17 = 110617;

	t17 = (x221>>(x222/(x223^x224)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x233 = INT32_MAX;
	static volatile int8_t x234 = -3;
	int8_t x235 = 24;
	int32_t x236 = 893977214;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x233>>(x234/(x235^x236)));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x246 = 0;
	int32_t x248 = INT32_MIN;

	t19 = (x245>>(x246/(x247^x248)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x265 = 288LLU;
	volatile int64_t x266 = 25225LL;
	int16_t x267 = -375;
	uint64_t t20 = 507346533543LLU;

	t20 = (x265>>(x266/(x267^x268)));

	if (t20 != 288LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x269 = 27U;
	uint8_t x270 = 44U;
	static int16_t x271 = 16;
	uint16_t x272 = 1U;
	volatile uint32_t t21 = 0U;

	t21 = (x269>>(x270/(x271^x272)));

	if (t21 != 6U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x273 = 1U;
	volatile uint8_t x274 = 15U;
	uint16_t x276 = UINT16_MAX;
	static volatile int32_t t22 = -2873392;

	t22 = (x273>>(x274/(x275^x276)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x281 = 28U;
	volatile int8_t x283 = -1;

	t23 = (x281>>(x282/(x283^x284)));

	if (t23 != 14) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x297 = 10U;
	uint16_t x298 = 3U;
	static int16_t x299 = -5399;
	volatile int32_t t24 = -231943560;

	t24 = (x297>>(x298/(x299^x300)));

	if (t24 != 10) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x306 = 65U;
	volatile int32_t t25 = 871;

	t25 = (x305>>(x306/(x307^x308)));

	if (t25 != 380) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x321 = UINT8_MAX;
	static uint16_t x322 = 2006U;
	uint32_t x323 = 1185617U;

	t26 = (x321>>(x322/(x323^x324)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x326 = 3U;
	int64_t x328 = 10LL;
	static int32_t t27 = 1841976;

	t27 = (x325>>(x326/(x327^x328)));

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x333 = UINT16_MAX;
	uint8_t x334 = 3U;
	static int64_t x336 = INT64_MIN;
	volatile int32_t t28 = 12464;

	t28 = (x333>>(x334/(x335^x336)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x337 = UINT64_MAX;
	uint64_t x338 = 491906LLU;
	int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x337>>(x338/(x339^x340)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x341 = 1LLU;
	int32_t x342 = 480726;
	int8_t x343 = INT8_MIN;

	t30 = (x341>>(x342/(x343^x344)));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x350 = 3411U;
	static volatile uint64_t x351 = 422719805692525366LLU;
	int32_t x352 = -1;
	volatile uint32_t t31 = 17869U;

	t31 = (x349>>(x350/(x351^x352)));

	if (t31 != 25917873U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x377 = 142960;
	uint16_t x378 = 5690U;
	volatile int8_t x380 = 39;
	int32_t t32 = 5;

	t32 = (x377>>(x378/(x379^x380)));

	if (t32 != 142960) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x389 = 17759458876579646LLU;
	uint32_t x390 = 429386U;
	int32_t x391 = -14;
	static volatile uint64_t t33 = 597483590978875726LLU;

	t33 = (x389>>(x390/(x391^x392)));

	if (t33 != 17759458876579646LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x394 = -691597;

	t34 = (x393>>(x394/(x395^x396)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x408 = -1LL;
	volatile uint64_t t35 = 27643194722076401LLU;

	t35 = (x405>>(x406/(x407^x408)));

	if (t35 != 18311369LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x413 = 0U;
	int8_t x414 = -12;
	int32_t x415 = 187411676;
	uint8_t x416 = 1U;
	int32_t t36 = 4905;

	t36 = (x413>>(x414/(x415^x416)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x421 = 96U;
	int16_t x422 = 15985;
	uint64_t x423 = 281788639LLU;
	uint8_t x424 = 118U;
	volatile int32_t t37 = -3515;

	t37 = (x421>>(x422/(x423^x424)));

	if (t37 != 96) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x453 = 0U;
	static volatile uint8_t x454 = UINT8_MAX;
	uint32_t x455 = UINT32_MAX;
	static volatile int32_t t38 = 11701;

	t38 = (x453>>(x454/(x455^x456)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x465 = 13U;
	uint16_t x466 = 1532U;

	t39 = (x465>>(x466/(x467^x468)));

	if (t39 != 13) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x477 = 613100U;
	volatile uint8_t x478 = 0U;
	uint16_t x480 = 456U;
	uint32_t t40 = 11957U;

	t40 = (x477>>(x478/(x479^x480)));

	if (t40 != 613100U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x489 = UINT32_MAX;
	static volatile uint16_t x490 = 1189U;
	uint8_t x492 = 2U;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x489>>(x490/(x491^x492)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x493 = 3U;
	int16_t x496 = -1679;

	t42 = (x493>>(x494/(x495^x496)));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x510 = 2U;
	static volatile uint32_t x512 = UINT32_MAX;
	uint64_t t43 = 6796115266870713LLU;

	t43 = (x509>>(x510/(x511^x512)));

	if (t43 != 61709934LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x513 = INT64_MAX;
	volatile int16_t x514 = 2;
	uint32_t x515 = 16114U;
	static volatile int32_t x516 = 131532828;
	static volatile int64_t t44 = INT64_MAX;

	t44 = (x513>>(x514/(x515^x516)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x533 = 60254U;
	int8_t x534 = INT8_MAX;
	static uint64_t x535 = 730616LLU;
	int16_t x536 = INT16_MIN;
	static uint32_t t45 = 125722924U;

	t45 = (x533>>(x534/(x535^x536)));

	if (t45 != 60254U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x537 = 1;
	uint16_t x538 = UINT16_MAX;
	int32_t x539 = INT32_MIN;
	int32_t x540 = -694007;

	t46 = (x537>>(x538/(x539^x540)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x545 = UINT64_MAX;
	static uint16_t x547 = 31475U;
	uint64_t t47 = UINT64_MAX;

	t47 = (x545>>(x546/(x547^x548)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x557 = 3U;
	volatile uint16_t x558 = 2U;
	volatile int16_t x559 = INT16_MAX;
	volatile int8_t x560 = INT8_MIN;

	t48 = (x557>>(x558/(x559^x560)));

	if (t48 != 3U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x561 = UINT32_MAX;
	int16_t x562 = -19;
	uint8_t x563 = UINT8_MAX;

	t49 = (x561>>(x562/(x563^x564)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x565 = 110;
	static int16_t x566 = -1;
	static int16_t x567 = INT16_MIN;
	int32_t x568 = INT32_MIN;
	static int32_t t50 = 13116;

	t50 = (x565>>(x566/(x567^x568)));

	if (t50 != 110) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x569 = UINT32_MAX;
	static int8_t x570 = -1;
	uint8_t x571 = 58U;
	volatile uint32_t t51 = 559U;

	t51 = (x569>>(x570/(x571^x572)));

	if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x577 = INT32_MAX;
	uint16_t x578 = 226U;
	uint64_t x579 = 983LLU;
	volatile int16_t x580 = INT16_MAX;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x577>>(x578/(x579^x580)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x597 = 829U;
	static int32_t x598 = -1;
	volatile int32_t x600 = 18103110;

	t53 = (x597>>(x598/(x599^x600)));

	if (t53 != 829) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x601 = UINT32_MAX;
	int32_t x602 = INT32_MAX;
	int64_t x603 = INT64_MAX;
	uint32_t x604 = 2062007U;

	t54 = (x601>>(x602/(x603^x604)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x609 = INT64_MAX;
	volatile int16_t x610 = -1;
	static int32_t x611 = INT32_MIN;
	int64_t x612 = INT64_MIN;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x609>>(x610/(x611^x612)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x617 = INT16_MAX;
	int8_t x618 = INT8_MIN;
	int8_t x619 = INT8_MAX;
	int32_t t56 = 1;

	t56 = (x617>>(x618/(x619^x620)));

	if (t56 != 16383) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x625 = INT8_MAX;
	volatile uint64_t x627 = UINT64_MAX;
	volatile int64_t x628 = INT64_MIN;

	t57 = (x625>>(x626/(x627^x628)));

	if (t57 != 63) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x629 = 1544943197LLU;
	int16_t x631 = INT16_MIN;
	static volatile uint64_t t58 = 4202820104LLU;

	t58 = (x629>>(x630/(x631^x632)));

	if (t58 != 1544943197LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x633 = INT16_MAX;
	int64_t x634 = -1LL;
	int64_t x635 = INT64_MIN;
	volatile int32_t t59 = 175733413;

	t59 = (x633>>(x634/(x635^x636)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x641 = 9134;
	uint8_t x642 = 1U;
	static int16_t x643 = INT16_MIN;
	static int32_t x644 = -541;
	volatile int32_t t60 = 714960;

	t60 = (x641>>(x642/(x643^x644)));

	if (t60 != 9134) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x649 = 70U;
	uint8_t x650 = 19U;
	int16_t x652 = 1;
	int32_t t61 = -149;

	t61 = (x649>>(x650/(x651^x652)));

	if (t61 != 70) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x653 = INT16_MAX;
	uint16_t x654 = 100U;
	static uint16_t x655 = UINT16_MAX;
	int8_t x656 = INT8_MIN;
	int32_t t62 = 66615590;

	t62 = (x653>>(x654/(x655^x656)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x657 = 424LLU;
	volatile int8_t x658 = 1;
	static int64_t x659 = INT64_MIN;
	volatile int32_t x660 = INT32_MIN;
	uint64_t t63 = 173727146183LLU;

	t63 = (x657>>(x658/(x659^x660)));

	if (t63 != 424LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x665 = 0;
	int8_t x666 = -1;
	uint32_t x667 = 1872U;
	volatile int32_t t64 = -114;

	t64 = (x665>>(x666/(x667^x668)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x669 = 3U;
	int64_t x670 = -1LL;
	volatile int32_t t65 = -4392570;

	t65 = (x669>>(x670/(x671^x672)));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x697 = 13U;
	volatile int8_t x698 = -1;
	volatile int32_t x699 = INT32_MAX;
	static int64_t x700 = -1LL;

	t66 = (x697>>(x698/(x699^x700)));

	if (t66 != 13U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x701 = UINT64_MAX;
	static int32_t x702 = 7735413;
	uint64_t x703 = 3301712625092085LLU;
	int8_t x704 = INT8_MAX;

	t67 = (x701>>(x702/(x703^x704)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x705 = INT16_MAX;
	int64_t x706 = 52753LL;
	static int32_t x707 = INT32_MAX;
	static volatile uint64_t x708 = UINT64_MAX;
	volatile int32_t t68 = -15;

	t68 = (x705>>(x706/(x707^x708)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x709 = 106179651U;
	volatile int16_t x711 = -1;
	static volatile int64_t x712 = INT64_MIN;
	volatile uint32_t t69 = 116532U;

	t69 = (x709>>(x710/(x711^x712)));

	if (t69 != 106179651U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x721 = UINT16_MAX;
	int32_t x722 = INT32_MIN;
	volatile int64_t x724 = INT64_MIN;
	volatile int32_t t70 = 33737;

	t70 = (x721>>(x722/(x723^x724)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x738 = -125;
	int32_t x739 = 1;
	int16_t x740 = INT16_MAX;
	volatile int32_t t71 = 170;

	t71 = (x737>>(x738/(x739^x740)));

	if (t71 != 3435) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x741 = 2497U;
	uint8_t x742 = 38U;
	int32_t x743 = 186105714;
	static int64_t x744 = INT64_MAX;
	static uint32_t t72 = 1U;

	t72 = (x741>>(x742/(x743^x744)));

	if (t72 != 2497U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x746 = 35U;
	int16_t x747 = INT16_MIN;
	static uint16_t x748 = 7890U;
	int32_t t73 = 635259521;

	t73 = (x745>>(x746/(x747^x748)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x765 = UINT32_MAX;
	uint32_t x766 = 547369U;
	int64_t x767 = INT64_MIN;
	uint16_t x768 = 249U;
	uint32_t t74 = UINT32_MAX;

	t74 = (x765>>(x766/(x767^x768)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x769 = 845;
	int16_t x771 = INT16_MIN;
	volatile int16_t x772 = -1;

	t75 = (x769>>(x770/(x771^x772)));

	if (t75 != 845) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x797 = INT64_MAX;
	int8_t x798 = 23;
	volatile uint8_t x799 = 0U;
	int64_t x800 = 986477661917LL;

	t76 = (x797>>(x798/(x799^x800)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x809 = UINT16_MAX;
	static uint16_t x810 = UINT16_MAX;
	uint64_t x811 = 31268718717779346LLU;
	static int64_t x812 = -395345LL;
	int32_t t77 = 109106389;

	t77 = (x809>>(x810/(x811^x812)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x833 = 13U;
	int8_t x835 = -3;
	int32_t t78 = -134;

	t78 = (x833>>(x834/(x835^x836)));

	if (t78 != 13) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x842 = 1;
	static volatile uint16_t x843 = 29960U;
	static uint32_t x844 = 543119U;
	volatile int32_t t79 = -9702729;

	t79 = (x841>>(x842/(x843^x844)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x845 = 803U;
	int64_t x846 = INT64_MIN;
	int64_t x847 = INT64_MIN;
	static int32_t x848 = 21643518;
	static uint32_t t80 = 136594725U;

	t80 = (x845>>(x846/(x847^x848)));

	if (t80 != 401U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x857 = 0LLU;
	volatile int32_t x858 = -18634239;
	int32_t x860 = -5946534;

	t81 = (x857>>(x858/(x859^x860)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x874 = -3759853723276532279LL;
	int64_t x875 = INT64_MAX;
	int16_t x876 = INT16_MIN;

	t82 = (x873>>(x874/(x875^x876)));

	if (t82 != 21) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x878 = -1LL;
	int16_t x880 = -6054;
	uint64_t t83 = 23214844093391285LLU;

	t83 = (x877>>(x878/(x879^x880)));

	if (t83 != 3888287554001845119LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x881 = 87255;
	int64_t x882 = -365454624046268LL;
	volatile int64_t x883 = INT64_MIN;
	int16_t x884 = -597;
	volatile int32_t t84 = -1;

	t84 = (x881>>(x882/(x883^x884)));

	if (t84 != 87255) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x901 = 0;
	int32_t x902 = -1;
	uint16_t x904 = 1529U;
	volatile int32_t t85 = 2;

	t85 = (x901>>(x902/(x903^x904)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x905 = 343LLU;
	uint16_t x906 = 2U;
	int64_t x907 = 2722692LL;
	int32_t x908 = -400716243;
	static volatile uint64_t t86 = 340684379403549LLU;

	t86 = (x905>>(x906/(x907^x908)));

	if (t86 != 343LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x933 = 2002;
	volatile int32_t x934 = INT32_MAX;
	int64_t x935 = INT64_MIN;
	static volatile uint16_t x936 = UINT16_MAX;

	t87 = (x933>>(x934/(x935^x936)));

	if (t87 != 2002) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x942 = 0;
	int8_t x943 = INT8_MAX;
	uint32_t x944 = 30759332U;
	volatile int32_t t88 = 138;

	t88 = (x941>>(x942/(x943^x944)));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x953 = INT16_MAX;
	int32_t t89 = 121;

	t89 = (x953>>(x954/(x955^x956)));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x970 = 2U;
	uint8_t x971 = 51U;
	int16_t x972 = INT16_MIN;
	int32_t t90 = -191367459;

	t90 = (x969>>(x970/(x971^x972)));

	if (t90 != 42) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x973 = UINT32_MAX;
	int64_t x974 = -1LL;
	volatile int16_t x975 = -2994;
	int16_t x976 = 38;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x973>>(x974/(x975^x976)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x997 = INT64_MAX;
	static volatile int8_t x998 = 0;
	uint16_t x999 = 4217U;
	volatile int8_t x1000 = 0;
	volatile int64_t t92 = INT64_MAX;

	t92 = (x997>>(x998/(x999^x1000)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x1013 = 3399U;
	volatile int64_t x1014 = -62552LL;
	int32_t t93 = 16459662;

	t93 = (x1013>>(x1014/(x1015^x1016)));

	if (t93 != 3399) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1017 = 27610944803564118LLU;
	volatile uint32_t x1018 = UINT32_MAX;
	static int32_t x1019 = -1;
	int64_t x1020 = INT64_MAX;

	t94 = (x1017>>(x1018/(x1019^x1020)));

	if (t94 != 27610944803564118LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1029 = 1U;
	int32_t x1030 = -1;
	uint64_t x1031 = 8709488852975336415LLU;
	volatile uint32_t t95 = 119U;

	t95 = (x1029>>(x1030/(x1031^x1032)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x1038 = INT8_MIN;
	uint64_t x1040 = UINT64_MAX;
	static int32_t t96 = 33;

	t96 = (x1037>>(x1038/(x1039^x1040)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1045 = UINT64_MAX;
	uint8_t x1046 = 2U;
	int32_t x1047 = INT32_MAX;
	uint32_t x1048 = 25765U;
	uint64_t t97 = UINT64_MAX;

	t97 = (x1045>>(x1046/(x1047^x1048)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1069 = 512868394U;
	static int32_t x1071 = INT32_MAX;
	int8_t x1072 = -3;
	static volatile uint32_t t98 = 19874482U;

	t98 = (x1069>>(x1070/(x1071^x1072)));

	if (t98 != 512868394U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x1074 = UINT64_MAX;
	volatile uint64_t x1075 = 275620650039838185LLU;
	volatile int32_t t99 = -6643;

	t99 = (x1073>>(x1074/(x1075^x1076)));

	if (t99 != 1073741823) { NG(); } else { ; }
	
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

