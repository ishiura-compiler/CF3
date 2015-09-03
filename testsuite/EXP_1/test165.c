#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x11 = -3271;
int16_t x12 = INT16_MAX;
volatile int16_t x18 = INT16_MIN;
uint16_t x21 = UINT16_MAX;
int32_t x22 = INT32_MIN;
static int64_t x25 = INT64_MAX;
uint64_t x28 = 2052630088429LLU;
volatile int64_t x36 = -5887326348LL;
volatile int32_t t7 = 965377;
uint8_t x39 = UINT8_MAX;
int16_t x40 = -10;
int16_t x41 = -1;
volatile int8_t x43 = 6;
volatile int32_t t9 = -1;
uint8_t x59 = 120U;
volatile int32_t t13 = -3285509;
int32_t x71 = -1;
uint8_t x75 = UINT8_MAX;
int64_t x78 = -574856LL;
uint8_t x92 = UINT8_MAX;
volatile int32_t t18 = -1;
uint32_t x94 = UINT32_MAX;
volatile int64_t x95 = -9LL;
volatile int32_t t19 = -3;
volatile uint32_t x98 = 15980U;
volatile int32_t t20 = 304065409;
static uint16_t x109 = UINT16_MAX;
int8_t x110 = INT8_MIN;
uint16_t x114 = UINT16_MAX;
int32_t t27 = 15441;
int16_t x138 = INT16_MIN;
volatile int32_t t32 = -2165;
static uint8_t x150 = 3U;
volatile int32_t x152 = INT32_MAX;
static uint8_t x157 = 44U;
volatile int64_t x161 = INT64_MAX;
int16_t x162 = INT16_MIN;
uint64_t x166 = 13559009420LLU;
int8_t x168 = -1;
volatile uint16_t x177 = 15750U;
int32_t t40 = 3421320;
uint16_t x184 = 5539U;
int32_t t41 = -9509085;
int16_t x190 = 0;
int8_t x205 = INT8_MIN;
int16_t x207 = INT16_MIN;
int32_t t45 = 819469;
static int16_t x214 = 26;
int64_t x215 = INT64_MAX;
volatile int32_t t46 = -7;
uint32_t x218 = 6U;
volatile uint8_t x219 = 3U;
volatile int16_t x225 = INT16_MIN;
uint32_t x227 = UINT32_MAX;
int64_t x242 = -668109585094353LL;
static uint8_t x245 = 2U;
int32_t t54 = -84366;
uint32_t x258 = UINT32_MAX;
static volatile int8_t x260 = -8;
int32_t t57 = -7850;
int16_t x261 = INT16_MIN;
int32_t x270 = 0;
static int16_t x279 = 128;
int8_t x281 = -1;
uint8_t x282 = 32U;
int8_t x290 = -1;
static uint64_t x292 = UINT64_MAX;
int32_t t64 = 1;
int32_t t67 = -176;
volatile int32_t t68 = -1;
int32_t x318 = -1;
int16_t x320 = -84;
uint64_t x329 = UINT64_MAX;
int64_t x332 = 4435331034418LL;
int8_t x336 = -12;
volatile int32_t t74 = 116;
static int8_t x343 = INT8_MIN;
int8_t x344 = 42;
volatile int32_t t75 = -27743;
int64_t x359 = 11159991LL;
int32_t x363 = INT32_MIN;
volatile int32_t t79 = -123505;
int64_t x369 = INT64_MAX;
uint64_t x374 = UINT64_MAX;
int16_t x376 = INT16_MIN;
int8_t x380 = -1;
int32_t x383 = INT32_MAX;
static int32_t t84 = 0;
int32_t x405 = -1;
int32_t t90 = 5;
uint64_t x415 = UINT64_MAX;
static uint16_t x434 = 88U;
volatile uint16_t x437 = 15967U;
int32_t x438 = -1;
int16_t x440 = -1;
int8_t x452 = INT8_MAX;
static int32_t x453 = 319885224;


