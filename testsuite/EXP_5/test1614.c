#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
int64_t x3 = 60421697060687LL;
volatile int8_t x4 = INT8_MIN;
volatile uint32_t t0 = 63445U;
static uint8_t x7 = 8U;
int32_t t1 = -85504;
static int64_t x9 = -1294636711832916245LL;
int16_t x18 = INT16_MIN;
static uint16_t x19 = 944U;
int32_t t4 = -9758328;
static int64_t x21 = 8486082980511LL;
int32_t x23 = INT32_MIN;
int64_t x28 = -819395LL;
volatile int32_t x29 = -123;
uint32_t x32 = 395100U;
static uint64_t x36 = 356922127LLU;
static volatile int32_t t12 = INT32_MAX;
int32_t x57 = INT32_MIN;
uint32_t t16 = 50U;
int8_t x69 = -1;
int32_t x73 = INT32_MAX;
static int64_t x77 = -40827838743LL;
static int64_t x84 = -3338920016LL;
volatile uint8_t x86 = 49U;
int16_t x88 = INT16_MIN;
volatile int32_t t21 = INT32_MIN;
uint32_t x90 = UINT32_MAX;
int8_t x91 = INT8_MAX;
static int32_t x97 = INT32_MIN;
int8_t x104 = INT8_MIN;
int16_t x108 = -737;
uint16_t x113 = UINT16_MAX;
int64_t x117 = 207572405LL;
int64_t x122 = INT64_MIN;
uint8_t x124 = 14U;
int32_t t30 = 446287;
int64_t x127 = INT64_MIN;
static volatile uint64_t t34 = UINT64_MAX;
int8_t x149 = 0;
int32_t x153 = -1;
int8_t x160 = INT8_MAX;
volatile int32_t t39 = 10489;
volatile int16_t x162 = INT16_MAX;
int32_t t42 = INT32_MAX;
volatile int32_t x177 = -2546;
volatile int8_t x179 = INT8_MAX;
volatile uint64_t x182 = 4LLU;
int16_t x189 = -130;
static volatile int32_t t47 = 272;
uint32_t x195 = UINT32_MAX;
static uint16_t x196 = 9615U;
static int64_t x198 = INT64_MAX;
int64_t x204 = INT64_MAX;
static uint8_t x223 = 9U;
static int32_t x230 = INT32_MIN;
int32_t x231 = -1;
static int8_t x232 = 14;
static uint16_t x237 = UINT16_MAX;
uint8_t x238 = 5U;
uint16_t x241 = UINT16_MAX;
volatile int16_t x242 = -1;
int32_t t60 = 581275760;
int32_t x245 = INT32_MIN;
int8_t x246 = 8;
volatile int32_t t61 = INT32_MIN;
volatile int32_t x249 = INT32_MAX;
int32_t x255 = INT32_MAX;
volatile uint32_t x264 = UINT32_MAX;
volatile int64_t x265 = -1LL;
uint16_t x266 = 3642U;
volatile uint64_t t67 = 5225570LLU;
int64_t x273 = -1LL;
int16_t x282 = 116;
volatile int32_t x291 = 811;
int64_t x292 = INT64_MIN;
uint8_t x294 = UINT8_MAX;
int16_t x303 = INT16_MIN;
int32_t x308 = -1;
int32_t t76 = 407817;
int8_t x328 = -1;
int32_t x330 = -10;
static volatile int8_t x335 = INT8_MIN;
volatile int64_t x336 = 2666655LL;
volatile int16_t x338 = -1;
static volatile int64_t t85 = 872075LL;
int32_t x346 = INT32_MIN;
static int32_t x351 = -3782;
volatile uint16_t x355 = 2621U;
volatile int32_t t88 = -825431244;
uint64_t x360 = 1047824845LLU;
volatile int16_t x361 = -1;
int32_t x372 = INT32_MIN;
int16_t x373 = INT16_MIN;
int32_t t93 = -1340;
int64_t x377 = INT64_MIN;
int16_t x381 = INT16_MAX;
int8_t x389 = INT8_MIN;
int32_t x395 = INT32_MIN;


