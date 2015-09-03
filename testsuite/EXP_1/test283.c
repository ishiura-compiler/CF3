#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MIN;
volatile int64_t x2 = INT64_MIN;
uint16_t x3 = 17715U;
volatile uint64_t x9 = 0LLU;
int64_t x11 = INT64_MIN;
static int32_t x16 = INT32_MIN;
static uint32_t x32 = UINT32_MAX;
int32_t x35 = INT32_MIN;
volatile uint16_t x36 = UINT16_MAX;
volatile int32_t t5 = 32878769;
static int16_t x47 = -1;
int64_t x55 = INT64_MIN;
volatile int32_t t9 = -7454;
volatile uint32_t x58 = 3U;
int64_t x59 = -250391336732350025LL;
int8_t x61 = INT8_MIN;
volatile uint8_t x64 = 33U;
volatile int32_t t11 = 847767074;
volatile int32_t x67 = 13694;
volatile int32_t t12 = -816689692;
static int32_t x70 = -84723790;
int32_t x72 = INT32_MIN;
volatile int32_t x74 = -1;
volatile int32_t t14 = -111363974;
static int8_t x81 = INT8_MAX;
uint32_t x82 = 472454U;
int64_t x83 = INT64_MIN;
int16_t x90 = INT16_MIN;
int32_t t17 = -673;
static int64_t x95 = INT64_MIN;
volatile int32_t x97 = INT32_MAX;
int32_t x98 = INT32_MAX;
volatile int32_t t19 = 0;
static int32_t x104 = INT32_MIN;
int16_t x111 = 3764;
int32_t x112 = INT32_MIN;
static uint32_t x117 = UINT32_MAX;
int64_t x122 = INT64_MIN;
uint8_t x126 = UINT8_MAX;
int8_t x128 = 3;
int32_t t25 = 0;
int8_t x129 = -1;
int16_t x132 = INT16_MIN;
int64_t x134 = -2LL;
volatile uint64_t x138 = UINT64_MAX;
int64_t x140 = -1LL;
int8_t x149 = INT8_MIN;
int32_t x150 = INT32_MIN;
int32_t t31 = -216061;
int32_t x158 = -1;
int8_t x159 = 1;
int32_t t33 = -315787824;
int64_t x169 = -1LL;
volatile int8_t x172 = 50;
int32_t t34 = -152196576;
int64_t x174 = 52440056LL;
int64_t x178 = -383LL;
uint16_t x192 = UINT16_MAX;
volatile int16_t x199 = -1;
static uint16_t x200 = UINT16_MAX;
static volatile int32_t t42 = 33;
static volatile int32_t x205 = -1;
static uint32_t x206 = 168U;
int32_t x208 = INT32_MAX;
int64_t x215 = INT64_MIN;
uint16_t x222 = 2877U;
int16_t x225 = INT16_MAX;
int8_t x227 = -1;
int32_t x230 = 159462;
uint32_t x231 = UINT32_MAX;
uint64_t x241 = 0LLU;
uint16_t x242 = 1248U;
static int8_t x245 = -1;
uint8_t x247 = 15U;
volatile uint64_t x252 = 11LLU;
uint32_t x261 = 400U;
int64_t x269 = INT64_MAX;
int64_t x270 = INT64_MAX;
int16_t x274 = -23;
int8_t x287 = -7;
int32_t t63 = 12801963;
static int64_t x294 = 0LL;
int8_t x301 = -1;
int64_t x308 = INT64_MIN;
uint16_t x310 = 13769U;
static volatile int32_t t69 = 287725926;
static volatile int32_t x317 = -1;
volatile int32_t t70 = -34;
uint64_t x326 = UINT64_MAX;
int8_t x333 = 12;
volatile int32_t x335 = INT32_MAX;
int32_t t75 = -2289782;
static int32_t t77 = 63;
static int8_t x358 = -1;
volatile int32_t x364 = -1;
uint8_t x371 = 18U;
static int32_t x374 = INT32_MIN;
volatile uint32_t x393 = UINT32_MAX;
uint16_t x394 = 21U;
int8_t x396 = -1;
uint8_t x401 = UINT8_MAX;
static int8_t x411 = INT8_MIN;
int8_t x415 = -2;
int8_t x418 = -1;
int64_t x424 = INT64_MIN;
int8_t x429 = INT8_MIN;
int16_t x440 = INT16_MIN;
volatile uint16_t x445 = 21348U;
uint64_t x446 = 5890595LLU;
static volatile int32_t t97 = 803912;
static int8_t x449 = 0;
int16_t x452 = -1;
volatile int32_t t99 = 27822014;


