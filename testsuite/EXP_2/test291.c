#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
static volatile int32_t t1 = 1227;
int32_t x13 = -1;
int32_t t3 = -62839;
int32_t x24 = INT32_MIN;
int32_t t5 = -79692;
volatile uint64_t x27 = 0LLU;
int32_t x35 = -244;
int32_t t7 = 1390132;
uint32_t t8 = 2787U;
int64_t x53 = -31LL;
int32_t t11 = 7943972;
int32_t x63 = INT32_MAX;
uint64_t x77 = 1LLU;
static int64_t x81 = -1LL;
int8_t x85 = INT8_MIN;
int16_t x87 = INT16_MAX;
uint8_t x88 = 20U;
int32_t t17 = -128161;
volatile uint8_t x91 = 16U;
volatile int32_t t18 = -26;
int64_t x96 = INT64_MIN;
int64_t t19 = -1616210385LL;
static uint64_t x99 = UINT64_MAX;
static uint8_t x100 = UINT8_MAX;
int32_t x109 = -1;
volatile int16_t x111 = INT16_MIN;
volatile int16_t x112 = INT16_MIN;
volatile int64_t x129 = -1LL;
int8_t x130 = -1;
volatile uint64_t t26 = 1943LLU;
int32_t x133 = INT32_MIN;
volatile int64_t x136 = -104068LL;
int32_t x141 = INT32_MIN;
volatile int32_t t28 = 4030295;
static volatile int16_t x145 = INT16_MAX;
int8_t x151 = INT8_MAX;
int8_t x152 = INT8_MAX;
volatile int32_t x163 = INT32_MIN;
int8_t x166 = INT8_MIN;
int8_t x167 = INT8_MIN;
volatile uint16_t x177 = UINT16_MAX;
int16_t x179 = 5971;
int16_t x180 = -1;
static int32_t t36 = -37236611;
volatile int32_t x186 = -422311;
volatile int16_t x201 = -3;
int16_t x213 = INT16_MIN;
uint8_t x218 = UINT8_MAX;
volatile int16_t x220 = INT16_MIN;
uint16_t x221 = 11U;
int64_t t43 = -14198621901517LL;
uint16_t x232 = UINT16_MAX;
static volatile int64_t x239 = -21349865735LL;
int64_t x240 = -1LL;
int16_t x245 = INT16_MIN;
int32_t x250 = INT32_MIN;
static uint8_t x256 = UINT8_MAX;
int32_t t49 = -5524415;
int16_t x258 = INT16_MIN;
uint16_t x259 = 66U;
int16_t x263 = -1564;
int64_t x264 = -1LL;
static int64_t t51 = 8286LL;
uint32_t x267 = 76808U;
int64_t x276 = INT64_MAX;
volatile int64_t x279 = -4219598156367LL;
int32_t t56 = 573671811;
static int32_t x291 = 7023;
static int32_t x293 = -1356;
int16_t x305 = 11;
static int16_t x306 = 0;
uint8_t x308 = 3U;
int32_t t60 = 11183;
volatile uint32_t x310 = 21254U;
uint8_t x319 = 51U;
int16_t x324 = 93;
int8_t x325 = INT8_MAX;
uint8_t x326 = UINT8_MAX;
uint8_t x331 = 1U;
volatile uint8_t x337 = UINT8_MAX;
int16_t x339 = -3110;
static volatile int32_t x344 = INT32_MIN;
int64_t x351 = -16169494563LL;
int32_t x352 = INT32_MIN;
static int8_t x356 = INT8_MAX;
volatile int16_t x361 = INT16_MIN;
int64_t x370 = -14LL;
int8_t x373 = -1;
int32_t x374 = INT32_MAX;
uint16_t x375 = UINT16_MAX;
volatile int8_t x377 = INT8_MAX;
int8_t x384 = -1;
volatile int8_t x389 = INT8_MAX;
int32_t x390 = 123672465;
int32_t x392 = 5;
int32_t t78 = 31764043;
volatile uint8_t x393 = 40U;
int32_t t79 = 252;
volatile uint32_t x401 = 1007U;
int16_t x408 = -2745;
int32_t t82 = -9;
static uint16_t x416 = 4U;
static int32_t x421 = INT32_MAX;
static volatile uint64_t t86 = 83LLU;
int32_t x430 = 14871311;
int32_t x434 = INT32_MIN;
static int16_t x436 = INT16_MAX;
int64_t x442 = -1LL;
int16_t x444 = INT16_MAX;
int16_t x446 = -5673;
static uint64_t x457 = UINT64_MAX;
volatile uint32_t t93 = 11U;
uint8_t x464 = 3U;
static int8_t x470 = INT8_MIN;
uint16_t x473 = 263U;
static volatile int32_t t97 = 411;
uint16_t x488 = UINT16_MAX;


