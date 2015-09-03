#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int8_t x2 = 0;
static int32_t x7 = INT32_MAX;
int8_t x8 = INT8_MIN;
int16_t x16 = INT16_MAX;
int16_t x18 = INT16_MAX;
static volatile int64_t x19 = -6378LL;
volatile int32_t t4 = 300;
int32_t x25 = 115384;
static int16_t x36 = INT16_MIN;
volatile int16_t x42 = INT16_MIN;
int64_t x45 = -1LL;
volatile uint64_t x48 = 3587195446306248369LLU;
uint32_t x62 = UINT32_MAX;
uint32_t x64 = 15698053U;
volatile int32_t t15 = 474;
uint16_t x65 = 13617U;
uint8_t x74 = UINT8_MAX;
volatile uint8_t x75 = 1U;
static int64_t x77 = INT64_MAX;
int64_t x80 = 806530620LL;
int16_t x85 = INT16_MIN;
static volatile uint32_t x86 = UINT32_MAX;
volatile int8_t x88 = -1;
int8_t x96 = 3;
int8_t x98 = INT8_MIN;
int8_t x101 = 0;
uint8_t x104 = 1U;
int8_t x106 = INT8_MIN;
uint16_t x108 = 98U;
volatile int32_t t28 = -25;
uint64_t x120 = 20826159LLU;
int64_t x122 = INT64_MIN;
int16_t x123 = 18;
uint16_t x124 = UINT16_MAX;
volatile int32_t t30 = 452;
int16_t x126 = 3502;
uint64_t x129 = 632LLU;
volatile uint8_t x144 = 38U;
uint64_t x145 = 155545LLU;
int32_t t36 = -5;
int32_t x149 = INT32_MAX;
int32_t t38 = 63259;
static int16_t x160 = INT16_MIN;
volatile int32_t t39 = 289;
volatile int32_t t40 = 364596;
uint32_t x172 = 2368U;
static volatile uint8_t x180 = UINT8_MAX;
int32_t t44 = -505663;
int16_t x184 = INT16_MAX;
int32_t x193 = 25878402;
static int16_t x197 = INT16_MIN;
uint8_t x198 = UINT8_MAX;
uint32_t x204 = 1059696298U;
volatile int32_t t50 = -210014626;
volatile int64_t x208 = -487754LL;
uint64_t x210 = 813363368499183LLU;
int32_t x211 = -1;
volatile uint64_t x216 = 262817110LLU;
int64_t x219 = INT64_MIN;
volatile int32_t t54 = -1;
int32_t t55 = -95003;
volatile int16_t x225 = 2839;
static int8_t x226 = INT8_MIN;
volatile int32_t t56 = 4;
int16_t x229 = -28;
static volatile int32_t x230 = -3;
volatile uint16_t x232 = 2U;
volatile int32_t t57 = 25;
int8_t x233 = -14;
uint16_t x234 = 108U;
volatile int32_t x245 = -346;
static volatile int32_t t61 = -4777;
int64_t x252 = INT64_MIN;
static volatile int32_t t62 = 765466244;
static volatile int8_t x256 = 1;
static uint64_t x262 = 54528739918521LLU;
volatile int16_t x263 = INT16_MAX;
uint8_t x266 = 77U;
int32_t t66 = -31200;
volatile int32_t x275 = -387189;
int32_t t69 = 7115975;
static int32_t x282 = 1053724631;
volatile uint8_t x291 = UINT8_MAX;
static int8_t x292 = INT8_MIN;
int8_t x295 = INT8_MIN;
uint64_t x303 = 16LLU;
int32_t x307 = INT32_MIN;
int32_t x309 = 155739499;
volatile int32_t x318 = INT32_MAX;
int64_t x332 = -464LL;
uint64_t x338 = 3177196886042175593LLU;
static int8_t x340 = -1;
int32_t x342 = INT32_MAX;
volatile int16_t x344 = -1;
int64_t x346 = 218999LL;
static uint8_t x348 = 0U;
int32_t t86 = -9644952;
static int8_t x350 = -1;
uint8_t x353 = 1U;
uint8_t x354 = 0U;
volatile uint8_t x363 = 3U;
int16_t x375 = -1;
uint8_t x378 = 1U;
static int8_t x383 = 0;
volatile uint64_t x384 = 241472564772LLU;
int32_t t95 = 10177538;


