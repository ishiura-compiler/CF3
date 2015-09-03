#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 1020945235U;
int32_t x12 = -1;
static volatile int64_t x13 = -1LL;
uint16_t x15 = 115U;
uint32_t x24 = UINT32_MAX;
uint8_t x37 = 15U;
int8_t x38 = -13;
int16_t x41 = INT16_MIN;
volatile uint32_t x42 = 726U;
uint16_t x48 = UINT16_MAX;
volatile int32_t t5 = -2000332;
static uint64_t x51 = 0LLU;
static volatile int8_t x59 = INT8_MIN;
uint8_t x62 = 13U;
int8_t x80 = -1;
uint32_t x89 = 33201183U;
uint8_t x106 = UINT8_MAX;
int8_t x107 = INT8_MIN;
int64_t x109 = -6784267LL;
static int16_t x116 = 26;
static uint16_t x134 = 173U;
int8_t x135 = INT8_MAX;
int8_t x144 = INT8_MIN;
volatile int8_t x158 = INT8_MIN;
volatile uint32_t x173 = 100170287U;
int32_t x174 = 872798625;
int8_t x175 = -1;
uint16_t x183 = 31U;
volatile int64_t t27 = 124279732211LL;
uint32_t x197 = 1U;
volatile int16_t x200 = INT16_MIN;
int8_t x205 = 57;
static uint32_t x206 = UINT32_MAX;
uint8_t x207 = 3U;
volatile int8_t x209 = INT8_MAX;
volatile uint16_t x212 = UINT16_MAX;
int64_t x213 = -192983124LL;
uint32_t x215 = 117U;
static int8_t x216 = -1;
uint16_t x223 = 17U;
volatile int32_t x224 = INT32_MIN;
int32_t t33 = -2870412;
volatile uint64_t x228 = 1451LLU;
uint64_t x231 = UINT64_MAX;
int16_t x241 = -941;
int64_t x256 = -515539401045LL;
int8_t x258 = INT8_MIN;
int16_t x262 = -1;
int32_t x263 = -1;
uint8_t x282 = 75U;
int32_t x290 = -6672;
int8_t x330 = INT8_MIN;
int32_t x335 = INT32_MAX;
int16_t x338 = 6;
static int8_t x339 = INT8_MIN;
static uint64_t x343 = UINT64_MAX;
static volatile uint8_t x346 = 55U;
static int32_t x350 = INT32_MIN;
int8_t x351 = -1;
uint32_t t55 = 2175U;
uint8_t x354 = 105U;
volatile int32_t t56 = -3367036;
volatile uint8_t x357 = 55U;
uint32_t x370 = 727463U;
volatile uint8_t x371 = UINT8_MAX;
uint32_t x372 = UINT32_MAX;
uint64_t x375 = UINT64_MAX;
uint64_t t59 = 113514183962439LLU;
static uint8_t x378 = UINT8_MAX;
static int32_t x407 = INT32_MAX;
uint64_t x408 = 106169522730430058LLU;
static volatile uint64_t t63 = 190061478877LLU;
uint64_t x410 = 9193381LLU;
uint32_t x411 = 128738297U;
uint16_t x415 = UINT16_MAX;
uint64_t x419 = 2021898151074402991LLU;
volatile uint64_t t67 = 442899311338533LLU;
uint8_t x429 = 1U;
volatile uint64_t x431 = 2169414083570LLU;
int8_t x432 = INT8_MAX;
volatile uint16_t x446 = 208U;
int8_t x454 = INT8_MIN;
uint32_t x467 = 1U;
uint16_t x468 = 22U;
int16_t x477 = -6638;
int8_t x478 = -1;
volatile uint64_t x495 = UINT64_MAX;
static uint32_t x496 = 2978806U;
static int32_t x504 = -535172673;
volatile int64_t t80 = -549263712LL;
int8_t x505 = 1;
int64_t x507 = INT64_MAX;
uint8_t x513 = 0U;
int16_t x516 = 1;
volatile uint16_t x518 = UINT16_MAX;
static int64_t x532 = -7266784791LL;
volatile uint64_t t85 = 2321295LLU;
uint32_t x541 = 19U;
uint64_t x542 = 462824250164820816LLU;
int64_t x544 = INT64_MIN;
int32_t x547 = -1;
static int32_t x562 = INT32_MIN;
static int64_t x572 = INT64_MAX;
static int8_t x574 = INT8_MIN;
int32_t x579 = 805294799;
int64_t t92 = 3857755213598027LL;
uint32_t x609 = UINT32_MAX;
volatile int16_t x611 = INT16_MIN;
int8_t x613 = -1;
int32_t x616 = 258645;
static int64_t x625 = -1LL;
int64_t t96 = 74896181310613586LL;
static int32_t x631 = 13905765;
volatile uint32_t t97 = 127747934U;
volatile uint8_t x633 = 0U;