void f0(void) {
	uint32_t x1 = 219U;

	t0 = (x1-((x2<=x3)==x4));

	if (t0 != 219U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int64_t x6 = -342032LL;
	uint64_t x8 = UINT64_MAX;

	t1 = (x5-((x6<=x7)==x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x10 = 7U;
	int32_t x11 = -411923;
	int8_t x12 = 0;
	volatile int64_t t2 = 1738LL;

	t2 = (x9-((x10<=x11)==x12));

	if (t2 != -1294636711832916246LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint64_t x14 = 2LLU;
	static volatile int64_t x15 = INT64_MAX;
	static int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -1;

	t3 = (x13-((x14<=x15)==x16));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x20 = 0U;

	t4 = (x17-((x18<=x19)==x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = -1;
	volatile int16_t x24 = 0;
	static int64_t t5 = 254LL;

	t5 = (x21-((x22<=x23)==x24));

	if (t5 != 8486082980510LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = 15U;
	uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MIN;
	volatile int32_t t6 = 0;

	t6 = (x25-((x26<=x27)==x28));

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x30 = 0;
	volatile int8_t x31 = INT8_MAX;
	int32_t t7 = -1;

	t7 = (x29-((x30<=x31)==x32));

	if (t7 != -123) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	volatile int16_t x34 = -1;
	uint8_t x35 = 0U;
	volatile int32_t t8 = -429607;

	t8 = (x33-((x34<=x35)==x36));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = -8;
	uint16_t x39 = 17U;
	volatile uint64_t x40 = 1551119LLU;
	volatile int64_t t9 = INT64_MIN;

	t9 = (x37-((x38<=x39)==x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -3701255243LL;
	uint8_t x42 = 25U;
	volatile int8_t x43 = 7;
	int32_t x44 = 82;
	volatile int64_t t10 = 17291816052383484LL;

	t10 = (x41-((x42<=x43)==x44));

	if (t10 != -3701255243LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	int32_t x46 = -1;
	static volatile uint8_t x47 = UINT8_MAX;
	static int64_t x48 = 788LL;
	static int32_t t11 = INT32_MIN;

	t11 = (x45-((x46<=x47)==x48));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	uint32_t x50 = 13072U;
	static int64_t x51 = -1LL;
	int8_t x52 = INT8_MIN;

	t12 = (x49-((x50<=x51)==x52));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 9174004219729LLU;
	static int16_t x54 = -1;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	uint64_t t13 = 1458033751LLU;

	t13 = (x53-((x54<=x55)==x56));

	if (t13 != 9174004219729LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	int8_t x59 = 0;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = INT32_MIN;

	t14 = (x57-((x58<=x59)==x60));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = INT32_MIN;
	int8_t x62 = -10;
	uint32_t x63 = 11709U;
	int8_t x64 = INT8_MIN;
	int32_t t15 = INT32_MIN;

	t15 = (x61-((x62<=x63)==x64));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 8U;
	volatile int64_t x66 = INT64_MIN;
	int16_t x67 = -1;
	static uint32_t x68 = 106769138U;

	t16 = (x65-((x66<=x67)==x68));

	if (t16 != 8U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x70 = -9196041;
	uint8_t x71 = 113U;
	int8_t x72 = 0;
	static volatile int32_t t17 = 0;

	t17 = (x69-((x70<=x71)==x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = INT16_MIN;
	int8_t x75 = -13;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x73-((x74<=x75)==x76));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MIN;
	volatile int32_t x79 = 29231;
	int32_t x80 = 213819;
	int64_t t19 = 736680045857468LL;

	t19 = (x77-((x78<=x79)==x80));

	if (t19 != -40827838743LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile uint8_t x82 = 31U;
	int16_t x83 = INT16_MIN;
	volatile int32_t t20 = 24;

	t20 = (x81-((x82<=x83)==x84));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MIN;
	uint8_t x87 = 0U;

	t21 = (x85-((x86<=x87)==x88));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int8_t x92 = 29;
	int32_t t22 = INT32_MAX;

	t22 = (x89-((x90<=x91)==x92));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	uint8_t x94 = UINT8_MAX;
	volatile int32_t x95 = -812;
	static int16_t x96 = -1;
	int64_t t23 = INT64_MIN;

	t23 = (x93-((x94<=x95)==x96));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = UINT8_MAX;
	uint8_t x99 = 26U;
	uint64_t x100 = 10821450675086LLU;
	volatile int32_t t24 = INT32_MIN;

	t24 = (x97-((x98<=x99)==x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -115561253LL;
	int8_t x102 = 1;
	uint8_t x103 = 111U;
	static int64_t t25 = 386LL;

	t25 = (x101-((x102<=x103)==x104));

	if (t25 != -115561253LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = 97474;
	int8_t x106 = -14;
	int32_t x107 = -1;
	static volatile int32_t t26 = 3;

	t26 = (x105-((x106<=x107)==x108));

	if (t26 != 97474) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 13976;
	static int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MAX;
	int8_t x112 = -1;
	int32_t t27 = 63935357;

	t27 = (x109-((x110<=x111)==x112));

	if (t27 != 13976) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = -1;
	int64_t x116 = 2936317246421LL;
	int32_t t28 = -6;

	t28 = (x113-((x114<=x115)==x116));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MIN;
	uint16_t x119 = 1U;
	static int8_t x120 = -39;
	static volatile int64_t t29 = -73351600774LL;

	t29 = (x117-((x118<=x119)==x120));

	if (t29 != 207572405LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 986;
	uint64_t x123 = 271930702053452LLU;

	t30 = (x121-((x122<=x123)==x124));

	if (t30 != 986) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -1LL;
	int16_t x126 = INT16_MIN;
	uint8_t x128 = 14U;
	static int64_t t31 = 30419818760LL;

	t31 = (x125-((x126<=x127)==x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint16_t x130 = 19304U;
	int64_t x131 = INT64_MIN;
	static uint64_t x132 = 1440737655818037649LLU;
	int32_t t32 = INT32_MIN;

	t32 = (x129-((x130<=x131)==x132));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static volatile uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 1056697883;

	t33 = (x133-((x134<=x135)==x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = -1;
	static volatile int16_t x139 = INT16_MIN;
	int8_t x140 = 18;

	t34 = (x137-((x138<=x139)==x140));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int32_t x142 = INT32_MIN;
	static uint64_t x143 = 4174095270079LLU;
	int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -6124;

	t35 = (x141-((x142<=x143)==x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint16_t x146 = 3U;
	static volatile int16_t x147 = -1;
	volatile int64_t x148 = -31917165LL;
	volatile int64_t t36 = INT64_MIN;

	t36 = (x145-((x146<=x147)==x148));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = 13;
	static int32_t x151 = 351743;
	int16_t x152 = INT16_MAX;
	int32_t t37 = -369656746;

	t37 = (x149-((x150<=x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = 113883086270665214LLU;
	int8_t x155 = INT8_MIN;
	int16_t x156 = 16;
	int32_t t38 = -1;

	t38 = (x153-((x154<=x155)==x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = UINT16_MAX;
	static volatile int64_t x158 = INT64_MIN;
	int16_t x159 = -1;

	t39 = (x157-((x158<=x159)==x160));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = 2232755U;
	volatile int32_t t40 = 9036035;

	t40 = (x161-((x162<=x163)==x164));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1U;
	volatile uint64_t x166 = 1LLU;
	static int8_t x167 = INT8_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -7;

	t41 = (x165-((x166<=x167)==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	int64_t x170 = -17450021805LL;
	int8_t x171 = -1;
	static int64_t x172 = INT64_MIN;

	t42 = (x169-((x170<=x171)==x172));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	uint32_t x174 = 2195U;
	int64_t x175 = INT64_MAX;
	int64_t x176 = INT64_MIN;
	int32_t t43 = -13;

	t43 = (x173-((x174<=x175)==x176));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x178 = INT8_MIN;
	uint32_t x180 = 125741U;
	int32_t t44 = -6;

	t44 = (x177-((x178<=x179)==x180));

	if (t44 != -2546) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = UINT8_MAX;
	int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 53893;

	t45 = (x181-((x182<=x183)==x184));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x185 = UINT8_MAX;
	static uint8_t x186 = 1U;
	static int32_t x187 = 50069926;
	uint64_t x188 = 32589779497249LLU;
	volatile int32_t t46 = 7846;

	t46 = (x185-((x186<=x187)==x188));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	uint16_t x191 = 16U;
	int16_t x192 = INT16_MIN;

	t47 = (x189-((x190<=x191)==x192));

	if (t47 != -130) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 7627;
	static int8_t x194 = INT8_MIN;
	volatile int32_t t48 = 0;

	t48 = (x193-((x194<=x195)==x196));

	if (t48 != 7627) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 7003;
	uint64_t x199 = 617577411104122261LLU;
	static uint32_t x200 = 30084306U;
	static volatile int32_t t49 = 911772972;

	t49 = (x197-((x198<=x199)==x200));

	if (t49 != 7003) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint8_t x202 = 58U;
	int8_t x203 = -1;
	volatile int32_t t50 = 424349;

	t50 = (x201-((x202<=x203)==x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 156;
	uint16_t x206 = 148U;
	int32_t x207 = INT32_MAX;
	int16_t x208 = -249;
	int32_t t51 = 3;

	t51 = (x205-((x206<=x207)==x208));

	if (t51 != 156) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 8228440626LLU;
	static int64_t x210 = 1LL;
	volatile uint32_t x211 = 1169U;
	static int8_t x212 = -2;
	volatile uint64_t t52 = 1755139563920511LLU;

	t52 = (x209-((x210<=x211)==x212));

	if (t52 != 8228440626LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 24594U;
	int64_t x214 = -359LL;
	int64_t x215 = INT64_MIN;
	volatile int64_t x216 = -1LL;
	int32_t t53 = 2965;

	t53 = (x213-((x214<=x215)==x216));

	if (t53 != 24594) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MAX;
	static int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -5565;

	t54 = (x217-((x218<=x219)==x220));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 160U;
	int64_t x222 = INT64_MAX;
	int64_t x224 = INT64_MAX;
	static int32_t t55 = -1264;

	t55 = (x221-((x222<=x223)==x224));

	if (t55 != 160) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	uint8_t x226 = 9U;
	uint64_t x227 = 3399801988091330200LLU;
	volatile int8_t x228 = -1;
	int32_t t56 = 109;

	t56 = (x225-((x226<=x227)==x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = -1939857;
	volatile int32_t t57 = -2359840;

	t57 = (x229-((x230<=x231)==x232));

	if (t57 != -1939857) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 8U;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = 15U;
	volatile uint32_t t58 = 2795U;

	t58 = (x233-((x234<=x235)==x236));

	if (t58 != 8U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x239 = 48U;
	volatile int16_t x240 = INT16_MIN;
	static int32_t t59 = 11984;

	t59 = (x237-((x238<=x239)==x240));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x243 = UINT16_MAX;
	static uint16_t x244 = 1133U;

	t60 = (x241-((x242<=x243)==x244));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x247 = 157U;
	int16_t x248 = -1;

	t61 = (x245-((x246<=x247)==x248));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 33U;
	static int8_t x251 = INT8_MAX;
	int64_t x252 = INT64_MIN;
	int32_t t62 = INT32_MAX;

	t62 = (x249-((x250<=x251)==x252));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 60;
	int16_t x254 = INT16_MAX;
	static int8_t x256 = -3;
	static int32_t t63 = -84613;

	t63 = (x253-((x254<=x255)==x256));

	if (t63 != 60) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = -1;
	volatile int64_t x259 = 164638231LL;
	static int64_t x260 = -472741463LL;
	int32_t t64 = 615072761;

	t64 = (x257-((x258<=x259)==x260));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	uint8_t x262 = 43U;
	int16_t x263 = INT16_MIN;
	volatile int32_t t65 = 1;

	t65 = (x261-((x262<=x263)==x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x267 = 49028180U;
	int16_t x268 = INT16_MIN;
	int64_t t66 = -21814452LL;

	t66 = (x265-((x266<=x267)==x268));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 441655LLU;
	static uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MIN;
	uint64_t x272 = 7359123808870951LLU;

	t67 = (x269-((x270<=x271)==x272));

	if (t67 != 441655LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 34686989126253LLU;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MAX;
	volatile int64_t t68 = -133061086LL;

	t68 = (x273-((x274<=x275)==x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	static uint64_t x278 = 6066615626968384806LLU;
	volatile int64_t x279 = INT64_MAX;
	static int64_t x280 = INT64_MIN;
	int32_t t69 = 260;

	t69 = (x277-((x278<=x279)==x280));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int64_t x283 = INT64_MAX;
	uint16_t x284 = UINT16_MAX;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x281-((x282<=x283)==x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 30;
	uint32_t x286 = 4U;
	volatile uint16_t x287 = UINT16_MAX;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 392282;

	t71 = (x285-((x286<=x287)==x288));

	if (t71 != 30) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 14U;
	int8_t x290 = INT8_MAX;
	int32_t t72 = -95;

	t72 = (x289-((x290<=x291)==x292));

	if (t72 != 14) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -12;

	t73 = (x293-((x294<=x295)==x296));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -2;
	int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	static int16_t x300 = -1;
	volatile int32_t t74 = 30;

	t74 = (x297-((x298<=x299)==x300));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	static volatile int8_t x302 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t75 = 91;

	t75 = (x301-((x302<=x303)==x304));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 0;
	static uint64_t x306 = 262LLU;
	static uint16_t x307 = UINT16_MAX;

	t76 = (x305-((x306<=x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MAX;
	int32_t x310 = -748350;
	static volatile int32_t x311 = -1;
	volatile uint16_t x312 = UINT16_MAX;
	volatile int64_t t77 = INT64_MAX;

	t77 = (x309-((x310<=x311)==x312));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x313 = 2U;
	static uint64_t x314 = UINT64_MAX;
	int16_t x315 = 11121;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 109733;

	t78 = (x313-((x314<=x315)==x316));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = 6869;
	int64_t x318 = -1LL;
	int32_t x319 = -1;
	int32_t x320 = -1414;
	int32_t t79 = 0;

	t79 = (x317-((x318<=x319)==x320));

	if (t79 != 6869) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	uint32_t x322 = 922U;
	int16_t x323 = INT16_MAX;
	int8_t x324 = 61;
	volatile int32_t t80 = 434779;

	t80 = (x321-((x322<=x323)==x324));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 1558195732056LLU;
	int16_t x326 = 281;
	int64_t x327 = INT64_MIN;
	uint64_t t81 = 2920704791LLU;

	t81 = (x325-((x326<=x327)==x328));

	if (t81 != 1558195732056LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -43;
	uint32_t x331 = UINT32_MAX;
	volatile int8_t x332 = 1;
	int32_t t82 = 0;

	t82 = (x329-((x330<=x331)==x332));

	if (t82 != -44) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	uint8_t x334 = UINT8_MAX;
	volatile int32_t t83 = 2813;

	t83 = (x333-((x334<=x335)==x336));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 421742U;
	int32_t x339 = INT32_MAX;
	int64_t x340 = -1LL;
	volatile uint32_t t84 = 673932676U;

	t84 = (x337-((x338<=x339)==x340));

	if (t84 != 421742U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x341 = INT64_MAX;
	uint8_t x342 = 23U;
	static int16_t x343 = INT16_MIN;
	uint8_t x344 = 0U;

	t85 = (x341-((x342<=x343)==x344));

	if (t85 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = UINT32_MAX;
	volatile int32_t x347 = INT32_MIN;
	static int8_t x348 = INT8_MIN;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x345-((x346<=x347)==x348));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static int16_t x350 = INT16_MIN;
	volatile uint8_t x352 = 5U;
	volatile int32_t t87 = INT32_MIN;

	t87 = (x349-((x350<=x351)==x352));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 0U;
	static int32_t x354 = -1;
	int32_t x356 = 64538010;

	t88 = (x353-((x354<=x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = INT32_MIN;
	static volatile int64_t x359 = -1LL;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x357-((x358<=x359)==x360));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x362 = UINT64_MAX;
	uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MAX;
	volatile int32_t t90 = 5;

	t90 = (x361-((x362<=x363)==x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -186789;
	int64_t x366 = -5346229437551090LL;
	uint8_t x367 = 14U;
	uint32_t x368 = 104194565U;
	volatile int32_t t91 = 23474;

	t91 = (x365-((x366<=x367)==x368));

	if (t91 != -186789) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	uint16_t x370 = 62U;
	uint32_t x371 = 898579129U;
	volatile int32_t t92 = -122258;

	t92 = (x369-((x370<=x371)==x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x374 = INT64_MIN;
	int32_t x375 = -288648;
	int32_t x376 = 7;

	t93 = (x373-((x374<=x375)==x376));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MAX;
	volatile int32_t x379 = INT32_MIN;
	int64_t x380 = INT64_MAX;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x377-((x378<=x379)==x380));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x382 = -367687;
	int16_t x383 = INT16_MIN;
	uint8_t x384 = 3U;
	volatile int32_t t95 = 285;

	t95 = (x381-((x382<=x383)==x384));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 1495U;
	uint32_t x386 = UINT32_MAX;
	uint32_t x387 = 124694U;
	int64_t x388 = -1LL;
	volatile uint32_t t96 = 340U;

	t96 = (x385-((x386<=x387)==x388));

	if (t96 != 1495U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x390 = 43937LLU;
	int32_t x391 = -2240;
	int8_t x392 = -1;
	static int32_t t97 = 202419;

	t97 = (x389-((x390<=x391)==x392));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -7;
	volatile int16_t x394 = -1;
	static volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = -901603;

	t98 = (x393-((x394<=x395)==x396));

	if (t98 != -7) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 44U;
	static int16_t x398 = -1;
	int32_t x399 = -8166547;
	uint16_t x400 = 1837U;
	int32_t t99 = -793851;

	t99 = (x397-((x398<=x399)==x400));

	if (t99 != 44) { NG(); } else { ; }
	
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

