#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MIN;
static volatile uint16_t x3 = 950U;
volatile uint64_t x5 = 222317232346LLU;
int64_t x7 = 591386958493624LL;
int32_t t2 = -3;
static int8_t x13 = 5;
volatile int64_t x18 = 672LL;
uint32_t x21 = 43948657U;
int32_t t6 = -15920;
static uint32_t x30 = 2U;
int8_t x35 = -37;
static volatile int32_t t18 = 67184473;
int64_t x93 = -12972875158LL;
uint64_t x96 = UINT64_MAX;
int32_t t25 = 1;
static int8_t x107 = 1;
int32_t t26 = 19919;
uint32_t x113 = UINT32_MAX;
volatile int64_t x115 = -480LL;
volatile int32_t t29 = -59735080;
static int16_t x121 = INT16_MAX;
int64_t x123 = INT64_MIN;
int32_t t31 = 3861511;
volatile uint32_t x130 = 1987300U;
volatile int32_t t33 = 1;
volatile int16_t x143 = -6;
uint64_t x144 = 9890800493LLU;
int32_t x149 = -171;
int64_t x165 = -7168608316LL;
volatile int16_t x174 = INT16_MIN;
int8_t x184 = -1;
uint32_t x188 = 8221369U;
int32_t x191 = INT32_MAX;
static int64_t x196 = INT64_MIN;
static volatile int64_t x198 = -7644730282LL;
static int64_t x201 = 4031LL;
int64_t x204 = INT64_MIN;
uint16_t x205 = UINT16_MAX;
uint32_t x206 = UINT32_MAX;
static uint8_t x210 = 4U;
int32_t t53 = -496436613;
int16_t x228 = INT16_MIN;
volatile int8_t x230 = INT8_MIN;
int64_t x236 = -1LL;
uint16_t x246 = 3U;
static int16_t x247 = -1;
int64_t x248 = INT64_MIN;
int8_t x251 = -1;
static uint8_t x258 = 87U;
volatile int8_t x261 = INT8_MIN;
static uint8_t x267 = 1U;
int32_t x271 = INT32_MAX;
static uint64_t x278 = UINT64_MAX;
int8_t x280 = INT8_MAX;
int16_t x285 = INT16_MIN;
static uint16_t x301 = UINT16_MAX;
int32_t x316 = -1;
int32_t t79 = 101213;
uint8_t x323 = UINT8_MAX;
int64_t x327 = INT64_MIN;
uint8_t x328 = 122U;
uint32_t x330 = 520360485U;
volatile int8_t x335 = INT8_MIN;
int32_t x337 = -251221827;
int16_t x341 = 2;
volatile int16_t x344 = INT16_MIN;
int16_t x346 = 28;
int32_t x347 = -1;
uint8_t x349 = 35U;
volatile int64_t x355 = -1LL;
uint64_t x359 = 679803168735LLU;
volatile uint64_t x363 = 1101211LLU;
uint16_t x364 = 14155U;
int32_t x365 = -10742;
int32_t t91 = -1;
static int32_t t93 = -1;
int8_t x382 = INT8_MIN;
static int32_t x385 = INT32_MIN;
volatile int32_t t97 = -401;
static uint16_t x399 = UINT16_MAX;
static int64_t x400 = 24529431LL;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -843181;

	t0 = ((x1<x2)<(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MIN;
	uint8_t x8 = 9U;
	volatile int32_t t1 = -3462;

	t1 = ((x5<x6)<(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = -1;

	t2 = ((x9<x10)<(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 67U;
	volatile int8_t x15 = INT8_MIN;
	int8_t x16 = 15;
	int32_t t3 = 8;

	t3 = ((x13<x14)<(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 3U;
	int64_t x19 = -9349517LL;
	uint8_t x20 = 1U;
	static int32_t t4 = -640460026;

	t4 = ((x17<x18)<(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x22 = -14512253;
	int8_t x23 = INT8_MIN;
	volatile uint32_t x24 = 2574U;
	volatile int32_t t5 = 10072635;

	t5 = ((x21<x22)<(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = 1275156966020LL;
	volatile int64_t x26 = INT64_MAX;
	static int64_t x27 = -6885806LL;
	uint64_t x28 = 1664715294523LLU;

	t6 = ((x25<x26)<(x27&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -15;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = 16U;
	int32_t t7 = 22210;

	t7 = ((x29<x30)<(x31&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile uint8_t x34 = 126U;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 24908;

	t8 = ((x33<x34)<(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 2505U;
	static int16_t x38 = INT16_MIN;
	volatile uint64_t x39 = 141199LLU;
	int32_t x40 = -617087;
	volatile int32_t t9 = 756242;

	t9 = ((x37<x38)<(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 58547848733659LLU;
	static uint8_t x42 = UINT8_MAX;
	static int16_t x43 = INT16_MIN;
	static int64_t x44 = 3866LL;
	int32_t t10 = 168203096;

	t10 = ((x41<x42)<(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = 1;
	uint32_t x48 = 398088U;
	static volatile int32_t t11 = -8031383;

	t11 = ((x45<x46)<(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x50 = -1;
	uint64_t x51 = 284716063826463LLU;
	int8_t x52 = 1;
	static int32_t t12 = 331;

	t12 = ((x49<x50)<(x51&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int64_t x54 = 27873099364LL;
	static volatile int8_t x55 = -25;
	uint64_t x56 = 2LLU;
	volatile int32_t t13 = -33385974;

	t13 = ((x53<x54)<(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int64_t x58 = -1LL;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MIN;
	static volatile int32_t t14 = -1557;

	t14 = ((x57<x58)<(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 3804U;
	static int64_t x62 = INT64_MIN;
	static int16_t x63 = INT16_MIN;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -1349;

	t15 = ((x61<x62)<(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	uint8_t x66 = 0U;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = 187675820U;
	volatile int32_t t16 = -746720;

	t16 = ((x65<x66)<(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = -1;
	uint8_t x71 = 1U;
	int32_t x72 = INT32_MAX;
	int32_t t17 = 32403;

	t17 = ((x69<x70)<(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	int8_t x75 = 3;
	int8_t x76 = INT8_MAX;

	t18 = ((x73<x74)<(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 3LLU;
	int64_t x78 = -1LL;
	static uint8_t x79 = UINT8_MAX;
	int64_t x80 = INT64_MIN;
	int32_t t19 = -303;

	t19 = ((x77<x78)<(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MAX;
	uint8_t x83 = UINT8_MAX;
	uint8_t x84 = 29U;
	int32_t t20 = -46473111;

	t20 = ((x81<x82)<(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -34481968;
	int8_t x86 = INT8_MIN;
	static int64_t x87 = -26560197672919LL;
	int64_t x88 = -416164329LL;
	volatile int32_t t21 = 2542;

	t21 = ((x85<x86)<(x87&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = UINT8_MAX;
	int8_t x91 = -1;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 477299;

	t22 = ((x89<x90)<(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x94 = UINT64_MAX;
	static int16_t x95 = 1192;
	volatile int32_t t23 = -7133822;

	t23 = ((x93<x94)<(x95&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	volatile uint8_t x98 = UINT8_MAX;
	static int32_t x99 = -6;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -100;

	t24 = ((x97<x98)<(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -13087;
	int8_t x102 = 12;
	uint16_t x103 = 27542U;
	volatile int64_t x104 = INT64_MIN;

	t25 = ((x101<x102)<(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 1U;
	uint16_t x106 = 24448U;
	static int16_t x108 = INT16_MAX;

	t26 = ((x105<x106)<(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MAX;
	int64_t x112 = INT64_MIN;
	static volatile int32_t t27 = 246;

	t27 = ((x109<x110)<(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MIN;
	volatile int8_t x116 = 3;
	int32_t t28 = 16199552;

	t28 = ((x113<x114)<(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	uint32_t x118 = 120211939U;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MIN;

	t29 = ((x117<x118)<(x119&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x122 = 1U;
	uint16_t x124 = 3U;
	int32_t t30 = -40990;

	t30 = ((x121<x122)<(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 178;
	int8_t x126 = 5;
	int16_t x127 = 0;
	uint8_t x128 = 0U;

	t31 = ((x125<x126)<(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint16_t x131 = UINT16_MAX;
	static int16_t x132 = -1;
	int32_t t32 = -1;

	t32 = ((x129<x130)<(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -1;
	static int8_t x134 = INT8_MAX;
	static int64_t x135 = -21087929LL;
	int16_t x136 = -1;

	t33 = ((x133<x134)<(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x137 = INT32_MAX;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MIN;
	static int32_t x140 = INT32_MAX;
	static volatile int32_t t34 = 1;

	t34 = ((x137<x138)<(x139&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int32_t t35 = -114399;

	t35 = ((x141<x142)<(x143&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 1U;
	uint64_t x146 = 512196018313308LLU;
	static volatile uint32_t x147 = UINT32_MAX;
	volatile int64_t x148 = INT64_MAX;
	int32_t t36 = 4876065;

	t36 = ((x145<x146)<(x147&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MAX;
	volatile int16_t x152 = -2071;
	volatile int32_t t37 = 0;

	t37 = ((x149<x150)<(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 124310081LLU;
	int8_t x154 = -1;
	int16_t x155 = INT16_MAX;
	int64_t x156 = INT64_MIN;
	int32_t t38 = 28108125;

	t38 = ((x153<x154)<(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = 5838689896LLU;
	volatile int8_t x158 = INT8_MIN;
	volatile uint32_t x159 = UINT32_MAX;
	static volatile int32_t x160 = INT32_MAX;
	int32_t t39 = 228277;

	t39 = ((x157<x158)<(x159&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	uint8_t x162 = UINT8_MAX;
	uint32_t x163 = UINT32_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -62;

	t40 = ((x161<x162)<(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MIN;
	static int16_t x167 = INT16_MIN;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -83322;

	t41 = ((x165<x166)<(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	static int32_t x171 = INT32_MAX;
	int32_t x172 = 1;
	volatile int32_t t42 = -254726;

	t42 = ((x169<x170)<(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 583301615648240LLU;
	static uint8_t x175 = UINT8_MAX;
	static int8_t x176 = -43;
	static volatile int32_t t43 = -196048;

	t43 = ((x173<x174)<(x175&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	int8_t x178 = 1;
	int16_t x179 = INT16_MIN;
	int64_t x180 = 0LL;
	static int32_t t44 = -364529;

	t44 = ((x177<x178)<(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	int16_t x182 = INT16_MAX;
	int16_t x183 = -871;
	volatile int32_t t45 = 3928;

	t45 = ((x181<x182)<(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 7U;
	static int8_t x186 = -1;
	static int16_t x187 = INT16_MIN;
	volatile int32_t t46 = -5110079;

	t46 = ((x185<x186)<(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = 35U;
	uint8_t x190 = UINT8_MAX;
	int8_t x192 = 24;
	int32_t t47 = 240347;

	t47 = ((x189<x190)<(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	static uint64_t x194 = UINT64_MAX;
	static uint32_t x195 = 306139U;
	volatile int32_t t48 = -23627990;

	t48 = ((x193<x194)<(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t49 = -33767;

	t49 = ((x197<x198)<(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 8582135563LLU;
	int8_t x203 = INT8_MIN;
	static int32_t t50 = -236022;

	t50 = ((x201<x202)<(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = -53;
	static int64_t x208 = 9528236337LL;
	int32_t t51 = 86011;

	t51 = ((x205<x206)<(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = UINT32_MAX;
	int8_t x211 = -1;
	int16_t x212 = INT16_MAX;
	volatile int32_t t52 = 3;

	t52 = ((x209<x210)<(x211&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = UINT32_MAX;
	volatile int64_t x215 = INT64_MIN;
	uint16_t x216 = UINT16_MAX;

	t53 = ((x213<x214)<(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = 4993;
	static uint32_t x218 = 1923U;
	static uint64_t x219 = 5559058800868LLU;
	uint64_t x220 = 556919697560322LLU;
	volatile int32_t t54 = -709;

	t54 = ((x217<x218)<(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 393092062256263404LLU;
	static int32_t x222 = INT32_MIN;
	uint16_t x223 = 72U;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -118096;

	t55 = ((x221<x222)<(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = 6U;
	uint16_t x226 = 1529U;
	volatile uint8_t x227 = 4U;
	volatile int32_t t56 = -549097;

	t56 = ((x225<x226)<(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 56111814LLU;
	volatile uint32_t x231 = 1832U;
	uint8_t x232 = 56U;
	int32_t t57 = -3;

	t57 = ((x229<x230)<(x231&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = 0;
	int16_t x234 = INT16_MAX;
	uint32_t x235 = 766U;
	int32_t t58 = -82160414;

	t58 = ((x233<x234)<(x235&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int16_t x238 = 1;
	int64_t x239 = INT64_MIN;
	volatile int32_t x240 = INT32_MIN;
	int32_t t59 = 0;

	t59 = ((x237<x238)<(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 9U;
	static uint16_t x242 = UINT16_MAX;
	static int32_t x243 = -1597927;
	volatile uint16_t x244 = 0U;
	int32_t t60 = 1749061;

	t60 = ((x241<x242)<(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = 1;
	static int32_t t61 = -1;

	t61 = ((x245<x246)<(x247&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int64_t x250 = INT64_MIN;
	int8_t x252 = 7;
	int32_t t62 = 3;

	t62 = ((x249<x250)<(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	volatile uint64_t x254 = UINT64_MAX;
	uint32_t x255 = UINT32_MAX;
	volatile uint32_t x256 = UINT32_MAX;
	int32_t t63 = -3394462;

	t63 = ((x253<x254)<(x255&x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int64_t x259 = -1LL;
	int8_t x260 = -2;
	int32_t t64 = -1184;

	t64 = ((x257<x258)<(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = -1;
	volatile int64_t x263 = 240LL;
	int64_t x264 = -34752238629478675LL;
	int32_t t65 = -186421;

	t65 = ((x261<x262)<(x263&x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	uint32_t x266 = 108U;
	int64_t x268 = 56463082LL;
	int32_t t66 = 13;

	t66 = ((x265<x266)<(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = 28605LL;
	uint16_t x270 = UINT16_MAX;
	volatile int16_t x272 = -1;
	int32_t t67 = -4972;

	t67 = ((x269<x270)<(x271&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 2770172400LL;
	uint64_t x274 = UINT64_MAX;
	static uint32_t x275 = 336804951U;
	static int32_t x276 = INT32_MAX;
	volatile int32_t t68 = -485464;

	t68 = ((x273<x274)<(x275&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int64_t x279 = -1LL;
	int32_t t69 = 124;

	t69 = ((x277<x278)<(x279&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = UINT32_MAX;
	volatile int64_t x282 = INT64_MAX;
	int32_t x283 = -3543;
	uint16_t x284 = 845U;
	int32_t t70 = 214;

	t70 = ((x281<x282)<(x283&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x286 = UINT16_MAX;
	volatile int8_t x287 = 50;
	static uint16_t x288 = 2121U;
	volatile int32_t t71 = 471154983;

	t71 = ((x285<x286)<(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 0U;
	int8_t x290 = -1;
	static volatile int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MAX;
	static volatile int32_t t72 = 1873;

	t72 = ((x289<x290)<(x291&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 103061794458442940LL;
	uint64_t x294 = 65624554850073723LLU;
	int16_t x295 = -174;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 21;

	t73 = ((x293<x294)<(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MAX;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = -10;
	int32_t t74 = -9488;

	t74 = ((x297<x298)<(x299&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x302 = 19625605620LLU;
	uint64_t x303 = 1040031640LLU;
	static uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = -1154;

	t75 = ((x301<x302)<(x303&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	uint32_t x306 = 112U;
	volatile int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = -50;

	t76 = ((x305<x306)<(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	static int8_t x310 = 1;
	static volatile int64_t x311 = INT64_MAX;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t77 = 2988269;

	t77 = ((x309<x310)<(x311&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 128280U;
	volatile uint32_t x314 = 322393216U;
	static uint8_t x315 = UINT8_MAX;
	volatile int32_t t78 = -356;

	t78 = ((x313<x314)<(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 82U;
	volatile uint32_t x318 = UINT32_MAX;
	static uint16_t x319 = UINT16_MAX;
	uint32_t x320 = 1813944169U;

	t79 = ((x317<x318)<(x319&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -1LL;
	static uint16_t x322 = UINT16_MAX;
	static volatile int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = 1;

	t80 = ((x321<x322)<(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MAX;
	static volatile int32_t t81 = 6;

	t81 = ((x325<x326)<(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -372963719219166LL;
	static volatile int8_t x331 = 35;
	int16_t x332 = 1170;
	int32_t t82 = -2769019;

	t82 = ((x329<x330)<(x331&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = 1782964U;
	int32_t x334 = -10834;
	int16_t x336 = -2;
	volatile int32_t t83 = -20777882;

	t83 = ((x333<x334)<(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = 27U;
	int8_t x339 = 0;
	int8_t x340 = -7;
	int32_t t84 = -124255;

	t84 = ((x337<x338)<(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x342 = UINT32_MAX;
	int32_t x343 = INT32_MIN;
	static volatile int32_t t85 = -403338833;

	t85 = ((x341<x342)<(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = -1;
	uint8_t x348 = 29U;
	int32_t t86 = 17531802;

	t86 = ((x345<x346)<(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1;
	int16_t x351 = 1015;
	volatile int64_t x352 = -1LL;
	static volatile int32_t t87 = 112;

	t87 = ((x349<x350)<(x351&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	static int16_t x354 = 0;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 15;

	t88 = ((x353<x354)<(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MIN;
	int64_t x360 = 18630173214403167LL;
	int32_t t89 = 0;

	t89 = ((x357<x358)<(x359&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 0U;
	volatile int8_t x362 = -1;
	volatile int32_t t90 = -1;

	t90 = ((x361<x362)<(x363&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = -1;
	int64_t x367 = INT64_MAX;
	int32_t x368 = -1;

	t91 = ((x365<x366)<(x367&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	static int8_t x370 = INT8_MAX;
	volatile uint16_t x371 = UINT16_MAX;
	int64_t x372 = -1LL;
	static volatile int32_t t92 = 5;

	t92 = ((x369<x370)<(x371&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	volatile int32_t x374 = 1204253;
	uint32_t x375 = 7270289U;
	int64_t x376 = -1LL;

	t93 = ((x373<x374)<(x375&x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -1LL;
	uint16_t x378 = 58U;
	int32_t x379 = INT32_MAX;
	static int32_t x380 = 160684;
	int32_t t94 = -108180;

	t94 = ((x377<x378)<(x379&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x383 = 39U;
	int16_t x384 = 417;
	static volatile int32_t t95 = 7;

	t95 = ((x381<x382)<(x383&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = INT64_MAX;
	int8_t x387 = -1;
	static volatile int64_t x388 = -1LL;
	static int32_t t96 = 31;

	t96 = ((x385<x386)<(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	volatile int64_t x391 = -1LL;
	uint8_t x392 = 57U;

	t97 = ((x389<x390)<(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 183U;
	volatile int64_t x394 = 2518574LL;
	int64_t x395 = 1685622580LL;
	volatile int32_t x396 = 271491167;
	volatile int32_t t98 = -1;

	t98 = ((x393<x394)<(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 7U;
	int16_t x398 = INT16_MIN;
	volatile int32_t t99 = -62987;

	t99 = ((x397<x398)<(x399&x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

