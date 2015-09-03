#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 89813881LL;
volatile uint8_t x6 = UINT8_MAX;
int32_t x7 = 1043095;
int16_t x9 = -1;
static int8_t x14 = -1;
static int16_t x27 = 122;
uint8_t x33 = 40U;
int32_t x46 = -1;
uint16_t x47 = 24U;
volatile int8_t x54 = INT8_MIN;
int16_t x57 = INT16_MAX;
int64_t t11 = -1357279LL;
static uint16_t x62 = 5604U;
uint32_t x69 = 54U;
uint64_t x83 = UINT64_MAX;
uint8_t x88 = 35U;
static uint16_t x93 = 27106U;
int8_t x95 = INT8_MIN;
static int64_t t18 = 743594307402LL;
int64_t t19 = 375104198685LL;
static uint64_t x105 = 7480363755LLU;
uint8_t x108 = 98U;
volatile uint64_t t20 = 1943155279387164324LLU;
int32_t x112 = INT32_MAX;
int64_t t21 = 24315920048LL;
volatile int32_t x121 = -247654;
static int32_t x127 = INT32_MIN;
static volatile int32_t x129 = 71315;
uint64_t x159 = 19687066LLU;
static volatile int8_t x160 = -1;
static volatile int64_t t32 = -107287389LL;
volatile int8_t x179 = INT8_MIN;
volatile int64_t t33 = 599822631LL;
uint64_t x184 = 6LLU;
volatile uint64_t t34 = 47649244939628547LLU;
uint64_t x185 = UINT64_MAX;
static int32_t x187 = -1;
volatile uint32_t t36 = 80385599U;
uint8_t x194 = 0U;
int64_t x201 = INT64_MIN;
volatile int8_t x203 = INT8_MIN;
int64_t t40 = -118529LL;
static volatile uint32_t t43 = 27104572U;
volatile uint32_t x281 = UINT32_MAX;
int64_t x289 = INT64_MAX;
int8_t x291 = 1;
static volatile int16_t x305 = INT16_MIN;
static int16_t x307 = -1;
uint32_t t51 = 1648455577U;
static int8_t x309 = -1;
int16_t x310 = -1;
int16_t x323 = -1;
volatile uint64_t t55 = 3LLU;
int8_t x332 = -1;
int32_t t59 = -891;
int16_t x386 = INT16_MIN;
volatile int8_t x387 = 0;
volatile int64_t x399 = 411LL;
volatile uint8_t x403 = 7U;
volatile int64_t t64 = 41192LL;
int16_t x419 = -1;
int32_t x439 = 5;
static uint32_t x445 = 2069U;
static int32_t x446 = -1;
int8_t x447 = INT8_MAX;
static volatile uint8_t x448 = 2U;
static volatile uint32_t t71 = 288U;
int8_t x449 = INT8_MAX;
volatile int32_t t72 = 14536852;
int8_t x459 = INT8_MIN;
volatile int64_t x472 = INT64_MAX;
int32_t x473 = 38326;
static volatile int32_t t75 = -1;
uint32_t x483 = UINT32_MAX;
int16_t x492 = -1;
static volatile uint32_t t79 = 50U;
int8_t x507 = INT8_MAX;
int16_t x528 = -1;
int16_t x537 = -1;
static int64_t x538 = -1LL;
int64_t x541 = -1LL;
int16_t x544 = INT16_MIN;
int64_t t87 = -126781LL;
static int64_t x552 = INT64_MIN;
int16_t x564 = INT16_MAX;
volatile uint64_t x569 = UINT64_MAX;
volatile int8_t x571 = -21;
int8_t x591 = INT8_MAX;
static int16_t x597 = INT16_MIN;
int16_t x598 = INT16_MAX;
static int64_t x600 = INT64_MIN;
volatile uint64_t t96 = 363LLU;
int16_t x614 = INT16_MIN;
static int32_t t99 = 93854057;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int16_t x2 = 38;
	static int64_t x3 = -11093050LL;
	int64_t x4 = -589800LL;

	t0 = ((x1|(x2*x3))%x4);

	if (t0 != -28LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 65U;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -1;

	t1 = ((x5|(x6*x7))%x8);

	if (t1 != 265989225) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = -1;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 1;

	t2 = ((x9|(x10*x11))%x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	int64_t x15 = -1LL;
	int64_t x16 = 33199212158570495LL;
	volatile int64_t t3 = -2184953111574236038LL;

	t3 = ((x13|(x14*x15))%x16);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -212;
	uint32_t x26 = UINT32_MAX;
	int8_t x28 = -1;
	uint32_t t4 = 18U;

	t4 = ((x25|(x26*x27))%x28);

	if (t4 != 4294967214U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 0U;
	volatile int32_t x30 = 181;
	uint8_t x31 = 29U;
	uint32_t x32 = 415269288U;
	static volatile uint32_t t5 = 350773662U;

	t5 = ((x29|(x30*x31))%x32);

	if (t5 != 5249U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x34 = -1;
	volatile int8_t x35 = INT8_MIN;
	int64_t x36 = 2150686514662656640LL;
	int64_t t6 = 25406711167608173LL;

	t6 = ((x33|(x34*x35))%x36);

	if (t6 != 168LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -44;
	uint32_t x38 = UINT32_MAX;
	int32_t x39 = INT32_MAX;
	int64_t x40 = -1LL;
	static volatile int64_t t7 = 199770001446128450LL;

	t7 = ((x37|(x38*x39))%x40);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	static int32_t t8 = 654753;

	t8 = ((x45|(x46*x47))%x48);

	if (t8 != -24) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 90U;
	uint8_t x50 = 0U;
	int64_t x51 = -1LL;
	uint32_t x52 = UINT32_MAX;
	static int64_t t9 = -510880116231LL;

	t9 = ((x49|(x50*x51))%x52);

	if (t9 != 90LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x53 = INT8_MIN;
	uint16_t x55 = 27U;
	int8_t x56 = INT8_MIN;
	int32_t t10 = 30782897;

	t10 = ((x53|(x54*x55))%x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x58 = -21333;
	int64_t x59 = -1032159LL;
	uint16_t x60 = 43U;

	t11 = ((x57|(x58*x59))%x60);

	if (t11 != 15LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	uint16_t x63 = UINT16_MAX;
	uint64_t x64 = UINT64_MAX;
	uint64_t t12 = 121070171535759577LLU;

	t12 = ((x61|(x62*x63))%x64);

	if (t12 != 18446744071929326108LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = INT8_MIN;
	static int64_t x66 = -1LL;
	int32_t x67 = -1;
	int32_t x68 = -8;
	volatile int64_t t13 = -2290517LL;

	t13 = ((x65|(x66*x67))%x68);

	if (t13 != -7LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x70 = UINT8_MAX;
	static volatile uint32_t x71 = 0U;
	uint16_t x72 = 2U;
	uint32_t t14 = 1861771U;

	t14 = ((x69|(x70*x71))%x72);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -1;
	int16_t x82 = -193;
	static volatile uint16_t x84 = UINT16_MAX;
	uint64_t t15 = 4833LLU;

	t15 = ((x81|(x82*x83))%x84);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = 0U;
	uint64_t x86 = 43115866LLU;
	static int16_t x87 = INT16_MAX;
	volatile uint64_t t16 = 52LLU;

	t16 = ((x85|(x86*x87))%x88);

	if (t16 != 7LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x90 = -2;
	volatile int8_t x91 = -2;
	int32_t x92 = 1;
	uint32_t t17 = 62U;

	t17 = ((x89|(x90*x91))%x92);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x94 = -1;
	int64_t x96 = -5LL;

	t18 = ((x93|(x94*x95))%x96);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	static int32_t x98 = 3;
	uint8_t x99 = 29U;
	int32_t x100 = 324573;

	t19 = ((x97|(x98*x99))%x100);

	if (t19 != -261773LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x106 = 1U;
	uint32_t x107 = 28614721U;

	t20 = ((x105|(x106*x107))%x108);

	if (t20 != 85LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	static volatile int16_t x110 = INT16_MIN;
	int64_t x111 = -1014976484129LL;

	t21 = ((x109|(x110*x111))%x112);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x113 = UINT8_MAX;
	static uint32_t x114 = 10266U;
	uint8_t x115 = 0U;
	volatile uint64_t x116 = UINT64_MAX;
	uint64_t t22 = 26655562896LLU;

	t22 = ((x113|(x114*x115))%x116);

	if (t22 != 255LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x122 = INT8_MAX;
	static volatile uint8_t x123 = UINT8_MAX;
	int64_t x124 = -247163605LL;
	static int64_t t23 = 3659LL;

	t23 = ((x121|(x122*x123))%x124);

	if (t23 != -229733LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = -425732709841289968LL;
	uint32_t x126 = UINT32_MAX;
	static int16_t x128 = 13;
	int64_t t24 = -3114232465053652221LL;

	t24 = ((x125|(x126*x127))%x128);

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x130 = UINT64_MAX;
	int64_t x131 = -1LL;
	uint64_t x132 = UINT64_MAX;
	static volatile uint64_t t25 = 7905LLU;

	t25 = ((x129|(x130*x131))%x132);

	if (t25 != 71315LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x149 = UINT32_MAX;
	uint16_t x150 = 370U;
	static uint16_t x151 = UINT16_MAX;
	uint64_t x152 = 178LLU;
	volatile uint64_t t26 = 87318633376744LLU;

	t26 = ((x149|(x150*x151))%x152);

	if (t26 != 133LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x153 = 478133342U;
	int16_t x154 = INT16_MAX;
	volatile uint32_t x155 = 3U;
	uint32_t x156 = UINT32_MAX;
	uint32_t t27 = 472484414U;

	t27 = ((x153|(x154*x155))%x156);

	if (t27 != 478150655U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x157 = INT32_MAX;
	int32_t x158 = INT32_MAX;
	static uint64_t t28 = 12114037009LLU;

	t28 = ((x157|(x158*x159))%x160);

	if (t28 != 42277652312096767LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = INT16_MIN;
	volatile uint32_t x162 = 66774104U;
	int16_t x163 = -1;
	int32_t x164 = INT32_MIN;
	static volatile uint32_t t29 = 6338U;

	t29 = ((x161|(x162*x163))%x164);

	if (t29 != 2147457960U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x165 = 327882231LLU;
	int8_t x166 = INT8_MIN;
	uint8_t x167 = 1U;
	volatile int32_t x168 = INT32_MIN;
	static uint64_t t30 = 1587311493429056LLU;

	t30 = ((x165|(x166*x167))%x168);

	if (t30 != 2147483639LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = INT64_MAX;
	uint64_t x170 = 1720355867LLU;
	int16_t x171 = -6;
	int8_t x172 = -56;
	uint64_t t31 = 20246958LLU;

	t31 = ((x169|(x170*x171))%x172);

	if (t31 != 55LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	uint8_t x174 = 7U;
	uint32_t x175 = 2U;
	int64_t x176 = -3155764182LL;

	t32 = ((x173|(x174*x175))%x176);

	if (t32 != 1139170360LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = -1874;
	int16_t x178 = INT16_MAX;
	int64_t x180 = -1LL;

	t33 = ((x177|(x178*x179))%x180);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = UINT8_MAX;
	static uint16_t x182 = 3U;
	uint16_t x183 = UINT16_MAX;

	t34 = ((x181|(x182*x183))%x184);

	if (t34 != 5LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x186 = INT32_MAX;
	volatile int32_t x188 = INT32_MIN;
	uint64_t t35 = 7106509615263787315LLU;

	t35 = ((x185|(x186*x187))%x188);

	if (t35 != 2147483647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x189 = 23549U;
	uint8_t x190 = 7U;
	static uint8_t x191 = UINT8_MAX;
	int16_t x192 = INT16_MIN;

	t36 = ((x189|(x190*x191))%x192);

	if (t36 != 24573U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x193 = -1;
	volatile int16_t x195 = INT16_MIN;
	int64_t x196 = -19227LL;
	int64_t t37 = -105648364217LL;

	t37 = ((x193|(x194*x195))%x196);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x202 = -1LL;
	int32_t x204 = -1;
	volatile int64_t t38 = -15253290329009LL;

	t38 = ((x201|(x202*x203))%x204);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x217 = INT16_MIN;
	static int32_t x218 = INT32_MAX;
	int8_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	int32_t t39 = -708112015;

	t39 = ((x217|(x218*x219))%x220);

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x229 = -1;
	int8_t x230 = 1;
	int64_t x231 = -1LL;
	uint16_t x232 = 377U;

	t40 = ((x229|(x230*x231))%x232);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x233 = 8089863698144900057LLU;
	int32_t x234 = -397;
	static uint32_t x235 = 4U;
	int32_t x236 = INT32_MIN;
	uint64_t t41 = 7274301480873LLU;

	t41 = ((x233|(x234*x235))%x236);

	if (t41 != 8089863698526501853LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	static uint64_t x240 = UINT64_MAX;
	volatile uint64_t t42 = 1086012013LLU;

	t42 = ((x237|(x238*x239))%x240);

	if (t42 != 2147483647LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x245 = UINT32_MAX;
	int16_t x246 = INT16_MAX;
	static int16_t x247 = 3675;
	static uint32_t x248 = UINT32_MAX;

	t43 = ((x245|(x246*x247))%x248);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x249 = -9;
	volatile uint32_t x250 = 1132831948U;
	volatile uint8_t x251 = 32U;
	int32_t x252 = 3;
	volatile uint32_t t44 = 5U;

	t44 = ((x249|(x250*x251))%x252);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x257 = 109;
	int64_t x258 = 14LL;
	volatile uint16_t x259 = 24U;
	uint64_t x260 = 226669901679LLU;
	volatile uint64_t t45 = 11214LLU;

	t45 = ((x257|(x258*x259))%x260);

	if (t45 != 381LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x269 = UINT64_MAX;
	static int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MAX;
	uint16_t x272 = 196U;
	volatile uint64_t t46 = 196478LLU;

	t46 = ((x269|(x270*x271))%x272);

	if (t46 != 99LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = 43LL;
	uint64_t x284 = 10425LLU;
	static uint64_t t47 = 4036193876167LLU;

	t47 = ((x281|(x282*x283))%x284);

	if (t47 != 2820LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x290 = 2699U;
	int32_t x292 = INT32_MIN;
	int64_t t48 = 5526LL;

	t48 = ((x289|(x290*x291))%x292);

	if (t48 != 2147483647LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x297 = 242294250553LL;
	uint64_t x298 = 130013460635LLU;
	int8_t x299 = 6;
	int32_t x300 = INT32_MAX;
	volatile uint64_t t49 = 93550LLU;

	t49 = ((x297|(x298*x299))%x300);

	if (t49 != 1778377014LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x301 = INT8_MIN;
	int8_t x302 = -1;
	volatile int32_t x303 = INT32_MAX;
	static int16_t x304 = INT16_MIN;
	int32_t t50 = -34728;

	t50 = ((x301|(x302*x303))%x304);

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x306 = UINT32_MAX;
	int8_t x308 = INT8_MIN;

	t51 = ((x305|(x306*x307))%x308);

	if (t51 != 4294934529U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x311 = -1;
	int8_t x312 = -1;
	static int32_t t52 = 528620665;

	t52 = ((x309|(x310*x311))%x312);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x313 = INT32_MAX;
	int64_t x314 = INT64_MIN;
	volatile uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MAX;
	volatile uint64_t t53 = 139885LLU;

	t53 = ((x313|(x314*x315))%x316);

	if (t53 != 2147483648LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	static volatile int8_t x322 = INT8_MIN;
	static volatile int8_t x324 = -1;
	uint64_t t54 = 165827926613LLU;

	t54 = ((x321|(x322*x323))%x324);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x325 = INT32_MAX;
	uint64_t x326 = 3251788645LLU;
	static int32_t x327 = -1;
	volatile uint32_t x328 = UINT32_MAX;

	t55 = ((x325|(x326*x327))%x328);

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x329 = INT32_MIN;
	static uint16_t x330 = 931U;
	uint16_t x331 = 12U;
	volatile int32_t t56 = 6411;

	t56 = ((x329|(x330*x331))%x332);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x337 = -1;
	int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = 9U;
	int32_t t57 = -56863333;

	t57 = ((x337|(x338*x339))%x340);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = -1;
	static volatile int8_t x351 = -1;
	static uint16_t x352 = 684U;
	volatile int32_t t58 = -3600;

	t58 = ((x349|(x350*x351))%x352);

	if (t58 != -667) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = INT16_MAX;
	int32_t x368 = 1705626;

	t59 = ((x365|(x366*x367))%x368);

	if (t59 != -255) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int64_t x374 = 39529LL;
	int16_t x375 = INT16_MAX;
	int32_t x376 = INT32_MAX;
	int64_t t60 = -3272731LL;

	t60 = ((x373|(x374*x375))%x376);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x385 = UINT8_MAX;
	int64_t x388 = 51036362495742LL;
	volatile int64_t t61 = -21072931LL;

	t61 = ((x385|(x386*x387))%x388);

	if (t61 != 255LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x389 = INT32_MAX;
	uint8_t x390 = 1U;
	uint16_t x391 = 1293U;
	int16_t x392 = INT16_MIN;
	int32_t t62 = -23039;

	t62 = ((x389|(x390*x391))%x392);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x397 = -1;
	int16_t x398 = -6702;
	int16_t x400 = INT16_MIN;
	int64_t t63 = -10256201639419LL;

	t63 = ((x397|(x398*x399))%x400);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x401 = 55U;
	int64_t x402 = -30220436636331810LL;
	int16_t x404 = 662;

	t64 = ((x401|(x402*x403))%x404);

	if (t64 != -195LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x409 = 6U;
	uint16_t x410 = 11062U;
	int32_t x411 = -1;
	uint64_t x412 = 445894795734793955LLU;
	uint64_t t65 = 637152624432320LLU;

	t65 = ((x409|(x410*x411))%x412);

	if (t65 != 165057448582988403LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x413 = INT8_MIN;
	static volatile int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MIN;
	volatile int64_t x416 = INT64_MAX;
	int64_t t66 = 6440436715LL;

	t66 = ((x413|(x414*x415))%x416);

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x417 = INT16_MIN;
	static int64_t x418 = INT64_MAX;
	int32_t x420 = INT32_MIN;
	int64_t t67 = -9LL;

	t67 = ((x417|(x418*x419))%x420);

	if (t67 != -32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x433 = INT32_MIN;
	static int32_t x434 = INT32_MAX;
	static volatile int32_t x435 = -1;
	static uint16_t x436 = 71U;
	int32_t t68 = -137;

	t68 = ((x433|(x434*x435))%x436);

	if (t68 != -39) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x437 = 2246U;
	static uint8_t x438 = UINT8_MAX;
	int32_t x440 = INT32_MIN;
	int32_t t69 = -34638995;

	t69 = ((x437|(x438*x439))%x440);

	if (t69 != 3327) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x441 = INT32_MIN;
	volatile int64_t x442 = -21LL;
	volatile int8_t x443 = INT8_MIN;
	int32_t x444 = INT32_MAX;
	int64_t t70 = 7384LL;

	t70 = ((x441|(x442*x443))%x444);

	if (t70 != -2147480960LL) { NG(); } else { ; }
	
}

void f71(void) {


	t71 = ((x445|(x446*x447))%x448);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x450 = 105U;
	volatile int8_t x451 = INT8_MAX;
	volatile uint16_t x452 = 95U;

	t72 = ((x449|(x450*x451))%x452);

	if (t72 != 44) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x457 = INT64_MIN;
	uint64_t x458 = 25096486LLU;
	int64_t x460 = 75328159839925320LL;
	volatile uint64_t t73 = 1929LLU;

	t73 = ((x457|(x458*x459))%x460);

	if (t73 != 66673069555423328LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x469 = -8403;
	uint64_t x470 = 1108004983730545LLU;
	int32_t x471 = -10304;
	uint64_t t74 = 9733419008LLU;

	t74 = ((x469|(x470*x471))%x472);

	if (t74 != 9223372036854775790LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x474 = 0;
	static int32_t x475 = -1;
	int8_t x476 = INT8_MIN;

	t75 = ((x473|(x474*x475))%x476);

	if (t75 != 54) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x481 = INT32_MIN;
	static volatile uint16_t x482 = 0U;
	int64_t x484 = -1LL;
	volatile int64_t t76 = 1600912461087380LL;

	t76 = ((x481|(x482*x483))%x484);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x489 = 108U;
	int64_t x490 = -1LL;
	int16_t x491 = INT16_MIN;
	volatile int64_t t77 = -330572LL;

	t77 = ((x489|(x490*x491))%x492);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x493 = 403U;
	int16_t x494 = INT16_MIN;
	int16_t x495 = -3901;
	int8_t x496 = -1;
	volatile uint32_t t78 = 2058U;

	t78 = ((x493|(x494*x495))%x496);

	if (t78 != 127828371U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x497 = 106843824;
	static uint32_t x498 = UINT32_MAX;
	int32_t x499 = -5930686;
	static uint16_t x500 = 9U;

	t79 = ((x497|(x498*x499))%x500);

	if (t79 != 8U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x501 = -1;
	int8_t x502 = -50;
	int8_t x503 = -6;
	uint64_t x504 = 1836067LLU;
	uint64_t t80 = 133828LLU;

	t80 = ((x501|(x502*x503))%x504);

	if (t80 != 1279610LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x505 = 301325LLU;
	volatile uint32_t x506 = UINT32_MAX;
	volatile int32_t x508 = INT32_MAX;
	volatile uint64_t t81 = 1026925343LLU;

	t81 = ((x505|(x506*x507))%x508);

	if (t81 != 2147483534LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x509 = -443225;
	static uint8_t x510 = 2U;
	int16_t x511 = INT16_MIN;
	volatile uint16_t x512 = UINT16_MAX;
	volatile int32_t t82 = 274932230;

	t82 = ((x509|(x510*x511))%x512);

	if (t82 != -50009) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x521 = INT64_MIN;
	uint16_t x522 = UINT16_MAX;
	int16_t x523 = INT16_MAX;
	volatile int64_t x524 = -431873860LL;
	volatile int64_t t83 = 422679521896166319LL;

	t83 = ((x521|(x522*x523))%x524);

	if (t83 != -397215843LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x525 = 254U;
	int16_t x526 = -23;
	int16_t x527 = 0;
	volatile int32_t t84 = -1405560;

	t84 = ((x525|(x526*x527))%x528);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x529 = INT64_MIN;
	int8_t x530 = INT8_MAX;
	int8_t x531 = INT8_MIN;
	int16_t x532 = -28;
	volatile int64_t t85 = 2154LL;

	t85 = ((x529|(x530*x531))%x532);

	if (t85 != -16LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x539 = INT8_MIN;
	int8_t x540 = -1;
	int64_t t86 = -1395LL;

	t86 = ((x537|(x538*x539))%x540);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x542 = 320958795657527LL;
	uint8_t x543 = UINT8_MAX;

	t87 = ((x541|(x542*x543))%x544);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x549 = 6U;
	uint64_t x550 = UINT64_MAX;
	uint32_t x551 = 543170U;
	uint64_t t88 = 15LLU;

	t88 = ((x549|(x550*x551))%x552);

	if (t88 != 9223372036854232638LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x553 = -19;
	uint8_t x554 = UINT8_MAX;
	uint16_t x555 = UINT16_MAX;
	uint64_t x556 = 29LLU;
	volatile uint64_t t89 = 822LLU;

	t89 = ((x553|(x554*x555))%x556);

	if (t89 != 5LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x557 = UINT8_MAX;
	uint8_t x558 = 7U;
	uint64_t x559 = 6262303LLU;
	int8_t x560 = INT8_MIN;
	volatile uint64_t t90 = 275LLU;

	t90 = ((x557|(x558*x559))%x560);

	if (t90 != 43836159LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x561 = 434517083468645960LL;
	static uint16_t x562 = UINT16_MAX;
	uint32_t x563 = UINT32_MAX;
	volatile int64_t t91 = -12379771944379217LL;

	t91 = ((x561|(x562*x563))%x564);

	if (t91 != 21114LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x570 = 485539LL;
	int64_t x572 = 1386395730157LL;
	uint64_t t92 = 18938267LLU;

	t92 = ((x569|(x570*x571))%x572);

	if (t92 != 230276381835LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x577 = 5;
	int16_t x578 = INT16_MAX;
	volatile int32_t x579 = -156;
	static volatile int8_t x580 = 14;
	static volatile int32_t t93 = -38585522;

	t93 = ((x577|(x578*x579))%x580);

	if (t93 != -13) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x589 = 17104U;
	int16_t x590 = INT16_MIN;
	volatile uint64_t x592 = 245202LLU;
	static volatile uint64_t t94 = 28180435873505878LLU;

	t94 = ((x589|(x590*x591))%x592);

	if (t94 != 33066LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x599 = -1;
	volatile int64_t t95 = -42166LL;

	t95 = ((x597|(x598*x599))%x600);

	if (t95 != -32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x601 = 2952495LLU;
	int16_t x602 = INT16_MIN;
	uint8_t x603 = 28U;
	volatile int32_t x604 = -1;

	t96 = ((x601|(x602*x603))%x604);

	if (t96 != 18446744073709489455LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x605 = 6U;
	volatile int16_t x606 = -1;
	uint32_t x607 = 60109575U;
	int8_t x608 = INT8_MIN;
	volatile uint32_t t97 = 8327250U;

	t97 = ((x605|(x606*x607))%x608);

	if (t97 != 4234857727U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x613 = INT64_MAX;
	int16_t x615 = INT16_MIN;
	int32_t x616 = -1;
	int64_t t98 = -33585526LL;

	t98 = ((x613|(x614*x615))%x616);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x617 = 4780U;
	static int8_t x618 = INT8_MAX;
	static int16_t x619 = INT16_MIN;
	int32_t x620 = 280;

	t99 = ((x617|(x618*x619))%x620);

	if (t99 != -156) { NG(); } else { ; }
	
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

