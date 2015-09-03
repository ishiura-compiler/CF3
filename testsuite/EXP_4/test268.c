#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 116;
int64_t x3 = -28199267121009956LL;
volatile uint32_t x7 = 82867U;
static volatile int32_t t2 = -65062;
static volatile int32_t t4 = 127700287;
int16_t x26 = INT16_MIN;
int32_t x28 = INT32_MIN;
int32_t t7 = -3202;
int16_t x41 = INT16_MAX;
int64_t x53 = INT64_MAX;
volatile uint64_t x54 = UINT64_MAX;
int8_t x63 = INT8_MIN;
uint8_t x67 = 95U;
uint64_t x73 = 5965LLU;
volatile int32_t t16 = 6827277;
int16_t x84 = INT16_MIN;
uint8_t x89 = 12U;
uint64_t x104 = 1573092477044LLU;
volatile int16_t x108 = INT16_MIN;
volatile int32_t t23 = -46;
static int32_t x124 = INT32_MIN;
int16_t x128 = 5097;
volatile int8_t x129 = INT8_MAX;
int8_t x130 = 25;
uint64_t x132 = 2463LLU;
volatile int32_t t29 = 91564014;
volatile int32_t x141 = INT32_MIN;
int32_t t30 = 15425106;
volatile uint32_t x148 = UINT32_MAX;
uint64_t x150 = 1345324508638429LLU;
int32_t t32 = -395388;
volatile int64_t x153 = 215192969324LL;
int8_t x154 = INT8_MIN;
volatile int16_t x159 = INT16_MIN;
int8_t x160 = -1;
uint8_t x169 = 22U;
int64_t x181 = -2927046LL;
int32_t t40 = -28462267;
int32_t x196 = -3262324;
volatile uint64_t x200 = 1225LLU;
int16_t x201 = -1;
int64_t x202 = INT64_MIN;
uint64_t x215 = 1741525106LLU;
volatile uint16_t x217 = 1298U;
int8_t x219 = -1;
uint32_t x220 = 919053786U;
volatile int32_t t47 = 820;
int8_t x223 = INT8_MIN;
int8_t x225 = -1;
int8_t x229 = INT8_MIN;
int32_t x235 = 1087;
static int64_t x241 = INT64_MIN;
int64_t x242 = INT64_MAX;
volatile int32_t t53 = 98278;
int32_t x255 = -1;
int32_t x258 = -40358288;
int32_t x259 = -1;
int16_t x261 = -1;
int32_t x264 = 25010;
volatile int64_t x270 = 49544322804469891LL;
int32_t t60 = 74;
int64_t x273 = 2808772130946213LL;
int16_t x274 = INT16_MAX;
uint64_t x278 = 5611LLU;
uint16_t x283 = 6438U;
static uint64_t x287 = 262594355LLU;
static volatile int32_t t64 = -20064;
volatile int32_t x298 = -1;
uint32_t x306 = 715166U;
volatile int32_t t69 = 99747;
int64_t x320 = 6720LL;
volatile int32_t t72 = -913781399;
uint64_t x330 = 515098189171LLU;
static int8_t x332 = 1;
uint8_t x333 = UINT8_MAX;
int64_t x348 = INT64_MAX;
static int16_t x349 = -1;
int64_t x350 = 15820LL;
volatile int16_t x352 = INT16_MIN;
static uint16_t x378 = UINT16_MAX;
int8_t x380 = -1;
uint64_t x383 = 0LLU;
static uint32_t x396 = 6U;
static volatile uint64_t x400 = 223120LLU;
int32_t t91 = -333;
int16_t x415 = 3610;
int16_t x420 = 17;
int32_t t94 = -62182;
volatile int32_t t95 = -127288648;
uint8_t x430 = 36U;
static uint8_t x439 = 7U;
volatile uint64_t x440 = 7LLU;
int64_t x441 = -1LL;


