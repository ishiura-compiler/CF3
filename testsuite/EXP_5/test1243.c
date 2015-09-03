#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
volatile int32_t t1 = 13;
uint16_t x9 = 1206U;
uint16_t x12 = UINT16_MAX;
int16_t x13 = INT16_MAX;
int16_t x16 = 817;
static int32_t t4 = -43214353;
int64_t x21 = -123356LL;
int16_t x25 = INT16_MIN;
uint64_t x29 = UINT64_MAX;
static int64_t x33 = 5914528738271921LL;
int32_t x34 = 0;
int32_t x39 = 3434384;
int8_t x43 = -1;
int16_t x54 = 0;
volatile uint8_t x55 = UINT8_MAX;
volatile int32_t t13 = -11395;
volatile int32_t t14 = -56641;
volatile int32_t t15 = -539;
volatile uint8_t x65 = 59U;
int8_t x70 = -1;
uint16_t x72 = 7U;
int16_t x74 = INT16_MIN;
int16_t x75 = -1;
volatile int32_t t18 = -1811;
uint32_t x84 = 13644862U;
static int32_t x92 = -12;
volatile uint16_t x94 = 15445U;
int64_t x96 = -1363977532LL;
int32_t x98 = INT32_MAX;
int8_t x101 = INT8_MAX;
static int8_t x104 = INT8_MAX;
static volatile int16_t x109 = INT16_MIN;
int16_t x118 = INT16_MIN;
volatile int64_t x119 = INT64_MAX;
uint8_t x128 = 1U;
uint8_t x134 = UINT8_MAX;
uint16_t x135 = UINT16_MAX;
uint32_t x136 = UINT32_MAX;
int64_t x138 = -87LL;
int16_t x139 = -1;
int8_t x140 = INT8_MIN;
int32_t t33 = 105;
static uint64_t x145 = 25296034LLU;
uint8_t x147 = UINT8_MAX;
volatile uint64_t x151 = 0LLU;
static int8_t x157 = 22;
static int64_t x162 = INT64_MAX;
int32_t t39 = -6269;
int8_t x166 = INT8_MIN;
volatile int32_t t40 = 1623;
volatile uint32_t x172 = 505U;
int64_t x174 = INT64_MAX;
int64_t x176 = -962LL;
volatile int32_t t42 = 1;
int8_t x179 = -44;
static int32_t t43 = 62;
int16_t x182 = 338;
volatile int8_t x191 = INT8_MIN;
static uint32_t x192 = UINT32_MAX;
int32_t t48 = 884;
int16_t x205 = INT16_MIN;
uint16_t x221 = UINT16_MAX;
int64_t x223 = INT64_MAX;
uint8_t x225 = 1U;
int8_t x230 = INT8_MIN;
static int8_t x231 = -1;
static uint8_t x233 = 0U;
int64_t x235 = -1LL;
int64_t x237 = -1LL;
uint64_t x241 = 24034LLU;
int32_t t58 = 6039;
int64_t x245 = -15407LL;
int8_t x252 = INT8_MIN;
static uint8_t x253 = 1U;
int32_t x254 = INT32_MIN;
int32_t t62 = 2;
uint32_t x261 = 398U;
int8_t x264 = -25;
volatile int32_t t63 = 29463945;
int64_t x286 = INT64_MIN;
volatile int32_t x289 = -1;
static int8_t x296 = -1;
static int64_t x299 = -1LL;
int16_t x308 = INT16_MIN;
int32_t x312 = -1;
volatile int32_t t74 = -55966738;
int64_t x316 = 7945506953LL;
int32_t t75 = -5;
static volatile int64_t x329 = INT64_MAX;
uint16_t x334 = 406U;
int16_t x342 = INT16_MIN;
volatile uint64_t x346 = 24LLU;
static int64_t x347 = INT64_MIN;
volatile int32_t t83 = 4;
int16_t x351 = -1;
uint8_t x359 = UINT8_MAX;
uint8_t x361 = 1U;
int32_t x365 = -369601;
volatile int8_t x366 = 1;
int64_t x372 = INT64_MAX;
int64_t x375 = -1LL;
static volatile int64_t x385 = INT64_MIN;
int16_t x394 = -1;
volatile int16_t x396 = INT16_MIN;
uint64_t x400 = 5086483219LLU;
int32_t x403 = INT32_MIN;
int8_t x407 = -1;
volatile int32_t t98 = -2518145;


