#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
int8_t x10 = -1;
volatile int32_t t2 = -32;
static int16_t x13 = -1;
static volatile int8_t x17 = -1;
int8_t x23 = 9;
uint8_t x32 = 1U;
static int32_t t7 = 68667530;
uint8_t x39 = 21U;
int32_t t9 = -312053081;
volatile int32_t t10 = -2368010;
volatile uint16_t x48 = UINT16_MAX;
int32_t t13 = 1;
volatile uint16_t x60 = 7U;
volatile int32_t t17 = 11785164;
int32_t t19 = -166948;
int64_t x84 = 3840680859500033192LL;
int8_t x85 = INT8_MIN;
static int32_t t21 = -3410872;
int32_t x91 = INT32_MAX;
static uint8_t x94 = 21U;
uint64_t x99 = 130LLU;
volatile int32_t t25 = 8;
int8_t x107 = -1;
volatile int32_t t26 = 2;
static uint32_t x114 = UINT32_MAX;
volatile int8_t x115 = INT8_MIN;
volatile int32_t t28 = -425009932;
uint64_t x125 = 471928953096466LLU;
volatile uint16_t x126 = UINT16_MAX;
int32_t x127 = -493354;
uint32_t x130 = 3795U;
uint64_t x138 = 31634217703LLU;
volatile int64_t x140 = -1LL;
volatile uint32_t x142 = 259U;
uint8_t x143 = 12U;
volatile int32_t x145 = INT32_MIN;
volatile uint64_t x148 = 1865110365379544172LLU;
int32_t t37 = -85593706;
volatile uint64_t x159 = 2596470275984LLU;
volatile int32_t t39 = 93745;
volatile int8_t x163 = INT8_MIN;
volatile uint8_t x172 = 122U;
int64_t x175 = INT64_MAX;
static volatile int32_t t46 = -4;
uint16_t x189 = 8U;
int8_t x199 = 2;
int32_t x201 = INT32_MIN;
int64_t x205 = -1LL;
int64_t x207 = 22LL;
static volatile uint16_t x214 = UINT16_MAX;
int32_t t53 = -256;
int32_t t54 = -1496;
int8_t x221 = INT8_MIN;
static int8_t x222 = INT8_MIN;
int64_t x235 = -7679961419034329LL;
uint64_t x243 = 320444962LLU;
uint16_t x246 = UINT16_MAX;
int16_t x252 = INT16_MAX;
int8_t x254 = 1;
uint32_t x264 = 65511U;
int32_t t65 = -155346;
volatile int64_t x284 = -14743592425LL;
int16_t x295 = 1777;
uint64_t x300 = UINT64_MAX;
int32_t x302 = -12;
int32_t t75 = 399842135;
static int32_t t78 = 25;
volatile uint64_t x317 = UINT64_MAX;
int64_t x318 = INT64_MIN;
static int32_t x319 = -45689;
int32_t t79 = 45435721;
int16_t x321 = -1;
uint16_t x322 = UINT16_MAX;
volatile int32_t t83 = 55794;
volatile int32_t t84 = -3794;
static int64_t x341 = -1LL;
volatile int16_t x343 = 265;
int32_t x345 = 155747108;
volatile uint32_t x351 = 30226U;
int64_t x356 = 7125372LL;
uint32_t x367 = 329916U;
static uint8_t x370 = 3U;
int8_t x371 = INT8_MAX;
int16_t x378 = -1;
uint8_t x394 = UINT8_MAX;
uint64_t x395 = 1LLU;
volatile int32_t t98 = 112928;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int8_t x2 = 1;
	volatile int32_t x3 = -1;
	static int8_t x4 = -2;
	volatile int32_t t0 = 167;

	t0 = ((x1<=x2)<=(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 20;
	uint8_t x7 = UINT8_MAX;
	static volatile int64_t x8 = -1LL;
	int32_t t1 = -249;

	t1 = ((x5<=x6)<=(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 5U;
	int32_t x11 = INT32_MIN;
	static int8_t x12 = INT8_MIN;

	t2 = ((x9<=x10)<=(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = 13U;
	uint8_t x16 = 54U;
	volatile int32_t t3 = -8020420;

	t3 = ((x13<=x14)<=(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = 180051U;
	uint32_t x19 = 2U;
	uint8_t x20 = UINT8_MAX;
	static int32_t t4 = 2;

	t4 = ((x17<=x18)<=(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 20726U;
	int8_t x22 = INT8_MAX;
	static uint16_t x24 = 2587U;
	int32_t t5 = 93778524;

	t5 = ((x21<=x22)<=(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = UINT64_MAX;
	uint16_t x27 = 1U;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 3;

	t6 = ((x25<=x26)<=(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x29 = UINT32_MAX;
	static int32_t x30 = INT32_MAX;
	uint64_t x31 = 755293450849LLU;

	t7 = ((x29<=x30)<=(x31&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 24U;
	uint16_t x34 = UINT16_MAX;
	static int16_t x35 = INT16_MAX;
	static uint8_t x36 = 1U;
	int32_t t8 = -46884260;

	t8 = ((x33<=x34)<=(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = 0;
	volatile int8_t x40 = -33;

	t9 = ((x37<=x38)<=(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -14;
	int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = 197U;

	t10 = ((x41<=x42)<=(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	static int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = -729765;

	t11 = ((x45<=x46)<=(x47&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static volatile int64_t x50 = 186025523624348034LL;
	int32_t x51 = INT32_MIN;
	volatile int32_t x52 = -224804247;
	volatile int32_t t12 = 939;

	t12 = ((x49<=x50)<=(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 0;
	int16_t x54 = 3;
	uint32_t x55 = 3478532U;
	uint16_t x56 = 43U;

	t13 = ((x53<=x54)<=(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int32_t x58 = INT32_MAX;
	uint8_t x59 = 20U;
	volatile int32_t t14 = 726922766;

	t14 = ((x57<=x58)<=(x59&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	static uint8_t x62 = 2U;
	int64_t x63 = -1LL;
	int8_t x64 = -13;
	int32_t t15 = 358575;

	t15 = ((x61<=x62)<=(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int8_t x66 = INT8_MIN;
	static int16_t x67 = 7;
	volatile uint64_t x68 = 2963LLU;
	static volatile int32_t t16 = 77330;

	t16 = ((x65<=x66)<=(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 8U;
	static uint32_t x70 = UINT32_MAX;
	int8_t x71 = 1;
	uint64_t x72 = UINT64_MAX;

	t17 = ((x69<=x70)<=(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = UINT8_MAX;
	int64_t x74 = -1LL;
	int64_t x75 = -1LL;
	volatile int32_t x76 = -8;
	volatile int32_t t18 = 611613;

	t18 = ((x73<=x74)<=(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MAX;
	int16_t x79 = -1;
	static int8_t x80 = -38;

	t19 = ((x77<=x78)<=(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 521093779U;
	static int32_t x82 = 2881;
	volatile int8_t x83 = 2;
	volatile int32_t t20 = -27879871;

	t20 = ((x81<=x82)<=(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 1702791768U;
	uint16_t x87 = 6286U;
	volatile uint8_t x88 = 8U;

	t21 = ((x85<=x86)<=(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = -77LL;
	uint8_t x92 = 5U;
	int32_t t22 = 45;

	t22 = ((x89<=x90)<=(x91&x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 478046;
	uint64_t x95 = 14945887414LLU;
	int16_t x96 = -73;
	static int32_t t23 = 1;

	t23 = ((x93<=x94)<=(x95&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = 1875;
	int16_t x100 = 3623;
	volatile int32_t t24 = 1032120;

	t24 = ((x97<=x98)<=(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MAX;
	uint16_t x103 = UINT16_MAX;
	static int32_t x104 = -1;

	t25 = ((x101<=x102)<=(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = 153929U;
	static uint16_t x108 = UINT16_MAX;

	t26 = ((x105<=x106)<=(x107&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	int64_t x110 = -1LL;
	static int32_t x111 = -1;
	uint32_t x112 = 104U;
	static int32_t t27 = -2488883;

	t27 = ((x109<=x110)<=(x111&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = INT64_MAX;
	static uint8_t x116 = 2U;

	t28 = ((x113<=x114)<=(x115&x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x118 = -1318LL;
	uint64_t x119 = 14474438874LLU;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -462750;

	t29 = ((x117<=x118)<=(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 19U;
	int64_t x122 = -1LL;
	uint64_t x123 = 5148545227101LLU;
	int8_t x124 = -14;
	int32_t t30 = 20669469;

	t30 = ((x121<=x122)<=(x123&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x128 = -203;
	volatile int32_t t31 = 487245;

	t31 = ((x125<=x126)<=(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -2;
	int64_t x131 = INT64_MAX;
	int8_t x132 = 10;
	int32_t t32 = 378472;

	t32 = ((x129<=x130)<=(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	uint32_t x134 = 130644U;
	int16_t x135 = 481;
	int16_t x136 = INT16_MAX;
	volatile int32_t t33 = 272478674;

	t33 = ((x133<=x134)<=(x135&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 2837358;
	volatile int64_t x139 = -1LL;
	volatile int32_t t34 = -51790;

	t34 = ((x137<=x138)<=(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	int64_t x144 = INT64_MAX;
	volatile int32_t t35 = 4840;

	t35 = ((x141<=x142)<=(x143&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x146 = UINT32_MAX;
	volatile int32_t x147 = INT32_MIN;
	volatile int32_t t36 = 120193811;

	t36 = ((x145<=x146)<=(x147&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int64_t x150 = -1LL;
	uint16_t x151 = UINT16_MAX;
	uint64_t x152 = 5LLU;

	t37 = ((x149<=x150)<=(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -8;
	int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;
	volatile int32_t t38 = -68069;

	t38 = ((x153<=x154)<=(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 14;
	volatile int64_t x158 = INT64_MIN;
	int16_t x160 = -1;

	t39 = ((x157<=x158)<=(x159&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 27185U;
	int64_t x162 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 79065;

	t40 = ((x161<=x162)<=(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 3686191982920162LLU;
	int8_t x166 = 3;
	int8_t x167 = INT8_MAX;
	int8_t x168 = -1;
	volatile int32_t t41 = -646109;

	t41 = ((x165<=x166)<=(x167&x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 307U;
	int16_t x170 = 2128;
	int8_t x171 = -1;
	volatile int32_t t42 = 217977843;

	t42 = ((x169<=x170)<=(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = 0;
	uint16_t x174 = 4U;
	int16_t x176 = 0;
	static volatile int32_t t43 = -23;

	t43 = ((x173<=x174)<=(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 16U;
	volatile int32_t x178 = 728;
	volatile uint8_t x179 = UINT8_MAX;
	int32_t x180 = 167576078;
	volatile int32_t t44 = -959;

	t44 = ((x177<=x178)<=(x179&x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	int16_t x184 = 0;
	int32_t t45 = 248460;

	t45 = ((x181<=x182)<=(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static int32_t x186 = INT32_MIN;
	volatile int64_t x187 = 32989298515991415LL;
	int16_t x188 = INT16_MIN;

	t46 = ((x185<=x186)<=(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	int16_t x191 = INT16_MAX;
	int16_t x192 = INT16_MAX;
	static int32_t t47 = 12;

	t47 = ((x189<=x190)<=(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int32_t x194 = -1;
	uint64_t x195 = 3122879301867LLU;
	int32_t x196 = INT32_MIN;
	int32_t t48 = -1;

	t48 = ((x193<=x194)<=(x195&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 3754LLU;
	int64_t x198 = INT64_MIN;
	static volatile int16_t x200 = -1206;
	int32_t t49 = 15681;

	t49 = ((x197<=x198)<=(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = 5813965407331LL;
	int8_t x203 = 1;
	static uint16_t x204 = 6441U;
	volatile int32_t t50 = -299864;

	t50 = ((x201<=x202)<=(x203&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = 34;
	volatile int16_t x208 = -426;
	int32_t t51 = 324832;

	t51 = ((x205<=x206)<=(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 16353LLU;
	uint8_t x210 = UINT8_MAX;
	static uint8_t x211 = 3U;
	int16_t x212 = INT16_MAX;
	int32_t t52 = 45;

	t52 = ((x209<=x210)<=(x211&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	int8_t x215 = -1;
	int64_t x216 = -103LL;

	t53 = ((x213<=x214)<=(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MAX;
	int32_t x220 = -1;

	t54 = ((x217<=x218)<=(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x223 = -1;
	int64_t x224 = 694471065956227LL;
	static int32_t t55 = -1494598;

	t55 = ((x221<=x222)<=(x223&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1;
	int16_t x226 = -1;
	int16_t x227 = 2748;
	static volatile int16_t x228 = INT16_MIN;
	static int32_t t56 = 5640;

	t56 = ((x225<=x226)<=(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 210842459LLU;
	uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 36820419LLU;
	int32_t x232 = INT32_MAX;
	volatile int32_t t57 = 1;

	t57 = ((x229<=x230)<=(x231&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 27LLU;
	int8_t x234 = INT8_MIN;
	volatile int8_t x236 = -12;
	volatile int32_t t58 = -506772;

	t58 = ((x233<=x234)<=(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = -1;
	int32_t x239 = -1;
	volatile uint8_t x240 = 3U;
	static int32_t t59 = 255995040;

	t59 = ((x237<=x238)<=(x239&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = 0;
	volatile int32_t x244 = INT32_MIN;
	static volatile int32_t t60 = 0;

	t60 = ((x241<=x242)<=(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	volatile uint32_t x247 = 640567U;
	uint8_t x248 = 1U;
	static int32_t t61 = 52886092;

	t61 = ((x245<=x246)<=(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 908124817U;
	uint64_t x250 = UINT64_MAX;
	static uint32_t x251 = 1023U;
	volatile int32_t t62 = -34724;

	t62 = ((x249<=x250)<=(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 20U;
	int64_t x255 = INT64_MAX;
	uint16_t x256 = 7677U;
	volatile int32_t t63 = 48524010;

	t63 = ((x253<=x254)<=(x255&x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 20144;
	static int64_t x258 = INT64_MAX;
	int16_t x259 = 7;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = 14464481;

	t64 = ((x257<=x258)<=(x259&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x261 = UINT16_MAX;
	int8_t x262 = INT8_MAX;
	static uint64_t x263 = UINT64_MAX;

	t65 = ((x261<=x262)<=(x263&x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 46U;
	int8_t x266 = INT8_MAX;
	static uint64_t x267 = UINT64_MAX;
	volatile int64_t x268 = INT64_MIN;
	int32_t t66 = -76;

	t66 = ((x265<=x266)<=(x267&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	volatile int64_t x271 = 3LL;
	volatile int8_t x272 = INT8_MIN;
	int32_t t67 = -9;

	t67 = ((x269<=x270)<=(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x273 = 2U;
	int8_t x274 = -9;
	uint32_t x275 = 2741244U;
	int8_t x276 = INT8_MAX;
	int32_t t68 = -1412;

	t68 = ((x273<=x274)<=(x275&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	uint32_t x278 = 15U;
	int32_t x279 = -1;
	static volatile int64_t x280 = 72LL;
	static volatile int32_t t69 = 62018;

	t69 = ((x277<=x278)<=(x279&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = -1;
	int16_t x282 = INT16_MAX;
	uint64_t x283 = UINT64_MAX;
	int32_t t70 = -2770;

	t70 = ((x281<=x282)<=(x283&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	int16_t x286 = -1;
	int32_t x287 = -1;
	static int32_t x288 = -493615;
	volatile int32_t t71 = -737;

	t71 = ((x285<=x286)<=(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 33U;
	static volatile int32_t x290 = INT32_MIN;
	static int16_t x291 = -1;
	volatile uint32_t x292 = UINT32_MAX;
	int32_t t72 = -15065603;

	t72 = ((x289<=x290)<=(x291&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	uint8_t x294 = 79U;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 1;

	t73 = ((x293<=x294)<=(x295&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MIN;
	static uint16_t x299 = 19U;
	int32_t t74 = 2129706;

	t74 = ((x297<=x298)<=(x299&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 182LLU;
	int64_t x303 = 8071397LL;
	volatile int8_t x304 = INT8_MIN;

	t75 = ((x301<=x302)<=(x303&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = 20999142LLU;
	uint32_t x306 = 189646012U;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 4U;
	int32_t t76 = 28;

	t76 = ((x305<=x306)<=(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x309 = UINT8_MAX;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MAX;
	volatile uint32_t x312 = 8321681U;
	volatile int32_t t77 = -99608736;

	t77 = ((x309<=x310)<=(x311&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	static int32_t x314 = -3554661;
	volatile int16_t x315 = -1;
	uint32_t x316 = 1837U;

	t78 = ((x313<=x314)<=(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x320 = INT8_MIN;

	t79 = ((x317<=x318)<=(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = 15;
	int64_t x324 = -1LL;
	volatile int32_t t80 = 388;

	t80 = ((x321<=x322)<=(x323&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 1930;
	volatile uint8_t x326 = UINT8_MAX;
	volatile uint32_t x327 = 26184665U;
	uint64_t x328 = 2653067732066493321LLU;
	int32_t t81 = 413671603;

	t81 = ((x325<=x326)<=(x327&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 27LLU;
	int64_t x330 = 1408084441LL;
	uint8_t x331 = 9U;
	uint64_t x332 = 2659LLU;
	volatile int32_t t82 = 60959;

	t82 = ((x329<=x330)<=(x331&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = -591736;
	uint8_t x334 = 3U;
	static int32_t x335 = INT32_MIN;
	uint64_t x336 = UINT64_MAX;

	t83 = ((x333<=x334)<=(x335&x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	static int32_t x338 = -640351793;
	volatile uint8_t x339 = 3U;
	int16_t x340 = INT16_MIN;

	t84 = ((x337<=x338)<=(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = -548;
	volatile int32_t x344 = INT32_MAX;
	volatile int32_t t85 = -62340;

	t85 = ((x341<=x342)<=(x343&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = 35;
	int8_t x347 = -1;
	uint32_t x348 = 16415U;
	static int32_t t86 = 2304338;

	t86 = ((x345<=x346)<=(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	int64_t x350 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	int32_t t87 = -4;

	t87 = ((x349<=x350)<=(x351&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = 63U;
	uint32_t x354 = 8933U;
	uint64_t x355 = 300506466984LLU;
	volatile int32_t t88 = -577;

	t88 = ((x353<=x354)<=(x355&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 0U;
	static int8_t x358 = -1;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MAX;
	int32_t t89 = 955201;

	t89 = ((x357<=x358)<=(x359&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = UINT32_MAX;
	uint16_t x362 = 374U;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = 56;
	volatile int32_t t90 = 45;

	t90 = ((x361<=x362)<=(x363&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	uint32_t x366 = 496953U;
	static int32_t x368 = 3;
	int32_t t91 = 115749601;

	t91 = ((x365<=x366)<=(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint16_t x372 = 16U;
	volatile int32_t t92 = 1496;

	t92 = ((x369<=x370)<=(x371&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x373 = UINT8_MAX;
	static int8_t x374 = INT8_MAX;
	volatile uint32_t x375 = 8U;
	int64_t x376 = -230320805LL;
	volatile int32_t t93 = 254387214;

	t93 = ((x373<=x374)<=(x375&x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = 0;
	int8_t x379 = -15;
	int32_t x380 = -1;
	int32_t t94 = -1;

	t94 = ((x377<=x378)<=(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	volatile int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	static int32_t t95 = 43;

	t95 = ((x381<=x382)<=(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	int64_t x386 = -4260019730704138LL;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MIN;
	static int32_t t96 = 6997;

	t96 = ((x385<=x386)<=(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	static int64_t x390 = INT64_MIN;
	volatile uint8_t x391 = 19U;
	static int16_t x392 = -1;
	volatile int32_t t97 = 2735;

	t97 = ((x389<=x390)<=(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int16_t x396 = -1;

	t98 = ((x393<=x394)<=(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	static volatile int16_t x399 = -1;
	volatile int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = -638;

	t99 = ((x397<=x398)<=(x399&x400));

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

