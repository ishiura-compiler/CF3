#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
int8_t x9 = -45;
int32_t x11 = 13;
volatile int32_t t5 = 14;
volatile int32_t t6 = 53637265;
static int8_t x33 = INT8_MIN;
int64_t x34 = -10584848165LL;
static int32_t t8 = 15258367;
static volatile int32_t t12 = 86767;
volatile int8_t x62 = -54;
int32_t x64 = -32124;
volatile int32_t t14 = 253719;
uint16_t x66 = UINT16_MAX;
static volatile int32_t t17 = 565097;
volatile int32_t t18 = 28018;
int32_t t19 = 89;
int16_t x89 = -10973;
int16_t x91 = 0;
uint32_t x94 = 13701U;
uint64_t x100 = UINT64_MAX;
int32_t t22 = 51;
static int32_t x104 = -270439706;
int16_t x105 = -1;
uint8_t x106 = 10U;
int64_t x109 = INT64_MIN;
uint64_t x114 = 31887586764867049LLU;
static int32_t t26 = -5451397;
int8_t x124 = -6;
int32_t t28 = 867;
uint16_t x127 = 292U;
volatile uint32_t x129 = 11904499U;
static int64_t x133 = INT64_MAX;
static volatile int64_t x138 = INT64_MAX;
int32_t x146 = -189470274;
uint64_t x148 = 87245365899269LLU;
volatile int32_t t35 = 2;
volatile uint64_t x153 = UINT64_MAX;
static int8_t x154 = -1;
uint16_t x155 = 23131U;
volatile int8_t x159 = -1;
volatile int32_t t38 = 112674;
int32_t t39 = -80006401;
volatile int16_t x171 = -11;
uint32_t x172 = 65638592U;
int32_t t40 = -102;
static int64_t x181 = 910LL;
int32_t x182 = 816472;
volatile int32_t t43 = 2;
int64_t x198 = INT64_MAX;
volatile int32_t t46 = 18027;
int32_t x208 = INT32_MIN;
static volatile int32_t t47 = -236093205;
int16_t x225 = -3454;
volatile uint16_t x226 = UINT16_MAX;
int32_t t52 = 875436;
static int64_t x229 = INT64_MIN;
int32_t x231 = INT32_MIN;
volatile int32_t t53 = 16166518;
int16_t x235 = INT16_MIN;
uint64_t x236 = 61347417LLU;
int32_t t54 = 33;
volatile int16_t x243 = -701;
static uint32_t x253 = 952U;
int32_t x254 = INT32_MAX;
static int16_t x263 = INT16_MIN;
uint32_t x264 = 35983U;
int32_t x265 = INT32_MAX;
int32_t t61 = -2031;
int64_t x271 = INT64_MAX;
uint8_t x279 = 1U;
volatile int32_t t64 = 953722;
uint16_t x286 = 5U;
int16_t x287 = -7592;
int8_t x292 = INT8_MIN;
uint32_t x299 = 8U;
static uint8_t x303 = UINT8_MAX;
int64_t x304 = INT64_MIN;
volatile int32_t t70 = 54;
volatile int32_t t71 = -567186915;
volatile int32_t t72 = -1067;
int32_t x323 = 3745;
int8_t x324 = INT8_MIN;
volatile int32_t t74 = -130;
int16_t x332 = INT16_MAX;
static uint32_t x336 = UINT32_MAX;
volatile int8_t x339 = -21;
int32_t x347 = 812666;
uint64_t x348 = 199373107968LLU;
volatile int32_t x352 = INT32_MIN;
volatile int32_t t80 = -16065738;
volatile uint64_t x357 = UINT64_MAX;
int8_t x360 = 0;
int16_t x367 = -1;
uint32_t x373 = 243120629U;
int8_t x375 = INT8_MIN;
uint32_t x382 = 1272147U;
int32_t t90 = 1;
int16_t x405 = INT16_MIN;
static int8_t x418 = INT8_MAX;
static uint16_t x421 = 135U;
volatile uint64_t x427 = 6069288303668237LLU;
volatile uint8_t x429 = 2U;
int32_t x430 = INT32_MIN;
static volatile int16_t x431 = INT16_MIN;
int8_t x432 = -1;
static int16_t x433 = INT16_MIN;
static volatile uint64_t x434 = 13LLU;
int32_t x438 = INT32_MAX;
int32_t t98 = 12;