void f0(void) {
	int32_t x1 = 229;
	uint16_t x2 = 3U;
	static uint8_t x3 = 6U;
	volatile int32_t x4 = INT32_MIN;
	static int32_t t0 = -255;

	t0 = (x1==((x2==x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int32_t x6 = INT32_MIN;
	int16_t x7 = -12;

	t1 = (x5==((x6==x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = UINT32_MAX;
	int16_t x11 = -438;
	volatile int32_t t2 = -11342;

	t2 = (x9==((x10==x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	uint64_t x15 = UINT64_MAX;
	int32_t t3 = 273857268;

	t3 = (x13==((x14==x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -41880933264382LL;
	volatile uint16_t x18 = 5244U;
	static int8_t x19 = -14;
	static int32_t x20 = 1867492;

	t4 = (x17==((x18==x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x22 = INT8_MIN;
	volatile uint64_t x23 = 1790275953LLU;
	int32_t x24 = INT32_MAX;
	static int32_t t5 = -836;

	t5 = (x21==((x22==x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = INT8_MAX;
	uint32_t x27 = 786254U;
	int16_t x28 = -64;
	int32_t t6 = 280;

	t6 = (x25==((x26==x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	uint16_t x31 = 6U;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -73387;

	t7 = (x29==((x30==x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x35 = 3712543;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 364311161;

	t8 = (x33==((x34==x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MAX;
	uint64_t x38 = UINT64_MAX;
	int32_t x40 = 192;
	volatile int32_t t9 = 2763560;

	t9 = (x37==((x38==x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 5119411U;
	volatile int16_t x42 = INT16_MIN;
	int16_t x44 = -412;
	static volatile int32_t t10 = 42990212;

	t10 = (x41==((x42==x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = -21950994LL;
	static int16_t x47 = INT16_MIN;
	static uint8_t x48 = 5U;
	static int32_t t11 = 2513;

	t11 = (x45==((x46==x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	int32_t x50 = INT32_MIN;
	static int16_t x51 = INT16_MAX;
	static int8_t x52 = INT8_MAX;
	int32_t t12 = 0;

	t12 = (x49==((x50==x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 16011;
	int16_t x56 = INT16_MIN;

	t13 = (x53==((x54==x55)%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MAX;

	t14 = (x57==((x58==x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	volatile int16_t x62 = INT16_MIN;
	int16_t x63 = 26;
	volatile int32_t x64 = 2446;

	t15 = (x61==((x62==x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 1U;
	static int16_t x67 = INT16_MAX;
	uint16_t x68 = 8432U;
	static volatile int32_t t16 = 30303;

	t16 = (x65==((x66==x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int64_t x71 = INT64_MIN;
	volatile int32_t t17 = -343;

	t17 = (x69==((x70==x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	uint16_t x76 = 32641U;

	t18 = (x73==((x74==x75)%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x81 = INT8_MIN;
	volatile int16_t x82 = 1;
	uint64_t x83 = UINT64_MAX;
	int32_t t19 = -115;

	t19 = (x81==((x82==x83)%x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	static uint32_t x86 = 124846U;
	volatile uint32_t x87 = UINT32_MAX;
	int32_t x88 = 11939;
	volatile int32_t t20 = -214412;

	t20 = (x85==((x86==x87)%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = INT8_MIN;
	int8_t x90 = 1;
	int32_t x91 = INT32_MIN;
	int32_t t21 = 228;

	t21 = (x89==((x90==x91)%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x93 = 223778027U;
	int32_t x95 = -260075;
	volatile int32_t t22 = -5580;

	t22 = (x93==((x94==x95)%x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 3U;
	int64_t x99 = 31262LL;
	static uint8_t x100 = 1U;
	volatile int32_t t23 = -793;

	t23 = (x97==((x98==x99)%x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x102 = 9659878979LLU;
	static uint64_t x103 = UINT64_MAX;
	volatile int32_t t24 = 302487;

	t24 = (x101==((x102==x103)%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x105 = UINT8_MAX;
	volatile uint16_t x106 = 2U;
	int64_t x107 = INT64_MAX;
	static int8_t x108 = INT8_MIN;
	int32_t t25 = 23506807;

	t25 = (x105==((x106==x107)%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = UINT8_MAX;
	uint32_t x111 = 3977U;
	int64_t x112 = 230369152229324737LL;
	static volatile int32_t t26 = 24;

	t26 = (x109==((x110==x111)%x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = INT16_MAX;
	volatile int64_t x114 = 127286423LL;
	int8_t x115 = 37;
	int16_t x116 = INT16_MIN;
	volatile int32_t t27 = 200152916;

	t27 = (x113==((x114==x115)%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = -4;
	uint16_t x120 = UINT16_MAX;
	int32_t t28 = 1262;

	t28 = (x117==((x118==x119)%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = INT64_MIN;
	static int64_t x122 = INT64_MAX;
	static volatile uint16_t x123 = 5788U;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t29 = 6;

	t29 = (x121==((x122==x123)%x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1769;
	int64_t x126 = 427840574LL;
	int32_t x127 = INT32_MAX;
	volatile int32_t t30 = 77777;

	t30 = (x125==((x126==x127)%x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = INT8_MIN;
	static int32_t x130 = -1;
	static int8_t x131 = -1;
	static int64_t x132 = INT64_MIN;
	int32_t t31 = 123800642;

	t31 = (x129==((x130==x131)%x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x133 = -1LL;
	int32_t t32 = -1;

	t32 = (x133==((x134==x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 5;

	t33 = (x137==((x138==x139)%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 73U;
	int32_t x142 = INT32_MIN;
	static int32_t x143 = -1;
	int8_t x144 = INT8_MIN;
	int32_t t34 = 1;

	t34 = (x141==((x142==x143)%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x146 = 1903901686LLU;
	int32_t x148 = INT32_MAX;
	int32_t t35 = -1;

	t35 = (x145==((x146==x147)%x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x149 = 13661754125LLU;
	int8_t x150 = -1;
	static int64_t x152 = -1LL;
	static volatile int32_t t36 = 168816;

	t36 = (x149==((x150==x151)%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = -1;
	int64_t x154 = -3343LL;
	static int32_t x155 = INT32_MAX;
	int64_t x156 = 511535907LL;
	int32_t t37 = 16016;

	t37 = (x153==((x154==x155)%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x158 = 1;
	int16_t x159 = -181;
	int64_t x160 = 4119996LL;
	int32_t t38 = -227;

	t38 = (x157==((x158==x159)%x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x161 = 140503U;
	int16_t x163 = INT16_MIN;
	static int8_t x164 = INT8_MIN;

	t39 = (x161==((x162==x163)%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	int64_t x167 = 48LL;
	uint8_t x168 = UINT8_MAX;

	t40 = (x165==((x166==x167)%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1449497;
	int32_t x170 = -1;
	volatile int64_t x171 = -1002621469481252374LL;
	int32_t t41 = 173661144;

	t41 = (x169==((x170==x171)%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = 11437;
	volatile uint16_t x175 = 6053U;

	t42 = (x173==((x174==x175)%x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x177 = -25527;
	uint32_t x178 = 0U;
	static volatile int64_t x180 = INT64_MIN;

	t43 = (x177==((x178==x179)%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -45740501LL;
	int64_t x183 = 578981851LL;
	volatile int64_t x184 = -704958106914763LL;
	int32_t t44 = -12594;

	t44 = (x181==((x182==x183)%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 6282866LLU;
	volatile int32_t x186 = 91694088;
	int32_t x187 = 22457649;
	int64_t x188 = INT64_MAX;
	int32_t t45 = 1;

	t45 = (x185==((x186==x187)%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = 41;
	int32_t x190 = INT32_MAX;
	volatile int32_t t46 = -824052;

	t46 = (x189==((x190==x191)%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x193 = -27;
	static int16_t x194 = -362;
	volatile int8_t x195 = 24;
	uint64_t x196 = 115859481430650471LLU;
	int32_t t47 = -60;

	t47 = (x193==((x194==x195)%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x197 = UINT8_MAX;
	int64_t x198 = -1LL;
	volatile int64_t x199 = -8275321955184636LL;
	static int32_t x200 = 21;

	t48 = (x197==((x198==x199)%x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	static uint32_t x202 = UINT32_MAX;
	volatile int32_t x203 = -1;
	static int32_t x204 = INT32_MAX;
	int32_t t49 = 2599755;

	t49 = (x201==((x202==x203)%x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x206 = 99U;
	volatile int8_t x207 = INT8_MIN;
	int16_t x208 = 14;
	volatile int32_t t50 = 746874245;

	t50 = (x205==((x206==x207)%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MAX;
	volatile uint32_t x214 = 2464U;
	uint32_t x215 = 685733435U;
	static int32_t x216 = INT32_MIN;
	static int32_t t51 = -79673;

	t51 = (x213==((x214==x215)%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	volatile int16_t x218 = INT16_MIN;
	static volatile int64_t x219 = -946129370LL;
	int64_t x220 = INT64_MAX;
	volatile int32_t t52 = 170729;

	t52 = (x217==((x218==x219)%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x222 = -1;
	uint32_t x224 = 5802U;
	int32_t t53 = 1270;

	t53 = (x221==((x222==x223)%x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x226 = -16583515270696352LL;
	int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MAX;
	int32_t t54 = 1280;

	t54 = (x225==((x226==x227)%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -1;
	int16_t x232 = INT16_MIN;
	volatile int32_t t55 = -10849;

	t55 = (x229==((x230==x231)%x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x234 = -1;
	static int64_t x236 = INT64_MIN;
	int32_t t56 = -1381;

	t56 = (x233==((x234==x235)%x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x238 = UINT32_MAX;
	int16_t x239 = 4;
	int32_t x240 = INT32_MIN;
	int32_t t57 = 2371;

	t57 = (x237==((x238==x239)%x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = 2;
	uint8_t x243 = 116U;
	int8_t x244 = -1;

	t58 = (x241==((x242==x243)%x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x246 = INT8_MAX;
	int8_t x247 = 2;
	volatile int16_t x248 = -1;
	int32_t t59 = 0;

	t59 = (x245==((x246==x247)%x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -1;
	int16_t x250 = -1;
	uint32_t x251 = 12766U;
	int32_t t60 = 233726729;

	t60 = (x249==((x250==x251)%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x255 = INT32_MAX;
	static int8_t x256 = -18;
	volatile int32_t t61 = -11;

	t61 = (x253==((x254==x255)%x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 96LLU;
	int64_t x258 = INT64_MAX;
	static volatile int32_t x259 = INT32_MAX;
	static int16_t x260 = 27;

	t62 = (x257==((x258==x259)%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x262 = -1;
	int8_t x263 = 8;

	t63 = (x261==((x262==x263)%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 59U;
	uint16_t x266 = 0U;
	uint16_t x267 = 69U;
	static int64_t x268 = INT64_MIN;
	static int32_t t64 = 0;

	t64 = (x265==((x266==x267)%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x273 = -29374283;
	int64_t x274 = -316041461LL;
	static uint32_t x275 = UINT32_MAX;
	static int8_t x276 = 12;
	volatile int32_t t65 = 20335;

	t65 = (x273==((x274==x275)%x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -359;
	int32_t x278 = 21715;
	int32_t x279 = INT32_MIN;
	volatile int16_t x280 = INT16_MIN;
	static int32_t t66 = 66070;

	t66 = (x277==((x278==x279)%x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = -28;
	int32_t x283 = 196;
	int64_t x284 = INT64_MAX;
	int32_t t67 = -180771106;

	t67 = (x281==((x282==x283)%x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t68 = 5330;

	t68 = (x285==((x286==x287)%x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x290 = -1LL;
	int8_t x291 = 1;
	static int8_t x292 = 15;
	volatile int32_t t69 = -26267477;

	t69 = (x289==((x290==x291)%x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x293 = INT16_MAX;
	int16_t x294 = -15145;
	static volatile int32_t x295 = INT32_MIN;
	volatile int32_t t70 = -429642;

	t70 = (x293==((x294==x295)%x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -1;
	int64_t x298 = -18672LL;
	int32_t x300 = INT32_MIN;
	int32_t t71 = -6;

	t71 = (x297==((x298==x299)%x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = 520746LLU;
	int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MIN;
	int16_t x304 = -1;
	int32_t t72 = 5314;

	t72 = (x301==((x302==x303)%x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x305 = UINT32_MAX;
	volatile int8_t x306 = -1;
	static uint32_t x307 = 10462867U;
	int32_t t73 = 37;

	t73 = (x305==((x306==x307)%x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 2044683510794156LLU;
	int8_t x310 = INT8_MIN;
	volatile int32_t x311 = INT32_MAX;

	t74 = (x309==((x310==x311)%x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -4;
	volatile uint8_t x314 = 12U;
	int8_t x315 = 0;

	t75 = (x313==((x314==x315)%x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x317 = -735632438LL;
	uint32_t x318 = UINT32_MAX;
	uint32_t x319 = 15U;
	static int64_t x320 = -1LL;
	static int32_t t76 = 201855398;

	t76 = (x317==((x318==x319)%x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	static volatile int8_t x322 = -5;
	int32_t x323 = 69664;
	int8_t x324 = -1;
	volatile int32_t t77 = 639338949;

	t77 = (x321==((x322==x323)%x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = 480155752092LL;
	int64_t x326 = 62148260768688LL;
	volatile int64_t x327 = -1LL;
	static int64_t x328 = -15479131967LL;
	int32_t t78 = 503018404;

	t78 = (x325==((x326==x327)%x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x330 = 4;
	volatile int32_t x331 = INT32_MIN;
	int32_t x332 = -1;
	static int32_t t79 = -9176;

	t79 = (x329==((x330==x331)%x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x333 = INT8_MIN;
	static int64_t x335 = -1612386LL;
	int64_t x336 = -294LL;
	int32_t t80 = 17;

	t80 = (x333==((x334==x335)%x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	static uint8_t x338 = 7U;
	int16_t x339 = -12;
	volatile int16_t x340 = -1;
	int32_t t81 = 12;

	t81 = (x337==((x338==x339)%x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = 7801;
	uint32_t x343 = 327U;
	volatile int32_t x344 = INT32_MIN;
	volatile int32_t t82 = -23586985;

	t82 = (x341==((x342==x343)%x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x345 = 17U;
	uint64_t x348 = UINT64_MAX;

	t83 = (x345==((x346==x347)%x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = 2U;
	volatile uint64_t x350 = UINT64_MAX;
	uint64_t x352 = UINT64_MAX;
	static int32_t t84 = -20;

	t84 = (x349==((x350==x351)%x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x353 = INT8_MAX;
	int16_t x354 = -1;
	int8_t x355 = -1;
	int8_t x356 = INT8_MAX;
	volatile int32_t t85 = 254058;

	t85 = (x353==((x354==x355)%x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = -1;
	int64_t x358 = -1LL;
	int8_t x360 = INT8_MAX;
	int32_t t86 = -600348629;

	t86 = (x357==((x358==x359)%x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x362 = -1;
	uint32_t x363 = 1U;
	int32_t x364 = -5113;
	int32_t t87 = -415834649;

	t87 = (x361==((x362==x363)%x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x367 = 60U;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t88 = -256;

	t88 = (x365==((x366==x367)%x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x369 = 50637;
	int16_t x370 = 55;
	volatile int64_t x371 = 2343829183709558LL;
	static int32_t t89 = -1559940;

	t89 = (x369==((x370==x371)%x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x373 = 0U;
	int8_t x374 = 26;
	int64_t x376 = INT64_MAX;
	static volatile int32_t t90 = 1008573;

	t90 = (x373==((x374==x375)%x376));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = -1;
	static uint16_t x378 = 7728U;
	uint16_t x379 = 193U;
	uint64_t x380 = UINT64_MAX;
	static volatile int32_t t91 = 87969145;

	t91 = (x377==((x378==x379)%x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MIN;
	uint16_t x382 = UINT16_MAX;
	int16_t x383 = -1;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t92 = -43;

	t92 = (x381==((x382==x383)%x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x386 = 16267;
	volatile uint8_t x387 = 14U;
	static uint16_t x388 = UINT16_MAX;
	int32_t t93 = -16124190;

	t93 = (x385==((x386==x387)%x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x389 = UINT16_MAX;
	volatile int64_t x390 = -1LL;
	volatile int8_t x391 = -16;
	int64_t x392 = -1LL;
	static int32_t t94 = 97358828;

	t94 = (x389==((x390==x391)%x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MIN;
	int32_t x395 = -2856;
	static int32_t t95 = 16745426;

	t95 = (x393==((x394==x395)%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x397 = 2527U;
	int16_t x398 = 6;
	static int64_t x399 = INT64_MIN;
	volatile int32_t t96 = 493858329;

	t96 = (x397==((x398==x399)%x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x401 = 0;
	int32_t x402 = INT32_MIN;
	int16_t x404 = 115;
	static volatile int32_t t97 = -10;

	t97 = (x401==((x402==x403)%x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MIN;
	int16_t x408 = -1;

	t98 = (x405==((x406==x407)%x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x409 = UINT32_MAX;
	static int8_t x410 = INT8_MAX;
	int8_t x411 = INT8_MAX;
	volatile int64_t x412 = INT64_MIN;
	int32_t t99 = 60584;

	t99 = (x409==((x410==x411)%x412));

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