void f0(void) {
	int32_t x5 = -1;
	int8_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MAX;
	static volatile int32_t t0 = 74;

	t0 = (((x5+x6)^x7)<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	uint64_t x10 = UINT64_MAX;
	volatile int32_t t1 = -13317;

	t1 = (((x9+x10)^x11)<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	volatile uint16_t x14 = UINT16_MAX;
	static uint8_t x15 = UINT8_MAX;
	static volatile int32_t x16 = INT32_MIN;
	volatile int32_t t2 = 492;

	t2 = (((x13+x14)^x15)<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int16_t x19 = -53;
	int64_t x20 = INT64_MAX;
	volatile int32_t t3 = 135677109;

	t3 = (((x17+x18)^x19)<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x23 = UINT16_MAX;
	volatile int64_t x24 = INT64_MIN;
	int32_t t4 = -475574753;

	t4 = (((x21+x22)^x23)<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MIN;
	int8_t x27 = -1;
	volatile int32_t t5 = -244109300;

	t5 = (((x25+x26)^x27)<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x29 = 25U;
	static int16_t x30 = -1;
	int64_t x31 = INT64_MIN;
	int32_t x32 = -1;
	volatile int32_t t6 = -13;

	t6 = (((x29+x30)^x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -1;
	int32_t x34 = -1;
	static int64_t x35 = INT64_MIN;

	t7 = (((x33+x34)^x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 18U;
	uint32_t x38 = 4U;
	volatile int32_t t8 = 262114;

	t8 = (((x37+x38)^x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MIN;
	int32_t x44 = -566148;

	t9 = (((x41+x42)^x43)<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 3U;
	int16_t x50 = -1;
	static volatile int16_t x51 = INT16_MIN;
	static volatile int8_t x52 = 1;
	int32_t t10 = -3754065;

	t10 = (((x49+x50)^x51)<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x53 = -13;
	volatile int16_t x54 = INT16_MIN;
	volatile uint16_t x55 = 15164U;
	volatile int64_t x56 = INT64_MIN;
	static int32_t t11 = -6460306;

	t11 = (((x53+x54)^x55)<x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	volatile int32_t x58 = -1;
	int64_t x60 = -1LL;
	volatile int32_t t12 = 64650;

	t12 = (((x57+x58)^x59)<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1;
	uint64_t x66 = 7604LLU;
	int64_t x67 = INT64_MIN;
	int8_t x68 = 1;

	t13 = (((x65+x66)^x67)<x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x69 = 271262LLU;
	static int16_t x70 = INT16_MAX;
	static uint16_t x72 = UINT16_MAX;
	int32_t t14 = 22179;

	t14 = (((x69+x70)^x71)<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 238818030LLU;
	uint16_t x74 = 13625U;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t15 = -4;

	t15 = (((x73+x74)^x75)<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	static int16_t x79 = -1388;
	int16_t x80 = INT16_MIN;
	static volatile int32_t t16 = 1988;

	t16 = (((x77+x78)^x79)<x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 929601687715LLU;
	int8_t x82 = 7;
	int8_t x83 = -1;
	static int16_t x84 = INT16_MAX;
	volatile int32_t t17 = -4116;

	t17 = (((x81+x82)^x83)<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MIN;
	volatile uint32_t x90 = UINT32_MAX;
	uint32_t x91 = UINT32_MAX;

	t18 = (((x89+x90)^x91)<x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x96 = 11U;

	t19 = (((x93+x94)^x95)<x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 115U;
	static int64_t x99 = INT64_MAX;
	volatile uint16_t x100 = 1U;

	t20 = (((x97+x98)^x99)<x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	volatile uint16_t x102 = 26971U;
	int64_t x103 = INT64_MAX;
	uint64_t x104 = 3599LLU;
	int32_t t21 = -186;

	t21 = (((x101+x102)^x103)<x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = -1;
	int8_t x106 = INT8_MIN;
	uint8_t x107 = 3U;
	static volatile int32_t x108 = INT32_MIN;
	volatile int32_t t22 = 250229982;

	t22 = (((x105+x106)^x107)<x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x111 = -10;
	int64_t x112 = 23965797364993LL;
	int32_t t23 = -14537004;

	t23 = (((x109+x110)^x111)<x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = -42;
	int16_t x115 = INT16_MIN;
	int8_t x116 = 15;
	volatile int32_t t24 = 644123723;

	t24 = (((x113+x114)^x115)<x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MAX;
	int64_t x119 = -713LL;
	int8_t x120 = -5;
	int32_t t25 = 39;

	t25 = (((x117+x118)^x119)<x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = 278789LL;
	volatile int32_t x122 = -1;
	uint64_t x123 = UINT64_MAX;
	static int64_t x124 = -719685LL;
	int32_t t26 = -63;

	t26 = (((x121+x122)^x123)<x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x125 = -1;
	static uint64_t x126 = UINT64_MAX;
	int32_t x127 = 5989045;
	uint32_t x128 = UINT32_MAX;

	t27 = (((x125+x126)^x127)<x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x129 = 91592543664146LLU;
	uint64_t x130 = 24920LLU;
	int8_t x131 = INT8_MAX;
	volatile int16_t x132 = INT16_MAX;
	volatile int32_t t28 = 125442719;

	t28 = (((x129+x130)^x131)<x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = UINT64_MAX;
	volatile uint64_t x134 = 86LLU;
	int16_t x135 = INT16_MAX;
	uint8_t x136 = 0U;
	int32_t t29 = -464;

	t29 = (((x133+x134)^x135)<x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = UINT64_MAX;
	volatile int64_t x139 = -1LL;
	uint32_t x140 = 221U;
	static int32_t t30 = -27085983;

	t30 = (((x137+x138)^x139)<x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x141 = 4U;
	static uint16_t x142 = 7U;
	volatile int16_t x143 = INT16_MIN;
	static int16_t x144 = -286;
	volatile int32_t t31 = 207;

	t31 = (((x141+x142)^x143)<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 27101U;
	static int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = 1U;

	t32 = (((x145+x146)^x147)<x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MIN;
	static int8_t x151 = INT8_MAX;
	volatile int32_t t33 = 7;

	t33 = (((x149+x150)^x151)<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = UINT16_MAX;
	int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MAX;
	uint16_t x156 = 3780U;
	volatile int32_t t34 = -28;

	t34 = (((x153+x154)^x155)<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = UINT8_MAX;
	volatile int32_t x160 = -1;
	volatile int32_t t35 = 1735069;

	t35 = (((x157+x158)^x159)<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x163 = 398111U;
	volatile int8_t x164 = INT8_MIN;
	int32_t t36 = -53035;

	t36 = (((x161+x162)^x163)<x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x165 = 0;
	static int16_t x167 = INT16_MIN;
	int32_t t37 = -2008;

	t37 = (((x165+x166)^x167)<x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = INT8_MAX;
	int32_t x170 = -1;
	int16_t x171 = -1;
	int16_t x172 = INT16_MIN;
	static int32_t t38 = -91;

	t38 = (((x169+x170)^x171)<x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x173 = INT64_MIN;
	static uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MAX;
	volatile int32_t t39 = -407296725;

	t39 = (((x173+x174)^x175)<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x178 = 2975838380550802829LLU;
	int64_t x179 = INT64_MAX;
	volatile int64_t x180 = 77LL;

	t40 = (((x177+x178)^x179)<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x181 = INT16_MAX;
	volatile uint64_t x182 = UINT64_MAX;
	int16_t x183 = INT16_MIN;

	t41 = (((x181+x182)^x183)<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	int16_t x191 = -28;
	int8_t x192 = INT8_MAX;
	int32_t t42 = -82865594;

	t42 = (((x189+x190)^x191)<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = -6385633LL;
	uint32_t x198 = 110362U;
	int8_t x199 = -18;
	int32_t x200 = INT32_MAX;
	int32_t t43 = -24034761;

	t43 = (((x197+x198)^x199)<x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x206 = INT8_MAX;
	int32_t x208 = INT32_MAX;
	static int32_t t44 = 0;

	t44 = (((x205+x206)^x207)<x208);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = -1LL;
	static volatile uint32_t x210 = 25209U;
	uint64_t x211 = 14803658LLU;
	static uint16_t x212 = UINT16_MAX;

	t45 = (((x209+x210)^x211)<x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = INT64_MIN;
	int8_t x216 = INT8_MIN;

	t46 = (((x213+x214)^x215)<x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x217 = UINT8_MAX;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t47 = -14729;

	t47 = (((x217+x218)^x219)<x220);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x221 = -1LL;
	volatile int8_t x222 = -50;
	int64_t x223 = 129214161641546830LL;
	int8_t x224 = INT8_MAX;
	volatile int32_t t48 = 1415;

	t48 = (((x221+x222)^x223)<x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x226 = UINT32_MAX;
	uint32_t x228 = 95U;
	volatile int32_t t49 = 122451;

	t49 = (((x225+x226)^x227)<x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -200;
	int32_t x230 = -1;
	static int32_t x231 = 347564;
	int8_t x232 = INT8_MAX;
	volatile int32_t t50 = -3122;

	t50 = (((x229+x230)^x231)<x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = UINT16_MAX;
	int8_t x234 = -1;
	int16_t x235 = INT16_MAX;
	static volatile int8_t x236 = -12;
	volatile int32_t t51 = 8;

	t51 = (((x233+x234)^x235)<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = 36;
	uint32_t x238 = 13U;
	static int32_t x239 = -1;
	int32_t x240 = INT32_MIN;
	static int32_t t52 = -470;

	t52 = (((x237+x238)^x239)<x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x241 = INT64_MAX;
	static int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	int32_t t53 = 22867841;

	t53 = (((x241+x242)^x243)<x244);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x246 = -1;
	uint32_t x247 = 31609U;
	int8_t x248 = INT8_MAX;

	t54 = (((x245+x246)^x247)<x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x249 = 117429582LLU;
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t55 = -38531;

	t55 = (((x249+x250)^x251)<x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = UINT8_MAX;
	int8_t x254 = INT8_MIN;
	int32_t x255 = -1;
	int64_t x256 = -1LL;
	static int32_t t56 = 118;

	t56 = (((x253+x254)^x255)<x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;

	t57 = (((x257+x258)^x259)<x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x262 = INT8_MIN;
	volatile uint64_t x263 = UINT64_MAX;
	uint64_t x264 = 704573LLU;
	int32_t t58 = -3747;

	t58 = (((x261+x262)^x263)<x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = UINT32_MAX;
	int32_t x266 = -1;
	int32_t x267 = INT32_MIN;
	static int8_t x268 = INT8_MAX;
	volatile int32_t t59 = 2522675;

	t59 = (((x265+x266)^x267)<x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = 15197291U;
	uint32_t x271 = 0U;
	int16_t x272 = -21;
	volatile int32_t t60 = -1;

	t60 = (((x269+x270)^x271)<x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = 8610;
	int64_t x278 = INT64_MIN;
	uint8_t x280 = 1U;
	volatile int32_t t61 = 60;

	t61 = (((x277+x278)^x279)<x280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x283 = INT16_MAX;
	static volatile int64_t x284 = -6757715284673300LL;
	int32_t t62 = 703789507;

	t62 = (((x281+x282)^x283)<x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = -4413;
	int16_t x286 = INT16_MIN;
	int16_t x287 = -1;
	int8_t x288 = INT8_MAX;
	static int32_t t63 = -17710;

	t63 = (((x285+x286)^x287)<x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x289 = -54;
	int8_t x291 = INT8_MAX;

	t64 = (((x289+x290)^x291)<x292);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	int16_t x295 = -1;
	uint32_t x296 = 0U;
	volatile int32_t t65 = -6;

	t65 = (((x293+x294)^x295)<x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = 1;
	static int8_t x298 = -15;
	int64_t x299 = -15416811211LL;
	volatile int16_t x300 = INT16_MIN;
	int32_t t66 = 1776225;

	t66 = (((x297+x298)^x299)<x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = INT8_MAX;
	uint16_t x306 = 5U;
	volatile int8_t x307 = -10;
	volatile uint16_t x308 = UINT16_MAX;

	t67 = (((x305+x306)^x307)<x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = INT32_MIN;
	uint16_t x310 = 3868U;
	static volatile int64_t x311 = INT64_MIN;
	volatile int8_t x312 = -3;

	t68 = (((x309+x310)^x311)<x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x313 = 34U;
	int64_t x314 = INT64_MIN;
	int64_t x315 = -1LL;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t69 = 1;

	t69 = (((x313+x314)^x315)<x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 8071967U;
	uint32_t x319 = 1689U;
	static int32_t t70 = 1407031;

	t70 = (((x317+x318)^x319)<x320);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = -120806664;
	int16_t x322 = INT16_MAX;
	static uint16_t x323 = 18407U;
	static int16_t x324 = 2;
	static int32_t t71 = -1;

	t71 = (((x321+x322)^x323)<x324);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x330 = 86U;
	uint8_t x331 = 28U;
	int32_t t72 = 0;

	t72 = (((x329+x330)^x331)<x332);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = -1;
	volatile int64_t x334 = -1LL;
	int32_t x335 = 184;
	static volatile int32_t t73 = -15483;

	t73 = (((x333+x334)^x335)<x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = -1;
	volatile uint16_t x338 = 325U;
	volatile int8_t x339 = 25;
	static int16_t x340 = INT16_MIN;

	t74 = (((x337+x338)^x339)<x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x341 = UINT64_MAX;
	int64_t x342 = -13LL;

	t75 = (((x341+x342)^x343)<x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x349 = INT16_MIN;
	volatile int8_t x350 = INT8_MAX;
	static uint8_t x351 = 7U;
	static int16_t x352 = INT16_MAX;
	int32_t t76 = 13141;

	t76 = (((x349+x350)^x351)<x352);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x353 = -984LL;
	volatile uint8_t x354 = 15U;
	int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t77 = -405;

	t77 = (((x353+x354)^x355)<x356);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x357 = 151U;
	static int8_t x358 = -1;
	static int16_t x360 = 82;
	static volatile int32_t t78 = 327;

	t78 = (((x357+x358)^x359)<x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x361 = INT64_MIN;
	volatile uint16_t x362 = 13U;
	uint16_t x364 = 6993U;

	t79 = (((x361+x362)^x363)<x364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x370 = INT16_MIN;
	static uint32_t x371 = 757176551U;
	static int16_t x372 = INT16_MIN;
	int32_t t80 = 201;

	t80 = (((x369+x370)^x371)<x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MIN;
	static int64_t x375 = INT64_MAX;
	static int32_t t81 = 78510483;

	t81 = (((x373+x374)^x375)<x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x377 = 8945684376810120129LLU;
	uint16_t x378 = UINT16_MAX;
	static int16_t x379 = INT16_MAX;
	volatile int32_t t82 = 339570;

	t82 = (((x377+x378)^x379)<x380);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x381 = 18U;
	int8_t x382 = INT8_MIN;
	int32_t x384 = -117539752;
	int32_t t83 = -3655042;

	t83 = (((x381+x382)^x383)<x384);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x385 = -375694502931347LL;
	uint8_t x386 = 7U;
	int16_t x387 = 3;
	uint64_t x388 = 1825166217903720LLU;

	t84 = (((x385+x386)^x387)<x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = 53;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 108U;
	int32_t x392 = INT32_MIN;
	static volatile int32_t t85 = 4058201;

	t85 = (((x389+x390)^x391)<x392);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = 403124382U;
	uint16_t x394 = 0U;
	static uint8_t x395 = 2U;
	volatile int8_t x396 = INT8_MAX;
	volatile int32_t t86 = 99;

	t86 = (((x393+x394)^x395)<x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MAX;
	static uint64_t x398 = UINT64_MAX;
	uint16_t x399 = UINT16_MAX;
	volatile int64_t x400 = INT64_MIN;
	int32_t t87 = 6760;

	t87 = (((x397+x398)^x399)<x400);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = -1;
	uint32_t x402 = 1924660U;
	uint16_t x403 = 5278U;
	int32_t x404 = INT32_MAX;
	volatile int32_t t88 = -584462;

	t88 = (((x401+x402)^x403)<x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x406 = -1;
	static int8_t x407 = INT8_MIN;
	int32_t x408 = -4058;
	int32_t t89 = 0;

	t89 = (((x405+x406)^x407)<x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = 3942;
	volatile uint16_t x411 = 832U;
	static volatile uint8_t x412 = 31U;

	t90 = (((x409+x410)^x411)<x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = INT16_MIN;
	volatile int16_t x414 = INT16_MIN;
	int16_t x416 = INT16_MIN;
	static int32_t t91 = -8;

	t91 = (((x413+x414)^x415)<x416);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x421 = 202578840LLU;
	uint16_t x422 = UINT16_MAX;
	static uint64_t x423 = 38LLU;
	static volatile int8_t x424 = INT8_MAX;
	int32_t t92 = 13934;

	t92 = (((x421+x422)^x423)<x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MAX;
	static uint32_t x431 = 705277U;
	uint64_t x432 = UINT64_MAX;
	int32_t t93 = 2;

	t93 = (((x429+x430)^x431)<x432);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = -1;
	volatile int8_t x435 = INT8_MAX;
	int64_t x436 = INT64_MIN;
	volatile int32_t t94 = -1;

	t94 = (((x433+x434)^x435)<x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x439 = 53995766U;
	int32_t t95 = -3631;

	t95 = (((x437+x438)^x439)<x440);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x449 = UINT16_MAX;
	int8_t x450 = INT8_MAX;
	uint16_t x451 = 11145U;
	static volatile int32_t t96 = -95;

	t96 = (((x449+x450)^x451)<x452);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x454 = 106U;
	volatile int64_t x455 = INT64_MAX;
	int32_t x456 = -1;
	int32_t t97 = 171;

	t97 = (((x453+x454)^x455)<x456);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x461 = 10U;
	static int64_t x462 = INT64_MIN;
	static int8_t x463 = INT8_MAX;
	int8_t x464 = INT8_MAX;
	static int32_t t98 = 1784;

	t98 = (((x461+x462)^x463)<x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x465 = -1927;
	static int16_t x466 = -7;
	volatile int16_t x467 = -1;
	volatile int8_t x468 = INT8_MIN;
	int32_t t99 = 2959879;

	t99 = (((x465+x466)^x467)<x468);

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