void f0(void) {
	uint8_t x10 = 9U;
	int32_t x11 = INT32_MIN;
	static volatile uint32_t t0 = 3138U;

	t0 = (((x9-x10)*x11)-x12);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x14 = -1;
	int8_t x16 = INT8_MIN;
	int64_t t1 = 93034252021195LL;

	t1 = (((x13-x14)*x15)-x16);

	if (t1 != 128LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = 1LL;
	volatile int32_t x23 = INT32_MAX;
	volatile int64_t t2 = 276797715911003LL;

	t2 = (((x21-x22)*x23)-x24);

	if (t2 != -281320357758LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x39 = 98U;
	uint16_t x40 = 0U;
	int32_t t3 = 1;

	t3 = (((x37-x38)*x39)-x40);

	if (t3 != 2744) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;
	volatile uint32_t t4 = 4491U;

	t4 = (((x41-x42)*x43)-x44);

	if (t4 != 2151770880U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x45 = -1;
	uint16_t x46 = 40U;
	int8_t x47 = INT8_MIN;

	t5 = (((x45-x46)*x47)-x48);

	if (t5 != -60287) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x50 = UINT64_MAX;
	static int16_t x52 = INT16_MAX;
	volatile uint64_t t6 = 88446023LLU;

	t6 = (((x49-x50)*x51)-x52);

	if (t6 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = 34LLU;
	int16_t x54 = -1;
	int64_t x55 = -1LL;
	static uint8_t x56 = 0U;
	uint64_t t7 = 1463158384329LLU;

	t7 = (((x53-x54)*x55)-x56);

	if (t7 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x57 = 38U;
	uint16_t x58 = 55U;
	uint64_t x60 = 16378LLU;
	uint64_t t8 = 52198299913LLU;

	t8 = (((x57-x58)*x59)-x60);

	if (t8 != 18446744073709537414LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x61 = 28349294LLU;
	volatile int64_t x63 = -10702196975631666LL;
	static uint16_t x64 = UINT16_MAX;
	volatile uint64_t t9 = 3204280855LLU;

	t9 = (((x61-x62)*x63)-x64);

	if (t9 != 12457144842452982287LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = -1;
	int16_t x70 = 2;
	int16_t x71 = 9269;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t10 = 1;

	t10 = (((x69-x70)*x71)-x72);

	if (t10 != -93342) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x77 = INT8_MAX;
	volatile int64_t x78 = 12249364LL;
	uint64_t x79 = 115282573LLU;
	uint64_t t11 = 459742184786LLU;

	t11 = (((x77-x78)*x79)-x80);

	if (t11 != 18445331950150904816LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = INT16_MIN;
	uint32_t x82 = 45467U;
	static int16_t x83 = -1;
	volatile int32_t x84 = INT32_MIN;
	static uint32_t t12 = 85036407U;

	t12 = (((x81-x82)*x83)-x84);

	if (t12 != 2147561883U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x90 = UINT64_MAX;
	volatile int16_t x91 = -15498;
	int64_t x92 = INT64_MIN;
	uint64_t t13 = 2094801713789800675LLU;

	t13 = (((x89-x90)*x91)-x92);

	if (t13 != 9223371522302826176LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x101 = 42283943LLU;
	int16_t x102 = -1;
	static int16_t x103 = 2355;
	uint64_t x104 = 2506LLU;
	static volatile uint64_t t14 = 1713LLU;

	t14 = (((x101-x102)*x103)-x104);

	if (t14 != 99578685614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x105 = 60;
	int64_t x108 = INT64_MAX;
	static volatile int64_t t15 = 16LL;

	t15 = (((x105-x106)*x107)-x108);

	if (t15 != -9223372036854750847LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x110 = -6;
	volatile int32_t x111 = 208486;
	uint8_t x112 = 11U;
	int64_t t16 = -908348578341LL;

	t16 = (((x109-x110)*x111)-x112);

	if (t16 != -1414423438857LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = -72377LL;
	int64_t x114 = -30855391082406LL;
	uint64_t x115 = 3LLU;
	volatile uint64_t t17 = 3LLU;

	t17 = (((x113-x114)*x115)-x116);

	if (t17 != 92566173030061LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x129 = -97839;
	int32_t x130 = 8164322;
	uint8_t x131 = 0U;
	uint64_t x132 = 16106LLU;
	uint64_t t18 = 33667776479044LLU;

	t18 = (((x129-x130)*x131)-x132);

	if (t18 != 18446744073709535510LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x133 = 202LLU;
	volatile uint32_t x136 = 4501167U;
	uint64_t t19 = 11LLU;

	t19 = (((x133-x134)*x135)-x136);

	if (t19 != 18446744073705054132LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x141 = 80U;
	volatile uint32_t x142 = UINT32_MAX;
	static volatile int16_t x143 = 1614;
	uint32_t t20 = 751961755U;

	t20 = (((x141-x142)*x143)-x144);

	if (t20 != 130862U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x149 = INT32_MIN;
	static uint64_t x150 = 65126412969569725LLU;
	uint32_t x151 = 2963093U;
	uint64_t x152 = UINT64_MAX;
	static volatile uint64_t t21 = 5LLU;

	t21 = (((x149-x150)*x151)-x152);

	if (t21 != 14211750714298843904LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x157 = -4LL;
	volatile int32_t x159 = INT32_MAX;
	static int8_t x160 = INT8_MAX;
	volatile int64_t t22 = 3155767341089928348LL;

	t22 = (((x157-x158)*x159)-x160);

	if (t22 != 266287972101LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x165 = 7915;
	int32_t x166 = -4960915;
	int64_t x167 = 6906335812LL;
	int64_t x168 = -1LL;
	int64_t t23 = -20315605764147784LL;

	t23 = (((x165-x166)*x167)-x168);

	if (t23 != 34316408572739961LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x169 = INT16_MIN;
	uint16_t x170 = UINT16_MAX;
	static uint64_t x171 = 135889457601990043LLU;
	int8_t x172 = -2;
	uint64_t t24 = 70110606612973LLU;

	t24 = (((x169-x170)*x171)-x172);

	if (t24 != 15548102790997724573LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t25 = 1023726134200LLU;

	t25 = (((x173-x174)*x175)-x176);

	if (t25 != 772628339LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x177 = INT16_MAX;
	uint8_t x178 = 10U;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	static int64_t t26 = 1577310LL;

	t26 = (((x177-x178)*x179)-x180);

	if (t26 != 9223372035781394432LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x181 = UINT32_MAX;
	static int64_t x182 = 5037720572774LL;
	int32_t x184 = 1936568;

	t27 = (((x181-x182)*x183)-x184);

	if (t27 != -156036195706417LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x198 = 140637134589537LLU;
	static volatile uint32_t x199 = 1990U;
	volatile uint64_t t28 = 0LLU;

	t28 = (((x197-x198)*x199)-x200);

	if (t28 != 18166876175876407744LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x201 = UINT8_MAX;
	uint64_t x202 = UINT64_MAX;
	int8_t x203 = -1;
	uint32_t x204 = UINT32_MAX;
	volatile uint64_t t29 = 4905907096LLU;

	t29 = (((x201-x202)*x203)-x204);

	if (t29 != 18446744069414584065LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x208 = UINT64_MAX;
	volatile uint64_t t30 = 63629185626296LLU;

	t30 = (((x205-x206)*x207)-x208);

	if (t30 != 175LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x210 = 37LLU;
	static int32_t x211 = -1;
	static volatile uint64_t t31 = 2790658306691500815LLU;

	t31 = (((x209-x210)*x211)-x212);

	if (t31 != 18446744073709485991LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x214 = INT32_MAX;
	volatile int64_t t32 = -4378724742983819LL;

	t32 = (((x213-x214)*x215)-x216);

	if (t32 != -273834612206LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x221 = 49U;
	static uint8_t x222 = UINT8_MAX;

	t33 = (((x221-x222)*x223)-x224);

	if (t33 != 2147480146) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x226 = 1225164161U;
	int16_t x227 = 0;
	uint64_t t34 = 685LLU;

	t34 = (((x225-x226)*x227)-x228);

	if (t34 != 18446744073709550165LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x229 = 3416614LLU;
	int8_t x230 = -1;
	int32_t x232 = INT32_MIN;
	static uint64_t t35 = 682485789LLU;

	t35 = (((x229-x230)*x231)-x232);

	if (t35 != 2144067033LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x237 = 3U;
	int64_t x238 = -1LL;
	int16_t x239 = -41;
	static int16_t x240 = INT16_MIN;
	static volatile int64_t t36 = -1060136484467LL;

	t36 = (((x237-x238)*x239)-x240);

	if (t36 != 32604LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x242 = INT32_MIN;
	int32_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int32_t t37 = -457464595;

	t37 = (((x241-x242)*x243)-x244);

	if (t37 != -2147482579) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x245 = INT16_MAX;
	uint32_t x246 = 3530323U;
	volatile uint8_t x247 = 45U;
	int8_t x248 = INT8_MAX;
	static volatile uint32_t t38 = 1608929U;

	t38 = (((x245-x246)*x247)-x248);

	if (t38 != 4137577149U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x249 = -1;
	static int16_t x250 = INT16_MAX;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -1;
	int32_t t39 = -106096318;

	t39 = (((x249-x250)*x251)-x252);

	if (t39 != 4194305) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x253 = 3U;
	volatile uint32_t x254 = 23U;
	volatile int32_t x255 = -1;
	static int64_t t40 = 2LL;

	t40 = (((x253-x254)*x255)-x256);

	if (t40 != 515539401065LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x257 = -263;
	volatile int32_t x259 = -34084;
	volatile uint8_t x260 = 35U;
	int32_t t41 = 11;

	t41 = (((x257-x258)*x259)-x260);

	if (t41 != 4601305) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x261 = INT16_MIN;
	int32_t x264 = 6;
	volatile int32_t t42 = -814;

	t42 = (((x261-x262)*x263)-x264);

	if (t42 != 32761) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x273 = 1U;
	static uint8_t x274 = 3U;
	volatile int16_t x275 = -3435;
	int64_t x276 = 3256888559247155164LL;
	volatile int64_t t43 = 2359803LL;

	t43 = (((x273-x274)*x275)-x276);

	if (t43 != -3256888559247148294LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x281 = 3529U;
	int16_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	int32_t t44 = -13928;

	t44 = (((x281-x282)*x283)-x284);

	if (t44 != -3326) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x289 = 238345911869052576LLU;
	int32_t x291 = INT32_MAX;
	int8_t x292 = -1;
	uint64_t t45 = 4047049517743LLU;

	t45 = (((x289-x290)*x291)-x292);

	if (t45 != 432576461356978001LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x297 = 1060505493357LLU;
	int8_t x298 = INT8_MIN;
	static int32_t x299 = -1;
	volatile uint8_t x300 = 48U;
	uint64_t t46 = 835831156879LLU;

	t46 = (((x297-x298)*x299)-x300);

	if (t46 != 18446743013204058083LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x305 = UINT32_MAX;
	static volatile uint8_t x306 = 6U;
	uint64_t x307 = 186582427275475LLU;
	uint32_t x308 = 5U;
	volatile uint64_t t47 = 52600565LLU;

	t47 = (((x305-x306)*x307)-x308);

	if (t47 != 1965800296175634998LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x321 = 22U;
	int32_t x322 = -1;
	uint8_t x323 = 0U;
	uint64_t x324 = UINT64_MAX;
	uint64_t t48 = 4LLU;

	t48 = (((x321-x322)*x323)-x324);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x325 = 239U;
	static int32_t x326 = -3755;
	int16_t x327 = -149;
	int64_t x328 = INT64_MIN;
	volatile int64_t t49 = 5974LL;

	t49 = (((x325-x326)*x327)-x328);

	if (t49 != 9223372036854180702LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x329 = 2;
	uint64_t x331 = 2441052421816920LLU;
	static uint16_t x332 = 782U;
	uint64_t t50 = 479381595996191791LLU;

	t50 = (((x329-x330)*x331)-x332);

	if (t50 != 317336814836198818LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x333 = UINT32_MAX;
	uint64_t x334 = 1359212LLU;
	uint32_t x336 = 21U;
	static volatile uint64_t t51 = 12LLU;

	t51 = (((x333-x334)*x335)-x336);

	if (t51 != 9220453144869518680LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x337 = UINT8_MAX;
	uint8_t x340 = UINT8_MAX;
	static int32_t t52 = 3631;

	t52 = (((x337-x338)*x339)-x340);

	if (t52 != -32127) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x341 = 11630;
	static volatile int8_t x342 = INT8_MIN;
	uint16_t x344 = 1374U;
	static volatile uint64_t t53 = 9576399609LLU;

	t53 = (((x341-x342)*x343)-x344);

	if (t53 != 18446744073709538484LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x345 = INT32_MAX;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MIN;
	uint64_t t54 = 278383294150710LLU;

	t54 = (((x345-x346)*x347)-x348);

	if (t54 != 18446744071562068152LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x352 = INT32_MIN;

	t55 = (((x349-x350)*x351)-x352);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x353 = INT8_MIN;
	int16_t x355 = 2;
	int16_t x356 = 1;

	t56 = (((x353-x354)*x355)-x356);

	if (t56 != -467) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x358 = -1;
	uint8_t x359 = 2U;
	uint8_t x360 = 0U;
	int32_t t57 = 45;

	t57 = (((x357-x358)*x359)-x360);

	if (t57 != 112) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x369 = 3U;
	volatile uint32_t t58 = 49U;

	t58 = (((x369-x370)*x371)-x372);

	if (t58 != 4109464997U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x373 = UINT16_MAX;
	static uint8_t x374 = UINT8_MAX;
	int32_t x376 = INT32_MIN;

	t59 = (((x373-x374)*x375)-x376);

	if (t59 != 2147418368LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x379 = 75U;
	int8_t x380 = INT8_MIN;
	int32_t t60 = -1349961;

	t60 = (((x377-x378)*x379)-x380);

	if (t60 != -2476597) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x389 = UINT8_MAX;
	uint32_t x390 = 37U;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t61 = 0LLU;

	t61 = (((x389-x390)*x391)-x392);

	if (t61 != 4287823873LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x401 = -4062;
	volatile uint32_t x402 = 54225636U;
	int64_t x403 = -1LL;
	uint32_t x404 = 2778374U;
	volatile int64_t t62 = 183012043649LL;

	t62 = (((x401-x402)*x403)-x404);

	if (t62 != -4243515972LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x405 = UINT32_MAX;
	int8_t x406 = INT8_MIN;

	t63 = (((x405-x406)*x407)-x408);

	if (t63 != 18340574553126605079LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x409 = 25616189;
	volatile int32_t x412 = INT32_MAX;
	static uint64_t t64 = 4LLU;

	t64 = (((x409-x410)*x411)-x412);

	if (t64 != 2114242186394329LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x413 = 1032U;
	static int8_t x414 = INT8_MIN;
	volatile uint8_t x416 = 30U;
	volatile uint32_t t65 = 322147301U;

	t65 = (((x413-x414)*x415)-x416);

	if (t65 != 76020570U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x417 = 1;
	int8_t x418 = INT8_MIN;
	static int8_t x420 = 7;
	static uint64_t t66 = 24554019LLU;

	t66 = (((x417-x418)*x419)-x420);

	if (t66 != 2570444456664263208LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x421 = 211299LLU;
	int64_t x422 = INT64_MIN;
	int8_t x423 = 0;
	int32_t x424 = INT32_MIN;

	t67 = (((x421-x422)*x423)-x424);

	if (t67 != 2147483648LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x430 = UINT64_MAX;
	uint64_t t68 = 17LLU;

	t68 = (((x429-x430)*x431)-x432);

	if (t68 != 4338828167013LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x433 = INT8_MAX;
	static uint16_t x434 = 71U;
	int64_t x435 = 158213LL;
	volatile int16_t x436 = -3598;
	volatile int64_t t69 = -115058LL;

	t69 = (((x433-x434)*x435)-x436);

	if (t69 != 8863526LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x441 = INT16_MIN;
	int32_t x442 = -2;
	volatile int8_t x443 = -29;
	volatile int8_t x444 = INT8_MIN;
	volatile int32_t t70 = 267;

	t70 = (((x441-x442)*x443)-x444);

	if (t70 != 950342) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x445 = 252525431410LLU;
	int16_t x447 = 60;
	int32_t x448 = INT32_MIN;
	volatile uint64_t t71 = 530LLU;

	t71 = (((x445-x446)*x447)-x448);

	if (t71 != 15153673355768LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x453 = -8;
	static int32_t x455 = -1;
	int16_t x456 = INT16_MIN;
	volatile int32_t t72 = -1124307;

	t72 = (((x453-x454)*x455)-x456);

	if (t72 != 32648) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x461 = INT16_MAX;
	int8_t x462 = -1;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = 179305LL;
	static volatile int64_t t73 = 2LL;

	t73 = (((x461-x462)*x463)-x464);

	if (t73 != 4294755223LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x465 = -4534;
	volatile uint16_t x466 = 3U;
	volatile uint32_t t74 = 3705U;

	t74 = (((x465-x466)*x467)-x468);

	if (t74 != 4294962737U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x473 = 29324;
	volatile uint32_t x474 = UINT32_MAX;
	int32_t x475 = -30;
	static int8_t x476 = INT8_MIN;
	volatile uint32_t t75 = 1213U;

	t75 = (((x473-x474)*x475)-x476);

	if (t75 != 4294087674U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x479 = 3921400LL;
	int16_t x480 = -13693;
	static volatile int64_t t76 = -637584LL;

	t76 = (((x477-x478)*x479)-x480);

	if (t76 != -26026318107LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x481 = 996U;
	uint64_t x482 = 34230LLU;
	volatile int8_t x483 = INT8_MIN;
	int32_t x484 = 3;
	volatile uint64_t t77 = 67539158366LLU;

	t77 = (((x481-x482)*x483)-x484);

	if (t77 != 4253949LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x493 = INT8_MIN;
	static int16_t x494 = INT16_MAX;
	volatile uint64_t t78 = 28LLU;

	t78 = (((x493-x494)*x495)-x496);

	if (t78 != 18446744073706605705LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x497 = 7;
	uint32_t x498 = UINT32_MAX;
	volatile int32_t x499 = -113323243;
	int16_t x500 = 1389;
	static volatile uint32_t t79 = 29U;

	t79 = (((x497-x498)*x499)-x500);

	if (t79 != 3388379963U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x501 = 9940640357LL;
	int32_t x502 = -1;
	uint32_t x503 = 258318345U;

	t80 = (((x501-x502)*x503)-x504);

	if (t80 != 2567849766053940183LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x506 = 1U;
	int32_t x508 = INT32_MAX;
	int64_t t81 = -471731246030240346LL;

	t81 = (((x505-x506)*x507)-x508);

	if (t81 != -2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x514 = 1U;
	uint16_t x515 = 847U;
	volatile int32_t t82 = -199795;

	t82 = (((x513-x514)*x515)-x516);

	if (t82 != -848) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x517 = -1;
	static volatile uint32_t x519 = 5904U;
	int16_t x520 = -580;
	uint32_t t83 = 3576257U;

	t83 = (((x517-x518)*x519)-x520);

	if (t83 != 3908043332U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x529 = 4U;
	static int8_t x530 = -2;
	uint32_t x531 = UINT32_MAX;
	int64_t t84 = 38351354551LL;

	t84 = (((x529-x530)*x531)-x532);

	if (t84 != 11561752081LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x533 = 1660U;
	static volatile uint64_t x534 = UINT64_MAX;
	int16_t x535 = INT16_MIN;
	volatile uint16_t x536 = UINT16_MAX;

	t85 = (((x533-x534)*x535)-x536);

	if (t85 != 18446744073655058433LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x543 = INT64_MIN;
	uint64_t t86 = 121633937527190370LLU;

	t86 = (((x541-x542)*x543)-x544);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x545 = -1;
	volatile uint32_t x546 = 268U;
	volatile int16_t x548 = 1;
	volatile uint32_t t87 = 1780U;

	t87 = (((x545-x546)*x547)-x548);

	if (t87 != 268U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x549 = 318545782047438961LLU;
	static int8_t x550 = INT8_MIN;
	int8_t x551 = 0;
	int32_t x552 = INT32_MIN;
	volatile uint64_t t88 = 4247012101137555LLU;

	t88 = (((x549-x550)*x551)-x552);

	if (t88 != 2147483648LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x561 = INT64_MIN;
	uint64_t x563 = 33611LLU;
	int8_t x564 = INT8_MAX;
	volatile uint64_t t89 = 6LLU;

	t89 = (((x561-x562)*x563)-x564);

	if (t89 != 9223444215927668609LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x569 = 8;
	int32_t x570 = -1;
	uint16_t x571 = UINT16_MAX;
	int64_t t90 = 64465LL;

	t90 = (((x569-x570)*x571)-x572);

	if (t90 != -9223372036854185992LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x573 = -5;
	int32_t x575 = -824758;
	uint8_t x576 = 7U;
	volatile int32_t t91 = -2794;

	t91 = (((x573-x574)*x575)-x576);

	if (t91 != -101445241) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x577 = -1;
	volatile int64_t x578 = -1LL;
	int32_t x580 = -473;

	t92 = (((x577-x578)*x579)-x580);

	if (t92 != 473LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x601 = INT16_MAX;
	static int16_t x602 = 5;
	uint8_t x603 = 1U;
	static int8_t x604 = INT8_MIN;
	int32_t t93 = 5966;

	t93 = (((x601-x602)*x603)-x604);

	if (t93 != 32890) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x610 = UINT8_MAX;
	int64_t x612 = 13278324LL;
	volatile int64_t t94 = -3LL;

	t94 = (((x609-x610)*x611)-x612);

	if (t94 != -4889716LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x614 = UINT8_MAX;
	volatile int8_t x615 = INT8_MIN;
	static volatile int32_t t95 = 3185888;

	t95 = (((x613-x614)*x615)-x616);

	if (t95 != -225877) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MAX;
	static uint32_t x628 = 4439318U;

	t96 = (((x625-x626)*x627)-x628);

	if (t96 != 4611686014127981291LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x629 = -1;
	int8_t x630 = -6;
	uint32_t x632 = UINT32_MAX;

	t97 = (((x629-x630)*x631)-x632);

	if (t97 != 69528826U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x634 = UINT32_MAX;
	volatile int32_t x635 = INT32_MAX;
	uint16_t x636 = 853U;
	volatile uint32_t t98 = 495816374U;

	t98 = (((x633-x634)*x635)-x636);

	if (t98 != 2147482794U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x641 = INT8_MAX;
	volatile uint8_t x642 = 2U;
	int16_t x643 = INT16_MIN;
	int8_t x644 = INT8_MIN;
	static int32_t t99 = -1;

	t99 = (((x641-x642)*x643)-x644);

	if (t99 != -4095872) { NG(); } else { ; }
	
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

