#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MIN;
int32_t t0 = 2431562;
int32_t x6 = INT32_MIN;
volatile int32_t t2 = 312;
static uint16_t x13 = 3U;
int32_t x16 = -1;
static uint64_t x18 = UINT64_MAX;
int8_t x29 = -1;
volatile uint16_t x32 = 27U;
uint32_t x34 = 179772U;
static int32_t t9 = 75;
uint32_t x47 = UINT32_MAX;
int32_t x58 = -1;
uint32_t x60 = 203081305U;
static volatile int8_t x63 = -1;
static int32_t t15 = 63;
uint8_t x70 = 7U;
int16_t x72 = -3406;
int32_t t17 = -119737;
volatile int32_t x81 = -1;
int32_t x84 = -663562;
uint16_t x100 = 5422U;
int32_t x106 = INT32_MIN;
int64_t x107 = 1292687606961195LL;
uint8_t x108 = 4U;
static int32_t x117 = 29419298;
uint64_t x118 = 231259709LLU;
uint32_t x126 = 4235U;
uint32_t x129 = UINT32_MAX;
static volatile int16_t x130 = 1262;
uint8_t x132 = UINT8_MAX;
volatile int32_t t29 = -6907;
int8_t x140 = -2;
int32_t x142 = -1;
static int32_t x148 = 3437759;
volatile uint64_t x152 = UINT64_MAX;
int16_t x154 = INT16_MIN;
volatile int32_t t34 = 15;
volatile uint64_t x158 = UINT64_MAX;
int8_t x168 = INT8_MIN;
int64_t x177 = -1LL;
uint16_t x180 = 668U;
int64_t x181 = -1LL;
uint32_t x193 = 326U;
static uint32_t x196 = UINT32_MAX;
volatile int32_t t44 = 69;
int16_t x202 = -1;
int32_t t45 = -25143;
int32_t x213 = -1;
uint8_t x217 = UINT8_MAX;
int32_t x218 = INT32_MIN;
uint8_t x221 = 84U;
static volatile int32_t x226 = INT32_MIN;
uint8_t x230 = UINT8_MAX;
int32_t t53 = 0;
int16_t x237 = -1;
uint16_t x242 = UINT16_MAX;
int16_t x243 = -1;
uint16_t x244 = UINT16_MAX;
static uint32_t x247 = UINT32_MAX;
int64_t x250 = INT64_MIN;
int8_t x252 = 8;
int32_t x253 = -1;
uint64_t x260 = 11826LLU;
uint32_t x266 = 1U;
int8_t x267 = INT8_MIN;
static int64_t x268 = INT64_MIN;
int8_t x275 = INT8_MAX;
int64_t x276 = 18616LL;
uint8_t x279 = 1U;
int8_t x280 = -1;
volatile int32_t t65 = -1;
volatile int32_t t66 = 2246488;
int64_t x290 = -1LL;
int16_t x291 = 1661;
volatile int8_t x292 = 24;
volatile int32_t t67 = -24;
static int32_t x297 = INT32_MAX;
volatile int16_t x298 = -56;
uint64_t x301 = UINT64_MAX;
static int16_t x302 = 906;
int32_t t71 = 170772522;
uint64_t x310 = 618LLU;
static int32_t x314 = INT32_MIN;
static int8_t x325 = INT8_MIN;
int64_t x326 = INT64_MAX;
static int8_t x327 = -12;
int32_t t75 = -3;
uint8_t x335 = 9U;
int8_t x337 = -1;
int64_t x342 = INT64_MAX;
int16_t x344 = INT16_MIN;
uint8_t x348 = 34U;
volatile int32_t t80 = -108;
int16_t x361 = -3186;
int32_t t84 = -7044769;
uint16_t x374 = 23475U;
uint8_t x377 = 13U;
int8_t x378 = -5;
int16_t x379 = -1;
volatile int32_t t88 = -27932;
int8_t x381 = INT8_MIN;
int16_t x388 = INT16_MIN;
int32_t x391 = INT32_MIN;
volatile int32_t x396 = 1;
uint16_t x399 = 4U;
volatile uint8_t x402 = UINT8_MAX;
int64_t x403 = INT64_MIN;
int8_t x408 = INT8_MIN;
static int16_t x412 = -16;
int8_t x414 = -27;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint8_t x2 = UINT8_MAX;
	volatile uint16_t x3 = 1U;

	t0 = (((x1&x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile int32_t x7 = INT32_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 35560185;

	t1 = (((x5&x6)+x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = -1LL;
	uint8_t x11 = 54U;
	static int16_t x12 = INT16_MIN;

	t2 = (((x9&x10)+x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 1U;
	uint16_t x15 = 37U;
	int32_t t3 = 128295;

	t3 = (((x13&x14)+x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	int8_t x19 = 0;
	volatile int64_t x20 = 6LL;
	volatile int32_t t4 = 58;

	t4 = (((x17&x18)+x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MAX;
	int8_t x27 = -1;
	int8_t x28 = INT8_MIN;
	int32_t t5 = -773626504;

	t5 = (((x25&x26)+x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = UINT64_MAX;
	int8_t x31 = -4;
	volatile int32_t t6 = 6225146;

	t6 = (((x29&x30)+x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -1;
	int8_t x35 = 20;
	static int8_t x36 = INT8_MIN;
	static int32_t t7 = -949667911;

	t7 = (((x33&x34)+x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = INT16_MAX;
	int32_t t8 = 1;

	t8 = (((x37&x38)+x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 4114LLU;
	int8_t x42 = INT8_MAX;
	int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MIN;

	t9 = (((x41&x42)+x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = 275;
	volatile int8_t x46 = -2;
	uint16_t x48 = 21U;
	static volatile int32_t t10 = 93974603;

	t10 = (((x45&x46)+x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = 618884157888LL;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 4U;
	int32_t t11 = -467466;

	t11 = (((x49&x50)+x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MIN;
	volatile int16_t x54 = INT16_MIN;
	static volatile int16_t x55 = -1;
	volatile uint64_t x56 = 3LLU;
	int32_t t12 = 0;

	t12 = (((x53&x54)+x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 12915U;
	static int64_t x59 = 871433LL;
	volatile int32_t t13 = -134624811;

	t13 = (((x57&x58)+x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	static uint64_t x62 = 1119906LLU;
	int16_t x64 = INT16_MIN;
	volatile int32_t t14 = -497;

	t14 = (((x61&x62)+x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	static volatile int32_t x66 = 10849184;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MIN;

	t15 = (((x65&x66)+x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -227228052932LL;
	uint64_t x71 = 57619263892LLU;
	int32_t t16 = -46;

	t16 = (((x69&x70)+x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = INT64_MIN;
	volatile int16_t x78 = INT16_MAX;
	static uint8_t x79 = 95U;
	uint16_t x80 = 24663U;

	t17 = (((x77&x78)+x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x82 = -1;
	static uint16_t x83 = UINT16_MAX;
	volatile int32_t t18 = 33150;

	t18 = (((x81&x82)+x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 1218449;
	uint64_t x86 = 6LLU;
	static int32_t x87 = INT32_MIN;
	static volatile int64_t x88 = -45476LL;
	volatile int32_t t19 = 12;

	t19 = (((x85&x86)+x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1718958875862799016LL;
	int32_t x94 = -121254;
	uint64_t x95 = 1013958840374730848LLU;
	static int8_t x96 = INT8_MIN;
	int32_t t20 = 52839842;

	t20 = (((x93&x94)+x95)==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = UINT64_MAX;
	static int64_t x99 = INT64_MIN;
	int32_t t21 = -23257229;

	t21 = (((x97&x98)+x99)==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 50935475869095LLU;
	int8_t x102 = 43;
	int64_t x103 = -1LL;
	int8_t x104 = -1;
	volatile int32_t t22 = -11;

	t22 = (((x101&x102)+x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int32_t t23 = -14485968;

	t23 = (((x105&x106)+x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	uint8_t x114 = 45U;
	int8_t x115 = INT8_MIN;
	int32_t x116 = -1;
	volatile int32_t t24 = 536815;

	t24 = (((x113&x114)+x115)==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = INT64_MAX;
	int32_t t25 = 67;

	t25 = (((x117&x118)+x119)==x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = 42;
	int32_t x122 = INT32_MIN;
	int64_t x123 = -225LL;
	int32_t x124 = -1;
	volatile int32_t t26 = -131787050;

	t26 = (((x121&x122)+x123)==x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 13612441111LLU;
	int16_t x127 = INT16_MIN;
	int32_t x128 = -448124038;
	int32_t t27 = -49597847;

	t27 = (((x125&x126)+x127)==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x131 = INT8_MIN;
	static volatile int32_t t28 = -1;

	t28 = (((x129&x130)+x131)==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 5467U;
	int16_t x134 = INT16_MIN;
	static int16_t x135 = INT16_MIN;
	uint8_t x136 = UINT8_MAX;

	t29 = (((x133&x134)+x135)==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MAX;
	static uint8_t x138 = 1U;
	int16_t x139 = INT16_MIN;
	int32_t t30 = 91;

	t30 = (((x137&x138)+x139)==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -1LL;
	static volatile int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t31 = -99771919;

	t31 = (((x141&x142)+x143)==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -1LL;
	volatile int64_t x146 = INT64_MIN;
	uint32_t x147 = 196U;
	static volatile int32_t t32 = 27229188;

	t32 = (((x145&x146)+x147)==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x149 = 1U;
	int32_t x150 = 26;
	uint64_t x151 = 119725244481LLU;
	static int32_t t33 = 6;

	t33 = (((x149&x150)+x151)==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x155 = -1;
	volatile int16_t x156 = INT16_MIN;

	t34 = (((x153&x154)+x155)==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x157 = 54U;
	int32_t x159 = INT32_MAX;
	volatile int8_t x160 = INT8_MIN;
	int32_t t35 = -462116756;

	t35 = (((x157&x158)+x159)==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x165 = 19022U;
	int32_t x166 = -1;
	volatile int64_t x167 = INT64_MIN;
	volatile int32_t t36 = -120126;

	t36 = (((x165&x166)+x167)==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = 4U;
	int32_t x170 = 0;
	int32_t x171 = 1732483;
	static int32_t x172 = -1;
	int32_t t37 = -14046923;

	t37 = (((x169&x170)+x171)==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x173 = 117540685LLU;
	static int16_t x174 = INT16_MIN;
	uint32_t x175 = UINT32_MAX;
	volatile int8_t x176 = 1;
	volatile int32_t t38 = -387;

	t38 = (((x173&x174)+x175)==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = INT8_MIN;
	static volatile int64_t x179 = -1LL;
	volatile int32_t t39 = 10;

	t39 = (((x177&x178)+x179)==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x182 = INT32_MAX;
	uint64_t x183 = 366147452298105777LLU;
	uint16_t x184 = 71U;
	int32_t t40 = -1601157;

	t40 = (((x181&x182)+x183)==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MAX;
	volatile int64_t x186 = -12487557584082LL;
	uint16_t x187 = 6908U;
	int64_t x188 = 2782441733LL;
	int32_t t41 = -149740;

	t41 = (((x185&x186)+x187)==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	static volatile int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	int64_t x192 = INT64_MIN;
	volatile int32_t t42 = -41;

	t42 = (((x189&x190)+x191)==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x194 = -1;
	volatile uint32_t x195 = UINT32_MAX;
	volatile int32_t t43 = 10;

	t43 = (((x193&x194)+x195)==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x197 = UINT16_MAX;
	static uint8_t x198 = 82U;
	int32_t x199 = 6;
	int64_t x200 = 0LL;

	t44 = (((x197&x198)+x199)==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x201 = -1;
	int16_t x203 = -7195;
	int32_t x204 = 775;

	t45 = (((x201&x202)+x203)==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = 23U;
	uint8_t x206 = 0U;
	static int32_t x207 = INT32_MAX;
	int32_t x208 = INT32_MIN;
	volatile int32_t t46 = -51;

	t46 = (((x205&x206)+x207)==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x209 = 1U;
	int64_t x210 = INT64_MIN;
	volatile int64_t x211 = 6827506598LL;
	volatile uint16_t x212 = UINT16_MAX;
	volatile int32_t t47 = -20144528;

	t47 = (((x209&x210)+x211)==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = UINT8_MAX;
	int32_t t48 = -6422043;

	t48 = (((x213&x214)+x215)==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x219 = UINT16_MAX;
	int32_t x220 = INT32_MAX;
	int32_t t49 = 23955834;

	t49 = (((x217&x218)+x219)==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x222 = -1;
	uint16_t x223 = 5516U;
	volatile int64_t x224 = INT64_MIN;
	volatile int32_t t50 = -5183618;

	t50 = (((x221&x222)+x223)==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 0U;
	int64_t x227 = -2066LL;
	int8_t x228 = -1;
	volatile int32_t t51 = 5215;

	t51 = (((x225&x226)+x227)==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -1;
	uint64_t x231 = 2600201874LLU;
	static volatile int32_t x232 = -1;
	volatile int32_t t52 = 339172;

	t52 = (((x229&x230)+x231)==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x233 = 34U;
	static int16_t x234 = 1;
	static int8_t x235 = INT8_MAX;
	uint64_t x236 = UINT64_MAX;

	t53 = (((x233&x234)+x235)==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x238 = 0U;
	uint8_t x239 = 40U;
	int8_t x240 = INT8_MAX;
	int32_t t54 = 28;

	t54 = (((x237&x238)+x239)==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = 321983779848207LL;
	volatile int32_t t55 = 6696;

	t55 = (((x241&x242)+x243)==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = -1LL;
	int64_t x246 = -1LL;
	static int64_t x248 = -255LL;
	volatile int32_t t56 = -3417;

	t56 = (((x245&x246)+x247)==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = 6U;
	static volatile int32_t x251 = -707613;
	volatile int32_t t57 = 1012781;

	t57 = (((x249&x250)+x251)==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x254 = INT16_MIN;
	uint32_t x255 = UINT32_MAX;
	static int64_t x256 = INT64_MIN;
	volatile int32_t t58 = 2;

	t58 = (((x253&x254)+x255)==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x257 = INT16_MAX;
	uint64_t x258 = 41963583658496LLU;
	int32_t x259 = INT32_MIN;
	volatile int32_t t59 = 1346981;

	t59 = (((x257&x258)+x259)==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = 222;
	uint64_t x262 = 748924LLU;
	int8_t x263 = INT8_MIN;
	static int64_t x264 = 30913065374971136LL;
	int32_t t60 = 45249;

	t60 = (((x261&x262)+x263)==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x265 = 13;
	volatile int32_t t61 = -1364744;

	t61 = (((x265&x266)+x267)==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 154714963633LLU;
	volatile uint32_t x270 = 3U;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t62 = -37560;

	t62 = (((x269&x270)+x271)==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MIN;
	static uint32_t x274 = 32001714U;
	static int32_t t63 = 70;

	t63 = (((x273&x274)+x275)==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x277 = -1;
	int16_t x278 = INT16_MAX;
	volatile int32_t t64 = -1;

	t64 = (((x277&x278)+x279)==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = -2973518509122295887LL;
	volatile uint16_t x282 = 16962U;
	volatile int16_t x283 = INT16_MAX;
	static int64_t x284 = INT64_MAX;

	t65 = (((x281&x282)+x283)==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x285 = 2U;
	uint32_t x286 = 12781751U;
	int32_t x287 = INT32_MIN;
	volatile uint16_t x288 = 1U;

	t66 = (((x285&x286)+x287)==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = -1;

	t67 = (((x289&x290)+x291)==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 795U;
	int32_t x294 = INT32_MIN;
	int32_t x295 = -1;
	static volatile uint32_t x296 = UINT32_MAX;
	int32_t t68 = -1803455;

	t68 = (((x293&x294)+x295)==x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x299 = UINT32_MAX;
	uint64_t x300 = UINT64_MAX;
	int32_t t69 = -1024961285;

	t69 = (((x297&x298)+x299)==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x303 = INT16_MIN;
	static int32_t x304 = 1;
	volatile int32_t t70 = -54406846;

	t70 = (((x301&x302)+x303)==x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -1LL;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MIN;

	t71 = (((x305&x306)+x307)==x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x311 = INT16_MIN;
	static uint64_t x312 = 237LLU;
	volatile int32_t t72 = 1;

	t72 = (((x309&x310)+x311)==x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = -609LL;
	static int32_t x315 = -1;
	uint8_t x316 = 62U;
	volatile int32_t t73 = -11992;

	t73 = (((x313&x314)+x315)==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x317 = 0;
	volatile int64_t x318 = 140695LL;
	static int64_t x319 = -1LL;
	int16_t x320 = -1;
	volatile int32_t t74 = 47;

	t74 = (((x317&x318)+x319)==x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x328 = 196599LL;

	t75 = (((x325&x326)+x327)==x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x329 = 51LLU;
	static int32_t x330 = -1;
	uint32_t x331 = 378989413U;
	int32_t x332 = INT32_MIN;
	int32_t t76 = 7386;

	t76 = (((x329&x330)+x331)==x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x333 = 975U;
	uint32_t x334 = 21U;
	static int16_t x336 = INT16_MIN;
	int32_t t77 = 28;

	t77 = (((x333&x334)+x335)==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x338 = INT32_MIN;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = 1171;
	static int32_t t78 = -2;

	t78 = (((x337&x338)+x339)==x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = 3;
	uint8_t x343 = 2U;
	volatile int32_t t79 = -196721;

	t79 = (((x341&x342)+x343)==x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = INT64_MIN;
	volatile int64_t x346 = INT64_MAX;
	uint64_t x347 = 2941629195077LLU;

	t80 = (((x345&x346)+x347)==x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = 960;
	static int8_t x350 = INT8_MIN;
	volatile int8_t x351 = INT8_MAX;
	static uint8_t x352 = 0U;
	volatile int32_t t81 = 289594;

	t81 = (((x349&x350)+x351)==x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 7U;
	static int64_t x354 = -1LL;
	static int32_t x355 = -1;
	int16_t x356 = INT16_MAX;
	volatile int32_t t82 = 2148901;

	t82 = (((x353&x354)+x355)==x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x357 = -2664LL;
	volatile int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	static int64_t x360 = INT64_MIN;
	int32_t t83 = 58187;

	t83 = (((x357&x358)+x359)==x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x362 = -1;
	int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MAX;

	t84 = (((x361&x362)+x363)==x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x365 = 12771320537799LLU;
	int32_t x366 = INT32_MIN;
	volatile int64_t x367 = 1651622303LL;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t85 = 0;

	t85 = (((x365&x366)+x367)==x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = INT32_MAX;
	int64_t x370 = 849885635725208LL;
	uint64_t x371 = 150367LLU;
	uint16_t x372 = UINT16_MAX;
	static volatile int32_t t86 = 375858;

	t86 = (((x369&x370)+x371)==x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x375 = 493;
	int32_t x376 = -1;
	volatile int32_t t87 = 1;

	t87 = (((x373&x374)+x375)==x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x380 = 3U;

	t88 = (((x377&x378)+x379)==x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x382 = INT64_MAX;
	uint16_t x383 = 0U;
	int8_t x384 = 2;
	int32_t t89 = -73168672;

	t89 = (((x381&x382)+x383)==x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = INT16_MIN;
	int16_t x386 = 6792;
	int16_t x387 = INT16_MAX;
	int32_t t90 = 1;

	t90 = (((x385&x386)+x387)==x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x389 = -3385;
	static int8_t x390 = INT8_MAX;
	uint8_t x392 = UINT8_MAX;
	int32_t t91 = -80;

	t91 = (((x389&x390)+x391)==x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x393 = 0U;
	uint32_t x394 = 11U;
	int32_t x395 = INT32_MAX;
	static volatile int32_t t92 = 1409126;

	t92 = (((x393&x394)+x395)==x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MAX;
	uint16_t x400 = 3991U;
	volatile int32_t t93 = -1217946;

	t93 = (((x397&x398)+x399)==x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = -21;
	uint64_t x404 = 5957098988873935827LLU;
	int32_t t94 = -647179692;

	t94 = (((x401&x402)+x403)==x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = -20LL;
	int8_t x406 = -1;
	volatile uint8_t x407 = 55U;
	int32_t t95 = -13699;

	t95 = (((x405&x406)+x407)==x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = INT64_MAX;
	int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MAX;
	int32_t t96 = -164209771;

	t96 = (((x409&x410)+x411)==x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x413 = -1LL;
	int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MIN;
	volatile int32_t t97 = 1;

	t97 = (((x413&x414)+x415)==x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x417 = 61541464U;
	static int64_t x418 = -4138050312077784LL;
	int8_t x419 = INT8_MIN;
	volatile uint32_t x420 = UINT32_MAX;
	volatile int32_t t98 = -12;

	t98 = (((x417&x418)+x419)==x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x421 = UINT16_MAX;
	int16_t x422 = INT16_MIN;
	volatile uint8_t x423 = UINT8_MAX;
	uint32_t x424 = 105U;
	int32_t t99 = -242677;

	t99 = (((x421&x422)+x423)==x424);

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

