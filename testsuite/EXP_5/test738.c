#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x9 = 0U;
volatile int32_t t3 = -83060477;
int8_t x22 = -52;
volatile int8_t x24 = 16;
int8_t x35 = INT8_MIN;
static volatile int32_t t7 = -935;
int8_t x40 = INT8_MAX;
volatile int32_t t8 = 92667;
static uint32_t x41 = 3182U;
static int8_t x42 = 1;
int64_t x43 = INT64_MAX;
int32_t t10 = 22817674;
static volatile int8_t x49 = INT8_MAX;
static volatile int16_t x51 = -1;
int16_t x57 = -1;
static int32_t x59 = INT32_MIN;
int64_t x61 = -5551281945LL;
volatile int64_t x65 = INT64_MAX;
static uint8_t x69 = 1U;
uint16_t x75 = 17U;
volatile int32_t t18 = -44;
uint64_t x82 = UINT64_MAX;
int8_t x83 = INT8_MIN;
volatile int32_t t19 = 63029664;
int16_t x85 = INT16_MAX;
volatile int32_t t21 = -1552;
int64_t x101 = INT64_MAX;
int16_t x105 = INT16_MIN;
int32_t t24 = -109;
volatile int64_t x110 = INT64_MIN;
static int32_t x112 = INT32_MIN;
uint64_t x114 = 126304191LLU;
static volatile int32_t t26 = 60463823;
int32_t x130 = -2;
int32_t x138 = 3927992;
static int8_t x141 = -1;
int16_t x151 = INT16_MIN;
uint16_t x152 = 21539U;
int16_t x155 = INT16_MIN;
static int8_t x156 = INT8_MIN;
volatile int32_t t35 = -33;
static volatile uint16_t x162 = 10444U;
static int32_t x163 = INT32_MIN;
volatile int32_t t36 = -263829081;
uint32_t x165 = 1950203U;
static int8_t x167 = INT8_MAX;
int64_t x171 = -3091LL;
uint16_t x185 = 384U;
static uint32_t x194 = 11U;
uint16_t x195 = UINT16_MAX;
uint8_t x202 = UINT8_MAX;
int16_t x203 = INT16_MIN;
volatile int16_t x212 = 2;
int32_t t47 = -74922083;
uint64_t x230 = 1LLU;
volatile int32_t t52 = 131563;
int64_t x235 = INT64_MAX;
volatile int32_t x238 = INT32_MIN;
uint16_t x240 = 514U;
int8_t x241 = -1;
int32_t t55 = 2;
int32_t t56 = -754403;
static int16_t x257 = INT16_MIN;
uint8_t x258 = 0U;
int8_t x259 = INT8_MIN;
volatile int32_t t59 = 4509;
static int32_t t60 = 643;
volatile uint32_t x270 = UINT32_MAX;
int64_t x289 = -1LL;
volatile uint64_t x294 = UINT64_MAX;
uint8_t x308 = 15U;
int32_t t70 = -4;
uint32_t x317 = 2836257U;
int16_t x319 = -1;
int32_t t72 = 89;
int32_t x321 = 250029050;
volatile int32_t x322 = 26639;
static int32_t t73 = -51425;
static int8_t x326 = INT8_MIN;
static uint16_t x334 = 2952U;
int8_t x336 = INT8_MIN;
volatile int32_t t76 = 389;
int8_t x343 = -1;
int32_t x346 = -1;
int16_t x357 = INT16_MAX;
uint16_t x363 = 57U;
uint32_t x364 = 150632943U;
int8_t x365 = 11;
int8_t x373 = INT8_MAX;
int32_t x380 = INT32_MAX;
static int64_t x384 = INT64_MAX;
static volatile int32_t x393 = -1;
volatile int32_t t91 = -582727;
uint8_t x397 = 37U;
int8_t x401 = 2;
uint16_t x402 = UINT16_MAX;
int64_t x404 = -360093LL;
int16_t x405 = INT16_MIN;
uint32_t x414 = 8U;
uint16_t x420 = 1U;
int32_t t97 = 6;
int64_t x421 = 2LL;
int64_t x423 = INT64_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint64_t x2 = UINT64_MAX;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -3147873;

	t0 = (x1<=((x2%x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int64_t x6 = INT64_MIN;
	volatile uint16_t x7 = 100U;
	uint16_t x8 = 20155U;
	int32_t t1 = -1017858050;

	t1 = (x5<=((x6%x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = 1822;
	int16_t x11 = 380;
	static volatile uint8_t x12 = UINT8_MAX;
	static volatile int32_t t2 = 130;

	t2 = (x9<=((x10%x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MAX;
	int32_t x14 = -87046676;
	static int32_t x15 = 4164617;
	int16_t x16 = -59;

	t3 = (x13<=((x14%x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	int32_t x18 = -57;
	volatile int32_t x19 = 305662020;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -12322219;

	t4 = (x17<=((x18%x19)%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint32_t x23 = UINT32_MAX;
	volatile int32_t t5 = 8;

	t5 = (x21<=((x22%x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1570;
	volatile uint16_t x26 = 1U;
	int16_t x27 = -4068;
	int16_t x28 = -1;
	volatile int32_t t6 = -13335122;

	t6 = (x25<=((x26%x27)%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -12;
	volatile int8_t x34 = INT8_MIN;
	static volatile int8_t x36 = -1;

	t7 = (x33<=((x34%x35)%x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = UINT64_MAX;
	static volatile int32_t x38 = INT32_MAX;
	int32_t x39 = -11;

	t8 = (x37<=((x38%x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x44 = 31164482U;
	volatile int32_t t9 = -275928;

	t9 = (x41<=((x42%x43)%x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = INT32_MIN;
	static volatile uint32_t x48 = 254851U;

	t10 = (x45<=((x46%x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = INT16_MIN;
	volatile int16_t x52 = 15;
	static int32_t t11 = 309;

	t11 = (x49<=((x50%x51)%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = 7446;
	uint64_t x54 = 8428670LLU;
	volatile int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t12 = -16;

	t12 = (x53<=((x54%x55)%x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = 2;
	uint8_t x60 = 121U;
	volatile int32_t t13 = 509095;

	t13 = (x57<=((x58%x59)%x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = INT32_MAX;
	volatile uint8_t x63 = 15U;
	static int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 2;

	t14 = (x61<=((x62%x63)%x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = 3;
	int8_t x67 = INT8_MAX;
	static uint64_t x68 = UINT64_MAX;
	int32_t t15 = 2568968;

	t15 = (x65<=((x66%x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x70 = 5057557525584LLU;
	int8_t x71 = 1;
	int8_t x72 = INT8_MIN;
	volatile int32_t t16 = 110935542;

	t16 = (x69<=((x70%x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 45U;
	int8_t x74 = INT8_MAX;
	volatile int8_t x76 = -1;
	int32_t t17 = 1030665;

	t17 = (x73<=((x74%x75)%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x77 = 3120U;
	int16_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	volatile uint64_t x80 = 823264315701LLU;

	t18 = (x77<=((x78%x79)%x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 4025;
	int32_t x84 = INT32_MIN;

	t19 = (x81<=((x82%x83)%x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x86 = 12670272U;
	volatile int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	volatile int32_t t20 = 1;

	t20 = (x85<=((x86%x87)%x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	static int8_t x90 = 0;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;

	t21 = (x89<=((x90%x91)%x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 85923651U;
	uint16_t x94 = UINT16_MAX;
	uint64_t x95 = 178454222445585334LLU;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t22 = -120;

	t22 = (x93<=((x94%x95)%x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x102 = INT32_MIN;
	static int32_t x103 = INT32_MIN;
	int64_t x104 = 295980612LL;
	int32_t t23 = 2200;

	t23 = (x101<=((x102%x103)%x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = INT32_MIN;
	static uint32_t x107 = 410229671U;
	int8_t x108 = -14;

	t24 = (x105<=((x106%x107)%x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 10U;
	volatile int16_t x111 = INT16_MIN;
	volatile int32_t t25 = -1391;

	t25 = (x109<=((x110%x111)%x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x113 = 265610528367LLU;
	int8_t x115 = -1;
	int64_t x116 = INT64_MAX;

	t26 = (x113<=((x114%x115)%x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x121 = 10366LLU;
	int16_t x122 = 3;
	int64_t x123 = INT64_MAX;
	volatile int8_t x124 = -1;
	int32_t t27 = 4671496;

	t27 = (x121<=((x122%x123)%x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 0U;
	static uint16_t x126 = 1856U;
	volatile int8_t x127 = INT8_MIN;
	uint8_t x128 = 18U;
	int32_t t28 = -24;

	t28 = (x125<=((x126%x127)%x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = 4554;
	volatile uint16_t x131 = UINT16_MAX;
	int16_t x132 = -3;
	volatile int32_t t29 = 94;

	t29 = (x129<=((x130%x131)%x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x133 = 57956632556LLU;
	volatile int32_t x134 = INT32_MIN;
	volatile uint8_t x135 = UINT8_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t30 = -1364;

	t30 = (x133<=((x134%x135)%x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -6527243;
	static volatile int16_t x139 = INT16_MAX;
	uint64_t x140 = 704653LLU;
	static volatile int32_t t31 = 4;

	t31 = (x137<=((x138%x139)%x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x142 = INT8_MIN;
	static uint32_t x143 = 13774U;
	uint64_t x144 = 1049150924119LLU;
	static int32_t t32 = 90247;

	t32 = (x141<=((x142%x143)%x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x149 = -935;
	int32_t x150 = -1;
	int32_t t33 = -662417;

	t33 = (x149<=((x150%x151)%x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x153 = 3U;
	int8_t x154 = INT8_MAX;
	int32_t t34 = -1586;

	t34 = (x153<=((x154%x155)%x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = INT64_MIN;
	uint8_t x158 = 95U;
	int8_t x159 = INT8_MIN;
	static int32_t x160 = -91;

	t35 = (x157<=((x158%x159)%x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x161 = 16217884595LLU;
	static int8_t x164 = -1;

	t36 = (x161<=((x162%x163)%x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x166 = -6;
	volatile int64_t x168 = INT64_MIN;
	volatile int32_t t37 = 5;

	t37 = (x165<=((x166%x167)%x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = -1LL;
	static int32_t x170 = -29934310;
	uint64_t x172 = UINT64_MAX;
	static int32_t t38 = 301935352;

	t38 = (x169<=((x170%x171)%x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	volatile int16_t x175 = INT16_MAX;
	static volatile uint32_t x176 = UINT32_MAX;
	static int32_t t39 = -23;

	t39 = (x173<=((x174%x175)%x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x177 = 28907511744690LL;
	volatile int8_t x178 = INT8_MIN;
	static int16_t x179 = INT16_MAX;
	volatile int32_t x180 = -1;
	int32_t t40 = -8;

	t40 = (x177<=((x178%x179)%x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	static volatile uint16_t x182 = 12U;
	uint16_t x183 = 17842U;
	uint32_t x184 = UINT32_MAX;
	static volatile int32_t t41 = -137223576;

	t41 = (x181<=((x182%x183)%x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = INT32_MAX;
	int16_t x187 = -1;
	volatile uint8_t x188 = 18U;
	int32_t t42 = -985697622;

	t42 = (x185<=((x186%x187)%x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 4959736902550LLU;
	uint8_t x196 = 27U;
	volatile int32_t t43 = -486646;

	t43 = (x193<=((x194%x195)%x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -896LL;
	int64_t x198 = INT64_MIN;
	int8_t x199 = -1;
	uint16_t x200 = 6U;
	volatile int32_t t44 = -402;

	t44 = (x197<=((x198%x199)%x200));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	static int8_t x204 = 20;
	int32_t t45 = -9693913;

	t45 = (x201<=((x202%x203)%x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MIN;
	uint32_t x206 = 59784856U;
	int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MIN;
	static int32_t t46 = 2;

	t46 = (x205<=((x206%x207)%x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x209 = UINT32_MAX;
	static int8_t x210 = 1;
	uint32_t x211 = UINT32_MAX;

	t47 = (x209<=((x210%x211)%x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = 520642;
	int32_t x214 = 1474;
	int16_t x215 = INT16_MIN;
	int64_t x216 = -1LL;
	volatile int32_t t48 = 1;

	t48 = (x213<=((x214%x215)%x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = UINT16_MAX;
	static int32_t x218 = -112353;
	uint32_t x219 = UINT32_MAX;
	static int64_t x220 = INT64_MIN;
	int32_t t49 = 792;

	t49 = (x217<=((x218%x219)%x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = UINT16_MAX;
	uint16_t x222 = UINT16_MAX;
	static int16_t x223 = INT16_MIN;
	volatile int64_t x224 = -711779607959225214LL;
	volatile int32_t t50 = 37527639;

	t50 = (x221<=((x222%x223)%x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x225 = INT32_MAX;
	int64_t x226 = 603580012428783LL;
	uint32_t x227 = 6U;
	int16_t x228 = INT16_MIN;
	volatile int32_t t51 = 150;

	t51 = (x225<=((x226%x227)%x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x231 = 1890274471LL;
	int16_t x232 = -1;

	t52 = (x229<=((x230%x231)%x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = 901651LL;
	int16_t x234 = INT16_MAX;
	static int8_t x236 = -1;
	volatile int32_t t53 = 831620;

	t53 = (x233<=((x234%x235)%x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = UINT64_MAX;
	uint16_t x239 = UINT16_MAX;
	int32_t t54 = 141683;

	t54 = (x237<=((x238%x239)%x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x242 = INT64_MIN;
	int16_t x243 = 41;
	uint32_t x244 = 14U;

	t55 = (x241<=((x242%x243)%x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x245 = 60U;
	volatile int8_t x246 = -1;
	uint16_t x247 = 1655U;
	uint16_t x248 = 31U;

	t56 = (x245<=((x246%x247)%x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = -1;
	static int32_t x251 = INT32_MIN;
	int64_t x252 = -1LL;
	volatile int32_t t57 = -111452;

	t57 = (x249<=((x250%x251)%x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = UINT64_MAX;
	int64_t x254 = 161069138354600LL;
	static int8_t x255 = -1;
	static int8_t x256 = -3;
	volatile int32_t t58 = 724;

	t58 = (x253<=((x254%x255)%x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x260 = INT32_MIN;

	t59 = (x257<=((x258%x259)%x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x261 = 670576328LL;
	int64_t x262 = -1LL;
	int64_t x263 = -1LL;
	int16_t x264 = -1;

	t60 = (x261<=((x262%x263)%x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x266 = 300424;
	static uint8_t x267 = 16U;
	uint32_t x268 = 109U;
	int32_t t61 = -1640;

	t61 = (x265<=((x266%x267)%x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = 7537990822204221LL;
	uint8_t x271 = UINT8_MAX;
	uint64_t x272 = 6423831509LLU;
	volatile int32_t t62 = -4899;

	t62 = (x269<=((x270%x271)%x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = INT32_MIN;
	static volatile int16_t x274 = 5;
	uint32_t x275 = UINT32_MAX;
	static int8_t x276 = INT8_MIN;
	int32_t t63 = -13236;

	t63 = (x273<=((x274%x275)%x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static volatile int8_t x282 = 15;
	static uint32_t x283 = 1059U;
	int16_t x284 = INT16_MIN;
	static int32_t t64 = -3255288;

	t64 = (x281<=((x282%x283)%x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x285 = -1;
	volatile int64_t x286 = -418669630555LL;
	int32_t x287 = -1;
	int16_t x288 = -54;
	volatile int32_t t65 = -5;

	t65 = (x285<=((x286%x287)%x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x290 = 4LLU;
	static volatile int16_t x291 = 26;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t66 = 219385036;

	t66 = (x289<=((x290%x291)%x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x293 = INT64_MIN;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MAX;
	static volatile int32_t t67 = -1199;

	t67 = (x293<=((x294%x295)%x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = -1918;
	static int16_t x299 = 473;
	int16_t x300 = INT16_MIN;
	int32_t t68 = 1;

	t68 = (x297<=((x298%x299)%x300));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x301 = 5U;
	uint8_t x302 = 1U;
	static int64_t x303 = -1LL;
	uint8_t x304 = 52U;
	static volatile int32_t t69 = 106;

	t69 = (x301<=((x302%x303)%x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MIN;
	int16_t x307 = -1;

	t70 = (x305<=((x306%x307)%x308));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x309 = INT8_MAX;
	int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	int32_t x312 = -1743189;
	volatile int32_t t71 = 28;

	t71 = (x309<=((x310%x311)%x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x318 = -486863;
	int32_t x320 = -1967017;

	t72 = (x317<=((x318%x319)%x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x323 = -13162;
	int32_t x324 = -1;

	t73 = (x321<=((x322%x323)%x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = -3;
	uint16_t x327 = UINT16_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t74 = -9526950;

	t74 = (x325<=((x326%x327)%x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile uint32_t x330 = 106U;
	int64_t x331 = INT64_MIN;
	volatile uint8_t x332 = UINT8_MAX;
	int32_t t75 = -11;

	t75 = (x329<=((x330%x331)%x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = 404943LLU;
	static int32_t x335 = -56;

	t76 = (x333<=((x334%x335)%x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x337 = 93592141629952281LLU;
	int8_t x338 = -1;
	uint64_t x339 = 5136723383138488610LLU;
	int32_t x340 = INT32_MIN;
	volatile int32_t t77 = 224;

	t77 = (x337<=((x338%x339)%x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x341 = 54U;
	int16_t x342 = 100;
	static uint64_t x344 = 72722428432LLU;
	int32_t t78 = -569;

	t78 = (x341<=((x342%x343)%x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x345 = 9U;
	int16_t x347 = -240;
	int8_t x348 = INT8_MAX;
	static volatile int32_t t79 = 430;

	t79 = (x345<=((x346%x347)%x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x349 = 2U;
	uint64_t x350 = UINT64_MAX;
	uint64_t x351 = 577491795LLU;
	int32_t x352 = INT32_MAX;
	volatile int32_t t80 = -707174844;

	t80 = (x349<=((x350%x351)%x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x353 = INT64_MAX;
	static int8_t x354 = -1;
	static uint16_t x355 = 4U;
	uint32_t x356 = 3U;
	int32_t t81 = -5258;

	t81 = (x353<=((x354%x355)%x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x358 = UINT8_MAX;
	int16_t x359 = 7815;
	uint32_t x360 = 159321283U;
	volatile int32_t t82 = 66906;

	t82 = (x357<=((x358%x359)%x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x362 = 878448488U;
	int32_t t83 = 2;

	t83 = (x361<=((x362%x363)%x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x366 = -31853LL;
	volatile int8_t x367 = 1;
	uint8_t x368 = 2U;
	int32_t t84 = 1402;

	t84 = (x365<=((x366%x367)%x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = 9284805LL;
	int8_t x370 = 0;
	int16_t x371 = -1;
	int16_t x372 = -1;
	int32_t t85 = -729;

	t85 = (x369<=((x370%x371)%x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 72U;
	int8_t x376 = 2;
	int32_t t86 = 2;

	t86 = (x373<=((x374%x375)%x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = -1;
	int64_t x378 = -1LL;
	volatile int32_t x379 = INT32_MIN;
	static volatile int32_t t87 = -1;

	t87 = (x377<=((x378%x379)%x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x381 = 11LLU;
	static uint16_t x382 = 17286U;
	uint16_t x383 = 3U;
	int32_t t88 = 4635899;

	t88 = (x381<=((x382%x383)%x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = -1LL;
	uint32_t x386 = 53482297U;
	static int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;
	static volatile int32_t t89 = 2180693;

	t89 = (x385<=((x386%x387)%x388));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x389 = 266671951LLU;
	static uint32_t x390 = 5U;
	int16_t x391 = -76;
	int64_t x392 = -1LL;
	volatile int32_t t90 = 24327;

	t90 = (x389<=((x390%x391)%x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x394 = -26;
	static uint64_t x395 = UINT64_MAX;
	int64_t x396 = 4251815697163710LL;

	t91 = (x393<=((x394%x395)%x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x398 = 31;
	uint64_t x399 = 572123LLU;
	int16_t x400 = 9697;
	int32_t t92 = 3;

	t92 = (x397<=((x398%x399)%x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x403 = UINT16_MAX;
	int32_t t93 = 426856028;

	t93 = (x401<=((x402%x403)%x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x406 = INT8_MAX;
	volatile int64_t x407 = INT64_MIN;
	static int8_t x408 = -1;
	static int32_t t94 = -76;

	t94 = (x405<=((x406%x407)%x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = INT64_MIN;
	uint8_t x410 = 62U;
	volatile int32_t x411 = -178126753;
	int16_t x412 = INT16_MAX;
	static int32_t t95 = -79;

	t95 = (x409<=((x410%x411)%x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = -1;
	int16_t x415 = INT16_MAX;
	int16_t x416 = 9;
	int32_t t96 = -40;

	t96 = (x413<=((x414%x415)%x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = -1;
	int64_t x418 = INT64_MAX;
	static uint16_t x419 = 16343U;

	t97 = (x417<=((x418%x419)%x420));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x422 = -1;
	int16_t x424 = INT16_MAX;
	volatile int32_t t98 = 31704;

	t98 = (x421<=((x422%x423)%x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 5U;
	int8_t x426 = -1;
	volatile uint32_t x427 = UINT32_MAX;
	int32_t x428 = INT32_MIN;
	int32_t t99 = -25827;

	t99 = (x425<=((x426%x427)%x428));

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