void f0(void) {
	volatile uint64_t x6 = UINT64_MAX;
	int32_t x7 = 0;
	int8_t x8 = -1;
	volatile int32_t t0 = 27990650;

	t0 = (((x5+x6)|x7)==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x10 = INT64_MAX;
	volatile int8_t x12 = -1;
	volatile int32_t t1 = -21;

	t1 = (((x9+x10)|x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	int16_t x14 = 16056;
	int32_t x15 = -1;
	int64_t x16 = 964921363LL;
	int32_t t2 = -2286;

	t2 = (((x13+x14)|x15)==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 1U;
	int32_t x20 = 1;
	int32_t t3 = -3;

	t3 = (((x17+x18)|x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = UINT32_MAX;
	int16_t x23 = 494;
	static int8_t x24 = -1;
	static int32_t t4 = -11297;

	t4 = (((x21+x22)|x23)==x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = 888589249394LL;
	int64_t x26 = INT64_MIN;
	uint64_t x27 = 591333093238457LLU;
	int64_t x28 = 1868744387LL;

	t5 = (((x25+x26)|x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int8_t x30 = INT8_MAX;
	uint8_t x31 = 2U;
	volatile uint64_t x32 = 450382511065294040LLU;

	t6 = (((x29+x30)|x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x35 = UINT16_MAX;
	uint64_t x36 = 1206759LLU;
	volatile int32_t t7 = -6906;

	t7 = (((x33+x34)|x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -1;
	int16_t x38 = INT16_MIN;
	int32_t x39 = -1;
	volatile uint8_t x40 = 0U;

	t8 = (((x37+x38)|x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MIN;
	volatile int64_t x42 = -258699713383LL;
	uint8_t x43 = UINT8_MAX;
	volatile uint32_t x44 = UINT32_MAX;
	int32_t t9 = -12535830;

	t9 = (((x41+x42)|x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	int8_t x46 = 2;
	int8_t x47 = -3;
	static uint8_t x48 = 0U;
	volatile int32_t t10 = -1395910;

	t10 = (((x45+x46)|x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	static int8_t x50 = INT8_MAX;
	static int8_t x51 = -1;
	int8_t x52 = 4;
	volatile int32_t t11 = 3;

	t11 = (((x49+x50)|x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	volatile uint64_t x54 = 4463246530LLU;
	int32_t x55 = 648701;
	static int32_t x56 = INT32_MIN;

	t12 = (((x53+x54)|x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = UINT8_MAX;
	int64_t x58 = INT64_MIN;
	static volatile uint64_t x59 = UINT64_MAX;
	volatile int16_t x60 = INT16_MIN;
	int32_t t13 = 383;

	t13 = (((x57+x58)|x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 169859560001LLU;
	volatile int64_t x63 = INT64_MAX;

	t14 = (((x61+x62)|x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int16_t x67 = INT16_MAX;
	uint16_t x68 = 214U;
	volatile int32_t t15 = -180577;

	t15 = (((x65+x66)|x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	uint16_t x70 = 3U;
	uint32_t x71 = 199159U;
	uint32_t x72 = UINT32_MAX;
	int32_t t16 = -204;

	t16 = (((x69+x70)|x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 34U;
	int32_t x74 = -1;
	int32_t x75 = INT32_MAX;
	volatile uint32_t x76 = 2U;

	t17 = (((x73+x74)|x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int64_t x82 = -90721235704LL;
	int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MAX;

	t18 = (((x81+x82)|x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MAX;
	int64_t x87 = -4216455633LL;
	uint64_t x88 = 939672447LLU;

	t19 = (((x85+x86)|x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = -363469338LL;
	int8_t x92 = INT8_MIN;
	volatile int32_t t20 = -1;

	t20 = (((x89+x90)|x91)==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = -7;
	int32_t x95 = -1;
	static volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t21 = 910559072;

	t21 = (((x93+x94)|x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x97 = 2U;
	int8_t x98 = -14;
	volatile int8_t x99 = -1;

	t22 = (((x97+x98)|x99)==x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 1097041181311LLU;
	static uint8_t x102 = UINT8_MAX;
	static uint8_t x103 = 2U;
	int32_t t23 = 7849;

	t23 = (((x101+x102)|x103)==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x107 = 1;
	int64_t x108 = -1LL;
	volatile int32_t t24 = -208387;

	t24 = (((x105+x106)|x107)==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = 4603;
	int8_t x111 = 0;
	static volatile int64_t x112 = -1LL;
	volatile int32_t t25 = 1917;

	t25 = (((x109+x110)|x111)==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MIN;
	uint16_t x115 = UINT16_MAX;
	int8_t x116 = -1;

	t26 = (((x113+x114)|x115)==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 95U;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 15721U;
	volatile int32_t x120 = 174772220;
	volatile int32_t t27 = -21;

	t27 = (((x117+x118)|x119)==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x121 = INT8_MAX;
	static int8_t x122 = INT8_MAX;
	static int16_t x123 = 30;

	t28 = (((x121+x122)|x123)==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	static int8_t x126 = INT8_MAX;
	volatile uint32_t x128 = 31868331U;
	int32_t t29 = 2588;

	t29 = (((x125+x126)|x127)==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x130 = 199U;
	int16_t x131 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	int32_t t30 = -275;

	t30 = (((x129+x130)|x131)==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = -890;
	int8_t x135 = 45;
	volatile uint8_t x136 = 51U;
	int32_t t31 = 3;

	t31 = (((x133+x134)|x135)==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 0U;
	int8_t x139 = 0;
	static int16_t x140 = -176;
	volatile int32_t t32 = -89659;

	t32 = (((x137+x138)|x139)==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -27;
	static int16_t x142 = -7;
	static uint16_t x143 = 7U;
	int8_t x144 = 0;
	volatile int32_t t33 = -35;

	t33 = (((x141+x142)|x143)==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x145 = 51U;
	int32_t x147 = -8807;
	volatile int32_t t34 = 74606956;

	t34 = (((x145+x146)|x147)==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	uint64_t x150 = 168098LLU;
	int16_t x151 = -1;
	uint32_t x152 = 82807U;

	t35 = (((x149+x150)|x151)==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x156 = 31793;
	volatile int32_t t36 = -203;

	t36 = (((x153+x154)|x155)==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x157 = UINT64_MAX;
	uint32_t x158 = 53171588U;
	static volatile int16_t x160 = 14510;
	int32_t t37 = -1;

	t37 = (((x157+x158)|x159)==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 14590455178902LLU;
	int32_t x162 = 72765;
	int64_t x163 = INT64_MAX;
	uint32_t x164 = 100U;

	t38 = (((x161+x162)|x163)==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 46U;
	int32_t x166 = INT32_MIN;
	volatile uint64_t x167 = 28145896931214LLU;
	volatile uint16_t x168 = 0U;

	t39 = (((x165+x166)|x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = INT8_MIN;
	uint16_t x170 = 801U;

	t40 = (((x169+x170)|x171)==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1;
	int64_t x174 = -24716219LL;
	int8_t x175 = -1;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t41 = -70617752;

	t41 = (((x173+x174)|x175)==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x183 = INT8_MIN;
	volatile uint64_t x184 = 136281504830883429LLU;
	int32_t t42 = -43555;

	t42 = (((x181+x182)|x183)==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = -1LL;
	int64_t x190 = -77941595439LL;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;

	t43 = (((x189+x190)|x191)==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MAX;
	static int16_t x195 = -1;
	static volatile uint8_t x196 = UINT8_MAX;
	volatile int32_t t44 = -120389096;

	t44 = (((x193+x194)|x195)==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = 1871161LLU;
	uint8_t x199 = 10U;
	static int32_t x200 = -474378;
	volatile int32_t t45 = 6125184;

	t45 = (((x197+x198)|x199)==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = UINT32_MAX;
	volatile int64_t x202 = -1LL;
	int64_t x203 = -1LL;
	volatile int8_t x204 = INT8_MAX;

	t46 = (((x201+x202)|x203)==x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = 41;
	int8_t x206 = INT8_MIN;
	volatile uint32_t x207 = 9U;

	t47 = (((x205+x206)|x207)==x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = 39;
	int64_t x210 = -1995818978829LL;
	static volatile uint64_t x211 = UINT64_MAX;
	uint32_t x212 = UINT32_MAX;
	int32_t t48 = -542;

	t48 = (((x209+x210)|x211)==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x213 = INT64_MIN;
	volatile int32_t x214 = INT32_MAX;
	static volatile int64_t x215 = -1LL;
	static volatile uint8_t x216 = 6U;
	volatile int32_t t49 = -30671189;

	t49 = (((x213+x214)|x215)==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = UINT16_MAX;
	uint64_t x218 = UINT64_MAX;
	int16_t x219 = INT16_MIN;
	volatile int64_t x220 = -1LL;
	static int32_t t50 = -3788969;

	t50 = (((x217+x218)|x219)==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x221 = INT8_MIN;
	int64_t x222 = -1LL;
	uint32_t x223 = 137438U;
	uint64_t x224 = 6240614613238276LLU;
	volatile int32_t t51 = 168010832;

	t51 = (((x221+x222)|x223)==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x227 = -7545467096839857LL;
	int32_t x228 = -3649549;

	t52 = (((x225+x226)|x227)==x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x230 = INT32_MAX;
	static int16_t x232 = INT16_MIN;

	t53 = (((x229+x230)|x231)==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = -3;
	static int32_t x234 = INT32_MAX;

	t54 = (((x233+x234)|x235)==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = 16862107782687LLU;
	int8_t x238 = -1;
	uint16_t x239 = 5845U;
	int16_t x240 = -10459;
	int32_t t55 = -24;

	t55 = (((x237+x238)|x239)==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x241 = UINT64_MAX;
	uint64_t x242 = UINT64_MAX;
	uint8_t x244 = 55U;
	int32_t t56 = 921;

	t56 = (((x241+x242)|x243)==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = INT8_MAX;
	volatile int32_t x250 = 3;
	static uint32_t x251 = 535U;
	int64_t x252 = INT64_MIN;
	volatile int32_t t57 = 4;

	t57 = (((x249+x250)|x251)==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x255 = INT32_MAX;
	static int32_t x256 = -513790;
	volatile int32_t t58 = -4621093;

	t58 = (((x253+x254)|x255)==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MIN;
	static int32_t x258 = -1;
	int16_t x259 = 1;
	int32_t x260 = -112164082;
	int32_t t59 = 13592;

	t59 = (((x257+x258)|x259)==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MAX;
	int8_t x262 = -1;
	int32_t t60 = 175311;

	t60 = (((x261+x262)|x263)==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x266 = -1447298783998100215LL;
	int16_t x267 = 3646;
	volatile int8_t x268 = INT8_MIN;

	t61 = (((x265+x266)|x267)==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = -1;
	int32_t x272 = INT32_MAX;
	int32_t t62 = 387;

	t62 = (((x269+x270)|x271)==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x277 = 0LL;
	int16_t x278 = -1;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t63 = -277;

	t63 = (((x277+x278)|x279)==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x281 = UINT64_MAX;
	static uint16_t x282 = 14U;
	uint32_t x283 = 14046575U;
	uint16_t x284 = 245U;

	t64 = (((x281+x282)|x283)==x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x285 = -1;
	int16_t x288 = 11;
	int32_t t65 = -3;

	t65 = (((x285+x286)|x287)==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x289 = 446831919905245474LLU;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -61911;
	int32_t t66 = -629338264;

	t66 = (((x289+x290)|x291)==x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MIN;
	uint64_t x294 = 99775699868288384LLU;
	uint32_t x295 = 55272367U;
	int8_t x296 = -1;
	int32_t t67 = 1;

	t67 = (((x293+x294)|x295)==x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = 7;
	int16_t x298 = 7029;
	int32_t x300 = INT32_MAX;
	volatile int32_t t68 = 4;

	t68 = (((x297+x298)|x299)==x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = 0;
	int32_t t69 = -4;

	t69 = (((x301+x302)|x303)==x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MAX;
	uint16_t x306 = 163U;
	static int64_t x307 = INT64_MIN;
	volatile int32_t x308 = 740356623;

	t70 = (((x305+x306)|x307)==x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x309 = UINT64_MAX;
	static volatile uint16_t x310 = 61U;
	static volatile int64_t x311 = -1LL;
	static int16_t x312 = -1;

	t71 = (((x309+x310)|x311)==x312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x317 = 123613640668115907LLU;
	static int8_t x318 = INT8_MIN;
	static volatile int16_t x319 = INT16_MIN;
	int64_t x320 = 0LL;

	t72 = (((x317+x318)|x319)==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x321 = -204204597;
	uint8_t x322 = UINT8_MAX;
	volatile int32_t t73 = -884;

	t73 = (((x321+x322)|x323)==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 3LLU;
	static uint8_t x326 = UINT8_MAX;
	volatile uint16_t x327 = 2035U;
	int16_t x328 = 422;

	t74 = (((x325+x326)|x327)==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	int8_t x331 = 1;
	volatile int32_t t75 = 30103;

	t75 = (((x329+x330)|x331)==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = INT16_MAX;
	uint32_t x334 = UINT32_MAX;
	static int32_t x335 = INT32_MAX;
	int32_t t76 = 2;

	t76 = (((x333+x334)|x335)==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = -1;
	int8_t x338 = -1;
	volatile int64_t x340 = -1LL;
	int32_t t77 = -12555;

	t77 = (((x337+x338)|x339)==x340);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = INT8_MAX;
	int8_t x342 = INT8_MAX;
	static uint16_t x343 = 72U;
	uint8_t x344 = 29U;
	volatile int32_t t78 = -1;

	t78 = (((x341+x342)|x343)==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = -1;
	int8_t x346 = INT8_MAX;
	volatile int32_t t79 = 15;

	t79 = (((x345+x346)|x347)==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x349 = INT8_MAX;
	static volatile int8_t x350 = INT8_MIN;
	int32_t x351 = -8172;

	t80 = (((x349+x350)|x351)==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = -34137548823234LL;
	int8_t x354 = INT8_MAX;
	int32_t x355 = -7320408;
	static volatile int16_t x356 = 48;
	int32_t t81 = -1189;

	t81 = (((x353+x354)|x355)==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x358 = UINT32_MAX;
	static int8_t x359 = INT8_MIN;
	volatile int32_t t82 = -1;

	t82 = (((x357+x358)|x359)==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = -1;
	uint16_t x366 = 45U;
	int64_t x368 = INT64_MIN;
	int32_t t83 = -3498;

	t83 = (((x365+x366)|x367)==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = 12593U;
	int64_t x370 = -79773LL;
	volatile int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	static volatile int32_t t84 = 352;

	t84 = (((x369+x370)|x371)==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x374 = INT16_MIN;
	static int64_t x376 = INT64_MIN;
	int32_t t85 = -1283;

	t85 = (((x373+x374)|x375)==x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -4636;
	static volatile uint16_t x383 = 12755U;
	int64_t x384 = -1LL;
	volatile int32_t t86 = -18;

	t86 = (((x381+x382)|x383)==x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x385 = 0U;
	int8_t x386 = -1;
	int16_t x387 = -56;
	uint64_t x388 = 3487686368930299LLU;
	static int32_t t87 = 5902;

	t87 = (((x385+x386)|x387)==x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x393 = -36197;
	int16_t x394 = INT16_MIN;
	static int8_t x395 = -5;
	uint16_t x396 = 217U;
	volatile int32_t t88 = -6132748;

	t88 = (((x393+x394)|x395)==x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x397 = -4;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = -30937691274LL;
	volatile uint8_t x400 = 3U;
	static volatile int32_t t89 = 147964780;

	t89 = (((x397+x398)|x399)==x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x401 = 1U;
	int8_t x402 = INT8_MIN;
	uint32_t x403 = UINT32_MAX;
	static int8_t x404 = INT8_MIN;

	t90 = (((x401+x402)|x403)==x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x406 = -7785368;
	int64_t x407 = -1LL;
	int16_t x408 = INT16_MAX;
	volatile int32_t t91 = -80;

	t91 = (((x405+x406)|x407)==x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x413 = -1;
	static int64_t x414 = INT64_MAX;
	uint8_t x415 = 27U;
	int32_t x416 = INT32_MIN;
	int32_t t92 = 3;

	t92 = (((x413+x414)|x415)==x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x417 = INT16_MAX;
	volatile uint64_t x419 = 2476LLU;
	uint8_t x420 = 4U;
	volatile int32_t t93 = 0;

	t93 = (((x417+x418)|x419)==x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x422 = -45;
	volatile int8_t x423 = 0;
	int8_t x424 = 0;
	volatile int32_t t94 = -13063;

	t94 = (((x421+x422)|x423)==x424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x425 = UINT32_MAX;
	uint64_t x426 = 197LLU;
	uint16_t x428 = 3758U;
	volatile int32_t t95 = 13940268;

	t95 = (((x425+x426)|x427)==x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t t96 = 86;

	t96 = (((x429+x430)|x431)==x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x435 = INT16_MAX;
	int8_t x436 = -1;
	int32_t t97 = -16425494;

	t97 = (((x433+x434)|x435)==x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = -14300224707179488LL;
	volatile int8_t x439 = -1;
	uint16_t x440 = UINT16_MAX;

	t98 = (((x437+x438)|x439)==x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = INT8_MAX;
	int64_t x442 = INT64_MIN;
	static int32_t x443 = -1226984;
	static int64_t x444 = INT64_MIN;
	volatile int32_t t99 = -2878297;

	t99 = (((x441+x442)|x443)==x444);

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

