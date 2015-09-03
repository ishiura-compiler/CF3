#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MAX;
int16_t x6 = INT16_MIN;
uint32_t x8 = 10U;
uint8_t x9 = UINT8_MAX;
uint64_t x11 = 4206499631097342LLU;
int64_t x14 = -1LL;
int32_t x15 = 16;
int64_t x19 = INT64_MIN;
volatile int32_t x26 = 5965;
int64_t x38 = 393LL;
static int32_t x42 = -3;
static volatile int32_t t10 = -1;
int8_t x48 = INT8_MAX;
int32_t t11 = 46409733;
uint16_t x50 = 2847U;
volatile int16_t x56 = 425;
static volatile int32_t t16 = 7169458;
int8_t x71 = INT8_MIN;
int8_t x79 = INT8_MAX;
static volatile int32_t t21 = -1;
volatile int16_t x94 = 1653;
volatile int32_t t24 = 3053084;
int8_t x101 = INT8_MIN;
volatile uint8_t x104 = UINT8_MAX;
uint16_t x106 = 19188U;
int64_t x108 = INT64_MIN;
uint32_t x112 = 9859777U;
int16_t x113 = INT16_MIN;
uint16_t x115 = 298U;
volatile int32_t t28 = 18897;
uint8_t x120 = 1U;
volatile int32_t t29 = -1;
static int64_t x125 = INT64_MAX;
static int8_t x126 = INT8_MIN;
static int64_t x130 = INT64_MAX;
int64_t x132 = INT64_MIN;
int32_t t32 = -422;
volatile int8_t x134 = INT8_MAX;
int32_t x146 = INT32_MIN;
volatile int8_t x148 = 8;
int64_t x151 = INT64_MAX;
static uint32_t x158 = 250218355U;
int64_t x167 = -16536927326778571LL;
uint64_t x169 = 35431554336050087LLU;
int32_t x171 = 37054;
static volatile int8_t x178 = -1;
int8_t x181 = INT8_MAX;
volatile int32_t t45 = 4821802;
uint32_t x185 = 2U;
int16_t x187 = -3293;
int64_t x194 = INT64_MIN;
uint8_t x196 = 2U;
int16_t x201 = INT16_MIN;
int8_t x206 = -1;
static uint16_t x212 = 2915U;
static uint16_t x225 = 27U;
volatile int32_t t56 = 27628631;
uint8_t x236 = 20U;
static int32_t x243 = 3728082;
int16_t x244 = -1;
int32_t t61 = -1043737189;
int8_t x252 = INT8_MIN;
static uint64_t x257 = 30446LLU;
int32_t x258 = INT32_MIN;
int16_t x261 = INT16_MIN;
volatile int16_t x266 = INT16_MIN;
int64_t x267 = -233407LL;
uint16_t x277 = 12U;
int32_t x282 = -1;
int8_t x285 = -4;
int32_t t71 = -1;
int32_t t72 = -483;
int16_t x297 = -9147;
volatile uint64_t x301 = 1LLU;
volatile int32_t t75 = -812;
volatile uint64_t x305 = UINT64_MAX;
int32_t t76 = 27836;
static volatile int64_t x310 = -185886LL;
uint64_t x311 = UINT64_MAX;
volatile int32_t t77 = 8;
volatile uint64_t x316 = 425246LLU;
static int64_t x317 = -3LL;
uint64_t x321 = 818322285484233LLU;
int32_t x322 = -2;
static uint8_t x324 = UINT8_MAX;
int64_t x325 = -15717LL;
volatile int32_t x326 = 119;
static volatile int64_t x330 = INT64_MAX;
uint32_t x331 = UINT32_MAX;
static int32_t t82 = -13533885;
static uint64_t x333 = UINT64_MAX;
volatile int8_t x337 = 1;
volatile int8_t x338 = -1;
volatile int32_t t84 = -1;
uint32_t x346 = 108294U;
int32_t x349 = -1;
static int8_t x351 = INT8_MIN;
int32_t x352 = INT32_MIN;
volatile int32_t t88 = -1;
static volatile int32_t t89 = -3312854;
uint16_t x362 = 7U;
int64_t x366 = INT64_MIN;
int64_t x368 = INT64_MIN;
volatile int32_t t91 = 1152335;
static int64_t x370 = -6694313705421LL;
int32_t x371 = INT32_MIN;
uint8_t x373 = UINT8_MAX;
volatile int32_t t93 = -125189295;
int32_t t95 = 491276192;
static int64_t x386 = -3433815LL;
int32_t x391 = -2986647;
uint64_t x393 = 139939808251693LLU;
uint64_t x394 = 12LLU;
int32_t t98 = -1469715;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static uint8_t x2 = 32U;
	int8_t x4 = -2;
	volatile int32_t t0 = 4831;

	t0 = ((x1==(x2==x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x7 = -1;
	static int32_t t1 = 3158173;

	t1 = ((x5==(x6==x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1752412729597177887LL;
	uint8_t x12 = 1U;
	int32_t t2 = 6237;

	t2 = ((x9==(x10==x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 31U;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 400;

	t3 = ((x13==(x14==x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	uint16_t x18 = UINT16_MAX;
	int16_t x20 = -1;
	int32_t t4 = -23638620;

	t4 = ((x17==(x18==x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = INT16_MIN;
	static int32_t x22 = -1;
	volatile int32_t x23 = INT32_MIN;
	volatile int32_t x24 = 382646399;
	int32_t t5 = -15;

	t5 = ((x21==(x22==x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 1164728;
	uint8_t x27 = UINT8_MAX;
	int32_t x28 = -1;
	static volatile int32_t t6 = -3;

	t6 = ((x25==(x26==x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	volatile int16_t x30 = INT16_MIN;
	volatile uint32_t x31 = UINT32_MAX;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -19439;

	t7 = ((x29==(x30==x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 588U;
	uint16_t x34 = 33U;
	int32_t x35 = -42;
	uint32_t x36 = UINT32_MAX;
	static int32_t t8 = -43749;

	t8 = ((x33==(x34==x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = 24;
	int32_t x39 = -2585;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 6678;

	t9 = ((x37==(x38==x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = INT64_MIN;
	uint16_t x43 = 6U;
	volatile int32_t x44 = INT32_MAX;

	t10 = ((x41==(x42==x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 26669U;
	uint32_t x46 = UINT32_MAX;
	uint32_t x47 = 20U;

	t11 = ((x45==(x46==x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 58323382199853169LLU;
	uint16_t x51 = UINT16_MAX;
	static int16_t x52 = -353;
	int32_t t12 = -19936311;

	t12 = ((x49==(x50==x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = -288;
	static volatile int16_t x55 = INT16_MAX;
	int32_t t13 = 454;

	t13 = ((x53==(x54==x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = -1LL;
	uint8_t x59 = UINT8_MAX;
	static uint8_t x60 = 37U;
	volatile int32_t t14 = 91401;

	t14 = ((x57==(x58==x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	volatile int8_t x62 = INT8_MAX;
	uint8_t x63 = UINT8_MAX;
	static uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 32284;

	t15 = ((x61==(x62==x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 94934U;
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = 3;
	uint64_t x68 = 12331836493LLU;

	t16 = ((x65==(x66==x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 31928283U;
	static uint64_t x70 = UINT64_MAX;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -1704134;

	t17 = ((x69==(x70==x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 189359785962274LLU;
	volatile int32_t x74 = 206014;
	int32_t x75 = 5689;
	static int8_t x76 = 25;
	static int32_t t18 = -84;

	t18 = ((x73==(x74==x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -5651181LL;
	uint32_t x78 = 329120U;
	uint16_t x80 = 15U;
	int32_t t19 = 551;

	t19 = ((x77==(x78==x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 2977816496089477129LLU;
	static volatile int32_t x82 = 406;
	uint16_t x83 = 46U;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 23;

	t20 = ((x81==(x82==x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 77548254LL;
	int8_t x86 = -1;
	volatile uint64_t x87 = UINT64_MAX;
	volatile uint32_t x88 = 904083284U;

	t21 = ((x85==(x86==x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -5;
	int64_t x90 = INT64_MIN;
	uint32_t x91 = UINT32_MAX;
	uint16_t x92 = 199U;
	volatile int32_t t22 = -5773;

	t22 = ((x89==(x90==x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 3538235LL;
	static uint64_t x95 = 1LLU;
	uint32_t x96 = 121U;
	int32_t t23 = -7806;

	t23 = ((x93==(x94==x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -4;
	int32_t x98 = -1;
	uint8_t x99 = 4U;
	static volatile uint64_t x100 = 1453787LLU;

	t24 = ((x97==(x98==x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x102 = 13U;
	uint32_t x103 = 60265315U;
	static volatile int32_t t25 = -2773;

	t25 = ((x101==(x102==x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int8_t x107 = -1;
	volatile int32_t t26 = 190796;

	t26 = ((x105==(x106==x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 1628U;
	int32_t x110 = -651047;
	volatile uint8_t x111 = UINT8_MAX;
	volatile int32_t t27 = 359757;

	t27 = ((x109==(x110==x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	uint16_t x116 = 1U;

	t28 = ((x113==(x114==x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x118 = 78U;
	int16_t x119 = INT16_MAX;

	t29 = ((x117==(x118==x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = -650165372133LL;
	int8_t x123 = INT8_MAX;
	int32_t x124 = -1;
	volatile int32_t t30 = -25047699;

	t30 = ((x121==(x122==x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x127 = 1411U;
	uint32_t x128 = UINT32_MAX;
	static int32_t t31 = 0;

	t31 = ((x125==(x126==x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 640U;
	volatile int64_t x131 = -2LL;

	t32 = ((x129==(x130==x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -1LL;
	int8_t x135 = -1;
	static uint32_t x136 = UINT32_MAX;
	int32_t t33 = -544;

	t33 = ((x133==(x134==x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	uint64_t x138 = UINT64_MAX;
	static int16_t x139 = INT16_MAX;
	static uint8_t x140 = 14U;
	volatile int32_t t34 = 1464560;

	t34 = ((x137==(x138==x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int16_t x142 = INT16_MIN;
	int8_t x143 = -1;
	static int64_t x144 = -9374752826LL;
	volatile int32_t t35 = 1370069;

	t35 = ((x141==(x142==x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static int32_t x147 = 3;
	int32_t t36 = 4;

	t36 = ((x145==(x146==x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	static int64_t x150 = INT64_MIN;
	uint16_t x152 = 2U;
	static volatile int32_t t37 = 827665;

	t37 = ((x149==(x150==x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 101396969720955616LLU;
	static uint64_t x154 = 122236660934958086LLU;
	uint32_t x155 = UINT32_MAX;
	int16_t x156 = INT16_MAX;
	static int32_t t38 = -3802298;

	t38 = ((x153==(x154==x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = 2633U;
	volatile int32_t x159 = INT32_MIN;
	volatile int16_t x160 = INT16_MAX;
	volatile int32_t t39 = 8121;

	t39 = ((x157==(x158==x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	uint16_t x162 = 11U;
	int64_t x163 = -3LL;
	static int32_t x164 = 4599;
	volatile int32_t t40 = -3315616;

	t40 = ((x161==(x162==x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 165111498LLU;
	int16_t x166 = -1;
	static uint16_t x168 = UINT16_MAX;
	static int32_t t41 = 11718074;

	t41 = ((x165==(x166==x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x170 = 13898;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = -23905;

	t42 = ((x169==(x170==x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x174 = -322;
	uint32_t x175 = 84U;
	int8_t x176 = INT8_MAX;
	int32_t t43 = -747483;

	t43 = ((x173==(x174==x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 3843LL;
	int64_t x179 = -1LL;
	uint8_t x180 = 53U;
	volatile int32_t t44 = -995232456;

	t44 = ((x177==(x178==x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x182 = INT64_MAX;
	static volatile uint16_t x183 = 5U;
	int8_t x184 = -1;

	t45 = ((x181==(x182==x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 707U;
	static volatile int8_t x188 = INT8_MIN;
	static int32_t t46 = -2414;

	t46 = ((x185==(x186==x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = -369622295504415LL;
	int64_t x191 = -1LL;
	static int16_t x192 = -1;
	int32_t t47 = 7174193;

	t47 = ((x189==(x190==x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int32_t x195 = -1;
	int32_t t48 = 55178294;

	t48 = ((x193==(x194==x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 46U;
	int32_t x198 = -1;
	int64_t x199 = -194527492428924957LL;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -33802;

	t49 = ((x197==(x198==x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x202 = INT16_MAX;
	volatile int8_t x203 = -8;
	uint8_t x204 = 44U;
	int32_t t50 = -1;

	t50 = ((x201==(x202==x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int16_t x207 = -1;
	volatile int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -1147735;

	t51 = ((x205==(x206==x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = -9;
	int32_t t52 = 269362197;

	t52 = ((x209==(x210==x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 0;
	static int64_t x214 = INT64_MAX;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 4047540;

	t53 = ((x213==(x214==x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 7U;
	volatile int32_t x218 = INT32_MIN;
	static int16_t x219 = -1;
	int8_t x220 = -15;
	volatile int32_t t54 = 27473017;

	t54 = ((x217==(x218==x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = -650657;
	uint32_t x222 = 2U;
	int16_t x223 = -10546;
	static uint64_t x224 = UINT64_MAX;
	int32_t t55 = 50310;

	t55 = ((x221==(x222==x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x226 = 20U;
	uint16_t x227 = 3U;
	volatile int64_t x228 = 35348443082LL;

	t56 = ((x225==(x226==x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MIN;
	uint32_t x231 = 1096U;
	volatile int32_t x232 = INT32_MAX;
	int32_t t57 = 828640;

	t57 = ((x229==(x230==x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	volatile uint8_t x234 = 101U;
	int16_t x235 = INT16_MIN;
	static volatile int32_t t58 = -104188996;

	t58 = ((x233==(x234==x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = -2751849;
	volatile uint8_t x239 = 5U;
	uint16_t x240 = 370U;
	static volatile int32_t t59 = 169498;

	t59 = ((x237==(x238==x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = 1;
	volatile int32_t t60 = 2;

	t60 = ((x241==(x242==x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	volatile int32_t x246 = -1;
	uint64_t x247 = UINT64_MAX;
	static int8_t x248 = -1;

	t61 = ((x245==(x246==x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int8_t x250 = INT8_MIN;
	uint16_t x251 = UINT16_MAX;
	int32_t t62 = 71184983;

	t62 = ((x249==(x250==x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	int8_t x254 = -1;
	int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 10089884;

	t63 = ((x253==(x254==x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x259 = INT64_MIN;
	int8_t x260 = 8;
	static volatile int32_t t64 = 31781;

	t64 = ((x257==(x258==x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -1;
	int8_t x263 = INT8_MIN;
	volatile int64_t x264 = 4764LL;
	int32_t t65 = 3897;

	t65 = ((x261==(x262==x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int64_t x268 = -532837LL;
	static int32_t t66 = 334;

	t66 = ((x265==(x266==x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	volatile uint32_t x270 = UINT32_MAX;
	uint8_t x271 = 0U;
	static int64_t x272 = INT64_MIN;
	volatile int32_t t67 = 1400;

	t67 = ((x269==(x270==x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = 1;
	int32_t x274 = 427;
	int8_t x275 = -1;
	int64_t x276 = INT64_MAX;
	volatile int32_t t68 = 2;

	t68 = ((x273==(x274==x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -6188;
	static int16_t x279 = 15437;
	uint8_t x280 = 3U;
	int32_t t69 = 8879;

	t69 = ((x277==(x278==x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 2U;
	static volatile int8_t x283 = INT8_MIN;
	uint64_t x284 = 25683578805294260LLU;
	int32_t t70 = -19;

	t70 = ((x281==(x282==x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -6;
	uint16_t x287 = 979U;
	int32_t x288 = INT32_MIN;

	t71 = ((x285==(x286==x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	static int32_t x291 = INT32_MAX;
	int64_t x292 = INT64_MIN;

	t72 = ((x289==(x290==x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 82653915897832LLU;
	volatile int64_t x294 = -1LL;
	uint64_t x295 = 3445LLU;
	int16_t x296 = -1;
	volatile int32_t t73 = -8126342;

	t73 = ((x293==(x294==x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x298 = 279374678;
	static uint64_t x299 = 23LLU;
	int16_t x300 = INT16_MAX;
	int32_t t74 = 1221;

	t74 = ((x297==(x298==x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x302 = -1;
	volatile int16_t x303 = -1;
	int8_t x304 = INT8_MIN;

	t75 = ((x301==(x302==x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x306 = INT16_MAX;
	int32_t x307 = 19519;
	uint64_t x308 = UINT64_MAX;

	t76 = ((x305==(x306==x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x309 = -1LL;
	int8_t x312 = 0;

	t77 = ((x309==(x310==x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 0LLU;
	uint32_t x314 = 351444U;
	int8_t x315 = 14;
	static int32_t t78 = -6;

	t78 = ((x313==(x314==x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x318 = INT32_MIN;
	static int64_t x319 = INT64_MIN;
	uint64_t x320 = 266LLU;
	volatile int32_t t79 = -2731;

	t79 = ((x317==(x318==x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x323 = INT64_MIN;
	volatile int32_t t80 = -159;

	t80 = ((x321==(x322==x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x327 = 24893494LLU;
	volatile int64_t x328 = 225159816751216993LL;
	volatile int32_t t81 = 205;

	t81 = ((x325==(x326==x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 729U;
	static volatile int8_t x332 = INT8_MAX;

	t82 = ((x329==(x330==x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x334 = 119527643555229785LL;
	int32_t x335 = -67104042;
	static uint16_t x336 = UINT16_MAX;
	int32_t t83 = -18987;

	t83 = ((x333==(x334==x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x339 = 345824LLU;
	int16_t x340 = INT16_MIN;

	t84 = ((x337==(x338==x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 4U;
	volatile uint32_t x342 = UINT32_MAX;
	static volatile int8_t x343 = -12;
	volatile int8_t x344 = 8;
	volatile int32_t t85 = 3876411;

	t85 = ((x341==(x342==x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = 31358773U;
	static int64_t x347 = INT64_MIN;
	uint32_t x348 = 9729U;
	volatile int32_t t86 = -63487971;

	t86 = ((x345==(x346==x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x350 = 3LL;
	static volatile int32_t t87 = -277851;

	t87 = ((x349==(x350==x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MAX;
	int16_t x355 = -357;
	int8_t x356 = INT8_MAX;

	t88 = ((x353==(x354==x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	uint8_t x358 = 37U;
	volatile int64_t x359 = INT64_MAX;
	uint16_t x360 = 26U;

	t89 = ((x357==(x358==x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x363 = 129757U;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = 1680182;

	t90 = ((x361==(x362==x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -4;
	int16_t x367 = INT16_MIN;

	t91 = ((x365==(x366==x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = 14384;
	static volatile int64_t x372 = -1LL;
	static int32_t t92 = -7676;

	t92 = ((x369==(x370==x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = 4U;
	int32_t x375 = 15363;
	int32_t x376 = -15608;

	t93 = ((x373==(x374==x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MAX;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	volatile int8_t x380 = -14;
	int32_t t94 = -505330;

	t94 = ((x377==(x378==x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 3991U;
	int32_t x382 = -1;
	volatile int8_t x383 = INT8_MAX;
	volatile int16_t x384 = 52;

	t95 = ((x381==(x382==x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	int64_t x387 = 987768688LL;
	int32_t x388 = 814213720;
	int32_t t96 = -361845042;

	t96 = ((x385==(x386==x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -6;
	int32_t x390 = INT32_MIN;
	uint8_t x392 = 23U;
	int32_t t97 = 5191;

	t97 = ((x389==(x390==x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x395 = UINT64_MAX;
	static volatile uint64_t x396 = 17033605517851LLU;

	t98 = ((x393==(x394==x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MAX;
	volatile int16_t x398 = INT16_MAX;
	uint32_t x399 = UINT32_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t99 = 12621765;

	t99 = ((x397==(x398==x399))<=x400);

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