void f0(void) {
	int16_t x3 = 6;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = -6;

	t0 = (x1==((x2|x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = -1LL;
	volatile int32_t t1 = -1;

	t1 = (x5==((x6|x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 1923047697U;
	int64_t x10 = INT64_MAX;
	uint32_t x11 = 500U;
	uint16_t x12 = UINT16_MAX;
	static int32_t t2 = -29018;

	t2 = (x9==((x10|x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 109U;
	int64_t x14 = 12694LL;
	uint16_t x15 = UINT16_MAX;
	volatile int32_t t3 = -462069;

	t3 = (x13==((x14|x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	int32_t x20 = INT32_MAX;

	t4 = (x17==((x18|x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	volatile int32_t x22 = -37;
	int32_t x23 = INT32_MIN;
	static int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 3;

	t5 = (x21==((x22|x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	volatile uint16_t x27 = UINT16_MAX;
	static int16_t x28 = -2;
	int32_t t6 = 337629362;

	t6 = (x25==((x26|x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	volatile uint16_t x30 = 3308U;
	uint8_t x31 = 2U;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -9;

	t7 = (x29==((x30|x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 5U;
	static volatile int64_t x34 = -3LL;
	int32_t x35 = 788750;
	int32_t t8 = -128741;

	t8 = (x33==((x34|x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	int64_t x38 = -1LL;
	uint64_t x39 = UINT64_MAX;
	static int64_t x40 = -1LL;
	volatile int32_t t9 = -22;

	t9 = (x37==((x38|x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	static int8_t x44 = 0;
	volatile int32_t t10 = -467497;

	t10 = (x41==((x42|x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x46 = 56U;
	int64_t x47 = INT64_MAX;
	volatile int32_t t11 = 528221;

	t11 = (x45==((x46|x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -842;

	t12 = (x49==((x50|x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = 5257140163649926LLU;
	int8_t x54 = -3;
	static uint8_t x55 = UINT8_MAX;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = -53742795;

	t13 = (x53==((x54|x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int16_t x58 = 50;
	static int16_t x59 = -98;
	static uint16_t x60 = 283U;
	volatile int32_t t14 = 1043105;

	t14 = (x57==((x58|x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static int8_t x63 = INT8_MIN;

	t15 = (x61==((x62|x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x66 = UINT64_MAX;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = 954754161703LLU;
	static volatile int32_t t16 = -483411926;

	t16 = (x65==((x66|x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 12463U;
	static uint64_t x70 = 2307595LLU;
	volatile int16_t x71 = INT16_MIN;
	static int8_t x72 = -2;
	int32_t t17 = 3038;

	t17 = (x69==((x70|x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 12U;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 0;

	t18 = (x73==((x74|x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 17U;
	uint16_t x79 = 1U;
	volatile int32_t t19 = -14;

	t19 = (x77==((x78|x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 14U;
	volatile int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MAX;
	int8_t x84 = INT8_MAX;
	int32_t t20 = 7570;

	t20 = (x81==((x82|x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x87 = -1;
	volatile int32_t t21 = 43;

	t21 = (x85==((x86|x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = 1U;
	static volatile uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = 376376333;

	t22 = (x89==((x90|x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 1648965261743LL;
	volatile int8_t x94 = INT8_MIN;
	uint8_t x95 = UINT8_MAX;
	static volatile int32_t t23 = 53766;

	t23 = (x93==((x94|x95)&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = UINT8_MAX;
	uint32_t x99 = 143U;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 1021;

	t24 = (x97==((x98|x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -2;
	uint16_t x103 = 21U;
	volatile int32_t t25 = -1;

	t25 = (x101==((x102|x103)&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	int64_t x107 = INT64_MIN;
	volatile int32_t t26 = -4291;

	t26 = (x105==((x106|x107)&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 49U;
	static volatile int64_t x110 = -1LL;
	volatile int64_t x111 = INT64_MIN;
	int8_t x112 = -25;
	int32_t t27 = 1894936;

	t27 = (x109==((x110|x111)&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	static volatile uint64_t x114 = UINT64_MAX;
	static volatile int32_t x115 = INT32_MAX;
	int16_t x116 = INT16_MIN;

	t28 = (x113==((x114|x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -543;
	static int16_t x118 = INT16_MIN;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int32_t t29 = 130788;

	t29 = (x117==((x118|x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;

	t30 = (x121==((x122|x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -7001;
	uint16_t x127 = 7209U;
	int32_t x128 = INT32_MAX;
	static int32_t t31 = -63;

	t31 = (x125==((x126|x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 24235548U;
	int16_t x131 = INT16_MIN;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 1;

	t32 = (x129==((x130|x131)&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int32_t x134 = INT32_MAX;
	static int8_t x135 = INT8_MAX;
	volatile int16_t x136 = 1;
	int32_t t33 = 12;

	t33 = (x133==((x134|x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int8_t x138 = -1;
	static int64_t x139 = INT64_MAX;
	uint32_t x140 = 65871670U;
	int32_t t34 = -27514;

	t34 = (x137==((x138|x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	uint64_t x142 = 48674581404LLU;
	volatile int8_t x143 = INT8_MIN;
	int32_t t35 = 29660037;

	t35 = (x141==((x142|x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MAX;
	static int8_t x148 = INT8_MAX;

	t36 = (x145==((x146|x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	static int16_t x152 = -103;
	int32_t t37 = -180;

	t37 = (x149==((x150|x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = 5;
	int8_t x154 = -5;
	uint64_t x155 = 12LLU;
	uint64_t x156 = 2568045199LLU;

	t38 = (x153==((x154|x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = -5523;
	int32_t x159 = INT32_MAX;

	t39 = (x157==((x158|x159)&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static int16_t x162 = 3;
	int8_t x163 = INT8_MIN;
	static int64_t x164 = -1LL;

	t40 = (x161==((x162|x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 2685149;
	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = -1;
	volatile uint32_t x168 = 215239U;
	volatile int32_t t41 = -2623611;

	t41 = (x165==((x166|x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = 11;
	volatile int8_t x170 = 11;
	int8_t x171 = -1;
	volatile int32_t t42 = -16803600;

	t42 = (x169==((x170|x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MIN;
	uint16_t x174 = UINT16_MAX;
	uint32_t x175 = UINT32_MAX;
	static uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = -41706;

	t43 = (x173==((x174|x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	uint8_t x178 = UINT8_MAX;
	static int64_t x179 = INT64_MIN;

	t44 = (x177==((x178|x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int8_t x182 = -24;
	static uint8_t x183 = 1U;
	int32_t t45 = 102423805;

	t45 = (x181==((x182|x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static int16_t x186 = 291;
	int64_t x187 = INT64_MIN;
	static int64_t x188 = 155662224LL;
	volatile int32_t t46 = 379972;

	t46 = (x185==((x186|x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 623LLU;
	int32_t x190 = INT32_MAX;
	static int8_t x191 = INT8_MAX;
	uint32_t x192 = 22434757U;
	int32_t t47 = -114933907;

	t47 = (x189==((x190|x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -2865969323178547LL;
	volatile uint64_t x195 = UINT64_MAX;
	int16_t x196 = 168;
	static int32_t t48 = -1069036649;

	t48 = (x193==((x194|x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x199 = UINT8_MAX;
	int64_t x200 = INT64_MAX;
	volatile int32_t t49 = 27959830;

	t49 = (x197==((x198|x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MAX;
	uint8_t x203 = UINT8_MAX;

	t50 = (x201==((x202|x203)&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int64_t x206 = -60LL;
	int16_t x207 = INT16_MIN;
	int32_t t51 = -7382868;

	t51 = (x205==((x206|x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int32_t x212 = -1;
	int32_t t52 = -1;

	t52 = (x209==((x210|x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 1U;
	uint16_t x214 = UINT16_MAX;
	volatile uint32_t x215 = 4597489U;
	volatile int32_t t53 = -6480388;

	t53 = (x213==((x214|x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MIN;
	int64_t x218 = -1LL;
	int64_t x220 = INT64_MIN;

	t54 = (x217==((x218|x219)&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MAX;
	volatile int16_t x222 = -1;
	volatile int64_t x223 = -2851LL;
	volatile int8_t x224 = -1;

	t55 = (x221==((x222|x223)&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x227 = 5064581441LL;
	int8_t x228 = 1;

	t56 = (x225==((x226|x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x231 = INT64_MIN;

	t57 = (x229==((x230|x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x235 = -867;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = -1219015;

	t58 = (x233==((x234|x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 9U;
	uint16_t x238 = 48U;
	static volatile int64_t x239 = 1LL;
	uint64_t x240 = 126114876891LLU;
	volatile int32_t t59 = 2;

	t59 = (x237==((x238|x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	int64_t x242 = -1641183201559647365LL;
	static uint64_t x243 = 53780LLU;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -344061;

	t60 = (x241==((x242|x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x246 = 54U;
	static int32_t x247 = INT32_MIN;
	uint64_t x248 = 2965555995622LLU;

	t61 = (x245==((x246|x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = UINT64_MAX;
	volatile uint8_t x250 = UINT8_MAX;
	static int16_t x251 = -1;

	t62 = (x249==((x250|x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = 353;
	uint16_t x255 = 9748U;
	int32_t t63 = 895889606;

	t63 = (x253==((x254|x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 747;
	uint64_t x258 = 60311595458LLU;
	int8_t x259 = INT8_MAX;
	int16_t x260 = -1;
	volatile int32_t t64 = -13;

	t64 = (x257==((x258|x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 6;

	t65 = (x261==((x262|x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int16_t x267 = -31;
	uint32_t x268 = UINT32_MAX;

	t66 = (x265==((x266|x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 1;
	int64_t x270 = INT64_MAX;
	int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 1;

	t67 = (x269==((x270|x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	static uint8_t x274 = 84U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -464239;

	t68 = (x273==((x274|x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 10U;
	int8_t x278 = -1;
	uint32_t x279 = UINT32_MAX;
	int8_t x280 = INT8_MIN;

	t69 = (x277==((x278|x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 32U;
	int8_t x283 = -1;
	static uint8_t x284 = 28U;
	static int32_t t70 = -85;

	t70 = (x281==((x282|x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 2U;
	uint32_t x286 = UINT32_MAX;
	int64_t x287 = -1LL;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 0;

	t71 = (x285==((x286|x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 6U;
	uint8_t x290 = 1U;
	volatile int32_t t72 = -42310615;

	t72 = (x289==((x290|x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int64_t x294 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	int32_t t73 = -1610731;

	t73 = (x293==((x294|x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 8;
	static volatile uint8_t x298 = 2U;
	int32_t x299 = -984571;
	uint16_t x300 = UINT16_MAX;
	int32_t t74 = -8;

	t74 = (x297==((x298|x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	uint64_t x302 = 1516040035959361439LLU;
	uint8_t x304 = UINT8_MAX;
	static int32_t t75 = 898;

	t75 = (x301==((x302|x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 1447916580U;
	uint64_t x306 = 41777249424LLU;
	volatile uint32_t x308 = 92U;
	volatile int32_t t76 = -80;

	t76 = (x305==((x306|x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = -1;
	uint32_t x311 = 10417096U;
	int8_t x312 = -62;
	volatile int32_t t77 = -82;

	t77 = (x309==((x310|x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int32_t x314 = -1;
	uint16_t x315 = 125U;
	static uint8_t x316 = UINT8_MAX;
	static int32_t t78 = -83;

	t78 = (x313==((x314|x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	int32_t x319 = INT32_MAX;
	static int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 36;

	t79 = (x317==((x318|x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 94U;
	uint32_t x322 = UINT32_MAX;
	int64_t x323 = INT64_MAX;
	int64_t x324 = -598916LL;
	int32_t t80 = 395;

	t80 = (x321==((x322|x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MIN;
	static int8_t x326 = 3;
	uint8_t x327 = UINT8_MAX;
	volatile uint32_t x328 = 1967U;
	int32_t t81 = 2;

	t81 = (x325==((x326|x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1527430;
	int32_t x330 = INT32_MIN;
	static volatile int16_t x331 = INT16_MIN;
	volatile int32_t t82 = -1975466;

	t82 = (x329==((x330|x331)&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	volatile int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	int16_t x336 = -11400;
	static int32_t t83 = -1291;

	t83 = (x333==((x334|x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 44;
	static volatile uint64_t x339 = UINT64_MAX;
	volatile int32_t t84 = -101;

	t84 = (x337==((x338|x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -19;
	int8_t x343 = INT8_MIN;
	volatile int32_t t85 = 5;

	t85 = (x341==((x342|x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	volatile int32_t x347 = INT32_MAX;

	t86 = (x345==((x346|x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int8_t x351 = -41;
	uint16_t x352 = UINT16_MAX;
	static volatile int32_t t87 = -1;

	t87 = (x349==((x350|x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x355 = 9;
	uint16_t x356 = 43U;
	static int32_t t88 = -18808;

	t88 = (x353==((x354|x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 1202;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = 8542U;
	int32_t x360 = -3;
	static int32_t t89 = -2019177;

	t89 = (x357==((x358|x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MAX;
	int16_t x364 = INT16_MIN;
	static int32_t t90 = -81111935;

	t90 = (x361==((x362|x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = 3U;
	volatile uint32_t x366 = 0U;
	int32_t x367 = INT32_MIN;
	int32_t x368 = 13;
	int32_t t91 = -28338914;

	t91 = (x365==((x366|x367)&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -59872LL;
	static int64_t x370 = INT64_MIN;
	volatile uint32_t x371 = 11U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t92 = -65511;

	t92 = (x369==((x370|x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = 29U;
	int32_t x374 = INT32_MAX;
	int32_t x376 = -1;
	int32_t t93 = -44838;

	t93 = (x373==((x374|x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = 1877482U;
	int16_t x379 = -1;
	volatile int64_t x380 = -1LL;
	volatile int32_t t94 = 16;

	t94 = (x377==((x378|x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = -1;
	int64_t x382 = INT64_MIN;

	t95 = (x381==((x382|x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	static volatile uint16_t x386 = UINT16_MAX;
	static uint16_t x387 = 2U;
	int32_t x388 = -17;
	volatile int32_t t96 = -171060979;

	t96 = (x385==((x386|x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 10LLU;
	int32_t x390 = 43;
	volatile uint64_t x391 = 1LLU;
	int8_t x392 = -21;
	static int32_t t97 = 7385645;

	t97 = (x389==((x390|x391)&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	volatile uint32_t x394 = 458U;
	int16_t x395 = INT16_MAX;
	uint64_t x396 = 5957512647618955LLU;
	int32_t t98 = 12969147;

	t98 = (x393==((x394|x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	int16_t x398 = -1;
	int16_t x399 = INT16_MIN;
	static int8_t x400 = 0;
	volatile int32_t t99 = 254390432;

	t99 = (x397==((x398|x399)&x400));

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

