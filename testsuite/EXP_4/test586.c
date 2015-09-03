#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
uint32_t x2 = 48965U;
uint8_t x12 = 98U;
int8_t x13 = INT8_MIN;
int16_t x17 = -1;
uint32_t t3 = 747962638U;
volatile int8_t x24 = INT8_MAX;
uint32_t x49 = UINT32_MAX;
static int64_t x50 = 8LL;
volatile int64_t t5 = 441LL;
static volatile int64_t t6 = 2921583LL;
uint64_t x99 = 4LLU;
volatile int8_t x100 = -21;
uint64_t x101 = 1488786513190770076LLU;
uint16_t x104 = 244U;
volatile int16_t x107 = 140;
uint64_t x130 = 194858605969695LLU;
int32_t x131 = INT32_MAX;
static volatile int16_t x133 = INT16_MAX;
int32_t x149 = INT32_MAX;
uint64_t x155 = 133040LLU;
int32_t x171 = INT32_MAX;
int32_t x179 = -244;
volatile int8_t x180 = INT8_MIN;
volatile uint32_t t20 = 129U;
volatile uint32_t x290 = UINT32_MAX;
uint8_t x292 = UINT8_MAX;
static volatile int8_t x316 = INT8_MIN;
static int64_t t32 = -23LL;
uint16_t x349 = 60U;
volatile int8_t x350 = 1;
volatile int32_t t33 = 168909647;
static uint64_t t34 = 13845967LLU;
uint64_t x432 = UINT64_MAX;
volatile int32_t t39 = -16804170;
int32_t t41 = 491;
static int8_t x471 = INT8_MAX;
uint64_t x489 = 258679778339273075LLU;
volatile int32_t x490 = 758303582;
uint32_t x521 = UINT32_MAX;
int8_t x539 = INT8_MIN;
int16_t x557 = -337;
static volatile uint8_t x558 = 1U;
int32_t x562 = INT32_MAX;
static uint16_t x564 = UINT16_MAX;
volatile int32_t t50 = 7314642;
uint64_t x582 = 3829645589288LLU;
int32_t x604 = INT32_MIN;
static int64_t x605 = 4878LL;
static uint16_t x606 = 1U;
int64_t t53 = -32383488809938269LL;
uint64_t x621 = 7739540241092425LLU;
volatile int64_t x624 = -232109243513LL;
int64_t x635 = INT64_MAX;
int64_t x636 = INT64_MIN;
uint16_t x658 = 148U;
int8_t x663 = -1;
volatile uint64_t t59 = 124150565LLU;
static uint32_t x727 = 2933U;
uint32_t t65 = 10121870U;
uint8_t x762 = 5U;
uint8_t x775 = UINT8_MAX;
volatile int8_t x843 = 1;
uint16_t x861 = UINT16_MAX;
static uint64_t x897 = 6957477LLU;
uint32_t x898 = 12770U;
int32_t x899 = INT32_MIN;
uint16_t x918 = UINT16_MAX;
int64_t x957 = -1LL;
static int64_t t76 = 24167107952LL;
uint32_t x961 = 447282776U;
volatile int8_t x964 = -1;
volatile int64_t t77 = -1338254339LL;
int8_t x965 = -28;
static int16_t x969 = -14;
volatile int32_t t79 = 733220402;
uint64_t x974 = 119721288145515366LLU;
uint32_t x976 = UINT32_MAX;
int16_t x1017 = INT16_MIN;
int8_t x1019 = INT8_MAX;
uint8_t x1034 = 12U;
volatile int32_t x1036 = INT32_MIN;
volatile int32_t t82 = -1276270;
volatile int16_t x1060 = INT16_MIN;
static int64_t t83 = -21LL;
int16_t x1087 = -81;
uint64_t t86 = 24479173225980916LLU;
volatile int32_t x1167 = 2456488;
int8_t x1170 = INT8_MAX;
static int16_t x1171 = -1;
volatile int64_t t92 = -4029996332LL;
static int32_t x1198 = 6191;
int32_t x1199 = -1;
int64_t t98 = -528614545LL;
volatile uint16_t x1229 = 11779U;
static int16_t x1230 = 3514;


