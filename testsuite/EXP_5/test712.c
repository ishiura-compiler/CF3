#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = 3;
int32_t x12 = 1649987;
uint64_t x15 = UINT64_MAX;
int64_t x21 = 4040166465332186LL;
uint16_t x23 = UINT16_MAX;
int64_t x26 = 1135889803899165LL;
int8_t x38 = -1;
int16_t x49 = -1;
int32_t x51 = INT32_MAX;
volatile int32_t t12 = -23194;
uint32_t x54 = UINT32_MAX;
int8_t x59 = 1;
int32_t t14 = 1009;
volatile int32_t t16 = -37;
volatile int64_t x70 = -1LL;
int8_t x72 = INT8_MAX;
int64_t x93 = INT64_MAX;
volatile uint32_t x94 = 49201672U;
uint64_t x99 = UINT64_MAX;
volatile int32_t t26 = -29;
volatile int32_t t27 = 694;
int64_t x120 = 30562504459LL;
static int64_t x124 = 1803024972170347LL;
static volatile int32_t t29 = -4;
uint32_t x125 = 103U;
volatile uint16_t x134 = 2U;
volatile int16_t x135 = INT16_MIN;
uint16_t x136 = 19114U;
static int16_t x144 = INT16_MIN;
int8_t x145 = -1;
int8_t x146 = -1;
uint8_t x147 = 8U;
int32_t t34 = 351322;
int64_t x153 = -26046716865991618LL;
uint32_t x169 = 501539569U;
static uint8_t x186 = 28U;
volatile int32_t t43 = -20374742;
int8_t x204 = -1;
volatile int8_t x211 = INT8_MAX;
int32_t t49 = 1233;
uint8_t x221 = 2U;
int64_t x222 = INT64_MAX;
volatile uint32_t x223 = 42U;
static int32_t x227 = INT32_MAX;
static volatile int64_t x229 = INT64_MAX;
int8_t x252 = -1;
int8_t x260 = INT8_MIN;
int16_t x262 = -1;
int32_t t59 = 734;
int16_t x266 = -156;
static int16_t x281 = 2;
uint64_t x282 = UINT64_MAX;
uint16_t x283 = UINT16_MAX;
volatile int16_t x284 = INT16_MAX;
uint8_t x290 = 27U;
static volatile int32_t t66 = 91185003;
volatile int32_t t67 = 917254;
int16_t x298 = INT16_MAX;
int8_t x299 = -46;
volatile int32_t x303 = INT32_MIN;
int32_t t69 = -4;
static uint16_t x316 = 10689U;
static volatile int32_t x319 = INT32_MIN;
uint8_t x324 = 1U;
int16_t x329 = -1;
volatile int32_t t75 = 0;
uint16_t x335 = UINT16_MAX;
int32_t x340 = INT32_MAX;
volatile uint64_t x348 = UINT64_MAX;
int16_t x358 = INT16_MIN;
int8_t x360 = INT8_MIN;
uint32_t x366 = 1629669U;
int16_t x369 = INT16_MIN;
volatile int32_t t83 = -51985309;
uint32_t x374 = 1007833091U;
static int32_t x376 = 18746784;
int32_t t84 = -36;
volatile int32_t t87 = -128350172;
int8_t x390 = -1;
uint8_t x396 = 41U;
int32_t t89 = 281;
int64_t x399 = INT64_MIN;
static int8_t x402 = INT8_MAX;
int32_t x411 = INT32_MIN;
int8_t x413 = INT8_MAX;
uint32_t x416 = 1692182U;
static int32_t t95 = 21308;
static int32_t x426 = -5;
int16_t x427 = INT16_MIN;
int16_t x429 = 2543;
static int32_t t97 = -253;
int16_t x436 = INT16_MIN;
int16_t x437 = INT16_MIN;


