#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x4 = INT32_MAX;
uint64_t x13 = UINT64_MAX;
volatile int16_t x28 = INT16_MIN;
int8_t x29 = -44;
int64_t x32 = 280853261000668659LL;
volatile int32_t t7 = 1014546184;
volatile int64_t x35 = INT64_MAX;
uint8_t x37 = UINT8_MAX;
uint32_t x39 = 3U;
volatile int16_t x40 = INT16_MAX;
uint16_t x42 = UINT16_MAX;
static int8_t x45 = INT8_MIN;
uint16_t x50 = UINT16_MAX;
uint8_t x51 = 0U;
int16_t x56 = INT16_MIN;
uint64_t x62 = 1493430LLU;
int64_t x68 = -1LL;
uint64_t x77 = UINT64_MAX;
int32_t t19 = 289761856;
volatile int16_t x93 = INT16_MAX;
uint8_t x98 = UINT8_MAX;
int16_t x100 = INT16_MIN;
volatile int32_t t24 = 572;
volatile int32_t t27 = -874720;
int32_t x126 = INT32_MIN;
int8_t x127 = -1;
int64_t x129 = -629212441686745330LL;
int32_t t32 = 513978;
volatile uint64_t x133 = 127311143474455LLU;
static uint8_t x136 = UINT8_MAX;
static int32_t t33 = 1308226;
volatile uint8_t x143 = 2U;
volatile int32_t t35 = -126;
uint16_t x147 = UINT16_MAX;
volatile int32_t t36 = -7737999;
static int64_t x150 = INT64_MIN;
int64_t x151 = INT64_MAX;
volatile uint64_t x152 = UINT64_MAX;
int64_t x156 = INT64_MIN;
int16_t x162 = INT16_MIN;
volatile int32_t t43 = -8235294;
volatile int32_t t44 = 33;
uint64_t x182 = UINT64_MAX;
uint64_t x193 = 10781571718488780LLU;
int32_t t48 = 4860549;
int64_t x197 = -1LL;
uint32_t x199 = 217U;
int64_t x200 = -1LL;
static int8_t x201 = -1;
int16_t x203 = INT16_MIN;
volatile int32_t x204 = INT32_MIN;
static uint64_t x216 = UINT64_MAX;
static int32_t x225 = INT32_MAX;
int64_t x229 = INT64_MAX;
uint8_t x241 = 3U;
int64_t x245 = -1LL;
int64_t x247 = INT64_MAX;
volatile int32_t t61 = -29041;
int32_t x253 = 233;
static int16_t x254 = INT16_MIN;
int32_t x256 = INT32_MIN;
int8_t x258 = INT8_MIN;
uint8_t x260 = 35U;
uint16_t x263 = 16225U;
int32_t x264 = INT32_MAX;
volatile int32_t t66 = 696;
int8_t x270 = 0;
int16_t x274 = -1;
uint32_t x275 = UINT32_MAX;
int64_t x276 = INT64_MIN;
uint64_t x281 = 60363550639111LLU;
int32_t x284 = INT32_MIN;
int64_t x285 = INT64_MIN;
uint16_t x287 = UINT16_MAX;
uint64_t x292 = 4323090LLU;
static int8_t x293 = 24;
uint16_t x294 = 528U;
volatile uint16_t x295 = 7U;
uint64_t x297 = 124LLU;
static int16_t x307 = -10857;
int32_t x314 = -39092232;
uint16_t x315 = 3286U;
static int8_t x317 = -1;
static int32_t x321 = -6;
static int32_t t80 = 215147979;
uint8_t x328 = 104U;
int16_t x331 = -1;
int8_t x332 = -1;
int16_t x333 = INT16_MAX;
int64_t x343 = 0LL;
static int32_t t85 = -1;
int16_t x345 = -1;
int32_t x347 = -1;
volatile int32_t t87 = 49655;
int32_t t88 = -1;
int16_t x361 = -495;
int16_t x364 = -1;
volatile int32_t t90 = 15233687;
static int16_t x367 = -1;
volatile int32_t t91 = -356028470;
int32_t t93 = 1;
volatile int32_t x382 = INT32_MAX;
volatile uint8_t x383 = 0U;
static int8_t x392 = INT8_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static uint8_t x2 = 1U;
	uint64_t x3 = 42LLU;
	static volatile int32_t t0 = -51;

	t0 = (((x1&x2)<x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint8_t x6 = 1U;
	int64_t x7 = -1LL;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = -6;

	t1 = (((x5&x6)<x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = 5472;
	static int16_t x10 = INT16_MIN;
	static int32_t x11 = -1;
	static int32_t x12 = INT32_MAX;
	static int32_t t2 = -699;

	t2 = (((x9&x10)<x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -1;
	static volatile int64_t x15 = -1LL;
	static volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 16032787;

	t3 = (((x13&x14)<x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 62201509LL;
	volatile uint8_t x18 = 52U;
	volatile int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MAX;
	static int32_t t4 = 1;

	t4 = (((x17&x18)<x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	static int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MIN;
	int64_t x24 = -1LL;
	volatile int32_t t5 = 1;

	t5 = (((x21&x22)<x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	uint32_t x26 = 59157385U;
	static int16_t x27 = INT16_MIN;
	static volatile int32_t t6 = -46165;

	t6 = (((x25&x26)<x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 125;
	volatile int32_t x31 = INT32_MIN;

	t7 = (((x29&x30)<x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int8_t x34 = INT8_MAX;
	int8_t x36 = 3;
	volatile int32_t t8 = -134;

	t8 = (((x33&x34)<x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MIN;
	static volatile int32_t t9 = 131;

	t9 = (((x37&x38)<x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -35568LL;
	int32_t x43 = -1;
	volatile int32_t x44 = -1;
	int32_t t10 = 0;

	t10 = (((x41&x42)<x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	volatile uint8_t x47 = 45U;
	static int64_t x48 = -1LL;
	int32_t t11 = 565631107;

	t11 = (((x45&x46)<x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	static int64_t x52 = -226196LL;
	static volatile int32_t t12 = -27;

	t12 = (((x49&x50)<x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint64_t x54 = UINT64_MAX;
	volatile int64_t x55 = INT64_MIN;
	static int32_t t13 = -1136;

	t13 = (((x53&x54)<x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 3008LLU;
	uint32_t x58 = 3U;
	static volatile int32_t x59 = -1;
	int64_t x60 = INT64_MIN;
	int32_t t14 = -1;

	t14 = (((x57&x58)<x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int8_t x63 = -20;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = -1358;

	t15 = (((x61&x62)<x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	static int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MAX;
	int32_t t16 = -1914;

	t16 = (((x65&x66)<x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int32_t x70 = INT32_MIN;
	int32_t x71 = -203154051;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 0;

	t17 = (((x69&x70)<x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 0;
	volatile uint16_t x74 = 1U;
	volatile int64_t x75 = -16645801536947977LL;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 406;

	t18 = (((x73&x74)<x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 116LLU;
	int8_t x79 = INT8_MIN;
	uint16_t x80 = UINT16_MAX;

	t19 = (((x77&x78)<x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	static int16_t x82 = -1;
	int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 626121856;

	t20 = (((x81&x82)<x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	static int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 1477950;

	t21 = (((x85&x86)<x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 3276388886027240LLU;
	uint16_t x90 = 17672U;
	uint32_t x91 = 2332212U;
	volatile uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = -41;

	t22 = (((x89&x90)<x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x94 = 25478U;
	uint16_t x95 = 2U;
	uint16_t x96 = 966U;
	int32_t t23 = -432772804;

	t23 = (((x93&x94)<x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 42U;
	static int16_t x99 = -1;

	t24 = (((x97&x98)<x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 581051U;
	static int16_t x102 = INT16_MAX;
	volatile uint64_t x103 = 1061LLU;
	uint16_t x104 = 1625U;
	static volatile int32_t t25 = -1;

	t25 = (((x101&x102)<x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static volatile int32_t x106 = INT32_MAX;
	uint16_t x107 = 6477U;
	uint64_t x108 = 226706770904LLU;
	int32_t t26 = -7509619;

	t26 = (((x105&x106)<x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 15959954LLU;
	int64_t x110 = -1LL;
	int32_t x111 = 2680;
	int16_t x112 = INT16_MIN;

	t27 = (((x109&x110)<x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static volatile uint32_t x114 = UINT32_MAX;
	int64_t x115 = -1LL;
	uint8_t x116 = 41U;
	int32_t t28 = 222;

	t28 = (((x113&x114)<x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 0;
	int8_t x118 = -1;
	int32_t x119 = 3564728;
	static uint16_t x120 = 1U;
	static volatile int32_t t29 = -310612;

	t29 = (((x117&x118)<x119)==x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = 8387152;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 271050416;

	t30 = (((x121&x122)<x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = UINT32_MAX;
	static int16_t x128 = -20;
	volatile int32_t t31 = -18137;

	t31 = (((x125&x126)<x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x130 = UINT64_MAX;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = 206;

	t32 = (((x129&x130)<x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	static int64_t x135 = INT64_MIN;

	t33 = (((x133&x134)<x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int64_t x138 = INT64_MIN;
	static int16_t x139 = -1;
	volatile uint16_t x140 = 5U;
	volatile int32_t t34 = 20371;

	t34 = (((x137&x138)<x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	static int8_t x142 = INT8_MIN;
	volatile int64_t x144 = INT64_MIN;

	t35 = (((x141&x142)<x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MAX;
	volatile uint32_t x146 = 14636U;
	int8_t x148 = INT8_MIN;

	t36 = (((x145&x146)<x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = -160788;
	static int32_t t37 = 237338;

	t37 = (((x149&x150)<x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1087LL;
	int32_t x154 = -1113;
	static int32_t x155 = -2835;
	static volatile int32_t t38 = -8;

	t38 = (((x153&x154)<x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 21833U;
	volatile int8_t x158 = 21;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t x160 = -1;
	volatile int32_t t39 = -4;

	t39 = (((x157&x158)<x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int8_t x163 = INT8_MAX;
	volatile uint64_t x164 = 244LLU;
	volatile int32_t t40 = -176746;

	t40 = (((x161&x162)<x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = -1;
	int32_t x166 = -48612;
	volatile int16_t x167 = -6;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -25778;

	t41 = (((x165&x166)<x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	int8_t x170 = -30;
	int32_t x171 = INT32_MIN;
	int64_t x172 = -1LL;
	volatile int32_t t42 = 973770006;

	t42 = (((x169&x170)<x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x173 = -1;
	uint64_t x174 = 7LLU;
	static int32_t x175 = INT32_MAX;
	uint8_t x176 = UINT8_MAX;

	t43 = (((x173&x174)<x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 238258132314LL;
	volatile uint16_t x178 = UINT16_MAX;
	int32_t x179 = INT32_MAX;
	int64_t x180 = -1LL;

	t44 = (((x177&x178)<x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 9U;
	volatile int64_t x183 = 3770585667548317469LL;
	int16_t x184 = INT16_MIN;
	int32_t t45 = -786778;

	t45 = (((x181&x182)<x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int32_t x186 = -1;
	int32_t x187 = -1;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 582070;

	t46 = (((x185&x186)<x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = 8406U;
	static volatile int8_t x190 = -1;
	static int32_t x191 = INT32_MIN;
	int64_t x192 = 16738LL;
	int32_t t47 = 11876175;

	t47 = (((x189&x190)<x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -1220844LL;
	int8_t x195 = 0;
	volatile int64_t x196 = INT64_MAX;

	t48 = (((x193&x194)<x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MIN;
	volatile int32_t t49 = 6669201;

	t49 = (((x197&x198)<x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;
	volatile int32_t t50 = 1581538;

	t50 = (((x201&x202)<x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = UINT8_MAX;
	int16_t x206 = -1;
	int32_t x207 = 1;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -109189767;

	t51 = (((x205&x206)<x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -29;
	uint16_t x210 = 24U;
	int8_t x211 = 1;
	volatile int64_t x212 = 289813288327LL;
	int32_t t52 = 14491606;

	t52 = (((x209&x210)<x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = -1;
	uint64_t x214 = 898192LLU;
	static int8_t x215 = INT8_MAX;
	int32_t t53 = -181139274;

	t53 = (((x213&x214)<x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = 1;
	uint8_t x219 = 2U;
	int32_t x220 = -1;
	volatile int32_t t54 = 547;

	t54 = (((x217&x218)<x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = UINT8_MAX;
	int32_t x222 = 11728;
	int32_t x223 = INT32_MAX;
	int8_t x224 = -1;
	volatile int32_t t55 = -2747207;

	t55 = (((x221&x222)<x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x226 = 18U;
	int64_t x227 = INT64_MAX;
	int64_t x228 = 57LL;
	volatile int32_t t56 = -70458;

	t56 = (((x225&x226)<x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MAX;
	int32_t x231 = -2080975;
	uint16_t x232 = 43U;
	volatile int32_t t57 = -1120;

	t57 = (((x229&x230)<x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = 37712;
	volatile int16_t x234 = INT16_MIN;
	volatile uint32_t x235 = 187U;
	int16_t x236 = INT16_MIN;
	int32_t t58 = -2352;

	t58 = (((x233&x234)<x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 1380157144U;
	static int32_t x238 = 4192;
	int32_t x239 = 0;
	static volatile uint32_t x240 = UINT32_MAX;
	static int32_t t59 = 24;

	t59 = (((x237&x238)<x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x242 = INT32_MIN;
	int16_t x243 = 80;
	int8_t x244 = -1;
	static volatile int32_t t60 = -422114268;

	t60 = (((x241&x242)<x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 27913U;
	int16_t x248 = -1;

	t61 = (((x245&x246)<x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MAX;
	int16_t x251 = INT16_MIN;
	int32_t x252 = 35042;
	int32_t t62 = 50;

	t62 = (((x249&x250)<x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x255 = 705862150U;
	int32_t t63 = 458228;

	t63 = (((x253&x254)<x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = -1;
	volatile uint16_t x259 = 1U;
	static int32_t t64 = -106;

	t64 = (((x257&x258)<x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int16_t x262 = -1;
	static int32_t t65 = 26;

	t65 = (((x261&x262)<x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -3672699766461LL;
	static int64_t x266 = 27751585449544221LL;
	static uint8_t x267 = 84U;
	static int64_t x268 = 93LL;

	t66 = (((x265&x266)<x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -386;

	t67 = (((x269&x270)<x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	volatile int32_t t68 = -2655821;

	t68 = (((x273&x274)<x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MAX;
	static int32_t x278 = INT32_MIN;
	static int32_t x279 = -1;
	uint8_t x280 = UINT8_MAX;
	int32_t t69 = -3;

	t69 = (((x277&x278)<x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = -10;
	int16_t x283 = 14;
	int32_t t70 = -11299;

	t70 = (((x281&x282)<x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = UINT32_MAX;
	uint32_t x288 = 515968412U;
	volatile int32_t t71 = 121821;

	t71 = (((x285&x286)<x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = 22821811379188LL;
	int32_t x290 = INT32_MIN;
	static int32_t x291 = INT32_MIN;
	volatile int32_t t72 = 283012;

	t72 = (((x289&x290)<x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x296 = 13676204;
	volatile int32_t t73 = 51990988;

	t73 = (((x293&x294)<x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MIN;
	static int64_t x299 = -1LL;
	int32_t x300 = -418;
	int32_t t74 = 175285708;

	t74 = (((x297&x298)<x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = 1;
	uint16_t x303 = 13U;
	volatile int32_t x304 = 30213;
	volatile int32_t t75 = -232748247;

	t75 = (((x301&x302)<x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -27;
	volatile int32_t x306 = INT32_MAX;
	static volatile int8_t x308 = -1;
	int32_t t76 = 356;

	t76 = (((x305&x306)<x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static int8_t x310 = -1;
	int16_t x311 = -1;
	static uint16_t x312 = UINT16_MAX;
	int32_t t77 = -175;

	t77 = (((x309&x310)<x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 6U;
	volatile uint64_t x316 = 8306LLU;
	int32_t t78 = -1;

	t78 = (((x313&x314)<x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = INT8_MIN;
	int16_t x319 = 1;
	int16_t x320 = -6;
	volatile int32_t t79 = -854;

	t79 = (((x317&x318)<x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -1;
	uint32_t x323 = 6860410U;
	int8_t x324 = INT8_MIN;

	t80 = (((x321&x322)<x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = 15;
	static int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	volatile int32_t t81 = -55932;

	t81 = (((x325&x326)<x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -4525905;
	uint8_t x330 = 2U;
	static int32_t t82 = 273566750;

	t82 = (((x329&x330)<x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x334 = -1;
	uint16_t x335 = 39U;
	volatile uint32_t x336 = 130048633U;
	int32_t t83 = -23969962;

	t83 = (((x333&x334)<x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	uint64_t x338 = 328841939829370242LLU;
	int8_t x339 = 0;
	int32_t x340 = INT32_MAX;
	static volatile int32_t t84 = 10;

	t84 = (((x337&x338)<x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MAX;
	static uint64_t x342 = 1676468116854574840LLU;
	int64_t x344 = -83LL;

	t85 = (((x341&x342)<x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x346 = 59U;
	volatile int32_t x348 = 27288441;
	volatile int32_t t86 = 357;

	t86 = (((x345&x346)<x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	int32_t x350 = INT32_MAX;
	volatile int16_t x351 = 0;
	int32_t x352 = -364048;

	t87 = (((x349&x350)<x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	int16_t x354 = -1074;
	uint16_t x355 = 217U;
	volatile int64_t x356 = -1LL;

	t88 = (((x353&x354)<x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = 39981716003178LL;
	int16_t x359 = INT16_MAX;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -6293067;

	t89 = (((x357&x358)<x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x362 = INT32_MAX;
	uint16_t x363 = UINT16_MAX;

	t90 = (((x361&x362)<x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 321164LLU;
	int16_t x366 = -52;
	uint64_t x368 = UINT64_MAX;

	t91 = (((x365&x366)<x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -3;
	static volatile uint8_t x370 = 3U;
	static int32_t x371 = -1;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 3293836;

	t92 = (((x369&x370)<x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	static uint64_t x374 = 5597358433LLU;
	int8_t x375 = INT8_MAX;
	int64_t x376 = INT64_MAX;

	t93 = (((x373&x374)<x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MAX;
	volatile uint8_t x378 = UINT8_MAX;
	volatile int32_t x379 = -2517763;
	int64_t x380 = INT64_MIN;
	int32_t t94 = -845;

	t94 = (((x377&x378)<x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	volatile int64_t x384 = 3994LL;
	static int32_t t95 = 29232321;

	t95 = (((x381&x382)<x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	int16_t x386 = 5243;
	static int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	static int32_t t96 = -1609282;

	t96 = (((x385&x386)<x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	int8_t x390 = -1;
	volatile int32_t x391 = -33629;
	int32_t t97 = -125;

	t97 = (((x389&x390)<x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	uint64_t x394 = 8396008360864473LLU;
	uint32_t x395 = UINT32_MAX;
	volatile uint16_t x396 = 864U;
	static volatile int32_t t98 = -392144000;

	t98 = (((x393&x394)<x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	static int16_t x398 = INT16_MAX;
	int16_t x399 = -711;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = -6801389;

	t99 = (((x397&x398)<x399)==x400);

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
