#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = UINT16_MAX;
int64_t x8 = -114779286LL;
static int8_t x11 = INT8_MIN;
volatile int32_t x14 = -655600276;
int64_t x25 = INT64_MAX;
volatile uint8_t x32 = UINT8_MAX;
int32_t x54 = INT32_MAX;
volatile uint8_t x59 = UINT8_MAX;
uint32_t x63 = 93589026U;
uint64_t t7 = 1089057075612LLU;
uint64_t t8 = 6336856502865264232LLU;
volatile uint64_t x72 = 497873319510940293LLU;
int8_t x119 = INT8_MIN;
static volatile uint64_t t12 = 85790150548945LLU;
int64_t t13 = -3233LL;
static int8_t x140 = INT8_MAX;
int16_t x141 = INT16_MIN;
volatile uint16_t x142 = 3U;
volatile uint32_t t17 = 204397U;
volatile int64_t x174 = -1LL;
static int64_t x180 = -1LL;
uint32_t x181 = 262169243U;
uint64_t t21 = 6149278874788864LLU;
int32_t t22 = 246;
static volatile int64_t x202 = INT64_MIN;
volatile uint8_t x212 = 1U;
uint8_t x213 = 56U;
int32_t x218 = INT32_MAX;
int8_t x229 = -1;
volatile int32_t x237 = -1;
static volatile int64_t t29 = -337641221868652LL;
int8_t x247 = -11;
static int32_t t31 = 251571;
volatile int32_t x257 = INT32_MIN;
int32_t x260 = INT32_MIN;
uint64_t x264 = 29LLU;
volatile uint32_t x265 = 147600763U;
int32_t x267 = 6897812;
int64_t x269 = -1LL;
static uint8_t x278 = UINT8_MAX;
int32_t x285 = -27566;
uint16_t x295 = 6917U;
int16_t x298 = 22;
volatile int64_t x312 = INT64_MIN;
uint32_t x323 = 304592U;
uint64_t x329 = 64117438285350121LLU;
static int8_t x334 = -6;
int64_t x337 = -1LL;
int16_t x349 = INT16_MIN;
int8_t x354 = 1;
uint8_t x358 = 1U;
uint64_t t53 = 14797348554LLU;
static int32_t x365 = INT32_MAX;
static int32_t x366 = -1;
volatile uint64_t x371 = 136875594596LLU;
static volatile int64_t x373 = INT64_MIN;
int8_t x376 = -1;
int8_t x394 = INT8_MAX;
volatile int64_t t57 = 141777277LL;
int64_t t58 = -912781LL;
int8_t x419 = INT8_MIN;
volatile uint16_t x428 = 13U;
static uint16_t x441 = 742U;
static volatile int64_t t63 = -6393LL;
int16_t x448 = INT16_MIN;
int8_t x474 = INT8_MIN;
uint16_t x476 = UINT16_MAX;
int32_t t67 = -150658010;
int8_t x478 = 41;
int32_t t68 = 0;
int64_t x482 = INT64_MIN;
volatile int64_t t69 = 61LL;
int16_t x486 = INT16_MIN;
uint32_t x489 = UINT32_MAX;
int32_t x492 = -1;
static int16_t x499 = INT16_MIN;
static int32_t x501 = 0;
int8_t x504 = INT8_MIN;
uint64_t x529 = 2893357934LLU;
volatile uint32_t t77 = 2138U;
static int8_t x537 = -2;
int64_t x539 = -1LL;
int8_t x550 = -1;
volatile int64_t t79 = 195LL;
uint16_t x564 = UINT16_MAX;
int16_t x577 = INT16_MIN;
int8_t x578 = 1;
uint32_t x587 = UINT32_MAX;
volatile uint64_t x595 = 18523974752408262LLU;
uint32_t x598 = UINT32_MAX;
uint8_t x601 = 3U;
volatile int8_t x627 = -15;
uint32_t x630 = 80493000U;
uint64_t x631 = 23606141LLU;
volatile uint64_t t90 = 22239208LLU;
int16_t x665 = INT16_MAX;
static volatile int32_t x673 = INT32_MIN;
volatile uint64_t t95 = 586508399584995LLU;
volatile int16_t x678 = INT16_MAX;
int16_t x689 = INT16_MAX;
int32_t x690 = INT32_MIN;
uint32_t x694 = 27U;
static int32_t x696 = -2;


