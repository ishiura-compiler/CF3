#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = 0;
int32_t x13 = INT32_MAX;
int32_t x24 = INT32_MAX;
volatile int32_t t5 = -43;
volatile int8_t x29 = INT8_MIN;
int32_t x30 = INT32_MAX;
uint8_t x37 = 65U;
int32_t x40 = -1;
volatile int32_t t12 = -1;
int32_t x57 = 467;
static int32_t t14 = -16299269;
uint64_t x68 = 1LLU;
int32_t t16 = 7;
static volatile int32_t x69 = INT32_MIN;
int32_t x71 = -1;
int8_t x73 = -1;
uint32_t x83 = 1904600088U;
volatile uint32_t x87 = 226806U;
static volatile int32_t t22 = 1425102;
int64_t x107 = -6236LL;
int32_t x109 = -1;
int8_t x110 = INT8_MIN;
static int8_t x111 = INT8_MAX;
int32_t t26 = 68307891;
static uint64_t x119 = 29476989LLU;
int8_t x121 = INT8_MAX;
volatile int32_t t28 = 13341;
volatile int32_t t33 = -1;
int64_t x146 = 1608406302LL;
int8_t x159 = -1;
int16_t x164 = 226;
int16_t x165 = 12;
static int64_t x169 = -468LL;
volatile int32_t t41 = 49;
uint64_t x190 = 8201259LLU;
int8_t x200 = INT8_MIN;
static int8_t x201 = -1;
volatile int32_t t46 = -392553199;
volatile int32_t x205 = -1;
static int8_t x221 = INT8_MIN;
volatile int32_t t50 = 90410;
int16_t x227 = -1;
volatile int64_t x237 = -77LL;
volatile uint8_t x238 = 3U;
static uint16_t x241 = 6392U;
static volatile int8_t x243 = INT8_MIN;
int32_t x244 = -637;
int32_t t54 = -51;
static volatile int32_t x247 = 6;
static uint16_t x257 = UINT16_MAX;
uint64_t x260 = 7481821817LLU;
uint64_t x262 = 13779513LLU;
static volatile uint8_t x275 = 4U;
uint32_t x288 = UINT32_MAX;
uint64_t x293 = 192945614293LLU;
int64_t x300 = -1LL;
volatile int32_t t69 = -4198;
static uint64_t x314 = UINT64_MAX;
static uint32_t x315 = 15926624U;
int16_t x319 = INT16_MAX;
int64_t x320 = -1LL;
int32_t x321 = INT32_MAX;
volatile int16_t x347 = INT16_MIN;
volatile int32_t t80 = 57385943;
int32_t x354 = -640286;
volatile int16_t x357 = INT16_MAX;
static int16_t x361 = -1;
int64_t x366 = -1LL;
volatile int32_t x370 = 1980152;
volatile int32_t t85 = 206295439;
volatile int8_t x373 = INT8_MIN;
int32_t x380 = -894;
uint8_t x381 = UINT8_MAX;
static int32_t t88 = 1;
static uint32_t x386 = 1835518739U;
int16_t x394 = -1;
static volatile int32_t t92 = 1118331;
volatile int32_t x403 = 208021;
uint16_t x404 = UINT16_MAX;
static volatile int32_t t93 = 119054;
uint8_t x416 = UINT8_MAX;
volatile int32_t t96 = 3395605;
static int32_t t97 = 4843308;
volatile int64_t x423 = INT64_MIN;
int32_t t98 = 12194544;


