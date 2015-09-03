#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x3 = -1;
static uint8_t x7 = 3U;
int32_t t2 = -278559894;
volatile int32_t t3 = 844;
uint64_t x22 = 2LLU;
int16_t x24 = -58;
int32_t t5 = 28318;
volatile int32_t t6 = -1;
int8_t x34 = -1;
int32_t x36 = INT32_MAX;
uint64_t x40 = 86045LLU;
static uint64_t x47 = 368983299100786LLU;
int16_t x49 = -1;
static int8_t x52 = INT8_MAX;
volatile uint64_t x53 = UINT64_MAX;
uint16_t x57 = UINT16_MAX;
volatile int32_t t14 = 77409;
static int64_t x61 = -1LL;
volatile int64_t x66 = -1LL;
int64_t x67 = INT64_MAX;
static int8_t x71 = 3;
static int32_t t17 = -4;
volatile int32_t x74 = -10103;
volatile uint16_t x75 = UINT16_MAX;
static uint8_t x78 = 8U;
int32_t x79 = 474521219;
volatile int32_t x80 = INT32_MAX;
volatile int32_t t22 = -7;
volatile int32_t x93 = INT32_MAX;
volatile int16_t x95 = 1;
static int8_t x101 = -1;
static int32_t t25 = -3790318;
int64_t x107 = 3037869LL;
volatile int32_t t27 = -914;
int32_t t28 = 15259;
int32_t x117 = -1;
uint64_t x118 = 1LLU;
volatile int32_t t30 = 123352;
volatile int8_t x126 = INT8_MIN;
static int8_t x134 = 14;
uint16_t x136 = 8145U;
int32_t t33 = 642217;
int16_t x137 = INT16_MAX;
int8_t x138 = INT8_MIN;
static volatile int64_t x144 = INT64_MIN;
static int64_t x146 = -1542252LL;
int16_t x149 = 1;
uint32_t x150 = 7U;
int16_t x151 = INT16_MIN;
static volatile uint32_t x155 = 495U;
uint32_t x156 = UINT32_MAX;
int16_t x157 = 0;
int32_t x160 = INT32_MIN;
int8_t x167 = INT8_MAX;
volatile int64_t x171 = INT64_MAX;
volatile int32_t t41 = -441038276;
static volatile int8_t x173 = INT8_MIN;
static uint32_t x174 = UINT32_MAX;
volatile int32_t t44 = -3108861;
int32_t x194 = INT32_MIN;
int32_t x196 = -138243914;
uint64_t x197 = 293146189983273281LLU;
volatile int16_t x200 = 1156;
volatile int32_t t49 = 25792;
int32_t x206 = INT32_MIN;
int32_t x208 = INT32_MIN;
static int32_t x239 = INT32_MIN;
int16_t x246 = INT16_MAX;
uint8_t x251 = UINT8_MAX;
uint8_t x253 = 0U;
static volatile int32_t x256 = -1;
uint8_t x257 = 0U;
uint64_t x260 = 19LLU;
int32_t x266 = -1426470;
int16_t x273 = INT16_MAX;
static int32_t t66 = -58;
int32_t x280 = INT32_MIN;
volatile int32_t t67 = 78;
static volatile int32_t t70 = -1;
int64_t x297 = 6133420LL;
static int32_t x299 = INT32_MAX;
static volatile int32_t t72 = -743200668;
int16_t x303 = 225;
uint8_t x306 = 1U;
volatile uint16_t x307 = 1U;
int32_t t74 = 1010281;
uint64_t x312 = 276020799LLU;
volatile int32_t x323 = INT32_MIN;
static int32_t x331 = INT32_MIN;
volatile int32_t t80 = 997;
static uint8_t x345 = UINT8_MAX;
uint8_t x346 = 12U;
int16_t x348 = -117;
int16_t x359 = INT16_MIN;
volatile uint8_t x364 = UINT8_MAX;
static int8_t x370 = -2;
static int32_t t89 = 1150410;
volatile int32_t x377 = 55426551;
uint32_t x379 = 30010U;
int32_t t90 = 465591;
volatile uint8_t x383 = 2U;
volatile uint64_t x390 = 345690754544663LLU;
volatile int32_t t93 = -1566;
int16_t x400 = -477;
int8_t x408 = INT8_MAX;
int32_t x413 = INT32_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	uint16_t x2 = 1002U;
	static uint16_t x4 = 12245U;
	static volatile int32_t t0 = -7173011;

	t0 = ((x1|(x2%x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	uint32_t x6 = 1173444045U;
	volatile int32_t x8 = INT32_MAX;
	int32_t t1 = -17285;

	t1 = ((x5|(x6%x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 8664600923973384823LLU;
	static int8_t x10 = 9;
	int32_t x11 = INT32_MAX;
	uint8_t x12 = 2U;

	t2 = ((x9|(x10%x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = -1;
	static volatile int16_t x15 = INT16_MIN;
	int16_t x16 = 19;

	t3 = ((x13|(x14%x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	volatile int32_t x18 = INT32_MIN;
	int32_t x19 = 212;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 40310310;

	t4 = ((x17|(x18%x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	volatile int32_t x23 = INT32_MAX;

	t5 = ((x21|(x22%x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1U;
	int32_t x26 = INT32_MIN;
	uint8_t x27 = 1U;
	int16_t x28 = INT16_MIN;

	t6 = ((x25|(x26%x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 7U;
	uint8_t x30 = 1U;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MAX;
	int32_t t7 = 39048775;

	t7 = ((x29|(x30%x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint64_t x35 = 3LLU;
	volatile int32_t t8 = 15771;

	t8 = ((x33|(x34%x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 359253573LL;
	uint64_t x38 = UINT64_MAX;
	volatile int32_t x39 = -1;
	volatile int32_t t9 = -23307;

	t9 = ((x37|(x38%x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MIN;
	static int32_t x43 = 2185404;
	volatile int16_t x44 = INT16_MAX;
	int32_t t10 = -169780470;

	t10 = ((x41|(x42%x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint16_t x46 = 182U;
	volatile int64_t x48 = -33663274021259LL;
	int32_t t11 = -961197;

	t11 = ((x45|(x46%x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 975884110;
	volatile int8_t x51 = INT8_MAX;
	volatile int32_t t12 = 1366;

	t12 = ((x49|(x50%x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x54 = INT8_MIN;
	int16_t x55 = -1;
	int16_t x56 = -670;
	int32_t t13 = 0;

	t13 = ((x53|(x54%x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = 5538890216426LL;
	int8_t x59 = 25;
	volatile uint8_t x60 = 3U;

	t14 = ((x57|(x58%x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -57;
	volatile int8_t x63 = -1;
	static uint16_t x64 = 3633U;
	volatile int32_t t15 = -2410;

	t15 = ((x61|(x62%x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = 127U;
	uint16_t x68 = 0U;
	int32_t t16 = -1021673006;

	t16 = ((x65|(x66%x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint8_t x70 = 2U;
	uint32_t x72 = 535047877U;

	t17 = ((x69|(x70%x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1244069;
	int8_t x76 = INT8_MAX;
	int32_t t18 = -12579787;

	t18 = ((x73|(x74%x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int32_t t19 = -13;

	t19 = ((x77|(x78%x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -940;
	uint32_t x82 = 447716U;
	uint32_t x83 = 140482U;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = -8361;

	t20 = ((x81|(x82%x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -261312589236455492LL;
	uint64_t x86 = 30370LLU;
	int8_t x87 = INT8_MAX;
	uint8_t x88 = 24U;
	int32_t t21 = -226130289;

	t21 = ((x85|(x86%x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 912U;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -1LL;
	volatile uint8_t x92 = 2U;

	t22 = ((x89|(x90%x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 5U;
	int64_t x96 = INT64_MIN;
	static int32_t t23 = 62;

	t23 = ((x93|(x94%x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 38237;
	int8_t x98 = 1;
	static int16_t x99 = INT16_MAX;
	int8_t x100 = -18;
	static volatile int32_t t24 = 5;

	t24 = ((x97|(x98%x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = 947LLU;
	uint16_t x103 = 984U;
	int32_t x104 = INT32_MIN;

	t25 = ((x101|(x102%x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	volatile uint8_t x106 = UINT8_MAX;
	int32_t x108 = -15;
	int32_t t26 = -52150934;

	t26 = ((x105|(x106%x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -458;
	volatile int32_t x110 = -32566944;
	volatile int16_t x111 = INT16_MAX;
	volatile int8_t x112 = -1;

	t27 = ((x109|(x110%x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	int8_t x114 = -23;
	static uint32_t x115 = 5546692U;
	int64_t x116 = INT64_MIN;

	t28 = ((x113|(x114%x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x119 = INT32_MAX;
	volatile int64_t x120 = -1LL;
	int32_t t29 = 1;

	t29 = ((x117|(x118%x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int8_t x122 = INT8_MIN;
	static volatile uint8_t x123 = 1U;
	uint16_t x124 = UINT16_MAX;

	t30 = ((x121|(x122%x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile uint64_t x127 = UINT64_MAX;
	static volatile int64_t x128 = 23283438LL;
	int32_t t31 = 14;

	t31 = ((x125|(x126%x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 103U;
	int32_t x130 = INT32_MAX;
	static int16_t x131 = -684;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 4;

	t32 = ((x129|(x130%x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int16_t x135 = INT16_MAX;

	t33 = ((x133|(x134%x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x139 = UINT64_MAX;
	int16_t x140 = 21;
	int32_t t34 = -1184;

	t34 = ((x137|(x138%x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static volatile int64_t x142 = -1LL;
	int16_t x143 = INT16_MIN;
	int32_t t35 = -9;

	t35 = ((x141|(x142%x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 0;
	int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MAX;
	int32_t t36 = 810;

	t36 = ((x145|(x146%x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x152 = 2445;
	int32_t t37 = 5;

	t37 = ((x149|(x150%x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MAX;
	int32_t t38 = 688876776;

	t38 = ((x153|(x154%x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = 35522126LL;
	int16_t x159 = INT16_MIN;
	int32_t t39 = 407;

	t39 = ((x157|(x158%x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x165 = 933808765U;
	uint8_t x166 = 0U;
	static volatile int64_t x168 = -1LL;
	int32_t t40 = -242240554;

	t40 = ((x165|(x166%x167))<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = -1;
	static int8_t x170 = -1;
	uint8_t x172 = 14U;

	t41 = ((x169|(x170%x171))<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x175 = -279703260715934LL;
	volatile int64_t x176 = 353774376116LL;
	int32_t t42 = 0;

	t42 = ((x173|(x174%x175))<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x178 = 884U;
	static uint8_t x179 = UINT8_MAX;
	static uint64_t x180 = UINT64_MAX;
	volatile int32_t t43 = 143;

	t43 = ((x177|(x178%x179))<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = 326023305108399040LL;
	int64_t x182 = INT64_MIN;
	static int8_t x183 = 14;
	uint16_t x184 = 1U;

	t44 = ((x181|(x182%x183))<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	int32_t x186 = INT32_MAX;
	int64_t x187 = INT64_MAX;
	volatile int64_t x188 = INT64_MIN;
	static volatile int32_t t45 = 436464154;

	t45 = ((x185|(x186%x187))<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = 10806LL;
	int16_t x191 = -1;
	int64_t x192 = INT64_MAX;
	volatile int32_t t46 = 616401;

	t46 = ((x189|(x190%x191))<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	int64_t x195 = 29898488LL;
	static int32_t t47 = 47124413;

	t47 = ((x193|(x194%x195))<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x198 = -1;
	int64_t x199 = 15556393593585LL;
	volatile int32_t t48 = -302936963;

	t48 = ((x197|(x198%x199))<=x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	volatile int8_t x202 = INT8_MIN;
	uint64_t x203 = 20658LLU;
	volatile int32_t x204 = INT32_MAX;

	t49 = ((x201|(x202%x203))<=x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = -1998246902624LL;
	int16_t x207 = INT16_MIN;
	int32_t t50 = 22508954;

	t50 = ((x205|(x206%x207))<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MAX;
	int32_t x210 = 3;
	int16_t x211 = INT16_MAX;
	volatile int64_t x212 = INT64_MIN;
	volatile int32_t t51 = 3;

	t51 = ((x209|(x210%x211))<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = -1;
	volatile uint8_t x218 = UINT8_MAX;
	static int16_t x219 = INT16_MIN;
	volatile int8_t x220 = 33;
	volatile int32_t t52 = 11;

	t52 = ((x217|(x218%x219))<=x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x221 = UINT8_MAX;
	int8_t x222 = 4;
	volatile int8_t x223 = INT8_MAX;
	static uint32_t x224 = 5140U;
	int32_t t53 = 5;

	t53 = ((x221|(x222%x223))<=x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	int32_t x226 = 93;
	uint32_t x227 = 969U;
	volatile uint16_t x228 = 42U;
	volatile int32_t t54 = 0;

	t54 = ((x225|(x226%x227))<=x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = 1;
	int8_t x230 = -1;
	volatile int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = 422;

	t55 = ((x229|(x230%x231))<=x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = 4589U;
	int16_t x234 = INT16_MIN;
	volatile int32_t x235 = -1;
	static uint16_t x236 = UINT16_MAX;
	volatile int32_t t56 = -97;

	t56 = ((x233|(x234%x235))<=x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 0U;
	uint64_t x238 = 106454664LLU;
	int8_t x240 = 11;
	int32_t t57 = 5565;

	t57 = ((x237|(x238%x239))<=x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	static volatile uint64_t x242 = 29LLU;
	static int16_t x243 = INT16_MIN;
	uint64_t x244 = 60505338938LLU;
	int32_t t58 = -127;

	t58 = ((x241|(x242%x243))<=x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x245 = 2U;
	uint64_t x247 = 3LLU;
	volatile int32_t x248 = INT32_MAX;
	volatile int32_t t59 = -1;

	t59 = ((x245|(x246%x247))<=x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 53373939898680693LLU;
	int64_t x250 = INT64_MAX;
	int32_t x252 = -1;
	static int32_t t60 = -1;

	t60 = ((x249|(x250%x251))<=x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MIN;
	int64_t x255 = 576873430892540LL;
	int32_t t61 = -30070885;

	t61 = ((x253|(x254%x255))<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x258 = -16170;
	int32_t x259 = INT32_MIN;
	volatile int32_t t62 = -10457;

	t62 = ((x257|(x258%x259))<=x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = UINT64_MAX;
	int64_t x262 = -232594063458847LL;
	volatile uint32_t x263 = 1539654198U;
	int32_t x264 = INT32_MAX;
	volatile int32_t t63 = 171629625;

	t63 = ((x261|(x262%x263))<=x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MAX;
	int32_t x267 = 489023;
	static int8_t x268 = INT8_MIN;
	int32_t t64 = -654;

	t64 = ((x265|(x266%x267))<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x269 = INT32_MAX;
	uint8_t x270 = 0U;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t65 = 8247927;

	t65 = ((x269|(x270%x271))<=x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x274 = INT8_MIN;
	static int16_t x275 = INT16_MAX;
	uint8_t x276 = UINT8_MAX;

	t66 = ((x273|(x274%x275))<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = 32;
	uint16_t x278 = 161U;
	uint8_t x279 = 109U;

	t67 = ((x277|(x278%x279))<=x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x281 = -1;
	static int16_t x282 = INT16_MIN;
	uint64_t x283 = 435237278610638355LLU;
	uint32_t x284 = 5U;
	volatile int32_t t68 = 24482;

	t68 = ((x281|(x282%x283))<=x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 11432U;
	uint16_t x286 = 28U;
	int64_t x287 = INT64_MIN;
	volatile uint32_t x288 = 4994500U;
	volatile int32_t t69 = 904;

	t69 = ((x285|(x286%x287))<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x289 = 3LLU;
	static uint16_t x290 = 252U;
	uint8_t x291 = 54U;
	static int16_t x292 = 388;

	t70 = ((x289|(x290%x291))<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MAX;
	int32_t x294 = INT32_MAX;
	volatile int32_t x295 = 2986;
	int8_t x296 = INT8_MAX;
	int32_t t71 = 85466817;

	t71 = ((x293|(x294%x295))<=x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x298 = 6713U;
	volatile uint64_t x300 = 7623152436854LLU;

	t72 = ((x297|(x298%x299))<=x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int32_t x302 = INT32_MAX;
	int64_t x304 = 66027153LL;
	static volatile int32_t t73 = 1;

	t73 = ((x301|(x302%x303))<=x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = -1;
	static uint32_t x308 = 42U;

	t74 = ((x305|(x306%x307))<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = UINT8_MAX;
	int16_t x310 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	int32_t t75 = 100;

	t75 = ((x309|(x310%x311))<=x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = -1LL;
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = -1;
	volatile int32_t x316 = -67;
	static volatile int32_t t76 = -1;

	t76 = ((x313|(x314%x315))<=x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -1;
	int16_t x318 = INT16_MIN;
	volatile int32_t x319 = INT32_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t77 = 339607070;

	t77 = ((x317|(x318%x319))<=x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = 44;
	static int16_t x322 = -782;
	int64_t x324 = INT64_MIN;
	int32_t t78 = -3314;

	t78 = ((x321|(x322%x323))<=x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x325 = UINT32_MAX;
	static uint8_t x326 = UINT8_MAX;
	uint8_t x327 = 4U;
	static int64_t x328 = 1558467847925953LL;
	static int32_t t79 = 25846339;

	t79 = ((x325|(x326%x327))<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x329 = 75U;
	int16_t x330 = 37;
	int64_t x332 = INT64_MIN;

	t80 = ((x329|(x330%x331))<=x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MAX;
	uint32_t x335 = 4479949U;
	uint32_t x336 = 14U;
	static int32_t t81 = -37816;

	t81 = ((x333|(x334%x335))<=x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = -1;
	int32_t x339 = -129436;
	uint64_t x340 = UINT64_MAX;
	int32_t t82 = -9674313;

	t82 = ((x337|(x338%x339))<=x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x347 = INT8_MIN;
	volatile int32_t t83 = 236;

	t83 = ((x345|(x346%x347))<=x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = -1;
	uint16_t x351 = 3878U;
	volatile int8_t x352 = 0;
	int32_t t84 = 558104;

	t84 = ((x349|(x350%x351))<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x353 = INT32_MIN;
	static int8_t x354 = INT8_MIN;
	static int64_t x355 = -1LL;
	uint8_t x356 = 39U;
	int32_t t85 = -317226;

	t85 = ((x353|(x354%x355))<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	int8_t x360 = -15;
	int32_t t86 = 551725877;

	t86 = ((x357|(x358%x359))<=x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x361 = 1U;
	static int16_t x362 = INT16_MAX;
	int16_t x363 = 6881;
	int32_t t87 = 15;

	t87 = ((x361|(x362%x363))<=x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x365 = 2U;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MAX;
	static int16_t x368 = -1;
	static int32_t t88 = -423463892;

	t88 = ((x365|(x366%x367))<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = -1;
	uint32_t x371 = 29822U;
	uint8_t x372 = 62U;

	t89 = ((x369|(x370%x371))<=x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x378 = UINT8_MAX;
	uint64_t x380 = UINT64_MAX;

	t90 = ((x377|(x378%x379))<=x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = 4U;
	uint16_t x382 = 2U;
	int16_t x384 = INT16_MAX;
	int32_t t91 = 225488636;

	t91 = ((x381|(x382%x383))<=x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = 24U;
	int64_t x386 = 157LL;
	static int8_t x387 = INT8_MIN;
	uint32_t x388 = UINT32_MAX;
	static int32_t t92 = -141813561;

	t92 = ((x385|(x386%x387))<=x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x389 = UINT8_MAX;
	uint32_t x391 = UINT32_MAX;
	uint64_t x392 = 10333152LLU;

	t93 = ((x389|(x390%x391))<=x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = 14363;
	int8_t x394 = 1;
	int64_t x395 = INT64_MIN;
	int64_t x396 = -1LL;
	int32_t t94 = -123385;

	t94 = ((x393|(x394%x395))<=x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MAX;
	static int8_t x398 = INT8_MIN;
	static uint16_t x399 = UINT16_MAX;
	int32_t t95 = -1;

	t95 = ((x397|(x398%x399))<=x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MIN;
	static volatile uint8_t x402 = 29U;
	int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MIN;
	static int32_t t96 = -1224289;

	t96 = ((x401|(x402%x403))<=x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -1;
	static int32_t x406 = INT32_MIN;
	static int32_t x407 = -1;
	int32_t t97 = -102131258;

	t97 = ((x405|(x406%x407))<=x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	uint8_t x411 = 2U;
	static uint64_t x412 = UINT64_MAX;
	int32_t t98 = 240388206;

	t98 = ((x409|(x410%x411))<=x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = -6;
	int8_t x416 = 60;
	int32_t t99 = 976;

	t99 = ((x413|(x414%x415))<=x416);

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

