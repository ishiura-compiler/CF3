#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x17 = 7149U;
uint8_t x18 = UINT8_MAX;
uint64_t x20 = UINT64_MAX;
int64_t x21 = 66778LL;
int8_t x25 = 1;
static uint64_t x26 = 1369479097695LLU;
uint8_t x28 = 3U;
uint16_t x31 = 8U;
static int8_t x35 = INT8_MAX;
uint16_t x43 = 8003U;
volatile uint32_t t11 = 52901U;
static int32_t x57 = 410568;
volatile uint64_t x58 = 348573010LLU;
int64_t x61 = 6962018LL;
static int16_t x62 = INT16_MIN;
uint8_t x72 = UINT8_MAX;
int32_t t15 = -147637243;
static uint32_t x96 = 337410517U;
int32_t x100 = INT32_MIN;
static int32_t t22 = INT32_MIN;
uint64_t x101 = 136885181464LLU;
int8_t x105 = INT8_MAX;
volatile uint16_t x111 = 421U;
static int32_t x112 = 6;
uint64_t t26 = 111418553LLU;
int8_t x117 = INT8_MAX;
int16_t x119 = INT16_MIN;
volatile int16_t x127 = INT16_MIN;
volatile int64_t x129 = 16LL;
int16_t x130 = 143;
static int16_t x134 = 585;
volatile uint16_t x136 = 473U;
volatile int8_t x138 = 3;
uint32_t x144 = 22532U;
static int8_t x145 = -1;
volatile int16_t x146 = 0;
uint32_t x149 = UINT32_MAX;
int32_t t34 = 3071;
uint8_t x166 = UINT8_MAX;
int32_t x168 = 2;
uint16_t x172 = UINT16_MAX;
volatile int32_t t37 = 984;
volatile int16_t x173 = INT16_MIN;
static uint16_t x176 = UINT16_MAX;
int64_t x182 = -1LL;
static int8_t x197 = INT8_MAX;
int16_t x198 = -9828;
static uint32_t x200 = 1U;
int8_t x207 = -1;
volatile int8_t x216 = 1;
int32_t t46 = 7390;
int8_t x223 = INT8_MAX;
uint32_t t48 = 2148032U;
uint16_t x226 = 32192U;
uint32_t x228 = 18U;
volatile uint8_t x234 = 1U;
volatile int8_t x246 = INT8_MIN;
volatile int8_t x247 = INT8_MAX;
volatile int32_t t53 = 7906441;
int16_t x258 = INT16_MIN;
uint64_t x260 = UINT64_MAX;
int64_t x266 = 0LL;
int64_t x269 = -219LL;
int16_t x271 = -13343;
volatile uint64_t t59 = UINT64_MAX;
int64_t x280 = -1LL;
static volatile uint64_t x281 = 14LLU;
int64_t x293 = -17536736729972214LL;
int64_t x294 = INT64_MAX;
int32_t x297 = 4;
int32_t t66 = INT32_MIN;
int16_t x305 = -58;
volatile int64_t t69 = -1LL;
volatile int16_t x326 = INT16_MIN;
int8_t x333 = INT8_MIN;
uint8_t x334 = 50U;
int64_t x338 = -1LL;
int32_t x339 = INT32_MIN;
volatile int64_t x343 = -30353712109755363LL;
int8_t x344 = -1;
static int32_t t75 = 765185314;
volatile uint16_t x354 = 315U;
uint16_t x362 = 0U;
volatile int64_t x366 = INT64_MIN;
int32_t t79 = 279444503;
int8_t x370 = INT8_MIN;
volatile int32_t t80 = 0;
static int64_t x380 = INT64_MAX;
volatile int64_t t81 = INT64_MAX;
int8_t x388 = -18;
int8_t x394 = 2;
static volatile int32_t x396 = -1;
volatile int32_t t86 = -66921409;
static int16_t x401 = -10;
int8_t x405 = 0;
int16_t x409 = INT16_MIN;
volatile uint8_t x410 = 90U;
uint32_t x411 = 1043332592U;
int8_t x416 = -1;
int16_t x421 = 0;
int8_t x425 = INT8_MAX;
int16_t x434 = INT16_MAX;
int16_t x440 = -1;
uint64_t x442 = 24561564738152LLU;
static int8_t x449 = INT8_MIN;
volatile int32_t t98 = 23200564;
int16_t x457 = 3;
int32_t x459 = 1202299;
volatile int32_t t99 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint32_t x2 = 720055684U;
	uint16_t x3 = 4U;
	static uint32_t x4 = 3U;
	static uint32_t t0 = 12020512U;

	t0 = (((x1+x2)==x3)|x4);

	if (t0 != 3U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = 159576063651LL;
	volatile uint8_t x16 = 4U;
	volatile int32_t t1 = 0;

	t1 = (((x13+x14)==x15)|x16);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x19 = 0;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (((x17+x18)==x19)|x20);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x22 = -1;
	uint32_t x23 = 71520777U;
	static int64_t x24 = -55349978356737LL;
	volatile int64_t t3 = -373LL;

	t3 = (((x21+x22)==x23)|x24);

	if (t3 != -55349978356737LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x27 = 3LL;
	int32_t t4 = 2889037;

	t4 = (((x25+x26)==x27)|x28);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = -2;
	static int8_t x30 = 0;
	uint32_t x32 = 2622726U;
	uint32_t t5 = 27098U;

	t5 = (((x29+x30)==x31)|x32);

	if (t5 != 2622726U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = -459;
	static volatile int64_t x36 = -275553LL;
	volatile int64_t t6 = -6619565842LL;

	t6 = (((x33+x34)==x35)|x36);

	if (t6 != -275553LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1LL;
	uint32_t x38 = UINT32_MAX;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = INT16_MAX;
	int32_t t7 = 53;

	t7 = (((x37+x38)==x39)|x40);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 3U;
	int8_t x42 = 0;
	volatile int16_t x44 = -1;
	int32_t t8 = -24;

	t8 = (((x41+x42)==x43)|x44);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MAX;
	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t9 = -5165577;

	t9 = (((x45+x46)==x47)|x48);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = -6187;
	static uint8_t x50 = UINT8_MAX;
	int16_t x51 = 7692;
	int64_t x52 = -1LL;
	volatile int64_t t10 = 1014499LL;

	t10 = (((x49+x50)==x51)|x52);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	uint64_t x54 = 11554709310991367LLU;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 232U;

	t11 = (((x53+x54)==x55)|x56);

	if (t11 != 232U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x59 = -14865431;
	uint8_t x60 = 5U;
	volatile int32_t t12 = -233424402;

	t12 = (((x57+x58)==x59)|x60);

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x63 = UINT8_MAX;
	volatile int8_t x64 = -7;
	int32_t t13 = -761;

	t13 = (((x61+x62)==x63)|x64);

	if (t13 != -7) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MAX;
	static uint8_t x67 = 4U;
	int16_t x68 = INT16_MAX;
	int32_t t14 = 1216940;

	t14 = (((x65+x66)==x67)|x68);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 1257109493U;
	int8_t x70 = INT8_MIN;
	uint8_t x71 = 12U;

	t15 = (((x69+x70)==x71)|x72);

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = INT64_MIN;
	uint32_t x74 = 6472U;
	int64_t x75 = INT64_MAX;
	int16_t x76 = INT16_MAX;
	volatile int32_t t16 = -1;

	t16 = (((x73+x74)==x75)|x76);

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 295993088;
	int64_t x78 = INT64_MIN;
	volatile uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 1U;
	volatile int32_t t17 = -14014;

	t17 = (((x77+x78)==x79)|x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x81 = 3621066910LLU;
	int32_t x82 = INT32_MIN;
	static int16_t x83 = INT16_MIN;
	uint32_t x84 = 16058U;
	static volatile uint32_t t18 = 227U;

	t18 = (((x81+x82)==x83)|x84);

	if (t18 != 16058U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x85 = 28;
	uint16_t x86 = UINT16_MAX;
	int64_t x87 = INT64_MIN;
	uint64_t x88 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = (((x85+x86)==x87)|x88);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 69612767U;
	uint8_t x90 = 20U;
	static volatile int8_t x91 = -1;
	int8_t x92 = -1;
	int32_t t20 = -229;

	t20 = (((x89+x90)==x91)|x92);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	static int8_t x94 = INT8_MIN;
	static int16_t x95 = 6;
	uint32_t t21 = 942735U;

	t21 = (((x93+x94)==x95)|x96);

	if (t21 != 337410517U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = UINT64_MAX;
	int64_t x98 = -276583619LL;
	int32_t x99 = -31617749;

	t22 = (((x97+x98)==x99)|x100);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x102 = -1;
	uint32_t x103 = 29488682U;
	volatile int32_t x104 = INT32_MIN;
	volatile int32_t t23 = INT32_MIN;

	t23 = (((x101+x102)==x103)|x104);

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = 133580005U;
	uint16_t x107 = 1U;
	int16_t x108 = 1446;
	int32_t t24 = -1019477520;

	t24 = (((x105+x106)==x107)|x108);

	if (t24 != 1446) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	static volatile int32_t t25 = 1;

	t25 = (((x109+x110)==x111)|x112);

	if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -1;
	uint32_t x114 = 83U;
	int32_t x115 = -1;
	uint64_t x116 = 2119834145496LLU;

	t26 = (((x113+x114)==x115)|x116);

	if (t26 != 2119834145496LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x118 = 423LL;
	static int16_t x120 = INT16_MAX;
	volatile int32_t t27 = 167121;

	t27 = (((x117+x118)==x119)|x120);

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MIN;
	static int32_t x126 = 1;
	static int32_t x128 = -1;
	static volatile int32_t t28 = -58;

	t28 = (((x125+x126)==x127)|x128);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x131 = INT16_MAX;
	static int32_t x132 = 5690326;
	int32_t t29 = 0;

	t29 = (((x129+x130)==x131)|x132);

	if (t29 != 5690326) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x133 = 9U;
	int64_t x135 = INT64_MAX;
	static int32_t t30 = -28591140;

	t30 = (((x133+x134)==x135)|x136);

	if (t30 != 473) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -6430;
	uint8_t x139 = 7U;
	static uint64_t x140 = 1613856833081801551LLU;
	volatile uint64_t t31 = 15260057729LLU;

	t31 = (((x137+x138)==x139)|x140);

	if (t31 != 1613856833081801551LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x141 = 12227093694LLU;
	volatile uint16_t x142 = 115U;
	static uint64_t x143 = 3622092683LLU;
	volatile uint32_t t32 = 108706284U;

	t32 = (((x141+x142)==x143)|x144);

	if (t32 != 22532U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x147 = 1856U;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t33 = -5812;

	t33 = (((x145+x146)==x147)|x148);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x150 = INT32_MAX;
	int64_t x151 = INT64_MAX;
	int8_t x152 = INT8_MIN;

	t34 = (((x149+x150)==x151)|x152);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MAX;
	static uint32_t x163 = 141531989U;
	int8_t x164 = INT8_MAX;
	volatile int32_t t35 = -161152;

	t35 = (((x161+x162)==x163)|x164);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MIN;
	volatile int32_t x167 = INT32_MAX;
	volatile int32_t t36 = -10568;

	t36 = (((x165+x166)==x167)|x168);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 94828165792063058LLU;
	int16_t x170 = 4083;
	int16_t x171 = INT16_MIN;

	t37 = (((x169+x170)==x171)|x172);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x174 = UINT16_MAX;
	int8_t x175 = -1;
	int32_t t38 = -32;

	t38 = (((x173+x174)==x175)|x176);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MAX;
	static uint16_t x178 = UINT16_MAX;
	uint8_t x179 = 1U;
	int64_t x180 = INT64_MAX;
	static volatile int64_t t39 = INT64_MAX;

	t39 = (((x177+x178)==x179)|x180);

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	uint8_t x183 = 60U;
	int16_t x184 = INT16_MIN;
	int32_t t40 = 1024074380;

	t40 = (((x181+x182)==x183)|x184);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 117U;
	static uint8_t x187 = UINT8_MAX;
	int64_t x188 = INT64_MIN;
	static int64_t t41 = INT64_MIN;

	t41 = (((x185+x186)==x187)|x188);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = 18U;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = -1;
	int8_t x192 = 7;
	static volatile int32_t t42 = 2;

	t42 = (((x189+x190)==x191)|x192);

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x199 = -1;
	uint32_t t43 = 208U;

	t43 = (((x197+x198)==x199)|x200);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x205 = 1328U;
	uint16_t x206 = 552U;
	static uint8_t x208 = 25U;
	int32_t t44 = -11695686;

	t44 = (((x205+x206)==x207)|x208);

	if (t44 != 25) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x210 = -1;
	uint32_t x211 = 58U;
	static int32_t x212 = INT32_MIN;
	static volatile int32_t t45 = INT32_MIN;

	t45 = (((x209+x210)==x211)|x212);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = -1061910672403160090LL;
	int32_t x214 = INT32_MIN;
	static int64_t x215 = -1LL;

	t46 = (((x213+x214)==x215)|x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x217 = UINT8_MAX;
	volatile int64_t x218 = INT64_MIN;
	volatile int32_t x219 = INT32_MIN;
	static volatile int16_t x220 = -15983;
	static volatile int32_t t47 = 5199398;

	t47 = (((x217+x218)==x219)|x220);

	if (t47 != -15983) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = 37;
	uint32_t x222 = UINT32_MAX;
	volatile uint32_t x224 = 26695240U;

	t48 = (((x221+x222)==x223)|x224);

	if (t48 != 26695240U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x225 = UINT8_MAX;
	uint8_t x227 = 3U;
	uint32_t t49 = 319U;

	t49 = (((x225+x226)==x227)|x228);

	if (t49 != 18U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x229 = UINT32_MAX;
	uint64_t x230 = 2898838LLU;
	int16_t x231 = 497;
	uint64_t x232 = UINT64_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = (((x229+x230)==x231)|x232);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	static uint64_t x235 = 471915274702889LLU;
	int16_t x236 = -6022;
	volatile int32_t t51 = -79064656;

	t51 = (((x233+x234)==x235)|x236);

	if (t51 != -6022) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = INT16_MAX;
	static int64_t x242 = -1LL;
	volatile uint32_t x243 = 204453U;
	int8_t x244 = 0;
	int32_t t52 = 47539;

	t52 = (((x241+x242)==x243)|x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x245 = -1;
	int16_t x248 = -1;

	t53 = (((x245+x246)==x247)|x248);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x249 = UINT8_MAX;
	uint64_t x250 = 1LLU;
	static int8_t x251 = -1;
	int32_t x252 = 815;
	int32_t t54 = 56;

	t54 = (((x249+x250)==x251)|x252);

	if (t54 != 815) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x253 = 1LLU;
	int8_t x254 = -2;
	int32_t x255 = 8574095;
	static volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t55 = 491776280;

	t55 = (((x253+x254)==x255)|x256);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = 88LL;
	int32_t x259 = -4031;
	static volatile uint64_t t56 = UINT64_MAX;

	t56 = (((x257+x258)==x259)|x260);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = -1LL;
	uint64_t x262 = UINT64_MAX;
	volatile int16_t x263 = INT16_MAX;
	int8_t x264 = 4;
	volatile int32_t t57 = -1807;

	t57 = (((x261+x262)==x263)|x264);

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x265 = -1;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 333892697LLU;
	uint64_t t58 = 16452561974139122LLU;

	t58 = (((x265+x266)==x267)|x268);

	if (t58 != 333892697LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x270 = 556491300335758409LLU;
	static uint64_t x272 = UINT64_MAX;

	t59 = (((x269+x270)==x271)|x272);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = -1867;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = UINT32_MAX;
	volatile int8_t x276 = INT8_MIN;
	int32_t t60 = 2676;

	t60 = (((x273+x274)==x275)|x276);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static int32_t x279 = INT32_MAX;
	volatile int64_t t61 = 21LL;

	t61 = (((x277+x278)==x279)|x280);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x282 = 6;
	uint64_t x283 = 403388275LLU;
	volatile int32_t x284 = INT32_MAX;
	int32_t t62 = INT32_MAX;

	t62 = (((x281+x282)==x283)|x284);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x289 = UINT16_MAX;
	uint32_t x290 = 55795U;
	static int32_t x291 = -1;
	int64_t x292 = INT64_MIN;
	int64_t t63 = INT64_MIN;

	t63 = (((x289+x290)==x291)|x292);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x295 = 1903LLU;
	volatile int32_t x296 = INT32_MIN;
	int32_t t64 = INT32_MIN;

	t64 = (((x293+x294)==x295)|x296);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x298 = 0U;
	static int64_t x299 = -21491LL;
	int32_t x300 = 2466;
	int32_t t65 = -31664081;

	t65 = (((x297+x298)==x299)|x300);

	if (t65 != 2466) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = 2U;
	int16_t x302 = 31;
	int16_t x303 = -32;
	int32_t x304 = INT32_MIN;

	t66 = (((x301+x302)==x303)|x304);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MAX;
	int64_t x308 = -27544LL;
	static volatile int64_t t67 = 66963154240LL;

	t67 = (((x305+x306)==x307)|x308);

	if (t67 != -27544LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x309 = -19;
	uint32_t x310 = 334914482U;
	int16_t x311 = -1;
	int8_t x312 = INT8_MAX;
	int32_t t68 = 1582562;

	t68 = (((x309+x310)==x311)|x312);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 211U;
	int64_t x320 = 112236179LL;

	t69 = (((x317+x318)==x319)|x320);

	if (t69 != 112236179LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MAX;
	uint16_t x323 = 2728U;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t70 = -54396752;

	t70 = (((x321+x322)==x323)|x324);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x325 = INT8_MAX;
	static int64_t x327 = 119797976861LL;
	static uint8_t x328 = UINT8_MAX;
	int32_t t71 = 10663;

	t71 = (((x325+x326)==x327)|x328);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x335 = 214U;
	int8_t x336 = -1;
	int32_t t72 = -1;

	t72 = (((x333+x334)==x335)|x336);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x337 = INT8_MAX;
	int8_t x340 = INT8_MAX;
	int32_t t73 = 2;

	t73 = (((x337+x338)==x339)|x340);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = -1;
	volatile int16_t x342 = INT16_MIN;
	volatile int32_t t74 = -25218;

	t74 = (((x341+x342)==x343)|x344);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x345 = UINT32_MAX;
	int8_t x346 = 53;
	volatile int8_t x347 = INT8_MAX;
	uint8_t x348 = 116U;

	t75 = (((x345+x346)==x347)|x348);

	if (t75 != 116) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x353 = 8U;
	int64_t x355 = 14309839980LL;
	volatile int32_t x356 = -1;
	int32_t t76 = -278523416;

	t76 = (((x353+x354)==x355)|x356);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x357 = -1;
	int32_t x358 = -1;
	int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MAX;
	int64_t t77 = INT64_MAX;

	t77 = (((x357+x358)==x359)|x360);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = INT8_MAX;
	int64_t x363 = INT64_MIN;
	volatile uint16_t x364 = UINT16_MAX;
	static int32_t t78 = -15021856;

	t78 = (((x361+x362)==x363)|x364);

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MAX;

	t79 = (((x365+x366)==x367)|x368);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = INT32_MAX;
	uint64_t x371 = 3680188647071765488LLU;
	volatile int8_t x372 = -5;

	t80 = (((x369+x370)==x371)|x372);

	if (t80 != -5) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x378 = -1;
	int32_t x379 = INT32_MIN;

	t81 = (((x377+x378)==x379)|x380);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x381 = 1U;
	static uint16_t x382 = 211U;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	volatile int64_t t82 = INT64_MIN;

	t82 = (((x381+x382)==x383)|x384);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = 828166396118820897LL;
	uint32_t x386 = 6945012U;
	int16_t x387 = INT16_MIN;
	int32_t t83 = -2;

	t83 = (((x385+x386)==x387)|x388);

	if (t83 != -18) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = INT64_MAX;
	uint64_t x390 = 30005228136LLU;
	static int16_t x391 = -12;
	uint32_t x392 = 8U;
	uint32_t t84 = 449118U;

	t84 = (((x389+x390)==x391)|x392);

	if (t84 != 8U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x393 = -1;
	int8_t x395 = INT8_MIN;
	volatile int32_t t85 = 125992;

	t85 = (((x393+x394)==x395)|x396);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x397 = 33289LLU;
	int32_t x398 = -1;
	static uint32_t x399 = 603U;
	int8_t x400 = -36;

	t86 = (((x397+x398)==x399)|x400);

	if (t86 != -36) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x402 = -1;
	int8_t x403 = 0;
	uint32_t x404 = 219277U;
	uint32_t t87 = 42668744U;

	t87 = (((x401+x402)==x403)|x404);

	if (t87 != 219277U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x406 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	static uint8_t x408 = 1U;
	int32_t t88 = -11928;

	t88 = (((x405+x406)==x407)|x408);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x412 = -199;
	volatile int32_t t89 = 692;

	t89 = (((x409+x410)==x411)|x412);

	if (t89 != -199) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = INT32_MAX;
	int16_t x414 = INT16_MIN;
	volatile uint16_t x415 = UINT16_MAX;
	volatile int32_t t90 = -490;

	t90 = (((x413+x414)==x415)|x416);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x422 = INT64_MIN;
	static int64_t x423 = INT64_MIN;
	uint32_t x424 = 142124U;
	volatile uint32_t t91 = 10259U;

	t91 = (((x421+x422)==x423)|x424);

	if (t91 != 142125U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x426 = INT64_MIN;
	uint64_t x427 = 30431078660787LLU;
	volatile int64_t x428 = INT64_MAX;
	int64_t t92 = INT64_MAX;

	t92 = (((x425+x426)==x427)|x428);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = 7LLU;
	int16_t x430 = -1;
	int16_t x431 = -1;
	volatile uint64_t x432 = 54731LLU;
	uint64_t t93 = 334488LLU;

	t93 = (((x429+x430)==x431)|x432);

	if (t93 != 54731LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = INT64_MIN;
	static int64_t x435 = -1399535989LL;
	int64_t x436 = 1LL;
	static volatile int64_t t94 = -3LL;

	t94 = (((x433+x434)==x435)|x436);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x437 = 5384244U;
	int8_t x438 = 7;
	volatile int16_t x439 = INT16_MAX;
	int32_t t95 = 2684147;

	t95 = (((x437+x438)==x439)|x440);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = -57;
	int64_t x443 = INT64_MAX;
	int32_t x444 = INT32_MIN;
	int32_t t96 = INT32_MIN;

	t96 = (((x441+x442)==x443)|x444);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x445 = 366134731U;
	int32_t x446 = INT32_MIN;
	static int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;
	static int32_t t97 = 284797366;

	t97 = (((x445+x446)==x447)|x448);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x450 = -4576527456740LL;
	int16_t x451 = INT16_MIN;
	static int16_t x452 = INT16_MIN;

	t98 = (((x449+x450)==x451)|x452);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x458 = 3;
	int8_t x460 = -1;

	t99 = (((x457+x458)==x459)|x460);

	if (t99 != -1) { NG(); } else { ; }
	
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

