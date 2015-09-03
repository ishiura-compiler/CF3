#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MAX;
static volatile int32_t x4 = INT32_MIN;
int8_t x5 = INT8_MIN;
int32_t x8 = INT32_MIN;
static volatile int32_t x13 = INT32_MIN;
int16_t x16 = INT16_MIN;
static int32_t t3 = INT32_MIN;
volatile int64_t x22 = INT64_MAX;
uint8_t x26 = UINT8_MAX;
int32_t t8 = 0;
volatile uint16_t x40 = 15291U;
int32_t x41 = INT32_MAX;
int16_t x43 = -25;
int64_t x44 = -1LL;
int64_t t11 = INT64_MAX;
int32_t t12 = -903129;
uint32_t x53 = UINT32_MAX;
static int64_t x55 = INT64_MIN;
uint64_t x61 = 138LLU;
int32_t x62 = 439797;
int32_t t16 = 2;
volatile uint16_t x76 = UINT16_MAX;
static uint64_t x79 = 32715741368LLU;
volatile uint32_t x80 = 317750U;
uint32_t x84 = 25759U;
volatile int64_t t21 = -275179890749381LL;
int64_t x90 = INT64_MIN;
int32_t t23 = 0;
int16_t x104 = INT16_MIN;
int16_t x106 = -1;
int16_t x107 = INT16_MIN;
int32_t t26 = -4009492;
static int64_t x118 = INT64_MIN;
int32_t x124 = -14903141;
volatile int32_t t30 = INT32_MIN;
static volatile uint32_t x127 = 229033632U;
int32_t x134 = -1;
volatile int32_t t33 = INT32_MIN;
int16_t x140 = INT16_MAX;
int32_t x142 = 2617571;
int64_t x152 = INT64_MIN;
static uint32_t x162 = 51U;
volatile int32_t t41 = -290685;
uint64_t x177 = 6695153134800611LLU;
int64_t x179 = 46361079LL;
static int32_t x182 = -822;
uint8_t x185 = 119U;
volatile int32_t t47 = -582;
volatile int16_t x196 = INT16_MAX;
uint8_t x197 = UINT8_MAX;
uint32_t x205 = UINT32_MAX;
int16_t x209 = INT16_MIN;
int16_t x217 = INT16_MAX;
int32_t x221 = -1;
int64_t x222 = INT64_MAX;
int64_t x228 = INT64_MIN;
static int32_t x229 = INT32_MAX;
static int32_t t58 = -334785;
uint16_t x244 = 2043U;
volatile uint32_t t60 = 1743086U;
int64_t x247 = INT64_MIN;
int8_t x250 = INT8_MAX;
static volatile int32_t x256 = 501;
volatile uint64_t x269 = UINT64_MAX;
int8_t x270 = -1;
static volatile uint64_t t67 = UINT64_MAX;
static int32_t x274 = 4;
int64_t x277 = INT64_MIN;
int16_t x278 = INT16_MIN;
volatile int32_t t70 = 955236244;
uint32_t x285 = 681928U;
volatile int32_t x289 = -1;
uint16_t x290 = 1739U;
static volatile uint32_t x292 = 167U;
int32_t x294 = INT32_MIN;
uint16_t x298 = 2U;
static uint32_t x299 = 90337410U;
int8_t x304 = -1;
static uint64_t x306 = 1969130192253LLU;
int32_t x309 = INT32_MAX;
uint8_t x310 = 93U;
int8_t x312 = -1;
int64_t x313 = -1LL;
int16_t x315 = 3;
uint8_t x320 = 7U;
volatile int32_t t79 = -1981819;
uint16_t x326 = 3002U;
int64_t x330 = INT64_MIN;
volatile uint16_t x337 = UINT16_MAX;
uint64_t x345 = UINT64_MAX;
static volatile int32_t x347 = 18;
int32_t x352 = -227;
uint32_t x358 = 38U;
volatile int32_t t89 = 28110528;
static int8_t x367 = INT8_MAX;
static uint32_t x368 = 58984728U;
int32_t t91 = 2570968;
uint64_t x369 = 16508429475150538LLU;
static int32_t x370 = INT32_MIN;
volatile int8_t x377 = -1;
int32_t t96 = 748;
static int32_t t97 = -15884121;
uint64_t x396 = UINT64_MAX;
uint32_t x397 = 0U;


