#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 15980780858285169LL;
int32_t t1 = -147443;
int16_t x13 = INT16_MAX;
uint16_t x19 = 13U;
uint32_t x27 = 4008714U;
volatile int32_t t8 = 418;
uint8_t x37 = 1U;
int32_t x38 = -1;
static int64_t x43 = INT64_MIN;
int32_t t11 = 72;
uint16_t x53 = UINT16_MAX;
volatile int64_t x55 = -651917LL;
static int8_t x61 = 0;
int64_t t15 = 421431LL;
static volatile int16_t x72 = -1;
int16_t x74 = -24;
int64_t x75 = -1LL;
int64_t x80 = 1467953LL;
static volatile int16_t x83 = 186;
static uint16_t x84 = 100U;
volatile int32_t t19 = 746277183;
static int32_t t20 = -3446;
volatile int32_t x90 = INT32_MIN;
int16_t x91 = 2;
static int32_t x97 = -1;
int64_t x101 = INT64_MIN;
int64_t x102 = INT64_MAX;
int32_t x105 = -868;
int16_t x106 = INT16_MAX;
int32_t x108 = INT32_MIN;
uint64_t t30 = 16LLU;
int32_t x141 = -1;
uint8_t x145 = 105U;
uint64_t x154 = UINT64_MAX;
int32_t x163 = -701400008;
static int64_t t39 = -33128LL;
static volatile int8_t x173 = INT8_MAX;
volatile uint32_t x175 = 1051158208U;
int8_t x176 = INT8_MIN;
static int32_t t42 = 448;
uint16_t x181 = UINT16_MAX;
int16_t x183 = 183;
int8_t x184 = INT8_MIN;
uint16_t x187 = UINT16_MAX;
int64_t t45 = -68667LL;
static uint8_t x192 = 2U;
int64_t x197 = INT64_MIN;
int32_t x201 = -1;
int16_t x206 = -1;
int64_t t50 = 11LL;
volatile int16_t x212 = INT16_MAX;
int32_t x213 = -1;
int64_t x215 = INT64_MIN;
int16_t x219 = INT16_MAX;
volatile int64_t t53 = -473LL;
volatile int32_t x223 = INT32_MIN;
volatile uint64_t t54 = 801LLU;
static uint64_t x229 = 8251LLU;
int32_t x233 = INT32_MIN;
int16_t x241 = -36;
int8_t x248 = INT8_MAX;
volatile int16_t x249 = INT16_MAX;
volatile int32_t x252 = -1;
uint64_t x253 = 932330LLU;
uint64_t t60 = 1421502LLU;
uint32_t x259 = UINT32_MAX;
int32_t x264 = INT32_MAX;
uint8_t x266 = 0U;
int32_t x270 = -156601;
int16_t x275 = -1;
static int16_t x276 = INT16_MIN;
uint8_t x279 = UINT8_MAX;
int32_t t66 = 1641427;
volatile int64_t x282 = INT64_MIN;
volatile int32_t x290 = -1;
uint16_t x293 = UINT16_MAX;
uint16_t x297 = 0U;
volatile int32_t x299 = INT32_MAX;
uint64_t x303 = UINT64_MAX;
int8_t x307 = -53;
int16_t x320 = 15026;
int32_t x323 = INT32_MIN;
uint64_t x331 = 138287411367303LLU;
uint8_t x336 = 87U;
uint16_t x339 = UINT16_MAX;
int64_t x342 = INT64_MAX;
int16_t x352 = -1;
static int64_t x358 = INT64_MIN;
uint32_t x371 = 162285390U;
int8_t x372 = INT8_MIN;
static int64_t x374 = INT64_MIN;
static int32_t x385 = 2027;
volatile int8_t x392 = -14;
int16_t x396 = INT16_MAX;
static uint8_t x400 = UINT8_MAX;
volatile int32_t t94 = 52;
static uint8_t x404 = UINT8_MAX;
int64_t x407 = INT64_MIN;
uint16_t x416 = UINT16_MAX;
int32_t t98 = 29702986;
int64_t x417 = INT64_MIN;
uint64_t x420 = 816LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static int32_t x2 = INT32_MIN;
	static int32_t x3 = -1;
	int16_t x4 = 8;
	volatile uint64_t t0 = 236316906970LLU;

	t0 = ((x1+(x2<=x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint32_t x7 = UINT32_MAX;
	int16_t x8 = -1;

	t1 = ((x5+(x6<=x7))/x8);

	if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	volatile int64_t x10 = 22011LL;
	uint32_t x11 = 20U;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -28480;

	t2 = ((x9+(x10<=x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = 2;
	int64_t x15 = INT64_MIN;
	uint32_t x16 = 261672U;
	static volatile uint32_t t3 = 3264619U;

	t3 = ((x13+(x14<=x15))/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	static int64_t x18 = -158LL;
	uint64_t x20 = 15282414LLU;
	volatile uint64_t t4 = 254333LLU;

	t4 = ((x17+(x18<=x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 61U;
	volatile uint32_t x22 = 553778U;
	int64_t x23 = INT64_MAX;
	static uint16_t x24 = UINT16_MAX;
	int32_t t5 = -1172132;

	t5 = ((x21+(x22<=x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 998032;
	int32_t x26 = -1;
	uint8_t x28 = 2U;
	static volatile int32_t t6 = 264075;

	t6 = ((x25+(x26<=x27))/x28);

	if (t6 != 499016) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x30 = -1;
	uint16_t x31 = 542U;
	static int16_t x32 = -11;
	int32_t t7 = -736237143;

	t7 = ((x29+(x30<=x31))/x32);

	if (t7 != -5957) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint8_t x34 = UINT8_MAX;
	static volatile int8_t x35 = -1;
	int16_t x36 = INT16_MAX;

	t8 = ((x33+(x34<=x35))/x36);

	if (t8 != 65538) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x39 = 21038U;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -840471984;

	t9 = ((x37+(x38<=x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 1U;
	int8_t x42 = -31;
	int64_t x44 = 12461339542205LL;
	int64_t t10 = -793LL;

	t10 = ((x41+(x42<=x43))/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 6U;
	volatile uint64_t x46 = 4607796827221512129LLU;
	int16_t x47 = -6797;
	volatile int16_t x48 = -1;

	t11 = ((x45+(x46<=x47))/x48);

	if (t11 != -7) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	static uint8_t x50 = 0U;
	volatile uint16_t x51 = 4471U;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 21407755;

	t12 = ((x49+(x50<=x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 21081LLU;

	t13 = ((x53+(x54<=x55))/x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -23;
	uint32_t x58 = 11648U;
	static volatile int16_t x59 = 235;
	int8_t x60 = INT8_MIN;
	int32_t t14 = -1080;

	t14 = ((x57+(x58<=x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = INT8_MIN;
	int32_t x63 = 118;
	int64_t x64 = -8528604600367LL;

	t15 = ((x61+(x62<=x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = INT64_MIN;
	int32_t x70 = -1;
	int32_t x71 = INT32_MAX;
	volatile int64_t t16 = INT64_MAX;

	t16 = ((x69+(x70<=x71))/x72);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	volatile uint64_t x76 = 180737500292336LLU;
	volatile uint64_t t17 = 3740717LLU;

	t17 = ((x73+(x74<=x75))/x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 385;
	static int32_t x78 = INT32_MIN;
	volatile int32_t x79 = -623;
	int64_t t18 = 2507190313594LL;

	t18 = ((x77+(x78<=x79))/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	static int32_t x82 = -1;

	t19 = ((x81+(x82<=x83))/x84);

	if (t19 != 655) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	static uint8_t x86 = 0U;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MIN;

	t20 = ((x85+(x86<=x87))/x88);

	if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int64_t x92 = -7847557467LL;
	volatile int64_t t21 = -8LL;

	t21 = ((x89+(x90<=x91))/x92);

	if (t21 != 1175317552LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	int16_t x94 = INT16_MAX;
	int16_t x95 = -79;
	int8_t x96 = -1;
	volatile int32_t t22 = -2786739;

	t22 = ((x93+(x94<=x95))/x96);

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x98 = INT64_MIN;
	static volatile uint64_t x99 = 1604LLU;
	int16_t x100 = -7265;
	int32_t t23 = -31905;

	t23 = ((x97+(x98<=x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MIN;
	static volatile int64_t t24 = 4895539LL;

	t24 = ((x101+(x102<=x103))/x104);

	if (t24 != 281474976710656LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x107 = 27LL;
	static volatile int32_t t25 = 0;

	t25 = ((x105+(x106<=x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 120U;
	uint16_t x110 = 39U;
	volatile int32_t x111 = -441829;
	int64_t x112 = -1LL;
	int64_t t26 = -1894227264255697LL;

	t26 = ((x109+(x110<=x111))/x112);

	if (t26 != -120LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = -1;
	static int32_t x114 = INT32_MAX;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t27 = 529U;

	t27 = ((x113+(x114<=x115))/x116);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 7747752U;
	volatile int16_t x118 = INT16_MIN;
	static uint32_t x119 = 221020U;
	uint32_t x120 = UINT32_MAX;
	uint32_t t28 = 64U;

	t28 = ((x117+(x118<=x119))/x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 6U;
	int32_t x122 = INT32_MAX;
	uint64_t x123 = 5LLU;
	uint64_t x124 = 156740685LLU;
	volatile uint64_t t29 = 2490154304930342008LLU;

	t29 = ((x121+(x122<=x123))/x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 20704315383917LLU;
	int8_t x126 = -36;
	int16_t x127 = INT16_MIN;
	volatile uint64_t x128 = 233673984308917LLU;

	t30 = ((x125+(x126<=x127))/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = 60U;
	static int32_t x131 = -1;
	uint16_t x132 = 14U;
	volatile int32_t t31 = 668;

	t31 = ((x129+(x130<=x131))/x132);

	if (t31 != -9) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -6288289319118846LL;
	int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	int32_t x136 = 1;
	volatile int64_t t32 = -3916LL;

	t32 = ((x133+(x134<=x135))/x136);

	if (t32 != -6288289319118846LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	int64_t x138 = -1LL;
	uint16_t x139 = UINT16_MAX;
	static uint32_t x140 = UINT32_MAX;
	volatile uint32_t t33 = 20439U;

	t33 = ((x137+(x138<=x139))/x140);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x142 = -1;
	int64_t x143 = 66782475370LL;
	int16_t x144 = 3;
	static volatile int32_t t34 = -8355516;

	t34 = ((x141+(x142<=x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = 235714LL;
	uint16_t x147 = 4788U;
	int32_t x148 = -103782509;
	volatile int32_t t35 = 3367;

	t35 = ((x145+(x146<=x147))/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -45123;
	int32_t x150 = 0;
	uint32_t x151 = 428U;
	uint32_t x152 = 2348373U;
	static volatile uint32_t t36 = 2U;

	t36 = ((x149+(x150<=x151))/x152);

	if (t36 != 1828U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint16_t x155 = 32U;
	static volatile int8_t x156 = -1;
	uint32_t t37 = 10727U;

	t37 = ((x153+(x154<=x155))/x156);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MAX;
	static uint64_t x160 = 2793379936495LLU;
	uint64_t t38 = 190726296065238LLU;

	t38 = ((x157+(x158<=x159))/x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -1;
	volatile int64_t x162 = -1LL;
	int64_t x164 = 1742841327LL;

	t39 = ((x161+(x162<=x163))/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = -1;
	int16_t x166 = -14;
	uint8_t x167 = 4U;
	int8_t x168 = -1;
	static int32_t t40 = -251;

	t40 = ((x165+(x166<=x167))/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MAX;
	int64_t x170 = 793623750683215828LL;
	int32_t x171 = INT32_MIN;
	static uint32_t x172 = UINT32_MAX;
	uint32_t t41 = 187562310U;

	t41 = ((x169+(x170<=x171))/x172);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x174 = INT64_MAX;

	t42 = ((x173+(x174<=x175))/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = 62191LLU;
	volatile uint16_t x179 = 3865U;
	static int64_t x180 = 2181177894LL;
	static volatile int64_t t43 = 1990LL;

	t43 = ((x177+(x178<=x179))/x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x182 = 954U;
	volatile int32_t t44 = 2;

	t44 = ((x181+(x182<=x183))/x184);

	if (t44 != -511) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x185 = 27575595585416LL;
	uint16_t x186 = 6U;
	volatile int64_t x188 = 2016LL;

	t45 = ((x185+(x186<=x187))/x188);

	if (t45 != 13678370826LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 196LLU;
	int8_t x190 = INT8_MAX;
	static volatile int64_t x191 = 14345007LL;
	static volatile uint64_t t46 = 44702083LLU;

	t46 = ((x189+(x190<=x191))/x192);

	if (t46 != 98LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x193 = 4U;
	volatile int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MIN;
	int16_t x196 = -1;
	static int32_t t47 = -18;

	t47 = ((x193+(x194<=x195))/x196);

	if (t47 != -5) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x198 = INT16_MAX;
	volatile int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MAX;
	static int64_t t48 = -453LL;

	t48 = ((x197+(x198<=x199))/x200);

	if (t48 != -4294967298LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = 12;
	static int32_t x203 = INT32_MIN;
	int32_t x204 = -6021;
	volatile int32_t t49 = 5188;

	t49 = ((x201+(x202<=x203))/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = 3LL;
	int16_t x207 = INT16_MIN;
	volatile int64_t x208 = 506094658517600LL;

	t50 = ((x205+(x206<=x207))/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -420086036808LL;
	int64_t x210 = INT64_MAX;
	int8_t x211 = -3;
	volatile int64_t t51 = 15LL;

	t51 = ((x209+(x210<=x211))/x212);

	if (t51 != -12820399LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x214 = INT32_MAX;
	int8_t x216 = 5;
	int32_t t52 = -892281020;

	t52 = ((x213+(x214<=x215))/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MAX;
	uint16_t x218 = 365U;
	static volatile int64_t x220 = INT64_MAX;

	t53 = ((x217+(x218<=x219))/x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x221 = 0;
	int64_t x222 = 36244477496LL;
	volatile uint64_t x224 = 9687LLU;

	t54 = ((x221+(x222<=x223))/x224);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x230 = 3U;
	int32_t x231 = 5511229;
	int32_t x232 = INT32_MIN;
	volatile uint64_t t55 = 841LLU;

	t55 = ((x229+(x230<=x231))/x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x234 = INT64_MIN;
	uint8_t x235 = 0U;
	volatile int8_t x236 = -1;
	volatile int32_t t56 = INT32_MAX;

	t56 = ((x233+(x234<=x235))/x236);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x242 = -1;
	volatile uint16_t x243 = UINT16_MAX;
	int32_t x244 = INT32_MIN;
	volatile int32_t t57 = -452326;

	t57 = ((x241+(x242<=x243))/x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x245 = 5U;
	int64_t x246 = -1714390450246LL;
	volatile int8_t x247 = INT8_MIN;
	static int32_t t58 = 29605535;

	t58 = ((x245+(x246<=x247))/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = 1U;
	int8_t x251 = INT8_MIN;
	volatile int32_t t59 = -666921;

	t59 = ((x249+(x250<=x251))/x252);

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x254 = -1;
	static uint16_t x255 = 3907U;
	volatile int64_t x256 = -1LL;

	t60 = ((x253+(x254<=x255))/x256);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 591059135660390750LLU;
	static int32_t x258 = -1;
	int32_t x260 = 26673;
	static volatile uint64_t t61 = 562LLU;

	t61 = ((x257+(x258<=x259))/x260);

	if (t61 != 22159454716769LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x261 = 18921U;
	static uint8_t x262 = UINT8_MAX;
	int8_t x263 = -1;
	volatile int32_t t62 = 526062;

	t62 = ((x261+(x262<=x263))/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x265 = -790625795LL;
	uint32_t x267 = UINT32_MAX;
	static int8_t x268 = 23;
	int64_t t63 = 842LL;

	t63 = ((x265+(x266<=x267))/x268);

	if (t63 != -34375034LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 229U;
	int32_t x271 = 5512008;
	int64_t x272 = INT64_MIN;
	volatile int64_t t64 = 451449LL;

	t64 = ((x269+(x270<=x271))/x272);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x273 = -1;
	uint16_t x274 = 1312U;
	static int32_t t65 = -19;

	t65 = ((x273+(x274<=x275))/x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x277 = 5U;
	int32_t x278 = INT32_MIN;
	static int32_t x280 = INT32_MIN;

	t66 = ((x277+(x278<=x279))/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x281 = UINT8_MAX;
	static int64_t x283 = 1766133698LL;
	int8_t x284 = -8;
	int32_t t67 = 6;

	t67 = ((x281+(x282<=x283))/x284);

	if (t67 != -32) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 1U;
	volatile int32_t x286 = -1;
	int8_t x287 = -28;
	uint8_t x288 = 2U;
	int32_t t68 = 7;

	t68 = ((x285+(x286<=x287))/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = INT64_MIN;
	volatile uint64_t t69 = 3224690273973LLU;

	t69 = ((x289+(x290<=x291))/x292);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x294 = INT8_MAX;
	int16_t x295 = 46;
	volatile uint16_t x296 = 7U;
	static volatile int32_t t70 = 1;

	t70 = ((x293+(x294<=x295))/x296);

	if (t70 != 9362) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x298 = INT32_MIN;
	int16_t x300 = INT16_MAX;
	volatile int32_t t71 = 8207;

	t71 = ((x297+(x298<=x299))/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x301 = UINT16_MAX;
	volatile uint64_t x302 = 33829207254LLU;
	int32_t x304 = INT32_MIN;
	int32_t t72 = -13939312;

	t72 = ((x301+(x302<=x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = 447305011LLU;
	int8_t x306 = INT8_MAX;
	int16_t x308 = -9190;
	uint64_t t73 = 229938774LLU;

	t73 = ((x305+(x306<=x307))/x308);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 88U;
	int16_t x314 = -2924;
	int16_t x315 = 0;
	int64_t x316 = -1LL;
	static volatile int64_t t74 = -19818645209LL;

	t74 = ((x313+(x314<=x315))/x316);

	if (t74 != -89LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x317 = 354372079720365576LLU;
	uint8_t x318 = 16U;
	int32_t x319 = -3266792;
	volatile uint64_t t75 = 3495516104010995941LLU;

	t75 = ((x317+(x318<=x319))/x320);

	if (t75 != 23583926508742LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x321 = -1;
	uint8_t x322 = 1U;
	uint32_t x324 = 2069368U;
	uint32_t t76 = 26883181U;

	t76 = ((x321+(x322<=x323))/x324);

	if (t76 != 2075U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -1;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MAX;
	volatile int32_t t77 = 67;

	t77 = ((x325+(x326<=x327))/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = 18;
	int64_t x330 = 3159LL;
	static int16_t x332 = -1;
	int32_t t78 = -51723014;

	t78 = ((x329+(x330<=x331))/x332);

	if (t78 != -19) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x333 = INT16_MIN;
	uint8_t x334 = 102U;
	uint32_t x335 = UINT32_MAX;
	int32_t t79 = 106;

	t79 = ((x333+(x334<=x335))/x336);

	if (t79 != -376) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int64_t x338 = INT64_MAX;
	volatile int32_t x340 = 13031798;
	int32_t t80 = -213;

	t80 = ((x337+(x338<=x339))/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = -1;
	int64_t x343 = INT64_MIN;
	volatile int32_t x344 = INT32_MAX;
	int32_t t81 = -1;

	t81 = ((x341+(x342<=x343))/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x345 = INT32_MIN;
	int8_t x346 = -47;
	int16_t x347 = INT16_MIN;
	int32_t x348 = 346;
	volatile int32_t t82 = 2368;

	t82 = ((x345+(x346<=x347))/x348);

	if (t82 != -6206600) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = 1U;
	int16_t x351 = INT16_MIN;
	volatile int32_t t83 = -78546;

	t83 = ((x349+(x350<=x351))/x352);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = -28972LL;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = -19;
	int32_t x356 = INT32_MAX;
	int64_t t84 = 254034944081LL;

	t84 = ((x353+(x354<=x355))/x356);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = UINT8_MAX;
	uint8_t x359 = 26U;
	volatile int64_t x360 = INT64_MIN;
	int64_t t85 = -59LL;

	t85 = ((x357+(x358<=x359))/x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -1;
	uint32_t x362 = 1U;
	volatile uint32_t x363 = 33310408U;
	static uint16_t x364 = 7U;
	int32_t t86 = 10050;

	t86 = ((x361+(x362<=x363))/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -1;
	uint8_t x366 = 47U;
	int16_t x367 = INT16_MAX;
	int16_t x368 = -1;
	volatile int32_t t87 = 2270;

	t87 = ((x365+(x366<=x367))/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x369 = 173U;
	int8_t x370 = INT8_MAX;
	int32_t t88 = 7275;

	t88 = ((x369+(x370<=x371))/x372);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = 1;
	int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MAX;
	int32_t t89 = -72;

	t89 = ((x373+(x374<=x375))/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x377 = 3526LLU;
	volatile int32_t x378 = 31;
	int64_t x379 = INT64_MIN;
	static int16_t x380 = -1;
	static uint64_t t90 = 1023140386169990LLU;

	t90 = ((x377+(x378<=x379))/x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MIN;
	int32_t x388 = 7;
	volatile int32_t t91 = -21017;

	t91 = ((x385+(x386<=x387))/x388);

	if (t91 != 289) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MAX;
	uint64_t x390 = UINT64_MAX;
	volatile uint16_t x391 = 15214U;
	static volatile int32_t t92 = -46;

	t92 = ((x389+(x390<=x391))/x392);

	if (t92 != -9) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = -1LL;
	int8_t x394 = INT8_MAX;
	uint32_t x395 = 0U;
	int64_t t93 = 2677035841974071624LL;

	t93 = ((x393+(x394<=x395))/x396);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	volatile uint64_t x399 = 312134855380LLU;

	t94 = ((x397+(x398<=x399))/x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = INT16_MAX;
	int64_t x402 = -1LL;
	int8_t x403 = INT8_MIN;
	int32_t t95 = -203811;

	t95 = ((x401+(x402<=x403))/x404);

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x405 = UINT64_MAX;
	static volatile int8_t x406 = -1;
	static uint16_t x408 = 121U;
	uint64_t t96 = 4153381811076LLU;

	t96 = ((x405+(x406<=x407))/x408);

	if (t96 != 152452430361235963LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = -1LL;
	int64_t x410 = 1735566196004LL;
	uint8_t x411 = UINT8_MAX;
	int16_t x412 = 40;
	int64_t t97 = 6049283LL;

	t97 = ((x409+(x410<=x411))/x412);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x413 = 8635;
	int16_t x414 = INT16_MIN;
	uint16_t x415 = UINT16_MAX;

	t98 = ((x413+(x414<=x415))/x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x418 = -1;
	int64_t x419 = INT64_MIN;
	static volatile uint64_t t99 = 171724268355997LLU;

	t99 = ((x417+(x418<=x419))/x420);

	if (t99 != 11303152005949480LLU) { NG(); } else { ; }
	
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