void f0(void) {
	int16_t x2 = -1;
	volatile uint32_t x4 = UINT32_MAX;
	int32_t t0 = 3710;

	t0 = (x1==(x2==(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1690638010U;
	int64_t x6 = INT64_MIN;
	uint8_t x8 = 4U;
	int32_t t1 = 252336746;

	t1 = (x5==(x6==(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 460;
	static int32_t x10 = -42252;
	int64_t x11 = -1LL;
	int8_t x12 = INT8_MAX;

	t2 = (x9==(x10==(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 15U;
	volatile int64_t x14 = INT64_MIN;
	static volatile uint16_t x15 = 2908U;
	uint64_t x16 = 25LLU;
	static int32_t t3 = 973;

	t3 = (x13==(x14==(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint16_t x22 = UINT16_MAX;
	volatile int8_t x23 = 25;
	uint32_t x24 = 4068U;

	t4 = (x21==(x22==(x23-x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MIN;
	uint32_t x27 = 39U;
	int32_t t5 = 1708;

	t5 = (x25==(x26==(x27-x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = 15;
	volatile int64_t x34 = INT64_MAX;
	uint8_t x35 = UINT8_MAX;
	volatile uint16_t x36 = UINT16_MAX;
	static volatile int32_t t6 = 1;

	t6 = (x33==(x34==(x35-x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	static int32_t x38 = INT32_MAX;
	volatile uint16_t x39 = 81U;
	volatile uint16_t x40 = 317U;

	t7 = (x37==(x38==(x39-x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x42 = 6U;
	volatile int32_t x43 = 321015646;
	uint16_t x44 = 760U;
	volatile int32_t t8 = 61800;

	t8 = (x41==(x42==(x43-x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 1925620748U;
	int16_t x46 = INT16_MIN;
	int8_t x47 = 7;
	int32_t x48 = INT32_MAX;
	int32_t t9 = 59271854;

	t9 = (x45==(x46==(x47-x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int16_t x50 = -1;
	volatile int8_t x51 = INT8_MIN;
	volatile uint32_t x52 = UINT32_MAX;
	volatile int32_t t10 = -15846;

	t10 = (x49==(x50==(x51-x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x55 = INT8_MAX;
	static volatile uint64_t x56 = 8578219802246151LLU;
	volatile int32_t t11 = -10671122;

	t11 = (x53==(x54==(x55-x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 1U;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MIN;
	uint32_t x60 = 488U;
	static int32_t t12 = 7;

	t12 = (x57==(x58==(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = UINT64_MAX;
	int64_t x62 = INT64_MIN;
	int64_t x64 = -1LL;
	int32_t t13 = -883;

	t13 = (x61==(x62==(x63-x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 330U;
	static uint64_t x66 = 12680400720181LLU;
	volatile uint64_t x68 = 104428LLU;
	volatile int32_t t14 = 1;

	t14 = (x65==(x66==(x67-x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	int64_t x70 = INT64_MAX;
	int8_t x71 = -1;
	static uint32_t x72 = 314918592U;
	volatile int32_t t15 = -6;

	t15 = (x69==(x70==(x71-x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MIN;
	volatile uint32_t x75 = UINT32_MAX;
	static int8_t x76 = -1;

	t16 = (x73==(x74==(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 14U;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	int8_t x80 = -1;
	int32_t t17 = 10000;

	t17 = (x77==(x78==(x79-x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -5;
	int64_t x82 = 870452944206277LL;
	volatile uint16_t x83 = UINT16_MAX;
	static int32_t t18 = -411;

	t18 = (x81==(x82==(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 780041LL;
	volatile uint8_t x86 = UINT8_MAX;
	volatile int64_t x87 = -152LL;
	uint32_t x88 = 1983180108U;
	volatile int32_t t19 = -7;

	t19 = (x85==(x86==(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = INT64_MAX;
	int64_t x91 = -1LL;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t20 = 0;

	t20 = (x89==(x90==(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = 0;
	uint16_t x98 = 85U;
	volatile uint32_t x99 = 7669U;
	volatile int16_t x100 = -21;
	volatile int32_t t21 = -6226;

	t21 = (x97==(x98==(x99-x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x101 = INT32_MAX;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = INT8_MIN;
	volatile int32_t t22 = 0;

	t22 = (x101==(x102==(x103-x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MAX;

	t23 = (x105==(x106==(x107-x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = INT8_MIN;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t24 = 482879140;

	t24 = (x109==(x110==(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x121 = INT8_MIN;
	uint16_t x122 = 230U;
	static uint64_t x123 = 15169465528LLU;
	volatile int32_t t25 = -875;

	t25 = (x121==(x122==(x123-x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -1LL;
	uint32_t x126 = UINT32_MAX;
	volatile int64_t x127 = INT64_MAX;
	volatile int32_t t26 = 59172549;

	t26 = (x125==(x126==(x127-x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x131 = 95LLU;
	static int32_t t27 = 306;

	t27 = (x129==(x130==(x131-x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = -158;
	volatile uint32_t x135 = 894305760U;
	int32_t x136 = INT32_MIN;
	int32_t t28 = -97;

	t28 = (x133==(x134==(x135-x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x137 = UINT64_MAX;
	static int64_t x138 = -48310264318490414LL;
	int16_t x139 = -5;
	int32_t x140 = -1;

	t29 = (x137==(x138==(x139-x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x142 = 969236311855739LLU;
	int64_t x143 = INT64_MIN;
	int64_t x144 = INT64_MIN;

	t30 = (x141==(x142==(x143-x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x145 = -1;
	int64_t x146 = 815478LL;
	int16_t x147 = INT16_MAX;
	volatile int32_t t31 = 27;

	t31 = (x145==(x146==(x147-x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x149 = -1;
	volatile uint8_t x151 = UINT8_MAX;
	int8_t x152 = INT8_MIN;

	t32 = (x149==(x150==(x151-x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x155 = INT16_MIN;
	int16_t x156 = 4;
	volatile int32_t t33 = 24306;

	t33 = (x153==(x154==(x155-x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x157 = 4U;
	volatile uint8_t x158 = 24U;
	static volatile int32_t t34 = 11309;

	t34 = (x157==(x158==(x159-x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = -1;
	int64_t x163 = 0LL;
	uint8_t x164 = 2U;
	volatile int32_t t35 = 1178;

	t35 = (x161==(x162==(x163-x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x170 = 2875674909678558LLU;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = 928U;
	volatile int32_t t36 = 64;

	t36 = (x169==(x170==(x171-x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = 53398467U;
	uint64_t x178 = 3360505747516510333LLU;
	int64_t x179 = INT64_MIN;
	int16_t x180 = INT16_MIN;
	int32_t t37 = -26218205;

	t37 = (x177==(x178==(x179-x180)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x182 = 79900LL;
	int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t38 = -150171442;

	t38 = (x181==(x182==(x183-x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = 4U;
	int8_t x186 = INT8_MAX;
	static volatile uint8_t x187 = UINT8_MAX;
	uint64_t x188 = UINT64_MAX;
	int32_t t39 = 63;

	t39 = (x185==(x186==(x187-x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = INT16_MAX;
	int8_t x190 = 1;
	int32_t x191 = INT32_MIN;
	volatile int64_t x192 = INT64_MIN;

	t40 = (x189==(x190==(x191-x192)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x193 = -1;
	static int16_t x194 = -107;
	uint64_t x195 = 471502769600012923LLU;
	volatile int32_t t41 = -22729066;

	t41 = (x193==(x194==(x195-x196)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = 1769652562767911LLU;
	uint32_t x198 = 100459U;
	uint16_t x199 = 0U;
	int32_t t42 = 1;

	t42 = (x197==(x198==(x199-x200)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x203 = -1;
	uint8_t x204 = UINT8_MAX;
	int32_t t43 = 4039;

	t43 = (x201==(x202==(x203-x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x205 = -1;
	int32_t x206 = INT32_MIN;
	volatile uint64_t x207 = 6529LLU;
	static int16_t x208 = -1;
	volatile int32_t t44 = -65434246;

	t44 = (x205==(x206==(x207-x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = -3;
	int8_t x210 = 29;
	int8_t x211 = -1;
	volatile uint8_t x212 = 59U;
	int32_t t45 = 73008;

	t45 = (x209==(x210==(x211-x212)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MAX;
	volatile int32_t x214 = 6592;
	uint8_t x216 = 3U;
	static int32_t t46 = -851701413;

	t46 = (x213==(x214==(x215-x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x218 = INT8_MIN;

	t47 = (x217==(x218==(x219-x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MAX;
	uint16_t x224 = 10042U;
	int32_t t48 = -470;

	t48 = (x221==(x222==(x223-x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x226 = 1;
	volatile uint16_t x227 = 0U;
	uint16_t x228 = UINT16_MAX;
	int32_t t49 = 783980968;

	t49 = (x225==(x226==(x227-x228)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x230 = 22694105U;
	uint16_t x231 = UINT16_MAX;
	static volatile int64_t x232 = -42LL;
	volatile int32_t t50 = -238727395;

	t50 = (x229==(x230==(x231-x232)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x233 = 24673543635LL;
	static uint16_t x234 = UINT16_MAX;
	int8_t x236 = INT8_MAX;
	volatile int32_t t51 = 341752844;

	t51 = (x233==(x234==(x235-x236)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = 78;
	static int16_t x238 = INT16_MAX;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = 96499465114072593LLU;
	static volatile int32_t t52 = 14903664;

	t52 = (x237==(x238==(x239-x240)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x243 = -63;
	volatile int32_t x244 = -1;

	t53 = (x241==(x242==(x243-x244)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = -52072LL;
	int32_t x246 = -743;
	static int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t54 = 190;

	t54 = (x245==(x246==(x247-x248)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x249 = -1;
	int32_t x250 = -1;
	int8_t x251 = -7;
	volatile int64_t x252 = INT64_MIN;
	int32_t t55 = 795965260;

	t55 = (x249==(x250==(x251-x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MIN;
	static uint16_t x256 = UINT16_MAX;
	volatile int32_t t56 = -65312418;

	t56 = (x253==(x254==(x255-x256)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = 0U;
	int64_t x260 = 6566LL;
	volatile int32_t t57 = 24;

	t57 = (x257==(x258==(x259-x260)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x262 = -263;
	int32_t x263 = -21929326;
	volatile int32_t t58 = 18;

	t58 = (x261==(x262==(x263-x264)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x265 = 3328088826LLU;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = 47509U;
	int32_t t59 = -259;

	t59 = (x265==(x266==(x267-x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int8_t x271 = INT8_MIN;
	static uint32_t x272 = 13U;

	t60 = (x269==(x270==(x271-x272)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x275 = 3U;
	int64_t x276 = -1LL;
	volatile int32_t t61 = -6;

	t61 = (x273==(x274==(x275-x276)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = -1LL;
	volatile int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	volatile int32_t t62 = -1;

	t62 = (x277==(x278==(x279-x280)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = -2;
	int64_t x282 = -1084022218534LL;
	int64_t x284 = -68861699147981LL;
	static int32_t t63 = 1138;

	t63 = (x281==(x282==(x283-x284)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x285 = 19U;
	uint16_t x286 = 28632U;
	static volatile int32_t x288 = -5;

	t64 = (x285==(x286==(x287-x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x289 = 1808U;
	int8_t x290 = INT8_MAX;
	int32_t x291 = INT32_MAX;
	int32_t x292 = INT32_MAX;
	volatile int32_t t65 = -1000015;

	t65 = (x289==(x290==(x291-x292)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = 0;
	static int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;
	int32_t t66 = 0;

	t66 = (x293==(x294==(x295-x296)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = -1LL;
	int64_t x299 = 289430150LL;
	int64_t x300 = -1LL;
	volatile int32_t t67 = -44573;

	t67 = (x297==(x298==(x299-x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MAX;
	int32_t x303 = 7041320;
	int16_t x304 = -1;
	volatile int32_t t68 = 28526042;

	t68 = (x301==(x302==(x303-x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = -15084189208829LL;
	volatile int16_t x307 = -1;
	volatile int32_t x308 = 0;

	t69 = (x305==(x306==(x307-x308)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = 252;
	int16_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = 2;
	int32_t t70 = 59027941;

	t70 = (x309==(x310==(x311-x312)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MAX;
	int16_t x316 = 5;
	static volatile int32_t t71 = -628498;

	t71 = (x313==(x314==(x315-x316)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x317 = 6U;
	int16_t x318 = -1;
	int16_t x319 = 0;

	t72 = (x317==(x318==(x319-x320)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = -1;
	volatile int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = 1680776979U;
	volatile int32_t t73 = 527498499;

	t73 = (x321==(x322==(x323-x324)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x329 = INT32_MAX;
	uint32_t x331 = 326U;
	int32_t t74 = 11121581;

	t74 = (x329==(x330==(x331-x332)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x334 = -1;
	uint32_t x335 = 57117981U;
	int32_t x336 = -273;
	int32_t t75 = 35728;

	t75 = (x333==(x334==(x335-x336)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = -1;
	int64_t x342 = -1LL;
	uint16_t x343 = 1U;
	volatile int8_t x344 = -1;
	static int32_t t76 = -10736537;

	t76 = (x341==(x342==(x343-x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = -2567201LL;
	int8_t x346 = -1;
	int64_t x347 = -1LL;
	volatile int32_t t77 = -227218;

	t77 = (x345==(x346==(x347-x348)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x351 = INT8_MIN;
	static volatile int32_t t78 = -3250720;

	t78 = (x349==(x350==(x351-x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = 629;
	uint8_t x354 = 1U;
	int16_t x355 = INT16_MIN;
	static int64_t x356 = 19LL;
	volatile int32_t t79 = 1400;

	t79 = (x353==(x354==(x355-x356)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = INT32_MIN;
	uint16_t x358 = UINT16_MAX;
	static uint16_t x359 = 4U;
	static int16_t x360 = INT16_MAX;
	int32_t t80 = 2;

	t80 = (x357==(x358==(x359-x360)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = INT16_MAX;
	int64_t x362 = INT64_MIN;
	uint32_t x363 = 996U;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t81 = 365;

	t81 = (x361==(x362==(x363-x364)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = UINT16_MAX;
	uint32_t x366 = 30727U;
	int8_t x367 = -10;
	int8_t x368 = 0;
	int32_t t82 = -869;

	t82 = (x365==(x366==(x367-x368)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x369 = -1;
	volatile int64_t x370 = INT64_MIN;
	int16_t x371 = -1;
	int8_t x372 = 0;
	int32_t t83 = 9615;

	t83 = (x369==(x370==(x371-x372)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x373 = 3583U;
	int64_t x374 = 1148336LL;
	uint16_t x375 = 143U;
	int8_t x376 = INT8_MAX;
	volatile int32_t t84 = -21472741;

	t84 = (x373==(x374==(x375-x376)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = INT64_MIN;
	static int16_t x379 = -1;
	volatile int32_t t85 = -70272;

	t85 = (x377==(x378==(x379-x380)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x381 = UINT32_MAX;
	int8_t x382 = 2;
	int8_t x384 = INT8_MIN;
	int32_t t86 = -1;

	t86 = (x381==(x382==(x383-x384)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	volatile int16_t x388 = -842;
	int32_t t87 = -13;

	t87 = (x385==(x386==(x387-x388)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = INT32_MIN;
	static volatile uint8_t x394 = UINT8_MAX;
	int8_t x395 = INT8_MIN;
	int32_t t88 = 252975;

	t88 = (x393==(x394==(x395-x396)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x397 = INT32_MIN;
	int32_t x398 = 874;
	int8_t x399 = INT8_MIN;
	volatile int32_t t89 = -7789;

	t89 = (x397==(x398==(x399-x400)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x401 = 17368U;
	int32_t x402 = 233;
	int64_t x403 = -1LL;
	uint64_t x404 = 70104450479092471LLU;
	int32_t t90 = 472;

	t90 = (x401==(x402==(x403-x404)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x405 = 8214883128912714LLU;
	static uint32_t x406 = 154279U;
	int32_t x407 = -1;
	volatile uint8_t x408 = 105U;

	t91 = (x405==(x406==(x407-x408)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x409 = UINT32_MAX;
	volatile uint8_t x410 = 47U;
	int32_t x411 = INT32_MIN;
	int64_t x412 = -1LL;
	int32_t t92 = -57887;

	t92 = (x409==(x410==(x411-x412)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = 8U;
	volatile uint16_t x414 = 19076U;
	int64_t x416 = -1LL;
	int32_t t93 = 45;

	t93 = (x413==(x414==(x415-x416)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x417 = 0U;
	int16_t x418 = INT16_MIN;
	int64_t x419 = -1LL;

	t94 = (x417==(x418==(x419-x420)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = -1LL;
	int32_t x426 = 1;
	uint16_t x427 = 8175U;
	volatile int64_t x428 = INT64_MAX;

	t95 = (x425==(x426==(x427-x428)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x429 = INT8_MIN;
	int32_t x431 = -1;
	int16_t x432 = INT16_MIN;
	volatile int32_t t96 = -171868;

	t96 = (x429==(x430==(x431-x432)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MIN;
	int32_t x434 = -593021;
	int8_t x435 = -1;
	volatile int16_t x436 = INT16_MAX;
	static volatile int32_t t97 = 337;

	t97 = (x433==(x434==(x435-x436)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x437 = UINT8_MAX;
	volatile int16_t x438 = -1;
	int32_t t98 = -544936;

	t98 = (x437==(x438==(x439-x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x442 = -233;
	static uint16_t x443 = 20U;
	static volatile uint8_t x444 = 31U;
	static int32_t t99 = -49;

	t99 = (x441==(x442==(x443-x444)));

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

