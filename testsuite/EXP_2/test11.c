#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -397895652298506LL;
volatile uint8_t x6 = 0U;
uint16_t x8 = UINT16_MAX;
volatile int8_t x14 = -1;
volatile uint32_t x16 = 1267937U;
int32_t x18 = -1;
volatile int64_t t3 = -136316LL;
int64_t t4 = 2225004550848LL;
static volatile uint32_t x25 = UINT32_MAX;
int16_t x28 = 1;
int64_t x33 = -88088343782LL;
int16_t x34 = -1;
int32_t x36 = INT32_MIN;
int32_t x41 = INT32_MAX;
int64_t x43 = INT64_MIN;
int64_t t8 = -11LL;
static int16_t x49 = INT16_MAX;
uint64_t x50 = 369852158LLU;
uint64_t t9 = 156831409LLU;
static int8_t x61 = -1;
volatile int64_t x63 = -26063659LL;
int64_t x70 = 1034824LL;
int8_t x72 = INT8_MIN;
int16_t x79 = 3;
int64_t x83 = -1LL;
uint32_t x84 = 4821899U;
int64_t x87 = -1090760671LL;
volatile int16_t x91 = INT16_MAX;
volatile int16_t x92 = INT16_MIN;
int16_t x109 = INT16_MIN;
uint32_t x110 = 3890132U;
int16_t x111 = INT16_MIN;
int64_t x117 = INT64_MAX;
volatile uint64_t x118 = UINT64_MAX;
uint32_t x119 = UINT32_MAX;
uint8_t x123 = UINT8_MAX;
volatile int8_t x129 = 54;
int8_t x145 = INT8_MAX;
int8_t x162 = -2;
uint64_t x167 = 495346180LLU;
static int32_t x169 = 1925;
static volatile int32_t t33 = 1805263;
int64_t x181 = INT64_MIN;
int8_t x183 = -1;
int8_t x185 = INT8_MIN;
int64_t t38 = 143182459210928180LL;
int8_t x197 = INT8_MIN;
int64_t x202 = 9049012194LL;
int32_t x208 = INT32_MIN;
int32_t t41 = 0;
volatile int16_t x219 = -7;
volatile int8_t x223 = -1;
static int16_t x226 = -1;
int8_t x235 = -1;
static int32_t x237 = 18;
int16_t x239 = INT16_MAX;
volatile uint64_t x243 = 531542667LLU;
volatile uint32_t x247 = 14021924U;
int16_t x254 = INT16_MIN;
int8_t x256 = INT8_MIN;
uint64_t x265 = UINT64_MAX;
int16_t x275 = 5;
int32_t x280 = INT32_MIN;
uint8_t x291 = 0U;
volatile int16_t x292 = INT16_MAX;
volatile int64_t t60 = 52LL;
int32_t x296 = INT32_MIN;
int16_t x303 = -101;
static uint8_t x305 = UINT8_MAX;
uint64_t x306 = 13743755872030LLU;
volatile int16_t x307 = 57;
volatile uint64_t t65 = 824357537940LLU;
static volatile uint32_t t66 = 4U;
volatile int64_t x334 = INT64_MIN;
int16_t x335 = INT16_MAX;
uint8_t x337 = UINT8_MAX;
uint16_t x345 = UINT16_MAX;
static int16_t x348 = INT16_MAX;
volatile int32_t x368 = -4;
static volatile uint64_t x375 = UINT64_MAX;
int32_t x376 = INT32_MAX;
uint64_t t75 = 78160LLU;
int64_t x391 = 194656260663106370LL;
uint8_t x394 = UINT8_MAX;
volatile int16_t x397 = -5922;
static uint64_t x398 = 50343007LLU;
uint8_t x399 = 98U;
static volatile uint64_t t80 = 4033383048023LLU;
static volatile int32_t x404 = -1;
uint8_t x405 = UINT8_MAX;
int32_t x406 = 5530;
int32_t t83 = 7;
volatile int32_t x414 = INT32_MIN;
uint32_t x421 = 4386U;
static volatile uint32_t x423 = UINT32_MAX;
static int64_t x430 = 0LL;
uint8_t x442 = 17U;
static volatile uint64_t x446 = UINT64_MAX;
static volatile int8_t x447 = INT8_MIN;
static volatile int16_t x448 = INT16_MIN;
int16_t x451 = INT16_MAX;
int32_t x452 = -1;
uint64_t t91 = 122651626112462943LLU;
uint8_t x485 = 90U;
volatile int16_t x487 = INT16_MAX;
volatile uint64_t t97 = 3194411LLU;
volatile uint8_t x493 = UINT8_MAX;
int16_t x494 = INT16_MIN;
int32_t t98 = -896256366;
volatile int8_t x497 = INT8_MIN;
volatile uint8_t x499 = UINT8_MAX;


