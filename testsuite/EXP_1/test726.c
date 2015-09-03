#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x6 = 13U;
static uint64_t x8 = UINT64_MAX;
int32_t x12 = 2657;
int32_t t2 = -1;
volatile int64_t t3 = -96219729930LL;
int32_t x21 = INT32_MIN;
int16_t x29 = INT16_MIN;
static uint32_t t7 = 439U;
uint64_t t9 = 13791258LLU;
static uint16_t x45 = 858U;
static int8_t x51 = INT8_MIN;
static int32_t x52 = 50877;
int32_t x62 = INT32_MAX;
uint16_t x63 = UINT16_MAX;
static int32_t x71 = INT32_MIN;
static int64_t x79 = INT64_MAX;
uint64_t t18 = 969LLU;
int32_t x85 = INT32_MIN;
uint8_t x86 = 15U;
int64_t x88 = INT64_MAX;
int8_t x89 = INT8_MIN;
volatile int32_t x104 = 113;
static int32_t x109 = INT32_MIN;
uint16_t x112 = 58U;
int32_t x119 = INT32_MIN;
int32_t x122 = INT32_MIN;
int16_t x126 = -1;
volatile int8_t x132 = 0;
int16_t x133 = INT16_MIN;
int32_t x135 = INT32_MIN;
volatile uint64_t t30 = 43640LLU;
int16_t x142 = 732;
static uint16_t x144 = 18400U;
uint64_t x145 = UINT64_MAX;
volatile int16_t x151 = INT16_MAX;
int16_t x160 = -1;
volatile int64_t t35 = 63469LL;
uint16_t x166 = 10636U;
int8_t x173 = 9;
volatile int64_t x180 = INT64_MIN;
volatile int8_t x182 = INT8_MIN;
volatile int32_t t41 = -14478;
uint64_t t43 = 136603716783311LLU;
int16_t x195 = INT16_MAX;
uint64_t x196 = UINT64_MAX;
int32_t x200 = 63828793;
uint64_t x218 = 150345952934104338LLU;
volatile uint8_t x226 = UINT8_MAX;
volatile int64_t x227 = INT64_MIN;
static int64_t x229 = -59323695404701759LL;
uint16_t x232 = 799U;
volatile uint64_t t53 = 916200LLU;
int32_t x234 = INT32_MIN;
static uint8_t x244 = 0U;
static uint32_t t56 = 2160U;
uint8_t x245 = 17U;
int8_t x255 = -22;
volatile uint64_t t58 = 11626824851331427LLU;
volatile int32_t t59 = 7767;
uint16_t x264 = 263U;
static int32_t x271 = -6484814;
volatile int64_t t63 = 3900LL;
uint8_t x277 = 11U;
int8_t x278 = INT8_MIN;
int8_t x279 = -1;
uint64_t x282 = 1653LLU;
volatile uint64_t t65 = 6985LLU;
static volatile uint8_t x289 = 2U;
uint64_t x293 = 1634485797955098228LLU;
volatile uint64_t t68 = 74708449858051LLU;
uint32_t x297 = UINT32_MAX;
uint32_t t70 = 904625961U;
volatile uint64_t t71 = 11402796317911LLU;
uint64_t t72 = 3843378968998969LLU;
volatile int32_t x317 = INT32_MAX;
volatile int64_t x318 = INT64_MAX;
int8_t x320 = -20;
volatile uint64_t t75 = 208LLU;
static int64_t x329 = -20121831496LL;
static int64_t x338 = INT64_MIN;
volatile uint32_t x341 = 73181985U;
int16_t x347 = INT16_MIN;
volatile uint64_t x354 = 438LLU;
uint64_t t82 = 407396171965621LLU;
static int8_t x357 = -1;
volatile int64_t t83 = 0LL;
int32_t x365 = INT32_MAX;
int16_t x367 = -1;
static int32_t x373 = 21;
volatile int64_t x376 = -1LL;
volatile int64_t t87 = -1391540LL;
volatile int32_t x377 = -4927;
volatile uint64_t x380 = 2369887267389LLU;
uint8_t x381 = 1U;
static uint32_t t90 = 20464510U;
volatile uint16_t x391 = 345U;
int64_t x394 = 395383198905489678LL;
volatile int8_t x395 = -1;
uint16_t x398 = 1U;
static int16_t x412 = -6;
uint16_t x415 = 15236U;
int64_t x419 = INT64_MIN;
int8_t x420 = 1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = 78U;
	volatile int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 1560524996LL;

	t0 = (((x1%x2)/x3)&x4);

	if (t0 != 3LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 7;
	int64_t x7 = 25195LL;
	volatile uint64_t t1 = 6122LLU;

	t1 = (((x5%x6)/x7)&x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = INT16_MIN;
	int8_t x11 = -59;

	t2 = (((x9%x10)/x11)&x12);

	if (t2 != 2656) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	uint32_t x14 = UINT32_MAX;
	static int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MAX;

	t3 = (((x13%x14)/x15)&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 2552929LLU;
	int16_t x20 = -1;
	volatile uint64_t t4 = 193315401LLU;

	t4 = (((x17%x18)/x19)&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 5;
	int64_t x23 = 32250211681197801LL;
	static uint8_t x24 = 11U;
	volatile int64_t t5 = 344208580702LL;

	t5 = (((x21%x22)/x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 62U;
	int32_t x26 = INT32_MAX;
	uint16_t x27 = 474U;
	static uint32_t x28 = 4752889U;
	uint32_t t6 = 15U;

	t6 = (((x25%x26)/x27)&x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 1U;
	volatile int32_t x31 = INT32_MIN;
	int16_t x32 = -7;

	t7 = (((x29%x30)/x31)&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static int16_t x34 = INT16_MIN;
	int32_t x35 = 28507;
	int64_t x36 = INT64_MAX;
	int64_t t8 = -1258475958237LL;

	t8 = (((x33%x34)/x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = 768138296087LLU;
	int64_t x42 = INT64_MAX;
	uint64_t x43 = 125166366444311LLU;
	static volatile uint32_t x44 = 226U;

	t9 = (((x41%x42)/x43)&x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = 496223538LLU;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = 57U;
	static uint64_t t10 = 2122LLU;

	t10 = (((x45%x46)/x47)&x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 0;
	int16_t x50 = INT16_MAX;
	volatile int32_t t11 = -17052503;

	t11 = (((x49%x50)/x51)&x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = -19;
	int8_t x54 = INT8_MAX;
	int64_t x55 = INT64_MIN;
	int8_t x56 = 1;
	static volatile int64_t t12 = 23LL;

	t12 = (((x53%x54)/x55)&x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 101U;
	static uint16_t x60 = 5U;
	volatile int32_t t13 = -73;

	t13 = (((x57%x58)/x59)&x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	uint16_t x64 = 5182U;
	int32_t t14 = -23;

	t14 = (((x61%x62)/x63)&x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	int8_t x70 = -1;
	static int32_t x72 = -161;
	int32_t t15 = 1556060;

	t15 = (((x69%x70)/x71)&x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MAX;
	static int64_t x75 = INT64_MIN;
	int64_t x76 = 236988506596LL;
	volatile int64_t t16 = 1596975194LL;

	t16 = (((x73%x74)/x75)&x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 181833U;
	volatile int32_t x78 = INT32_MAX;
	int16_t x80 = INT16_MIN;
	static int64_t t17 = -1039586818408LL;

	t17 = (((x77%x78)/x79)&x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MIN;
	uint64_t x83 = 4570243564131983LLU;
	static int8_t x84 = INT8_MIN;

	t18 = (((x81%x82)/x83)&x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x87 = INT16_MAX;
	int64_t t19 = -21LL;

	t19 = (((x85%x86)/x87)&x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x90 = INT32_MAX;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t20 = 6574864084026LLU;

	t20 = (((x89%x90)/x91)&x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = 32440119617LL;
	static uint64_t x102 = UINT64_MAX;
	volatile uint16_t x103 = 1459U;
	volatile uint64_t t21 = 25337LLU;

	t21 = (((x101%x102)/x103)&x104);

	if (t21 != 113LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x105 = 0;
	uint16_t x106 = 1U;
	int64_t x107 = INT64_MIN;
	uint64_t x108 = 95702524LLU;
	static uint64_t t22 = 30488411459LLU;

	t22 = (((x105%x106)/x107)&x108);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	int64_t t23 = 464890735173012LL;

	t23 = (((x109%x110)/x111)&x112);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MIN;
	volatile int16_t x114 = -48;
	volatile int64_t x115 = 317676268601333078LL;
	static volatile int16_t x116 = INT16_MAX;
	volatile int64_t t24 = 209545521LL;

	t24 = (((x113%x114)/x115)&x116);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	static uint64_t x120 = 3894203816682LLU;
	uint64_t t25 = 99LLU;

	t25 = (((x117%x118)/x119)&x120);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	int64_t x123 = INT64_MIN;
	uint16_t x124 = UINT16_MAX;
	static volatile int64_t t26 = -8287444117LL;

	t26 = (((x121%x122)/x123)&x124);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x127 = -1;
	int8_t x128 = -1;
	volatile int32_t t27 = -491;

	t27 = (((x125%x126)/x127)&x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MAX;
	uint8_t x130 = UINT8_MAX;
	int8_t x131 = -1;
	int32_t t28 = 1842131;

	t28 = (((x129%x130)/x131)&x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x134 = 44905974LL;
	uint8_t x136 = UINT8_MAX;
	int64_t t29 = 65018021298850800LL;

	t29 = (((x133%x134)/x135)&x136);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = 11908490852509LLU;
	int32_t x138 = 7716;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 3U;

	t30 = (((x137%x138)/x139)&x140);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = INT64_MIN;
	int32_t x143 = INT32_MIN;
	volatile int64_t t31 = -1LL;

	t31 = (((x141%x142)/x143)&x144);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x146 = UINT8_MAX;
	int64_t x147 = 169270473254823LL;
	static int32_t x148 = -1;
	static uint64_t t32 = 256769033178375LLU;

	t32 = (((x145%x146)/x147)&x148);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 52979862767312041LLU;
	uint32_t x150 = 6798U;
	uint64_t x152 = 60267156235136LLU;
	uint64_t t33 = 384LLU;

	t33 = (((x149%x150)/x151)&x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = 146830;
	volatile int16_t x155 = INT16_MIN;
	int32_t x156 = -3800;
	uint64_t t34 = 105009414645LLU;

	t34 = (((x153%x154)/x155)&x156);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MIN;
	static uint8_t x158 = 2U;
	int8_t x159 = -1;

	t35 = (((x157%x158)/x159)&x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = -1;
	int8_t x162 = -57;
	int32_t x163 = -1;
	int32_t x164 = -1;
	int32_t t36 = 1;

	t36 = (((x161%x162)/x163)&x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x167 = UINT32_MAX;
	int32_t x168 = INT32_MIN;
	uint32_t t37 = 949006369U;

	t37 = (((x165%x166)/x167)&x168);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = 43738166530LLU;
	static int16_t x170 = INT16_MAX;
	uint16_t x171 = UINT16_MAX;
	int32_t x172 = -198225;
	uint64_t t38 = 775445596499540196LLU;

	t38 = (((x169%x170)/x171)&x172);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x174 = 9;
	static int16_t x175 = -1;
	int8_t x176 = INT8_MIN;
	volatile int32_t t39 = -151920;

	t39 = (((x173%x174)/x175)&x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MIN;
	volatile int32_t x178 = -1;
	int64_t x179 = -16148937482LL;
	static volatile int64_t t40 = 39310LL;

	t40 = (((x177%x178)/x179)&x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MAX;
	static uint8_t x183 = UINT8_MAX;
	static int16_t x184 = -2;

	t41 = (((x181%x182)/x183)&x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 3989U;
	int16_t x186 = INT16_MIN;
	static volatile int16_t x187 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;
	volatile uint32_t t42 = 9421004U;

	t42 = (((x185%x186)/x187)&x188);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x189 = 837233LLU;
	int32_t x190 = INT32_MAX;
	static int8_t x191 = INT8_MAX;
	int16_t x192 = -2;

	t43 = (((x189%x190)/x191)&x192);

	if (t43 != 6592LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = -279LL;
	int16_t x194 = -51;
	volatile uint64_t t44 = 3758121737501145615LLU;

	t44 = (((x193%x194)/x195)&x196);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	volatile uint8_t x198 = 5U;
	int32_t x199 = INT32_MIN;
	int32_t t45 = -80560525;

	t45 = (((x197%x198)/x199)&x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x201 = 3U;
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = INT64_MIN;
	static int64_t x204 = INT64_MAX;
	static uint64_t t46 = 8244360120984466LLU;

	t46 = (((x201%x202)/x203)&x204);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = 844U;
	static uint16_t x206 = 76U;
	static volatile uint8_t x207 = 47U;
	uint64_t x208 = 7762634213821LLU;
	uint64_t t47 = 31710242LLU;

	t47 = (((x205%x206)/x207)&x208);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = 81643520;
	static int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MIN;
	static int32_t x212 = INT32_MAX;
	volatile int64_t t48 = 19LL;

	t48 = (((x209%x210)/x211)&x212);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = INT32_MAX;
	static volatile int32_t x215 = INT32_MIN;
	uint32_t x216 = UINT32_MAX;
	uint64_t t49 = 4LLU;

	t49 = (((x213%x214)/x215)&x216);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x217 = -5;
	volatile uint16_t x219 = UINT16_MAX;
	int16_t x220 = INT16_MIN;
	uint64_t t50 = 0LLU;

	t50 = (((x217%x218)/x219)&x220);

	if (t50 != 1595144798208LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x221 = 2938;
	int8_t x222 = -28;
	int64_t x223 = INT64_MIN;
	int64_t x224 = 21221313LL;
	int64_t t51 = -1LL;

	t51 = (((x221%x222)/x223)&x224);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x225 = -25588579526LL;
	int16_t x228 = INT16_MIN;
	volatile int64_t t52 = 139LL;

	t52 = (((x225%x226)/x227)&x228);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x230 = UINT64_MAX;
	uint16_t x231 = 665U;

	t53 = (((x229%x230)/x231)&x232);

	if (t53 != 769LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = UINT16_MAX;
	uint32_t x235 = 24583U;
	volatile uint64_t x236 = 1554571LLU;
	uint64_t t54 = 37294LLU;

	t54 = (((x233%x234)/x235)&x236);

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = INT64_MIN;
	static uint8_t x238 = UINT8_MAX;
	volatile int8_t x239 = INT8_MIN;
	int32_t x240 = 48062128;
	int64_t t55 = 23596827495LL;

	t55 = (((x237%x238)/x239)&x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = -195;
	static volatile uint32_t x242 = 1251595U;
	uint16_t x243 = UINT16_MAX;

	t56 = (((x241%x242)/x243)&x244);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x246 = INT8_MIN;
	static int32_t x247 = INT32_MAX;
	volatile int32_t x248 = -334;
	int32_t t57 = -94453771;

	t57 = (((x245%x246)/x247)&x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = UINT64_MAX;
	uint8_t x254 = UINT8_MAX;
	static int16_t x256 = INT16_MIN;

	t58 = (((x253%x254)/x255)&x256);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = -1;
	int32_t x258 = INT32_MAX;
	static int16_t x259 = INT16_MIN;
	int8_t x260 = -30;

	t59 = (((x257%x258)/x259)&x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = 36746;
	int8_t x262 = INT8_MAX;
	volatile int8_t x263 = INT8_MAX;
	static volatile int32_t t60 = 21;

	t60 = (((x261%x262)/x263)&x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = INT16_MIN;
	uint64_t x266 = 35641223890LLU;
	static int16_t x267 = INT16_MIN;
	uint8_t x268 = 14U;
	volatile uint64_t t61 = 14198552LLU;

	t61 = (((x265%x266)/x267)&x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x269 = 28286248U;
	volatile uint64_t x270 = UINT64_MAX;
	int32_t x272 = 269209;
	static volatile uint64_t t62 = 4936LLU;

	t62 = (((x269%x270)/x271)&x272);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MAX;
	int64_t x274 = INT64_MAX;
	volatile int64_t x275 = -245588LL;
	volatile uint16_t x276 = 58U;

	t63 = (((x273%x274)/x275)&x276);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x280 = INT64_MAX;
	volatile int64_t t64 = 758855LL;

	t64 = (((x277%x278)/x279)&x280);

	if (t64 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x281 = -1;
	int8_t x283 = -61;
	volatile int16_t x284 = INT16_MIN;

	t65 = (((x281%x282)/x283)&x284);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	volatile uint64_t x286 = 6489LLU;
	static int8_t x287 = INT8_MAX;
	int32_t x288 = INT32_MIN;
	uint64_t t66 = 2LLU;

	t66 = (((x285%x286)/x287)&x288);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x290 = -1;
	int32_t x291 = -112651;
	int32_t x292 = 19940177;
	int32_t t67 = -105366562;

	t67 = (((x289%x290)/x291)&x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x294 = INT16_MIN;
	uint16_t x295 = 3078U;
	volatile int64_t x296 = INT64_MIN;

	t68 = (((x293%x294)/x295)&x296);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x298 = 741650639U;
	int64_t x299 = INT64_MIN;
	int8_t x300 = -1;
	int64_t t69 = 2206104214469564680LL;

	t69 = (((x297%x298)/x299)&x300);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x301 = UINT16_MAX;
	uint32_t x302 = 85U;
	uint32_t x303 = 386U;
	static int8_t x304 = INT8_MIN;

	t70 = (((x301%x302)/x303)&x304);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x305 = 31U;
	volatile int8_t x306 = -1;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = -1;

	t71 = (((x305%x306)/x307)&x308);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MAX;
	uint16_t x310 = 61U;
	uint64_t x311 = 43804366LLU;
	uint32_t x312 = 1354U;

	t72 = (((x309%x310)/x311)&x312);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = 0;
	int64_t x314 = INT64_MIN;
	int16_t x315 = 14;
	uint16_t x316 = 7605U;
	volatile int64_t t73 = 556204541954967LL;

	t73 = (((x313%x314)/x315)&x316);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x319 = INT64_MIN;
	static volatile int64_t t74 = -120972LL;

	t74 = (((x317%x318)/x319)&x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = INT32_MAX;
	int32_t x322 = -387089502;
	uint64_t x323 = 664006165084452263LLU;
	int16_t x324 = -4;

	t75 = (((x321%x322)/x323)&x324);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = -1;
	int8_t x326 = -4;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MIN;
	uint64_t t76 = 110LLU;

	t76 = (((x325%x326)/x327)&x328);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x330 = -148250;
	uint8_t x331 = 79U;
	int8_t x332 = INT8_MIN;
	static int64_t t77 = -14LL;

	t77 = (((x329%x330)/x331)&x332);

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x337 = 1U;
	int16_t x339 = 1;
	int16_t x340 = 15810;
	volatile int64_t t78 = -139380644LL;

	t78 = (((x337%x338)/x339)&x340);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x342 = 10157;
	static int32_t x343 = -116609;
	int64_t x344 = INT64_MIN;
	int64_t t79 = 0LL;

	t79 = (((x341%x342)/x343)&x344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = -1028787216LL;
	int8_t x346 = INT8_MAX;
	static int16_t x348 = 154;
	static volatile int64_t t80 = -2976757223950994LL;

	t80 = (((x345%x346)/x347)&x348);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = 1898;
	static volatile uint64_t x351 = UINT64_MAX;
	static uint64_t x352 = 17972LLU;
	uint64_t t81 = 774282LLU;

	t81 = (((x349%x350)/x351)&x352);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x353 = INT16_MAX;
	uint8_t x355 = 3U;
	int32_t x356 = -443363705;

	t82 = (((x353%x354)/x355)&x356);

	if (t82 != 6LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x358 = -126330379881LL;
	volatile int64_t x359 = INT64_MAX;
	static int64_t x360 = INT64_MIN;

	t83 = (((x357%x358)/x359)&x360);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x361 = INT32_MIN;
	uint64_t x362 = UINT64_MAX;
	uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 12881U;
	uint64_t t84 = 86190327LLU;

	t84 = (((x361%x362)/x363)&x364);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x366 = 10156221U;
	int64_t x368 = INT64_MIN;
	int64_t t85 = -257841LL;

	t85 = (((x365%x366)/x367)&x368);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x369 = 64U;
	int32_t x370 = INT32_MIN;
	uint16_t x371 = UINT16_MAX;
	volatile int32_t x372 = -1;
	volatile int32_t t86 = 151;

	t86 = (((x369%x370)/x371)&x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x374 = 31U;
	int8_t x375 = -1;

	t87 = (((x373%x374)/x375)&x376);

	if (t87 != -21LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	volatile uint64_t t88 = 8931536LLU;

	t88 = (((x377%x378)/x379)&x380);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x382 = INT16_MAX;
	int64_t x383 = INT64_MAX;
	uint8_t x384 = 119U;
	volatile int64_t t89 = 3271568153LL;

	t89 = (((x381%x382)/x383)&x384);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x385 = -2;
	static uint8_t x386 = UINT8_MAX;
	uint8_t x387 = 10U;
	static uint32_t x388 = 59U;

	t90 = (((x385%x386)/x387)&x388);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x389 = INT64_MIN;
	int64_t x390 = 14LL;
	int16_t x392 = 14654;
	volatile int64_t t91 = 4352552555311775608LL;

	t91 = (((x389%x390)/x391)&x392);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x393 = INT16_MIN;
	int8_t x396 = 0;
	int64_t t92 = -413019469342389LL;

	t92 = (((x393%x394)/x395)&x396);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x399 = INT32_MIN;
	static int8_t x400 = INT8_MIN;
	volatile uint64_t t93 = 67357402122235LLU;

	t93 = (((x397%x398)/x399)&x400);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = INT64_MIN;
	uint32_t x402 = 4695895U;
	static uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	uint64_t t94 = 771658828013964131LLU;

	t94 = (((x401%x402)/x403)&x404);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = -3041;
	int64_t x406 = -1349058LL;
	int64_t x407 = 3889181888806200LL;
	volatile int32_t x408 = INT32_MIN;
	volatile int64_t t95 = -968232LL;

	t95 = (((x405%x406)/x407)&x408);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x409 = INT16_MIN;
	static int8_t x410 = INT8_MIN;
	int64_t x411 = INT64_MIN;
	int64_t t96 = -7238876321511LL;

	t96 = (((x409%x410)/x411)&x412);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = INT32_MAX;
	volatile int64_t x414 = -1LL;
	int16_t x416 = 0;
	volatile int64_t t97 = -152050234672612LL;

	t97 = (((x413%x414)/x415)&x416);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x417 = UINT16_MAX;
	int16_t x418 = INT16_MIN;
	int64_t t98 = -4256654226LL;

	t98 = (((x417%x418)/x419)&x420);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x425 = 537392U;
	uint16_t x426 = 23U;
	int8_t x427 = -14;
	volatile uint16_t x428 = 5U;
	volatile uint32_t t99 = 280U;

	t99 = (((x425%x426)/x427)&x428);

	if (t99 != 0U) { NG(); } else { ; }
	
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

