#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MAX;
int16_t x9 = -1;
static uint64_t x10 = 4878731892732986LLU;
int8_t x12 = INT8_MAX;
uint32_t x14 = 39U;
uint32_t x15 = 425U;
static int32_t x16 = INT32_MIN;
volatile int32_t t3 = 11;
volatile int32_t x22 = INT32_MIN;
int64_t t5 = -25LL;
int8_t x26 = INT8_MAX;
uint32_t x31 = 436998474U;
int32_t t8 = 1282317;
uint16_t x38 = UINT16_MAX;
uint8_t x41 = UINT8_MAX;
int32_t x44 = -18;
volatile int32_t x49 = INT32_MIN;
volatile int64_t x51 = INT64_MIN;
int64_t x56 = 89268093574LL;
volatile int32_t t13 = -905;
uint64_t x57 = 3LLU;
int64_t x74 = INT64_MIN;
uint16_t x79 = 15U;
int16_t x84 = INT16_MAX;
static int64_t x87 = 837269745LL;
int32_t x88 = INT32_MIN;
uint16_t x90 = 3U;
static int32_t x100 = INT32_MAX;
volatile int32_t x102 = INT32_MIN;
uint64_t x109 = 170041917LLU;
static uint32_t x115 = 75419U;
int32_t t28 = -1;
int32_t x118 = INT32_MIN;
int64_t t29 = -1362718880791LL;
static int64_t x123 = -1LL;
int64_t t30 = -210023814586LL;
int32_t x130 = -1;
static int8_t x131 = INT8_MIN;
uint64_t x132 = UINT64_MAX;
int32_t x136 = INT32_MIN;
int32_t t33 = 43;
int16_t x137 = -58;
int8_t x144 = 8;
int64_t x146 = 61587595LL;
int64_t x149 = INT64_MAX;
static int32_t x150 = 276105364;
static volatile uint32_t t38 = 587U;
int32_t t39 = 109094;
static int8_t x161 = INT8_MAX;
volatile int32_t x162 = -1;
volatile int32_t t40 = 134572;
int8_t x168 = INT8_MIN;
int16_t x171 = INT16_MIN;
static int32_t x172 = -1;
volatile int8_t x175 = INT8_MAX;
volatile int32_t x192 = INT32_MIN;
volatile int32_t t47 = 2417621;
uint16_t x194 = 340U;
int64_t x201 = INT64_MIN;
static int8_t x217 = INT8_MAX;
volatile uint16_t x219 = UINT16_MAX;
int16_t x226 = INT16_MIN;
int16_t x237 = -1536;
int32_t x239 = 14655;
static int64_t x247 = INT64_MIN;
uint32_t x269 = 11715U;
int16_t x270 = INT16_MAX;
static uint32_t t64 = 99191028U;
uint8_t x277 = UINT8_MAX;
int32_t x280 = INT32_MIN;
static int32_t t66 = -1494;
volatile uint16_t x281 = 6532U;
uint16_t x284 = 125U;
volatile uint16_t x286 = 316U;
static volatile int64_t x287 = -1LL;
volatile uint16_t x293 = 13894U;
int8_t x294 = INT8_MAX;
static volatile uint16_t x295 = 6411U;
volatile int8_t x304 = INT8_MAX;
int32_t x310 = INT32_MIN;
int32_t x320 = INT32_MIN;
int32_t x328 = 357987;
static int64_t x331 = 2529407382477949LL;
static volatile int32_t t79 = 1382;
uint8_t x335 = UINT8_MAX;
static int32_t x345 = INT32_MIN;
uint8_t x346 = UINT8_MAX;
int16_t x348 = INT16_MAX;
int32_t x350 = INT32_MIN;
uint32_t x355 = UINT32_MAX;
volatile int32_t t86 = -44;
uint64_t x361 = UINT64_MAX;
uint32_t x363 = 12914U;
int32_t t91 = -6558745;
int16_t x382 = 1;
static volatile uint32_t x383 = UINT32_MAX;
volatile int64_t x384 = INT64_MIN;
static int64_t x388 = -1LL;
int8_t x395 = 59;
int32_t x397 = INT32_MIN;
static volatile uint16_t x400 = 2933U;
static int32_t x404 = -820008476;
uint16_t x406 = 17838U;
int32_t t98 = 2898405;


