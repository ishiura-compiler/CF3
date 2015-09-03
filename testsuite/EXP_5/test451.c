#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x7 = 13867LLU;
uint16_t x13 = 81U;
static uint64_t x18 = 94970281064989LLU;
uint64_t x40 = UINT64_MAX;
static uint32_t x41 = 5178101U;
uint64_t x42 = 1737064172393970417LLU;
volatile uint32_t x45 = UINT32_MAX;
int16_t x46 = -1;
volatile int32_t t9 = 1687229;
int8_t x61 = 5;
volatile uint32_t x72 = 9U;
static uint64_t x75 = 7227LLU;
uint64_t x94 = UINT64_MAX;
int8_t x96 = 0;
int32_t x108 = INT32_MIN;
static int32_t t17 = 38066;
int64_t x112 = -1LL;
volatile int64_t x122 = -1LL;
uint64_t x123 = UINT64_MAX;
int8_t x130 = -2;
int32_t x134 = INT32_MAX;
int32_t t22 = -42;
int64_t x139 = INT64_MIN;
static volatile uint64_t x152 = 5620LLU;
int32_t x159 = 0;
int64_t x164 = -3914223575700746777LL;
int16_t x166 = -1201;
int32_t t27 = -36551421;
int8_t x177 = -1;
int32_t t29 = 202;
int32_t x190 = 7579;
int32_t x201 = 3;
volatile int32_t x203 = -1;
volatile int32_t x217 = INT32_MIN;
int8_t x220 = INT8_MIN;
int8_t x227 = INT8_MAX;
uint64_t x230 = 3LLU;
int32_t t41 = -195946;
static uint64_t x243 = 1353624437969654654LLU;
static int8_t x244 = 0;
volatile int32_t t42 = 1;
uint8_t x254 = UINT8_MAX;
uint64_t x256 = 3792764799960LLU;
volatile int32_t t43 = 0;
static int64_t x262 = -1LL;
volatile int16_t x271 = INT16_MIN;
int32_t t46 = -493119454;
static int8_t x275 = -1;
uint16_t x289 = UINT16_MAX;
static int64_t x292 = INT64_MIN;
int32_t t48 = 51579;
uint64_t x293 = 2252376523343704658LLU;
volatile int8_t x294 = INT8_MIN;
static volatile int32_t t49 = 5;
int16_t x299 = INT16_MIN;
int64_t x307 = -1LL;
volatile int32_t t54 = -2182;
int32_t x331 = INT32_MIN;
volatile int32_t t56 = 4;
uint16_t x338 = UINT16_MAX;
static int32_t t57 = -183;
uint8_t x345 = 19U;
int16_t x346 = INT16_MIN;
int8_t x351 = INT8_MIN;
int8_t x355 = INT8_MIN;
int32_t x359 = -1;
volatile int8_t x360 = INT8_MAX;
volatile int16_t x364 = INT16_MIN;
static uint64_t x367 = 874467240721LLU;
int32_t x368 = -1;
int32_t t63 = 1425;
static int32_t x372 = -1061;
int16_t x385 = -1;
static uint16_t x403 = UINT16_MAX;
static int64_t x404 = INT64_MAX;
uint64_t x408 = 29LLU;
volatile int32_t t71 = 220450;
int8_t x422 = INT8_MIN;
volatile int32_t t73 = -7;
int32_t t74 = 503274576;
uint32_t x437 = UINT32_MAX;
int32_t x439 = -3206533;
volatile int32_t t76 = 158290313;
int32_t t77 = 15994;
int32_t x468 = -55310675;
int8_t x469 = -1;
volatile int32_t t82 = 14127;
volatile int32_t t83 = 11791894;
int16_t x485 = INT16_MIN;
volatile int32_t t85 = 1;
int32_t t86 = -5;
int8_t x497 = INT8_MIN;
static int64_t x511 = -38179531938LL;
volatile int64_t x521 = INT64_MIN;
volatile int64_t x558 = -1LL;
static volatile int32_t t95 = 0;
uint64_t x568 = 1434LLU;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MAX;
	static int64_t x3 = -12801LL;
	static volatile int8_t x4 = 3;
	volatile int32_t t0 = 11;

	t0 = (x1<((x2*x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 3379331;
	uint64_t x6 = UINT64_MAX;
	static int64_t x8 = 5376890547999780LL;
	volatile int32_t t1 = 1078;

	t1 = (x5<((x6*x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MAX;
	int8_t x15 = -1;
	uint32_t x16 = 470657087U;
	volatile int32_t t2 = -58246;

	t2 = (x13<((x14*x15)<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -6446;
	uint8_t x19 = UINT8_MAX;
	int8_t x20 = -1;
	volatile int32_t t3 = 18498;

	t3 = (x17<((x18*x19)<x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 6U;
	int32_t x26 = -11282;
	static uint32_t x27 = 1706151U;
	uint64_t x28 = 2004087056573310LLU;
	static volatile int32_t t4 = 3308;

	t4 = (x25<((x26*x27)<x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	volatile uint64_t x34 = 2985456271431LLU;
	uint8_t x35 = UINT8_MAX;
	static volatile int8_t x36 = -1;
	int32_t t5 = 53;

	t5 = (x33<((x34*x35)<x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 10658921284478031LL;
	uint16_t x38 = 81U;
	static volatile uint64_t x39 = 113609808375392231LLU;
	int32_t t6 = -18989;

	t6 = (x37<((x38*x39)<x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t7 = -7438;

	t7 = (x41<((x42*x43)<x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x47 = -1;
	int8_t x48 = 15;
	volatile int32_t t8 = 5232;

	t8 = (x45<((x46*x47)<x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x49 = INT64_MIN;
	int16_t x50 = -5473;
	uint32_t x51 = 1391U;
	uint8_t x52 = 88U;

	t9 = (x49<((x50*x51)<x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x53 = 129U;
	int16_t x54 = -1;
	static int64_t x55 = -1LL;
	volatile uint16_t x56 = UINT16_MAX;
	static volatile int32_t t10 = 873850;

	t10 = (x53<((x54*x55)<x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = UINT8_MAX;
	uint8_t x58 = 9U;
	int8_t x59 = 57;
	int8_t x60 = INT8_MIN;
	volatile int32_t t11 = 804;

	t11 = (x57<((x58*x59)<x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = -1LL;
	uint32_t x63 = UINT32_MAX;
	uint64_t x64 = 2LLU;
	volatile int32_t t12 = 38;

	t12 = (x61<((x62*x63)<x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x69 = 72U;
	static int16_t x70 = INT16_MAX;
	uint64_t x71 = 372849460234LLU;
	int32_t t13 = -6;

	t13 = (x69<((x70*x71)<x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 65480325LLU;
	int16_t x74 = -7;
	int32_t x76 = INT32_MIN;
	int32_t t14 = -1;

	t14 = (x73<((x74*x75)<x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 4868036797000LLU;
	uint32_t x78 = 0U;
	uint64_t x79 = 352466194LLU;
	volatile int16_t x80 = -1;
	volatile int32_t t15 = 975168;

	t15 = (x77<((x78*x79)<x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x93 = -90;
	int8_t x95 = -3;
	volatile int32_t t16 = 3112;

	t16 = (x93<((x94*x95)<x96));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x105 = INT32_MIN;
	static volatile uint32_t x106 = 4138U;
	int8_t x107 = INT8_MIN;

	t17 = (x105<((x106*x107)<x108));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x109 = -1;
	volatile int32_t x110 = INT32_MIN;
	uint64_t x111 = 67LLU;
	int32_t t18 = 145827338;

	t18 = (x109<((x110*x111)<x112));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x121 = 32164U;
	int64_t x124 = -1LL;
	static volatile int32_t t19 = 1120;

	t19 = (x121<((x122*x123)<x124));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x125 = INT32_MAX;
	volatile int8_t x126 = -1;
	static uint16_t x127 = UINT16_MAX;
	uint64_t x128 = 7948893297562732904LLU;
	int32_t t20 = -65832695;

	t20 = (x125<((x126*x127)<x128));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = INT8_MAX;
	uint16_t x131 = UINT16_MAX;
	volatile uint8_t x132 = 1U;
	static int32_t t21 = 469688;

	t21 = (x129<((x130*x131)<x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = -1;
	static int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;

	t22 = (x133<((x134*x135)<x136));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x137 = INT32_MAX;
	uint64_t x138 = UINT64_MAX;
	static int64_t x140 = INT64_MIN;
	volatile int32_t t23 = -718306786;

	t23 = (x137<((x138*x139)<x140));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x149 = 3470485568337883LL;
	static int32_t x150 = -2491856;
	uint64_t x151 = 7097LLU;
	volatile int32_t t24 = -7946218;

	t24 = (x149<((x150*x151)<x152));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x157 = -1;
	volatile int32_t x158 = INT32_MIN;
	int32_t x160 = INT32_MAX;
	static volatile int32_t t25 = 15809;

	t25 = (x157<((x158*x159)<x160));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x161 = 139LLU;
	static uint32_t x162 = 195077U;
	int32_t x163 = -1;
	static volatile int32_t t26 = 22581930;

	t26 = (x161<((x162*x163)<x164));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x165 = INT64_MAX;
	int64_t x167 = -919417224LL;
	int16_t x168 = INT16_MIN;

	t27 = (x165<((x166*x167)<x168));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x173 = INT16_MAX;
	uint32_t x174 = 54U;
	uint32_t x175 = 249U;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t28 = -660;

	t28 = (x173<((x174*x175)<x176));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x178 = 0;
	static int32_t x179 = -47;
	static uint64_t x180 = 235385LLU;

	t29 = (x177<((x178*x179)<x180));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = -1509688038508LL;
	static uint8_t x186 = 0U;
	int8_t x187 = -1;
	static uint16_t x188 = 23U;
	int32_t t30 = -423421;

	t30 = (x185<((x186*x187)<x188));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x189 = UINT8_MAX;
	uint64_t x191 = UINT64_MAX;
	static uint16_t x192 = UINT16_MAX;
	volatile int32_t t31 = 90749362;

	t31 = (x189<((x190*x191)<x192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x194 = 16483LLU;
	uint64_t x195 = 41480538LLU;
	uint64_t x196 = 13523009422882LLU;
	volatile int32_t t32 = -461260685;

	t32 = (x193<((x194*x195)<x196));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x197 = 6U;
	int16_t x198 = INT16_MIN;
	static uint8_t x199 = 1U;
	volatile int64_t x200 = -1LL;
	volatile int32_t t33 = 2292;

	t33 = (x197<((x198*x199)<x200));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x202 = 42038556U;
	uint32_t x204 = 364834706U;
	volatile int32_t t34 = -713676;

	t34 = (x201<((x202*x203)<x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int16_t x206 = -704;
	volatile uint16_t x207 = UINT16_MAX;
	int32_t x208 = INT32_MIN;
	volatile int32_t t35 = -63201;

	t35 = (x205<((x206*x207)<x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x210 = 0U;
	int8_t x211 = 1;
	int16_t x212 = -1;
	volatile int32_t t36 = 335997;

	t36 = (x209<((x210*x211)<x212));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x213 = 1;
	volatile int16_t x214 = 2389;
	static int16_t x215 = -1;
	static int64_t x216 = INT64_MAX;
	volatile int32_t t37 = 1219;

	t37 = (x213<((x214*x215)<x216));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x218 = -1LL;
	int64_t x219 = 23213717LL;
	volatile int32_t t38 = -13348805;

	t38 = (x217<((x218*x219)<x220));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x221 = -1;
	static int32_t x222 = INT32_MIN;
	uint16_t x223 = 0U;
	int32_t x224 = 14;
	volatile int32_t t39 = -29;

	t39 = (x221<((x222*x223)<x224));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x225 = 216U;
	uint64_t x226 = 104887217708725749LLU;
	int64_t x228 = INT64_MIN;
	volatile int32_t t40 = 2183895;

	t40 = (x225<((x226*x227)<x228));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = INT8_MIN;
	int64_t x231 = -1LL;
	static int32_t x232 = INT32_MIN;

	t41 = (x229<((x230*x231)<x232));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = INT8_MAX;
	static uint16_t x242 = UINT16_MAX;

	t42 = (x241<((x242*x243)<x244));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x255 = -62LL;

	t43 = (x253<((x254*x255)<x256));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x257 = 1U;
	int8_t x258 = INT8_MIN;
	static uint32_t x259 = 16677U;
	static volatile uint64_t x260 = 3298LLU;
	int32_t t44 = 11470;

	t44 = (x257<((x258*x259)<x260));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x261 = UINT32_MAX;
	int32_t x263 = INT32_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t45 = 26;

	t45 = (x261<((x262*x263)<x264));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x269 = 4398U;
	static int16_t x270 = -14753;
	uint32_t x272 = 1038234107U;

	t46 = (x269<((x270*x271)<x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x273 = 0U;
	uint32_t x274 = UINT32_MAX;
	static uint64_t x276 = 380406632750LLU;
	volatile int32_t t47 = -54319;

	t47 = (x273<((x274*x275)<x276));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = 2;

	t48 = (x289<((x290*x291)<x292));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x295 = INT16_MIN;
	int64_t x296 = 7326236599LL;

	t49 = (x293<((x294*x295)<x296));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x297 = INT8_MIN;
	int8_t x298 = 1;
	static int64_t x300 = -378821LL;
	volatile int32_t t50 = -1033836;

	t50 = (x297<((x298*x299)<x300));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x301 = INT32_MIN;
	uint8_t x302 = 10U;
	uint16_t x303 = 31U;
	static uint16_t x304 = UINT16_MAX;
	volatile int32_t t51 = -208;

	t51 = (x301<((x302*x303)<x304));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x308 = 13017729869852LLU;
	volatile int32_t t52 = 561;

	t52 = (x305<((x306*x307)<x308));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MAX;
	static uint32_t x319 = UINT32_MAX;
	volatile int32_t x320 = 0;
	volatile int32_t t53 = -231986566;

	t53 = (x317<((x318*x319)<x320));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x325 = INT8_MIN;
	int8_t x326 = 0;
	static int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MIN;

	t54 = (x325<((x326*x327)<x328));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = 1;
	volatile int64_t x332 = -1LL;
	static volatile int32_t t55 = 0;

	t55 = (x329<((x330*x331)<x332));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x333 = INT8_MIN;
	uint32_t x334 = 59U;
	uint8_t x335 = 2U;
	int32_t x336 = -60730786;

	t56 = (x333<((x334*x335)<x336));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x337 = -4625;
	uint8_t x339 = 19U;
	uint8_t x340 = 11U;

	t57 = (x337<((x338*x339)<x340));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MAX;
	static int32_t t58 = -211008471;

	t58 = (x345<((x346*x347)<x348));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = 2;
	uint64_t x352 = UINT64_MAX;
	static volatile int32_t t59 = 271345;

	t59 = (x349<((x350*x351)<x352));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x353 = 19665U;
	static int32_t x354 = -23732;
	int32_t x356 = -1;
	volatile int32_t t60 = 27757175;

	t60 = (x353<((x354*x355)<x356));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x357 = INT64_MAX;
	static volatile int16_t x358 = INT16_MIN;
	int32_t t61 = -13;

	t61 = (x357<((x358*x359)<x360));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = -1;
	static volatile int32_t x363 = -1;
	int32_t t62 = -255985945;

	t62 = (x361<((x362*x363)<x364));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x365 = -27034365;
	uint16_t x366 = 3169U;

	t63 = (x365<((x366*x367)<x368));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x369 = UINT8_MAX;
	static volatile uint8_t x370 = 103U;
	static int16_t x371 = 2374;
	volatile int32_t t64 = -25;

	t64 = (x369<((x370*x371)<x372));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x377 = INT64_MAX;
	int16_t x378 = INT16_MIN;
	uint32_t x379 = 79U;
	uint8_t x380 = UINT8_MAX;
	int32_t t65 = 0;

	t65 = (x377<((x378*x379)<x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x386 = -1;
	int8_t x387 = -6;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t66 = -1044061;

	t66 = (x385<((x386*x387)<x388));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x389 = INT8_MAX;
	int16_t x390 = INT16_MAX;
	volatile int8_t x391 = -1;
	static int16_t x392 = INT16_MIN;
	static volatile int32_t t67 = 1;

	t67 = (x389<((x390*x391)<x392));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x393 = -1LL;
	int64_t x394 = 5791984399523809LL;
	volatile int8_t x395 = -1;
	uint8_t x396 = 2U;
	static int32_t t68 = 28;

	t68 = (x393<((x394*x395)<x396));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	volatile int32_t t69 = -37651491;

	t69 = (x401<((x402*x403)<x404));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x405 = -12515640;
	int32_t x406 = -6071;
	uint32_t x407 = 405U;
	volatile int32_t t70 = 3111;

	t70 = (x405<((x406*x407)<x408));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x409 = 9272U;
	int8_t x410 = 0;
	int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MAX;

	t71 = (x409<((x410*x411)<x412));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x417 = 27663U;
	volatile int8_t x418 = -1;
	uint8_t x419 = 2U;
	volatile int32_t x420 = 22464;
	volatile int32_t t72 = -7;

	t72 = (x417<((x418*x419)<x420));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x421 = 43U;
	uint64_t x423 = 80100LLU;
	int64_t x424 = -1LL;

	t73 = (x421<((x422*x423)<x424));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x429 = INT32_MIN;
	int8_t x430 = INT8_MIN;
	int16_t x431 = -1;
	volatile int8_t x432 = -2;

	t74 = (x429<((x430*x431)<x432));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x433 = 92U;
	uint8_t x434 = UINT8_MAX;
	uint64_t x435 = 3273536141034040LLU;
	int32_t x436 = INT32_MIN;
	int32_t t75 = -604941724;

	t75 = (x433<((x434*x435)<x436));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x438 = -1;
	int8_t x440 = 61;

	t76 = (x437<((x438*x439)<x440));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x441 = 34159543U;
	static volatile int16_t x442 = -3;
	uint16_t x443 = 19577U;
	static int8_t x444 = 22;

	t77 = (x441<((x442*x443)<x444));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x445 = UINT16_MAX;
	int8_t x446 = INT8_MIN;
	volatile uint64_t x447 = 1580LLU;
	volatile int32_t x448 = 5;
	int32_t t78 = -13;

	t78 = (x445<((x446*x447)<x448));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x457 = 1749324162918816223LLU;
	volatile int16_t x458 = INT16_MAX;
	static uint16_t x459 = UINT16_MAX;
	int32_t x460 = -6274018;
	volatile int32_t t79 = -36015;

	t79 = (x457<((x458*x459)<x460));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x461 = -1;
	volatile int64_t x462 = -1LL;
	static int8_t x463 = 3;
	volatile int8_t x464 = INT8_MIN;
	int32_t t80 = -272874296;

	t80 = (x461<((x462*x463)<x464));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x465 = 238LLU;
	static uint16_t x466 = 4473U;
	int32_t x467 = -403094;
	static int32_t t81 = -205;

	t81 = (x465<((x466*x467)<x468));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x470 = -122300175155LL;
	int32_t x471 = -1;
	volatile uint16_t x472 = UINT16_MAX;

	t82 = (x469<((x470*x471)<x472));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x481 = INT32_MAX;
	static int8_t x482 = 0;
	static int16_t x483 = INT16_MIN;
	int32_t x484 = -1;

	t83 = (x481<((x482*x483)<x484));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x486 = INT16_MIN;
	int32_t x487 = -10281;
	volatile int32_t x488 = INT32_MIN;
	int32_t t84 = -73;

	t84 = (x485<((x486*x487)<x488));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x489 = 1;
	uint16_t x490 = 100U;
	int64_t x491 = -2448603460327513LL;
	uint64_t x492 = 3430706423085LLU;

	t85 = (x489<((x490*x491)<x492));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x493 = INT16_MAX;
	uint64_t x494 = 12105969636833998LLU;
	static uint32_t x495 = 268075U;
	int16_t x496 = -192;

	t86 = (x493<((x494*x495)<x496));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x498 = -1;
	volatile uint32_t x499 = 29771U;
	int32_t x500 = INT32_MAX;
	volatile int32_t t87 = 3;

	t87 = (x497<((x498*x499)<x500));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x509 = INT64_MIN;
	static uint64_t x510 = UINT64_MAX;
	static int64_t x512 = 6524LL;
	static int32_t t88 = 3;

	t88 = (x509<((x510*x511)<x512));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x517 = INT8_MIN;
	int64_t x518 = 530030LL;
	static int64_t x519 = -1787LL;
	volatile int16_t x520 = -81;
	static int32_t t89 = 3358;

	t89 = (x517<((x518*x519)<x520));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x522 = -1;
	uint32_t x523 = UINT32_MAX;
	uint8_t x524 = 22U;
	static volatile int32_t t90 = 0;

	t90 = (x521<((x522*x523)<x524));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x529 = -1;
	int16_t x530 = -624;
	int16_t x531 = -1;
	int8_t x532 = INT8_MAX;
	volatile int32_t t91 = -297601;

	t91 = (x529<((x530*x531)<x532));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x533 = INT32_MIN;
	int16_t x534 = -46;
	uint16_t x535 = 2U;
	static volatile int16_t x536 = -1;
	volatile int32_t t92 = 131913893;

	t92 = (x533<((x534*x535)<x536));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x545 = 30;
	static int64_t x546 = 1062737LL;
	int8_t x547 = INT8_MAX;
	int16_t x548 = -1;
	volatile int32_t t93 = 3103;

	t93 = (x545<((x546*x547)<x548));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x553 = 2LLU;
	static uint8_t x554 = 78U;
	static uint8_t x555 = UINT8_MAX;
	volatile int32_t x556 = INT32_MIN;
	static volatile int32_t t94 = 730;

	t94 = (x553<((x554*x555)<x556));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x557 = INT16_MAX;
	volatile int32_t x559 = INT32_MAX;
	int64_t x560 = INT64_MIN;

	t95 = (x557<((x558*x559)<x560));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x561 = 39535638368336900LLU;
	static uint32_t x562 = 9163976U;
	uint16_t x563 = 0U;
	static uint16_t x564 = 10677U;
	volatile int32_t t96 = 208;

	t96 = (x561<((x562*x563)<x564));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x565 = INT64_MAX;
	volatile uint32_t x566 = 228993U;
	int32_t x567 = INT32_MIN;
	int32_t t97 = -47296326;

	t97 = (x565<((x566*x567)<x568));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x569 = UINT64_MAX;
	uint8_t x570 = 0U;
	int64_t x571 = INT64_MIN;
	int32_t x572 = 2986576;
	volatile int32_t t98 = 494358;

	t98 = (x569<((x570*x571)<x572));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x573 = INT8_MIN;
	volatile int8_t x574 = INT8_MIN;
	static int8_t x575 = -3;
	uint16_t x576 = UINT16_MAX;
	static volatile int32_t t99 = 520318590;

	t99 = (x573<((x574*x575)<x576));

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