void f0(void) {
	int32_t x5 = 2;
	int32_t x7 = -18;
	volatile int64_t t0 = 54160918LL;

	t0 = (x5%(x6%(x7*x8)));

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	static int64_t x10 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	int64_t t1 = 26522378019195LL;

	t1 = (x9%(x10%(x11*x12)));

	if (t1 != 262143LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x15 = -3066LL;
	int16_t x16 = 11;
	uint64_t t2 = 393061737LLU;

	t2 = (x13%(x14%(x15*x16)));

	if (t2 != 561LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x26 = 1700367200411697242LLU;
	int16_t x27 = -6;
	static int8_t x28 = INT8_MIN;
	uint64_t t3 = 23926LLU;

	t3 = (x25%(x26%(x27*x28)));

	if (t3 != 385LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = 13U;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 28U;
	static int32_t t4 = 6330000;

	t4 = (x29%(x30%(x31*x32)));

	if (t4 != 13) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x53 = 1U;
	volatile uint8_t x55 = 6U;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t5 = -4925;

	t5 = (x53%(x54%(x55*x56)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x57 = 14;
	static uint8_t x58 = UINT8_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t6 = 27;

	t6 = (x57%(x58%(x59*x60)));

	if (t6 != 14) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x62 = -1;
	volatile uint64_t x64 = UINT64_MAX;

	t7 = (x61%(x62%(x63*x64)));

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x65 = 28752U;
	int32_t x66 = -13625;
	int32_t x67 = INT32_MIN;
	static volatile uint64_t x68 = 66440865623231917LLU;

	t8 = (x65%(x66%(x67*x68)));

	if (t8 != 28752LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x69 = UINT8_MAX;
	static uint32_t x70 = 1947U;
	uint16_t x71 = 361U;
	uint64_t t9 = 6LLU;

	t9 = (x69%(x70%(x71*x72)));

	if (t9 != 255LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = -1325;
	uint64_t x75 = 45LLU;
	static int16_t x76 = -1;
	uint64_t t10 = 2245837LLU;

	t10 = (x73%(x74%(x75*x76)));

	if (t10 != 1197LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x117 = 77U;
	int16_t x118 = INT16_MAX;
	static uint8_t x120 = 12U;
	volatile int32_t t11 = -103;

	t11 = (x117%(x118%(x119*x120)));

	if (t11 != 77) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x129 = 863839;
	uint64_t x130 = 127200334LLU;
	uint64_t x131 = UINT64_MAX;
	static int16_t x132 = 1;

	t12 = (x129%(x130%(x131*x132)));

	if (t12 != 863839LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x133 = -1;
	int8_t x134 = -9;
	int16_t x135 = -1;
	int64_t x136 = INT64_MAX;

	t13 = (x133%(x134%(x135*x136)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x137 = 6U;
	static uint64_t x138 = 3946LLU;
	uint64_t x139 = 266379123201750LLU;
	uint64_t t14 = 58LLU;

	t14 = (x137%(x138%(x139*x140)));

	if (t14 != 6LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x143 = -1;
	static uint16_t x144 = 11U;
	int32_t t15 = 10046389;

	t15 = (x141%(x142%(x143*x144)));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x149 = INT8_MIN;
	static int16_t x150 = 6728;
	int16_t x151 = -1;
	static int32_t x152 = 28;
	int32_t t16 = -1;

	t16 = (x149%(x150%(x151*x152)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = -8;
	static volatile int16_t x167 = 626;
	static uint16_t x168 = 927U;

	t17 = (x165%(x166%(x167*x168)));

	if (t17 != 7U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x173 = INT64_MIN;
	int8_t x175 = -1;
	int32_t x176 = -28972;
	int64_t t18 = -4157689872244571321LL;

	t18 = (x173%(x174%(x175*x176)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x177 = -33;
	int32_t x178 = -181920;
	static uint64_t x179 = 6021607086LLU;
	uint64_t t19 = 405915538085747LLU;

	t19 = (x177%(x178%(x179*x180)));

	if (t19 != 5129672215LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x182 = -469;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = INT8_MAX;
	uint64_t t20 = 1906827LLU;

	t20 = (x181%(x182%(x183*x184)));

	if (t20 != 262169243LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x189 = 1878515LLU;
	static int8_t x190 = -1;
	int8_t x191 = INT8_MIN;
	int16_t x192 = 118;

	t21 = (x189%(x190%(x191*x192)));

	if (t21 != 1878515LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x193 = 22506U;
	static int16_t x194 = INT16_MIN;
	int16_t x195 = 7236;
	int8_t x196 = INT8_MAX;

	t22 = (x193%(x194%(x195*x196)));

	if (t22 != 22506) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x201 = 5785273976LLU;
	static uint32_t x203 = UINT32_MAX;
	uint16_t x204 = 23581U;
	volatile uint64_t t23 = 716339LLU;

	t23 = (x201%(x202%(x203*x204)));

	if (t23 != 5785273976LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x209 = 81U;
	int32_t x210 = INT32_MAX;
	static volatile int8_t x211 = INT8_MIN;
	int32_t t24 = -34862245;

	t24 = (x209%(x210%(x211*x212)));

	if (t24 != 81) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x214 = INT64_MIN;
	volatile int8_t x215 = INT8_MIN;
	int16_t x216 = 183;
	int64_t t25 = -3231666981943335349LL;

	t25 = (x213%(x214%(x215*x216)));

	if (t25 != 56LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x217 = UINT8_MAX;
	int64_t x219 = -1LL;
	int16_t x220 = INT16_MIN;
	int64_t t26 = 6LL;

	t26 = (x217%(x218%(x219*x220)));

	if (t26 != 255LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x230 = 3413895756394LLU;
	uint8_t x231 = 65U;
	int64_t x232 = 52LL;
	volatile uint64_t t27 = 31275271878LLU;

	t27 = (x229%(x230%(x231*x232)));

	if (t27 != 435LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x233 = 6526U;
	static int32_t x234 = INT32_MIN;
	uint32_t x235 = 146U;
	static uint16_t x236 = 11U;
	volatile uint32_t t28 = 311610U;

	t28 = (x233%(x234%(x235*x236)));

	if (t28 != 622U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x238 = INT16_MAX;
	int64_t x239 = 15718406363850722LL;
	static int8_t x240 = INT8_MIN;

	t29 = (x237%(x238%(x239*x240)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x241 = INT64_MIN;
	int32_t x242 = 33741;
	uint64_t x243 = UINT64_MAX;
	static int64_t x244 = INT64_MIN;
	static uint64_t t30 = 8163457630LLU;

	t30 = (x241%(x242%(x243*x244)));

	if (t30 != 15758LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x245 = -1;
	static volatile int8_t x246 = 22;
	int8_t x248 = INT8_MIN;

	t31 = (x245%(x246%(x247*x248)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x258 = INT16_MIN;
	uint64_t x259 = 561206840825094656LLU;
	uint64_t t32 = 318LLU;

	t32 = (x257%(x258%(x259*x260)));

	if (t32 != 9130342432702464LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x261 = INT8_MAX;
	volatile int64_t x262 = INT64_MIN;
	volatile int32_t x263 = INT32_MAX;
	static uint64_t t33 = 92LLU;

	t33 = (x261%(x262%(x263*x264)));

	if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x266 = -6;
	volatile int8_t x268 = 1;
	uint32_t t34 = 19471U;

	t34 = (x265%(x266%(x267*x268)));

	if (t34 != 147600763U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x270 = 549491560;
	uint32_t x271 = 19660U;
	volatile uint64_t x272 = UINT64_MAX;
	uint64_t t35 = 14679207822478500LLU;

	t35 = (x269%(x270%(x271*x272)));

	if (t35 != 424470135LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x273 = INT16_MIN;
	uint8_t x274 = 2U;
	int8_t x275 = 7;
	int8_t x276 = 15;
	static volatile int32_t t36 = 232171816;

	t36 = (x273%(x274%(x275*x276)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x277 = INT64_MAX;
	volatile int8_t x279 = 2;
	static volatile uint16_t x280 = 3U;
	volatile int64_t t37 = -1474534LL;

	t37 = (x277%(x278%(x279*x280)));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x281 = INT16_MAX;
	int32_t x282 = 981264260;
	uint64_t x283 = UINT64_MAX;
	static int32_t x284 = INT32_MIN;
	uint64_t t38 = 2224026175497201043LLU;

	t38 = (x281%(x282%(x283*x284)));

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x286 = UINT64_MAX;
	static uint64_t x287 = UINT64_MAX;
	int8_t x288 = 9;
	static uint64_t t39 = 19973284LLU;

	t39 = (x285%(x286%(x287*x288)));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = 12364LL;
	static uint8_t x291 = UINT8_MAX;
	uint32_t x292 = 6083U;
	static int64_t t40 = -7LL;

	t40 = (x289%(x290%(x291*x292)));

	if (t40 != -128LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	volatile int64_t x296 = -1LL;
	volatile int64_t t41 = 219691845187123LL;

	t41 = (x293%(x294%(x295*x296)));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x297 = -1;
	static uint64_t x299 = 3081710650776186117LLU;
	uint64_t x300 = 3813677742814LLU;
	uint64_t t42 = 1163LLU;

	t42 = (x297%(x298%(x299*x300)));

	if (t42 != 15LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x305 = UINT64_MAX;
	uint8_t x306 = 37U;
	int64_t x307 = -1LL;
	static int8_t x308 = INT8_MIN;
	uint64_t t43 = 58LLU;

	t43 = (x305%(x306%(x307*x308)));

	if (t43 != 11LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x309 = UINT8_MAX;
	uint16_t x310 = 1U;
	static uint64_t x311 = 550035900112917LLU;
	static volatile uint64_t t44 = 5019933511972002840LLU;

	t44 = (x309%(x310%(x311*x312)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x321 = 5LLU;
	int64_t x322 = -8055664LL;
	static volatile int8_t x324 = -1;
	uint64_t t45 = 11310451410692LLU;

	t45 = (x321%(x322%(x323*x324)));

	if (t45 != 5LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x330 = -112855;
	uint8_t x331 = 44U;
	int8_t x332 = -1;
	volatile uint64_t t46 = 33356252LLU;

	t46 = (x329%(x330%(x331*x332)));

	if (t46 != 64117438285350121LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = 249U;
	uint32_t t47 = 77534U;

	t47 = (x333%(x334%(x335*x336)));

	if (t47 != 4083U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x338 = 2U;
	uint16_t x339 = 30117U;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t48 = 1707155038298229116LLU;

	t48 = (x337%(x338%(x339*x340)));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x341 = 1569560101911LL;
	static int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	volatile int16_t x344 = -518;
	int64_t t49 = 1045542854753LL;

	t49 = (x341%(x342%(x343*x344)));

	if (t49 != 26647LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x350 = INT32_MAX;
	static int64_t x351 = -1LL;
	volatile uint32_t x352 = 56235116U;
	volatile int64_t t50 = 418026565LL;

	t50 = (x349%(x350%(x351*x352)));

	if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x353 = UINT32_MAX;
	static uint8_t x355 = 1U;
	uint64_t x356 = UINT64_MAX;
	uint64_t t51 = 57254LLU;

	t51 = (x353%(x354%(x355*x356)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x357 = INT32_MAX;
	volatile int32_t x359 = -1;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t52 = 15;

	t52 = (x357%(x358%(x359*x360)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x361 = INT16_MIN;
	static int32_t x362 = INT32_MIN;
	volatile uint64_t x363 = 220099LLU;
	volatile int64_t x364 = INT64_MIN;

	t53 = (x361%(x362%(x363*x364)));

	if (t53 != 4294934528LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x367 = INT16_MIN;
	uint64_t x368 = 3802844966LLU;
	uint64_t t54 = 1410872028613460445LLU;

	t54 = (x365%(x366%(x367*x368)));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x369 = INT16_MAX;
	static int32_t x370 = -119;
	volatile uint8_t x372 = 1U;
	volatile uint64_t t55 = 97864386916917LLU;

	t55 = (x369%(x370%(x371*x372)));

	if (t55 != 32767LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x374 = 601730U;
	volatile int8_t x375 = 3;
	int64_t t56 = 75460630605LL;

	t56 = (x373%(x374%(x375*x376)));

	if (t56 != -36688LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x393 = INT64_MIN;
	int16_t x395 = -1;
	static int16_t x396 = -6;

	t57 = (x393%(x394%(x395*x396)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x401 = INT64_MIN;
	uint8_t x402 = 1U;
	int16_t x403 = -1691;
	int16_t x404 = -9916;

	t58 = (x401%(x402%(x403*x404)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x405 = -187;
	uint32_t x406 = 2U;
	volatile int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MAX;
	volatile uint32_t t59 = 1U;

	t59 = (x405%(x406%(x407*x408)));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x417 = 164U;
	int8_t x418 = -1;
	uint32_t x420 = 4547U;
	volatile uint32_t t60 = 1U;

	t60 = (x417%(x418%(x419*x420)));

	if (t60 != 164U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x421 = -1;
	uint64_t x422 = 44823560LLU;
	uint8_t x423 = 68U;
	int16_t x424 = INT16_MIN;
	volatile uint64_t t61 = 158028566264434618LLU;

	t61 = (x421%(x422%(x423*x424)));

	if (t61 != 1676455LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x425 = INT64_MIN;
	uint64_t x426 = 3191785524327365602LLU;
	volatile int64_t x427 = 7566418697173LL;
	uint64_t t62 = 1LLU;

	t62 = (x425%(x426%(x427*x428)));

	if (t62 != 76162299786308LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x442 = -1;
	static uint8_t x443 = UINT8_MAX;
	static volatile int64_t x444 = -86246976LL;

	t63 = (x441%(x442%(x443*x444)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x445 = INT16_MIN;
	static int8_t x446 = INT8_MAX;
	uint8_t x447 = UINT8_MAX;
	volatile int32_t t64 = -32294;

	t64 = (x445%(x446%(x447*x448)));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x457 = INT16_MIN;
	int32_t x458 = INT32_MIN;
	int8_t x459 = -23;
	int8_t x460 = INT8_MIN;
	static int32_t t65 = 1;

	t65 = (x457%(x458%(x459*x460)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x469 = UINT32_MAX;
	static int8_t x470 = INT8_MIN;
	static int8_t x471 = INT8_MIN;
	uint16_t x472 = UINT16_MAX;
	static uint32_t t66 = 1103316079U;

	t66 = (x469%(x470%(x471*x472)));

	if (t66 != 127U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x473 = 0;
	uint16_t x475 = 10U;

	t67 = (x473%(x474%(x475*x476)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x477 = UINT16_MAX;
	int32_t x479 = 5;
	static int16_t x480 = INT16_MAX;

	t68 = (x477%(x478%(x479*x480)));

	if (t68 != 17) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x481 = 833625;
	static volatile int32_t x483 = INT32_MAX;
	uint32_t x484 = 59204291U;

	t69 = (x481%(x482%(x483*x484)));

	if (t69 != 833625LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x485 = INT16_MAX;
	volatile int32_t x487 = -3197;
	volatile uint8_t x488 = 2U;
	static int32_t t70 = 7063694;

	t70 = (x485%(x486%(x487*x488)));

	if (t70 != 49) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x490 = INT64_MAX;
	uint64_t x491 = 1620133LLU;
	volatile uint64_t t71 = 72636LLU;

	t71 = (x489%(x490%(x491*x492)));

	if (t71 != 4294967295LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x497 = 14U;
	static int64_t x498 = -1LL;
	static int8_t x500 = 5;
	int64_t t72 = 2949516244004060LL;

	t72 = (x497%(x498%(x499*x500)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x502 = -1LL;
	int16_t x503 = INT16_MAX;
	volatile int64_t t73 = 2LL;

	t73 = (x501%(x502%(x503*x504)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x505 = UINT64_MAX;
	int16_t x506 = INT16_MAX;
	static uint32_t x507 = UINT32_MAX;
	int64_t x508 = -4118183LL;
	static volatile uint64_t t74 = 1LLU;

	t74 = (x505%(x506%(x507*x508)));

	if (t74 != 15LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x517 = INT8_MAX;
	static int16_t x518 = -3;
	static int16_t x519 = INT16_MIN;
	volatile int32_t x520 = -1;
	volatile int32_t t75 = -537331985;

	t75 = (x517%(x518%(x519*x520)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x530 = UINT64_MAX;
	volatile uint8_t x531 = 3U;
	int8_t x532 = INT8_MIN;
	uint64_t t76 = 429774085LLU;

	t76 = (x529%(x530%(x531*x532)));

	if (t76 != 137LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x533 = 311U;
	volatile uint8_t x534 = 2U;
	static int16_t x535 = INT16_MIN;
	uint32_t x536 = UINT32_MAX;

	t77 = (x533%(x534%(x535*x536)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x538 = -3955;
	volatile int16_t x540 = 4908;
	static volatile int64_t t78 = -1LL;

	t78 = (x537%(x538%(x539*x540)));

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x549 = 52249922186508816LL;
	uint16_t x551 = 164U;
	uint32_t x552 = 1781403959U;

	t79 = (x549%(x550%(x551*x552)));

	if (t79 != 24527101LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x561 = 3U;
	volatile int16_t x562 = INT16_MIN;
	static uint32_t x563 = 373247622U;
	volatile uint32_t t80 = 1858328U;

	t80 = (x561%(x562%(x563*x564)));

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x579 = INT8_MIN;
	volatile int8_t x580 = -2;
	volatile int32_t t81 = 45;

	t81 = (x577%(x578%(x579*x580)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x581 = 18U;
	uint16_t x582 = 298U;
	int64_t x583 = -1LL;
	int16_t x584 = INT16_MAX;
	int64_t t82 = -4078849142864LL;

	t82 = (x581%(x582%(x583*x584)));

	if (t82 != 18LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x585 = -1;
	static int8_t x586 = -27;
	static volatile uint8_t x588 = UINT8_MAX;
	uint32_t t83 = 337177U;

	t83 = (x585%(x586%(x587*x588)));

	if (t83 != 195U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x593 = -2968;
	int8_t x594 = -1;
	uint16_t x596 = UINT16_MAX;
	volatile uint64_t t84 = 2830061214388LLU;

	t84 = (x593%(x594%(x595*x596)));

	if (t84 != 864626744934766223LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x597 = -1LL;
	uint8_t x599 = 1U;
	uint32_t x600 = 3853960U;
	int64_t t85 = -102187LL;

	t85 = (x597%(x598%(x599*x600)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x602 = -1;
	int8_t x603 = INT8_MIN;
	static uint16_t x604 = UINT16_MAX;
	volatile int32_t t86 = -1469;

	t86 = (x601%(x602%(x603*x604)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x617 = INT8_MIN;
	static int32_t x618 = 296;
	uint32_t x619 = UINT32_MAX;
	static uint16_t x620 = 36U;
	volatile uint32_t t87 = 7670U;

	t87 = (x617%(x618%(x619*x620)));

	if (t87 != 64U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x625 = UINT32_MAX;
	int8_t x626 = -1;
	static int8_t x628 = INT8_MAX;
	uint32_t t88 = 121U;

	t88 = (x625%(x626%(x627*x628)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x629 = 79;
	static uint32_t x632 = 25764084U;
	static volatile uint64_t t89 = 891206861LLU;

	t89 = (x629%(x630%(x631*x632)));

	if (t89 != 79LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x633 = UINT64_MAX;
	uint64_t x634 = 2949882830LLU;
	uint64_t x635 = UINT64_MAX;
	volatile uint8_t x636 = 79U;

	t90 = (x633%(x634%(x635*x636)));

	if (t90 != 473804815LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x649 = 1342346173685LLU;
	int16_t x650 = INT16_MIN;
	int32_t x651 = 48446;
	int16_t x652 = INT16_MAX;
	uint64_t t91 = 3489191393077404LLU;

	t91 = (x649%(x650%(x651*x652)));

	if (t91 != 1342346173685LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x653 = 189496798285LLU;
	volatile uint8_t x654 = 13U;
	uint16_t x655 = 603U;
	int16_t x656 = 52;
	uint64_t t92 = 1LLU;

	t92 = (x653%(x654%(x655*x656)));

	if (t92 != 2LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x661 = -49;
	static uint16_t x662 = UINT16_MAX;
	uint16_t x663 = 1876U;
	static volatile int8_t x664 = INT8_MIN;
	static volatile int32_t t93 = -719155740;

	t93 = (x661%(x662%(x663*x664)));

	if (t93 != -49) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x666 = INT16_MIN;
	int8_t x667 = 2;
	uint16_t x668 = UINT16_MAX;
	int32_t t94 = -1019672;

	t94 = (x665%(x666%(x667*x668)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x674 = 117U;
	int64_t x675 = INT64_MAX;
	uint64_t x676 = 139800986165238LLU;

	t95 = (x673%(x674%(x675*x676)));

	if (t95 != 5LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x677 = INT64_MAX;
	int32_t x679 = INT32_MAX;
	uint64_t x680 = 24764LLU;
	volatile uint64_t t96 = 3365494815LLU;

	t96 = (x677%(x678%(x679*x680)));

	if (t96 != 7LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x681 = UINT64_MAX;
	int64_t x682 = INT64_MIN;
	int32_t x683 = 15763683;
	uint64_t x684 = 68964664490188LLU;
	volatile uint64_t t97 = 53648729443818190LLU;

	t97 = (x681%(x682%(x683*x684)));

	if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x691 = INT32_MAX;
	int32_t x692 = -1;
	static int32_t t98 = 667;

	t98 = (x689%(x690%(x691*x692)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x693 = INT32_MAX;
	int8_t x695 = INT8_MAX;
	uint32_t t99 = 1343U;

	t99 = (x693%(x694%(x695*x696)));

	if (t99 != 10U) { NG(); } else { ; }
	
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

