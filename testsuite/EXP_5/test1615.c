#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x5 = UINT16_MAX;
int64_t x9 = INT64_MIN;
int32_t t3 = 5098550;
int16_t x19 = 1;
int32_t t4 = 56560552;
volatile int16_t x21 = INT16_MIN;
int16_t x24 = INT16_MIN;
int16_t x26 = INT16_MIN;
static int64_t x33 = INT64_MIN;
static int8_t x37 = -15;
int8_t x39 = INT8_MIN;
int8_t x41 = INT8_MIN;
static volatile int64_t x49 = -2479237876082LL;
volatile int64_t x53 = -1LL;
static volatile int32_t t15 = 1015045658;
int16_t x66 = 1899;
static int32_t x67 = INT32_MIN;
int32_t t16 = -441;
volatile int32_t t17 = 182270;
int16_t x75 = INT16_MIN;
int8_t x82 = INT8_MIN;
int32_t t20 = -36717;
uint8_t x85 = 5U;
uint16_t x92 = 1500U;
volatile int64_t x94 = -1LL;
uint64_t x97 = UINT64_MAX;
volatile int32_t x99 = 44;
int64_t x108 = -1LL;
int32_t x113 = 87232900;
volatile int8_t x115 = -26;
uint64_t x119 = UINT64_MAX;
int32_t x120 = INT32_MIN;
int32_t t29 = 12991;
static int64_t x125 = INT64_MIN;
int64_t x131 = INT64_MAX;
uint8_t x132 = 10U;
static int8_t x137 = -1;
volatile int64_t x138 = INT64_MIN;
int32_t x143 = INT32_MIN;
uint64_t x149 = 97LLU;
uint16_t x154 = 1771U;
int64_t x157 = INT64_MIN;
int16_t x163 = -1;
volatile uint32_t t40 = 745910U;
uint64_t x166 = 33044651818470LLU;
int64_t x168 = INT64_MAX;
int64_t x171 = 181709621LL;
int32_t x187 = INT32_MIN;
uint8_t x188 = 77U;
int8_t x192 = -1;
volatile uint32_t x193 = UINT32_MAX;
int16_t x201 = 494;
volatile int32_t x203 = INT32_MAX;
uint16_t x206 = 12511U;
volatile uint8_t x212 = 1U;
uint64_t t52 = 248072089809LLU;
int64_t x215 = INT64_MIN;
int64_t x217 = INT64_MAX;
uint8_t x225 = 1U;
static volatile int16_t x233 = 10947;
int32_t t58 = -72238770;
volatile int32_t t59 = -32;
static volatile int32_t t60 = -2;
int8_t x248 = INT8_MIN;
int32_t t61 = 109;
uint64_t x249 = 8234302978803459087LLU;
int64_t x251 = 3453594LL;
volatile int32_t x260 = INT32_MAX;
int32_t t64 = 27;
uint64_t x272 = UINT64_MAX;
static uint64_t t67 = 58658978328614718LLU;
uint32_t x275 = UINT32_MAX;
static int32_t t70 = -10;
volatile int64_t x289 = INT64_MIN;
int32_t x290 = -7;
static int16_t x291 = INT16_MAX;
int8_t x298 = -1;
int8_t x303 = 24;
static int8_t x306 = 0;
uint32_t x308 = 9488U;
int16_t x310 = INT16_MIN;
static int8_t x317 = INT8_MIN;
volatile int32_t t79 = 30847;
int8_t x322 = -23;
int8_t x323 = -1;
int16_t x326 = INT16_MIN;
volatile uint16_t x328 = UINT16_MAX;
uint16_t x333 = UINT16_MAX;
volatile int32_t x335 = INT32_MAX;
int32_t x339 = INT32_MIN;
int16_t x340 = 96;
volatile uint64_t x344 = 254112LLU;
static uint64_t t86 = 11432LLU;
uint64_t x350 = 20LLU;
volatile uint64_t x355 = UINT64_MAX;
int16_t x356 = INT16_MIN;
int16_t x358 = INT16_MIN;
volatile int32_t x371 = INT32_MAX;
volatile int8_t x374 = -1;
static int8_t x376 = -2;
volatile int16_t x378 = -1;
int32_t x384 = INT32_MAX;
int64_t x388 = -1LL;
uint8_t x395 = UINT8_MAX;
int64_t x396 = INT64_MIN;
int16_t x399 = -29;


