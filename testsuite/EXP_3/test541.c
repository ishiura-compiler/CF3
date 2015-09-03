#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int32_t x10 = -1;
int32_t t1 = 84409;
static int64_t x18 = -1LL;
static int64_t x22 = 479574LL;
int32_t x23 = -1;
int16_t x24 = -63;
uint64_t x40 = UINT64_MAX;
uint16_t x45 = 18967U;
int32_t x60 = 923649120;
int32_t x66 = 0;
static volatile int8_t x73 = -1;
uint8_t x77 = 1U;
static int8_t x79 = -1;
uint16_t x82 = 15580U;
int16_t x86 = 6;
volatile int32_t t18 = -1391;
static uint8_t x109 = 126U;
int32_t x111 = 807670546;
volatile uint8_t x120 = UINT8_MAX;
uint8_t x127 = UINT8_MAX;
volatile int32_t t23 = 69;
uint16_t x141 = 19349U;
static volatile int64_t x151 = -1LL;
int16_t x153 = INT16_MIN;
int16_t x154 = INT16_MAX;
int64_t x155 = 215987LL;
static int32_t t27 = -19070651;
static uint64_t x158 = UINT64_MAX;
int16_t x165 = INT16_MIN;
int64_t x172 = -2083907609364930230LL;
int16_t x173 = -29;
int16_t x174 = INT16_MIN;
static uint8_t x188 = 37U;
uint16_t x193 = 1155U;
volatile int32_t t36 = -430;
int32_t x202 = INT32_MIN;
int16_t x211 = INT16_MIN;
static int16_t x212 = INT16_MAX;
static volatile int16_t x217 = 10;
uint32_t x218 = 38839U;
int8_t x220 = INT8_MAX;
int16_t x221 = -1;
int16_t x222 = 228;
int32_t t41 = 582555;
uint64_t x233 = UINT64_MAX;
int16_t x235 = INT16_MIN;
uint8_t x240 = 43U;
int32_t t43 = -26618732;
int16_t x241 = 56;
int64_t x243 = -254858461LL;
volatile uint64_t x249 = UINT64_MAX;
uint64_t x252 = 865LLU;
uint32_t x259 = 1735025U;
int8_t x273 = -1;
int32_t x302 = INT32_MIN;
volatile int16_t x305 = -12;
volatile uint32_t x310 = 4U;
static volatile int64_t x314 = -1LL;
int16_t x321 = INT16_MAX;
static int32_t t57 = -43626;
uint64_t x339 = UINT64_MAX;
static int8_t x343 = 12;
int8_t x346 = -1;
uint16_t x347 = 1431U;
int32_t t61 = 7;
uint64_t x359 = 26374909965827LLU;
int64_t x360 = INT64_MIN;
volatile uint64_t x367 = 7LLU;
int16_t x375 = 208;
uint8_t x377 = 11U;
static volatile uint16_t x378 = UINT16_MAX;
int32_t t68 = 8545;
int64_t x389 = -1LL;
int16_t x391 = INT16_MIN;
static int32_t t69 = -89649892;
volatile int8_t x397 = INT8_MIN;
uint8_t x404 = UINT8_MAX;
int16_t x405 = INT16_MAX;
static int32_t x415 = INT32_MAX;
int32_t t74 = -5542;
int32_t x425 = INT32_MAX;
volatile int32_t t75 = 11720732;
int16_t x436 = INT16_MIN;
int8_t x445 = INT8_MAX;
int8_t x454 = INT8_MIN;
static uint64_t x456 = UINT64_MAX;
uint8_t x473 = 14U;
static int8_t x476 = INT8_MIN;
volatile int32_t t85 = -1755;
uint8_t x486 = UINT8_MAX;
static uint16_t x487 = 14U;
int64_t x488 = INT64_MIN;
int32_t t87 = -1;
volatile int64_t x501 = -1LL;
volatile int8_t x509 = INT8_MAX;
uint8_t x521 = UINT8_MAX;
uint32_t x523 = UINT32_MAX;
int32_t x532 = INT32_MIN;
volatile int32_t x536 = INT32_MIN;
int32_t t95 = -288;
int32_t x574 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = -7878;

	t0 = ((x1*x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -4;
	int64_t x11 = -54979266261548LL;
	uint64_t x12 = UINT64_MAX;

	t1 = ((x9*x10)==(x11/x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 113;
	int32_t x19 = 83233253;
	uint16_t x20 = 3108U;
	volatile int32_t t2 = 9847925;

	t2 = ((x17*x18)==(x19/x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	static volatile int32_t t3 = -494644;

	t3 = ((x21*x22)==(x23/x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	volatile int32_t x26 = INT32_MAX;
	int8_t x27 = -1;
	int64_t x28 = -26737961817689097LL;
	volatile int32_t t4 = -1;

	t4 = ((x25*x26)==(x27/x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = INT32_MIN;
	uint32_t x30 = 7683U;
	static uint8_t x31 = UINT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t5 = -1;

	t5 = ((x29*x30)==(x31/x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 124U;
	int8_t x38 = INT8_MAX;
	volatile int16_t x39 = INT16_MIN;
	int32_t t6 = 7245;

	t6 = ((x37*x38)==(x39/x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x46 = INT8_MIN;
	int16_t x47 = -1514;
	uint8_t x48 = 60U;
	volatile int32_t t7 = 44;

	t7 = ((x45*x46)==(x47/x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;
	volatile int64_t x52 = INT64_MAX;
	static volatile int32_t t8 = 1979;

	t8 = ((x49*x50)==(x51/x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	uint8_t x54 = 1U;
	static volatile int64_t x55 = 353LL;
	int32_t x56 = 223;
	static int32_t t9 = -11730;

	t9 = ((x53*x54)==(x55/x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = 1;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = -1LL;
	int32_t t10 = 2199;

	t10 = ((x57*x58)==(x59/x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = 1872585;
	uint64_t x62 = 8037547497LLU;
	volatile int32_t x63 = INT32_MIN;
	uint32_t x64 = UINT32_MAX;
	int32_t t11 = -1;

	t11 = ((x61*x62)==(x63/x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t12 = -237056;

	t12 = ((x65*x66)==(x67/x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 3U;
	uint8_t x70 = UINT8_MAX;
	int64_t x71 = INT64_MAX;
	uint16_t x72 = 24244U;
	volatile int32_t t13 = -4806381;

	t13 = ((x69*x70)==(x71/x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x74 = 943296333U;
	volatile int32_t x75 = INT32_MAX;
	static volatile int8_t x76 = INT8_MAX;
	int32_t t14 = 0;

	t14 = ((x73*x74)==(x75/x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x78 = INT16_MIN;
	uint32_t x80 = 110748U;
	int32_t t15 = -158;

	t15 = ((x77*x78)==(x79/x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -10646;
	static uint8_t x83 = 7U;
	volatile uint8_t x84 = 19U;
	int32_t t16 = 27;

	t16 = ((x81*x82)==(x83/x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = -13058;
	int32_t x87 = 36;
	int16_t x88 = -1;
	volatile int32_t t17 = 24;

	t17 = ((x85*x86)==(x87/x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = INT32_MAX;
	volatile uint64_t x98 = 32325643947LLU;
	int16_t x99 = 13951;
	int64_t x100 = INT64_MIN;

	t18 = ((x97*x98)==(x99/x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 26U;
	static int64_t x102 = 111282059202LL;
	int32_t x103 = -576097487;
	int8_t x104 = INT8_MIN;
	int32_t t19 = -29;

	t19 = ((x101*x102)==(x103/x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x110 = 0;
	static int64_t x112 = -1LL;
	volatile int32_t t20 = -85407261;

	t20 = ((x109*x110)==(x111/x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = 10057U;
	int16_t x119 = INT16_MIN;
	volatile int32_t t21 = -150426;

	t21 = ((x117*x118)==(x119/x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = -1;
	int16_t x126 = -1;
	int32_t x128 = -1;
	int32_t t22 = 20140863;

	t22 = ((x125*x126)==(x127/x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x129 = -3030;
	int32_t x130 = -1;
	uint8_t x131 = 2U;
	int32_t x132 = INT32_MAX;

	t23 = ((x129*x130)==(x131/x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MAX;
	uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MAX;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t24 = 3897634;

	t24 = ((x137*x138)==(x139/x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x142 = 2;
	static int8_t x143 = INT8_MIN;
	int64_t x144 = 81167380310233084LL;
	int32_t t25 = 63;

	t25 = ((x141*x142)==(x143/x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x149 = 26015;
	int8_t x150 = -1;
	uint8_t x152 = UINT8_MAX;
	int32_t t26 = 384823231;

	t26 = ((x149*x150)==(x151/x152));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x156 = 55;

	t27 = ((x153*x154)==(x155/x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x157 = -1;
	static int32_t x159 = INT32_MIN;
	static int64_t x160 = -1LL;
	volatile int32_t t28 = -616052;

	t28 = ((x157*x158)==(x159/x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x166 = INT16_MAX;
	uint16_t x167 = 2U;
	uint8_t x168 = 51U;
	volatile int32_t t29 = -19371;

	t29 = ((x165*x166)==(x167/x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x169 = -221698;
	static volatile int8_t x170 = 59;
	volatile int64_t x171 = INT64_MIN;
	volatile int32_t t30 = 2787251;

	t30 = ((x169*x170)==(x171/x172));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x175 = INT32_MAX;
	int32_t x176 = INT32_MIN;
	int32_t t31 = 516750;

	t31 = ((x173*x174)==(x175/x176));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x177 = INT16_MIN;
	static uint16_t x178 = 1U;
	uint16_t x179 = 323U;
	volatile int32_t x180 = INT32_MIN;
	static int32_t t32 = -18237;

	t32 = ((x177*x178)==(x179/x180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x181 = INT8_MAX;
	int8_t x182 = -1;
	int64_t x183 = -1LL;
	uint16_t x184 = 24U;
	static int32_t t33 = 3240;

	t33 = ((x181*x182)==(x183/x184));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x185 = 12;
	int64_t x186 = -1LL;
	static int16_t x187 = 73;
	static volatile int32_t t34 = 788128464;

	t34 = ((x185*x186)==(x187/x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x194 = 1548367657LL;
	int8_t x195 = -1;
	int16_t x196 = 3640;
	volatile int32_t t35 = -3273;

	t35 = ((x193*x194)==(x195/x196));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x197 = 0;
	int16_t x198 = INT16_MAX;
	int32_t x199 = INT32_MIN;
	static int64_t x200 = INT64_MAX;

	t36 = ((x197*x198)==(x199/x200));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x201 = 200355157310806840LLU;
	int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t37 = 53242;

	t37 = ((x201*x202)==(x203/x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x209 = -1;
	int64_t x210 = 25844677207192LL;
	static volatile int32_t t38 = 71522576;

	t38 = ((x209*x210)==(x211/x212));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x219 = INT64_MAX;
	int32_t t39 = -61;

	t39 = ((x217*x218)==(x219/x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x223 = -3193920;
	uint8_t x224 = 2U;
	static int32_t t40 = -12092597;

	t40 = ((x221*x222)==(x223/x224));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x229 = -4451195783LL;
	int32_t x230 = -1;
	volatile int16_t x231 = 18;
	volatile int8_t x232 = INT8_MAX;

	t41 = ((x229*x230)==(x231/x232));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x234 = UINT64_MAX;
	int16_t x236 = -1;
	static int32_t t42 = -7870;

	t42 = ((x233*x234)==(x235/x236));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = -1;
	int8_t x239 = -1;

	t43 = ((x237*x238)==(x239/x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x242 = 1479111720684LL;
	static uint8_t x244 = 67U;
	volatile int32_t t44 = 671181;

	t44 = ((x241*x242)==(x243/x244));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x250 = 0U;
	int8_t x251 = 7;
	volatile int32_t t45 = -43562;

	t45 = ((x249*x250)==(x251/x252));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x257 = 61U;
	uint16_t x258 = 1082U;
	int32_t x260 = 6;
	static volatile int32_t t46 = 1364654;

	t46 = ((x257*x258)==(x259/x260));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x261 = INT16_MIN;
	volatile uint8_t x262 = 1U;
	uint16_t x263 = UINT16_MAX;
	volatile int64_t x264 = INT64_MIN;
	volatile int32_t t47 = 5944;

	t47 = ((x261*x262)==(x263/x264));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x269 = 52U;
	int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MAX;
	uint64_t x272 = 3922677528532358002LLU;
	int32_t t48 = -27776145;

	t48 = ((x269*x270)==(x271/x272));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x274 = -1LL;
	static int32_t x275 = 38;
	int16_t x276 = -1;
	int32_t t49 = 18419756;

	t49 = ((x273*x274)==(x275/x276));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x277 = INT8_MAX;
	uint8_t x278 = 3U;
	static int64_t x279 = 7534987958LL;
	int32_t x280 = 3999560;
	int32_t t50 = -7;

	t50 = ((x277*x278)==(x279/x280));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x281 = -1LL;
	static uint16_t x282 = 3644U;
	int16_t x283 = -227;
	volatile uint16_t x284 = UINT16_MAX;
	static int32_t t51 = 329661;

	t51 = ((x281*x282)==(x283/x284));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x285 = 29765168348034081LLU;
	int8_t x286 = INT8_MAX;
	uint8_t x287 = 2U;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t52 = -2046007;

	t52 = ((x285*x286)==(x287/x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x301 = 1638097319687002LLU;
	int16_t x303 = 6999;
	volatile int32_t x304 = -1;
	volatile int32_t t53 = 24;

	t53 = ((x301*x302)==(x303/x304));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x306 = -1;
	int64_t x307 = INT64_MAX;
	int32_t x308 = -1;
	static int32_t t54 = -6;

	t54 = ((x305*x306)==(x307/x308));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x311 = 0U;
	static int32_t x312 = -438;
	volatile int32_t t55 = 367817;

	t55 = ((x309*x310)==(x311/x312));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x313 = 897151342251752LLU;
	int32_t x315 = -1;
	uint32_t x316 = 4569150U;
	int32_t t56 = -552095082;

	t56 = ((x313*x314)==(x315/x316));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x322 = 164384582062839397LLU;
	uint16_t x323 = 303U;
	int16_t x324 = INT16_MIN;

	t57 = ((x321*x322)==(x323/x324));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x333 = 487133849U;
	uint8_t x334 = 15U;
	volatile int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MAX;
	int32_t t58 = -1207229;

	t58 = ((x333*x334)==(x335/x336));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = INT32_MAX;
	int16_t x338 = -1;
	volatile uint8_t x340 = 61U;
	volatile int32_t t59 = -451267;

	t59 = ((x337*x338)==(x339/x340));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x341 = 307;
	volatile int64_t x342 = -100013547217LL;
	uint32_t x344 = UINT32_MAX;
	int32_t t60 = -5;

	t60 = ((x341*x342)==(x343/x344));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x345 = UINT32_MAX;
	volatile int32_t x348 = INT32_MAX;

	t61 = ((x345*x346)==(x347/x348));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x357 = 10U;
	static uint16_t x358 = 22164U;
	int32_t t62 = -87689;

	t62 = ((x357*x358)==(x359/x360));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x361 = UINT16_MAX;
	static uint16_t x362 = 0U;
	volatile int64_t x363 = INT64_MIN;
	int8_t x364 = 3;
	int32_t t63 = -6;

	t63 = ((x361*x362)==(x363/x364));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x365 = UINT64_MAX;
	uint8_t x366 = UINT8_MAX;
	int64_t x368 = 21655LL;
	static int32_t t64 = 46086359;

	t64 = ((x365*x366)==(x367/x368));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x374 = -2957780;
	volatile int32_t x376 = INT32_MIN;
	int32_t t65 = -50;

	t65 = ((x373*x374)==(x375/x376));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x379 = -1LL;
	volatile int8_t x380 = INT8_MIN;
	int32_t t66 = 123;

	t66 = ((x377*x378)==(x379/x380));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x381 = -1;
	volatile uint64_t x382 = UINT64_MAX;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t67 = -21;

	t67 = ((x381*x382)==(x383/x384));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x385 = UINT32_MAX;
	int16_t x386 = INT16_MIN;
	uint16_t x387 = 20U;
	uint16_t x388 = 101U;

	t68 = ((x385*x386)==(x387/x388));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x390 = 5U;
	int16_t x392 = INT16_MIN;

	t69 = ((x389*x390)==(x391/x392));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x398 = INT8_MIN;
	uint64_t x399 = 20882924937LLU;
	int16_t x400 = INT16_MIN;
	int32_t t70 = 2;

	t70 = ((x397*x398)==(x399/x400));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x401 = 544631651U;
	uint16_t x402 = UINT16_MAX;
	volatile int8_t x403 = -1;
	volatile int32_t t71 = 1488010;

	t71 = ((x401*x402)==(x403/x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x406 = -233;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = INT16_MAX;
	static volatile int32_t t72 = -43302416;

	t72 = ((x405*x406)==(x407/x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x413 = INT8_MAX;
	volatile uint32_t x414 = 615260U;
	volatile uint16_t x416 = 500U;
	volatile int32_t t73 = 3734;

	t73 = ((x413*x414)==(x415/x416));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x421 = INT8_MIN;
	uint16_t x422 = 1782U;
	uint8_t x423 = 0U;
	int64_t x424 = INT64_MAX;

	t74 = ((x421*x422)==(x423/x424));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x426 = UINT64_MAX;
	uint16_t x427 = 0U;
	int16_t x428 = INT16_MIN;

	t75 = ((x425*x426)==(x427/x428));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x433 = INT64_MAX;
	int64_t x434 = -1LL;
	volatile int8_t x435 = INT8_MIN;
	int32_t t76 = 0;

	t76 = ((x433*x434)==(x435/x436));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x437 = INT8_MIN;
	uint32_t x438 = 0U;
	int16_t x439 = 7923;
	int64_t x440 = 478173458970620089LL;
	int32_t t77 = -23388911;

	t77 = ((x437*x438)==(x439/x440));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x446 = -744827LL;
	static uint64_t x447 = 274462LLU;
	static volatile uint32_t x448 = 15168U;
	volatile int32_t t78 = 322891600;

	t78 = ((x445*x446)==(x447/x448));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x449 = INT8_MIN;
	uint64_t x450 = UINT64_MAX;
	uint64_t x451 = UINT64_MAX;
	static int32_t x452 = 28;
	static volatile int32_t t79 = 90;

	t79 = ((x449*x450)==(x451/x452));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x453 = -1LL;
	int8_t x455 = INT8_MIN;
	volatile int32_t t80 = 26;

	t80 = ((x453*x454)==(x455/x456));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x457 = UINT64_MAX;
	static uint8_t x458 = 1U;
	uint16_t x459 = 143U;
	uint64_t x460 = 175476726897LLU;
	int32_t t81 = -1009967;

	t81 = ((x457*x458)==(x459/x460));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x461 = -1;
	volatile uint16_t x462 = 250U;
	int16_t x463 = -1;
	uint8_t x464 = 86U;
	int32_t t82 = 15695;

	t82 = ((x461*x462)==(x463/x464));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x465 = INT32_MIN;
	static uint64_t x466 = 21807462282272643LLU;
	static uint8_t x467 = UINT8_MAX;
	uint32_t x468 = UINT32_MAX;
	volatile int32_t t83 = -29713999;

	t83 = ((x465*x466)==(x467/x468));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x474 = 24;
	volatile int16_t x475 = -141;
	int32_t t84 = -34824;

	t84 = ((x473*x474)==(x475/x476));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x481 = INT8_MAX;
	int8_t x482 = INT8_MIN;
	uint16_t x483 = 15U;
	volatile int64_t x484 = 4LL;

	t85 = ((x481*x482)==(x483/x484));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x485 = 22U;
	volatile int32_t t86 = 4243121;

	t86 = ((x485*x486)==(x487/x488));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x493 = INT8_MIN;
	int8_t x494 = -1;
	uint64_t x495 = UINT64_MAX;
	static int8_t x496 = INT8_MAX;

	t87 = ((x493*x494)==(x495/x496));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x502 = -1LL;
	int16_t x503 = INT16_MAX;
	int16_t x504 = -15440;
	int32_t t88 = -46;

	t88 = ((x501*x502)==(x503/x504));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x505 = 5272069766641LLU;
	uint64_t x506 = UINT64_MAX;
	int64_t x507 = INT64_MIN;
	int32_t x508 = INT32_MAX;
	volatile int32_t t89 = 1;

	t89 = ((x505*x506)==(x507/x508));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x510 = INT8_MAX;
	int16_t x511 = -1;
	volatile int32_t x512 = INT32_MIN;
	int32_t t90 = -28;

	t90 = ((x509*x510)==(x511/x512));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x522 = 2U;
	int64_t x524 = -1LL;
	volatile int32_t t91 = 1;

	t91 = ((x521*x522)==(x523/x524));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x525 = INT64_MIN;
	static uint64_t x526 = 199378566LLU;
	int16_t x527 = INT16_MIN;
	uint32_t x528 = UINT32_MAX;
	volatile int32_t t92 = -306510342;

	t92 = ((x525*x526)==(x527/x528));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x529 = -1;
	int64_t x530 = INT64_MAX;
	int32_t x531 = 40767;
	static int32_t t93 = -35700;

	t93 = ((x529*x530)==(x531/x532));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x533 = -1;
	static int8_t x534 = -3;
	volatile uint32_t x535 = 117105547U;
	int32_t t94 = 987261695;

	t94 = ((x533*x534)==(x535/x536));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x537 = INT64_MIN;
	uint8_t x538 = 1U;
	volatile int64_t x539 = 1062462755105519792LL;
	static int32_t x540 = 24986703;

	t95 = ((x537*x538)==(x539/x540));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x545 = 586381132423861LLU;
	static int8_t x546 = INT8_MIN;
	volatile int8_t x547 = INT8_MIN;
	static volatile int16_t x548 = 170;
	int32_t t96 = -755102641;

	t96 = ((x545*x546)==(x547/x548));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x557 = UINT32_MAX;
	volatile uint8_t x558 = 1U;
	int16_t x559 = -631;
	int8_t x560 = 22;
	static volatile int32_t t97 = 737106986;

	t97 = ((x557*x558)==(x559/x560));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x569 = UINT64_MAX;
	uint32_t x570 = 9U;
	volatile int32_t x571 = -1;
	volatile int8_t x572 = 1;
	int32_t t98 = -8349377;

	t98 = ((x569*x570)==(x571/x572));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x573 = 1U;
	static int64_t x575 = -1LL;
	static uint8_t x576 = 3U;
	volatile int32_t t99 = -8816;

	t99 = ((x573*x574)==(x575/x576));

	if (t99 != 0) { NG(); } else { ; }
	
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

