#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 1U;
int64_t x4 = 14LL;
static uint64_t x27 = 163691967LLU;
static volatile int8_t x28 = -22;
volatile uint16_t x29 = UINT16_MAX;
int64_t x34 = INT64_MAX;
uint8_t x46 = 1U;
int32_t t9 = 0;
volatile uint64_t x51 = 68633589LLU;
uint32_t x56 = UINT32_MAX;
static int16_t x61 = 1;
uint16_t x78 = 3953U;
int32_t x79 = INT32_MAX;
static volatile int64_t x84 = INT64_MAX;
volatile int32_t t15 = 57;
static int16_t x86 = -1742;
int64_t x87 = 836400LL;
volatile int32_t t17 = 2577;
int64_t x95 = -1LL;
int16_t x100 = -1;
int16_t x102 = INT16_MIN;
int16_t x113 = INT16_MIN;
volatile int8_t x114 = INT8_MIN;
static int8_t x120 = INT8_MAX;
static int32_t x123 = INT32_MIN;
uint8_t x124 = UINT8_MAX;
static int32_t t26 = 484613;
int8_t x134 = -1;
volatile int32_t t28 = 490936736;
int8_t x153 = 54;
uint16_t x156 = UINT16_MAX;
uint32_t x157 = UINT32_MAX;
uint32_t x171 = 13298U;
uint16_t x179 = 6419U;
volatile int32_t t35 = -139;
static volatile uint64_t x185 = 947282590402257LLU;
int8_t x186 = INT8_MIN;
int8_t x187 = -9;
uint64_t x191 = 2766638857LLU;
volatile uint64_t x192 = 378LLU;
uint16_t x196 = UINT16_MAX;
volatile uint32_t x202 = 1U;
static int8_t x206 = -1;
uint16_t x208 = UINT16_MAX;
int32_t t41 = 5;
volatile int32_t t43 = -6482;
uint64_t x217 = 555986498546775LLU;
static int32_t t45 = -278;
int64_t x232 = -12715582923892LL;
static int32_t t46 = -449291221;
uint32_t x238 = 641503908U;
volatile int64_t x244 = 85542725751138786LL;
int16_t x249 = INT16_MIN;
uint64_t x250 = 170246787458402LLU;
volatile int32_t t51 = 0;
int8_t x257 = 0;
uint16_t x258 = 171U;
static uint32_t x261 = UINT32_MAX;
int16_t x262 = -166;
uint64_t x264 = UINT64_MAX;
volatile int32_t t53 = 7259262;
int32_t x267 = INT32_MIN;
static volatile uint64_t x269 = 1325499LLU;
volatile int64_t x271 = INT64_MAX;
int32_t t55 = 4013;
uint32_t x280 = UINT32_MAX;
int32_t x281 = INT32_MAX;
int32_t x283 = INT32_MIN;
static int16_t x290 = INT16_MIN;
static int64_t x304 = INT64_MIN;
int32_t t62 = -7649529;
int16_t x324 = 4;
volatile int32_t t63 = 1811;
int8_t x325 = INT8_MIN;
static int32_t x326 = -1;
int32_t t64 = 116;
int8_t x331 = INT8_MAX;
uint16_t x337 = 2U;
uint32_t x344 = 213704257U;
static int32_t x354 = INT32_MAX;
volatile int8_t x358 = INT8_MAX;
int32_t x374 = INT32_MAX;
static int8_t x377 = -1;
uint8_t x380 = 1U;
uint64_t x387 = 75299931LLU;
int64_t x388 = -1LL;
int32_t t77 = 66387450;
int16_t x402 = INT16_MIN;
int32_t x403 = -1;
int32_t t78 = -1;
volatile uint16_t x423 = 234U;
static int32_t t80 = 183892299;
uint32_t x429 = 1007U;
static int8_t x430 = INT8_MIN;
uint64_t x432 = 519865LLU;
uint32_t x434 = 506613U;
volatile int8_t x435 = -1;
int8_t x437 = INT8_MIN;
uint8_t x438 = UINT8_MAX;
int64_t x439 = -145664633LL;
static uint16_t x440 = 839U;
static int16_t x442 = INT16_MIN;
static int32_t t85 = -1093109;
int32_t t88 = 791134;
static uint64_t x469 = 0LLU;
int8_t x472 = 0;
uint16_t x473 = UINT16_MAX;
int64_t x474 = 26056645427LL;
int8_t x475 = -1;
static uint16_t x485 = UINT16_MAX;
volatile uint32_t x493 = 2873935U;
static volatile int8_t x506 = 0;
uint64_t x507 = 849558555979889998LLU;
volatile int16_t x510 = 5;
int32_t t98 = -28524;
static volatile int8_t x513 = 21;


