#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile int8_t x6 = -5;
int32_t x8 = INT32_MIN;
volatile int16_t x18 = 0;
int32_t x20 = INT32_MIN;
volatile int16_t x22 = 3577;
int32_t x26 = -1;
static int32_t x27 = -1;
static int8_t x30 = INT8_MIN;
uint64_t x34 = 1443371418620LLU;
int8_t x35 = INT8_MIN;
uint32_t x41 = UINT32_MAX;
int8_t x43 = 31;
int8_t x47 = INT8_MIN;
volatile int32_t t11 = -300347;
uint32_t x54 = UINT32_MAX;
volatile int64_t x66 = INT64_MIN;
int16_t x67 = -154;
volatile int16_t x69 = INT16_MIN;
static uint8_t x73 = 10U;
static uint8_t x75 = 1U;
uint32_t x84 = 2045674U;
uint32_t t18 = 83333U;
static volatile int16_t x85 = -1;
volatile int32_t x86 = INT32_MIN;
int32_t x87 = INT32_MAX;
int64_t x93 = INT64_MIN;
volatile int16_t x100 = INT16_MAX;
uint32_t x101 = UINT32_MAX;
volatile uint32_t x103 = UINT32_MAX;
uint32_t t23 = 1909U;
int64_t x113 = -1LL;
int16_t x116 = INT16_MAX;
int64_t t26 = 18LL;
int64_t x119 = 2LL;
int32_t x120 = INT32_MAX;
volatile int64_t x129 = -1LL;
int64_t x135 = INT64_MIN;
int16_t x137 = 3465;
int64_t t32 = 10805LL;
int32_t x143 = -1;
volatile int8_t x147 = 0;
int32_t t34 = -1615;
int8_t x151 = 12;
static int8_t x156 = -1;
volatile uint32_t x159 = 1087U;
int16_t x162 = 0;
volatile uint32_t x173 = 90906U;
int16_t x183 = 15;
int8_t x184 = -1;
int16_t x187 = -3;
int32_t t44 = -154;
volatile uint8_t x189 = 103U;
int64_t x191 = -2880217604127387LL;
volatile int32_t x193 = INT32_MAX;
int16_t x194 = INT16_MIN;
volatile int32_t t46 = 1;
uint32_t x198 = 1938U;
volatile uint32_t x199 = 42293498U;
static volatile int32_t t48 = 108395;
volatile int8_t x207 = -1;
uint32_t x210 = UINT32_MAX;
int16_t x231 = INT16_MIN;
static int16_t x241 = -1;
volatile int8_t x248 = INT8_MIN;
uint8_t x253 = UINT8_MAX;
int32_t x256 = -1;
uint32_t x260 = 104U;
volatile uint32_t t62 = 26U;
int64_t x264 = INT64_MIN;
volatile uint64_t t64 = 11LLU;
int16_t x274 = INT16_MIN;
volatile int64_t t66 = 65710441LL;
int16_t x277 = -311;
int8_t x284 = INT8_MIN;
uint32_t t68 = 138U;
uint64_t x285 = 364775961874470LLU;
int64_t x291 = -1LL;
volatile int64_t t71 = -122708865941608731LL;
static uint64_t t78 = 4136239219807LLU;
volatile int32_t t80 = -20;
static uint8_t x336 = 34U;
static int32_t x337 = INT32_MIN;
static int16_t x338 = INT16_MIN;
int64_t x341 = 12513LL;
int64_t x346 = 17489LL;
int8_t x348 = INT8_MIN;
int64_t x349 = -9677902LL;
volatile int8_t x356 = -4;
uint64_t x359 = 30LLU;
int64_t x365 = -507445629LL;
volatile uint64_t x369 = UINT64_MAX;
int16_t x370 = -1;
int64_t x371 = INT64_MIN;
volatile uint8_t x375 = 20U;
uint16_t x379 = UINT16_MAX;
static int64_t t92 = -54379630810359LL;
int16_t x382 = -424;
int32_t x383 = 110;
uint8_t x397 = 11U;
int64_t x402 = 468583643698118LL;
static int16_t x407 = -29;
volatile int16_t x408 = INT16_MIN;
int64_t x410 = INT64_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int16_t x2 = INT16_MAX;
	int64_t x4 = 2213135333342LL;
	volatile int64_t t0 = -3765LL;

	t0 = (x1*((x2<=x3)/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 48519;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = -20025092;

	t1 = (x5*((x6<=x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	volatile int8_t x10 = -46;
	int64_t x11 = -1LL;
	static int8_t x12 = -19;
	int32_t t2 = 2908581;

	t2 = (x9*((x10<=x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = UINT32_MAX;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = 242;
	int32_t t3 = 203115890;

	t3 = (x13*((x14<=x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x19 = -1;
	volatile int64_t t4 = -220714724682925382LL;

	t4 = (x17*((x18<=x19)/x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	int32_t x23 = 2;
	static volatile int16_t x24 = INT16_MIN;
	volatile uint32_t t5 = 11350585U;

	t5 = (x21*((x22<=x23)/x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int16_t x28 = -1;
	volatile int32_t t6 = 290408;

	t6 = (x25*((x26<=x27)/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 7;
	int8_t x31 = INT8_MIN;
	static uint32_t x32 = 121978910U;
	volatile uint32_t t7 = 4U;

	t7 = (x29*((x30<=x31)/x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 979;

	t8 = (x33*((x34<=x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1767754LL;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	int8_t x40 = -1;
	int64_t t9 = -457762197921LL;

	t9 = (x37*((x38<=x39)/x40));

	if (t9 != 1767754LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x42 = INT16_MAX;
	int32_t x44 = INT32_MIN;
	volatile uint32_t t10 = 4U;

	t10 = (x41*((x42<=x43)/x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 8127U;
	uint16_t x46 = 1742U;
	int32_t x48 = -1;

	t11 = (x45*((x46<=x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 11U;
	int32_t x55 = INT32_MAX;
	static int16_t x56 = INT16_MAX;
	int32_t t12 = 192224378;

	t12 = (x53*((x54<=x55)/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = -1;
	int32_t x60 = INT32_MAX;
	volatile uint32_t t13 = 1U;

	t13 = (x57*((x58<=x59)/x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 418913U;
	int64_t x68 = INT64_MIN;
	volatile int64_t t14 = -15860995361LL;

	t14 = (x65*((x66<=x67)/x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x70 = INT8_MAX;
	static volatile uint32_t x71 = 732U;
	int8_t x72 = INT8_MIN;
	volatile int32_t t15 = 614688;

	t15 = (x69*((x70<=x71)/x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x74 = INT32_MIN;
	int64_t x76 = 10380829LL;
	volatile int64_t t16 = -244611536LL;

	t16 = (x73*((x74<=x75)/x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 320001U;
	int64_t x78 = -1LL;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = UINT32_MAX;
	uint32_t t17 = 463261U;

	t17 = (x77*((x78<=x79)/x80));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 17748U;
	uint64_t x82 = 591663453LLU;
	static volatile int16_t x83 = INT16_MAX;

	t18 = (x81*((x82<=x83)/x84));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x88 = 53625946LLU;
	uint64_t t19 = 1217516042280148076LLU;

	t19 = (x85*((x86<=x87)/x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	volatile int64_t x90 = -1LL;
	int32_t x91 = INT32_MIN;
	volatile int8_t x92 = INT8_MIN;
	int32_t t20 = 145219065;

	t20 = (x89*((x90<=x91)/x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x94 = 5387892398LLU;
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MAX;
	static int64_t t21 = 748035024688720125LL;

	t21 = (x93*((x94<=x95)/x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MAX;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = 1459414LL;
	static int32_t t22 = 412858124;

	t22 = (x97*((x98<=x99)/x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x102 = 3U;
	static int32_t x104 = INT32_MIN;

	t23 = (x101*((x102<=x103)/x104));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = 62042290;
	int64_t x106 = -1259LL;
	static int32_t x107 = INT32_MIN;
	int16_t x108 = -4;
	int32_t t24 = -13;

	t24 = (x105*((x106<=x107)/x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = INT16_MAX;
	static int32_t x110 = -1;
	volatile int8_t x111 = -4;
	uint64_t x112 = 1LLU;
	uint64_t t25 = 7000495028050289LLU;

	t25 = (x109*((x110<=x111)/x112));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = INT32_MAX;
	int32_t x115 = -1;

	t26 = (x113*((x114<=x115)/x116));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	uint8_t x118 = 1U;
	static int32_t t27 = 2;

	t27 = (x117*((x118<=x119)/x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 1U;
	uint16_t x122 = UINT16_MAX;
	uint64_t x123 = 8LLU;
	int32_t x124 = 46123;
	int32_t t28 = 204581;

	t28 = (x121*((x122<=x123)/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	volatile int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	int8_t x128 = 25;
	int32_t t29 = 0;

	t29 = (x125*((x126<=x127)/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = -1;
	static int64_t x131 = -1LL;
	uint32_t x132 = 73205352U;
	int64_t t30 = -3914LL;

	t30 = (x129*((x130<=x131)/x132));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	volatile int8_t x134 = INT8_MIN;
	static volatile int16_t x136 = -1;
	int32_t t31 = -1;

	t31 = (x133*((x134<=x135)/x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x138 = INT64_MIN;
	int32_t x139 = 186889;
	int64_t x140 = -81437820LL;

	t32 = (x137*((x138<=x139)/x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -557864246140456LL;
	int32_t x142 = -1483;
	int32_t x144 = INT32_MIN;
	static volatile int64_t t33 = 578LL;

	t33 = (x141*((x142<=x143)/x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	int8_t x146 = -1;
	static uint16_t x148 = UINT16_MAX;

	t34 = (x145*((x146<=x147)/x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MAX;
	int8_t x150 = -32;
	static uint16_t x152 = 14U;
	volatile int64_t t35 = 105230278278248LL;

	t35 = (x149*((x150<=x151)/x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	uint8_t x154 = UINT8_MAX;
	volatile int32_t x155 = -1;
	static volatile int32_t t36 = 1849400;

	t36 = (x153*((x154<=x155)/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 79985457676645284LLU;
	static volatile int8_t x158 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	uint64_t t37 = 279LLU;

	t37 = (x157*((x158<=x159)/x160));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 487U;
	int16_t x163 = -2032;
	int64_t x164 = INT64_MAX;
	static int64_t t38 = -13LL;

	t38 = (x161*((x162<=x163)/x164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 21575;
	static int64_t x166 = -1LL;
	volatile int32_t x167 = INT32_MIN;
	int64_t x168 = INT64_MAX;
	int64_t t39 = 2441551014LL;

	t39 = (x165*((x166<=x167)/x168));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -2;
	uint8_t x170 = 2U;
	volatile int32_t x171 = INT32_MAX;
	static uint8_t x172 = UINT8_MAX;
	static int32_t t40 = 19;

	t40 = (x169*((x170<=x171)/x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x174 = 1U;
	static uint8_t x175 = UINT8_MAX;
	int8_t x176 = INT8_MAX;
	uint32_t t41 = 43727986U;

	t41 = (x173*((x174<=x175)/x176));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x177 = 77U;
	int64_t x178 = INT64_MIN;
	uint16_t x179 = 6U;
	int64_t x180 = INT64_MIN;
	volatile int64_t t42 = 173408132LL;

	t42 = (x177*((x178<=x179)/x180));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x181 = 0U;
	static int64_t x182 = INT64_MIN;
	int32_t t43 = -2911;

	t43 = (x181*((x182<=x183)/x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -1;
	static uint16_t x186 = UINT16_MAX;
	uint16_t x188 = 6990U;

	t44 = (x185*((x186<=x187)/x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x190 = INT8_MAX;
	static uint16_t x192 = 3U;
	volatile int32_t t45 = -33437182;

	t45 = (x189*((x190<=x191)/x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x195 = INT16_MIN;
	int16_t x196 = 4003;

	t46 = (x193*((x194<=x195)/x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 1U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t47 = -266324;

	t47 = (x197*((x198<=x199)/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x201 = INT16_MIN;
	int8_t x202 = 0;
	volatile int32_t x203 = INT32_MIN;
	volatile int16_t x204 = INT16_MIN;

	t48 = (x201*((x202<=x203)/x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x205 = -1;
	static int32_t x206 = -16701583;
	uint8_t x208 = 17U;
	volatile int32_t t49 = -44936527;

	t49 = (x205*((x206<=x207)/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = -3;
	volatile int8_t x211 = INT8_MAX;
	int32_t x212 = 83;
	int32_t t50 = -1047859892;

	t50 = (x209*((x210<=x211)/x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MAX;
	int8_t x214 = -10;
	int16_t x215 = INT16_MAX;
	volatile int64_t x216 = INT64_MIN;
	static int64_t t51 = 3001987944579316976LL;

	t51 = (x213*((x214<=x215)/x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x217 = INT8_MAX;
	uint64_t x218 = 57LLU;
	static volatile int8_t x219 = 0;
	volatile int64_t x220 = -1LL;
	volatile int64_t t52 = 12419314718LL;

	t52 = (x217*((x218<=x219)/x220));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 426U;
	int16_t x222 = -1;
	int8_t x223 = INT8_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	uint32_t t53 = 1661477653U;

	t53 = (x221*((x222<=x223)/x224));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 943888402250021LLU;
	volatile int8_t x226 = 0;
	volatile uint64_t x227 = UINT64_MAX;
	int64_t x228 = -35960928LL;
	volatile uint64_t t54 = 1083863931974387253LLU;

	t54 = (x225*((x226<=x227)/x228));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -2269;
	volatile int32_t x230 = -1;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t55 = 169791421742658258LLU;

	t55 = (x229*((x230<=x231)/x232));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	static volatile int32_t x234 = INT32_MIN;
	uint64_t x235 = 1666505LLU;
	uint64_t x236 = 5207790410LLU;
	volatile uint64_t t56 = 3731348855302LLU;

	t56 = (x233*((x234<=x235)/x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	volatile int8_t x238 = INT8_MAX;
	static uint16_t x239 = 25170U;
	static uint16_t x240 = 3539U;
	int32_t t57 = 2;

	t57 = (x237*((x238<=x239)/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x242 = 0;
	int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t58 = 36469;

	t58 = (x241*((x242<=x243)/x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x245 = 24U;
	int16_t x246 = INT16_MIN;
	static int64_t x247 = -13LL;
	volatile int32_t t59 = 484727936;

	t59 = (x245*((x246<=x247)/x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = -1;
	int32_t x252 = INT32_MIN;
	volatile int64_t t60 = 53LL;

	t60 = (x249*((x250<=x251)/x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MIN;
	volatile int8_t x255 = 1;
	int32_t t61 = 997;

	t61 = (x253*((x254<=x255)/x256));

	if (t61 != -255) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = -1;
	int64_t x258 = INT64_MIN;
	volatile int64_t x259 = INT64_MIN;

	t62 = (x257*((x258<=x259)/x260));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x261 = 4251U;
	volatile int64_t x262 = INT64_MAX;
	static int8_t x263 = -2;
	int64_t t63 = -9392309248877LL;

	t63 = (x261*((x262<=x263)/x264));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MIN;

	t64 = (x265*((x266<=x267)/x268));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = -231;
	uint32_t x270 = 279U;
	int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t65 = -3290577;

	t65 = (x269*((x270<=x271)/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x273 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MIN;

	t66 = (x273*((x274<=x275)/x276));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x278 = -40648LL;
	int64_t x279 = -1LL;
	static int16_t x280 = -1;
	static volatile int32_t t67 = -1934;

	t67 = (x277*((x278<=x279)/x280));

	if (t67 != 311) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	static uint16_t x282 = UINT16_MAX;
	uint16_t x283 = UINT16_MAX;

	t68 = (x281*((x282<=x283)/x284));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MIN;
	volatile int8_t x288 = INT8_MIN;
	static uint64_t t69 = 1LLU;

	t69 = (x285*((x286<=x287)/x288));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = UINT8_MAX;
	int64_t x290 = INT64_MAX;
	int16_t x292 = -1;
	int32_t t70 = -122790;

	t70 = (x289*((x290<=x291)/x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = 877390406LL;
	volatile uint64_t x294 = 4162114294301LLU;
	volatile int8_t x295 = 0;
	int32_t x296 = INT32_MIN;

	t71 = (x293*((x294<=x295)/x296));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -1047618038136461LL;
	volatile int64_t x298 = -70536743643871LL;
	static volatile uint32_t x299 = 329106324U;
	volatile int32_t x300 = 1;
	static volatile int64_t t72 = 328107629LL;

	t72 = (x297*((x298<=x299)/x300));

	if (t72 != -1047618038136461LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = 3804;
	static volatile uint16_t x302 = 1U;
	volatile int16_t x303 = -4007;
	uint8_t x304 = UINT8_MAX;
	int32_t t73 = 10666294;

	t73 = (x301*((x302<=x303)/x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = INT16_MAX;
	static volatile int64_t x306 = 56893224888345243LL;
	volatile uint32_t x307 = UINT32_MAX;
	static volatile int32_t x308 = -104;
	static int32_t t74 = -1048355856;

	t74 = (x305*((x306<=x307)/x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = -1LL;
	volatile uint8_t x310 = 1U;
	int64_t x311 = INT64_MAX;
	volatile int8_t x312 = -19;
	int64_t t75 = -1143LL;

	t75 = (x309*((x310<=x311)/x312));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x313 = 521137360U;
	static volatile int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MAX;
	static uint8_t x316 = 1U;
	uint32_t t76 = 385285U;

	t76 = (x313*((x314<=x315)/x316));

	if (t76 != 521137360U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -1;
	uint16_t x318 = 5008U;
	uint8_t x319 = 0U;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t77 = 2810;

	t77 = (x317*((x318<=x319)/x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MIN;
	volatile int8_t x324 = INT8_MIN;

	t78 = (x321*((x322<=x323)/x324));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MAX;
	static int16_t x326 = 252;
	int64_t x327 = -945023598889531LL;
	int64_t x328 = INT64_MAX;
	int64_t t79 = 2852732LL;

	t79 = (x325*((x326<=x327)/x328));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	int32_t x330 = INT32_MAX;
	int64_t x331 = -34LL;
	int8_t x332 = -1;

	t80 = (x329*((x330<=x331)/x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -8;
	int32_t x334 = INT32_MIN;
	int64_t x335 = -1LL;
	static int32_t t81 = 2623989;

	t81 = (x333*((x334<=x335)/x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x339 = -1;
	int8_t x340 = INT8_MIN;
	volatile int32_t t82 = -5293;

	t82 = (x337*((x338<=x339)/x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x342 = -7809LL;
	int16_t x343 = INT16_MIN;
	int8_t x344 = 1;
	int64_t t83 = -35585550512945589LL;

	t83 = (x341*((x342<=x343)/x344));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = 3964U;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t t84 = 3;

	t84 = (x345*((x346<=x347)/x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x350 = 6;
	uint64_t x351 = UINT64_MAX;
	volatile int64_t x352 = 13665LL;
	int64_t t85 = 107862293421582LL;

	t85 = (x349*((x350<=x351)/x352));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 232U;
	static int32_t x354 = INT32_MIN;
	int64_t x355 = -1LL;
	volatile int32_t t86 = 0;

	t86 = (x353*((x354<=x355)/x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = -31179215;
	static int32_t x358 = INT32_MIN;
	volatile int16_t x360 = INT16_MAX;
	int32_t t87 = 6;

	t87 = (x357*((x358<=x359)/x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 11907857U;
	volatile int16_t x362 = -1;
	int64_t x363 = INT64_MIN;
	static int16_t x364 = 283;
	volatile uint32_t t88 = 1269880778U;

	t88 = (x361*((x362<=x363)/x364));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = UINT16_MAX;
	volatile int64_t t89 = 38058LL;

	t89 = (x365*((x366<=x367)/x368));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x372 = -1LL;
	uint64_t t90 = 7882285LLU;

	t90 = (x369*((x370<=x371)/x372));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = 94;
	int64_t x374 = INT64_MAX;
	volatile uint32_t x376 = 94U;
	volatile uint32_t t91 = 662205781U;

	t91 = (x373*((x374<=x375)/x376));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MIN;
	volatile int64_t x378 = 4572LL;
	uint32_t x380 = UINT32_MAX;

	t92 = (x377*((x378<=x379)/x380));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x381 = 100562333U;
	volatile int16_t x384 = INT16_MIN;
	static volatile uint32_t t93 = 245U;

	t93 = (x381*((x382<=x383)/x384));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MIN;
	static int8_t x387 = INT8_MIN;
	static volatile int64_t x388 = INT64_MIN;
	int64_t t94 = 408LL;

	t94 = (x385*((x386<=x387)/x388));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MIN;
	volatile uint64_t x394 = UINT64_MAX;
	int8_t x395 = -1;
	uint64_t x396 = UINT64_MAX;
	uint64_t t95 = 3260487481442LLU;

	t95 = (x393*((x394<=x395)/x396));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x398 = UINT32_MAX;
	uint32_t x399 = 7782U;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t96 = 1;

	t96 = (x397*((x398<=x399)/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MAX;
	int16_t x403 = INT16_MIN;
	volatile uint16_t x404 = UINT16_MAX;
	int32_t t97 = 3;

	t97 = (x401*((x402<=x403)/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	uint64_t x406 = UINT64_MAX;
	volatile int32_t t98 = 14;

	t98 = (x405*((x406<=x407)/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x409 = 110U;
	volatile int64_t x411 = -1LL;
	volatile int32_t x412 = INT32_MIN;
	volatile int32_t t99 = 29927;

	t99 = (x409*((x410<=x411)/x412));

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