void f0(void) {
	uint16_t x1 = 12U;
	uint8_t x2 = 0U;
	int64_t x3 = -1LL;
	volatile int32_t t0 = -31724;

	t0 = ((x1<=(x2-x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	int64_t x6 = INT64_MIN;
	volatile int32_t x7 = -1;
	static int16_t x8 = -1;

	t1 = ((x5<=(x6-x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	uint8_t x10 = UINT8_MAX;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -1434280;

	t2 = ((x9<=(x10-x11))%x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 932786391;
	volatile uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MAX;

	t3 = ((x13<=(x14-x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	static int32_t t4 = 252874;

	t4 = ((x17<=(x18-x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	int8_t x22 = INT8_MIN;
	static uint32_t x23 = 2351U;

	t5 = ((x21<=(x22-x23))%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 545U;
	int8_t x26 = INT8_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -1LL;

	t6 = ((x25<=(x26-x27))%x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int16_t x34 = INT16_MAX;
	int16_t x36 = INT16_MIN;

	t7 = ((x33<=(x34-x35))%x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x37 = 1686LLU;
	int16_t x38 = -25;
	volatile int16_t x39 = INT16_MIN;
	uint32_t x40 = 3510U;

	t8 = ((x37<=(x38-x39))%x40);

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	static int32_t x43 = 7;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -345521;

	t9 = ((x41<=(x42-x43))%x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 12;
	volatile uint64_t x50 = 110479681LLU;
	int32_t x51 = INT32_MIN;
	int32_t x52 = 91;
	int32_t t10 = 26658869;

	t10 = ((x49<=(x50-x51))%x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x54 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	static int16_t x56 = -7307;

	t11 = ((x53<=(x54-x55))%x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	static uint64_t x58 = 6LLU;
	int32_t x59 = INT32_MAX;
	uint64_t x60 = 1820937660846218LLU;
	volatile uint64_t t12 = 56992751529128LLU;

	t12 = ((x57<=(x58-x59))%x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -10858;
	static int32_t x62 = INT32_MAX;
	uint16_t x64 = 5U;
	volatile int32_t t13 = -238316694;

	t13 = ((x61<=(x62-x63))%x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = UINT16_MAX;
	int8_t x70 = -20;
	volatile int16_t x71 = INT16_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t14 = 8043;

	t14 = ((x69<=(x70-x71))%x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x78 = UINT16_MAX;
	volatile int8_t x79 = INT8_MIN;
	volatile int16_t x80 = -7;
	int32_t t15 = 9;

	t15 = ((x77<=(x78-x79))%x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x82 = INT32_MIN;
	volatile int32_t x83 = -19540;
	int32_t x84 = -1;
	int32_t t16 = 224;

	t16 = ((x81<=(x82-x83))%x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x86 = 3162U;

	t17 = ((x85<=(x86-x87))%x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x89 = INT32_MIN;
	volatile int64_t x90 = INT64_MAX;
	int16_t x92 = -1;

	t18 = ((x89<=(x90-x91))%x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = -1;
	static int16_t x94 = -1;
	int8_t x95 = INT8_MIN;

	t19 = ((x93<=(x94-x95))%x96);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = INT64_MIN;
	uint64_t x98 = 0LLU;
	int32_t t20 = -584;

	t20 = ((x97<=(x98-x99))%x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = -1LL;
	static int32_t x102 = 943895429;
	static uint32_t x103 = 3U;
	uint16_t x104 = 711U;
	static int32_t t21 = 289883411;

	t21 = ((x101<=(x102-x103))%x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x110 = UINT64_MAX;
	int32_t t22 = -4796839;

	t22 = ((x109<=(x110-x111))%x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = 8;
	int16_t x114 = -1;
	int16_t x115 = -54;
	int32_t x116 = INT32_MIN;
	volatile int32_t t23 = -123;

	t23 = ((x113<=(x114-x115))%x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x117 = 2U;
	uint32_t x118 = UINT32_MAX;
	uint8_t x119 = UINT8_MAX;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t24 = 143U;

	t24 = ((x117<=(x118-x119))%x120);

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x122 = -11;
	volatile int64_t x123 = INT64_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t25 = 99;

	t25 = ((x121<=(x122-x123))%x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x131 = UINT8_MAX;
	static uint64_t x132 = 22773268341609561LLU;

	t26 = ((x129<=(x130-x131))%x132);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x134 = UINT64_MAX;
	volatile uint64_t x135 = UINT64_MAX;
	volatile int64_t t27 = -39112406LL;

	t27 = ((x133<=(x134-x135))%x136);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x142 = 112U;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;

	t28 = ((x141<=(x142-x143))%x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x146 = 245965U;
	uint32_t x147 = 1612U;
	int64_t x148 = -1LL;
	static volatile int64_t t29 = 12154399674683LL;

	t29 = ((x145<=(x146-x147))%x148);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = UINT16_MAX;
	volatile uint64_t x150 = 1LLU;
	int32_t t30 = 101;

	t30 = ((x149<=(x150-x151))%x152);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x153 = 3U;
	int16_t x154 = -14;
	int8_t x155 = -1;
	volatile int16_t x156 = -1643;
	volatile int32_t t31 = -21027096;

	t31 = ((x153<=(x154-x155))%x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x157 = -1;
	int16_t x158 = INT16_MAX;
	int8_t x159 = 18;
	static int16_t x160 = INT16_MAX;
	static volatile int32_t t32 = 87;

	t32 = ((x157<=(x158-x159))%x160);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x161 = UINT16_MAX;
	int64_t x162 = -1LL;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t33 = 1028596061072209841LLU;

	t33 = ((x161<=(x162-x163))%x164);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x165 = 25;
	static uint64_t x168 = 118LLU;
	static volatile uint64_t t34 = 1LLU;

	t34 = ((x165<=(x166-x167))%x168);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 23548354915350LLU;
	int32_t x174 = -1024758382;
	uint8_t x175 = UINT8_MAX;
	int32_t x176 = -1;
	int32_t t35 = -176473585;

	t35 = ((x173<=(x174-x175))%x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x178 = -9;

	t36 = ((x177<=(x178-x179))%x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x185 = -1;
	static uint8_t x187 = 13U;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t37 = -2695881;

	t37 = ((x185<=(x186-x187))%x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x193 = 74U;
	uint8_t x194 = 50U;
	int16_t x195 = 1;
	uint8_t x196 = 3U;
	volatile int32_t t38 = 3025889;

	t38 = ((x193<=(x194-x195))%x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x202 = -6;
	int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MAX;
	volatile int32_t t39 = -32783962;

	t39 = ((x201<=(x202-x203))%x204);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = INT64_MAX;
	int16_t x206 = 1;
	int64_t x207 = INT64_MAX;
	volatile int8_t x208 = 7;
	int32_t t40 = 87228;

	t40 = ((x205<=(x206-x207))%x208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x214 = -1;
	uint8_t x215 = 0U;
	int32_t x216 = 31;
	static int32_t t41 = 405270161;

	t41 = ((x213<=(x214-x215))%x216);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x217 = 1U;
	static int8_t x219 = 3;
	int32_t t42 = 225;

	t42 = ((x217<=(x218-x219))%x220);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x222 = 1022U;
	static int8_t x223 = INT8_MIN;
	volatile int64_t x224 = INT64_MIN;

	t43 = ((x221<=(x222-x223))%x224);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = INT32_MAX;
	uint16_t x226 = 319U;
	uint64_t x227 = UINT64_MAX;
	volatile int8_t x228 = -30;
	volatile int32_t t44 = 745;

	t44 = ((x225<=(x226-x227))%x228);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MIN;
	static int16_t x230 = INT16_MAX;
	int8_t x231 = 0;
	volatile int32_t t45 = -13915109;

	t45 = ((x229<=(x230-x231))%x232);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x237 = -1;
	int16_t x238 = 83;
	static int64_t t46 = -7814033270LL;

	t46 = ((x237<=(x238-x239))%x240);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x246 = -41;
	volatile int64_t x247 = INT64_MIN;
	static volatile uint64_t x248 = 29940LLU;
	volatile uint64_t t47 = 209LLU;

	t47 = ((x245<=(x246-x247))%x248);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = -1;
	volatile int64_t x251 = -1LL;
	int32_t x252 = INT32_MAX;
	volatile int32_t t48 = 11;

	t48 = ((x249<=(x250-x251))%x252);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = 51;
	uint8_t x254 = 0U;
	static int32_t x255 = -661;

	t49 = ((x253<=(x254-x255))%x256);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = INT8_MIN;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t50 = 563614;

	t50 = ((x257<=(x258-x259))%x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MIN;

	t51 = ((x261<=(x262-x263))%x264);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x265 = UINT32_MAX;
	static int32_t x266 = -1;
	static uint32_t x268 = 7248865U;
	uint32_t t52 = 2U;

	t52 = ((x265<=(x266-x267))%x268);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x269 = 4471;
	int16_t x270 = INT16_MAX;
	static volatile int32_t x271 = INT32_MAX;
	static volatile int64_t x272 = INT64_MAX;
	int64_t t53 = -81065557017LL;

	t53 = ((x269<=(x270-x271))%x272);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	int8_t x275 = -1;
	volatile int64_t t54 = 529783812237708LL;

	t54 = ((x273<=(x274-x275))%x276);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x277 = -3LL;
	uint32_t x278 = UINT32_MAX;
	int8_t x280 = 1;
	int32_t t55 = 1;

	t55 = ((x277<=(x278-x279))%x280);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x281 = -1;
	int8_t x282 = INT8_MIN;
	int8_t x283 = 1;
	int16_t x284 = -6;

	t56 = ((x281<=(x282-x283))%x284);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x285 = INT8_MAX;
	uint32_t x286 = 1070469677U;
	uint64_t x287 = 11LLU;
	int8_t x288 = INT8_MAX;
	volatile int32_t t57 = 45;

	t57 = ((x285<=(x286-x287))%x288);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = INT8_MIN;
	volatile uint8_t x290 = UINT8_MAX;
	int16_t x292 = -1;
	int32_t t58 = 1300928;

	t58 = ((x289<=(x290-x291))%x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t59 = 14;

	t59 = ((x293<=(x294-x295))%x296);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x307 = -24035;

	t60 = ((x305<=(x306-x307))%x308);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x309 = 7923U;
	static int8_t x311 = -1;
	volatile int16_t x312 = -1;
	int32_t t61 = 19627;

	t61 = ((x309<=(x310-x311))%x312);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x317 = INT64_MAX;
	int16_t x318 = -75;
	uint8_t x320 = 6U;
	int32_t t62 = -29;

	t62 = ((x317<=(x318-x319))%x320);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x321 = -1;
	int64_t x322 = -158965485LL;
	int8_t x323 = -1;
	int32_t t63 = -809184;

	t63 = ((x321<=(x322-x323))%x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x327 = 1828LLU;
	static uint16_t x328 = 7862U;
	volatile int32_t t64 = -3353;

	t64 = ((x325<=(x326-x327))%x328);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x329 = 1367721;
	uint32_t x330 = UINT32_MAX;
	int16_t x332 = INT16_MAX;
	int32_t t65 = 1;

	t65 = ((x329<=(x330-x331))%x332);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x338 = 1;
	static int32_t x340 = INT32_MIN;
	int32_t t66 = -6889915;

	t66 = ((x337<=(x338-x339))%x340);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x341 = 3U;
	int16_t x342 = INT16_MIN;
	volatile int32_t x343 = INT32_MIN;
	volatile int32_t t67 = -115238702;

	t67 = ((x341<=(x342-x343))%x344);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = INT32_MIN;
	uint8_t x350 = UINT8_MAX;
	int32_t t68 = 284082875;

	t68 = ((x349<=(x350-x351))%x352);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x353 = INT64_MAX;
	volatile int8_t x354 = -1;
	static volatile int8_t x355 = INT8_MAX;
	static int32_t t69 = -16;

	t69 = ((x353<=(x354-x355))%x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x357 = 4851253807999281141LLU;
	uint32_t x358 = UINT32_MAX;
	int64_t x359 = 16518821446LL;
	int32_t x360 = 12;
	int32_t t70 = -737172587;

	t70 = ((x357<=(x358-x359))%x360);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = -1;
	uint32_t x364 = 9U;
	volatile uint32_t t71 = 127U;

	t71 = ((x361<=(x362-x363))%x364);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = INT64_MAX;
	volatile int64_t x366 = -1LL;
	uint16_t x367 = UINT16_MAX;
	static int64_t x368 = INT64_MIN;
	static volatile int64_t t72 = 0LL;

	t72 = ((x365<=(x366-x367))%x368);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x369 = INT32_MIN;
	volatile uint32_t x371 = UINT32_MAX;
	int8_t x372 = -1;
	static volatile int32_t t73 = -6;

	t73 = ((x369<=(x370-x371))%x372);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x376 = -120769772407758587LL;
	int64_t t74 = 1LL;

	t74 = ((x373<=(x374-x375))%x376);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x378 = 13;
	static int8_t x379 = INT8_MIN;
	uint8_t x380 = 3U;
	volatile int32_t t75 = 42067;

	t75 = ((x377<=(x378-x379))%x380);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x381 = 316U;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = 3834645U;
	int32_t t76 = -429182669;

	t76 = ((x381<=(x382-x383))%x384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x385 = -35;
	int8_t x386 = INT8_MAX;
	static volatile int8_t x387 = INT8_MIN;
	static int64_t x388 = INT64_MIN;
	static volatile int64_t t77 = -1660661839294600492LL;

	t77 = ((x385<=(x386-x387))%x388);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x391 = 0;

	t78 = ((x389<=(x390-x391))%x392);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x394 = INT16_MIN;
	volatile uint8_t x395 = 3U;
	static volatile int16_t x396 = -2;

	t79 = ((x393<=(x394-x395))%x396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x397 = UINT16_MAX;
	volatile int32_t x398 = -2915;
	uint64_t x399 = 71456844726311LLU;
	uint16_t x400 = 3702U;
	volatile int32_t t80 = -851;

	t80 = ((x397<=(x398-x399))%x400);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x402 = -1;
	volatile uint16_t x403 = UINT16_MAX;
	static uint64_t x404 = UINT64_MAX;
	uint64_t t81 = 1225741722LLU;

	t81 = ((x401<=(x402-x403))%x404);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x405 = INT64_MIN;
	volatile uint8_t x406 = 31U;
	uint8_t x407 = 6U;

	t82 = ((x405<=(x406-x407))%x408);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x413 = INT8_MIN;
	static uint32_t x414 = 11U;
	uint16_t x415 = UINT16_MAX;
	volatile int32_t t83 = 1157;

	t83 = ((x413<=(x414-x415))%x416);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x417 = 6U;
	uint16_t x418 = 490U;
	int16_t x419 = -1;
	int32_t x420 = -4495445;
	int32_t t84 = -14929895;

	t84 = ((x417<=(x418-x419))%x420);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x422 = -1580;
	uint64_t x423 = UINT64_MAX;
	int64_t x424 = INT64_MIN;
	volatile int64_t t85 = -18531057485756801LL;

	t85 = ((x421<=(x422-x423))%x424);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x425 = INT64_MAX;
	uint32_t x426 = 59642306U;
	int8_t x427 = -2;
	volatile uint64_t x428 = 3LLU;

	t86 = ((x425<=(x426-x427))%x428);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x429 = -120890280918957041LL;
	uint64_t x431 = 124LLU;
	volatile int8_t x432 = INT8_MIN;
	volatile int32_t t87 = 57;

	t87 = ((x429<=(x430-x431))%x432);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x433 = 14317572272906LLU;
	volatile int8_t x435 = INT8_MIN;
	static volatile int32_t t88 = 143;

	t88 = ((x433<=(x434-x435))%x436);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x437 = 237463163LLU;
	static int8_t x438 = -1;
	int8_t x439 = -1;
	int16_t x440 = INT16_MAX;
	int32_t t89 = -2028072;

	t89 = ((x437<=(x438-x439))%x440);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x441 = 99968;
	uint16_t x443 = 210U;
	int32_t t90 = -44;

	t90 = ((x441<=(x442-x443))%x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x445 = 10245;
	int16_t x447 = INT16_MAX;
	volatile int64_t x448 = -1LL;
	volatile int64_t t91 = -1190300041LL;

	t91 = ((x445<=(x446-x447))%x448);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x449 = INT32_MIN;
	uint64_t x450 = 860042035790LLU;
	int8_t x451 = INT8_MIN;
	int32_t x452 = INT32_MIN;
	volatile int32_t t92 = 85475527;

	t92 = ((x449<=(x450-x451))%x452);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x458 = -2;
	static volatile uint16_t x459 = UINT16_MAX;
	uint32_t x460 = UINT32_MAX;

	t93 = ((x457<=(x458-x459))%x460);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x461 = 989830815U;
	int16_t x462 = INT16_MIN;
	int16_t x463 = -1;
	volatile int32_t t94 = 12;

	t94 = ((x461<=(x462-x463))%x464);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x465 = 0U;
	int16_t x466 = INT16_MAX;
	int32_t x467 = -949;
	int64_t x468 = -1LL;
	volatile int64_t t95 = -15759691730LL;

	t95 = ((x465<=(x466-x467))%x468);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x469 = INT16_MIN;
	volatile int8_t x471 = -1;
	volatile int8_t x472 = INT8_MAX;
	int32_t t96 = 272544003;

	t96 = ((x469<=(x470-x471))%x472);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x474 = INT16_MIN;
	int64_t x475 = INT64_MIN;
	int16_t x476 = INT16_MIN;

	t97 = ((x473<=(x474-x475))%x476);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x481 = INT32_MIN;
	uint32_t x482 = 3U;
	int64_t x483 = INT64_MAX;
	int16_t x484 = -1;
	volatile int32_t t98 = -65388;

	t98 = ((x481<=(x482-x483))%x484);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = 27LL;
	int16_t x486 = INT16_MIN;
	uint32_t x487 = 340573927U;
	volatile int32_t t99 = -3301603;

	t99 = ((x485<=(x486-x487))%x488);

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