void f0(void) {
	uint32_t x1 = 5637521U;
	static int32_t x2 = INT32_MIN;
	volatile uint32_t x3 = 261U;
	int32_t x4 = -1;
	volatile uint32_t t0 = 6263U;

	t0 = (x1*((x2<=x3)==x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int8_t x7 = -1;
	int32_t x8 = -1;
	volatile int32_t t1 = -1308952;

	t1 = (x5*((x6<=x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 20645U;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;
	static volatile int64_t t2 = -121122324466748889LL;

	t2 = (x9*((x10<=x11)==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int64_t x14 = 3746096LL;
	volatile int32_t x15 = -110194;
	uint16_t x16 = UINT16_MAX;

	t3 = (x13*((x14<=x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 7U;
	volatile uint64_t x18 = 5LLU;
	int32_t x20 = -7;

	t4 = (x17*((x18<=x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	uint32_t x23 = 833U;
	int32_t t5 = -1871;

	t5 = (x21*((x22<=x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -91015;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = 385;

	t6 = (x25*((x26<=x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 9925U;
	volatile int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MIN;
	int16_t x32 = -1;
	volatile int32_t t7 = -1;

	t7 = (x29*((x30<=x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x34 = INT64_MAX;
	int64_t x35 = INT64_MIN;
	static uint8_t x36 = UINT8_MAX;
	volatile int64_t t8 = -12680017443724LL;

	t8 = (x33*((x34<=x35)==x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MAX;
	static volatile int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 7;

	t9 = (x37*((x38<=x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 399448485;

	t10 = (x41*((x42<=x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int64_t x46 = INT64_MIN;
	int8_t x47 = 0;
	uint64_t x48 = 17941LLU;
	volatile int32_t t11 = 6231;

	t11 = (x45*((x46<=x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	uint8_t x52 = 11U;
	int64_t t12 = 11034103662638LL;

	t12 = (x49*((x50<=x51)==x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MAX;
	volatile int32_t x55 = INT32_MAX;
	volatile uint16_t x56 = UINT16_MAX;
	static volatile int64_t t13 = -4688794LL;

	t13 = (x53*((x54<=x55)==x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	uint32_t x58 = 9U;
	static int8_t x59 = INT8_MIN;
	volatile int8_t x60 = INT8_MIN;
	int64_t t14 = 119409524LL;

	t14 = (x57*((x58<=x59)==x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 4U;
	int32_t x62 = INT32_MAX;
	static int64_t x63 = INT64_MAX;
	int8_t x64 = INT8_MIN;

	t15 = (x61*((x62<=x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	int8_t x68 = INT8_MIN;

	t16 = (x65*((x66<=x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	int32_t x70 = INT32_MIN;
	static int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MIN;

	t17 = (x69*((x70<=x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	volatile uint64_t x74 = 168887465164995259LLU;
	uint64_t x76 = 1058820564280141LLU;
	volatile int32_t t18 = 110137;

	t18 = (x73*((x74<=x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	static int8_t x78 = -16;
	uint64_t x79 = 513693722520334LLU;
	static int32_t x80 = INT32_MIN;
	static int32_t t19 = 12101;

	t19 = (x77*((x78<=x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -42421;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 22338U;

	t20 = (x81*((x82<=x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 28U;
	static int64_t x87 = INT64_MIN;
	uint32_t x88 = 411480U;
	int32_t t21 = 91880;

	t21 = (x85*((x86<=x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -759143574;
	static int64_t x90 = -3LL;
	int64_t x91 = 22LL;
	int32_t t22 = 1614;

	t22 = (x89*((x90<=x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 393U;
	static int32_t x95 = -1;
	volatile int64_t x96 = INT64_MIN;
	volatile uint32_t t23 = 152721U;

	t23 = (x93*((x94<=x95)==x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x98 = INT8_MAX;
	int16_t x100 = INT16_MAX;
	uint64_t t24 = 25LLU;

	t24 = (x97*((x98<=x99)==x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 16784417;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = 6666596LLU;
	int64_t x104 = INT64_MAX;
	int32_t t25 = 5236;

	t25 = (x101*((x102<=x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = -1;
	static int8_t x107 = INT8_MAX;
	volatile uint64_t t26 = 24530079885055720LLU;

	t26 = (x105*((x106<=x107)==x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	uint16_t x111 = UINT16_MAX;
	int32_t x112 = -1;
	static volatile int32_t t27 = 3736;

	t27 = (x109*((x110<=x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	int8_t x116 = 15;
	static volatile int32_t t28 = 208;

	t28 = (x113*((x114<=x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = UINT8_MAX;
	volatile int8_t x118 = 3;

	t29 = (x117*((x118<=x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 88U;
	int16_t x123 = 0;
	int16_t x124 = -147;
	static volatile uint64_t t30 = 4171037736276172LLU;

	t30 = (x121*((x122<=x123)==x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x126 = 1U;
	static uint16_t x127 = UINT16_MAX;
	volatile int16_t x128 = -1;
	volatile int64_t t31 = 31LL;

	t31 = (x125*((x126<=x127)==x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MAX;
	int32_t t32 = -12396725;

	t32 = (x129*((x130<=x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	int32_t x134 = INT32_MIN;
	static uint32_t x135 = 500750540U;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 1004396471;

	t33 = (x133*((x134<=x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = INT8_MAX;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t34 = -1;

	t34 = (x137*((x138<=x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 1U;
	int32_t x142 = INT32_MIN;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -1060488;

	t35 = (x141*((x142<=x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	uint8_t x146 = 95U;
	volatile uint64_t x147 = 14LLU;
	volatile int16_t x148 = -1;
	volatile int32_t t36 = 4983;

	t36 = (x145*((x146<=x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x150 = INT8_MAX;
	int16_t x151 = -1;
	int16_t x152 = -7;
	static volatile uint64_t t37 = 121911198410LLU;

	t37 = (x149*((x150<=x151)==x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 9282U;
	static int64_t x155 = INT64_MAX;
	int8_t x156 = -59;
	volatile uint32_t t38 = 124791464U;

	t38 = (x153*((x154<=x155)==x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	volatile uint64_t x159 = 77342669620LLU;
	int32_t x160 = -6496;
	volatile int64_t t39 = -106171980LL;

	t39 = (x157*((x158<=x159)==x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 24894U;
	int16_t x162 = INT16_MIN;
	uint16_t x164 = 117U;

	t40 = (x161*((x162<=x163)==x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -1;
	static int32_t x167 = INT32_MAX;
	static int32_t t41 = 132976808;

	t41 = (x165*((x166<=x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = -3;
	uint16_t x170 = UINT16_MAX;
	uint32_t x172 = 1469272917U;
	volatile int32_t t42 = 2;

	t42 = (x169*((x170<=x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 20U;
	static volatile uint8_t x174 = UINT8_MAX;
	static uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 3481LLU;
	volatile int32_t t43 = 18263;

	t43 = (x173*((x174<=x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	volatile int16_t x180 = INT16_MIN;
	volatile int64_t t44 = 2059350776413729LL;

	t44 = (x177*((x178<=x179)==x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = 1;
	uint64_t x182 = 6052044678892526LLU;
	static uint8_t x183 = 4U;
	uint64_t x184 = 105407LLU;
	int32_t t45 = -1;

	t45 = (x181*((x182<=x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 48;
	uint32_t x186 = 30U;
	static int32_t t46 = -1634;

	t46 = (x185*((x186<=x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	uint64_t x190 = 0LLU;
	int16_t x191 = -1;
	volatile int32_t t47 = 1943;

	t47 = (x189*((x190<=x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -29111035LL;
	volatile uint64_t x195 = UINT64_MAX;
	int16_t x196 = -1;
	volatile uint32_t t48 = 5699944U;

	t48 = (x193*((x194<=x195)==x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -53452428;
	volatile uint8_t x198 = UINT8_MAX;
	static int16_t x199 = INT16_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 246938052;

	t49 = (x197*((x198<=x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x202 = UINT32_MAX;
	static int64_t x204 = -56543157LL;
	int32_t t50 = -1;

	t50 = (x201*((x202<=x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int8_t x207 = 1;
	volatile int64_t x208 = -305553LL;
	volatile int32_t t51 = -8516;

	t51 = (x205*((x206<=x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = 1LLU;
	int32_t x210 = 4;
	uint64_t x211 = UINT64_MAX;

	t52 = (x209*((x210<=x211)==x212));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 12996696U;
	int32_t x214 = INT32_MAX;
	int16_t x216 = INT16_MIN;
	uint32_t t53 = 11655500U;

	t53 = (x213*((x214<=x215)==x216));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MIN;
	volatile int8_t x219 = -1;
	int8_t x220 = 1;
	volatile int64_t t54 = INT64_MAX;

	t54 = (x217*((x218<=x219)==x220));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 1;
	int16_t x222 = INT16_MIN;
	int64_t x223 = -28237355400342LL;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 1;

	t55 = (x221*((x222<=x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	uint32_t x227 = 178346U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 2690676;

	t56 = (x225*((x226<=x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	static uint32_t x230 = UINT32_MAX;
	uint16_t x231 = UINT16_MAX;
	int16_t x232 = INT16_MAX;
	volatile uint32_t t57 = 138495833U;

	t57 = (x229*((x230<=x231)==x232));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = 174U;
	int8_t x235 = 0;
	int32_t x236 = INT32_MIN;

	t58 = (x233*((x234<=x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 7U;
	static uint32_t x238 = UINT32_MAX;
	uint16_t x239 = 3U;
	int32_t x240 = INT32_MAX;

	t59 = (x237*((x238<=x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = 0;
	static uint16_t x242 = 9638U;
	volatile uint8_t x243 = 0U;
	static int16_t x244 = INT16_MIN;

	t60 = (x241*((x242<=x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MAX;
	static int16_t x247 = -1;

	t61 = (x245*((x246<=x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	uint16_t x252 = 1013U;
	volatile uint64_t t62 = 104121126785LLU;

	t62 = (x249*((x250<=x251)==x252));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = 32;
	uint16_t x255 = 1268U;
	static uint8_t x256 = 9U;
	int32_t t63 = -10695087;

	t63 = (x253*((x254<=x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 638;
	int32_t x258 = INT32_MIN;
	static volatile int16_t x259 = -1;

	t64 = (x257*((x258<=x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x261 = UINT64_MAX;
	static int64_t x262 = INT64_MIN;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MIN;
	uint64_t t65 = 731LLU;

	t65 = (x261*((x262<=x263)==x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MAX;
	int64_t x266 = -97580072144046418LL;
	uint64_t x267 = 5317714881289LLU;
	uint32_t x268 = 199016401U;
	int32_t t66 = -1;

	t66 = (x265*((x266<=x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 29LLU;
	int32_t x270 = INT32_MAX;
	int8_t x271 = INT8_MAX;

	t67 = (x269*((x270<=x271)==x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x274 = 5;
	int32_t x276 = -1;
	static volatile int32_t t68 = 4;

	t68 = (x273*((x274<=x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 352U;
	uint8_t x278 = 0U;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = 780096796639196357LLU;
	int32_t t69 = 146851;

	t69 = (x277*((x278<=x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 10;
	volatile uint16_t x282 = 5U;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MAX;

	t70 = (x281*((x282<=x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MAX;
	uint32_t x286 = UINT32_MAX;
	uint64_t x287 = 10721016486795845LLU;
	int8_t x288 = 0;
	int32_t t71 = 170035;

	t71 = (x285*((x286<=x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x292 = UINT32_MAX;
	int64_t t72 = -71797455447LL;

	t72 = (x289*((x290<=x291)==x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = UINT64_MAX;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	volatile int64_t x296 = -1LL;
	volatile uint64_t t73 = 528862049946LLU;

	t73 = (x293*((x294<=x295)==x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 4U;
	uint64_t x299 = UINT64_MAX;
	uint16_t x300 = UINT16_MAX;
	int32_t t74 = 701;

	t74 = (x297*((x298<=x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 8U;
	int64_t x302 = -350746426090LL;
	volatile uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = 0;

	t75 = (x301*((x302<=x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -14354278558LL;
	volatile uint64_t x307 = 21LLU;
	volatile int64_t t76 = 79245839753LL;

	t76 = (x305*((x306<=x307)==x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -13;
	uint8_t x311 = 47U;
	uint32_t x312 = UINT32_MAX;
	int32_t t77 = 83;

	t77 = (x309*((x310<=x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int8_t x314 = INT8_MIN;
	int64_t x315 = -1LL;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 1097;

	t78 = (x313*((x314<=x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = INT8_MIN;
	int8_t x319 = -21;
	static int16_t x320 = INT16_MIN;

	t79 = (x317*((x318<=x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	uint32_t x324 = 2U;
	int32_t t80 = -24614;

	t80 = (x321*((x322<=x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 63;
	static int32_t x327 = -1;
	static int32_t t81 = -209;

	t81 = (x325*((x326<=x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 91U;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = 29LLU;
	uint64_t x332 = 39752451911664LLU;
	volatile int32_t t82 = 148146;

	t82 = (x329*((x330<=x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = -1LL;
	volatile uint64_t x336 = 134023533LLU;
	static int32_t t83 = 1013;

	t83 = (x333*((x334<=x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 161;
	uint32_t x338 = UINT32_MAX;
	static volatile int32_t t84 = -2762;

	t84 = (x337*((x338<=x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	uint32_t x342 = 347932U;
	static int64_t x343 = -1LL;
	volatile int32_t t85 = -834;

	t85 = (x341*((x342<=x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	static int8_t x346 = INT8_MIN;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = 6;

	t86 = (x345*((x346<=x347)==x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 475LL;
	int64_t x351 = -48LL;
	int16_t x352 = INT16_MAX;
	int64_t t87 = 557656LL;

	t87 = (x349*((x350<=x351)==x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	int16_t x354 = -91;
	volatile int32_t t88 = -6544120;

	t88 = (x353*((x354<=x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x359 = 62191540509LLU;
	int64_t x360 = INT64_MIN;
	int32_t t89 = 8994;

	t89 = (x357*((x358<=x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	volatile int16_t x362 = INT16_MIN;
	uint16_t x363 = 2779U;
	int32_t x364 = -1;
	volatile int32_t t90 = -63;

	t90 = (x361*((x362<=x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 0U;
	int32_t x366 = -24518;
	static uint8_t x367 = 0U;
	int64_t x368 = -1LL;
	int32_t t91 = -79;

	t91 = (x365*((x366<=x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = 1;
	static volatile int32_t x370 = INT32_MIN;
	volatile uint64_t x372 = 2261065691367678359LLU;
	int32_t t92 = 881478;

	t92 = (x369*((x370<=x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	int64_t x375 = 510LL;
	volatile int32_t t93 = -883934;

	t93 = (x373*((x374<=x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	uint32_t x379 = 3U;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 72;

	t94 = (x377*((x378<=x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	static uint32_t x382 = 57378U;
	uint8_t x383 = UINT8_MAX;
	volatile int64_t t95 = 2040329541LL;

	t95 = (x381*((x382<=x383)==x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 1004874023183LL;
	int16_t x386 = INT16_MIN;
	volatile int64_t x387 = INT64_MAX;
	static volatile int64_t t96 = 59313657709LL;

	t96 = (x385*((x386<=x387)==x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	volatile int16_t x390 = INT16_MAX;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = -1;
	volatile int32_t t97 = 122930;

	t97 = (x389*((x390<=x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	static int16_t x394 = INT16_MAX;
	int32_t t98 = 34399074;

	t98 = (x393*((x394<=x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	static int64_t x398 = -782384461LL;
	static int16_t x400 = INT16_MIN;
	int32_t t99 = 522;

	t99 = (x397*((x398<=x399)==x400));

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

