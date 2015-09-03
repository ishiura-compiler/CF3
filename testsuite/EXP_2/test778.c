#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x6 = 7U;
int32_t t1 = 3642;
int64_t x13 = -1LL;
uint32_t x24 = 1903564U;
volatile uint32_t t5 = 227223652U;
uint64_t x36 = 1416126330058378LLU;
uint64_t t8 = 6004810444LLU;
int64_t x47 = -2146806547275LL;
int16_t x50 = INT16_MAX;
volatile int16_t x53 = INT16_MIN;
uint32_t x55 = 107063243U;
int16_t x61 = INT16_MAX;
int32_t x63 = INT32_MIN;
int16_t x65 = INT16_MAX;
static int32_t x67 = INT32_MAX;
uint16_t x78 = 2U;
static uint64_t x80 = 7927701828LLU;
int8_t x82 = -1;
int32_t x85 = -26888;
static int8_t x86 = INT8_MIN;
volatile int32_t x87 = -1907782;
volatile int8_t x90 = INT8_MAX;
static volatile uint32_t x92 = 11523136U;
int8_t x94 = INT8_MAX;
int32_t x95 = INT32_MIN;
uint8_t x99 = 1U;
int16_t x111 = -1;
int32_t t24 = -13;
int64_t x126 = -1LL;
int64_t t29 = -3585936159LL;
volatile int32_t t30 = 24061784;
int16_t x142 = -1;
static int16_t x143 = INT16_MAX;
uint64_t x144 = 183946486LLU;
int32_t x148 = -1;
uint32_t x151 = 1U;
volatile int32_t t34 = 73740;
int32_t x155 = -1490050;
static uint32_t x163 = UINT32_MAX;
int32_t t37 = -11642144;
uint16_t x166 = 1539U;
int8_t x175 = 1;
uint32_t x178 = 248256U;
volatile uint64_t x182 = UINT64_MAX;
int32_t x184 = INT32_MIN;
uint8_t x189 = 4U;
int64_t x191 = INT64_MIN;
uint64_t x194 = 665297LLU;
static int8_t x199 = -1;
volatile int32_t x200 = INT32_MIN;
volatile int32_t t45 = 122888366;
int64_t x201 = INT64_MIN;
uint32_t x206 = UINT32_MAX;
int32_t x214 = INT32_MIN;
int16_t x220 = INT16_MIN;
int32_t x225 = -2485;
volatile int64_t t52 = -115LL;
int16_t x239 = -374;
static int32_t t55 = -14314619;
static int32_t t56 = 7100974;
uint32_t x251 = UINT32_MAX;
int64_t x256 = INT64_MIN;
uint32_t x260 = 8497U;
static uint32_t t60 = 704990314U;
int32_t t62 = -139;
static uint64_t x269 = UINT64_MAX;
static int64_t x275 = -159LL;
int16_t x284 = INT16_MAX;
uint32_t t68 = 30980412U;
int64_t x304 = INT64_MAX;
uint64_t x307 = 13321335LLU;
volatile uint64_t x308 = UINT64_MAX;
volatile uint64_t t71 = 74761856872LLU;
int8_t x310 = INT8_MAX;
int8_t x314 = INT8_MAX;
int32_t t75 = 4170;
int32_t x334 = -25531;
uint8_t x336 = 2U;
int32_t t77 = 1644661;
int8_t x338 = -1;
static int32_t x342 = INT32_MIN;
int32_t x349 = 0;
static int64_t x358 = INT64_MIN;
static volatile int32_t x360 = 3;
uint8_t x363 = 114U;
int32_t x369 = -1;
int16_t x383 = INT16_MIN;
uint64_t x387 = UINT64_MAX;
volatile int64_t t88 = -895319LL;
volatile int64_t x392 = INT64_MAX;
int64_t t90 = -282963072313680LL;
int8_t x398 = INT8_MIN;
int32_t t91 = 233864208;
int16_t x415 = INT16_MAX;
volatile int32_t t95 = 4;
static uint32_t x419 = 160029U;
volatile int8_t x428 = 6;