void f0(void) {
	int64_t x1 = -1LL;
	int16_t x2 = 499;
	int16_t x3 = -450;
	int16_t x4 = -9613;
	volatile int32_t t0 = 48;

	t0 = ((x1&x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MAX;
	int64_t x7 = -1LL;
	uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = 1;

	t1 = ((x5&x6)==(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -858;
	int16_t x10 = -1;
	volatile uint8_t x11 = UINT8_MAX;
	int64_t x12 = -10045LL;

	t2 = ((x9&x10)==(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	static uint16_t x15 = 14U;
	uint16_t x16 = 4U;
	volatile int32_t t3 = 96;

	t3 = ((x13&x14)==(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 45255640LLU;
	int8_t x18 = -1;
	static int8_t x19 = -1;
	int8_t x20 = INT8_MAX;
	int32_t t4 = -117;

	t4 = ((x17&x18)==(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int32_t x22 = -1602;
	volatile uint8_t x23 = 0U;

	t5 = ((x21&x22)==(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	static int64_t x26 = INT64_MIN;
	volatile int16_t x27 = -11;
	int64_t x28 = INT64_MAX;
	static volatile int32_t t6 = 70552;

	t6 = ((x25&x26)==(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x31 = 2U;
	uint64_t x32 = 4182520164897813LLU;
	int32_t t7 = 3024;

	t7 = ((x29&x30)==(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = 49696152068720LL;
	int16_t x34 = 4;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = 36030LLU;
	int32_t t8 = 305549;

	t8 = ((x33&x34)==(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x38 = 14U;
	static int8_t x39 = 1;
	int32_t t9 = 6155;

	t9 = ((x37&x38)==(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 1876LLU;
	static int8_t x42 = 1;
	int64_t x43 = -1LL;
	uint64_t x44 = 380LLU;
	static int32_t t10 = -2096657;

	t10 = ((x41&x42)==(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = UINT8_MAX;
	static uint16_t x47 = UINT16_MAX;
	uint64_t x48 = 42LLU;
	volatile int32_t t11 = 1;

	t11 = ((x45&x46)==(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 1U;
	static uint32_t x50 = 26734039U;
	volatile int8_t x51 = 1;
	int32_t x52 = -1;

	t12 = ((x49&x50)==(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = -1;
	int32_t x56 = 6;
	static volatile int32_t t13 = -247719;

	t13 = ((x53&x54)==(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 19938;
	int32_t x59 = INT32_MAX;
	int32_t x60 = 16;

	t14 = ((x57&x58)==(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 31936578LLU;
	volatile uint32_t x62 = 2477U;
	static uint16_t x63 = 45U;
	static volatile int64_t x64 = 3LL;
	volatile int32_t t15 = -1;

	t15 = ((x61&x62)==(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	int32_t x66 = INT32_MIN;
	uint16_t x67 = 3692U;

	t16 = ((x65&x66)==(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 9U;
	static int8_t x72 = 5;
	volatile int32_t t17 = -2;

	t17 = ((x69&x70)==(x71/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	int32_t x76 = -3;
	volatile int32_t t18 = -184491429;

	t18 = ((x73&x74)==(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 0;
	volatile int32_t x82 = -1;
	static uint16_t x84 = UINT16_MAX;
	int32_t t19 = 4246203;

	t19 = ((x81&x82)==(x83/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x85 = 8266611U;
	int64_t x86 = INT64_MIN;
	uint8_t x88 = 23U;
	volatile int32_t t20 = 36469;

	t20 = ((x85&x86)==(x87/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MAX;
	static int16_t x91 = INT16_MIN;
	volatile int16_t x92 = INT16_MIN;
	static int32_t t21 = -1;

	t21 = ((x89&x90)==(x91/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 33U;
	int8_t x94 = 10;
	uint64_t x95 = 4LLU;
	static volatile int32_t x96 = -1;

	t22 = ((x93&x94)==(x95/x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = -1;
	int8_t x103 = 1;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t23 = -19483;

	t23 = ((x101&x102)==(x103/x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 5U;
	int16_t x106 = -1;
	volatile int16_t x108 = INT16_MIN;
	int32_t t24 = 1590890;

	t24 = ((x105&x106)==(x107/x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x112 = INT32_MIN;
	static volatile int32_t t25 = -65495490;

	t25 = ((x109&x110)==(x111/x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	volatile uint64_t x114 = 956LLU;
	static uint16_t x115 = 1U;
	int64_t x116 = -8266463LL;

	t26 = ((x113&x114)==(x115/x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = 201155U;
	static int16_t x120 = INT16_MAX;
	volatile int32_t t27 = -8101;

	t27 = ((x117&x118)==(x119/x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x122 = INT64_MIN;
	uint8_t x123 = UINT8_MAX;
	static int64_t x124 = INT64_MIN;

	t28 = ((x121&x122)==(x123/x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x125 = UINT16_MAX;
	int16_t x126 = INT16_MAX;
	int8_t x127 = 48;
	volatile int8_t x128 = INT8_MAX;
	int32_t t29 = 15;

	t29 = ((x125&x126)==(x127/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = 27U;
	int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	static uint8_t x132 = UINT8_MAX;
	volatile int32_t t30 = -1;

	t30 = ((x129&x130)==(x131/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 34331337102LLU;
	volatile int64_t x134 = -27448780870783LL;
	int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MAX;
	int32_t t31 = -37844;

	t31 = ((x133&x134)==(x135/x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -1;
	volatile uint64_t x138 = 196448LLU;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MAX;
	int32_t t32 = 1037225298;

	t32 = ((x137&x138)==(x139/x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 15;
	uint16_t x142 = 1U;
	static int8_t x143 = -1;
	uint64_t x144 = 3560293534352889075LLU;

	t33 = ((x141&x142)==(x143/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x145 = 23U;
	static int32_t x147 = INT32_MIN;
	uint64_t x148 = 2136289420837946LLU;
	static int32_t t34 = -16;

	t34 = ((x145&x146)==(x147/x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x154 = 711U;
	volatile int32_t x155 = INT32_MIN;
	int16_t x156 = 15;
	int32_t t35 = 8702318;

	t35 = ((x153&x154)==(x155/x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = UINT32_MAX;
	volatile int8_t x158 = INT8_MIN;
	static int64_t x160 = INT64_MAX;
	volatile int32_t t36 = -2620180;

	t36 = ((x157&x158)==(x159/x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = 267LL;
	volatile int64_t x162 = INT64_MAX;
	volatile int64_t x163 = -1LL;
	int32_t t37 = -342778;

	t37 = ((x161&x162)==(x163/x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x166 = INT64_MIN;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = -1;
	volatile int32_t t38 = 2204;

	t38 = ((x165&x166)==(x167/x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x170 = UINT16_MAX;
	int32_t x171 = -47;
	int32_t x172 = INT32_MIN;
	volatile int32_t t39 = -29091464;

	t39 = ((x169&x170)==(x171/x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x173 = 11U;
	int32_t x174 = -1;
	int8_t x175 = 1;
	int8_t x176 = INT8_MIN;
	volatile int32_t t40 = -37444382;

	t40 = ((x173&x174)==(x175/x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -1120544416182985540LL;
	static uint32_t x182 = UINT32_MAX;
	static int32_t x183 = -5;
	int16_t x184 = 83;

	t41 = ((x181&x182)==(x183/x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = 57U;
	int32_t x186 = 78061;
	uint16_t x187 = UINT16_MAX;
	static int8_t x188 = -1;
	volatile int32_t t42 = -6586083;

	t42 = ((x185&x186)==(x187/x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	static int64_t x192 = -59LL;
	int32_t t43 = 268188516;

	t43 = ((x189&x190)==(x191/x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = -1;
	int8_t x194 = -5;
	int16_t x195 = INT16_MIN;
	int64_t x196 = -1LL;
	int32_t t44 = -27875;

	t44 = ((x193&x194)==(x195/x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = -10;
	int64_t x198 = 3667LL;
	static int64_t x199 = INT64_MAX;
	int32_t t45 = 310;

	t45 = ((x197&x198)==(x199/x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x202 = INT32_MIN;
	static volatile uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MAX;

	t46 = ((x201&x202)==(x203/x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 32269U;
	int64_t x208 = INT64_MIN;
	volatile int32_t t47 = 18998652;

	t47 = ((x205&x206)==(x207/x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = 15245LL;
	int16_t x214 = INT16_MAX;
	int64_t x215 = -171LL;
	volatile int64_t x216 = INT64_MIN;
	volatile int32_t t48 = -43349;

	t48 = ((x213&x214)==(x215/x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x217 = INT16_MIN;
	uint8_t x218 = 80U;
	volatile int8_t x219 = INT8_MAX;
	static volatile int8_t x220 = INT8_MIN;
	static volatile int32_t t49 = 25899017;

	t49 = ((x217&x218)==(x219/x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MIN;
	volatile int8_t x224 = 1;

	t50 = ((x221&x222)==(x223/x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 2270U;
	int8_t x226 = 6;
	uint16_t x228 = 10U;
	int32_t t51 = 118303;

	t51 = ((x225&x226)==(x227/x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = 157U;
	int16_t x230 = -1;
	volatile uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t52 = 1;

	t52 = ((x229&x230)==(x231/x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x239 = 25U;
	uint32_t x240 = 1120702382U;
	int32_t t53 = 66;

	t53 = ((x237&x238)==(x239/x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x242 = 41U;

	t54 = ((x241&x242)==(x243/x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MIN;
	int32_t x246 = -113057;
	static uint64_t x248 = 6924018504138LLU;
	static int32_t t55 = -1208261;

	t55 = ((x245&x246)==(x247/x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = -1;
	volatile uint16_t x254 = 15100U;
	static int32_t x255 = INT32_MIN;
	static int32_t x256 = INT32_MIN;
	int32_t t56 = 741506363;

	t56 = ((x253&x254)==(x255/x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x258 = 9305;
	static int32_t x259 = INT32_MIN;
	volatile int32_t t57 = 7582619;

	t57 = ((x257&x258)==(x259/x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x261 = 106U;
	int64_t x263 = INT64_MIN;
	volatile int64_t x264 = INT64_MIN;
	int32_t t58 = -22215577;

	t58 = ((x261&x262)==(x263/x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = INT32_MIN;
	int16_t x266 = 11;
	volatile uint32_t x267 = UINT32_MAX;
	int32_t x268 = 86207;
	int32_t t59 = -3944;

	t59 = ((x265&x266)==(x267/x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x269 = -30LL;
	int64_t x270 = INT64_MAX;
	int8_t x271 = INT8_MAX;
	uint32_t x272 = 76160U;
	volatile int32_t t60 = 612829352;

	t60 = ((x269&x270)==(x271/x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = -459;
	volatile int64_t x274 = -1LL;
	int64_t x276 = INT64_MAX;
	volatile int32_t t61 = 15;

	t61 = ((x273&x274)==(x275/x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MIN;
	static int32_t x278 = INT32_MIN;
	static uint16_t x279 = UINT16_MAX;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t62 = 131;

	t62 = ((x277&x278)==(x279/x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = -1LL;
	static int64_t x283 = -218692675711LL;
	volatile int16_t x284 = -1;
	static int32_t t63 = -31;

	t63 = ((x281&x282)==(x283/x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x285 = 4628LLU;
	static int16_t x286 = 152;
	static volatile int64_t x287 = INT64_MIN;
	volatile int32_t t64 = 46677;

	t64 = ((x285&x286)==(x287/x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = 770731U;
	int32_t x290 = 194;
	volatile int16_t x291 = INT16_MAX;
	int8_t x292 = -1;
	volatile int32_t t65 = 331;

	t65 = ((x289&x290)==(x291/x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x294 = -1;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t66 = -27775035;

	t66 = ((x293&x294)==(x295/x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x297 = -9904614;
	static uint32_t x298 = 2038711690U;
	uint8_t x299 = 38U;
	volatile int32_t t67 = 1;

	t67 = ((x297&x298)==(x299/x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = 10155396861280158LL;
	static int64_t x302 = INT64_MIN;
	volatile int8_t x303 = 24;
	uint16_t x304 = UINT16_MAX;
	static volatile int32_t t68 = -124;

	t68 = ((x301&x302)==(x303/x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x305 = 558732184LLU;
	int32_t x306 = -1;
	static uint64_t x307 = UINT64_MAX;
	volatile int16_t x308 = INT16_MIN;

	t69 = ((x305&x306)==(x307/x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	static int16_t x311 = INT16_MAX;
	static int32_t x312 = -203530;
	volatile int32_t t70 = -3;

	t70 = ((x309&x310)==(x311/x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x313 = 1007U;
	int16_t x316 = -1;
	int32_t t71 = -132673;

	t71 = ((x313&x314)==(x315/x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x317 = 2022853587U;
	uint32_t x318 = 30904U;
	static int32_t t72 = 25;

	t72 = ((x317&x318)==(x319/x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x322 = INT32_MIN;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = INT8_MAX;
	int32_t t73 = -116399;

	t73 = ((x321&x322)==(x323/x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = UINT8_MAX;
	int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MAX;
	static uint8_t x328 = 27U;
	volatile int32_t t74 = 0;

	t74 = ((x325&x326)==(x327/x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = 1;
	static int32_t x330 = 306;
	static int64_t x331 = INT64_MIN;
	uint8_t x332 = 51U;
	volatile int32_t t75 = -1077;

	t75 = ((x329&x330)==(x331/x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	uint16_t x335 = 3993U;
	int32_t x336 = INT32_MIN;
	int32_t t76 = 474;

	t76 = ((x333&x334)==(x335/x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MAX;
	static uint32_t x338 = 119124U;
	int32_t x339 = 73051;
	uint16_t x340 = 11U;
	volatile int32_t t77 = 29;

	t77 = ((x337&x338)==(x339/x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x341 = 1124U;
	int8_t x342 = 0;
	int32_t x343 = 309107065;
	int8_t x344 = 14;
	volatile int32_t t78 = -29210;

	t78 = ((x341&x342)==(x343/x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x345 = 3527237000829217LLU;
	volatile int8_t x346 = INT8_MIN;
	volatile int16_t x348 = -2;
	volatile int32_t t79 = -2357758;

	t79 = ((x345&x346)==(x347/x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MAX;
	uint8_t x350 = 0U;
	uint64_t x351 = 6485238369LLU;
	int16_t x352 = -43;

	t80 = ((x349&x350)==(x351/x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = INT64_MIN;
	int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t81 = -1930431;

	t81 = ((x353&x354)==(x355/x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = INT8_MIN;
	volatile int8_t x360 = INT8_MAX;
	int32_t t82 = -59369027;

	t82 = ((x357&x358)==(x359/x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x362 = 13U;
	int32_t x363 = INT32_MAX;
	int8_t x364 = -9;
	int32_t t83 = -444009;

	t83 = ((x361&x362)==(x363/x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = 8952519LLU;
	int32_t x367 = INT32_MIN;
	volatile uint16_t x368 = UINT16_MAX;
	static volatile int32_t t84 = -67328220;

	t84 = ((x365&x366)==(x367/x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = -6;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = INT32_MAX;

	t85 = ((x369&x370)==(x371/x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x374 = 10619LLU;
	static int16_t x375 = 78;
	int8_t x376 = INT8_MIN;
	volatile int32_t t86 = -4975;

	t86 = ((x373&x374)==(x375/x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x377 = -1;
	uint16_t x378 = 46U;
	static int8_t x379 = INT8_MIN;
	volatile int32_t t87 = 2316;

	t87 = ((x377&x378)==(x379/x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	volatile uint32_t x384 = UINT32_MAX;

	t88 = ((x381&x382)==(x383/x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = 7LL;
	int8_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x385&x386)==(x387/x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = -1;
	volatile int16_t x390 = -7021;
	uint64_t x391 = UINT64_MAX;
	uint32_t x392 = 2981U;
	static volatile int32_t t90 = 47074419;

	t90 = ((x389&x390)==(x391/x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x393 = -1;
	int8_t x395 = -1;
	volatile int32_t x396 = -1;
	volatile int32_t t91 = 1792;

	t91 = ((x393&x394)==(x395/x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x397 = 85757958170LLU;
	int64_t x398 = INT64_MAX;
	int16_t x399 = -1;
	int32_t x400 = INT32_MAX;

	t92 = ((x397&x398)==(x399/x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x401 = UINT64_MAX;
	int16_t x402 = 20;

	t93 = ((x401&x402)==(x403/x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x405 = 26185U;
	int16_t x406 = 7452;
	volatile int32_t x407 = 0;
	int8_t x408 = 1;
	int32_t t94 = -1983;

	t94 = ((x405&x406)==(x407/x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x410 = -2;
	uint32_t x411 = 2U;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t95 = 64322536;

	t95 = ((x409&x410)==(x411/x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = INT64_MIN;
	static int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;

	t96 = ((x413&x414)==(x415/x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x418 = -1;
	int16_t x419 = -1;
	int64_t x420 = 1686LL;

	t97 = ((x417&x418)==(x419/x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x421 = 3U;
	static int64_t x422 = INT64_MAX;
	volatile int8_t x424 = INT8_MIN;

	t98 = ((x421&x422)==(x423/x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = -1LL;
	int64_t x426 = INT64_MAX;
	int32_t x427 = INT32_MAX;
	uint32_t x428 = 379U;
	int32_t t99 = 828;

	t99 = ((x425&x426)==(x427/x428));

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