void f0(void) {
	int8_t x3 = INT8_MIN;
	volatile uint16_t x4 = 2187U;
	uint32_t t0 = 12235U;

	t0 = (x1+(x2>>(x3/x4)));

	if (t0 != 48837U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 51U;
	int8_t x11 = -1;
	int32_t t1 = -32407850;

	t1 = (x9+(x10>>(x11/x12)));

	if (t1 != 306) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = UINT8_MAX;
	static volatile uint16_t x15 = UINT16_MAX;
	int32_t x16 = INT32_MIN;
	static int32_t t2 = -20;

	t2 = (x13+(x14>>(x15/x16)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = -24;
	uint32_t x20 = UINT32_MAX;

	t3 = (x17+(x18>>(x19/x20)));

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int64_t x22 = 30074353460LL;
	uint16_t x23 = 3U;
	int64_t t4 = 4LL;

	t4 = (x21+(x22>>(x23/x24)));

	if (t4 != 30074418995LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x51 = 72685U;
	int16_t x52 = 9064;

	t5 = (x49+(x50>>(x51/x52)));

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x57 = 622217LL;
	static int8_t x58 = 30;
	volatile int8_t x59 = 13;
	static int8_t x60 = -28;

	t6 = (x57+(x58>>(x59/x60)));

	if (t6 != 622247LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x65 = INT8_MIN;
	int32_t x66 = INT32_MAX;
	uint16_t x67 = 9U;
	uint32_t x68 = UINT32_MAX;
	static volatile int32_t t7 = -3;

	t7 = (x65+(x66>>(x67/x68)));

	if (t7 != 2147483519) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x85 = 728;
	static uint32_t x86 = 13373618U;
	static volatile uint16_t x87 = 569U;
	static int16_t x88 = INT16_MIN;
	volatile uint32_t t8 = 127368U;

	t8 = (x85+(x86>>(x87/x88)));

	if (t8 != 13374346U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x97 = INT64_MIN;
	uint8_t x98 = UINT8_MAX;
	volatile int64_t t9 = -44393562116LL;

	t9 = (x97+(x98>>(x99/x100)));

	if (t9 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x102 = 15U;
	uint16_t x103 = 172U;
	uint64_t t10 = 19LLU;

	t10 = (x101+(x102>>(x103/x104)));

	if (t10 != 1488786513190770091LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x105 = INT64_MIN;
	uint64_t x106 = 1779151200LLU;
	static int32_t x108 = -3516682;
	static volatile uint64_t t11 = 1089876112592187763LLU;

	t11 = (x105+(x106>>(x107/x108)));

	if (t11 != 9223372038633927008LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x113 = 25LLU;
	int16_t x114 = INT16_MAX;
	volatile int64_t x115 = 131323LL;
	int64_t x116 = INT64_MIN;
	static uint64_t t12 = 9861486368LLU;

	t12 = (x113+(x114>>(x115/x116)));

	if (t12 != 32792LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x129 = INT64_MIN;
	int64_t x132 = INT64_MIN;
	uint64_t t13 = 92LLU;

	t13 = (x129+(x130>>(x131/x132)));

	if (t13 != 9223566895460745503LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x134 = 14240;
	static int8_t x135 = INT8_MIN;
	volatile int64_t x136 = INT64_MIN;
	volatile int32_t t14 = 7959;

	t14 = (x133+(x134>>(x135/x136)));

	if (t14 != 47007) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x150 = 0;
	int8_t x151 = INT8_MIN;
	static int32_t x152 = INT32_MAX;
	int32_t t15 = INT32_MAX;

	t15 = (x149+(x150>>(x151/x152)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x153 = 26;
	uint64_t x154 = UINT64_MAX;
	uint32_t x156 = 3936U;
	static uint64_t t16 = 850LLU;

	t16 = (x153+(x154>>(x155/x156)));

	if (t16 != 2147483673LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MAX;
	uint64_t x167 = UINT64_MAX;
	volatile int32_t x168 = INT32_MIN;
	volatile int64_t t17 = 228LL;

	t17 = (x165+(x166>>(x167/x168)));

	if (t17 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x169 = -1;
	static uint8_t x170 = UINT8_MAX;
	int32_t x172 = INT32_MIN;
	volatile int32_t t18 = -1122572;

	t18 = (x169+(x170>>(x171/x172)));

	if (t18 != 254) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x177 = 5912LL;
	uint32_t x178 = UINT32_MAX;
	volatile int64_t t19 = -17022LL;

	t19 = (x177+(x178>>(x179/x180)));

	if (t19 != 2147489559LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x217 = 1;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = INT8_MAX;
	uint64_t x220 = UINT64_MAX;

	t20 = (x217+(x218>>(x219/x220)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x221 = -1LL;
	static int16_t x222 = INT16_MAX;
	static int16_t x223 = -1;
	static int32_t x224 = -65024;
	int64_t t21 = -657196LL;

	t21 = (x221+(x222>>(x223/x224)));

	if (t21 != 32766LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x249 = 166LLU;
	uint64_t x250 = 3LLU;
	uint16_t x251 = 43U;
	uint64_t x252 = 648LLU;
	uint64_t t22 = 265596232190LLU;

	t22 = (x249+(x250>>(x251/x252)));

	if (t22 != 169LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x265 = INT16_MAX;
	volatile int8_t x266 = INT8_MAX;
	volatile int16_t x267 = -1;
	int64_t x268 = 8233240901366LL;
	volatile int32_t t23 = -9;

	t23 = (x265+(x266>>(x267/x268)));

	if (t23 != 32894) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x281 = -22711036LL;
	uint32_t x282 = 1U;
	uint32_t x283 = 3223923U;
	static int32_t x284 = 3037683;
	int64_t t24 = 1LL;

	t24 = (x281+(x282>>(x283/x284)));

	if (t24 != -22711036LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x289 = -1LL;
	int16_t x291 = 25;
	static volatile int64_t t25 = -1LL;

	t25 = (x289+(x290>>(x291/x292)));

	if (t25 != 4294967294LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = 1;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t26 = -17977;

	t26 = (x297+(x298>>(x299/x300)));

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = 78LLU;
	static int64_t x303 = 500LL;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t27 = 433763LLU;

	t27 = (x301+(x302>>(x303/x304)));

	if (t27 != 18446744071562068046LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x309 = 3466LL;
	static uint32_t x310 = 1405734U;
	static uint8_t x311 = 1U;
	int64_t x312 = -941154188LL;
	static volatile int64_t t28 = -15882LL;

	t28 = (x309+(x310>>(x311/x312)));

	if (t28 != 1409200LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x313 = 1;
	static uint8_t x314 = 3U;
	volatile uint16_t x315 = 5U;
	volatile int32_t t29 = -3994;

	t29 = (x313+(x314>>(x315/x316)));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x321 = INT16_MAX;
	static volatile uint16_t x322 = 112U;
	volatile int16_t x323 = -1;
	uint8_t x324 = 2U;
	volatile int32_t t30 = -375655997;

	t30 = (x321+(x322>>(x323/x324)));

	if (t30 != 32879) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x329 = INT64_MIN;
	static uint32_t x330 = 10988U;
	static int16_t x331 = 63;
	uint8_t x332 = 6U;
	volatile int64_t t31 = 43207641515511LL;

	t31 = (x329+(x330>>(x331/x332)));

	if (t31 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x337 = UINT32_MAX;
	int64_t x338 = INT64_MAX;
	int32_t x339 = INT32_MIN;
	volatile int32_t x340 = INT32_MIN;

	t32 = (x337+(x338>>(x339/x340)));

	if (t32 != 4611686022722355198LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x351 = INT32_MAX;
	static int32_t x352 = INT32_MAX;

	t33 = (x349+(x350>>(x351/x352)));

	if (t33 != 60) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x365 = 6;
	static uint64_t x366 = 52544LLU;
	static int64_t x367 = -1LL;
	int64_t x368 = -1LL;

	t34 = (x365+(x366>>(x367/x368)));

	if (t34 != 26278LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x369 = 1488U;
	uint32_t x370 = 3691U;
	int32_t x371 = 23;
	int32_t x372 = INT32_MIN;
	volatile uint32_t t35 = 1015U;

	t35 = (x369+(x370>>(x371/x372)));

	if (t35 != 5179U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x405 = INT64_MAX;
	static uint64_t x406 = 1500LLU;
	static int8_t x407 = -1;
	uint32_t x408 = 1583099938U;
	volatile uint64_t t36 = 295LLU;

	t36 = (x405+(x406>>(x407/x408)));

	if (t36 != 9223372036854776182LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x409 = INT32_MIN;
	static uint64_t x410 = 520650696628LLU;
	uint8_t x411 = 87U;
	int32_t x412 = INT32_MAX;
	static volatile uint64_t t37 = 871234901013080071LLU;

	t37 = (x409+(x410>>(x411/x412)));

	if (t37 != 518503212980LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x417 = 68016815LLU;
	int16_t x418 = 20;
	static volatile int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	uint64_t t38 = 1099LLU;

	t38 = (x417+(x418>>(x419/x420)));

	if (t38 != 68016825LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x429 = -506532;
	static volatile int32_t x430 = INT32_MAX;
	int32_t x431 = INT32_MAX;

	t39 = (x429+(x430>>(x431/x432)));

	if (t39 != 2146977115) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x457 = 193111321757428665LLU;
	uint16_t x458 = 1U;
	volatile int16_t x459 = 0;
	int64_t x460 = -1LL;
	volatile uint64_t t40 = 39LLU;

	t40 = (x457+(x458>>(x459/x460)));

	if (t40 != 193111321757428666LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x465 = INT32_MIN;
	int32_t x466 = 619;
	int32_t x467 = -1;
	int8_t x468 = INT8_MIN;

	t41 = (x465+(x466>>(x467/x468)));

	if (t41 != -2147483029) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x469 = 0U;
	volatile uint32_t x470 = 41U;
	int16_t x472 = INT16_MIN;
	volatile uint32_t t42 = 22U;

	t42 = (x469+(x470>>(x471/x472)));

	if (t42 != 41U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x491 = INT32_MAX;
	uint32_t x492 = UINT32_MAX;
	uint64_t t43 = 127771766068LLU;

	t43 = (x489+(x490>>(x491/x492)));

	if (t43 != 258679779097576657LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x505 = INT8_MAX;
	uint64_t x506 = UINT64_MAX;
	int8_t x507 = -9;
	uint8_t x508 = UINT8_MAX;
	uint64_t t44 = 15877752553252LLU;

	t44 = (x505+(x506>>(x507/x508)));

	if (t44 != 126LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x522 = INT16_MAX;
	volatile int32_t x523 = 92;
	static uint16_t x524 = 10U;
	uint32_t t45 = 0U;

	t45 = (x521+(x522>>(x523/x524)));

	if (t45 != 62U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x537 = -1;
	uint64_t x538 = 995282528LLU;
	int32_t x540 = INT32_MIN;
	uint64_t t46 = 8651338898781407LLU;

	t46 = (x537+(x538>>(x539/x540)));

	if (t46 != 995282527LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x559 = -1;
	int64_t x560 = -16827963LL;
	int32_t t47 = 4435;

	t47 = (x557+(x558>>(x559/x560)));

	if (t47 != -336) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x561 = -6;
	uint64_t x563 = 30162LLU;
	static int32_t t48 = 2;

	t48 = (x561+(x562>>(x563/x564)));

	if (t48 != 2147483641) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x569 = 4;
	uint16_t x570 = 243U;
	int32_t x571 = 58;
	volatile int8_t x572 = INT8_MIN;
	static int32_t t49 = -85980;

	t49 = (x569+(x570>>(x571/x572)));

	if (t49 != 247) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x577 = INT8_MIN;
	int8_t x578 = 0;
	int32_t x579 = -15173901;
	uint64_t x580 = UINT64_MAX;

	t50 = (x577+(x578>>(x579/x580)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x581 = -1;
	uint16_t x583 = 2U;
	int64_t x584 = INT64_MIN;
	volatile uint64_t t51 = 1931LLU;

	t51 = (x581+(x582>>(x583/x584)));

	if (t51 != 3829645589287LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x601 = INT16_MIN;
	uint16_t x602 = UINT16_MAX;
	volatile int8_t x603 = 2;
	static int32_t t52 = -10687171;

	t52 = (x601+(x602>>(x603/x604)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x607 = 1U;
	static uint16_t x608 = UINT16_MAX;

	t53 = (x605+(x606>>(x607/x608)));

	if (t53 != 4879LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x622 = 1;
	uint32_t x623 = UINT32_MAX;
	volatile uint64_t t54 = 53606949788LLU;

	t54 = (x621+(x622>>(x623/x624)));

	if (t54 != 7739540241092426LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x625 = 31487U;
	int64_t x626 = 24168LL;
	volatile uint32_t x627 = 6511U;
	uint64_t x628 = 3629805LLU;
	int64_t t55 = 16403663506802545LL;

	t55 = (x625+(x626>>(x627/x628)));

	if (t55 != 55655LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x633 = 1173U;
	static volatile int8_t x634 = INT8_MAX;
	int32_t t56 = -1;

	t56 = (x633+(x634>>(x635/x636)));

	if (t56 != 1300) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x657 = INT64_MIN;
	uint16_t x659 = 149U;
	uint64_t x660 = UINT64_MAX;
	int64_t t57 = -512468029625431LL;

	t57 = (x657+(x658>>(x659/x660)));

	if (t57 != -9223372036854775660LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x661 = -47;
	volatile int64_t x662 = INT64_MAX;
	static int16_t x664 = INT16_MAX;
	int64_t t58 = -399376846244729LL;

	t58 = (x661+(x662>>(x663/x664)));

	if (t58 != 9223372036854775760LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x677 = INT16_MIN;
	uint64_t x678 = 14LLU;
	int8_t x679 = -60;
	int16_t x680 = -3548;

	t59 = (x677+(x678>>(x679/x680)));

	if (t59 != 18446744073709518862LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x689 = INT16_MIN;
	static volatile uint8_t x690 = UINT8_MAX;
	int16_t x691 = 2;
	int64_t x692 = INT64_MAX;
	int32_t t60 = -361397;

	t60 = (x689+(x690>>(x691/x692)));

	if (t60 != -32513) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x705 = UINT32_MAX;
	uint32_t x706 = 15U;
	volatile uint32_t x707 = 628309U;
	int32_t x708 = INT32_MAX;
	static volatile uint32_t t61 = 3U;

	t61 = (x705+(x706>>(x707/x708)));

	if (t61 != 14U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x709 = INT8_MAX;
	uint16_t x710 = UINT16_MAX;
	volatile int32_t x711 = INT32_MAX;
	int64_t x712 = INT64_MIN;
	volatile int32_t t62 = -6250;

	t62 = (x709+(x710>>(x711/x712)));

	if (t62 != 65662) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x725 = UINT8_MAX;
	uint16_t x726 = 199U;
	int8_t x728 = INT8_MIN;
	int32_t t63 = -161867;

	t63 = (x725+(x726>>(x727/x728)));

	if (t63 != 454) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x729 = INT8_MAX;
	uint8_t x730 = 61U;
	volatile int32_t x731 = INT32_MAX;
	volatile uint32_t x732 = UINT32_MAX;
	int32_t t64 = 7800;

	t64 = (x729+(x730>>(x731/x732)));

	if (t64 != 188) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x745 = INT16_MIN;
	uint32_t x746 = 58466U;
	uint64_t x747 = 584356955808124LLU;
	int16_t x748 = -449;

	t65 = (x745+(x746>>(x747/x748)));

	if (t65 != 25698U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x761 = UINT8_MAX;
	int16_t x763 = -1;
	static int64_t x764 = INT64_MIN;
	int32_t t66 = 36;

	t66 = (x761+(x762>>(x763/x764)));

	if (t66 != 260) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x773 = -1;
	uint64_t x774 = 522LLU;
	uint64_t x776 = 257976005606238694LLU;
	uint64_t t67 = 7528202133902273802LLU;

	t67 = (x773+(x774>>(x775/x776)));

	if (t67 != 521LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x805 = 931348LLU;
	static uint16_t x806 = UINT16_MAX;
	uint32_t x807 = 1110385182U;
	uint32_t x808 = UINT32_MAX;
	volatile uint64_t t68 = 331LLU;

	t68 = (x805+(x806>>(x807/x808)));

	if (t68 != 996883LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x825 = -14022;
	uint8_t x826 = UINT8_MAX;
	int8_t x827 = -1;
	int16_t x828 = INT16_MAX;
	volatile int32_t t69 = -4469;

	t69 = (x825+(x826>>(x827/x828)));

	if (t69 != -13767) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x841 = 10760043U;
	uint16_t x842 = 2U;
	static uint8_t x844 = UINT8_MAX;
	static volatile uint32_t t70 = 3164U;

	t70 = (x841+(x842>>(x843/x844)));

	if (t70 != 10760045U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x862 = INT8_MAX;
	volatile int64_t x863 = -1LL;
	int64_t x864 = -28604LL;
	static int32_t t71 = 567902477;

	t71 = (x861+(x862>>(x863/x864)));

	if (t71 != 65662) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x877 = -1LL;
	int64_t x878 = 0LL;
	static uint64_t x879 = 12293571LLU;
	int16_t x880 = INT16_MIN;
	volatile int64_t t72 = -27323818LL;

	t72 = (x877+(x878>>(x879/x880)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x900 = INT32_MIN;
	static uint64_t t73 = 368934619911LLU;

	t73 = (x897+(x898>>(x899/x900)));

	if (t73 != 6963862LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x901 = -1;
	volatile int32_t x902 = INT32_MAX;
	int16_t x903 = INT16_MAX;
	static int64_t x904 = INT64_MAX;
	static int32_t t74 = -547818705;

	t74 = (x901+(x902>>(x903/x904)));

	if (t74 != 2147483646) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x917 = 0U;
	volatile int8_t x919 = INT8_MIN;
	static uint16_t x920 = 19730U;
	volatile int32_t t75 = -1;

	t75 = (x917+(x918>>(x919/x920)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x958 = 8U;
	int32_t x959 = -1701;
	uint32_t x960 = UINT32_MAX;

	t76 = (x957+(x958>>(x959/x960)));

	if (t76 != 7LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x962 = INT64_MAX;
	int8_t x963 = -1;

	t77 = (x961+(x962>>(x963/x964)));

	if (t77 != 4611686018874670679LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x966 = 0;
	volatile uint32_t x967 = UINT32_MAX;
	int32_t x968 = -1;
	volatile int32_t t78 = -569072359;

	t78 = (x965+(x966>>(x967/x968)));

	if (t78 != -28) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x970 = INT16_MAX;
	uint8_t x971 = 2U;
	volatile uint64_t x972 = 1947251842191472092LLU;

	t79 = (x969+(x970>>(x971/x972)));

	if (t79 != 32753) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x973 = INT16_MIN;
	int32_t x975 = INT32_MIN;
	static volatile uint64_t t80 = 60LLU;

	t80 = (x973+(x974>>(x975/x976)));

	if (t80 != 119721288145482598LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x1018 = INT64_MAX;
	uint32_t x1020 = UINT32_MAX;
	volatile int64_t t81 = -8155319LL;

	t81 = (x1017+(x1018>>(x1019/x1020)));

	if (t81 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1033 = -5;
	int8_t x1035 = -1;

	t82 = (x1033+(x1034>>(x1035/x1036)));

	if (t82 != 7) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x1057 = INT32_MIN;
	volatile int64_t x1058 = 1307969LL;
	int64_t x1059 = -1LL;

	t83 = (x1057+(x1058>>(x1059/x1060)));

	if (t83 != -2146175679LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1065 = 56789LLU;
	uint32_t x1066 = 286U;
	static uint32_t x1067 = 344848U;
	uint64_t x1068 = 120691098LLU;
	uint64_t t84 = 18LLU;

	t84 = (x1065+(x1066>>(x1067/x1068)));

	if (t84 != 57075LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x1073 = -4571;
	volatile uint32_t x1074 = 768U;
	uint8_t x1075 = 2U;
	static volatile int8_t x1076 = INT8_MIN;
	static volatile uint32_t t85 = 64321463U;

	t85 = (x1073+(x1074>>(x1075/x1076)));

	if (t85 != 4294963493U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x1085 = UINT8_MAX;
	uint64_t x1086 = UINT64_MAX;
	int64_t x1088 = INT64_MIN;

	t86 = (x1085+(x1086>>(x1087/x1088)));

	if (t86 != 254LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1097 = 47U;
	uint8_t x1098 = UINT8_MAX;
	int8_t x1099 = INT8_MAX;
	int32_t x1100 = 182196;
	int32_t t87 = 378746;

	t87 = (x1097+(x1098>>(x1099/x1100)));

	if (t87 != 302) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1125 = 124U;
	volatile uint64_t x1126 = UINT64_MAX;
	volatile uint64_t x1127 = UINT64_MAX;
	int64_t x1128 = INT64_MIN;
	volatile uint64_t t88 = 54712812893792620LLU;

	t88 = (x1125+(x1126>>(x1127/x1128)));

	if (t88 != 9223372036854775931LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x1141 = UINT8_MAX;
	volatile uint64_t x1142 = 54027662640883724LLU;
	volatile uint8_t x1143 = UINT8_MAX;
	uint32_t x1144 = 985181U;
	uint64_t t89 = 779294086001LLU;

	t89 = (x1141+(x1142>>(x1143/x1144)));

	if (t89 != 54027662640883979LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x1145 = INT8_MIN;
	uint16_t x1146 = UINT16_MAX;
	int32_t x1147 = INT32_MAX;
	int64_t x1148 = INT64_MAX;
	volatile int32_t t90 = 558584838;

	t90 = (x1145+(x1146>>(x1147/x1148)));

	if (t90 != 65407) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1165 = INT16_MIN;
	uint64_t x1166 = 1897558322LLU;
	uint64_t x1168 = 1103355179244529LLU;
	static uint64_t t91 = 21LLU;

	t91 = (x1165+(x1166>>(x1167/x1168)));

	if (t91 != 1897525554LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x1169 = -413595LL;
	int32_t x1172 = 77247;

	t92 = (x1169+(x1170>>(x1171/x1172)));

	if (t92 != -413468LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x1173 = INT32_MIN;
	uint64_t x1174 = UINT64_MAX;
	int8_t x1175 = -1;
	int8_t x1176 = INT8_MIN;
	uint64_t t93 = 9203LLU;

	t93 = (x1173+(x1174>>(x1175/x1176)));

	if (t93 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x1177 = INT16_MIN;
	static uint32_t x1178 = UINT32_MAX;
	static volatile uint8_t x1179 = 38U;
	static uint32_t x1180 = UINT32_MAX;
	static uint32_t t94 = 33308955U;

	t94 = (x1177+(x1178>>(x1179/x1180)));

	if (t94 != 4294934527U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x1181 = INT32_MIN;
	volatile uint16_t x1182 = 219U;
	int32_t x1183 = INT32_MIN;
	int64_t x1184 = INT64_MAX;
	volatile int32_t t95 = 6409713;

	t95 = (x1181+(x1182>>(x1183/x1184)));

	if (t95 != -2147483429) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1197 = INT8_MIN;
	static int8_t x1200 = INT8_MIN;
	static volatile int32_t t96 = 5370525;

	t96 = (x1197+(x1198>>(x1199/x1200)));

	if (t96 != 6063) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1217 = 98U;
	static volatile int8_t x1218 = 12;
	int16_t x1219 = INT16_MAX;
	uint64_t x1220 = 441323851LLU;
	int32_t t97 = -62096;

	t97 = (x1217+(x1218>>(x1219/x1220)));

	if (t97 != 110) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1221 = INT64_MIN;
	uint8_t x1222 = UINT8_MAX;
	int64_t x1223 = 14508717385LL;
	static int64_t x1224 = INT64_MIN;

	t98 = (x1221+(x1222>>(x1223/x1224)));

	if (t98 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1231 = UINT16_MAX;
	volatile int64_t x1232 = INT64_MIN;
	volatile int32_t t99 = -312293793;

	t99 = (x1229+(x1230>>(x1231/x1232)));

	if (t99 != 15293) { NG(); } else { ; }
	
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