void f0(void) {
	int8_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	uint8_t x3 = 70U;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -357907090;

	t0 = ((x1==(x2%x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int8_t x7 = -1;
	int8_t x8 = -13;

	t1 = ((x5==(x6%x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -2;
	int32_t x10 = -1;
	int16_t x11 = INT16_MAX;
	int16_t x12 = -1;
	int32_t t2 = -42;

	t2 = ((x9==(x10%x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = UINT8_MAX;
	static int16_t x15 = INT16_MIN;
	volatile int64_t x16 = INT64_MAX;
	int64_t t3 = 576519684985LL;

	t3 = ((x13==(x14%x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	static uint16_t x18 = 13328U;
	static int8_t x19 = -15;
	int64_t x20 = INT64_MIN;
	int64_t t4 = 7934398231LL;

	t4 = ((x17==(x18%x19))&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 51;
	volatile int16_t x22 = -1;
	int16_t x23 = -1;

	t5 = ((x21==(x22%x23))&x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 2095U;
	int64_t x30 = 0LL;
	int16_t x31 = -1;
	int64_t x32 = -1LL;
	int64_t t6 = 0LL;

	t6 = ((x29==(x30%x31))&x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = 47282217117305968LL;
	int8_t x34 = 19;
	volatile int32_t x35 = INT32_MIN;
	uint64_t t7 = 503LLU;

	t7 = ((x33==(x34%x35))&x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 128915979;
	int32_t x38 = -1;
	int8_t x39 = -1;
	volatile uint64_t x40 = UINT64_MAX;

	t8 = ((x37==(x38%x39))&x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = INT16_MAX;
	static int32_t t9 = 0;

	t9 = ((x41==(x42%x43))&x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = -59615842291245LL;
	int64_t x48 = INT64_MIN;
	static int64_t t10 = 490461LL;

	t10 = ((x45==(x46%x47))&x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = UINT32_MAX;
	int8_t x51 = -1;
	volatile int16_t x52 = INT16_MIN;
	int32_t t11 = 116403522;

	t11 = ((x49==(x50%x51))&x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MAX;
	int16_t x56 = 2552;
	volatile int32_t t12 = -2;

	t12 = ((x53==(x54%x55))&x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	int64_t x59 = INT64_MAX;
	static uint8_t x60 = UINT8_MAX;
	int32_t t13 = -891;

	t13 = ((x57==(x58%x59))&x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = UINT64_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t14 = 5;

	t14 = ((x61==(x62%x63))&x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x66 = -7;
	int64_t x68 = INT64_MIN;
	volatile int64_t t15 = 659541196LL;

	t15 = ((x65==(x66%x67))&x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = UINT32_MAX;
	int16_t x70 = -1;
	int8_t x71 = INT8_MIN;
	int32_t x72 = 0;
	static int32_t t16 = -4;

	t16 = ((x69==(x70%x71))&x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 1437413LLU;
	uint16_t x79 = 30343U;
	volatile uint64_t t17 = 4131092603306748643LLU;

	t17 = ((x77==(x78%x79))&x80);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1;
	int16_t x83 = INT16_MAX;
	uint16_t x84 = 155U;
	int32_t t18 = -32;

	t18 = ((x81==(x82%x83))&x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x88 = INT8_MAX;
	int32_t t19 = -2095197;

	t19 = ((x85==(x86%x87))&x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int8_t x91 = -1;
	uint32_t t20 = 27256U;

	t20 = ((x89==(x90%x91))&x92);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 473073295;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t21 = -105;

	t21 = ((x93==(x94%x95))&x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 66622422983989LLU;
	uint64_t x98 = UINT64_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t22 = 101389098LLU;

	t22 = ((x97==(x98%x99))&x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 104U;
	static int8_t x102 = INT8_MIN;
	int8_t x103 = -1;
	uint8_t x104 = 4U;
	int32_t t23 = -3668;

	t23 = ((x101==(x102%x103))&x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -1;
	volatile uint8_t x110 = 30U;
	static int16_t x112 = -1;

	t24 = ((x109==(x110%x111))&x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MAX;
	int32_t x114 = -11271;
	volatile uint32_t x115 = 56290300U;
	int16_t x116 = INT16_MAX;
	int32_t t25 = -8;

	t25 = ((x113==(x114%x115))&x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = 1;
	static volatile int64_t x119 = INT64_MAX;
	int64_t x120 = -1LL;
	int64_t t26 = 56795LL;

	t26 = ((x117==(x118%x119))&x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	volatile int32_t x122 = -995;
	int16_t x123 = -1;
	int16_t x124 = INT16_MIN;
	static int32_t t27 = -61544812;

	t27 = ((x121==(x122%x123))&x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = 4342;
	uint8_t x127 = UINT8_MAX;
	volatile uint8_t x128 = 1U;
	int32_t t28 = 575358391;

	t28 = ((x125==(x126%x127))&x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x129 = 4U;
	static int32_t x130 = INT32_MAX;
	uint32_t x131 = 11520U;
	int64_t x132 = INT64_MIN;

	t29 = ((x129==(x130%x131))&x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = INT8_MAX;
	uint8_t x134 = 0U;
	static uint8_t x135 = 3U;
	uint16_t x136 = 1839U;

	t30 = ((x133==(x134%x135))&x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x137 = UINT64_MAX;
	int8_t x138 = 0;
	int64_t x139 = 10422717LL;
	static uint8_t x140 = 1U;
	static int32_t t31 = -504;

	t31 = ((x137==(x138%x139))&x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x141 = 0U;
	uint64_t t32 = 4209370351611LLU;

	t32 = ((x141==(x142%x143))&x144);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MAX;
	volatile uint32_t x146 = 486453U;
	uint32_t x147 = UINT32_MAX;
	volatile int32_t t33 = 53136;

	t33 = ((x145==(x146%x147))&x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 122U;
	static int16_t x150 = INT16_MIN;
	uint8_t x152 = UINT8_MAX;

	t34 = ((x149==(x150%x151))&x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 58400LLU;
	volatile int32_t x154 = -1;
	volatile int16_t x156 = INT16_MIN;
	int32_t t35 = 10;

	t35 = ((x153==(x154%x155))&x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = 1;
	uint32_t x159 = 2059302178U;
	int32_t x160 = -59118363;
	volatile int32_t t36 = -499166000;

	t36 = ((x157==(x158%x159))&x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = INT64_MIN;
	volatile uint32_t x162 = 89U;
	int32_t x164 = INT32_MAX;

	t37 = ((x161==(x162%x163))&x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 114482U;
	volatile uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = INT8_MAX;
	int32_t t38 = -836362938;

	t38 = ((x165==(x166%x167))&x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = INT8_MIN;
	volatile int16_t x171 = -1;
	int32_t x172 = 14608;
	int32_t t39 = 10389;

	t39 = ((x169==(x170%x171))&x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = UINT32_MAX;
	int64_t x176 = 4205644770978LL;
	volatile int64_t t40 = 688706615683LL;

	t40 = ((x173==(x174%x175))&x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = 1;
	int8_t x179 = -1;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t41 = -506355777;

	t41 = ((x177==(x178%x179))&x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -1;
	static volatile int64_t x183 = INT64_MIN;
	volatile int32_t t42 = 3080;

	t42 = ((x181==(x182%x183))&x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x190 = 6949U;
	volatile int16_t x192 = INT16_MIN;
	int32_t t43 = 2002765;

	t43 = ((x189==(x190%x191))&x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = INT64_MIN;
	int16_t x195 = 7016;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t44 = -3504631;

	t44 = ((x193==(x194%x195))&x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 14U;
	int64_t x198 = -66LL;

	t45 = ((x197==(x198%x199))&x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x202 = 570U;
	volatile int32_t x203 = 40165;
	uint64_t x204 = 784525026733730LLU;
	volatile uint64_t t46 = 378270272260300LLU;

	t46 = ((x201==(x202%x203))&x204);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = UINT8_MAX;
	int64_t x207 = -1LL;
	volatile int64_t x208 = INT64_MAX;
	static volatile int64_t t47 = 3430699540656035LL;

	t47 = ((x205==(x206%x207))&x208);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MAX;
	uint16_t x211 = 21U;
	static uint16_t x212 = UINT16_MAX;
	volatile int32_t t48 = -3;

	t48 = ((x209==(x210%x211))&x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = 289;
	int32_t x215 = -43641;
	volatile int8_t x216 = INT8_MIN;
	int32_t t49 = 5276527;

	t49 = ((x213==(x214%x215))&x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	uint64_t x219 = 3741LLU;
	int32_t t50 = -2093070;

	t50 = ((x217==(x218%x219))&x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x221 = INT64_MAX;
	int32_t x222 = -5;
	int8_t x223 = -48;
	int32_t x224 = -1;
	volatile int32_t t51 = 96124120;

	t51 = ((x221==(x222%x223))&x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MIN;

	t52 = ((x225==(x226%x227))&x228);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MAX;
	static uint32_t x231 = UINT32_MAX;
	static int16_t x232 = INT16_MAX;
	volatile int32_t t53 = 1739;

	t53 = ((x229==(x230%x231))&x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = 3;
	static uint64_t x234 = 22LLU;
	static volatile int8_t x235 = 1;
	static int16_t x236 = -23;
	static volatile int32_t t54 = -356584;

	t54 = ((x233==(x234%x235))&x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -1;
	volatile uint8_t x238 = 75U;
	static uint8_t x240 = 54U;

	t55 = ((x237==(x238%x239))&x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x241 = INT16_MAX;
	static int64_t x242 = -145164515709704486LL;
	volatile int8_t x243 = INT8_MIN;
	static int16_t x244 = INT16_MAX;

	t56 = ((x241==(x242%x243))&x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x245 = INT8_MIN;
	uint64_t x246 = 3108LLU;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t57 = 3;

	t57 = ((x245==(x246%x247))&x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = -3839055LL;
	volatile uint32_t x250 = 0U;
	volatile int64_t x252 = -157295866LL;
	volatile int64_t t58 = -176175276341279LL;

	t58 = ((x249==(x250%x251))&x252);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = -1;
	static int64_t x254 = INT64_MAX;
	static volatile uint8_t x255 = 2U;
	volatile int64_t t59 = 25LL;

	t59 = ((x253==(x254%x255))&x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = UINT64_MAX;
	static int8_t x258 = INT8_MIN;
	volatile uint8_t x259 = UINT8_MAX;

	t60 = ((x257==(x258%x259))&x260);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x261 = UINT8_MAX;
	int32_t x262 = INT32_MIN;
	volatile uint32_t x263 = 280887U;
	static volatile int8_t x264 = -1;
	int32_t t61 = -61443;

	t61 = ((x261==(x262%x263))&x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x265 = INT8_MIN;
	int64_t x266 = INT64_MAX;
	int32_t x267 = -1;
	volatile int16_t x268 = INT16_MAX;

	t62 = ((x265==(x266%x267))&x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x270 = 637U;
	uint32_t x271 = UINT32_MAX;
	uint8_t x272 = UINT8_MAX;
	static volatile int32_t t63 = -1;

	t63 = ((x269==(x270%x271))&x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = INT8_MIN;
	int64_t x276 = -2257579LL;
	int64_t t64 = -512127145170LL;

	t64 = ((x273==(x274%x275))&x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x277 = INT64_MIN;
	volatile int64_t x278 = 27LL;
	uint32_t x279 = 1365U;
	volatile uint32_t x280 = 2365465U;
	volatile uint32_t t65 = 154029107U;

	t65 = ((x277==(x278%x279))&x280);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MAX;
	static uint32_t x282 = UINT32_MAX;
	uint64_t x283 = 17150148208LLU;
	static volatile int32_t t66 = 192372;

	t66 = ((x281==(x282%x283))&x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -1;
	static volatile uint32_t x286 = UINT32_MAX;
	static uint32_t x287 = 181U;
	int32_t x288 = INT32_MIN;
	static int32_t t67 = 258356622;

	t67 = ((x285==(x286%x287))&x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = 1554198;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = UINT8_MAX;
	static volatile uint32_t x292 = UINT32_MAX;

	t68 = ((x289==(x290%x291))&x292);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x297 = UINT64_MAX;
	uint16_t x298 = 3U;
	int8_t x299 = -1;
	uint64_t x300 = 7LLU;
	volatile uint64_t t69 = 4154465205LLU;

	t69 = ((x297==(x298%x299))&x300);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x301 = 0U;
	uint8_t x302 = UINT8_MAX;
	int32_t x303 = -1;
	volatile int64_t t70 = -9423LL;

	t70 = ((x301==(x302%x303))&x304);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x305 = 2U;
	uint16_t x306 = UINT16_MAX;

	t71 = ((x305==(x306%x307))&x308);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x311 = 3562478297436LLU;
	int8_t x312 = INT8_MIN;
	int32_t t72 = -120;

	t72 = ((x309==(x310%x311))&x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x313 = 118U;
	static int8_t x315 = 2;
	int32_t x316 = 154;
	volatile int32_t t73 = 433;

	t73 = ((x313==(x314%x315))&x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = INT32_MIN;
	static int8_t x318 = 1;
	int32_t x319 = -1;
	int8_t x320 = -15;
	int32_t t74 = -225125126;

	t74 = ((x317==(x318%x319))&x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = -1;
	static int16_t x324 = 0;

	t75 = ((x321==(x322%x323))&x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x329 = INT32_MAX;
	int32_t x330 = 0;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t76 = -138832631;

	t76 = ((x329==(x330%x331))&x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x333 = UINT8_MAX;
	int16_t x335 = -882;

	t77 = ((x333==(x334%x335))&x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x337 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	volatile int8_t x340 = 1;
	volatile int32_t t78 = 21;

	t78 = ((x337==(x338%x339))&x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x341 = 182896696LL;
	int16_t x343 = INT16_MIN;
	int8_t x344 = -1;
	volatile int32_t t79 = -102;

	t79 = ((x341==(x342%x343))&x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x345 = INT16_MAX;
	volatile uint8_t x346 = 15U;
	uint32_t x347 = 1223165701U;
	int64_t x348 = INT64_MIN;
	volatile int64_t t80 = -331784LL;

	t80 = ((x345==(x346%x347))&x348);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x350 = 21;
	volatile int16_t x351 = INT16_MIN;
	uint16_t x352 = 181U;
	static volatile int32_t t81 = 241434538;

	t81 = ((x349==(x350%x351))&x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = INT8_MIN;
	volatile int16_t x359 = -1;
	int32_t t82 = 467064;

	t82 = ((x357==(x358%x359))&x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = 3282886171146210878LL;
	int16_t x362 = INT16_MIN;
	int32_t x364 = -1;
	static volatile int32_t t83 = -2591646;

	t83 = ((x361==(x362%x363))&x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x365 = UINT8_MAX;
	int8_t x366 = 18;
	static uint8_t x367 = 10U;
	static int32_t x368 = -1;
	static volatile int32_t t84 = 1;

	t84 = ((x365==(x366%x367))&x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x370 = -7;
	static int8_t x371 = -1;
	int16_t x372 = -1;
	int32_t t85 = -132280607;

	t85 = ((x369==(x370%x371))&x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = 2LL;
	int32_t x374 = INT32_MAX;
	volatile int8_t x375 = -1;
	static uint64_t x376 = 6827238176678LLU;
	uint64_t t86 = 526383435304075560LLU;

	t86 = ((x373==(x374%x375))&x376);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x381 = UINT16_MAX;
	uint16_t x382 = 3114U;
	volatile int16_t x384 = -9333;
	volatile int32_t t87 = 1238;

	t87 = ((x381==(x382%x383))&x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = 203121190;
	volatile uint16_t x386 = UINT16_MAX;
	int64_t x388 = INT64_MIN;

	t88 = ((x385==(x386%x387))&x388);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x389 = 127674012512318824LLU;
	uint8_t x390 = 12U;
	int16_t x391 = 369;
	volatile int64_t t89 = 279805403522419LL;

	t89 = ((x389==(x390%x391))&x392);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x393 = 74;
	int16_t x394 = -3;
	static uint32_t x395 = 3U;
	int64_t x396 = INT64_MAX;

	t90 = ((x393==(x394%x395))&x396);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = UINT16_MAX;
	static int16_t x399 = INT16_MAX;
	volatile int16_t x400 = INT16_MIN;

	t91 = ((x397==(x398%x399))&x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int64_t x402 = -12598127117LL;
	volatile int8_t x403 = INT8_MAX;
	int8_t x404 = 1;
	volatile int32_t t92 = 3152591;

	t92 = ((x401==(x402%x403))&x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x405 = 1736;
	static uint16_t x406 = 0U;
	uint32_t x407 = 122641U;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t93 = 1038680533853956LLU;

	t93 = ((x405==(x406%x407))&x408);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x409 = 5U;
	int32_t x410 = INT32_MIN;
	int32_t x411 = INT32_MAX;
	int64_t x412 = INT64_MIN;
	int64_t t94 = -1124098705890792781LL;

	t94 = ((x409==(x410%x411))&x412);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = -1;
	uint32_t x414 = 5772U;
	int8_t x416 = INT8_MIN;

	t95 = ((x413==(x414%x415))&x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x417 = UINT32_MAX;
	volatile int32_t x418 = INT32_MIN;
	volatile int16_t x420 = -1;
	int32_t t96 = 3;

	t96 = ((x417==(x418%x419))&x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = INT64_MIN;
	int32_t x422 = 380;
	uint64_t x423 = UINT64_MAX;
	int64_t x424 = INT64_MIN;
	static volatile int64_t t97 = -185756LL;

	t97 = ((x421==(x422%x423))&x424);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = -1LL;
	uint64_t x426 = UINT64_MAX;
	int64_t x427 = INT64_MIN;
	static int32_t t98 = 8160;

	t98 = ((x425==(x426%x427))&x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = 50U;
	int64_t x430 = -1LL;
	uint64_t x431 = 4555LLU;
	int16_t x432 = 3;
	volatile int32_t t99 = 235491;

	t99 = ((x429==(x430%x431))&x432);

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