void f0(void) {
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MIN;
	int32_t t0 = 0;

	t0 = (x1+((x2<=x3)==x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 564853278286202LLU;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = -938;

	t1 = (x5+((x6<=x7)==x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 0U;
	int16_t x11 = INT16_MIN;
	static int32_t x12 = -1;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x9+((x10<=x11)==x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = UINT8_MAX;
	static uint16_t x15 = UINT16_MAX;

	t3 = (x13+((x14<=x15)==x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	volatile int16_t x18 = 0;
	int8_t x19 = 2;
	volatile int8_t x20 = INT8_MAX;
	static volatile int32_t t4 = 23080170;

	t4 = (x17+((x18<=x19)==x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -32691970445509LL;
	int64_t x23 = -9539557279303LL;
	int64_t x24 = INT64_MIN;
	int64_t t5 = 97711636925016LL;

	t5 = (x21+((x22<=x23)==x24));

	if (t5 != -32691970445509LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 859414;
	int8_t x27 = 1;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = -99;

	t6 = (x25+((x26<=x27)==x28));

	if (t6 != 859414) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint8_t x30 = 1U;
	static int16_t x31 = INT16_MAX;
	uint64_t x32 = 45689855LLU;
	volatile int32_t t7 = 1960035;

	t7 = (x29+((x30<=x31)==x32));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = -1;
	int64_t x36 = INT64_MAX;

	t8 = (x33+((x34<=x35)==x36));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MIN;
	static int64_t x39 = 150422LL;
	uint32_t t9 = UINT32_MAX;

	t9 = (x37+((x38<=x39)==x40));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x42 = INT64_MIN;
	static int32_t t10 = INT32_MAX;

	t10 = (x41+((x42<=x43)==x44));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = INT64_MAX;
	static uint64_t x46 = 3LLU;
	int16_t x47 = -3299;
	int64_t x48 = -20359LL;

	t11 = (x45+((x46<=x47)==x48));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -2;
	volatile uint32_t x50 = 443656U;
	static int8_t x51 = -1;
	int16_t x52 = -1;

	t12 = (x49+((x50<=x51)==x52));

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 0LL;
	uint32_t x56 = 373788867U;
	uint32_t t13 = UINT32_MAX;

	t13 = (x53+((x54<=x55)==x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	volatile int32_t x58 = 0;
	int8_t x59 = 24;
	uint32_t x60 = 171420645U;
	volatile int32_t t14 = -5029179;

	t14 = (x57+((x58<=x59)==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x63 = 759469635;
	uint8_t x64 = 1U;
	uint64_t t15 = 969437128065913791LLU;

	t15 = (x61+((x62<=x63)==x64));

	if (t15 != 139LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = -1LL;
	int32_t x67 = INT32_MIN;
	int8_t x68 = -1;

	t16 = (x65+((x66<=x67)==x68));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int8_t x70 = 4;
	uint32_t x71 = 38U;
	int32_t x72 = INT32_MAX;
	int32_t t17 = 1;

	t17 = (x69+((x70<=x71)==x72));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	static int32_t x74 = INT32_MAX;
	static int32_t x75 = INT32_MAX;
	volatile int64_t t18 = 6899689661610LL;

	t18 = (x73+((x74<=x75)==x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile int16_t x78 = 159;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x77+((x78<=x79)==x80));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	static volatile int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	volatile int32_t t20 = 1;

	t20 = (x81+((x82<=x83)==x84));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int32_t x86 = -1;
	uint8_t x87 = 1U;
	uint64_t x88 = UINT64_MAX;

	t21 = (x85+((x86<=x87)==x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	uint64_t x91 = 339517235368LLU;
	uint16_t x92 = 54U;
	static volatile int32_t t22 = -5564849;

	t22 = (x89+((x90<=x91)==x92));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MIN;
	static volatile int64_t x95 = -202159700385726LL;
	int8_t x96 = 1;

	t23 = (x93+((x94<=x95)==x96));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 12;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = 0;
	int32_t x100 = -412475710;
	volatile int32_t t24 = 1053588581;

	t24 = (x97+((x98<=x99)==x100));

	if (t24 != 12) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 0;
	int16_t x102 = -11670;
	static int16_t x103 = 0;
	int32_t t25 = -1;

	t25 = (x101+((x102<=x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int64_t x108 = INT64_MIN;

	t26 = (x105+((x106<=x107)==x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 71U;
	static uint32_t x110 = 77712172U;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MAX;
	int32_t t27 = -1;

	t27 = (x109+((x110<=x111)==x112));

	if (t27 != 71) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	uint8_t x114 = 1U;
	uint64_t x115 = 395014401802120259LLU;
	uint8_t x116 = 14U;
	int32_t t28 = 31429;

	t28 = (x113+((x114<=x115)==x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x119 = INT64_MAX;
	int32_t x120 = INT32_MAX;
	uint64_t t29 = UINT64_MAX;

	t29 = (x117+((x118<=x119)==x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MAX;
	static int64_t x123 = -2327LL;

	t30 = (x121+((x122<=x123)==x124));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile int16_t x126 = -1;
	static int16_t x128 = INT16_MAX;
	volatile int32_t t31 = INT32_MAX;

	t31 = (x125+((x126<=x127)==x128));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -1;
	uint16_t x130 = 7U;
	static uint8_t x131 = UINT8_MAX;
	static int64_t x132 = INT64_MIN;
	int32_t t32 = -773127929;

	t32 = (x129+((x130<=x131)==x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint16_t x135 = 12276U;
	uint8_t x136 = UINT8_MAX;

	t33 = (x133+((x134<=x135)==x136));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -63037;
	int32_t x138 = INT32_MIN;
	volatile int8_t x139 = INT8_MIN;
	volatile int32_t t34 = -1230243;

	t34 = (x137+((x138<=x139)==x140));

	if (t34 != -63037) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 644994LL;
	int32_t x143 = INT32_MIN;
	static uint16_t x144 = 223U;
	static volatile int64_t t35 = 265614301373597087LL;

	t35 = (x141+((x142<=x143)==x144));

	if (t35 != 644994LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 196429154024033133LL;
	static volatile uint64_t x146 = 3114618367LLU;
	static uint64_t x147 = 14766193LLU;
	static int64_t x148 = -228785567701584LL;
	int64_t t36 = 12LL;

	t36 = (x145+((x146<=x147)==x148));

	if (t36 != 196429154024033133LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 123U;
	int8_t x150 = -1;
	int8_t x151 = -1;
	volatile uint32_t t37 = 122U;

	t37 = (x149+((x150<=x151)==x152));

	if (t37 != 123U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = INT8_MAX;
	static volatile int8_t x155 = INT8_MIN;
	volatile int8_t x156 = -1;
	static volatile int32_t t38 = INT32_MIN;

	t38 = (x153+((x154<=x155)==x156));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile uint32_t x158 = 6U;
	int32_t x159 = INT32_MAX;
	volatile int16_t x160 = -1;
	int32_t t39 = -1593750;

	t39 = (x157+((x158<=x159)==x160));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 19U;
	volatile int16_t x163 = INT16_MIN;
	volatile int32_t x164 = 18;
	static volatile uint32_t t40 = 19821661U;

	t40 = (x161+((x162<=x163)==x164));

	if (t40 != 19U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 2;
	int16_t x166 = -9;
	uint8_t x167 = 37U;
	int64_t x168 = 284377269713LL;

	t41 = (x165+((x166<=x167)==x168));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = -17;
	int8_t x171 = -1;
	volatile int64_t x172 = INT64_MIN;
	static volatile int64_t t42 = INT64_MAX;

	t42 = (x169+((x170<=x171)==x172));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = 3;
	int16_t x174 = -190;
	volatile uint64_t x175 = UINT64_MAX;
	int64_t x176 = -59169774986LL;
	static volatile int32_t t43 = 6645;

	t43 = (x173+((x174<=x175)==x176));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	volatile uint16_t x180 = 66U;
	uint64_t t44 = 7602191LLU;

	t44 = (x177+((x178<=x179)==x180));

	if (t44 != 6695153134800611LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 53538713915332LLU;
	static int32_t x183 = -10;
	int8_t x184 = -1;
	uint64_t t45 = 28161094LLU;

	t45 = (x181+((x182<=x183)==x184));

	if (t45 != 53538713915332LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x186 = INT8_MIN;
	int16_t x187 = -3;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -492836;

	t46 = (x185+((x186<=x187)==x188));

	if (t46 != 119) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -217;
	int64_t x190 = -820814064758540LL;
	static volatile int16_t x191 = 11539;
	int8_t x192 = INT8_MIN;

	t47 = (x189+((x190<=x191)==x192));

	if (t47 != -217) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	uint32_t x194 = 1U;
	uint32_t x195 = 56231U;
	volatile int32_t t48 = INT32_MAX;

	t48 = (x193+((x194<=x195)==x196));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x198 = 0;
	int32_t x199 = 95;
	int16_t x200 = -1;
	int32_t t49 = -468884245;

	t49 = (x197+((x198<=x199)==x200));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	static int32_t x202 = INT32_MAX;
	int8_t x203 = 1;
	uint16_t x204 = UINT16_MAX;
	int64_t t50 = INT64_MAX;

	t50 = (x201+((x202<=x203)==x204));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MIN;
	int32_t x207 = -1;
	int32_t x208 = -1;
	uint32_t t51 = UINT32_MAX;

	t51 = (x205+((x206<=x207)==x208));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 273308673049LLU;
	static volatile int16_t x211 = INT16_MAX;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 74;

	t52 = (x209+((x210<=x211)==x212));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = 284297897U;
	int64_t x214 = INT64_MAX;
	static int32_t x215 = -1;
	int64_t x216 = -906773876127808LL;
	volatile uint32_t t53 = 3005U;

	t53 = (x213+((x214<=x215)==x216));

	if (t53 != 284297897U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 1U;
	uint32_t x219 = 85661387U;
	int8_t x220 = INT8_MAX;
	int32_t t54 = -210;

	t54 = (x217+((x218<=x219)==x220));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x223 = INT8_MAX;
	int64_t x224 = INT64_MIN;
	static volatile int32_t t55 = -637577;

	t55 = (x221+((x222<=x223)==x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -40440249084987LL;
	static uint8_t x226 = UINT8_MAX;
	volatile uint8_t x227 = 0U;
	int64_t t56 = -250736522561LL;

	t56 = (x225+((x226<=x227)==x228));

	if (t56 != -40440249084987LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 5U;
	int32_t x231 = 18787276;
	int64_t x232 = -1LL;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x229+((x230<=x231)==x232));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	static int64_t x234 = 0LL;
	uint64_t x235 = 7327LLU;
	volatile uint16_t x236 = 448U;

	t58 = (x233+((x234<=x235)==x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -1;
	int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MIN;
	volatile int16_t x240 = INT16_MIN;
	static int32_t t59 = -3;

	t59 = (x237+((x238<=x239)==x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 383938541U;
	uint16_t x242 = 248U;
	static int32_t x243 = INT32_MIN;

	t60 = (x241+((x242<=x243)==x244));

	if (t60 != 383938541U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 13394U;
	static volatile uint16_t x246 = 5831U;
	volatile int32_t x248 = 783183;
	volatile int32_t t61 = -1;

	t61 = (x245+((x246<=x247)==x248));

	if (t61 != 13394) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 4366;
	int16_t x251 = 162;
	int32_t x252 = INT32_MIN;
	int32_t t62 = 284;

	t62 = (x249+((x250<=x251)==x252));

	if (t62 != 4366) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 10489U;
	uint8_t x254 = 0U;
	uint32_t x255 = 13U;
	volatile int32_t t63 = -1844;

	t63 = (x253+((x254<=x255)==x256));

	if (t63 != 10489) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	int32_t x258 = -2544729;
	uint64_t x259 = 1LLU;
	volatile int16_t x260 = INT16_MIN;
	int32_t t64 = 5082037;

	t64 = (x257+((x258<=x259)==x260));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1609604;
	static volatile int32_t x262 = -1;
	int32_t x263 = INT32_MAX;
	uint8_t x264 = UINT8_MAX;
	static int32_t t65 = -36403648;

	t65 = (x261+((x262<=x263)==x264));

	if (t65 != -1609604) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static int32_t x266 = -1;
	uint16_t x267 = 0U;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = INT32_MIN;

	t66 = (x265+((x266<=x267)==x268));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x271 = 2U;
	int8_t x272 = -1;

	t67 = (x269+((x270<=x271)==x272));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = 2543;
	int64_t x275 = INT64_MIN;
	static int16_t x276 = 1;
	int32_t t68 = -159708536;

	t68 = (x273+((x274<=x275)==x276));

	if (t68 != 2543) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x279 = -1;
	static uint16_t x280 = 23U;
	int64_t t69 = INT64_MIN;

	t69 = (x277+((x278<=x279)==x280));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -1;
	volatile int64_t x282 = -53LL;
	static int16_t x283 = 0;
	uint64_t x284 = 13824581051800899LLU;

	t70 = (x281+((x282<=x283)==x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x286 = -1;
	static uint32_t x287 = 48483292U;
	static uint16_t x288 = 1869U;
	uint32_t t71 = 67134051U;

	t71 = (x285+((x286<=x287)==x288));

	if (t71 != 681928U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x291 = 7U;
	static int32_t t72 = -1;

	t72 = (x289+((x290<=x291)==x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 289120106102820LL;
	int16_t x295 = 58;
	int64_t x296 = INT64_MIN;
	static int64_t t73 = -250158254LL;

	t73 = (x293+((x294<=x295)==x296));

	if (t73 != 289120106102820LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 0;
	int8_t x300 = -1;
	int32_t t74 = -4274196;

	t74 = (x297+((x298<=x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	static uint16_t x302 = 5794U;
	int16_t x303 = -1;
	volatile int32_t t75 = -67076;

	t75 = (x301+((x302<=x303)==x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	static volatile uint32_t x307 = 3009U;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = 197133540;

	t76 = (x305+((x306<=x307)==x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x311 = INT32_MAX;
	int32_t t77 = INT32_MAX;

	t77 = (x309+((x310<=x311)==x312));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = -1;
	int64_t x316 = INT64_MIN;
	int64_t t78 = 10742LL;

	t78 = (x313+((x314<=x315)==x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -1;
	uint64_t x318 = 807LLU;
	static int64_t x319 = -1LL;

	t79 = (x317+((x318<=x319)==x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	static int8_t x322 = 0;
	int16_t x323 = INT16_MIN;
	int32_t x324 = -3;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x321+((x322<=x323)==x324));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	int8_t x327 = 4;
	int8_t x328 = -1;
	volatile int32_t t81 = -242141;

	t81 = (x325+((x326<=x327)==x328));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = UINT16_MAX;
	static uint32_t x331 = 52U;
	static uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = -682444;

	t82 = (x329+((x330<=x331)==x332));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -231273;
	static volatile int64_t x334 = INT64_MAX;
	int64_t x335 = -1LL;
	int64_t x336 = 1638173353610496LL;
	volatile int32_t t83 = -3;

	t83 = (x333+((x334<=x335)==x336));

	if (t83 != -231273) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = -1;
	int16_t x339 = -4191;
	int64_t x340 = INT64_MAX;
	volatile int32_t t84 = 51002;

	t84 = (x337+((x338<=x339)==x340));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = 211097286876LL;
	static int8_t x342 = INT8_MAX;
	static volatile uint32_t x343 = 546U;
	static volatile uint16_t x344 = 3U;
	int64_t t85 = -1592044598040756359LL;

	t85 = (x341+((x342<=x343)==x344));

	if (t85 != 211097286876LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x346 = -1;
	int32_t x348 = 376078739;
	static uint64_t t86 = UINT64_MAX;

	t86 = (x345+((x346<=x347)==x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = 2409266;
	int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MAX;
	int32_t t87 = -2426932;

	t87 = (x349+((x350<=x351)==x352));

	if (t87 != 2409266) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MAX;
	volatile int64_t x355 = -1LL;
	int16_t x356 = -1;
	int32_t t88 = -10516;

	t88 = (x353+((x354<=x355)==x356));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 22U;
	volatile int16_t x359 = -1;
	volatile int32_t x360 = -994570;

	t89 = (x357+((x358<=x359)==x360));

	if (t89 != 22) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MAX;
	static uint8_t x362 = 94U;
	int64_t x363 = -195610428040LL;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 0;

	t90 = (x361+((x362<=x363)==x364));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 42;
	static int8_t x366 = INT8_MAX;

	t91 = (x365+((x366<=x367)==x368));

	if (t91 != 42) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x371 = -30251714150942LL;
	int32_t x372 = INT32_MIN;
	volatile uint64_t t92 = 890576LLU;

	t92 = (x369+((x370<=x371)==x372));

	if (t92 != 16508429475150538LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	static int64_t x374 = INT64_MAX;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x373+((x374<=x375)==x376));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MIN;
	static uint16_t x379 = UINT16_MAX;
	static uint8_t x380 = 3U;
	volatile int32_t t94 = -1;

	t94 = (x377+((x378<=x379)==x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	volatile uint32_t x382 = 18942U;
	int32_t x383 = 11353;
	uint8_t x384 = 60U;
	static volatile int32_t t95 = 13475269;

	t95 = (x381+((x382<=x383)==x384));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int16_t x386 = -57;
	static int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MAX;

	t96 = (x385+((x386<=x387)==x388));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	static volatile uint16_t x390 = 12U;
	int64_t x391 = INT64_MIN;
	static int64_t x392 = INT64_MIN;

	t97 = (x389+((x390<=x391)==x392));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = -1;
	int16_t x395 = INT16_MAX;
	volatile int32_t t98 = 317928;

	t98 = (x393+((x394<=x395)==x396));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x398 = INT8_MIN;
	uint8_t x399 = UINT8_MAX;
	uint16_t x400 = 111U;
	volatile uint32_t t99 = 559110U;

	t99 = (x397+((x398<=x399)==x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