void f0(void) {
	static int8_t x1 = -1;
	int64_t x2 = 294738224001LL;
	static uint8_t x3 = 6U;
	int16_t x4 = -1;

	t0 = ((x1+(x2+x3))&x4);

	if (t0 != 294738224006LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x7 = INT32_MAX;
	uint64_t t1 = 513924407435LLU;

	t1 = ((x5+(x6+x7))&x8);

	if (t1 != 65534LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = -28;
	uint64_t x15 = 19781304081132LLU;
	uint64_t t2 = 69342840134296640LLU;

	t2 = ((x13+(x14+x15))&x16);

	if (t2 != 1202369LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 75560081164286LL;
	static int32_t x19 = 20;
	uint32_t x20 = 12U;

	t3 = ((x17+(x18+x19))&x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 576;
	uint16_t x22 = 6U;
	static int64_t x23 = 4356663692558LL;
	volatile uint16_t x24 = 19851U;

	t4 = ((x21+(x22+x23))&x24);

	if (t4 != 19712LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -1;
	static volatile int8_t x27 = -1;
	volatile uint32_t t5 = 256772232U;

	t5 = ((x25+(x26+x27))&x28);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x35 = -1LL;
	volatile int64_t t6 = -2LL;

	t6 = ((x33+(x34+x35))&x36);

	if (t6 != -90194313216LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = 3;
	volatile int16_t x38 = INT16_MAX;
	uint32_t x39 = 1236U;
	int16_t x40 = 2;
	volatile uint32_t t7 = 2837456U;

	t7 = ((x37+(x38+x39))&x40);

	if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x42 = INT64_MAX;
	int8_t x44 = INT8_MIN;

	t8 = ((x41+(x42+x43))&x44);

	if (t8 != 2147483520LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x51 = INT32_MAX;
	static int32_t x52 = 234;

	t9 = ((x49+(x50+x51))&x52);

	if (t9 != 232LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MAX;
	static int16_t x54 = INT16_MIN;
	int32_t x55 = 32;
	int16_t x56 = 538;
	volatile int64_t t10 = 7LL;

	t10 = ((x53+(x54+x55))&x56);

	if (t10 != 26LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	volatile int64_t x58 = INT64_MAX;
	int16_t x59 = -1;
	int64_t x60 = INT64_MIN;
	volatile int64_t t11 = 86LL;

	t11 = ((x57+(x58+x59))&x60);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x62 = 45852U;
	uint32_t x64 = 1U;
	volatile int64_t t12 = 2028LL;

	t12 = ((x61+(x62+x63))&x64);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x65 = INT16_MIN;
	uint8_t x66 = 45U;
	uint16_t x67 = UINT16_MAX;
	int32_t x68 = -2830;
	int32_t t13 = -27643;

	t13 = ((x65+(x66+x67))&x68);

	if (t13 != 32800) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = -217;
	int64_t x71 = -1LL;
	static int64_t t14 = -1832721347149027190LL;

	t14 = ((x69+(x70+x71))&x72);

	if (t14 != 1034496LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x73 = 1112713948568960810LLU;
	static uint8_t x74 = 64U;
	int16_t x75 = INT16_MIN;
	int8_t x76 = 27;
	volatile uint64_t t15 = 1617239967LLU;

	t15 = ((x73+(x74+x75))&x76);

	if (t15 != 10LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = -925;
	volatile int16_t x80 = 11211;
	int32_t t16 = 6;

	t16 = ((x77+(x78+x79))&x80);

	if (t16 != 11202) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	volatile int16_t x82 = INT16_MIN;
	volatile int64_t t17 = 646518LL;

	t17 = ((x81+(x82+x83))&x84);

	if (t17 != 4789131LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	static int8_t x86 = -1;
	int32_t x88 = -1;
	int64_t t18 = 391391936479641213LL;

	t18 = ((x85+(x86+x87))&x88);

	if (t18 != -1090760545LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x89 = UINT64_MAX;
	uint64_t x90 = UINT64_MAX;
	uint64_t t19 = 228608563LLU;

	t19 = ((x89+(x90+x91))&x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	static uint8_t x99 = 6U;
	uint64_t x100 = 661689161860413547LLU;
	uint64_t t20 = 130156049LLU;

	t20 = ((x97+(x98+x99))&x100);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = 4109978379947635839LL;
	volatile uint8_t x106 = 102U;
	uint8_t x107 = 21U;
	int16_t x108 = INT16_MAX;
	volatile int64_t t21 = -2736LL;

	t21 = ((x105+(x106+x107))&x108);

	if (t21 != 29946LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x112 = INT32_MIN;
	static uint32_t t22 = 209292U;

	t22 = ((x109+(x110+x111))&x112);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x120 = -1LL;
	static uint64_t t23 = 3748LLU;

	t23 = ((x117+(x118+x119))&x120);

	if (t23 != 9223372041149743101LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x121 = 2378319U;
	static int16_t x122 = INT16_MIN;
	uint8_t x124 = UINT8_MAX;
	uint32_t t24 = 156068629U;

	t24 = ((x121+(x122+x123))&x124);

	if (t24 != 78U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = 234LL;
	int32_t x126 = 1816627;
	int16_t x127 = -7226;
	int16_t x128 = INT16_MIN;
	volatile int64_t t25 = 8241957LL;

	t25 = ((x125+(x126+x127))&x128);

	if (t25 != 1802240LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x130 = 76LLU;
	int32_t x131 = -32;
	int32_t x132 = INT32_MIN;
	volatile uint64_t t26 = 5LLU;

	t26 = ((x129+(x130+x131))&x132);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = 3961487151LLU;
	uint64_t x134 = 0LLU;
	int64_t x135 = -38479512LL;
	static int64_t x136 = INT64_MAX;
	uint64_t t27 = 3296434634328LLU;

	t27 = ((x133+(x134+x135))&x136);

	if (t27 != 3923007639LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x137 = -1;
	uint64_t x138 = 28LLU;
	uint16_t x139 = UINT16_MAX;
	int32_t x140 = INT32_MIN;
	uint64_t t28 = 616LLU;

	t28 = ((x137+(x138+x139))&x140);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x146 = INT64_MIN;
	int16_t x147 = 31;
	volatile uint8_t x148 = UINT8_MAX;
	int64_t t29 = -195277195593004LL;

	t29 = ((x145+(x146+x147))&x148);

	if (t29 != 158LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x157 = UINT16_MAX;
	static int16_t x158 = INT16_MIN;
	volatile int64_t x159 = 8360LL;
	static int32_t x160 = INT32_MIN;
	volatile int64_t t30 = 244809208974LL;

	t30 = ((x157+(x158+x159))&x160);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x161 = UINT32_MAX;
	static uint32_t x163 = 8235921U;
	int32_t x164 = -2028151;
	volatile uint32_t t31 = 1297325401U;

	t31 = ((x161+(x162+x163))&x164);

	if (t31 != 6359432U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x165 = 0U;
	uint8_t x166 = 1U;
	int16_t x168 = INT16_MIN;
	volatile uint64_t t32 = 386405LLU;

	t32 = ((x165+(x166+x167))&x168);

	if (t32 != 495321088LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x170 = INT32_MIN;
	volatile uint8_t x171 = UINT8_MAX;
	volatile uint8_t x172 = 5U;

	t33 = ((x169+(x170+x171))&x172);

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x177 = 0U;
	int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	int32_t t34 = INT32_MIN;

	t34 = ((x177+(x178+x179))&x180);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x182 = 3U;
	uint8_t x184 = UINT8_MAX;
	int64_t t35 = -37227730392LL;

	t35 = ((x181+(x182+x183))&x184);

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	int16_t x188 = -210;
	static int32_t t36 = -14414;

	t36 = ((x185+(x186+x187))&x188);

	if (t36 != 2147450670) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x189 = UINT64_MAX;
	volatile int64_t x190 = 0LL;
	uint64_t x191 = 485624LLU;
	static int16_t x192 = INT16_MIN;
	volatile uint64_t t37 = 67954758463LLU;

	t37 = ((x189+(x190+x191))&x192);

	if (t37 != 458752LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x193 = 51;
	volatile int8_t x194 = INT8_MAX;
	int16_t x195 = 452;
	volatile int64_t x196 = -1LL;

	t38 = ((x193+(x194+x195))&x196);

	if (t38 != 630LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x198 = 114U;
	static int8_t x199 = 62;
	int8_t x200 = -3;
	uint32_t t39 = 7U;

	t39 = ((x197+(x198+x199))&x200);

	if (t39 != 48U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x201 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	static uint32_t x204 = 2U;
	volatile int64_t t40 = 63155187890681LL;

	t40 = ((x201+(x202+x203))&x204);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x205 = 14U;
	uint16_t x206 = 0U;
	int16_t x207 = INT16_MAX;

	t41 = ((x205+(x206+x207))&x208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = 21;
	static uint16_t x214 = 147U;
	uint8_t x215 = 3U;
	static uint64_t x216 = UINT64_MAX;
	volatile uint64_t t42 = 874045591643536LLU;

	t42 = ((x213+(x214+x215))&x216);

	if (t42 != 171LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x217 = 2024U;
	int16_t x218 = 4357;
	int32_t x220 = -114;
	volatile int32_t t43 = 223621;

	t43 = ((x217+(x218+x219))&x220);

	if (t43 != 6278) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x221 = 1LL;
	static int32_t x222 = -932882197;
	int64_t x224 = 126LL;
	volatile int64_t t44 = 113985770669LL;

	t44 = ((x221+(x222+x223))&x224);

	if (t44 != 106LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x225 = 20U;
	uint64_t x227 = 3978070773LLU;
	volatile int32_t x228 = 277;
	static uint64_t t45 = 84LLU;

	t45 = ((x225+(x226+x227))&x228);

	if (t45 != 256LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x229 = INT64_MIN;
	int32_t x230 = 783812868;
	volatile int32_t x231 = -84673645;
	volatile int8_t x232 = INT8_MIN;
	int64_t t46 = 3833163LL;

	t46 = ((x229+(x230+x231))&x232);

	if (t46 != -9223372036155636608LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = INT8_MAX;
	uint64_t x234 = 10LLU;
	volatile uint16_t x236 = UINT16_MAX;
	volatile uint64_t t47 = 318118946325588LLU;

	t47 = ((x233+(x234+x235))&x236);

	if (t47 != 136LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x238 = 0U;
	static volatile uint64_t x240 = 1811626LLU;
	volatile uint64_t t48 = 968865212046311LLU;

	t48 = ((x237+(x238+x239))&x240);

	if (t48 != 32768LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x241 = UINT8_MAX;
	volatile int8_t x242 = INT8_MAX;
	volatile int16_t x244 = INT16_MIN;
	volatile uint64_t t49 = 6583LLU;

	t49 = ((x241+(x242+x243))&x244);

	if (t49 != 531529728LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x245 = 1;
	static uint64_t x246 = 4116890128448716LLU;
	int8_t x248 = INT8_MIN;
	uint64_t t50 = 0LLU;

	t50 = ((x245+(x246+x247))&x248);

	if (t50 != 4116890142470528LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x249 = INT32_MIN;
	static uint64_t x250 = UINT64_MAX;
	int32_t x251 = 25;
	static uint8_t x252 = UINT8_MAX;
	uint64_t t51 = 14788796550LLU;

	t51 = ((x249+(x250+x251))&x252);

	if (t51 != 24LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = -1;
	int8_t x255 = INT8_MIN;
	int32_t t52 = -78956;

	t52 = ((x253+(x254+x255))&x256);

	if (t52 != -33024) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x257 = INT16_MAX;
	uint16_t x258 = 1U;
	int16_t x259 = 1388;
	volatile uint32_t x260 = 95155U;
	volatile uint32_t t53 = 11U;

	t53 = ((x257+(x258+x259))&x260);

	if (t53 != 288U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x261 = 19;
	volatile uint16_t x262 = 382U;
	int32_t x263 = -39311081;
	int16_t x264 = -1;
	volatile int32_t t54 = 451;

	t54 = ((x261+(x262+x263))&x264);

	if (t54 != -39310680) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x266 = UINT32_MAX;
	uint64_t x267 = 0LLU;
	int8_t x268 = -1;
	static volatile uint64_t t55 = 6LLU;

	t55 = ((x265+(x266+x267))&x268);

	if (t55 != 4294967294LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = 389155LLU;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MIN;
	static uint64_t t56 = 72305793321955056LLU;

	t56 = ((x269+(x270+x271))&x272);

	if (t56 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x273 = 3337361856132331980LLU;
	volatile uint64_t x274 = 17837135824013049LLU;
	static int16_t x276 = INT16_MAX;
	uint64_t t57 = 6LLU;

	t57 = ((x273+(x274+x275))&x276);

	if (t57 != 202LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x277 = 263U;
	int64_t x278 = INT64_MIN;
	static uint8_t x279 = UINT8_MAX;
	volatile int64_t t58 = INT64_MIN;

	t58 = ((x277+(x278+x279))&x280);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	int32_t x283 = -460843532;
	static uint32_t x284 = UINT32_MAX;
	static uint32_t t59 = 168U;

	t59 = ((x281+(x282+x283))&x284);

	if (t59 != 3834090995U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x289 = 25725U;
	int64_t x290 = -1LL;

	t60 = ((x289+(x290+x291))&x292);

	if (t60 != 25724LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x293 = 1U;
	static uint64_t x294 = 25LLU;
	int16_t x295 = -1251;
	static volatile uint64_t t61 = 132075068058LLU;

	t61 = ((x293+(x294+x295))&x296);

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x297 = 224902677899211491LLU;
	uint16_t x298 = 1U;
	volatile int64_t x299 = 561279855238LL;
	volatile uint64_t x300 = 1425943825LLU;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x297+(x298+x299))&x300);

	if (t62 != 1343884544LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MAX;
	int32_t x304 = -58;
	int32_t t63 = 13099404;

	t63 = ((x301+(x302+x303))&x304);

	if (t63 != -2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x308 = UINT32_MAX;
	uint64_t t64 = 513171202281434814LLU;

	t64 = ((x305+(x306+x307))&x308);

	if (t64 != 4155492438LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x317 = INT64_MAX;
	static uint64_t x318 = UINT64_MAX;
	static int32_t x319 = INT32_MIN;
	uint64_t x320 = 720166086516119808LLU;

	t65 = ((x317+(x318+x319))&x320);

	if (t65 != 720166086516119808LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x321 = 11U;
	volatile uint16_t x322 = UINT16_MAX;
	volatile int8_t x323 = -21;
	static int8_t x324 = INT8_MIN;

	t66 = ((x321+(x322+x323))&x324);

	if (t66 != 65408U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x325 = 88U;
	int16_t x326 = 58;
	int8_t x327 = INT8_MIN;
	int64_t x328 = 1LL;
	static int64_t t67 = 1896LL;

	t67 = ((x325+(x326+x327))&x328);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x333 = 22U;
	static volatile uint16_t x336 = UINT16_MAX;
	static volatile int64_t t68 = 328315625316LL;

	t68 = ((x333+(x334+x335))&x336);

	if (t68 != 32789LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x338 = 3U;
	static int16_t x339 = 35;
	uint8_t x340 = 1U;
	int32_t t69 = -8;

	t69 = ((x337+(x338+x339))&x340);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x346 = INT32_MIN;
	uint32_t x347 = 12U;
	volatile uint32_t t70 = 106U;

	t70 = ((x345+(x346+x347))&x348);

	if (t70 != 11U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = 5;
	int8_t x355 = -3;
	uint16_t x356 = 220U;
	volatile int32_t t71 = -902163;

	t71 = ((x353+(x354+x355))&x356);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x357 = -24;
	volatile int32_t x358 = INT32_MIN;
	uint64_t x359 = 1709003710897220980LLU;
	int32_t x360 = INT32_MIN;
	volatile uint64_t t72 = 15748LLU;

	t72 = ((x357+(x358+x359))&x360);

	if (t72 != 1709003708685090816LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x365 = UINT16_MAX;
	volatile int16_t x366 = INT16_MAX;
	int8_t x367 = INT8_MAX;
	volatile int32_t t73 = -216;

	t73 = ((x365+(x366+x367))&x368);

	if (t73 != 98428) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x369 = 2865342LL;
	int8_t x370 = 4;
	uint8_t x371 = 3U;
	int64_t x372 = -2LL;
	int64_t t74 = 4520586338LL;

	t74 = ((x369+(x370+x371))&x372);

	if (t74 != 2865348LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x373 = -2667;
	volatile int8_t x374 = -1;

	t75 = ((x373+(x374+x375))&x376);

	if (t75 != 2147480979LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x381 = INT8_MIN;
	static int16_t x382 = 5;
	volatile int16_t x383 = INT16_MAX;
	int8_t x384 = -28;
	int32_t t76 = 19803;

	t76 = ((x381+(x382+x383))&x384);

	if (t76 != 32644) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MIN;
	uint64_t x387 = UINT64_MAX;
	uint16_t x388 = 615U;
	uint64_t t77 = 16458LLU;

	t77 = ((x385+(x386+x387))&x388);

	if (t77 != 615LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x389 = 812806243;
	int64_t x390 = -1LL;
	volatile uint64_t x392 = 0LLU;
	volatile uint64_t t78 = 1995862704657482LLU;

	t78 = ((x389+(x390+x391))&x392);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x393 = -47LL;
	int32_t x395 = 0;
	int64_t x396 = -1LL;
	volatile int64_t t79 = -302LL;

	t79 = ((x393+(x394+x395))&x396);

	if (t79 != 208LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x400 = 104988755783378LL;

	t80 = ((x397+(x398+x399))&x400);

	if (t80 != 16778386LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x401 = INT8_MIN;
	int16_t x402 = INT16_MAX;
	uint64_t x403 = 349713566255093596LLU;
	static uint64_t t81 = 15902636371947LLU;

	t81 = ((x401+(x402+x403))&x404);

	if (t81 != 349713566255126235LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x407 = 2U;
	volatile uint16_t x408 = 2521U;
	volatile int32_t t82 = 187097;

	t82 = ((x405+(x406+x407))&x408);

	if (t82 != 153) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x409 = INT16_MAX;
	static int16_t x410 = -1;
	int8_t x411 = 1;
	uint16_t x412 = 1911U;

	t83 = ((x409+(x410+x411))&x412);

	if (t83 != 1911) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x413 = 27720LLU;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = 0;
	volatile uint64_t t84 = 11LLU;

	t84 = ((x413+(x414+x415))&x416);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x422 = -1;
	int64_t x424 = INT64_MIN;
	static volatile int64_t t85 = 172701LL;

	t85 = ((x421+(x422+x423))&x424);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x425 = -1;
	static int16_t x426 = 32;
	int32_t x427 = -834;
	int16_t x428 = 381;
	volatile int32_t t86 = -1;

	t86 = ((x425+(x426+x427))&x428);

	if (t86 != 93) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x429 = 108;
	static int64_t x431 = INT64_MIN;
	int16_t x432 = -1;
	volatile int64_t t87 = -25841860313925LL;

	t87 = ((x429+(x430+x431))&x432);

	if (t87 != -9223372036854775700LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x441 = INT32_MAX;
	volatile int16_t x443 = INT16_MIN;
	int64_t x444 = INT64_MAX;
	int64_t t88 = 5943200638984479LL;

	t88 = ((x441+(x442+x443))&x444);

	if (t88 != 2147450896LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x445 = -1;
	uint64_t t89 = 2LLU;

	t89 = ((x445+(x446+x447))&x448);

	if (t89 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x449 = 7U;
	volatile uint64_t x450 = 5308556393040678LLU;
	uint64_t t90 = 32326604LLU;

	t90 = ((x449+(x450+x451))&x452);

	if (t90 != 5308556393073452LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x453 = INT64_MAX;
	static int8_t x454 = INT8_MIN;
	uint64_t x455 = 110844LLU;
	static int64_t x456 = -309927LL;

	t91 = ((x453+(x454+x455))&x456);

	if (t91 != 9223372036854841433LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x457 = INT16_MIN;
	static int16_t x458 = INT16_MIN;
	int16_t x459 = 1;
	uint64_t x460 = 2041LLU;
	uint64_t t92 = 60515788612234413LLU;

	t92 = ((x457+(x458+x459))&x460);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x465 = 13652693U;
	volatile int16_t x466 = INT16_MIN;
	int16_t x467 = -386;
	int64_t x468 = INT64_MIN;
	volatile int64_t t93 = 1419736035117573LL;

	t93 = ((x465+(x466+x467))&x468);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x473 = -5;
	uint32_t x474 = UINT32_MAX;
	uint32_t x475 = UINT32_MAX;
	static uint64_t x476 = UINT64_MAX;
	volatile uint64_t t94 = 139545027015LLU;

	t94 = ((x473+(x474+x475))&x476);

	if (t94 != 4294967289LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x477 = 659U;
	static int32_t x478 = 2;
	int8_t x479 = -1;
	volatile uint16_t x480 = 742U;
	static uint32_t t95 = 423517U;

	t95 = ((x477+(x478+x479))&x480);

	if (t95 != 644U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x486 = INT8_MIN;
	static volatile int64_t x488 = INT64_MAX;
	int64_t t96 = 101308322497LL;

	t96 = ((x485+(x486+x487))&x488);

	if (t96 != 32729LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x489 = 15U;
	int8_t x490 = INT8_MIN;
	uint64_t x491 = UINT64_MAX;
	static volatile uint64_t x492 = UINT64_MAX;

	t97 = ((x489+(x490+x491))&x492);

	if (t97 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x495 = -146379;
	uint8_t x496 = 18U;

	t98 = ((x493+(x494+x495))&x496);

	if (t98 != 16) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x498 = 0;
	int32_t x500 = INT32_MIN;
	int32_t t99 = -1;

	t99 = ((x497+(x498+x499))&x500);

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