void f0(void) {
	int64_t x4 = -1LL;
	static int32_t t0 = 30252;

	t0 = (((x1-x2)<x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x10 = 135313303LLU;
	int16_t x12 = INT16_MIN;
	int32_t t1 = 13;

	t1 = (((x9-x10)<x11)<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int8_t x14 = 56;
	int64_t x15 = -1LL;
	int32_t t2 = 41;

	t2 = (((x13-x14)<x15)<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int16_t x18 = INT16_MAX;
	static int32_t x19 = INT32_MIN;
	int8_t x20 = 14;
	volatile int32_t t3 = 15;

	t3 = (((x17-x18)<x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MIN;
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = 3955523765421936LL;
	volatile int32_t t4 = 15036736;

	t4 = (((x29-x30)<x31)<=x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x33 = 846726212U;
	int16_t x34 = INT16_MAX;

	t5 = (((x33-x34)<x35)<=x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = UINT16_MAX;
	uint64_t x38 = UINT64_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	static uint8_t x40 = 15U;
	static volatile int32_t t6 = -688;

	t6 = (((x37-x38)<x39)<=x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = 781;
	int8_t x46 = 0;
	static volatile int32_t x48 = INT32_MAX;
	int32_t t7 = 1318;

	t7 = (((x45-x46)<x47)<=x48);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = 7809556;
	static uint32_t x50 = 22901U;
	static int8_t x51 = -45;
	int8_t x52 = 1;
	volatile int32_t t8 = 42200;

	t8 = (((x49-x50)<x51)<=x52);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 1U;
	int32_t x54 = 5;
	static uint64_t x56 = 62500267LLU;

	t9 = (((x53-x54)<x55)<=x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = UINT8_MAX;
	uint32_t x60 = 547U;
	int32_t t10 = 15074;

	t10 = (((x57-x58)<x59)<=x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x62 = 198847U;
	int32_t x63 = INT32_MAX;

	t11 = (((x61-x62)<x63)<=x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MAX;
	static int32_t x66 = -1;
	static uint16_t x68 = UINT16_MAX;

	t12 = (((x65-x66)<x67)<=x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -1;
	static volatile int8_t x71 = -3;
	static int32_t t13 = -191255283;

	t13 = (((x69-x70)<x71)<=x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = 1997U;
	int32_t x75 = INT32_MAX;
	static uint8_t x76 = 104U;

	t14 = (((x73-x74)<x75)<=x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x84 = INT8_MIN;
	static int32_t t15 = 2316930;

	t15 = (((x81-x82)<x83)<=x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MAX;
	uint8_t x86 = 1U;
	int64_t x87 = -1LL;
	static int64_t x88 = -262LL;
	int32_t t16 = 4;

	t16 = (((x85-x86)<x87)<=x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = 50996076376807LLU;
	static int16_t x91 = 186;
	int16_t x92 = INT16_MIN;

	t17 = (((x89-x90)<x91)<=x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x93 = 204U;
	int64_t x94 = -7038LL;
	volatile int32_t x96 = -1;
	static int32_t t18 = -5644504;

	t18 = (((x93-x94)<x95)<=x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x99 = 0U;
	int16_t x100 = 3613;

	t19 = (((x97-x98)<x99)<=x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = -1;
	int8_t x102 = -3;
	static int8_t x103 = -1;
	int32_t t20 = 1721;

	t20 = (((x101-x102)<x103)<=x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x109 = -3253LL;
	static int32_t x110 = INT32_MIN;
	volatile int32_t t21 = 231038;

	t21 = (((x109-x110)<x111)<=x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = 643LL;
	int16_t x114 = INT16_MAX;
	int32_t x115 = INT32_MIN;
	uint16_t x116 = 5U;
	volatile int32_t t22 = -6366;

	t22 = (((x113-x114)<x115)<=x116);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MIN;
	uint32_t x120 = 10831640U;
	volatile int32_t t23 = 83023404;

	t23 = (((x117-x118)<x119)<=x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x121 = INT8_MIN;
	uint32_t x123 = 909110161U;
	volatile int32_t x124 = -1;
	volatile int32_t t24 = 2865;

	t24 = (((x121-x122)<x123)<=x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = 0;
	int8_t x127 = INT8_MIN;

	t25 = (((x125-x126)<x127)<=x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x130 = 9187U;
	int16_t x131 = INT16_MIN;
	volatile int32_t t26 = -1804;

	t26 = (((x129-x130)<x131)<=x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	int64_t x135 = -1LL;
	int16_t x136 = INT16_MAX;
	static int32_t t27 = -3115;

	t27 = (((x133-x134)<x135)<=x136);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = INT8_MAX;
	int8_t x139 = INT8_MIN;
	volatile int32_t t28 = -23269;

	t28 = (((x137-x138)<x139)<=x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x141 = 1;
	int8_t x142 = -1;
	static int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t29 = -17050;

	t29 = (((x141-x142)<x143)<=x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	int8_t x147 = 1;
	int32_t x148 = 0;
	int32_t t30 = -528;

	t30 = (((x145-x146)<x147)<=x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x151 = 15172U;
	static uint32_t x152 = 402U;

	t31 = (((x149-x150)<x151)<=x152);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = 0;
	int16_t x160 = -1;
	static volatile int32_t t32 = -29160124;

	t32 = (((x157-x158)<x159)<=x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MIN;
	uint16_t x167 = 116U;
	int16_t x168 = INT16_MIN;

	t33 = (((x165-x166)<x167)<=x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 144858518360901757LLU;

	t34 = (((x169-x170)<x171)<=x172);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x173 = INT8_MAX;
	volatile int16_t x175 = INT16_MAX;
	static volatile uint64_t x176 = 62943140074374034LLU;
	volatile int32_t t35 = 32799551;

	t35 = (((x173-x174)<x175)<=x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = UINT8_MAX;
	static uint32_t x179 = 6071831U;
	int8_t x180 = 51;
	int32_t t36 = 31947;

	t36 = (((x177-x178)<x179)<=x180);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x182 = UINT8_MAX;
	int64_t x183 = INT64_MAX;
	uint8_t x184 = 1U;
	int32_t t37 = 17314;

	t37 = (((x181-x182)<x183)<=x184);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MIN;
	static uint64_t x186 = UINT64_MAX;
	int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t38 = 167550;

	t38 = (((x185-x186)<x187)<=x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = UINT64_MAX;
	uint8_t x190 = 31U;
	int8_t x191 = INT8_MAX;
	int32_t t39 = 577;

	t39 = (((x189-x190)<x191)<=x192);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 2498581U;
	int8_t x194 = -2;
	uint8_t x195 = 4U;
	static uint64_t x196 = UINT64_MAX;
	int32_t t40 = -1408375;

	t40 = (((x193-x194)<x195)<=x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = 7676U;
	int8_t x198 = INT8_MIN;
	volatile int32_t t41 = 68;

	t41 = (((x197-x198)<x199)<=x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = INT64_MAX;
	static uint16_t x202 = 15U;
	static uint32_t x203 = 105U;
	static int16_t x204 = -1;

	t42 = (((x201-x202)<x203)<=x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x207 = -1;
	int32_t t43 = -7974;

	t43 = (((x205-x206)<x207)<=x208);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x209 = INT32_MIN;
	uint32_t x210 = 15U;
	static int16_t x211 = -6392;
	static int32_t x212 = -1;
	static int32_t t44 = -430;

	t44 = (((x209-x210)<x211)<=x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = 14674566;
	uint16_t x214 = UINT16_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t45 = 4138435;

	t45 = (((x213-x214)<x215)<=x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x217 = -5;
	volatile int32_t x218 = INT32_MIN;
	int32_t x219 = -4094521;
	volatile int32_t x220 = 4513898;
	int32_t t46 = -70;

	t46 = (((x217-x218)<x219)<=x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = 11631070987LLU;
	int64_t x223 = -823LL;
	int16_t x224 = INT16_MIN;
	static int32_t t47 = 34555043;

	t47 = (((x221-x222)<x223)<=x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x226 = -1LL;
	volatile int32_t x228 = INT32_MAX;
	int32_t t48 = 6;

	t48 = (((x225-x226)<x227)<=x228);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x229 = INT8_MAX;
	uint16_t x232 = 135U;
	volatile int32_t t49 = -790707828;

	t49 = (((x229-x230)<x231)<=x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x237 = 13LLU;
	int16_t x238 = INT16_MAX;
	int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;
	int32_t t50 = 98848;

	t50 = (((x237-x238)<x239)<=x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x243 = INT32_MIN;
	int32_t x244 = 49;
	volatile int32_t t51 = -16;

	t51 = (((x241-x242)<x243)<=x244);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x246 = INT8_MIN;
	uint32_t x248 = 498369U;
	static volatile int32_t t52 = -33344093;

	t52 = (((x245-x246)<x247)<=x248);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = 12LL;
	volatile uint32_t x250 = 0U;
	uint8_t x251 = 1U;
	volatile int32_t t53 = -45525319;

	t53 = (((x249-x250)<x251)<=x252);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x253 = -1;
	static int32_t x254 = INT32_MIN;
	uint8_t x255 = 116U;
	uint64_t x256 = 70085757590LLU;
	int32_t t54 = 11751922;

	t54 = (((x253-x254)<x255)<=x256);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x257 = INT8_MIN;
	int64_t x258 = -158808615LL;
	static uint64_t x259 = 1577412242LLU;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t55 = 15;

	t55 = (((x257-x258)<x259)<=x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x262 = 2007;
	int16_t x263 = 10282;
	int64_t x264 = -6545LL;
	volatile int32_t t56 = -6907;

	t56 = (((x261-x262)<x263)<=x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = 9U;
	int8_t x266 = -1;
	static int8_t x267 = 39;
	static int16_t x268 = -7998;
	int32_t t57 = -481;

	t57 = (((x265-x266)<x267)<=x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	int32_t t58 = -236364425;

	t58 = (((x269-x270)<x271)<=x272);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = INT8_MIN;
	int64_t x275 = -360578506LL;
	int64_t x276 = 19947387LL;
	static int32_t t59 = 11;

	t59 = (((x273-x274)<x275)<=x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = UINT64_MAX;
	int64_t x279 = -1575855955531LL;
	int64_t x280 = INT64_MAX;
	int32_t t60 = 84242490;

	t60 = (((x277-x278)<x279)<=x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MAX;
	uint64_t x282 = 39810882501762015LLU;
	volatile int32_t x283 = INT32_MIN;
	volatile int64_t x284 = -26LL;
	volatile int32_t t61 = 3266463;

	t61 = (((x281-x282)<x283)<=x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = 3;
	static int32_t x286 = -14605281;
	int32_t x288 = 139414;
	int32_t t62 = -112414;

	t62 = (((x285-x286)<x287)<=x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = -1;
	static int32_t x291 = INT32_MIN;
	int8_t x292 = -1;

	t63 = (((x289-x290)<x291)<=x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x293 = UINT64_MAX;
	uint32_t x295 = 58U;
	uint16_t x296 = 0U;
	volatile int32_t t64 = -35;

	t64 = (((x293-x294)<x295)<=x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x297 = 2830U;
	uint16_t x298 = 10998U;
	uint8_t x299 = UINT8_MAX;
	uint64_t x300 = 855203702124LLU;
	volatile int32_t t65 = -635124248;

	t65 = (((x297-x298)<x299)<=x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x302 = 1LLU;
	static int16_t x303 = INT16_MIN;
	static uint64_t x304 = UINT64_MAX;
	static volatile int32_t t66 = -1;

	t66 = (((x301-x302)<x303)<=x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = 18U;
	uint8_t x306 = 14U;
	uint64_t x307 = UINT64_MAX;
	int32_t t67 = -800;

	t67 = (((x305-x306)<x307)<=x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = INT32_MAX;
	int8_t x311 = 15;
	uint8_t x312 = 4U;
	static int32_t t68 = -3;

	t68 = (((x309-x310)<x311)<=x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = -1LL;
	int16_t x314 = INT16_MIN;
	static uint8_t x315 = UINT8_MAX;
	uint64_t x316 = 15418LLU;

	t69 = (((x313-x314)<x315)<=x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x318 = -1;
	static int64_t x319 = -7148LL;
	static volatile int64_t x320 = INT64_MIN;

	t70 = (((x317-x318)<x319)<=x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = -1;
	int64_t x327 = INT64_MIN;
	static int8_t x328 = 0;
	int32_t t71 = -331881504;

	t71 = (((x325-x326)<x327)<=x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -1;
	int32_t x330 = -1;
	static uint32_t x331 = 37580U;
	static int8_t x332 = -1;
	int32_t t72 = 18;

	t72 = (((x329-x330)<x331)<=x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x334 = 97U;
	uint64_t x336 = 2057073548518906LLU;
	volatile int32_t t73 = -766857;

	t73 = (((x333-x334)<x335)<=x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = -13442085412043556LL;
	volatile uint32_t x338 = 54284U;
	volatile uint64_t x339 = 13110861247LLU;
	volatile uint8_t x340 = UINT8_MAX;
	static int32_t t74 = -506;

	t74 = (((x337-x338)<x339)<=x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = -1;
	int8_t x342 = INT8_MAX;
	static int16_t x343 = 16050;
	volatile int64_t x344 = INT64_MAX;

	t75 = (((x341-x342)<x343)<=x344);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x345 = 232906435692LLU;
	int32_t x346 = -8119;
	int16_t x347 = -4807;
	int32_t x348 = INT32_MIN;
	static int32_t t76 = 32265;

	t76 = (((x345-x346)<x347)<=x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int32_t x350 = -22;
	static int16_t x351 = 98;
	static volatile uint32_t x352 = 95419781U;

	t77 = (((x349-x350)<x351)<=x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	static int16_t x360 = INT16_MIN;
	int32_t t78 = 45001948;

	t78 = (((x357-x358)<x359)<=x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = INT64_MAX;
	uint16_t x362 = 99U;
	int16_t x363 = -1;
	int32_t t79 = -152624181;

	t79 = (((x361-x362)<x363)<=x364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x365 = INT32_MIN;
	uint32_t x366 = 1991754399U;
	int64_t x367 = -1LL;
	volatile uint32_t x368 = 5770157U;
	int32_t t80 = 5118;

	t80 = (((x365-x366)<x367)<=x368);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = INT8_MIN;
	static int32_t x370 = 176241591;
	uint64_t x372 = 185058054811LLU;
	volatile int32_t t81 = -3;

	t81 = (((x369-x370)<x371)<=x372);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x373 = INT8_MIN;
	static int8_t x375 = INT8_MAX;
	uint16_t x376 = 429U;
	volatile int32_t t82 = -65494268;

	t82 = (((x373-x374)<x375)<=x376);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = INT8_MAX;
	int32_t x378 = 1218;
	int16_t x379 = INT16_MAX;
	volatile int32_t x380 = -1;
	volatile int32_t t83 = 1;

	t83 = (((x377-x378)<x379)<=x380);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x381 = 1114U;
	static volatile uint64_t x382 = 16451305170883LLU;
	int16_t x383 = INT16_MIN;
	static int64_t x384 = INT64_MAX;
	int32_t t84 = 177;

	t84 = (((x381-x382)<x383)<=x384);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = 0;
	volatile uint32_t x386 = 167926U;
	int16_t x387 = INT16_MAX;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t85 = 25945;

	t85 = (((x385-x386)<x387)<=x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x395 = INT8_MIN;
	volatile int32_t t86 = 1221280;

	t86 = (((x393-x394)<x395)<=x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x397 = INT8_MAX;
	static int8_t x398 = 29;
	static volatile uint64_t x399 = 348156924850LLU;
	int64_t x400 = -1LL;
	int32_t t87 = -1257;

	t87 = (((x397-x398)<x399)<=x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x402 = INT8_MAX;
	int64_t x403 = 2124008921109LL;
	uint32_t x404 = 1389U;
	static volatile int32_t t88 = 5055;

	t88 = (((x401-x402)<x403)<=x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x405 = 95U;
	volatile int64_t x406 = -1LL;
	static volatile int64_t x407 = INT64_MIN;
	uint64_t x408 = 89LLU;
	volatile int32_t t89 = 177;

	t89 = (((x405-x406)<x407)<=x408);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = -1LL;
	int16_t x410 = 6;
	static int16_t x412 = INT16_MIN;
	static int32_t t90 = 0;

	t90 = (((x409-x410)<x411)<=x412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x413 = -910884;
	volatile int32_t x414 = -5;
	volatile uint64_t x416 = 1583273038873293579LLU;
	int32_t t91 = -50;

	t91 = (((x413-x414)<x415)<=x416);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x417 = INT8_MIN;
	volatile int16_t x419 = INT16_MAX;
	int64_t x420 = INT64_MAX;
	static int32_t t92 = -11;

	t92 = (((x417-x418)<x419)<=x420);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = 51;
	static int8_t x422 = INT8_MIN;
	int32_t x423 = INT32_MIN;
	static volatile int32_t t93 = -136905;

	t93 = (((x421-x422)<x423)<=x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = INT64_MIN;
	int8_t x426 = INT8_MIN;
	int8_t x427 = -1;
	static volatile int16_t x428 = INT16_MIN;
	int32_t t94 = 16286026;

	t94 = (((x425-x426)<x427)<=x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x430 = 432;
	volatile int64_t x431 = INT64_MAX;
	volatile int8_t x432 = -11;
	int32_t t95 = 7058908;

	t95 = (((x429-x430)<x431)<=x432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x437 = INT16_MAX;
	static int16_t x438 = INT16_MIN;
	uint8_t x439 = UINT8_MAX;
	volatile int32_t t96 = 2120;

	t96 = (((x437-x438)<x439)<=x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x447 = UINT64_MAX;
	int64_t x448 = -1LL;

	t97 = (((x445-x446)<x447)<=x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x450 = -2;
	uint8_t x451 = 3U;
	int32_t t98 = 1808;

	t98 = (((x449-x450)<x451)<=x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x453 = INT8_MIN;
	int16_t x454 = -1;
	uint64_t x455 = 1LLU;
	int8_t x456 = INT8_MIN;

	t99 = (((x453-x454)<x455)<=x456);

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

