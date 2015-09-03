#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x9 = INT16_MIN;
uint64_t x11 = UINT64_MAX;
int16_t x17 = -1;
static volatile int8_t x18 = INT8_MIN;
volatile uint64_t x26 = 7656566486970LLU;
int32_t x31 = INT32_MIN;
volatile int32_t t7 = 2;
int32_t t8 = -599;
static int64_t x44 = 15384704LL;
static int32_t x51 = INT32_MIN;
static uint32_t x55 = 126472057U;
int32_t x59 = INT32_MAX;
int64_t x62 = INT64_MAX;
volatile int32_t t15 = 1827771;
uint16_t x66 = UINT16_MAX;
volatile uint32_t x68 = 1U;
uint16_t x71 = 116U;
int64_t t17 = 174362931LL;
volatile int64_t x82 = -1LL;
int16_t x93 = INT16_MAX;
int32_t x113 = INT32_MIN;
int32_t x124 = -189634206;
volatile int32_t t31 = 3749741;
int32_t t32 = 1280160;
static int64_t x135 = INT64_MIN;
uint8_t x137 = 7U;
volatile int16_t x150 = INT16_MIN;
volatile uint16_t x152 = 698U;
int64_t t37 = 26229600145467074LL;
volatile int32_t t42 = 22608651;
uint64_t x178 = UINT64_MAX;
int32_t x181 = INT32_MAX;
volatile int64_t x182 = INT64_MIN;
int32_t t45 = -80532662;
volatile int32_t x197 = -1;
volatile int8_t x198 = -1;
int64_t x199 = 4148404LL;
static volatile int32_t t51 = -779992773;
int32_t x223 = INT32_MIN;
volatile int8_t x238 = -1;
int16_t x239 = 46;
uint16_t x242 = UINT16_MAX;
int32_t t58 = -414;
uint32_t x246 = 18738263U;
int32_t x251 = INT32_MIN;
uint8_t x266 = UINT8_MAX;
int32_t x272 = INT32_MIN;
int8_t x276 = INT8_MIN;
volatile int32_t t66 = -60478;
uint32_t x277 = UINT32_MAX;
volatile uint64_t x278 = UINT64_MAX;
volatile uint64_t x283 = UINT64_MAX;
int16_t x287 = -1;
volatile int32_t t69 = 25871;
uint64_t x291 = 12704053561LLU;
uint8_t x294 = UINT8_MAX;
volatile int32_t t71 = -183;
volatile int8_t x297 = INT8_MAX;
int64_t x298 = 20252LL;
static volatile int32_t t72 = 0;
volatile int8_t x301 = -1;
volatile int32_t t73 = -124086;
int32_t x306 = -6;
static int64_t x307 = INT64_MIN;
volatile uint64_t x309 = 1538LLU;
volatile uint32_t x317 = 1579U;
int16_t x323 = -7036;
volatile uint64_t t77 = 653371855204128134LLU;
static uint8_t x328 = 6U;
volatile int32_t t78 = -12047;
static int32_t x332 = INT32_MAX;
static volatile int32_t t80 = -165562492;
volatile uint16_t x342 = 40U;
uint32_t x344 = 400U;
static int32_t x352 = -1;
int64_t x356 = INT64_MIN;
volatile int32_t t87 = -1;
volatile int8_t x371 = 0;
static volatile uint32_t x382 = 4U;
uint8_t x383 = UINT8_MAX;
uint8_t x391 = 0U;
int32_t t93 = 229;
int64_t x396 = INT64_MAX;
int64_t x398 = 1640398270916766LL;
volatile int32_t t95 = -8581;
uint64_t x403 = 54378123205LLU;
int16_t x406 = INT16_MAX;
int64_t x411 = -1LL;
static int8_t x414 = 1;
volatile uint64_t t99 = 2784284182375291065LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int32_t x2 = INT32_MAX;
	int8_t x3 = INT8_MAX;
	int64_t x4 = 131405184974640076LL;
	int64_t t0 = 0LL;

	t0 = (((x1/x2)==x3)%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 24;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = 0U;
	volatile int8_t x8 = 3;
	volatile int32_t t1 = -198150;

	t1 = (((x5/x6)==x7)%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	static int32_t x12 = 196211117;
	int32_t t2 = 471653;

	t2 = (((x9/x10)==x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	int64_t x14 = INT64_MIN;
	volatile int32_t x15 = -1;
	static volatile int32_t x16 = INT32_MIN;
	static int32_t t3 = -1;

	t3 = (((x13/x14)==x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x19 = 8U;
	volatile uint8_t x20 = UINT8_MAX;
	int32_t t4 = 24914;

	t4 = (((x17/x18)==x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -3;
	static int64_t x22 = -24739638904829951LL;
	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = -6416;
	volatile int32_t t5 = -2005094;

	t5 = (((x21/x22)==x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int64_t x27 = INT64_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 22637169;

	t6 = (((x25/x26)==x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint32_t x30 = 204454674U;
	volatile int8_t x32 = INT8_MIN;

	t7 = (((x29/x30)==x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	volatile int64_t x34 = INT64_MIN;
	int32_t x35 = -1;
	uint16_t x36 = 4U;

	t8 = (((x33/x34)==x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 43;
	static int8_t x38 = INT8_MAX;
	int32_t x39 = -24;
	static uint8_t x40 = UINT8_MAX;
	static int32_t t9 = -5247;

	t9 = (((x37/x38)==x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -509;
	static int64_t x42 = INT64_MAX;
	uint8_t x43 = 12U;
	volatile int64_t t10 = -1LL;

	t10 = (((x41/x42)==x43)%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x46 = INT32_MIN;
	int32_t x47 = 7;
	static int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 819;

	t11 = (((x45/x46)==x47)%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	uint64_t x50 = 1821LLU;
	volatile uint32_t x52 = UINT32_MAX;
	volatile uint32_t t12 = 1876621445U;

	t12 = (((x49/x50)==x51)%x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -5;
	static uint16_t x54 = UINT16_MAX;
	int64_t x56 = INT64_MIN;
	int64_t t13 = 336379473LL;

	t13 = (((x53/x54)==x55)%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 46813318U;
	static int16_t x58 = -1;
	int64_t x60 = 441LL;
	int64_t t14 = -58461704860LL;

	t14 = (((x57/x58)==x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int32_t x63 = INT32_MIN;
	static volatile int32_t x64 = -3755722;

	t15 = (((x61/x62)==x63)%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint8_t x67 = UINT8_MAX;
	static volatile uint32_t t16 = 2306U;

	t16 = (((x65/x66)==x67)%x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MIN;
	int64_t x70 = -5093788042920421LL;
	static volatile int64_t x72 = -1LL;

	t17 = (((x69/x70)==x71)%x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -115;
	int64_t x76 = -13LL;
	volatile int64_t t18 = 997002036LL;

	t18 = (((x73/x74)==x75)%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	static uint64_t x78 = UINT64_MAX;
	uint64_t x79 = 231409056714LLU;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 44;

	t19 = (((x77/x78)==x79)%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	volatile int32_t x83 = 22227038;
	volatile int8_t x84 = -6;
	volatile int32_t t20 = 8209537;

	t20 = (((x81/x82)==x83)%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	uint16_t x86 = 19U;
	static int64_t x87 = -1LL;
	int32_t x88 = INT32_MIN;
	int32_t t21 = -3;

	t21 = (((x85/x86)==x87)%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int32_t x90 = 76390876;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = -572;

	t22 = (((x89/x90)==x91)%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x94 = UINT16_MAX;
	uint32_t x95 = 994509481U;
	static int16_t x96 = 78;
	static int32_t t23 = -6851;

	t23 = (((x93/x94)==x95)%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 497711U;
	static volatile int32_t x98 = INT32_MIN;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = INT32_MAX;
	int32_t t24 = -1;

	t24 = (((x97/x98)==x99)%x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x102 = INT64_MAX;
	volatile int8_t x103 = INT8_MAX;
	int32_t x104 = -47782335;
	int32_t t25 = 54297;

	t25 = (((x101/x102)==x103)%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = INT16_MIN;
	int64_t x106 = 63977465023597LL;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = -118;
	int32_t t26 = -14540;

	t26 = (((x105/x106)==x107)%x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x109 = INT32_MAX;
	int16_t x110 = INT16_MIN;
	static volatile int64_t x111 = -29369945450LL;
	volatile uint64_t x112 = 36949130LLU;
	uint64_t t27 = 12289275101LLU;

	t27 = (((x109/x110)==x111)%x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = INT8_MIN;
	volatile int32_t x115 = -1;
	static volatile int8_t x116 = -1;
	volatile int32_t t28 = 99;

	t28 = (((x113/x114)==x115)%x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = 1624;
	volatile int16_t x119 = -1;
	volatile int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -870310816208906LL;

	t29 = (((x117/x118)==x119)%x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int8_t x123 = 0;
	static volatile int32_t t30 = 5685269;

	t30 = (((x121/x122)==x123)%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	static int16_t x126 = 1;
	uint16_t x127 = 225U;
	volatile int16_t x128 = -13;

	t31 = (((x125/x126)==x127)%x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	static int16_t x132 = INT16_MIN;

	t32 = (((x129/x130)==x131)%x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 7029U;
	volatile int8_t x134 = 5;
	uint32_t x136 = 916U;
	static uint32_t t33 = 112U;

	t33 = (((x133/x134)==x135)%x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x138 = INT16_MAX;
	int8_t x139 = -15;
	int8_t x140 = 1;
	volatile int32_t t34 = 1473;

	t34 = (((x137/x138)==x139)%x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 1255877635479425438LL;
	uint16_t x142 = 391U;
	int8_t x143 = INT8_MIN;
	volatile uint64_t x144 = 56946LLU;
	volatile uint64_t t35 = 772832956778763LLU;

	t35 = (((x141/x142)==x143)%x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 58LL;
	int8_t x151 = -1;
	static volatile int32_t t36 = 338608227;

	t36 = (((x149/x150)==x151)%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = 1;
	static int32_t x154 = -1;
	uint16_t x155 = UINT16_MAX;
	int64_t x156 = 8017792LL;

	t37 = (((x153/x154)==x155)%x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MIN;
	int16_t x159 = -7460;
	static int8_t x160 = INT8_MAX;
	static int32_t t38 = -21;

	t38 = (((x157/x158)==x159)%x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x161 = 71U;
	volatile uint8_t x162 = UINT8_MAX;
	static volatile int64_t x163 = -1LL;
	static int32_t x164 = INT32_MIN;
	int32_t t39 = -3;

	t39 = (((x161/x162)==x163)%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = -1;
	int16_t x166 = -1;
	volatile uint32_t x167 = 44U;
	static uint64_t x168 = UINT64_MAX;
	static uint64_t t40 = 5LLU;

	t40 = (((x165/x166)==x167)%x168);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = 15424LL;
	uint64_t x170 = 142581LLU;
	int16_t x171 = -1;
	uint8_t x172 = 4U;
	int32_t t41 = -453343583;

	t41 = (((x169/x170)==x171)%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	static int16_t x174 = INT16_MIN;
	int8_t x175 = -1;
	int8_t x176 = INT8_MIN;

	t42 = (((x173/x174)==x175)%x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	volatile int16_t x179 = 250;
	int16_t x180 = 7900;
	volatile int32_t t43 = 11612142;

	t43 = (((x177/x178)==x179)%x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t44 = 2880;

	t44 = (((x181/x182)==x183)%x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 48U;
	static int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;

	t45 = (((x185/x186)==x187)%x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x189 = UINT8_MAX;
	static int64_t x190 = -5610221397557415LL;
	int32_t x191 = 107351220;
	volatile int32_t x192 = INT32_MIN;
	int32_t t46 = 0;

	t46 = (((x189/x190)==x191)%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 3884U;
	static int32_t x194 = -1;
	volatile uint16_t x195 = 146U;
	int16_t x196 = INT16_MIN;
	int32_t t47 = -15;

	t47 = (((x193/x194)==x195)%x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t48 = 28050389;

	t48 = (((x197/x198)==x199)%x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = 5250732583075LL;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t49 = -112;

	t49 = (((x201/x202)==x203)%x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MAX;
	static int64_t x206 = INT64_MIN;
	uint16_t x207 = 343U;
	volatile int64_t x208 = 6928547237LL;
	volatile int64_t t50 = 231641LL;

	t50 = (((x205/x206)==x207)%x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MAX;
	int64_t x210 = INT64_MIN;
	uint32_t x211 = 312122U;
	static int16_t x212 = -2630;

	t51 = (((x209/x210)==x211)%x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -21822LL;
	volatile int16_t x214 = INT16_MIN;
	volatile int32_t x215 = INT32_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t52 = 1105177U;

	t52 = (((x213/x214)==x215)%x216);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MIN;
	static uint8_t x218 = UINT8_MAX;
	uint64_t x219 = 2939770060436396997LLU;
	int64_t x220 = -13654LL;
	int64_t t53 = -50036765896571LL;

	t53 = (((x217/x218)==x219)%x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MIN;
	int8_t x224 = -1;
	static volatile int32_t t54 = 23668;

	t54 = (((x221/x222)==x223)%x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x225 = 288889LLU;
	volatile uint32_t x226 = UINT32_MAX;
	int64_t x227 = -26467180LL;
	uint64_t x228 = UINT64_MAX;
	uint64_t t55 = 7597174LLU;

	t55 = (((x225/x226)==x227)%x228);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = INT16_MIN;
	static volatile uint64_t x230 = UINT64_MAX;
	volatile uint64_t x231 = UINT64_MAX;
	int32_t x232 = -1;
	static volatile int32_t t56 = 1724;

	t56 = (((x229/x230)==x231)%x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	int32_t x240 = INT32_MAX;
	volatile int32_t t57 = -4099580;

	t57 = (((x237/x238)==x239)%x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -8;
	volatile uint32_t x243 = 1492671U;
	int8_t x244 = -1;

	t58 = (((x241/x242)==x243)%x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x245 = INT8_MIN;
	int8_t x247 = -21;
	int32_t x248 = 103;
	int32_t t59 = -37;

	t59 = (((x245/x246)==x247)%x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x249 = 3710888251343055289LL;
	uint8_t x250 = 1U;
	int8_t x252 = 29;
	volatile int32_t t60 = -6140;

	t60 = (((x249/x250)==x251)%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 46U;
	volatile int8_t x254 = -19;
	static int32_t x255 = -1;
	uint64_t x256 = 3LLU;
	uint64_t t61 = 4079798822156348LLU;

	t61 = (((x253/x254)==x255)%x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = UINT64_MAX;
	uint64_t x258 = UINT64_MAX;
	volatile uint8_t x259 = 9U;
	uint64_t x260 = 151195548624163LLU;
	volatile uint64_t t62 = 7400412799210191LLU;

	t62 = (((x257/x258)==x259)%x260);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x262 = 955U;
	int8_t x263 = INT8_MAX;
	int8_t x264 = -1;
	volatile int32_t t63 = -1;

	t63 = (((x261/x262)==x263)%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x265 = UINT16_MAX;
	int32_t x267 = -23262709;
	volatile int8_t x268 = INT8_MIN;
	static int32_t t64 = -1;

	t64 = (((x265/x266)==x267)%x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	volatile int8_t x270 = INT8_MAX;
	uint16_t x271 = 1U;
	int32_t t65 = 29337120;

	t65 = (((x269/x270)==x271)%x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MIN;
	volatile int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;

	t66 = (((x273/x274)==x275)%x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x279 = -1;
	volatile uint32_t x280 = 1685868578U;
	static volatile uint32_t t67 = 47U;

	t67 = (((x277/x278)==x279)%x280);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = -1;
	int32_t x282 = -1;
	int16_t x284 = -1;
	volatile int32_t t68 = -487279;

	t68 = (((x281/x282)==x283)%x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MAX;
	uint32_t x286 = 2410746U;
	int32_t x288 = INT32_MIN;

	t69 = (((x285/x286)==x287)%x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = 0;
	volatile int64_t x290 = INT64_MIN;
	static int64_t x292 = -1LL;
	int64_t t70 = 47056221300084LL;

	t70 = (((x289/x290)==x291)%x292);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x293 = 2100;
	uint64_t x295 = 115988987LLU;
	int16_t x296 = -467;

	t71 = (((x293/x294)==x295)%x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x299 = INT16_MAX;
	uint8_t x300 = 102U;

	t72 = (((x297/x298)==x299)%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x302 = INT8_MAX;
	uint8_t x303 = UINT8_MAX;
	uint8_t x304 = UINT8_MAX;

	t73 = (((x301/x302)==x303)%x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t74 = 507648806057332647LL;

	t74 = (((x305/x306)==x307)%x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x310 = INT32_MIN;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t75 = 635145750;

	t75 = (((x309/x310)==x311)%x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x318 = UINT32_MAX;
	volatile uint32_t x319 = 0U;
	uint8_t x320 = 15U;
	volatile int32_t t76 = 21635121;

	t76 = (((x317/x318)==x319)%x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x321 = 7743030U;
	static int16_t x322 = 10;
	uint64_t x324 = UINT64_MAX;

	t77 = (((x321/x322)==x323)%x324);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MAX;
	int8_t x326 = INT8_MAX;
	volatile int16_t x327 = -3;

	t78 = (((x325/x326)==x327)%x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x329 = INT16_MIN;
	uint8_t x330 = 11U;
	int64_t x331 = INT64_MAX;
	int32_t t79 = 312195372;

	t79 = (((x329/x330)==x331)%x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 6185U;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = 66486LLU;
	int8_t x336 = INT8_MAX;

	t80 = (((x333/x334)==x335)%x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = UINT32_MAX;
	int8_t x338 = INT8_MAX;
	volatile int16_t x339 = -1;
	uint8_t x340 = 22U;
	volatile int32_t t81 = -521824;

	t81 = (((x337/x338)==x339)%x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	static int16_t x343 = -1;
	volatile uint32_t t82 = 150197U;

	t82 = (((x341/x342)==x343)%x344);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = 3;
	int16_t x346 = -1;
	uint8_t x347 = 1U;
	int32_t x348 = 1444562;
	volatile int32_t t83 = -2;

	t83 = (((x345/x346)==x347)%x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x349 = -83LL;
	static int16_t x350 = -1;
	int32_t x351 = INT32_MAX;
	int32_t t84 = 10205279;

	t84 = (((x349/x350)==x351)%x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MAX;
	static int32_t x354 = -30;
	int32_t x355 = 1172;
	volatile int64_t t85 = -7234630970LL;

	t85 = (((x353/x354)==x355)%x356);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x357 = 0;
	static int16_t x358 = -3924;
	int8_t x359 = -1;
	int64_t x360 = INT64_MIN;
	int64_t t86 = 167789064156LL;

	t86 = (((x357/x358)==x359)%x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	int16_t x363 = -1;
	int8_t x364 = INT8_MIN;

	t87 = (((x361/x362)==x363)%x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -1LL;
	volatile uint64_t x366 = 4257LLU;
	volatile int16_t x367 = INT16_MAX;
	int8_t x368 = -1;
	volatile int32_t t88 = -124353;

	t88 = (((x365/x366)==x367)%x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x369 = INT8_MIN;
	volatile uint16_t x370 = UINT16_MAX;
	int64_t x372 = 2477630133LL;
	volatile int64_t t89 = -1064423108LL;

	t89 = (((x369/x370)==x371)%x372);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x373 = 469U;
	int64_t x374 = 26453LL;
	uint16_t x375 = 1113U;
	uint16_t x376 = 3U;
	static volatile int32_t t90 = -90;

	t90 = (((x373/x374)==x375)%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x377 = 1845952793U;
	volatile int32_t x378 = INT32_MAX;
	int8_t x379 = 7;
	uint8_t x380 = 9U;
	int32_t t91 = -6;

	t91 = (((x377/x378)==x379)%x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = 3;
	volatile int64_t x384 = -3029168LL;
	int64_t t92 = 111830204LL;

	t92 = (((x381/x382)==x383)%x384);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = -5520;
	int16_t x390 = INT16_MIN;
	volatile uint8_t x392 = 1U;

	t93 = (((x389/x390)==x391)%x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = INT8_MIN;
	volatile int16_t x394 = -1;
	volatile int16_t x395 = 132;
	int64_t t94 = -21LL;

	t94 = (((x393/x394)==x395)%x396);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x397 = INT8_MAX;
	volatile uint8_t x399 = 3U;
	uint16_t x400 = 13549U;

	t95 = (((x397/x398)==x399)%x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MIN;
	int16_t x404 = INT16_MAX;
	volatile int32_t t96 = 19;

	t96 = (((x401/x402)==x403)%x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x405 = 5465U;
	static int8_t x407 = -1;
	volatile int16_t x408 = INT16_MIN;
	int32_t t97 = 3569107;

	t97 = (((x405/x406)==x407)%x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x409 = INT16_MAX;
	int32_t x410 = INT32_MIN;
	int32_t x412 = 245;
	int32_t t98 = 329124769;

	t98 = (((x409/x410)==x411)%x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x415 = UINT8_MAX;
	uint64_t x416 = 8422924663LLU;

	t99 = (((x413/x414)==x415)%x416);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