void f0(void) {
	int32_t x1 = -1;
	int64_t x2 = -240039772752LL;
	volatile int32_t t0 = -79;

	t0 = (((x1*x2)^x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 188796U;
	uint64_t x6 = 18809245213LLU;
	uint16_t x7 = UINT16_MAX;
	int64_t x8 = -20392934LL;
	volatile int32_t t1 = 3590;

	t1 = (((x5*x6)^x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 229514618633238LL;
	static uint16_t x10 = 1956U;
	int64_t x11 = INT64_MIN;
	static uint64_t x12 = 198489832LLU;
	int32_t t2 = -23246;

	t2 = (((x9*x10)^x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = 63;
	int16_t x23 = -1;
	int32_t x24 = -1;
	int32_t t3 = -1405;

	t3 = (((x21*x22)^x23)==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 7202U;
	volatile uint16_t x26 = UINT16_MAX;
	static volatile int32_t t4 = -101485765;

	t4 = (((x25*x26)^x27)==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = -1;
	static uint8_t x31 = 4U;
	int16_t x32 = INT16_MIN;
	static volatile int32_t t5 = -24336;

	t5 = (((x29*x30)^x31)==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = 1;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	static int32_t t6 = -1;

	t6 = (((x33*x34)^x35)==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	int8_t x38 = -1;
	uint8_t x39 = 2U;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t7 = 0;

	t7 = (((x37*x38)^x39)==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 79U;
	int64_t x42 = 276230669486LL;
	int64_t x43 = INT64_MIN;
	uint32_t x44 = 1423241102U;
	int32_t t8 = 11978993;

	t8 = (((x41*x42)^x43)==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 610U;
	int32_t x47 = INT32_MIN;
	static uint8_t x48 = 3U;

	t9 = (((x45*x46)^x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	volatile uint32_t x50 = 2082788171U;
	int32_t x52 = 12;
	volatile int32_t t10 = 20037184;

	t10 = (((x49*x50)^x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = -12;
	uint8_t x55 = 1U;
	volatile int32_t t11 = 16;

	t11 = (((x53*x54)^x55)==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x57 = 3835LLU;
	int16_t x58 = -7;
	static int32_t x59 = INT32_MAX;
	volatile int32_t x60 = -11;
	volatile int32_t t12 = -449798588;

	t12 = (((x57*x58)^x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = -1;
	int8_t x63 = -11;
	uint64_t x64 = 6387409759150679817LLU;
	volatile int32_t t13 = 26950213;

	t13 = (((x61*x62)^x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -2793329961939LL;
	static volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t14 = 3745;

	t14 = (((x77*x78)^x79)==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = -1;
	volatile int64_t x82 = 28644864941LL;
	int64_t x83 = INT64_MIN;

	t15 = (((x81*x82)^x83)==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = 40U;
	int8_t x88 = -1;
	volatile int32_t t16 = -27;

	t16 = (((x85*x86)^x87)==x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int16_t x90 = -418;
	int64_t x91 = -1LL;
	int32_t x92 = 0;

	t17 = (((x89*x90)^x91)==x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x93 = 353;
	int8_t x94 = INT8_MAX;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t18 = 1014889365;

	t18 = (((x93*x94)^x95)==x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x97 = INT16_MIN;
	static uint32_t x98 = 61060112U;
	uint8_t x99 = UINT8_MAX;
	volatile int32_t t19 = 34806355;

	t19 = (((x97*x98)^x99)==x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MAX;
	volatile int32_t t20 = 990;

	t20 = (((x101*x102)^x103)==x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x109 = 8U;
	static int32_t x110 = -1;
	static volatile int64_t x111 = INT64_MIN;
	uint64_t x112 = 1632960LLU;
	int32_t t21 = 48103690;

	t21 = (((x109*x110)^x111)==x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x115 = INT16_MAX;
	int16_t x116 = 117;
	int32_t t22 = 6;

	t22 = (((x113*x114)^x115)==x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x117 = 26;
	int32_t x118 = -497045;
	uint8_t x119 = UINT8_MAX;
	int32_t t23 = -34;

	t23 = (((x117*x118)^x119)==x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = -1;
	int32_t t24 = 94901436;

	t24 = (((x121*x122)^x123)==x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x125 = 76LLU;
	int16_t x126 = INT16_MIN;
	int32_t x127 = 887986;
	volatile int8_t x128 = INT8_MAX;
	int32_t t25 = 1263673;

	t25 = (((x125*x126)^x127)==x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x129 = -1;
	volatile int8_t x130 = 0;
	int8_t x131 = -16;
	int64_t x132 = INT64_MIN;

	t26 = (((x129*x130)^x131)==x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 3U;
	volatile int32_t x135 = INT32_MAX;
	uint8_t x136 = 109U;
	int32_t t27 = -985522498;

	t27 = (((x133*x134)^x135)==x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = -58057829LL;
	volatile int16_t x138 = -1;
	int16_t x139 = -209;
	static uint32_t x140 = UINT32_MAX;

	t28 = (((x137*x138)^x139)==x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x145 = 1U;
	int64_t x146 = 1457962692898518548LL;
	static int16_t x147 = INT16_MIN;
	uint16_t x148 = UINT16_MAX;
	static volatile int32_t t29 = -1504864;

	t29 = (((x145*x146)^x147)==x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x154 = 0;
	uint64_t x155 = UINT64_MAX;
	static int32_t t30 = 170360;

	t30 = (((x153*x154)^x155)==x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x158 = 560;
	uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MIN;
	volatile int32_t t31 = 7801;

	t31 = (((x157*x158)^x159)==x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = -1LL;
	uint16_t x170 = 77U;
	int64_t x172 = -1LL;
	int32_t t32 = 153607590;

	t32 = (((x169*x170)^x171)==x172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = -1LL;
	int64_t x175 = -1043767428917883LL;
	volatile uint16_t x176 = 9280U;
	volatile int32_t t33 = 58;

	t33 = (((x173*x174)^x175)==x176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = -1;
	int64_t x178 = INT64_MAX;
	int16_t x180 = -1;
	int32_t t34 = -28852671;

	t34 = (((x177*x178)^x179)==x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x181 = 82U;
	int32_t x182 = -737707192;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = 1501;

	t35 = (((x181*x182)^x183)==x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x188 = INT32_MIN;
	volatile int32_t t36 = -63960;

	t36 = (((x185*x186)^x187)==x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x189 = 33851206LLU;
	int8_t x190 = -1;
	volatile int32_t t37 = -1072;

	t37 = (((x189*x190)^x191)==x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x193 = -1;
	static volatile int64_t x194 = -1LL;
	uint64_t x195 = 1626633201LLU;
	volatile int32_t t38 = -11;

	t38 = (((x193*x194)^x195)==x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = -1;
	uint64_t x198 = 571LLU;
	volatile uint8_t x199 = 5U;
	static int8_t x200 = -4;
	int32_t t39 = 1590892;

	t39 = (((x197*x198)^x199)==x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x201 = INT32_MAX;
	int8_t x203 = 0;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t40 = -1931944;

	t40 = (((x201*x202)^x203)==x204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = 1897LLU;
	int16_t x207 = -1;

	t41 = (((x205*x206)^x207)==x208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = INT8_MIN;
	volatile int64_t x210 = 23277LL;
	int8_t x211 = 61;
	uint64_t x212 = UINT64_MAX;
	int32_t t42 = 2;

	t42 = (((x209*x210)^x211)==x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x213 = 19U;
	uint64_t x214 = 29LLU;
	int16_t x215 = INT16_MIN;
	volatile uint32_t x216 = 756182118U;

	t43 = (((x213*x214)^x215)==x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x218 = 47;
	int8_t x219 = -5;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t44 = 475340478;

	t44 = (((x217*x218)^x219)==x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = -1;
	int64_t x222 = -1LL;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = -1;

	t45 = (((x221*x222)^x223)==x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = -2;
	static int8_t x230 = -1;
	int32_t x231 = INT32_MIN;

	t46 = (((x229*x230)^x231)==x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = INT8_MIN;
	static uint64_t x234 = 15LLU;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t47 = 2;

	t47 = (((x233*x234)^x235)==x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x237 = -1;
	static int32_t x239 = 0;
	uint8_t x240 = 36U;
	volatile int32_t t48 = 4085232;

	t48 = (((x237*x238)^x239)==x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = 1800019;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = 77442566502LL;
	volatile int32_t t49 = 16584891;

	t49 = (((x241*x242)^x243)==x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x251 = 309851594555078423LLU;
	int32_t x252 = -11452;
	volatile int32_t t50 = 16560215;

	t50 = (((x249*x250)^x251)==x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x253 = INT8_MIN;
	volatile int8_t x254 = -1;
	int8_t x255 = INT8_MAX;
	uint8_t x256 = UINT8_MAX;

	t51 = (((x253*x254)^x255)==x256);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x259 = INT8_MAX;
	int64_t x260 = INT64_MIN;
	volatile int32_t t52 = 12;

	t52 = (((x257*x258)^x259)==x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x263 = -1;

	t53 = (((x261*x262)^x263)==x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x265 = UINT32_MAX;
	static int16_t x266 = INT16_MIN;
	volatile int64_t x268 = -1LL;
	volatile int32_t t54 = -2924395;

	t54 = (((x265*x266)^x267)==x268);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x270 = INT64_MAX;
	int8_t x272 = -1;

	t55 = (((x269*x270)^x271)==x272);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = INT16_MAX;
	volatile uint64_t x278 = 5LLU;
	int32_t x279 = 63;
	int32_t t56 = -326278369;

	t56 = (((x277*x278)^x279)==x280);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x282 = -4338338LL;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t57 = 46310726;

	t57 = (((x281*x282)^x283)==x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x289 = 34898944391LL;
	int8_t x291 = -1;
	uint16_t x292 = 349U;
	volatile int32_t t58 = 3053582;

	t58 = (((x289*x290)^x291)==x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x297 = 13799295864LLU;
	int64_t x298 = INT64_MAX;
	volatile int32_t x299 = INT32_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t59 = -530723;

	t59 = (((x297*x298)^x299)==x300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 44U;
	static volatile int32_t t60 = 70;

	t60 = (((x301*x302)^x303)==x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x305 = 31149708U;
	int8_t x306 = 2;
	uint8_t x307 = UINT8_MAX;
	int32_t x308 = INT32_MAX;
	volatile int32_t t61 = -206170;

	t61 = (((x305*x306)^x307)==x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x313 = 44783646320413793LL;
	int16_t x314 = 0;
	int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MAX;

	t62 = (((x313*x314)^x315)==x316);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = INT16_MIN;
	volatile uint32_t x322 = 2383U;
	uint32_t x323 = 9769U;

	t63 = (((x321*x322)^x323)==x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x327 = -5865;
	int32_t x328 = -1;

	t64 = (((x325*x326)^x327)==x328);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x329 = 236U;
	volatile int8_t x330 = INT8_MIN;
	volatile int64_t x332 = INT64_MIN;
	static volatile int32_t t65 = -117;

	t65 = (((x329*x330)^x331)==x332);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x338 = 801U;
	static int64_t x339 = -1LL;
	volatile int64_t x340 = INT64_MAX;
	volatile int32_t t66 = 15958;

	t66 = (((x337*x338)^x339)==x340);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x341 = 42;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	int32_t t67 = 8;

	t67 = (((x341*x342)^x343)==x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x345 = 10749U;
	static uint64_t x346 = 7315566264013937LLU;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 40U;
	static int32_t t68 = 534594;

	t68 = (((x345*x346)^x347)==x348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x353 = -1;
	volatile uint8_t x355 = 6U;
	int64_t x356 = -1LL;
	static volatile int32_t t69 = 24711819;

	t69 = (((x353*x354)^x355)==x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = -4;
	int32_t x359 = -15759922;
	int64_t x360 = INT64_MAX;
	int32_t t70 = -1;

	t70 = (((x357*x358)^x359)==x360);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x369 = 62920LLU;
	int32_t x370 = INT32_MAX;
	volatile int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MAX;
	static int32_t t71 = 249819;

	t71 = (((x369*x370)^x371)==x372);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x375 = INT16_MIN;
	uint32_t x376 = 14332U;
	volatile int32_t t72 = -60;

	t72 = (((x373*x374)^x375)==x376);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x378 = 5U;
	int8_t x379 = INT8_MAX;
	volatile int32_t t73 = 8301994;

	t73 = (((x377*x378)^x379)==x380);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x381 = UINT16_MAX;
	uint64_t x382 = UINT64_MAX;
	int32_t x383 = -14397396;
	uint8_t x384 = 3U;
	volatile int32_t t74 = -433279695;

	t74 = (((x381*x382)^x383)==x384);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = -1;
	int16_t x386 = 61;
	volatile int32_t t75 = 6812;

	t75 = (((x385*x386)^x387)==x388);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MAX;
	uint64_t x396 = 8471998139443742515LLU;
	volatile int32_t t76 = 7;

	t76 = (((x393*x394)^x395)==x396);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x397 = -5;
	uint64_t x398 = 12527LLU;
	uint8_t x399 = 1U;
	int64_t x400 = -1LL;

	t77 = (((x397*x398)^x399)==x400);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x401 = 32;
	uint64_t x404 = UINT64_MAX;

	t78 = (((x401*x402)^x403)==x404);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = INT16_MIN;
	static uint64_t x406 = 7479898427681110266LLU;
	volatile int8_t x407 = -1;
	int32_t x408 = INT32_MAX;
	int32_t t79 = -181932;

	t79 = (((x405*x406)^x407)==x408);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x421 = INT16_MIN;
	int32_t x422 = -23706;
	int8_t x424 = INT8_MIN;

	t80 = (((x421*x422)^x423)==x424);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x425 = INT16_MIN;
	static volatile uint16_t x426 = 1919U;
	uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = INT32_MIN;
	volatile int32_t t81 = -266018752;

	t81 = (((x425*x426)^x427)==x428);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x431 = -1;
	volatile int32_t t82 = 0;

	t82 = (((x429*x430)^x431)==x432);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x433 = INT16_MAX;
	static int64_t x436 = INT64_MIN;
	int32_t t83 = -96691;

	t83 = (((x433*x434)^x435)==x436);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t t84 = 6459;

	t84 = (((x437*x438)^x439)==x440);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x441 = 6088204678241LLU;
	uint64_t x443 = 241293403LLU;
	int8_t x444 = -1;

	t85 = (((x441*x442)^x443)==x444);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x449 = INT16_MIN;
	int16_t x450 = -7;
	int32_t x451 = -1;
	static uint32_t x452 = 49703066U;
	static volatile int32_t t86 = 1;

	t86 = (((x449*x450)^x451)==x452);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x453 = 21558;
	int16_t x454 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	uint16_t x456 = 2U;
	int32_t t87 = 0;

	t87 = (((x453*x454)^x455)==x456);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x457 = 38U;
	int32_t x458 = -3653;
	uint16_t x459 = 8772U;
	uint16_t x460 = UINT16_MAX;

	t88 = (((x457*x458)^x459)==x460);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x465 = INT64_MIN;
	uint64_t x466 = UINT64_MAX;
	uint64_t x467 = 2118622926LLU;
	volatile uint16_t x468 = UINT16_MAX;
	volatile int32_t t89 = 0;

	t89 = (((x465*x466)^x467)==x468);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x470 = INT64_MIN;
	int64_t x471 = INT64_MIN;
	volatile int32_t t90 = -2730;

	t90 = (((x469*x470)^x471)==x472);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x476 = 726;
	volatile int32_t t91 = 1538;

	t91 = (((x473*x474)^x475)==x476);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x477 = 88;
	static uint64_t x478 = 141896497LLU;
	volatile int16_t x479 = -1;
	uint32_t x480 = UINT32_MAX;
	static int32_t t92 = 284382;

	t92 = (((x477*x478)^x479)==x480);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x481 = UINT64_MAX;
	static int16_t x482 = INT16_MAX;
	int64_t x483 = INT64_MAX;
	volatile int16_t x484 = INT16_MAX;
	volatile int32_t t93 = 1;

	t93 = (((x481*x482)^x483)==x484);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x486 = 810462605U;
	int64_t x487 = INT64_MIN;
	uint32_t x488 = UINT32_MAX;
	int32_t t94 = 92728939;

	t94 = (((x485*x486)^x487)==x488);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x494 = 15;
	volatile uint8_t x495 = 1U;
	volatile uint8_t x496 = 42U;
	volatile int32_t t95 = -1;

	t95 = (((x493*x494)^x495)==x496);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x501 = 3706364;
	uint64_t x502 = 56853835LLU;
	volatile uint16_t x503 = UINT16_MAX;
	volatile int16_t x504 = -1;
	int32_t t96 = 2848966;

	t96 = (((x501*x502)^x503)==x504);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x505 = -1;
	static int32_t x508 = -1;
	volatile int32_t t97 = 7688813;

	t97 = (((x505*x506)^x507)==x508);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x509 = -2163668;
	int64_t x511 = INT64_MIN;
	uint64_t x512 = 7964533644LLU;

	t98 = (((x509*x510)^x511)==x512);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x514 = INT8_MIN;
	volatile int64_t x515 = 0LL;
	int8_t x516 = INT8_MIN;
	volatile int32_t t99 = 67318;

	t99 = (((x513*x514)^x515)==x516);

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

