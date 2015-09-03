#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 23U;
uint8_t x5 = UINT8_MAX;
uint16_t x7 = 3682U;
volatile int32_t t3 = -6842;
int8_t x24 = INT8_MIN;
int32_t x29 = -330466712;
static uint32_t x32 = 2U;
int64_t x43 = 499LL;
int16_t x47 = INT16_MIN;
static int32_t x53 = 31;
int32_t x60 = INT32_MIN;
int32_t t13 = -140371;
int8_t x69 = -1;
volatile int32_t t15 = 37028255;
static volatile int32_t t18 = -102198;
volatile int64_t x87 = -7746805073408LL;
int64_t x92 = INT64_MIN;
static volatile int32_t t20 = -7183;
volatile int8_t x100 = INT8_MIN;
static int32_t t22 = 10;
int32_t x106 = -7824389;
int64_t x107 = INT64_MIN;
uint8_t x110 = 10U;
uint64_t x118 = 2LLU;
volatile int32_t t26 = -1260808;
int8_t x136 = INT8_MIN;
static volatile uint64_t x137 = 13750092208LLU;
static int64_t x139 = 4682828LL;
int32_t t32 = 10884493;
int16_t x152 = INT16_MIN;
static uint16_t x154 = 11U;
int32_t x158 = INT32_MIN;
int32_t t36 = -2394;
int16_t x171 = 1;
uint64_t x176 = 66704571982LLU;
int32_t x187 = 232;
int32_t x189 = -1;
static volatile uint32_t x191 = 304232U;
uint32_t x192 = 34051U;
int32_t x193 = INT32_MIN;
int64_t x194 = INT64_MIN;
uint16_t x196 = UINT16_MAX;
int32_t x199 = -3711;
int64_t x205 = 5050976794078LL;
static volatile int32_t t46 = -2197833;
static int16_t x209 = INT16_MIN;
int64_t x222 = INT64_MIN;
volatile int32_t x224 = 10506;
int16_t x235 = INT16_MIN;
uint16_t x263 = 303U;
int64_t x276 = -1LL;
static int8_t x289 = -5;
uint8_t x290 = UINT8_MAX;
int8_t x292 = INT8_MAX;
int32_t t64 = 1364212;
int16_t x298 = INT16_MAX;
int64_t x306 = -21695970LL;
int64_t x312 = 6182806059LL;
static uint32_t x314 = 39039U;
uint64_t x318 = 34418175657983981LLU;
int16_t x324 = -1;
int64_t x334 = -1LL;
uint16_t x337 = 6U;
int32_t x338 = INT32_MIN;
int64_t x346 = -1LL;
uint32_t x349 = 0U;
int8_t x351 = -1;
static int8_t x352 = INT8_MIN;
int32_t t75 = 824028819;
int16_t x354 = INT16_MAX;
int32_t t76 = 1;
static uint16_t x363 = 5162U;
volatile int32_t t80 = -230482;
int64_t x384 = -460402446605579LL;
volatile int32_t t82 = 8290345;
volatile int32_t t83 = 1;
uint32_t x397 = 15U;
uint8_t x401 = 83U;
volatile uint64_t x402 = UINT64_MAX;
static volatile int32_t t85 = 1166;
uint32_t x410 = 737898U;
int16_t x415 = 0;
int32_t t91 = 2788177;
static volatile int32_t t93 = 21563;
uint32_t x453 = 0U;
int32_t x461 = INT32_MIN;
int32_t t98 = 1286167;
volatile int8_t x466 = INT8_MIN;
int64_t x468 = INT64_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = 47956532;

	t0 = ((x1&(x2-x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -8961992;

	t1 = ((x5&(x6-x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int8_t x10 = 20;
	int16_t x11 = -5071;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = -3701;

	t2 = ((x9&(x10-x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	uint32_t x18 = 45641199U;
	static int8_t x19 = INT8_MIN;
	volatile int64_t x20 = INT64_MIN;

	t3 = ((x17&(x18-x19))<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	uint64_t x22 = 919137149472277LLU;
	static uint8_t x23 = 1U;
	int32_t t4 = 2;

	t4 = ((x21&(x22-x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 0;
	int16_t x26 = INT16_MAX;
	uint32_t x27 = 13365084U;
	volatile uint64_t x28 = 12107919181LLU;
	static volatile int32_t t5 = 1969;

	t5 = ((x25&(x26-x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = INT16_MIN;
	volatile uint32_t x31 = 96314779U;
	volatile int32_t t6 = 23;

	t6 = ((x29&(x30-x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 586341386U;
	static uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MIN;
	uint16_t x36 = 24U;
	volatile int32_t t7 = 89510;

	t7 = ((x33&(x34-x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = -6834165706LL;
	uint8_t x39 = 9U;
	int64_t x40 = INT64_MIN;
	int32_t t8 = -1942;

	t8 = ((x37&(x38-x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = 25733465LL;
	static int16_t x42 = -1;
	uint32_t x44 = 824U;
	volatile int32_t t9 = -31529;

	t9 = ((x41&(x42-x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = -1;
	uint8_t x46 = 57U;
	int8_t x48 = INT8_MAX;
	int32_t t10 = 21564;

	t10 = ((x45&(x46-x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x54 = 205LLU;
	int32_t x55 = 119430;
	int64_t x56 = -1LL;
	int32_t t11 = -378206;

	t11 = ((x53&(x54-x55))<=x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	uint16_t x58 = 3U;
	static int32_t x59 = -1;
	static int32_t t12 = -3;

	t12 = ((x57&(x58-x59))<=x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 6239U;
	int16_t x62 = 1;
	int8_t x63 = -1;
	int8_t x64 = INT8_MIN;

	t13 = ((x61&(x62-x63))<=x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x66 = -1;
	static int16_t x67 = 3357;
	int8_t x68 = 50;
	int32_t t14 = -38;

	t14 = ((x65&(x66-x67))<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x70 = -1904923;
	uint64_t x71 = 140568LLU;
	int16_t x72 = INT16_MAX;

	t15 = ((x69&(x70-x71))<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = 62;
	uint64_t x74 = 694383960LLU;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = 3U;
	int32_t t16 = 1;

	t16 = ((x73&(x74-x75))<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x77 = 0LLU;
	int64_t x78 = -1593912630459789LL;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = 68826394054108LLU;
	volatile int32_t t17 = -7353025;

	t17 = ((x77&(x78-x79))<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 55214489LLU;
	static uint16_t x82 = 12336U;
	uint16_t x83 = 145U;
	int16_t x84 = -79;

	t18 = ((x81&(x82-x83))<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 3770724288LLU;
	int8_t x86 = -1;
	int16_t x88 = 9697;
	volatile int32_t t19 = -20;

	t19 = ((x85&(x86-x87))<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	volatile int32_t x91 = -574910764;

	t20 = ((x89&(x90-x91))<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = 17966239500592750LL;
	static volatile int8_t x94 = INT8_MIN;
	volatile uint64_t x95 = 3LLU;
	uint64_t x96 = 22949387446679726LLU;
	int32_t t21 = -96057;

	t21 = ((x93&(x94-x95))<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = INT8_MIN;
	static uint32_t x98 = UINT32_MAX;
	volatile int8_t x99 = INT8_MAX;

	t22 = ((x97&(x98-x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x105 = 447;
	int8_t x108 = -1;
	int32_t t23 = -368071;

	t23 = ((x105&(x106-x107))<=x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = -1;
	uint32_t x111 = 80U;
	uint16_t x112 = 4U;
	volatile int32_t t24 = -390;

	t24 = ((x109&(x110-x111))<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x113 = INT64_MIN;
	static uint8_t x114 = UINT8_MAX;
	static int16_t x115 = INT16_MAX;
	volatile uint8_t x116 = UINT8_MAX;
	volatile int32_t t25 = -1358;

	t25 = ((x113&(x114-x115))<=x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 1U;
	uint16_t x119 = 19885U;
	volatile uint16_t x120 = 1678U;

	t26 = ((x117&(x118-x119))<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = -1;
	volatile int8_t x122 = -1;
	int32_t x123 = -755358822;
	int64_t x124 = -1LL;
	static volatile int32_t t27 = -3415041;

	t27 = ((x121&(x122-x123))<=x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 896789323U;
	static int16_t x127 = -87;
	uint32_t x128 = 354U;
	int32_t t28 = 10467;

	t28 = ((x125&(x126-x127))<=x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = 19660;
	int64_t x130 = INT64_MIN;
	int32_t x131 = -51873545;
	int64_t x132 = INT64_MAX;
	int32_t t29 = 247339803;

	t29 = ((x129&(x130-x131))<=x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 63U;
	uint16_t x134 = 1516U;
	int8_t x135 = INT8_MIN;
	int32_t t30 = 64779571;

	t30 = ((x133&(x134-x135))<=x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = INT16_MIN;
	static volatile int32_t x140 = INT32_MIN;
	static int32_t t31 = 505;

	t31 = ((x137&(x138-x139))<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 5U;
	static int8_t x142 = INT8_MIN;
	static uint32_t x143 = 36068375U;
	static int8_t x144 = -1;

	t32 = ((x141&(x142-x143))<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x145 = -1;
	uint8_t x146 = UINT8_MAX;
	int64_t x147 = INT64_MAX;
	volatile int64_t x148 = 71666006593LL;
	int32_t t33 = -7243;

	t33 = ((x145&(x146-x147))<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 73U;
	int32_t x150 = INT32_MIN;
	int32_t x151 = -2648;
	int32_t t34 = -41711;

	t34 = ((x149&(x150-x151))<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = -1;
	int16_t x155 = -7;
	static int16_t x156 = -1;
	volatile int32_t t35 = -211199;

	t35 = ((x153&(x154-x155))<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	volatile int32_t x160 = INT32_MAX;

	t36 = ((x157&(x158-x159))<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -3477727339909LL;
	volatile uint16_t x162 = 3U;
	volatile uint8_t x163 = 111U;
	static int64_t x164 = INT64_MIN;
	volatile int32_t t37 = 21961;

	t37 = ((x161&(x162-x163))<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 282U;
	int8_t x170 = INT8_MIN;
	int64_t x172 = 0LL;
	volatile int32_t t38 = 1;

	t38 = ((x169&(x170-x171))<=x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MAX;
	int16_t x174 = -1;
	int32_t x175 = INT32_MAX;
	volatile int32_t t39 = 1568;

	t39 = ((x173&(x174-x175))<=x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = -40;
	static uint64_t x183 = 235220435334594LLU;
	int32_t x184 = INT32_MAX;
	volatile int32_t t40 = -41909;

	t40 = ((x181&(x182-x183))<=x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	uint32_t x186 = 180750289U;
	volatile uint8_t x188 = 15U;
	volatile int32_t t41 = -640837375;

	t41 = ((x185&(x186-x187))<=x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x190 = -1;
	int32_t t42 = -7;

	t42 = ((x189&(x190-x191))<=x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x195 = -1;
	int32_t t43 = 17839;

	t43 = ((x193&(x194-x195))<=x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MAX;
	uint16_t x198 = 528U;
	volatile int8_t x200 = -1;
	int32_t t44 = 0;

	t44 = ((x197&(x198-x199))<=x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x201 = UINT8_MAX;
	static int64_t x202 = INT64_MIN;
	int8_t x203 = -1;
	int16_t x204 = INT16_MAX;
	volatile int32_t t45 = -1009;

	t45 = ((x201&(x202-x203))<=x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x206 = INT32_MAX;
	static uint8_t x207 = 8U;
	volatile int64_t x208 = INT64_MAX;

	t46 = ((x205&(x206-x207))<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x210 = 1087557LLU;
	static int32_t x211 = INT32_MIN;
	static int8_t x212 = 56;
	volatile int32_t t47 = 469402435;

	t47 = ((x209&(x210-x211))<=x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MAX;
	volatile int8_t x214 = 0;
	uint8_t x215 = 1U;
	volatile int8_t x216 = INT8_MAX;
	int32_t t48 = -20069145;

	t48 = ((x213&(x214-x215))<=x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = 24;
	static int8_t x218 = INT8_MIN;
	volatile int16_t x219 = INT16_MIN;
	volatile uint32_t x220 = 4310U;
	volatile int32_t t49 = 1;

	t49 = ((x217&(x218-x219))<=x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 1578265274426LLU;
	uint64_t x223 = 18621509966824LLU;
	volatile int32_t t50 = -4168;

	t50 = ((x221&(x222-x223))<=x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MIN;
	volatile int32_t x226 = 2709;
	uint32_t x227 = 425U;
	static int64_t x228 = INT64_MIN;
	int32_t t51 = 97544;

	t51 = ((x225&(x226-x227))<=x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x233 = 44U;
	static volatile uint32_t x234 = UINT32_MAX;
	uint32_t x236 = 473673546U;
	volatile int32_t t52 = -32051;

	t52 = ((x233&(x234-x235))<=x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = 1006;
	int16_t x242 = INT16_MAX;
	uint8_t x243 = UINT8_MAX;
	static int16_t x244 = -778;
	int32_t t53 = -13;

	t53 = ((x241&(x242-x243))<=x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x245 = INT8_MAX;
	uint64_t x246 = UINT64_MAX;
	volatile int8_t x247 = INT8_MIN;
	uint32_t x248 = 4424450U;
	static int32_t t54 = -2100;

	t54 = ((x245&(x246-x247))<=x248);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x249 = -6022LL;
	static int32_t x250 = 9781;
	volatile int32_t x251 = 2557106;
	int16_t x252 = INT16_MAX;
	int32_t t55 = -207612;

	t55 = ((x249&(x250-x251))<=x252);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x257 = -1;
	volatile int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MIN;
	int16_t x260 = -213;
	static int32_t t56 = 457518;

	t56 = ((x257&(x258-x259))<=x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MIN;
	static volatile uint8_t x262 = 0U;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t57 = 834896;

	t57 = ((x261&(x262-x263))<=x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x265 = INT16_MAX;
	static int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	volatile int16_t x268 = INT16_MAX;
	volatile int32_t t58 = -798623;

	t58 = ((x265&(x266-x267))<=x268);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = 455LLU;
	static int16_t x271 = -4;
	uint64_t x272 = 451946573154612649LLU;
	int32_t t59 = 1508;

	t59 = ((x269&(x270-x271))<=x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MAX;
	uint8_t x274 = 0U;
	int32_t x275 = 2;
	int32_t t60 = -348160;

	t60 = ((x273&(x274-x275))<=x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x281 = UINT64_MAX;
	uint64_t x282 = 1103575701962210LLU;
	int8_t x283 = INT8_MIN;
	int32_t x284 = -261631521;
	volatile int32_t t61 = 231422;

	t61 = ((x281&(x282-x283))<=x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = -6960;
	int64_t x286 = -1LL;
	uint64_t x287 = 248LLU;
	int8_t x288 = INT8_MIN;
	int32_t t62 = 79539140;

	t62 = ((x285&(x286-x287))<=x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x291 = INT32_MAX;
	volatile int32_t t63 = -121704214;

	t63 = ((x289&(x290-x291))<=x292);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = 10;
	uint16_t x294 = 189U;
	int16_t x295 = -12256;
	uint64_t x296 = UINT64_MAX;

	t64 = ((x293&(x294-x295))<=x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MIN;
	uint32_t x299 = UINT32_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t65 = 3;

	t65 = ((x297&(x298-x299))<=x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x305 = -200640153827372LL;
	int16_t x307 = INT16_MAX;
	uint8_t x308 = UINT8_MAX;
	static volatile int32_t t66 = -27680;

	t66 = ((x305&(x306-x307))<=x308);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x309 = 3LLU;
	volatile int64_t x310 = -1LL;
	uint8_t x311 = 0U;
	volatile int32_t t67 = 25736302;

	t67 = ((x309&(x310-x311))<=x312);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x313 = 6;
	static uint8_t x315 = UINT8_MAX;
	uint32_t x316 = 3812127U;
	static int32_t t68 = 77789;

	t68 = ((x313&(x314-x315))<=x316);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	int32_t x319 = 19076400;
	int64_t x320 = -1LL;
	static int32_t t69 = -671;

	t69 = ((x317&(x318-x319))<=x320);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x321 = 2011661357U;
	volatile int16_t x322 = INT16_MIN;
	uint32_t x323 = 2978654U;
	int32_t t70 = -96228;

	t70 = ((x321&(x322-x323))<=x324);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x325 = -4;
	static int64_t x326 = -1LL;
	int8_t x327 = INT8_MIN;
	volatile int16_t x328 = -49;
	int32_t t71 = -328968845;

	t71 = ((x325&(x326-x327))<=x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = INT16_MIN;
	static int64_t x335 = -16733981324904658LL;
	int64_t x336 = INT64_MIN;
	int32_t t72 = -409;

	t72 = ((x333&(x334-x335))<=x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x339 = -5;
	int8_t x340 = INT8_MAX;
	int32_t t73 = -52;

	t73 = ((x337&(x338-x339))<=x340);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x345 = -1;
	int64_t x347 = -1LL;
	uint16_t x348 = 10890U;
	int32_t t74 = -10575902;

	t74 = ((x345&(x346-x347))<=x348);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x350 = UINT8_MAX;

	t75 = ((x349&(x350-x351))<=x352);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x353 = INT8_MAX;
	int32_t x355 = 269157164;
	static int8_t x356 = INT8_MIN;

	t76 = ((x353&(x354-x355))<=x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = -1LL;
	static int8_t x358 = INT8_MAX;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MAX;
	int32_t t77 = 44;

	t77 = ((x357&(x358-x359))<=x360);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x361 = 1U;
	volatile uint32_t x362 = UINT32_MAX;
	uint64_t x364 = UINT64_MAX;
	int32_t t78 = 7568719;

	t78 = ((x361&(x362-x363))<=x364);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x369 = 9065U;
	int64_t x370 = INT64_MIN;
	int8_t x371 = -1;
	uint16_t x372 = UINT16_MAX;
	static volatile int32_t t79 = -1000;

	t79 = ((x369&(x370-x371))<=x372);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x377 = 7556488778527051LLU;
	int64_t x378 = 49LL;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MAX;

	t80 = ((x377&(x378-x379))<=x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int32_t x382 = INT32_MAX;
	int16_t x383 = 38;
	static volatile int32_t t81 = -2502563;

	t81 = ((x381&(x382-x383))<=x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x389 = -1LL;
	uint8_t x390 = 2U;
	uint8_t x391 = 1U;
	uint8_t x392 = 122U;

	t82 = ((x389&(x390-x391))<=x392);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x393 = INT8_MAX;
	int16_t x394 = INT16_MIN;
	uint16_t x395 = 57U;
	int16_t x396 = INT16_MAX;

	t83 = ((x393&(x394-x395))<=x396);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x398 = -1;
	volatile int32_t x399 = -4;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t84 = 68125;

	t84 = ((x397&(x398-x399))<=x400);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x403 = -3553;
	uint64_t x404 = 5LLU;

	t85 = ((x401&(x402-x403))<=x404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x405 = 21704U;
	static volatile uint32_t x406 = UINT32_MAX;
	volatile int8_t x407 = -1;
	volatile int8_t x408 = -1;
	int32_t t86 = 0;

	t86 = ((x405&(x406-x407))<=x408);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x409 = 15310U;
	int32_t x411 = INT32_MAX;
	volatile int16_t x412 = INT16_MAX;
	static volatile int32_t t87 = -3740;

	t87 = ((x409&(x410-x411))<=x412);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x413 = UINT64_MAX;
	int16_t x414 = -3;
	uint64_t x416 = 5464161LLU;
	volatile int32_t t88 = -961146;

	t88 = ((x413&(x414-x415))<=x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x417 = INT8_MAX;
	int32_t x418 = INT32_MIN;
	volatile int8_t x419 = INT8_MIN;
	static uint32_t x420 = 3643U;
	int32_t t89 = -1033770;

	t89 = ((x417&(x418-x419))<=x420);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -34;
	volatile uint32_t x422 = 1155U;
	int8_t x423 = -1;
	volatile uint8_t x424 = 59U;
	volatile int32_t t90 = 0;

	t90 = ((x421&(x422-x423))<=x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x433 = 1016490435369LLU;
	int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	int64_t x436 = 17699363LL;

	t91 = ((x433&(x434-x435))<=x436);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = -19456LL;
	int16_t x438 = -4;
	uint8_t x439 = 126U;
	volatile uint16_t x440 = 2U;
	volatile int32_t t92 = 3;

	t92 = ((x437&(x438-x439))<=x440);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x441 = 88675510U;
	int8_t x442 = -1;
	volatile int64_t x443 = -4423565194373196826LL;
	int8_t x444 = INT8_MAX;

	t93 = ((x441&(x442-x443))<=x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x445 = UINT64_MAX;
	volatile int32_t x446 = -1;
	static int8_t x447 = INT8_MAX;
	int32_t x448 = -2529;
	int32_t t94 = 1;

	t94 = ((x445&(x446-x447))<=x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x449 = INT8_MIN;
	int32_t x450 = -122882;
	static volatile int16_t x451 = 503;
	static int16_t x452 = 0;
	int32_t t95 = -1;

	t95 = ((x449&(x450-x451))<=x452);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x454 = -1;
	static int64_t x455 = INT64_MAX;
	volatile uint64_t x456 = UINT64_MAX;
	int32_t t96 = 661078173;

	t96 = ((x453&(x454-x455))<=x456);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x457 = INT32_MIN;
	volatile int16_t x458 = INT16_MIN;
	volatile int8_t x459 = -62;
	int32_t x460 = -10782322;
	static int32_t t97 = -805;

	t97 = ((x457&(x458-x459))<=x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x462 = 7026LLU;
	static int8_t x463 = -1;
	int16_t x464 = INT16_MIN;

	t98 = ((x461&(x462-x463))<=x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = 1;
	int16_t x467 = INT16_MIN;
	volatile int32_t t99 = 4975;

	t99 = ((x465&(x466-x467))<=x468);

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

