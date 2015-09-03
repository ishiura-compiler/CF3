#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
uint32_t x5 = 3654818U;
static uint64_t x17 = 11354568021LLU;
uint8_t x21 = UINT8_MAX;
int8_t x26 = -1;
volatile uint16_t x27 = 10U;
int64_t t6 = -7173467409758906LL;
volatile int32_t t7 = 160715;
int64_t x40 = INT64_MAX;
int64_t t10 = -27332774LL;
static uint16_t x52 = 36U;
volatile int32_t t13 = 111;
volatile uint64_t x65 = UINT64_MAX;
volatile int32_t t15 = -1570025;
static uint16_t x93 = 28985U;
static volatile int32_t t21 = -496;
static uint32_t x100 = 770U;
volatile uint64_t t27 = 714671LLU;
static int64_t x136 = INT64_MIN;
static int16_t x137 = 64;
volatile uint32_t t33 = 1402023429U;
uint32_t x145 = 58336245U;
volatile int8_t x147 = -1;
volatile int32_t t35 = -7;
static int8_t x159 = -5;
volatile int64_t x161 = -1LL;
int8_t x166 = INT8_MIN;
uint8_t x169 = 25U;
int32_t t39 = -586991;
int32_t t40 = -281;
int8_t x179 = INT8_MIN;
int16_t x189 = INT16_MIN;
uint32_t x196 = 11229923U;
volatile uint16_t x200 = 1514U;
int8_t x202 = -53;
int32_t t46 = 1;
static volatile int8_t x210 = INT8_MIN;
int8_t x216 = INT8_MIN;
volatile int32_t t49 = -2;
int64_t x218 = INT64_MIN;
int8_t x223 = -1;
uint16_t x229 = UINT16_MAX;
int32_t x230 = INT32_MIN;
int32_t x231 = INT32_MIN;
uint16_t x232 = UINT16_MAX;
int32_t t53 = 626987;
uint64_t t54 = 3LLU;
uint16_t x244 = 31460U;
volatile int8_t x248 = -1;
int8_t x250 = 2;
uint64_t x253 = UINT64_MAX;
int32_t x257 = 504515;
uint8_t x258 = 108U;
uint64_t x265 = UINT64_MAX;
int8_t x267 = -1;
uint64_t x272 = 3LLU;
volatile int64_t x278 = INT64_MIN;
int32_t x279 = INT32_MIN;
uint16_t x281 = 20U;
int32_t x287 = 120457084;
static int64_t x290 = INT64_MIN;
uint16_t x292 = 16U;
volatile int16_t x295 = INT16_MIN;
int64_t x296 = -1LL;
volatile int64_t x298 = -370410762671451LL;
volatile uint16_t x300 = UINT16_MAX;
volatile int32_t t69 = 859803204;
volatile int32_t t70 = -1;
int16_t x310 = INT16_MAX;
int64_t x315 = -2LL;
uint64_t x321 = 6955689LLU;
int64_t x323 = INT64_MIN;
static uint16_t x335 = 41U;
volatile int8_t x338 = -1;
uint16_t x340 = 7489U;
int32_t x353 = INT32_MIN;
static volatile uint32_t t84 = 118557165U;
uint16_t x363 = UINT16_MAX;
int16_t x365 = INT16_MIN;
int64_t x366 = INT64_MIN;
uint32_t x370 = 15U;
volatile int32_t x371 = -44787;
static uint32_t x373 = 3U;
int8_t x374 = INT8_MIN;
int32_t x376 = INT32_MAX;
volatile uint16_t x378 = 7754U;
uint8_t x385 = 2U;
static uint16_t x386 = 4919U;
int8_t x388 = -24;
volatile int64_t x394 = 276624969545LL;
int8_t x406 = INT8_MIN;
int32_t x413 = INT32_MAX;
int64_t x415 = INT64_MIN;
static int32_t x417 = INT32_MIN;
volatile int16_t x418 = INT16_MIN;
int32_t t99 = 203790;