void f0(void) {
	uint16_t x1 = 981U;
	volatile int8_t x2 = 14;
	static volatile uint32_t x3 = UINT32_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 446;

	t0 = (x1&((x2%x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int16_t x6 = INT16_MIN;
	volatile int32_t x8 = 3403654;
	static int64_t t1 = 1410920LL;

	t1 = (x5&((x6%x7)<=x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x11 = 47452545057134413LL;
	volatile int32_t t2 = 3488229;

	t2 = (x9&((x10%x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -171;

	t3 = (x13&((x14%x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1269567898000LLU;
	int16_t x18 = INT16_MAX;
	static int32_t x19 = -389809;
	static uint16_t x20 = 158U;
	volatile uint64_t t4 = 37753LLU;

	t4 = (x17&((x18%x19)<=x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MAX;

	t5 = (x21&((x22%x23)<=x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint32_t x27 = 70971U;
	uint32_t x28 = 21994016U;
	static volatile int32_t t6 = -1;

	t6 = (x25&((x26%x27)<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	volatile int8_t x30 = INT8_MIN;
	uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = 21555224;

	t7 = (x29&((x30%x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static int8_t x34 = -1;
	static uint8_t x35 = UINT8_MAX;
	static volatile int16_t x36 = 11142;

	t8 = (x33&((x34%x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	static volatile uint32_t x40 = 60005U;
	static int32_t t9 = -5;

	t9 = (x37&((x38%x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 763746U;
	int8_t x43 = 16;
	volatile int32_t t10 = -19161455;

	t10 = (x41&((x42%x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -3;
	int64_t x46 = INT64_MAX;
	uint32_t x47 = 4124656U;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = -767697727;

	t11 = (x45&((x46%x47)<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = INT16_MIN;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 67538;

	t12 = (x49&((x50%x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MAX;
	static int64_t x54 = INT64_MAX;
	int8_t x55 = INT8_MIN;

	t13 = (x53&((x54%x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x58 = 557U;
	static volatile int64_t x59 = INT64_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile uint64_t t14 = 35187956558LLU;

	t14 = (x57&((x58%x59)<=x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = UINT32_MAX;
	int32_t x62 = -1;
	int64_t x63 = INT64_MIN;
	volatile int16_t x64 = INT16_MIN;
	uint32_t t15 = 63680156U;

	t15 = (x61&((x62%x63)<=x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	uint8_t x66 = 85U;
	int16_t x67 = -6148;
	static uint16_t x68 = 31967U;
	static volatile int64_t t16 = 198322111424294928LL;

	t16 = (x65&((x66%x67)<=x68));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int32_t x70 = -1;
	int8_t x71 = 4;
	int32_t x72 = INT32_MAX;
	int32_t t17 = -1576;

	t17 = (x69&((x70%x71)<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	static uint16_t x75 = 9853U;
	uint64_t x76 = 26741431855LLU;
	uint64_t t18 = 1396301LLU;

	t18 = (x73&((x74%x75)<=x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1433U;
	int16_t x78 = 1987;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -13;

	t19 = (x77&((x78%x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	volatile int64_t x82 = INT64_MIN;
	int16_t x83 = 13;
	int64_t t20 = 4LL;

	t20 = (x81&((x82%x83)<=x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 10665111LLU;
	int64_t x86 = -1LL;
	volatile uint64_t t21 = 5626475684712891LLU;

	t21 = (x85&((x86%x87)<=x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -1;
	volatile int64_t x91 = INT64_MIN;
	uint32_t x92 = 15U;
	volatile int32_t t22 = 16571719;

	t22 = (x89&((x90%x91)<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = 188744;
	uint8_t x94 = 7U;
	int32_t x95 = INT32_MAX;
	int16_t x96 = 433;
	volatile int32_t t23 = 4;

	t23 = (x93&((x94%x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 79203236LLU;
	int8_t x98 = 21;
	uint64_t x99 = 64946739708387264LLU;
	uint64_t t24 = 15134LLU;

	t24 = (x97&((x98%x99)<=x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = UINT8_MAX;
	uint32_t x103 = 7U;
	volatile int32_t x104 = INT32_MIN;
	int32_t t25 = 914169;

	t25 = (x101&((x102%x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	volatile uint32_t x106 = UINT32_MAX;
	uint64_t x107 = UINT64_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -12176261;

	t26 = (x105&((x106%x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -1LL;
	static int32_t x111 = -14;
	static int32_t x112 = INT32_MAX;
	uint64_t t27 = 18428387521526LLU;

	t27 = (x109&((x110%x111)<=x112));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MAX;
	volatile int32_t x114 = -1;
	uint32_t x116 = UINT32_MAX;

	t28 = (x113&((x114%x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1LL;
	static volatile int64_t x119 = -1LL;
	int32_t x120 = -1;

	t29 = (x117&((x118%x119)<=x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MAX;
	int64_t x122 = INT64_MIN;
	int32_t x124 = INT32_MIN;

	t30 = (x121&((x122%x123)<=x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	static uint64_t x127 = UINT64_MAX;
	static uint8_t x128 = 11U;
	int32_t t31 = -28;

	t31 = (x125&((x126%x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int32_t t32 = 4076;

	t32 = (x129&((x130%x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int32_t x134 = INT32_MAX;
	uint16_t x135 = 423U;

	t33 = (x133&((x134%x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MAX;
	static uint8_t x139 = UINT8_MAX;
	volatile uint32_t x140 = 127596U;
	volatile int32_t t34 = -7024399;

	t34 = (x137&((x138%x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 26U;
	volatile uint64_t x142 = 2270552153839909293LLU;
	volatile int16_t x143 = -8;
	uint32_t t35 = 4290109U;

	t35 = (x141&((x142%x143)<=x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	static uint64_t x147 = UINT64_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = 6366;

	t36 = (x145&((x146%x147)<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x151 = -1;
	static uint64_t x152 = UINT64_MAX;
	volatile int64_t t37 = -9133280054LL;

	t37 = (x149&((x150%x151)<=x152));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	static int16_t x154 = INT16_MIN;
	int8_t x155 = -1;
	int8_t x156 = 6;

	t38 = (x153&((x154%x155)<=x156));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int16_t x158 = INT16_MAX;
	static int16_t x159 = INT16_MIN;
	int8_t x160 = -1;

	t39 = (x157&((x158%x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x163 = 1826131U;
	int16_t x164 = INT16_MIN;

	t40 = (x161&((x162%x163)<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int8_t x166 = 0;
	uint64_t x167 = UINT64_MAX;
	volatile int32_t t41 = 319837616;

	t41 = (x165&((x166%x167)<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	int32_t t42 = -258899;

	t42 = (x169&((x170%x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x173 = 374818U;
	static int16_t x174 = -1;
	int32_t x176 = INT32_MAX;
	volatile uint32_t t43 = 788U;

	t43 = (x173&((x174%x175)<=x176));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -5501;
	volatile int16_t x178 = -3;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	static volatile int32_t t44 = 535904534;

	t44 = (x177&((x178%x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 249U;
	uint8_t x182 = 0U;
	int32_t x183 = -1;
	volatile int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -1443699;

	t45 = (x181&((x182%x183)<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MAX;
	int32_t x186 = -1;
	volatile int32_t x187 = 367990594;
	volatile uint64_t x188 = 7605LLU;
	int32_t t46 = 30295;

	t46 = (x185&((x186%x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int16_t x190 = INT16_MIN;
	static volatile uint32_t x191 = UINT32_MAX;

	t47 = (x189&((x190%x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 0;
	int16_t x195 = INT16_MAX;
	int64_t x196 = -1LL;
	volatile int32_t t48 = -2967984;

	t48 = (x193&((x194%x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = INT64_MIN;
	int64_t x203 = 446667LL;
	static uint16_t x204 = 2908U;
	volatile int64_t t49 = -4489LL;

	t49 = (x201&((x202%x203)<=x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x205 = UINT64_MAX;
	int16_t x206 = 1;
	int64_t x207 = INT64_MAX;
	static uint16_t x208 = 6U;
	uint64_t t50 = 6472566916927LLU;

	t50 = (x205&((x206%x207)<=x208));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MIN;
	int64_t x211 = 36010232LL;
	int8_t x212 = INT8_MIN;
	int32_t t51 = -236539;

	t51 = (x209&((x210%x211)<=x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = 86591808LLU;
	int16_t x215 = -137;
	int8_t x216 = -1;
	static uint64_t t52 = 9052LLU;

	t52 = (x213&((x214%x215)<=x216));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x218 = -1LL;
	static uint64_t x220 = UINT64_MAX;
	int32_t t53 = 25036864;

	t53 = (x217&((x218%x219)<=x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MAX;
	static int16_t x222 = INT16_MIN;
	int32_t x223 = 4;
	uint64_t x224 = UINT64_MAX;
	volatile int64_t t54 = -210LL;

	t54 = (x221&((x222%x223)<=x224));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = 9416390U;
	int16_t x227 = -3417;
	static volatile uint32_t x228 = UINT32_MAX;
	uint32_t t55 = 22349223U;

	t55 = (x225&((x226%x227)<=x228));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = -1LL;
	int8_t x234 = INT8_MAX;
	uint64_t x235 = 2LLU;
	uint64_t x236 = 18442928318LLU;
	int64_t t56 = -2956390845461752LL;

	t56 = (x233&((x234%x235)<=x236));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x238 = -374003638LL;
	volatile int64_t x240 = INT64_MIN;
	volatile int32_t t57 = -139346;

	t57 = (x237&((x238%x239)<=x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = 1;
	static int32_t x242 = -1;
	int64_t x243 = 63277704568433416LL;
	static volatile uint64_t x244 = 13315363051703046LLU;
	static volatile int32_t t58 = -25464937;

	t58 = (x241&((x242%x243)<=x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -1;
	static volatile int64_t x246 = -30161312627387LL;
	uint32_t x248 = 5384735U;
	static int32_t t59 = -1;

	t59 = (x245&((x246%x247)<=x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	static int16_t x250 = 8;
	int64_t x251 = 59LL;
	int16_t x252 = INT16_MAX;
	int64_t t60 = -4086569387280LL;

	t60 = (x249&((x250%x251)<=x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = 248242;
	int64_t x258 = -223763691267LL;
	static volatile uint32_t x259 = 13184U;
	static volatile int64_t x260 = INT64_MIN;
	static int32_t t61 = 15403289;

	t61 = (x257&((x258%x259)<=x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = UINT64_MAX;
	uint32_t x262 = UINT32_MAX;
	uint32_t x263 = 87402315U;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t62 = 2020613LLU;

	t62 = (x261&((x262%x263)<=x264));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 8145146701586LLU;
	int32_t x267 = INT32_MIN;
	volatile uint64_t x268 = 421006615817LLU;
	static int32_t t63 = -7989856;

	t63 = (x265&((x266%x267)<=x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x271 = INT16_MIN;
	volatile int16_t x272 = INT16_MIN;

	t64 = (x269&((x270%x271)<=x272));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 3U;
	int16_t x274 = INT16_MIN;
	uint32_t x275 = 1U;
	static uint32_t x276 = 371U;
	int32_t t65 = -4648;

	t65 = (x273&((x274%x275)<=x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x278 = 21U;
	int32_t x279 = INT32_MIN;

	t66 = (x277&((x278%x279)<=x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x282 = INT64_MIN;
	volatile int16_t x283 = 2834;
	int32_t t67 = -3;

	t67 = (x281&((x282%x283)<=x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x285 = INT8_MAX;
	uint8_t x288 = 1U;
	volatile int32_t t68 = 70471741;

	t68 = (x285&((x286%x287)<=x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x289 = UINT32_MAX;
	volatile int16_t x290 = -1;
	int16_t x291 = -1;
	static uint16_t x292 = UINT16_MAX;
	uint32_t t69 = 3707256U;

	t69 = (x289&((x290%x291)<=x292));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x296 = UINT16_MAX;
	int32_t t70 = 14;

	t70 = (x293&((x294%x295)<=x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = INT8_MIN;
	uint32_t x298 = UINT32_MAX;
	int32_t x299 = INT32_MAX;
	volatile int32_t x300 = INT32_MAX;
	volatile int32_t t71 = -40594;

	t71 = (x297&((x298%x299)<=x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x301 = -3;
	volatile int16_t x302 = INT16_MIN;
	static uint16_t x303 = 4930U;
	volatile int32_t t72 = 290021073;

	t72 = (x301&((x302%x303)<=x304));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MIN;
	int64_t x307 = -14338639779235LL;
	static int32_t x308 = INT32_MAX;
	int32_t t73 = -12381934;

	t73 = (x305&((x306%x307)<=x308));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x309 = INT64_MAX;
	volatile int64_t x311 = -49112966892329LL;
	uint16_t x312 = 51U;
	int64_t t74 = 210013638994LL;

	t74 = (x309&((x310%x311)<=x312));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MIN;
	uint64_t x314 = 21519606139LLU;
	int8_t x315 = INT8_MIN;
	uint32_t x316 = 0U;
	volatile int64_t t75 = 1646726363497LL;

	t75 = (x313&((x314%x315)<=x316));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x317 = 5743568831132670168LLU;
	int8_t x318 = INT8_MIN;
	int32_t x319 = -1;
	volatile uint64_t t76 = 3952930077594LLU;

	t76 = (x317&((x318%x319)<=x320));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = -1;
	static volatile uint16_t x323 = 5195U;
	uint32_t x324 = 12U;
	volatile int32_t t77 = -1107918;

	t77 = (x321&((x322%x323)<=x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x325 = 38LL;
	static int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	volatile int64_t t78 = 13050300LL;

	t78 = (x325&((x326%x327)<=x328));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	static int16_t x332 = INT16_MIN;

	t79 = (x329&((x330%x331)<=x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x333 = 238670785LL;
	int16_t x334 = INT16_MAX;
	uint64_t x336 = 6057581857949130LLU;
	int64_t t80 = 876442605391670LL;

	t80 = (x333&((x334%x335)<=x336));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MIN;
	uint8_t x338 = 28U;
	int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t81 = 485075;

	t81 = (x337&((x338%x339)<=x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = -15;
	volatile uint32_t x342 = 20559U;
	static int16_t x343 = -1;
	static uint16_t x344 = UINT16_MAX;
	volatile int32_t t82 = 3168;

	t82 = (x341&((x342%x343)<=x344));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x347 = -1;
	volatile int32_t t83 = 1;

	t83 = (x345&((x346%x347)<=x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x349 = 1019291209954LLU;
	int8_t x351 = 2;
	uint64_t x352 = 846097922LLU;
	volatile uint64_t t84 = 2189221454952LLU;

	t84 = (x349&((x350%x351)<=x352));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = -1;
	static int16_t x354 = INT16_MAX;
	volatile int16_t x356 = INT16_MIN;
	int32_t t85 = 46;

	t85 = (x353&((x354%x355)<=x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = INT8_MIN;
	volatile int32_t x359 = INT32_MAX;
	int16_t x360 = 7730;

	t86 = (x357&((x358%x359)<=x360));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x362 = -166;
	int64_t x364 = INT64_MAX;
	uint64_t t87 = 47LLU;

	t87 = (x361&((x362%x363)<=x364));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = 89130U;
	int64_t x366 = -1LL;
	uint8_t x367 = 1U;
	static volatile int8_t x368 = INT8_MIN;
	uint32_t t88 = 4729882U;

	t88 = (x365&((x366%x367)<=x368));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = UINT16_MAX;
	static int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t89 = -40593;

	t89 = (x369&((x370%x371)<=x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = -1LL;
	uint8_t x374 = 1U;
	volatile int8_t x375 = -14;
	static uint16_t x376 = 5805U;
	static int64_t t90 = -28211LL;

	t90 = (x373&((x374%x375)<=x376));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MIN;
	uint64_t x379 = UINT64_MAX;
	uint8_t x380 = 29U;

	t91 = (x377&((x378%x379)<=x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x381 = 2U;
	volatile int32_t t92 = 1154;

	t92 = (x381&((x382%x383)<=x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MAX;
	int8_t x386 = 8;
	volatile uint8_t x387 = UINT8_MAX;
	volatile int32_t t93 = -1649;

	t93 = (x385&((x386%x387)<=x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x389 = -40193334471654726LL;
	int64_t x390 = INT64_MIN;
	int64_t x391 = -14338521LL;
	int32_t x392 = INT32_MIN;
	volatile int64_t t94 = -735525451LL;

	t94 = (x389&((x390%x391)<=x392));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 2662751951778LLU;
	static int8_t x396 = INT8_MAX;
	static int32_t t95 = 923571;

	t95 = (x393&((x394%x395)<=x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x398 = 1089LLU;
	volatile int16_t x399 = INT16_MAX;
	volatile int32_t t96 = -49;

	t96 = (x397&((x398%x399)<=x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = 213U;
	volatile int8_t x402 = 6;
	static int64_t x403 = INT64_MIN;
	volatile int32_t t97 = -7;

	t97 = (x401&((x402%x403)<=x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = -1;
	volatile int32_t x407 = INT32_MIN;
	uint16_t x408 = 13U;

	t98 = (x405&((x406%x407)<=x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 0LLU;
	static int32_t x410 = INT32_MIN;
	static uint16_t x411 = UINT16_MAX;
	volatile int16_t x412 = INT16_MAX;
	uint64_t t99 = 16962370LLU;

	t99 = (x409&((x410%x411)<=x412));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

