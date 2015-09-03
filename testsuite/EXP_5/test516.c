#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MIN;
int32_t t0 = -94787;
int16_t x5 = -1;
volatile int32_t x6 = 461706366;
int16_t x11 = INT16_MIN;
uint64_t x15 = UINT64_MAX;
int8_t x27 = INT8_MIN;
uint16_t x31 = 402U;
volatile uint8_t x34 = UINT8_MAX;
int16_t x36 = -1;
int8_t x37 = -18;
static int64_t x40 = -1LL;
int32_t x44 = 19800966;
int32_t t9 = -1754;
uint32_t x54 = 545459U;
uint64_t x61 = 13793433LLU;
uint64_t x62 = UINT64_MAX;
uint64_t x76 = UINT64_MAX;
static int32_t t19 = -2;
static uint8_t x85 = UINT8_MAX;
int64_t x91 = INT64_MAX;
int32_t t21 = 9665982;
static int16_t x101 = 6976;
uint16_t x103 = 15835U;
volatile int32_t x105 = -1;
int8_t x109 = INT8_MAX;
int64_t x110 = -1LL;
int32_t x112 = INT32_MIN;
volatile int32_t t26 = 47471071;
uint32_t x121 = 1U;
int32_t x123 = INT32_MAX;
static int32_t t29 = 3827;
volatile int8_t x127 = INT8_MIN;
volatile int64_t x128 = INT64_MIN;
int16_t x135 = INT16_MIN;
uint16_t x142 = 84U;
static volatile uint32_t x143 = 336652345U;
static int32_t t38 = 61;
int32_t x166 = INT32_MIN;
int16_t x172 = INT16_MIN;
volatile int32_t t40 = -509;
uint64_t x173 = 73LLU;
volatile int32_t t41 = -595618746;
int16_t x178 = -1;
volatile int32_t t42 = -24840;
int32_t x183 = -1;
uint64_t x185 = UINT64_MAX;
volatile uint8_t x188 = 3U;
int64_t x189 = 1LL;
int8_t x193 = 25;
static uint32_t x195 = UINT32_MAX;
int64_t x197 = INT64_MIN;
volatile int32_t t47 = 177;
volatile int32_t x210 = -11315;
int32_t t52 = -6788029;
uint8_t x229 = 1U;
uint8_t x230 = 102U;
static volatile uint16_t x237 = 209U;
int8_t x238 = 1;
uint32_t x239 = UINT32_MAX;
uint64_t x248 = UINT64_MAX;
int64_t x250 = INT64_MAX;
uint8_t x253 = 0U;
int32_t t61 = -43;
int32_t t62 = 155;
uint8_t x271 = UINT8_MAX;
int32_t t63 = -31;
volatile int16_t x277 = INT16_MAX;
int64_t x278 = -1LL;
int8_t x279 = INT8_MIN;
volatile int32_t x281 = INT32_MIN;
static volatile int32_t x284 = -1;
uint16_t x286 = 13U;
int32_t x290 = INT32_MIN;
static int64_t x298 = 593LL;
uint64_t x303 = 6953987630404855LLU;
int16_t x304 = -3;
volatile int32_t t71 = -16286743;
static uint8_t x309 = 31U;
int8_t x310 = INT8_MAX;
uint16_t x312 = UINT16_MAX;
uint64_t x314 = UINT64_MAX;
uint8_t x328 = 82U;
int32_t t76 = 0;
uint64_t x332 = 65LLU;
uint32_t x341 = UINT32_MAX;
uint8_t x344 = 0U;
uint64_t x353 = UINT64_MAX;
volatile int64_t x355 = INT64_MAX;
volatile int32_t t83 = 405972;
volatile int16_t x360 = -13322;
int16_t x361 = INT16_MIN;
int16_t x364 = -18;
volatile int32_t t86 = -125893552;
static int16_t x370 = INT16_MAX;
int64_t x373 = INT64_MAX;
int32_t t90 = 752;
int16_t x390 = -1;
uint8_t x391 = 5U;
volatile uint64_t x392 = 2100177LLU;
int32_t t92 = 3537611;
int16_t x397 = -1;
int32_t t95 = 1991;
int8_t x405 = 21;
int16_t x406 = -1;
static int32_t t96 = -174;
int16_t x415 = INT16_MAX;
static volatile uint8_t x417 = 5U;
int16_t x422 = -5291;
static volatile int16_t x424 = -49;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	int64_t x3 = INT64_MIN;
	int32_t x4 = -1343;

	t0 = (x1<((x2/x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x7 = -1;
	static uint8_t x8 = 4U;
	static int32_t t1 = 898;

	t1 = (x5<((x6/x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = 103390201464088LLU;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 11;

	t2 = (x9<((x10/x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 0;
	int16_t x14 = -1;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 14842075;

	t3 = (x13<((x14/x15)+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	static int8_t x23 = -1;
	int16_t x24 = INT16_MIN;
	int32_t t4 = -1253371;

	t4 = (x21<((x22/x23)+x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 45102855LLU;
	static uint32_t x26 = UINT32_MAX;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t5 = 1010175;

	t5 = (x25<((x26/x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x29 = INT32_MIN;
	static uint16_t x30 = UINT16_MAX;
	static volatile int32_t x32 = -976310341;
	volatile int32_t t6 = -59721;

	t6 = (x29<((x30/x31)+x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 142538545398LLU;
	uint32_t x35 = 334019696U;
	int32_t t7 = 553112057;

	t7 = (x33<((x34/x35)+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	int32_t t8 = 21;

	t8 = (x37<((x38/x39)+x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 1;
	volatile int16_t x42 = 1;
	int8_t x43 = -1;

	t9 = (x41<((x42/x43)+x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x45 = INT16_MIN;
	int8_t x46 = -3;
	volatile int64_t x47 = 33664039421155867LL;
	uint8_t x48 = 14U;
	int32_t t10 = 687019804;

	t10 = (x45<((x46/x47)+x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = INT8_MIN;
	volatile int32_t x50 = INT32_MIN;
	static volatile int64_t x51 = INT64_MIN;
	int32_t x52 = -1;
	int32_t t11 = -18118;

	t11 = (x49<((x50/x51)+x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 206U;
	uint64_t x55 = 1984232628098812165LLU;
	volatile int64_t x56 = INT64_MAX;
	static int32_t t12 = -39083603;

	t12 = (x53<((x54/x55)+x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = INT32_MAX;
	int8_t x58 = INT8_MIN;
	int32_t x59 = INT32_MIN;
	uint64_t x60 = 7881664LLU;
	int32_t t13 = 240;

	t13 = (x57<((x58/x59)+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x63 = 519319U;
	volatile int8_t x64 = -1;
	int32_t t14 = -58;

	t14 = (x61<((x62/x63)+x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int64_t x66 = -6078LL;
	volatile int64_t x67 = INT64_MAX;
	uint64_t x68 = 55606529198688LLU;
	int32_t t15 = -169544768;

	t15 = (x65<((x66/x67)+x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = 785U;
	int32_t x71 = INT32_MIN;
	uint8_t x72 = 9U;
	int32_t t16 = -228;

	t16 = (x69<((x70/x71)+x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	static volatile uint16_t x74 = 96U;
	static int32_t x75 = INT32_MAX;
	int32_t t17 = -238;

	t17 = (x73<((x74/x75)+x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 6U;
	int32_t x78 = -1;
	int8_t x79 = -1;
	volatile uint64_t x80 = 10278294541LLU;
	volatile int32_t t18 = -6925;

	t18 = (x77<((x78/x79)+x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 2033U;
	int32_t x82 = -1;
	int64_t x83 = INT64_MAX;
	int64_t x84 = 95328131LL;

	t19 = (x81<((x82/x83)+x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x86 = INT64_MIN;
	int32_t x87 = -1828848;
	int8_t x88 = 3;
	volatile int32_t t20 = 93942;

	t20 = (x85<((x86/x87)+x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x89 = -1;
	int64_t x90 = INT64_MIN;
	int32_t x92 = INT32_MIN;

	t21 = (x89<((x90/x91)+x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	static uint8_t x94 = 13U;
	uint32_t x95 = 2077862292U;
	int8_t x96 = -1;
	static int32_t t22 = -1077855;

	t22 = (x93<((x94/x95)+x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 146776780143444145LL;
	uint8_t x98 = 70U;
	volatile int64_t x99 = -1LL;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t23 = 651;

	t23 = (x97<((x98/x99)+x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x102 = UINT64_MAX;
	int16_t x104 = INT16_MIN;
	static int32_t t24 = 905773359;

	t24 = (x101<((x102/x103)+x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = -1;
	int8_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = -2;

	t25 = (x105<((x106/x107)+x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x111 = 92U;

	t26 = (x109<((x110/x111)+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 493624632203460LL;
	volatile int8_t x114 = -1;
	static int16_t x115 = -1;
	volatile int8_t x116 = -1;
	static int32_t t27 = 18529;

	t27 = (x113<((x114/x115)+x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 1750LLU;
	int32_t x118 = INT32_MIN;
	static int16_t x119 = INT16_MIN;
	int8_t x120 = 1;
	volatile int32_t t28 = -1;

	t28 = (x117<((x118/x119)+x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = 34LL;
	int16_t x124 = INT16_MAX;

	t29 = (x121<((x122/x123)+x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = 228;
	int8_t x126 = INT8_MIN;
	static int32_t t30 = 143455;

	t30 = (x125<((x126/x127)+x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = INT64_MAX;
	static int64_t x130 = INT64_MIN;
	static int64_t x131 = -75815301327667LL;
	volatile uint16_t x132 = 636U;
	int32_t t31 = -123;

	t31 = (x129<((x130/x131)+x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -14743;
	uint32_t x134 = 477341U;
	int8_t x136 = -1;
	volatile int32_t t32 = 472992;

	t32 = (x133<((x134/x135)+x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x144 = 13362973869642LL;
	volatile int32_t t33 = -443;

	t33 = (x141<((x142/x143)+x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = -6;
	uint32_t x147 = 3173U;
	int16_t x148 = 0;
	static int32_t t34 = 311203365;

	t34 = (x145<((x146/x147)+x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = -1;
	int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MIN;
	volatile uint8_t x152 = UINT8_MAX;
	int32_t t35 = 1279;

	t35 = (x149<((x150/x151)+x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	volatile uint64_t x154 = 34LLU;
	static int16_t x155 = -233;
	int8_t x156 = INT8_MIN;
	int32_t t36 = 1745768;

	t36 = (x153<((x154/x155)+x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = UINT8_MAX;
	uint64_t x158 = UINT64_MAX;
	static volatile int32_t x159 = -1;
	volatile uint8_t x160 = UINT8_MAX;
	int32_t t37 = 29853;

	t37 = (x157<((x158/x159)+x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	static uint8_t x163 = 52U;
	int16_t x164 = -1;

	t38 = (x161<((x162/x163)+x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -1;
	int64_t x167 = -1LL;
	uint64_t x168 = UINT64_MAX;
	volatile int32_t t39 = -98966540;

	t39 = (x165<((x166/x167)+x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 2U;
	int64_t x170 = -1LL;
	static int8_t x171 = INT8_MAX;

	t40 = (x169<((x170/x171)+x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = -1;
	int64_t x176 = INT64_MAX;

	t41 = (x173<((x174/x175)+x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = -1;
	uint8_t x179 = 114U;
	int32_t x180 = -16073873;

	t42 = (x177<((x178/x179)+x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 2446U;
	volatile int64_t x182 = -1357561365LL;
	int32_t x184 = -1;
	int32_t t43 = 0;

	t43 = (x181<((x182/x183)+x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x186 = INT64_MAX;
	static int32_t x187 = INT32_MIN;
	static volatile int32_t t44 = 47931637;

	t44 = (x185<((x186/x187)+x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x190 = 6140U;
	static int8_t x191 = -4;
	int32_t x192 = 43566;
	volatile int32_t t45 = 57440;

	t45 = (x189<((x190/x191)+x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x194 = INT8_MIN;
	int8_t x196 = -1;
	volatile int32_t t46 = 556682;

	t46 = (x193<((x194/x195)+x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x198 = -59;
	volatile int16_t x199 = INT16_MIN;
	volatile int16_t x200 = 471;

	t47 = (x197<((x198/x199)+x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x201 = 28U;
	int32_t x202 = 0;
	int8_t x203 = -1;
	int16_t x204 = -1;
	int32_t t48 = -399726082;

	t48 = (x201<((x202/x203)+x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = -9618;
	int32_t x207 = -1;
	volatile int64_t x208 = 1LL;
	volatile int32_t t49 = 7380499;

	t49 = (x205<((x206/x207)+x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = 79775288LLU;
	uint64_t x211 = 112303612153LLU;
	uint32_t x212 = 39481U;
	volatile int32_t t50 = 9;

	t50 = (x209<((x210/x211)+x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MIN;
	int16_t x216 = -1;
	int32_t t51 = -3;

	t51 = (x213<((x214/x215)+x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	volatile uint8_t x218 = 3U;
	int32_t x219 = -133;
	int16_t x220 = INT16_MAX;

	t52 = (x217<((x218/x219)+x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x225 = UINT8_MAX;
	static uint8_t x226 = UINT8_MAX;
	static int16_t x227 = -1;
	uint8_t x228 = UINT8_MAX;
	int32_t t53 = 4;

	t53 = (x225<((x226/x227)+x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x231 = INT8_MIN;
	int64_t x232 = INT64_MAX;
	volatile int32_t t54 = 764315312;

	t54 = (x229<((x230/x231)+x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = 36;
	volatile uint32_t x235 = 866440U;
	int64_t x236 = INT64_MIN;
	volatile int32_t t55 = 3670;

	t55 = (x233<((x234/x235)+x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x240 = 9;
	int32_t t56 = -4892;

	t56 = (x237<((x238/x239)+x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MAX;
	static volatile int32_t x242 = INT32_MAX;
	int64_t x243 = 14164LL;
	int64_t x244 = -7547640284LL;
	int32_t t57 = 63017671;

	t57 = (x241<((x242/x243)+x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x245 = 10688U;
	int64_t x246 = 6093269391810702LL;
	int64_t x247 = INT64_MIN;
	volatile int32_t t58 = 572895;

	t58 = (x245<((x246/x247)+x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x249 = INT16_MIN;
	uint64_t x251 = 750102526097768382LLU;
	uint64_t x252 = 4LLU;
	volatile int32_t t59 = -380937;

	t59 = (x249<((x250/x251)+x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = 5;
	static volatile int32_t t60 = -1377;

	t60 = (x253<((x254/x255)+x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = UINT64_MAX;
	uint16_t x262 = 489U;
	int16_t x263 = -1;
	int8_t x264 = INT8_MIN;

	t61 = (x261<((x262/x263)+x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = 9;
	static volatile int32_t x267 = 9;
	static int32_t x268 = -2522;

	t62 = (x265<((x266/x267)+x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = 20;
	uint64_t x270 = 1711060925027662LLU;
	static int32_t x272 = INT32_MAX;

	t63 = (x269<((x270/x271)+x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = -5980222;
	volatile int32_t x274 = 949698;
	uint64_t x275 = 12138466156394LLU;
	uint64_t x276 = 196119LLU;
	static int32_t t64 = 244519;

	t64 = (x273<((x274/x275)+x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x280 = INT32_MIN;
	static volatile int32_t t65 = 1;

	t65 = (x277<((x278/x279)+x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x282 = 1LLU;
	volatile uint32_t x283 = 53323534U;
	volatile int32_t t66 = 9753;

	t66 = (x281<((x282/x283)+x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x285 = 0U;
	volatile uint16_t x287 = 230U;
	int64_t x288 = 1LL;
	volatile int32_t t67 = 1;

	t67 = (x285<((x286/x287)+x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MAX;
	int8_t x291 = INT8_MAX;
	uint16_t x292 = 43U;
	int32_t t68 = -1;

	t68 = (x289<((x290/x291)+x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MIN;
	static int32_t x294 = 41924798;
	int32_t x295 = INT32_MAX;
	static int16_t x296 = -1221;
	int32_t t69 = 632735;

	t69 = (x293<((x294/x295)+x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = 1U;
	int8_t x299 = INT8_MIN;
	int32_t x300 = -4028455;
	static int32_t t70 = 3083512;

	t70 = (x297<((x298/x299)+x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x301 = INT16_MIN;
	volatile int64_t x302 = INT64_MAX;

	t71 = (x301<((x302/x303)+x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = 53;
	static uint64_t x306 = UINT64_MAX;
	volatile int16_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t72 = 0;

	t72 = (x305<((x306/x307)+x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x311 = INT16_MIN;
	int32_t t73 = 3111;

	t73 = (x309<((x310/x311)+x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = INT32_MAX;
	int16_t x315 = 431;
	uint16_t x316 = UINT16_MAX;
	static int32_t t74 = -70907892;

	t74 = (x313<((x314/x315)+x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x321 = -1;
	static uint16_t x322 = 29U;
	int32_t x323 = INT32_MAX;
	static uint64_t x324 = UINT64_MAX;
	int32_t t75 = -11350030;

	t75 = (x321<((x322/x323)+x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = 918;
	volatile int32_t x326 = -1;
	uint8_t x327 = 3U;

	t76 = (x325<((x326/x327)+x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x329 = 41034502U;
	int8_t x330 = INT8_MAX;
	uint16_t x331 = 4725U;
	static int32_t t77 = 257765938;

	t77 = (x329<((x330/x331)+x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	int64_t x335 = INT64_MIN;
	static int32_t x336 = INT32_MIN;
	int32_t t78 = 11193;

	t78 = (x333<((x334/x335)+x336));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = 60207027376LLU;
	uint8_t x338 = 2U;
	int16_t x339 = -6;
	volatile int8_t x340 = 30;
	volatile int32_t t79 = -138;

	t79 = (x337<((x338/x339)+x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x342 = INT16_MIN;
	uint64_t x343 = 650018101333LLU;
	volatile int32_t t80 = -59;

	t80 = (x341<((x342/x343)+x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x345 = -7;
	int8_t x346 = 0;
	int8_t x347 = INT8_MAX;
	static int32_t x348 = INT32_MIN;
	volatile int32_t t81 = 59991;

	t81 = (x345<((x346/x347)+x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int8_t x350 = 3;
	int16_t x351 = -12931;
	int8_t x352 = INT8_MIN;
	volatile int32_t t82 = 276784;

	t82 = (x349<((x350/x351)+x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x354 = 0;
	static int32_t x356 = -57301933;

	t83 = (x353<((x354/x355)+x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x357 = 3172304983662988LLU;
	volatile int16_t x358 = INT16_MIN;
	volatile uint16_t x359 = 139U;
	volatile int32_t t84 = -182734;

	t84 = (x357<((x358/x359)+x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x362 = -46;
	int16_t x363 = 159;
	volatile int32_t t85 = -298449945;

	t85 = (x361<((x362/x363)+x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x365 = -1293520;
	int8_t x366 = INT8_MIN;
	uint32_t x367 = UINT32_MAX;
	static uint32_t x368 = 2640U;

	t86 = (x365<((x366/x367)+x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x369 = 239743LLU;
	static int32_t x371 = -1;
	int16_t x372 = INT16_MAX;
	int32_t t87 = 5626;

	t87 = (x369<((x370/x371)+x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x374 = INT32_MAX;
	uint64_t x375 = 155470LLU;
	int16_t x376 = INT16_MIN;
	int32_t t88 = 1953472;

	t88 = (x373<((x374/x375)+x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x378 = 0U;
	uint16_t x379 = 13956U;
	int64_t x380 = INT64_MAX;
	int32_t t89 = 18;

	t89 = (x377<((x378/x379)+x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MIN;
	static int8_t x382 = INT8_MIN;
	static uint64_t x383 = 3999711059687367LLU;
	uint32_t x384 = UINT32_MAX;

	t90 = (x381<((x382/x383)+x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 4U;
	uint8_t x386 = 2U;
	uint64_t x387 = 3LLU;
	static int16_t x388 = INT16_MIN;
	int32_t t91 = 1573;

	t91 = (x385<((x386/x387)+x388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = INT16_MIN;

	t92 = (x389<((x390/x391)+x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x393 = 8LLU;
	uint64_t x394 = 115519LLU;
	static uint8_t x395 = UINT8_MAX;
	static volatile int32_t x396 = 1535;
	static int32_t t93 = 0;

	t93 = (x393<((x394/x395)+x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x398 = 19946722780906LLU;
	volatile int64_t x399 = -25LL;
	static volatile int32_t x400 = -1;
	volatile int32_t t94 = 29293780;

	t94 = (x397<((x398/x399)+x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = 230;
	uint16_t x402 = 5257U;
	static int64_t x403 = INT64_MIN;
	volatile uint16_t x404 = 3U;

	t95 = (x401<((x402/x403)+x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;

	t96 = (x405<((x406/x407)+x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x413 = 40U;
	int32_t x414 = -257683;
	int32_t x416 = -1;
	static volatile int32_t t97 = 27782806;

	t97 = (x413<((x414/x415)+x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x418 = INT16_MIN;
	uint32_t x419 = UINT32_MAX;
	uint16_t x420 = 3384U;
	static volatile int32_t t98 = -3865;

	t98 = (x417<((x418/x419)+x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = 120315U;
	int32_t x423 = INT32_MIN;
	int32_t t99 = -30;

	t99 = (x421<((x422/x423)+x424));

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