void f0(void) {
	uint8_t x1 = 0U;
	int16_t x3 = INT16_MAX;
	static int64_t x4 = -1LL;
	static volatile int64_t t0 = 833440062596237012LL;

	t0 = ((x1==(x2%x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	uint16_t x7 = UINT16_MAX;
	int64_t x8 = INT64_MAX;
	static volatile int64_t t1 = 146093867654196LL;

	t1 = ((x5==(x6%x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 3607;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	int16_t x16 = 1777;
	int32_t t2 = -1;

	t2 = ((x13==(x14%x15))%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = -7382563722946967LL;
	int16_t x19 = 10;
	uint16_t x20 = 7555U;
	int32_t t3 = -16744645;

	t3 = ((x17==(x18%x19))%x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	uint16_t x23 = 11U;
	int16_t x24 = INT16_MAX;
	int32_t t4 = -196472;

	t4 = ((x21==(x22%x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	int32_t x28 = INT32_MAX;
	volatile int32_t t5 = -11;

	t5 = ((x25==(x26%x27))%x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -2;
	static uint8_t x30 = 15U;
	volatile int32_t x31 = -1;
	int64_t x32 = INT64_MIN;

	t6 = ((x29==(x30%x31))%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	volatile int64_t x34 = -840814499301LL;
	int64_t x35 = INT64_MIN;
	int16_t x36 = 7058;

	t7 = ((x33==(x34%x35))%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1815;
	volatile int8_t x38 = INT8_MIN;
	volatile int8_t x39 = 35;
	int64_t t8 = 1LL;

	t8 = ((x37==(x38%x39))%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 39422676LLU;
	int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MAX;
	int64_t t9 = -432543460LL;

	t9 = ((x41==(x42%x43))%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MAX;
	static int64_t x46 = INT64_MAX;
	static uint32_t x47 = 164882U;
	static volatile int64_t x48 = -1LL;

	t10 = ((x45==(x46%x47))%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 0;
	volatile int64_t x50 = -1LL;
	int16_t x51 = 29;
	volatile int32_t t11 = -1;

	t11 = ((x49==(x50%x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	static volatile int64_t x54 = -1LL;
	volatile int64_t x55 = -447LL;
	volatile int16_t x56 = -1;
	static volatile int32_t t12 = -17697;

	t12 = ((x53==(x54%x55))%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	volatile int32_t x58 = 44;
	volatile int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;

	t13 = ((x57==(x58%x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x66 = 0;
	volatile int16_t x67 = INT16_MIN;
	volatile int8_t x68 = 62;
	int32_t t14 = -622808;

	t14 = ((x65==(x66%x67))%x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	uint8_t x70 = UINT8_MAX;
	uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MAX;

	t15 = ((x69==(x70%x71))%x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x73 = UINT8_MAX;
	uint16_t x74 = 3U;
	volatile uint8_t x75 = 24U;
	uint8_t x76 = 17U;
	int32_t t16 = 2109;

	t16 = ((x73==(x74%x75))%x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -10683;
	int64_t x78 = -58331LL;
	uint64_t x79 = 1341466936143064732LLU;
	int32_t x80 = INT32_MIN;
	volatile int32_t t17 = 9994;

	t17 = ((x77==(x78%x79))%x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 1;
	int8_t x82 = INT8_MIN;
	volatile uint64_t x83 = 86835826LLU;
	int16_t x84 = -1;
	int32_t t18 = 3;

	t18 = ((x81==(x82%x83))%x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x85 = INT16_MAX;
	int64_t x86 = INT64_MAX;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = 987342U;
	uint32_t t19 = 6443069U;

	t19 = ((x85==(x86%x87))%x88);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	volatile uint32_t x90 = 16153238U;
	int16_t x91 = -1081;
	uint16_t x92 = 12122U;
	int32_t t20 = 15976;

	t20 = ((x89==(x90%x91))%x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x94 = INT64_MIN;
	uint16_t x95 = 27501U;
	static int32_t x96 = 20560;

	t21 = ((x93==(x94%x95))%x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = -4;
	uint64_t x98 = UINT64_MAX;
	volatile uint16_t x99 = 1U;
	volatile uint32_t t22 = 5984U;

	t22 = ((x97==(x98%x99))%x100);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 6U;
	int8_t x102 = 1;
	int16_t x103 = -10;
	int8_t x104 = -1;
	volatile int32_t t23 = 0;

	t23 = ((x101==(x102%x103))%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x105 = UINT32_MAX;
	static int32_t x106 = 581885;
	uint16_t x107 = 33U;
	volatile uint16_t x108 = 90U;
	int32_t t24 = 131664117;

	t24 = ((x105==(x106%x107))%x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 12958U;
	uint16_t x110 = 1403U;
	uint16_t x111 = 990U;
	int8_t x112 = -6;
	int32_t t25 = -42828;

	t25 = ((x109==(x110%x111))%x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 61U;
	static uint16_t x114 = UINT16_MAX;
	volatile uint16_t x115 = 265U;
	int16_t x116 = -268;
	volatile int32_t t26 = -897;

	t26 = ((x113==(x114%x115))%x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -2813610LL;
	int32_t x118 = 1811;
	uint32_t x119 = UINT32_MAX;
	uint64_t x120 = 506LLU;

	t27 = ((x117==(x118%x119))%x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x121 = UINT32_MAX;
	volatile int8_t x122 = INT8_MIN;
	volatile int8_t x123 = -1;
	int64_t x124 = INT64_MAX;
	static int64_t t28 = 0LL;

	t28 = ((x121==(x122%x123))%x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x125 = UINT16_MAX;
	volatile uint8_t x126 = 10U;
	int32_t x127 = -275689;
	int32_t x128 = -37413629;
	volatile int32_t t29 = 4;

	t29 = ((x125==(x126%x127))%x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = INT8_MIN;
	static uint8_t x130 = 37U;
	int64_t x131 = -1LL;
	uint8_t x132 = UINT8_MAX;
	int32_t t30 = 73720;

	t30 = ((x129==(x130%x131))%x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -102;
	static int8_t x134 = 26;
	int8_t x135 = -19;
	volatile int64_t t31 = 9541425975LL;

	t31 = ((x133==(x134%x135))%x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x138 = -28;
	volatile int16_t x139 = -234;
	volatile int64_t x140 = INT64_MIN;
	static int64_t t32 = -3LL;

	t32 = ((x137==(x138%x139))%x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x141 = 11U;
	static int64_t x142 = INT64_MIN;
	int8_t x143 = 3;
	uint32_t x144 = 175774U;

	t33 = ((x141==(x142%x143))%x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = INT64_MIN;
	uint64_t x148 = 3633LLU;
	volatile uint64_t t34 = 11LLU;

	t34 = ((x145==(x146%x147))%x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -2671802;
	int16_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MAX;

	t35 = ((x149==(x150%x151))%x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = -1;
	uint16_t x158 = 26U;
	static uint32_t x160 = UINT32_MAX;
	volatile uint32_t t36 = 140152027U;

	t36 = ((x157==(x158%x159))%x160);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x162 = -206LL;
	static uint64_t x163 = 106LLU;
	uint64_t x164 = 32LLU;
	uint64_t t37 = 368544559568849LLU;

	t37 = ((x161==(x162%x163))%x164);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MIN;
	int8_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	static volatile uint64_t t38 = 7748967223640364581LLU;

	t38 = ((x165==(x166%x167))%x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x170 = -1;
	static int64_t x171 = INT64_MIN;
	volatile int32_t x172 = -1;

	t39 = ((x169==(x170%x171))%x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -1;
	uint64_t x174 = UINT64_MAX;
	volatile int32_t x175 = 419;
	uint8_t x176 = UINT8_MAX;

	t40 = ((x173==(x174%x175))%x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 1U;
	volatile uint16_t x178 = 5865U;
	static uint64_t x180 = 27464285LLU;
	uint64_t t41 = 15704486LLU;

	t41 = ((x177==(x178%x179))%x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = -1LL;
	int64_t x182 = INT64_MIN;
	uint16_t x183 = 893U;
	static volatile int8_t x184 = 7;
	int32_t t42 = -644711484;

	t42 = ((x181==(x182%x183))%x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = 3202;
	uint16_t x191 = 799U;
	int8_t x192 = 31;
	int32_t t43 = 80530672;

	t43 = ((x189==(x190%x191))%x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 183U;
	uint8_t x194 = 2U;
	volatile uint64_t x195 = UINT64_MAX;
	static uint32_t t44 = 195U;

	t44 = ((x193==(x194%x195))%x196);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x197 = -37598LL;
	int8_t x198 = 0;
	int16_t x199 = -1;
	static volatile int32_t t45 = -140;

	t45 = ((x197==(x198%x199))%x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x201 = INT8_MIN;
	uint64_t x203 = UINT64_MAX;
	uint8_t x204 = 38U;

	t46 = ((x201==(x202%x203))%x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MIN;
	uint16_t x206 = 1U;
	int32_t x207 = -1;
	uint32_t x208 = 16214U;
	uint32_t t47 = 206799U;

	t47 = ((x205==(x206%x207))%x208);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x209 = 962689569U;
	uint32_t x211 = 925413502U;
	uint8_t x212 = 63U;
	volatile int32_t t48 = -27;

	t48 = ((x209==(x210%x211))%x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = 858211965318138LL;
	int32_t x215 = 526503476;

	t49 = ((x213==(x214%x215))%x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = -1;
	static volatile int32_t x219 = INT32_MAX;
	volatile uint64_t x220 = 133971555072111213LLU;
	static volatile uint64_t t50 = 3109463353LLU;

	t50 = ((x217==(x218%x219))%x220);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x221 = -1LL;
	static uint8_t x222 = 1U;
	volatile uint64_t x224 = UINT64_MAX;
	volatile uint64_t t51 = 249786340762864173LLU;

	t51 = ((x221==(x222%x223))%x224);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	static uint8_t x226 = UINT8_MAX;
	volatile int64_t x227 = -8348006783LL;
	int16_t x228 = INT16_MIN;
	int32_t t52 = 226;

	t52 = ((x225==(x226%x227))%x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {


	t53 = ((x229==(x230%x231))%x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = UINT8_MAX;
	static uint16_t x234 = UINT16_MAX;
	volatile int8_t x235 = INT8_MAX;
	volatile uint64_t x236 = 5745605LLU;

	t54 = ((x233==(x234%x235))%x236);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = 0;
	volatile int16_t x242 = INT16_MAX;
	static int32_t x243 = -163376;
	static int32_t t55 = 6483649;

	t55 = ((x241==(x242%x243))%x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x245 = -94846577;
	int8_t x246 = INT8_MIN;
	static int8_t x247 = INT8_MIN;
	static int32_t t56 = 61337;

	t56 = ((x245==(x246%x247))%x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = 242337196;
	volatile int64_t x251 = -1LL;
	int64_t x252 = -1LL;
	int64_t t57 = 1145356762414LL;

	t57 = ((x249==(x250%x251))%x252);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x254 = INT64_MIN;
	int8_t x255 = 10;
	volatile int8_t x256 = -51;
	volatile int32_t t58 = 1;

	t58 = ((x253==(x254%x255))%x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x259 = 16343036069LLU;
	int64_t x260 = -1LL;
	static int64_t t59 = -33LL;

	t59 = ((x257==(x258%x259))%x260);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 1843U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t60 = -22485995LL;

	t60 = ((x261==(x262%x263))%x264);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x266 = 53507365309207493LL;
	uint64_t x268 = 3320LLU;
	static uint64_t t61 = 524599179LLU;

	t61 = ((x265==(x266%x267))%x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = UINT8_MAX;
	uint8_t x270 = 17U;
	static volatile uint32_t x271 = 1826589252U;
	volatile uint64_t t62 = 7588951LLU;

	t62 = ((x269==(x270%x271))%x272);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x273 = -1;
	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	int8_t x276 = -43;
	volatile int32_t t63 = -226;

	t63 = ((x273==(x274%x275))%x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	int16_t x280 = 172;
	int32_t t64 = -7;

	t64 = ((x277==(x278%x279))%x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x282 = 149LL;
	static uint16_t x283 = UINT16_MAX;
	static uint16_t x284 = 1U;
	volatile int32_t t65 = -962;

	t65 = ((x281==(x282%x283))%x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	uint16_t x288 = 482U;
	int32_t t66 = 22005;

	t66 = ((x285==(x286%x287))%x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x289 = 0LL;
	volatile int64_t x291 = INT64_MIN;
	volatile int32_t t67 = -1097882;

	t67 = ((x289==(x290%x291))%x292);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x294 = INT64_MIN;
	volatile int64_t t68 = -122026946LL;

	t68 = ((x293==(x294%x295))%x296);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x297 = 10921U;
	uint16_t x299 = UINT16_MAX;

	t69 = ((x297==(x298%x299))%x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = 6452712935275LL;
	volatile int32_t x302 = 73154;
	static int16_t x303 = -1;
	uint8_t x304 = 63U;

	t70 = ((x301==(x302%x303))%x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -1;
	uint64_t x306 = 115853LLU;
	static int32_t x307 = INT32_MIN;
	uint32_t x308 = 354U;
	uint32_t t71 = 20U;

	t71 = ((x305==(x306%x307))%x308);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -1LL;
	uint64_t x311 = 5621927288556767LLU;
	static volatile int32_t x312 = INT32_MAX;
	volatile int32_t t72 = -2415593;

	t72 = ((x309==(x310%x311))%x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x313 = 273804170;
	int32_t x314 = 127661;
	int64_t x316 = -1691070471754LL;
	volatile int64_t t73 = 4305694855309LL;

	t73 = ((x313==(x314%x315))%x316);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 3U;
	static volatile int8_t x318 = -1;
	uint64_t x319 = 16533540741LLU;
	int8_t x320 = INT8_MAX;
	static int32_t t74 = -89284;

	t74 = ((x317==(x318%x319))%x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x322 = 1U;
	uint8_t x324 = 55U;
	static volatile int32_t t75 = 7906770;

	t75 = ((x321==(x322%x323))%x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MAX;
	static int64_t x326 = INT64_MIN;
	volatile int32_t x327 = -1;
	int16_t x328 = INT16_MAX;
	int32_t t76 = -6476;

	t76 = ((x325==(x326%x327))%x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x329 = 5;
	int64_t x330 = INT64_MIN;
	uint32_t x331 = 6960899U;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t77 = -233;

	t77 = ((x329==(x330%x331))%x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x333 = 3522LLU;
	int64_t x334 = INT64_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t78 = -1913868;

	t78 = ((x333==(x334%x335))%x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = -1;
	static int32_t x339 = -15609;
	int32_t t79 = -97;

	t79 = ((x337==(x338%x339))%x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = 10LL;
	volatile int8_t x342 = 2;
	static volatile int16_t x343 = 742;
	static int8_t x344 = INT8_MAX;
	int32_t t80 = -1930613;

	t80 = ((x341==(x342%x343))%x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MAX;
	static int64_t x346 = 118419510709968LL;
	int32_t x347 = -6381;
	volatile int64_t x348 = 42615712584741LL;
	static int64_t t81 = 368492656LL;

	t81 = ((x345==(x346%x347))%x348);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = 24U;
	volatile uint8_t x350 = 24U;
	uint16_t x351 = 242U;
	static volatile uint64_t x352 = 16521209LLU;
	uint64_t t82 = 4583LLU;

	t82 = ((x349==(x350%x351))%x352);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x354 = INT16_MAX;
	static int32_t x355 = -1;
	volatile uint64_t x356 = 2396LLU;
	volatile uint64_t t83 = 53811LLU;

	t83 = ((x353==(x354%x355))%x356);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x357 = INT16_MIN;
	volatile int8_t x358 = -4;
	static volatile int16_t x359 = INT16_MIN;
	uint32_t x360 = 22869U;

	t84 = ((x357==(x358%x359))%x360);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x361 = 1U;
	uint16_t x362 = 7017U;
	static uint16_t x364 = 77U;
	static int32_t t85 = 1;

	t85 = ((x361==(x362%x363))%x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x367 = INT32_MIN;
	static uint64_t x368 = 1333511347977368773LLU;
	uint64_t t86 = 61326614292LLU;

	t86 = ((x365==(x366%x367))%x368);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = -1;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t87 = 26339;

	t87 = ((x369==(x370%x371))%x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x375 = -1LL;
	volatile int32_t t88 = 23953;

	t88 = ((x373==(x374%x375))%x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = 1;
	volatile int16_t x379 = -1;
	int8_t x380 = INT8_MAX;
	int32_t t89 = 1;

	t89 = ((x377==(x378%x379))%x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = 35U;
	uint32_t x382 = 14048U;
	uint8_t x383 = 3U;
	uint16_t x384 = 3U;
	volatile int32_t t90 = -82;

	t90 = ((x381==(x382%x383))%x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x387 = INT64_MIN;
	static int32_t t91 = -216158124;

	t91 = ((x385==(x386%x387))%x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x389 = INT32_MAX;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t92 = -9383941;

	t92 = ((x389==(x390%x391))%x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x393 = 1138;
	uint32_t x395 = 41U;
	int8_t x396 = -1;
	int32_t t93 = -137328556;

	t93 = ((x393==(x394%x395))%x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = -16;
	static int32_t x398 = 998;
	int8_t x399 = INT8_MIN;
	static int32_t x400 = 1006089143;
	int32_t t94 = -99;

	t94 = ((x397==(x398%x399))%x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x401 = UINT16_MAX;
	volatile int8_t x402 = -4;
	int32_t x403 = INT32_MIN;
	int32_t x404 = INT32_MIN;
	int32_t t95 = 122851290;

	t95 = ((x401==(x402%x403))%x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MAX;
	int32_t x407 = -1;
	volatile int8_t x408 = 36;
	volatile int32_t t96 = -6;

	t96 = ((x405==(x406%x407))%x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = -1;
	static uint16_t x411 = 3U;
	static uint16_t x412 = UINT16_MAX;
	volatile int32_t t97 = 2546936;

	t97 = ((x409==(x410%x411))%x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x414 = -1;
	uint16_t x416 = 415U;
	static int32_t t98 = -4905496;

	t98 = ((x413==(x414%x415))%x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x419 = 8578;
	uint8_t x420 = 1U;

	t99 = ((x417==(x418%x419))%x420);

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