void f0(void) {
	int64_t x1 = -132651LL;
	int32_t x2 = INT32_MAX;
	int32_t x3 = -1;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 5;

	t0 = (x1<=((x2%x3)*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int64_t x6 = 269762334363525LL;
	volatile uint16_t x7 = 163U;
	volatile int32_t t1 = 859975101;

	t1 = (x5<=((x6%x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = -27;
	volatile int64_t x11 = INT64_MIN;
	static volatile int32_t t2 = -670073068;

	t2 = (x9<=((x10%x11)*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	int16_t x16 = 155;
	volatile int32_t t3 = 1038;

	t3 = (x13<=((x14%x15)*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 218;
	volatile uint32_t x18 = UINT32_MAX;
	uint8_t x19 = UINT8_MAX;
	static uint32_t x20 = UINT32_MAX;
	static int32_t t4 = 136567895;

	t4 = (x17<=((x18%x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	volatile int64_t x24 = 2462LL;
	int32_t t5 = 1284;

	t5 = (x21<=((x22%x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 740U;
	volatile int8_t x27 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 1024;

	t6 = (x25<=((x26%x27)*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	int16_t x30 = INT16_MIN;
	int8_t x31 = -2;
	static volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 406;

	t7 = (x29<=((x30%x31)*x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = 1;
	static int64_t x35 = -44LL;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -160541;

	t8 = (x33<=((x34%x35)*x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	int64_t x39 = -303LL;
	static int8_t x40 = -21;
	static int32_t t9 = -254;

	t9 = (x37<=((x38%x39)*x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int32_t x42 = INT32_MIN;
	int64_t x43 = -1LL;
	int32_t x44 = 3694;
	volatile int32_t t10 = -636770285;

	t10 = (x41<=((x42%x43)*x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	static uint8_t x47 = 44U;
	int16_t x48 = -1;
	volatile int32_t t11 = 7;

	t11 = (x45<=((x46%x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int32_t x52 = INT32_MAX;

	t12 = (x49<=((x50%x51)*x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -1LL;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = 1787618LLU;
	volatile int32_t t13 = -6032771;

	t13 = (x53<=((x54%x55)*x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile uint32_t x58 = 77120071U;
	static int32_t x60 = -1;

	t14 = (x57<=((x58%x59)*x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	static int32_t x62 = INT32_MIN;
	uint32_t x63 = UINT32_MAX;
	uint8_t x64 = 12U;
	int32_t t15 = -503362;

	t15 = (x61<=((x62%x63)*x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = 124;
	volatile int64_t x66 = INT64_MIN;
	int64_t x67 = -1LL;
	volatile int16_t x68 = INT16_MIN;

	t16 = (x65<=((x66%x67)*x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 26U;
	volatile int32_t x71 = -4058425;
	int32_t t17 = -720;

	t17 = (x69<=((x70%x71)*x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint16_t x74 = 0U;
	int16_t x75 = -329;
	uint32_t x76 = 326381676U;
	static int32_t t18 = 460025147;

	t18 = (x73<=((x74%x75)*x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MAX;
	int64_t x79 = -1LL;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -781928;

	t19 = (x77<=((x78%x79)*x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 23U;
	int64_t x82 = 48479215LL;
	int16_t x83 = -47;
	uint8_t x84 = UINT8_MAX;
	int32_t t20 = -125650684;

	t20 = (x81<=((x82%x83)*x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	static int16_t x86 = INT16_MAX;
	uint64_t x87 = 3433565866420054041LLU;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -3403;

	t21 = (x85<=((x86%x87)*x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	static uint16_t x90 = 85U;
	int8_t x91 = 1;
	int64_t x92 = INT64_MAX;
	static volatile int32_t t22 = 31416;

	t22 = (x89<=((x90%x91)*x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t23 = 18;

	t23 = (x93<=((x94%x95)*x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 3U;
	int64_t x98 = -6058781544673870LL;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -10;

	t24 = (x97<=((x98%x99)*x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 523072U;
	int64_t x102 = INT64_MIN;
	static int16_t x103 = INT16_MIN;
	static int32_t x104 = INT32_MIN;
	int32_t t25 = 0;

	t25 = (x101<=((x102%x103)*x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 7;
	int64_t x106 = INT64_MAX;
	uint16_t x107 = 8150U;
	int32_t x108 = -62305112;

	t26 = (x105<=((x106%x107)*x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = INT64_MIN;
	int16_t x111 = -1;
	static uint8_t x112 = UINT8_MAX;

	t27 = (x109<=((x110%x111)*x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 11776U;
	static int64_t x118 = -1LL;
	int8_t x119 = -1;
	int32_t t28 = -357363126;

	t28 = (x117<=((x118%x119)*x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = 0U;
	volatile int32_t x123 = INT32_MAX;

	t29 = (x121<=((x122%x123)*x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = 1;
	static int32_t x128 = -8038;
	static int32_t t30 = 1020439;

	t30 = (x125<=((x126%x127)*x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MIN;
	static volatile int64_t x130 = -1LL;
	uint32_t x131 = 11691219U;
	int16_t x132 = INT16_MAX;
	int32_t t31 = 578267999;

	t31 = (x129<=((x130%x131)*x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = -1;
	int32_t t32 = -9575118;

	t32 = (x133<=((x134%x135)*x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -117522;
	volatile int32_t x142 = INT32_MAX;
	uint64_t x143 = UINT64_MAX;
	int32_t t33 = 254199648;

	t33 = (x141<=((x142%x143)*x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x148 = UINT16_MAX;

	t34 = (x145<=((x146%x147)*x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = 12;
	static int8_t x150 = INT8_MAX;
	int32_t x151 = INT32_MIN;
	static uint16_t x152 = 28U;
	volatile int32_t t35 = -8109594;

	t35 = (x149<=((x150%x151)*x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x154 = -3LL;
	volatile uint8_t x155 = 21U;
	volatile int16_t x156 = -540;
	volatile int32_t t36 = -4400;

	t36 = (x153<=((x154%x155)*x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x157 = UINT64_MAX;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = UINT64_MAX;
	int64_t x160 = -1LL;
	static int32_t t37 = -2;

	t37 = (x157<=((x158%x159)*x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = -1;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	int8_t x164 = 8;
	int32_t t38 = -59782;

	t38 = (x161<=((x162%x163)*x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = UINT8_MAX;
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = INT64_MAX;
	static int8_t x168 = -1;
	volatile int32_t t39 = -2;

	t39 = (x165<=((x166%x167)*x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x170 = 1995U;
	volatile int32_t x171 = INT32_MAX;
	static int8_t x172 = 8;
	volatile int32_t t40 = 10450330;

	t40 = (x169<=((x170%x171)*x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	static int8_t x174 = 0;
	int8_t x175 = -6;
	uint16_t x176 = 901U;
	int32_t t41 = 211;

	t41 = (x173<=((x174%x175)*x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 4U;
	uint16_t x178 = 39U;
	static int64_t x179 = -169846LL;
	static int32_t x180 = INT32_MIN;
	static volatile int32_t t42 = 3090040;

	t42 = (x177<=((x178%x179)*x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x187 = UINT16_MAX;
	volatile uint16_t x188 = UINT16_MAX;

	t43 = (x185<=((x186%x187)*x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	volatile int16_t x191 = 2712;
	uint16_t x192 = 14U;
	volatile int32_t t44 = -89789361;

	t44 = (x189<=((x190%x191)*x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = UINT16_MAX;
	uint64_t x194 = 14005LLU;
	static int16_t x195 = -2452;
	uint8_t x196 = UINT8_MAX;
	int32_t t45 = 182783012;

	t45 = (x193<=((x194%x195)*x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x201 = -1LL;
	int8_t x202 = INT8_MAX;
	static int8_t x203 = INT8_MIN;
	volatile int32_t t46 = 642864;

	t46 = (x201<=((x202%x203)*x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = 1LLU;
	int64_t x206 = INT64_MAX;
	uint8_t x207 = UINT8_MAX;
	volatile uint32_t x208 = UINT32_MAX;
	static volatile int32_t t47 = 23148426;

	t47 = (x205<=((x206%x207)*x208));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x209 = INT64_MAX;
	int64_t x210 = -1LL;
	static int16_t x212 = 4549;
	static int32_t t48 = -88434392;

	t48 = (x209<=((x210%x211)*x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 79U;
	int64_t x214 = INT64_MIN;
	int32_t x215 = -1;
	static int64_t x216 = INT64_MIN;

	t49 = (x213<=((x214%x215)*x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x217 = 3U;
	int16_t x218 = INT16_MAX;
	int16_t x219 = -1;
	int16_t x220 = -1;
	int32_t t50 = 2578;

	t50 = (x217<=((x218%x219)*x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x224 = 7951U;
	int32_t t51 = 1634265;

	t51 = (x221<=((x222%x223)*x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = UINT16_MAX;
	static volatile int32_t x226 = INT32_MAX;
	uint8_t x228 = 7U;
	static int32_t t52 = -153;

	t52 = (x225<=((x226%x227)*x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	static volatile int32_t x232 = -566815101;
	int32_t t53 = 17186796;

	t53 = (x229<=((x230%x231)*x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	volatile int8_t x238 = INT8_MIN;
	static int8_t x239 = INT8_MIN;
	int32_t x240 = -3518153;
	volatile int32_t t54 = 2;

	t54 = (x237<=((x238%x239)*x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = 61U;
	int16_t x242 = INT16_MIN;
	volatile int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t55 = 50333085;

	t55 = (x241<=((x242%x243)*x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = INT32_MIN;
	static uint32_t x250 = UINT32_MAX;
	volatile uint8_t x251 = 1U;
	volatile int32_t t56 = -395;

	t56 = (x249<=((x250%x251)*x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = 158671542730LL;
	volatile int64_t x254 = INT64_MIN;
	uint32_t x255 = 3551680U;
	volatile int16_t x256 = -1;
	int32_t t57 = 18496;

	t57 = (x253<=((x254%x255)*x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x257 = -1;
	uint64_t x258 = 48767446135011233LLU;
	static int8_t x259 = INT8_MIN;
	static volatile int32_t t58 = 843;

	t58 = (x257<=((x258%x259)*x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = 10319692710LL;
	static volatile int16_t x263 = -5;
	int8_t x264 = INT8_MAX;

	t59 = (x261<=((x262%x263)*x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x265 = 441LLU;
	int32_t x267 = -252856;
	int16_t x268 = -7;
	int32_t t60 = 310344947;

	t60 = (x265<=((x266%x267)*x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	volatile uint64_t x270 = 53LLU;
	static volatile uint32_t x271 = 122U;
	int16_t x272 = -1;
	volatile int32_t t61 = -7;

	t61 = (x269<=((x270%x271)*x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x273 = INT32_MAX;
	static volatile int32_t x274 = INT32_MIN;
	volatile int64_t x275 = -67013545821260LL;
	int16_t x276 = INT16_MIN;
	int32_t t62 = -7411591;

	t62 = (x273<=((x274%x275)*x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = 30948;
	volatile int16_t x278 = -1;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = 6335017876906LLU;
	volatile int32_t t63 = 218037;

	t63 = (x277<=((x278%x279)*x280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t t64 = -83507;

	t64 = (x281<=((x282%x283)*x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x285 = 4233U;
	int16_t x286 = INT16_MIN;
	static int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MAX;
	int32_t t65 = 90811;

	t65 = (x285<=((x286%x287)*x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MAX;
	int16_t x291 = INT16_MAX;
	int8_t x292 = INT8_MIN;

	t66 = (x289<=((x290%x291)*x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x293 = UINT16_MAX;
	int64_t x294 = -85845LL;
	int16_t x295 = -1;
	uint8_t x296 = 14U;

	t67 = (x293<=((x294%x295)*x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x300 = 92882U;
	static volatile int32_t t68 = -2144;

	t68 = (x297<=((x298%x299)*x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -1;
	static uint16_t x302 = UINT16_MAX;
	uint8_t x304 = UINT8_MAX;

	t69 = (x301<=((x302%x303)*x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = 0;
	int64_t x306 = INT64_MAX;
	int32_t x307 = 851663;
	int64_t x308 = -1LL;
	volatile int32_t t70 = 0;

	t70 = (x305<=((x306%x307)*x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x310 = 2045LL;
	static int8_t x311 = -3;
	int16_t x312 = -5287;
	volatile int32_t t71 = 20716;

	t71 = (x309<=((x310%x311)*x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = UINT64_MAX;
	static int64_t x314 = 57314LL;
	int8_t x315 = INT8_MAX;
	static volatile int32_t t72 = -4966;

	t72 = (x313<=((x314%x315)*x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x317 = 142811406U;
	int8_t x318 = 12;
	int8_t x320 = -1;
	volatile int32_t t73 = 2398750;

	t73 = (x317<=((x318%x319)*x320));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MAX;
	int8_t x322 = INT8_MAX;
	static int64_t x323 = 2964605LL;
	int32_t t74 = 59313;

	t74 = (x321<=((x322%x323)*x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = -1;
	volatile int8_t x332 = -10;

	t75 = (x329<=((x330%x331)*x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x333 = -1LL;
	int32_t x334 = -1;
	uint32_t x336 = 13316U;
	volatile int32_t t76 = -6174;

	t76 = (x333<=((x334%x335)*x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MAX;
	int64_t x338 = -244255065208431400LL;
	int16_t x339 = INT16_MIN;
	int32_t t77 = 191073;

	t77 = (x337<=((x338%x339)*x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x345 = 5134U;
	uint64_t x346 = 56733287227876980LLU;
	int16_t x347 = INT16_MAX;
	int32_t t78 = 240090221;

	t78 = (x345<=((x346%x347)*x348));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x349 = -478748;
	int8_t x350 = 1;
	int64_t x351 = -23929471122271LL;
	int64_t x352 = INT64_MIN;
	int32_t t79 = 991;

	t79 = (x349<=((x350%x351)*x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x353 = 3U;
	static int32_t x354 = -153028973;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = UINT16_MAX;
	static int32_t t80 = 7;

	t80 = (x353<=((x354%x355)*x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x357 = -1;
	int16_t x359 = INT16_MIN;
	int32_t t81 = 1427;

	t81 = (x357<=((x358%x359)*x360));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x365 = 56U;
	static int8_t x367 = INT8_MIN;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t82 = 555777;

	t82 = (x365<=((x366%x367)*x368));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x370 = 1;
	int64_t x371 = -1LL;
	uint32_t x372 = UINT32_MAX;

	t83 = (x369<=((x370%x371)*x372));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MIN;
	int16_t x375 = -1;

	t84 = (x373<=((x374%x375)*x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = INT16_MIN;
	volatile int16_t x378 = INT16_MAX;
	uint16_t x379 = 21864U;
	uint32_t x380 = 3578U;
	static int32_t t85 = 419;

	t85 = (x377<=((x378%x379)*x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MIN;
	uint32_t x383 = 56U;
	volatile int64_t x384 = -1LL;
	int32_t t86 = -115436;

	t86 = (x381<=((x382%x383)*x384));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = -1;
	volatile int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;

	t87 = (x385<=((x386%x387)*x388));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = INT16_MIN;
	static int16_t x391 = INT16_MIN;
	volatile uint16_t x392 = 12456U;
	int32_t t88 = 22441744;

	t88 = (x389<=((x390%x391)*x392));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x393 = 135897559298386811LLU;
	static int32_t x394 = 43761;
	int32_t x395 = 1;

	t89 = (x393<=((x394%x395)*x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = -642;
	uint64_t x398 = 76112LLU;
	volatile uint16_t x400 = 5U;
	int32_t t90 = -185215473;

	t90 = (x397<=((x398%x399)*x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = -1;
	int32_t x403 = 1;
	uint32_t x404 = 7U;
	int32_t t91 = 6;

	t91 = (x401<=((x402%x403)*x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x405 = -1;
	uint16_t x406 = 10U;
	int8_t x407 = INT8_MIN;
	static volatile int16_t x408 = INT16_MAX;
	int32_t t92 = -3;

	t92 = (x405<=((x406%x407)*x408));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MAX;
	static int16_t x410 = INT16_MIN;
	volatile int32_t x412 = -1;
	volatile int32_t t93 = 18651798;

	t93 = (x409<=((x410%x411)*x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x414 = 28617614766LL;
	int8_t x415 = INT8_MIN;
	int32_t t94 = -1468279;

	t94 = (x413<=((x414%x415)*x416));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x421 = INT8_MIN;
	int32_t x422 = 3;
	int64_t x423 = INT64_MIN;
	volatile int8_t x424 = 1;

	t95 = (x421<=((x422%x423)*x424));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x425 = 1;
	int32_t x428 = 740;
	static int32_t t96 = 144535023;

	t96 = (x425<=((x426%x427)*x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x430 = UINT8_MAX;
	volatile uint8_t x431 = 1U;
	uint32_t x432 = UINT32_MAX;

	t97 = (x429<=((x430%x431)*x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x433 = 20928U;
	static int16_t x434 = 17;
	volatile uint32_t x435 = 693U;
	int32_t t98 = -172114;

	t98 = (x433<=((x434%x435)*x436));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x438 = 70U;
	uint8_t x439 = UINT8_MAX;
	int16_t x440 = 1;
	volatile int32_t t99 = 1522661;

	t99 = (x437<=((x438%x439)*x440));

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

