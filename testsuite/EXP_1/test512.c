#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 113U;
int8_t x3 = INT8_MIN;
volatile int8_t x4 = INT8_MIN;
int8_t x6 = INT8_MIN;
int64_t t1 = -21284LL;
volatile int8_t x12 = INT8_MIN;
int64_t x18 = INT64_MIN;
int16_t x21 = -1;
int32_t x23 = -9313;
volatile int32_t x24 = INT32_MIN;
int32_t x28 = INT32_MIN;
volatile int32_t t7 = 9038;
int8_t x33 = 21;
volatile int64_t t9 = 1960007003763086LL;
uint64_t x48 = UINT64_MAX;
static int16_t x63 = INT16_MIN;
volatile uint32_t x64 = 19469015U;
volatile uint32_t t14 = 177U;
int16_t x66 = -647;
int16_t x77 = INT16_MAX;
static int32_t x84 = -385778;
uint8_t x88 = 6U;
int16_t x92 = INT16_MIN;
int16_t x94 = 968;
int8_t x105 = INT8_MIN;
int16_t x107 = -41;
static volatile int32_t t24 = -25141833;
uint64_t t26 = 3990022689088020524LLU;
uint16_t x122 = 7652U;
static int8_t x125 = 6;
volatile int32_t x127 = -39596;
int32_t t28 = 3148679;
static volatile int64_t x130 = 5560975721LL;
volatile uint32_t x133 = 2713395U;
uint32_t x134 = UINT32_MAX;
int32_t x138 = INT32_MIN;
static volatile uint32_t t31 = 619225903U;
static volatile uint16_t x145 = UINT16_MAX;
int32_t x146 = INT32_MIN;
int16_t x151 = -6657;
int64_t x167 = 0LL;
int64_t x177 = 121943352LL;
static volatile int64_t t40 = -1570774LL;
int8_t x189 = 0;
uint32_t x191 = UINT32_MAX;
static volatile uint8_t x196 = UINT8_MAX;
volatile int32_t x197 = -1;
int64_t x198 = -7631512LL;
volatile int8_t x199 = INT8_MIN;
static int8_t x205 = -23;
static uint8_t x208 = 54U;
static volatile int32_t t49 = 9389;
int32_t x222 = 157875273;
static int8_t x225 = INT8_MIN;
int32_t x241 = INT32_MIN;
int8_t x242 = INT8_MIN;
uint64_t t58 = 136973885218749982LLU;
volatile int64_t t59 = 33522246854011LL;
int32_t x261 = -475760;
int64_t x267 = -1LL;
int32_t x269 = INT32_MIN;
volatile uint8_t x273 = 9U;
static volatile int64_t x274 = -1LL;
static int16_t x275 = 132;
static int8_t x280 = -1;
int64_t x284 = 60701424LL;
uint16_t x304 = UINT16_MAX;
volatile int32_t x314 = -16711189;
int64_t x317 = INT64_MAX;
int64_t x318 = INT64_MIN;
int64_t t73 = 3404809393426LL;
volatile uint64_t t74 = 1304053446LLU;
int16_t x329 = INT16_MAX;
static int64_t x335 = INT64_MAX;
int32_t x338 = INT32_MAX;
volatile int32_t t79 = -91504;
static int16_t x355 = 1219;
volatile int64_t t82 = -649183525688564LL;
static volatile int8_t x364 = INT8_MIN;
static uint32_t x371 = UINT32_MAX;
int32_t x378 = -1;
static int32_t x380 = INT32_MAX;
volatile int32_t t88 = 193684;
static uint8_t x383 = UINT8_MAX;
static volatile int64_t t89 = 196772394538LL;
int16_t x397 = INT16_MAX;
static volatile uint16_t x398 = 8488U;
static uint16_t x406 = 1033U;
uint8_t x411 = 0U;
uint8_t x413 = 27U;
volatile int16_t x414 = INT16_MIN;
int32_t x426 = -1;
static int32_t x432 = INT32_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int64_t t0 = -2334LL;

	t0 = (((x1/x2)+x3)%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 5U;
	int64_t x7 = 578163552907LL;
	int32_t x8 = INT32_MIN;

	t1 = (((x5/x6)+x7)%x8);

	if (t1 != 490451595LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 0;
	volatile int64_t x10 = INT64_MIN;
	volatile int64_t x11 = -1106453LL;
	int64_t t2 = -63166738447302416LL;

	t2 = (((x9/x10)+x11)%x12);

	if (t2 != -21LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MAX;
	volatile uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 440011355LLU;

	t3 = (((x13/x14)+x15)%x16);

	if (t3 != 32767LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint32_t x19 = 0U;
	static int16_t x20 = INT16_MIN;
	int64_t t4 = -883993232697LL;

	t4 = (((x17/x18)+x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -15092310658LL;
	int64_t t5 = 1LL;

	t5 = (((x21/x22)+x23)%x24);

	if (t5 != -9313LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	static uint64_t x26 = UINT64_MAX;
	volatile int8_t x27 = 0;
	uint64_t t6 = 11648LLU;

	t6 = (((x25/x26)+x27)%x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = 21;
	static int32_t x31 = -814677584;
	int16_t x32 = INT16_MIN;

	t7 = (((x29/x30)+x31)%x32);

	if (t7 != -1128) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x34 = INT16_MIN;
	static int16_t x35 = 1;
	static volatile int8_t x36 = INT8_MIN;
	int32_t t8 = 1337438;

	t8 = (((x33/x34)+x35)%x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = -65065326LL;
	uint16_t x42 = UINT16_MAX;
	int32_t x43 = -61777193;
	uint32_t x44 = 300U;

	t9 = (((x41/x42)+x43)%x44);

	if (t9 != -85LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	volatile int64_t x47 = 11697296278183LL;
	uint64_t t10 = 274373274LLU;

	t10 = (((x45/x46)+x47)%x48);

	if (t10 != 11697296278184LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 1U;
	int64_t x50 = 51794669551LL;
	uint16_t x51 = 11U;
	uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 384403392228964994LLU;

	t11 = (((x49/x50)+x51)%x52);

	if (t11 != 11LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = 0;
	int64_t x54 = -7529647243193LL;
	int16_t x55 = INT16_MAX;
	uint8_t x56 = 49U;
	int64_t t12 = 222138LL;

	t12 = (((x53/x54)+x55)%x56);

	if (t12 != 35LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	uint16_t x59 = 30829U;
	uint16_t x60 = 491U;
	volatile int32_t t13 = 40;

	t13 = (((x57/x58)+x59)%x60);

	if (t13 != 24) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 6596906;
	static uint16_t x62 = UINT16_MAX;

	t14 = (((x61/x62)+x63)%x64);

	if (t14 != 11751328U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	uint8_t x67 = 1U;
	volatile int64_t x68 = -1LL;
	int64_t t15 = -20015260441LL;

	t15 = (((x65/x66)+x67)%x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -2;
	volatile uint64_t x70 = UINT64_MAX;
	int8_t x71 = -2;
	uint8_t x72 = 98U;
	uint64_t t16 = 142164578248015498LLU;

	t16 = (((x69/x70)+x71)%x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x78 = INT64_MAX;
	uint32_t x79 = 28U;
	static int32_t x80 = INT32_MIN;
	volatile int64_t t17 = 11479732LL;

	t17 = (((x77/x78)+x79)%x80);

	if (t17 != 28LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MAX;
	static int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;
	static int32_t t18 = 11;

	t18 = (((x81/x82)+x83)%x84);

	if (t18 != -65663) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	int64_t t19 = -8LL;

	t19 = (((x85/x86)+x87)%x88);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = -1LL;
	int64_t x90 = INT64_MAX;
	uint8_t x91 = 25U;
	volatile int64_t t20 = -42555975718538512LL;

	t20 = (((x89/x90)+x91)%x92);

	if (t20 != 25LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	uint64_t x95 = 3551797677640426262LLU;
	uint16_t x96 = 13437U;
	uint64_t t21 = 47LLU;

	t21 = (((x93/x94)+x95)%x96);

	if (t21 != 11894LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x97 = 4339346919348LLU;
	volatile int16_t x98 = INT16_MAX;
	uint16_t x99 = UINT16_MAX;
	uint16_t x100 = UINT16_MAX;
	uint64_t t22 = 1LLU;

	t22 = (((x97/x98)+x99)%x100);

	if (t22 != 49700LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x106 = -10;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t23 = 56669083LL;

	t23 = (((x105/x106)+x107)%x108);

	if (t23 != -29LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 80U;
	int8_t x110 = -2;
	static uint16_t x111 = 3655U;
	int16_t x112 = INT16_MAX;

	t24 = (((x109/x110)+x111)%x112);

	if (t24 != 3615) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x113 = 0LLU;
	int32_t x114 = INT32_MAX;
	volatile int8_t x115 = -1;
	static int8_t x116 = INT8_MIN;
	volatile uint64_t t25 = 16774490791LLU;

	t25 = (((x113/x114)+x115)%x116);

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MAX;
	volatile int32_t x119 = -1;
	static uint64_t x120 = 1310335070618139454LLU;

	t26 = (((x117/x118)+x119)%x120);

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	int16_t x123 = INT16_MIN;
	volatile uint8_t x124 = 13U;
	volatile int32_t t27 = -2006493;

	t27 = (((x121/x122)+x123)%x124);

	if (t27 != -8) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x126 = UINT16_MAX;
	int8_t x128 = 1;

	t28 = (((x125/x126)+x127)%x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	uint32_t x131 = 2249U;
	volatile uint16_t x132 = 13317U;
	int64_t t29 = 0LL;

	t29 = (((x129/x130)+x131)%x132);

	if (t29 != 2249LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x135 = UINT64_MAX;
	static uint64_t x136 = 3524737LLU;
	uint64_t t30 = 182269376LLU;

	t30 = (((x133/x134)+x135)%x136);

	if (t30 != 2684575LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x137 = -1;
	static uint32_t x139 = 196350U;
	uint32_t x140 = 78728472U;

	t31 = (((x137/x138)+x139)%x140);

	if (t31 != 196350U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 200U;
	uint64_t x142 = 2194212452267589845LLU;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	uint64_t t32 = 325547LLU;

	t32 = (((x141/x142)+x143)%x144);

	if (t32 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x147 = -1;
	int32_t x148 = -1;
	volatile int32_t t33 = -1866;

	t33 = (((x145/x146)+x147)%x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -1;
	uint32_t x150 = 48551908U;
	static int64_t x152 = -1LL;
	volatile int64_t t34 = -935427208137901880LL;

	t34 = (((x149/x150)+x151)%x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MAX;
	int32_t x155 = INT32_MIN;
	uint16_t x156 = UINT16_MAX;
	volatile int64_t t35 = 892969528LL;

	t35 = (((x153/x154)+x155)%x156);

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x157 = -3;
	int64_t x158 = INT64_MIN;
	uint32_t x159 = 7046U;
	int8_t x160 = INT8_MAX;
	volatile int64_t t36 = -21828125349452462LL;

	t36 = (((x157/x158)+x159)%x160);

	if (t36 != 61LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = -44;
	uint16_t x162 = 4418U;
	int16_t x163 = INT16_MIN;
	volatile uint32_t x164 = 3544384U;
	volatile uint32_t t37 = 75637727U;

	t37 = (((x161/x162)+x163)%x164);

	if (t37 != 2685504U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = UINT8_MAX;
	int16_t x166 = 9;
	volatile uint64_t x168 = UINT64_MAX;
	static uint64_t t38 = 241208122408LLU;

	t38 = (((x165/x166)+x167)%x168);

	if (t38 != 28LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile uint32_t x170 = 6U;
	static int32_t x171 = INT32_MAX;
	int16_t x172 = -1;
	uint32_t t39 = 12930U;

	t39 = (((x169/x170)+x171)%x172);

	if (t39 != 2863306068U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x178 = INT16_MIN;
	uint32_t x179 = 53267U;
	static int64_t x180 = -1LL;

	t40 = (((x177/x178)+x179)%x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MAX;
	volatile uint64_t x183 = 1724LLU;
	static int64_t x184 = -1LL;
	uint64_t t41 = 1537577588518LLU;

	t41 = (((x181/x182)+x183)%x184);

	if (t41 != 1724LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = -26071903LL;
	uint32_t x186 = 15459U;
	int8_t x187 = INT8_MIN;
	static uint32_t x188 = 159304040U;
	static volatile int64_t t42 = 121352418383327LL;

	t42 = (((x185/x186)+x187)%x188);

	if (t42 != -1814LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x190 = 140U;
	static volatile uint16_t x192 = 8384U;
	uint32_t t43 = 15365617U;

	t43 = (((x189/x190)+x191)%x192);

	if (t43 != 3391U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MIN;
	static int32_t x194 = INT32_MIN;
	static int16_t x195 = -14463;
	static volatile int32_t t44 = -208;

	t44 = (((x193/x194)+x195)%x196);

	if (t44 != -183) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x200 = 5680U;
	volatile int64_t t45 = 562499043228659LL;

	t45 = (((x197/x198)+x199)%x200);

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x201 = -1;
	static volatile int32_t x202 = -12200237;
	int64_t x203 = -159983569002635LL;
	volatile uint64_t x204 = UINT64_MAX;
	uint64_t t46 = 2346702125823645LLU;

	t46 = (((x201/x202)+x203)%x204);

	if (t46 != 18446584090140548981LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x206 = -27731008LL;
	int16_t x207 = -375;
	volatile int64_t t47 = 4858124866866LL;

	t47 = (((x205/x206)+x207)%x208);

	if (t47 != -51LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x209 = 467179582U;
	int8_t x210 = -1;
	int64_t x211 = -1LL;
	static volatile int32_t x212 = 118672;
	volatile int64_t t48 = 727759297239912LL;

	t48 = (((x209/x210)+x211)%x212);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x213 = -1;
	static volatile int16_t x214 = 237;
	static int32_t x215 = INT32_MAX;
	int8_t x216 = -3;

	t49 = (((x213/x214)+x215)%x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MAX;
	static int16_t x218 = -114;
	volatile uint16_t x219 = 5U;
	int32_t x220 = INT32_MAX;
	static volatile int32_t t50 = 3433186;

	t50 = (((x217/x218)+x219)%x220);

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -1152;
	volatile int32_t x223 = -3;
	int8_t x224 = INT8_MAX;
	int32_t t51 = -3;

	t51 = (((x221/x222)+x223)%x224);

	if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x226 = -6844431288751453LL;
	int64_t x227 = INT64_MAX;
	volatile uint32_t x228 = UINT32_MAX;
	static int64_t t52 = 1LL;

	t52 = (((x225/x226)+x227)%x228);

	if (t52 != 2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x234 = INT64_MAX;
	int16_t x235 = -1;
	volatile int64_t x236 = -2240063304LL;
	volatile int64_t t53 = 1915638LL;

	t53 = (((x233/x234)+x235)%x236);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -6;
	volatile int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MIN;
	static int16_t x240 = INT16_MAX;
	volatile int32_t t54 = 12707390;

	t54 = (((x237/x238)+x239)%x240);

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x243 = -5282LL;
	int8_t x244 = 12;
	static int64_t t55 = 13454858626628685LL;

	t55 = (((x241/x242)+x243)%x244);

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x245 = 56U;
	int64_t x246 = INT64_MIN;
	volatile int16_t x247 = 4;
	static volatile uint8_t x248 = UINT8_MAX;
	volatile int64_t t56 = -3174130445133689LL;

	t56 = (((x245/x246)+x247)%x248);

	if (t56 != 4LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = -1;
	static volatile uint8_t x250 = UINT8_MAX;
	uint16_t x251 = 1999U;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t57 = 2907501;

	t57 = (((x249/x250)+x251)%x252);

	if (t57 != 79) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 1334U;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	int64_t x256 = -1LL;

	t58 = (((x253/x254)+x255)%x256);

	if (t58 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MIN;
	uint16_t x259 = 3U;
	int32_t x260 = -1;

	t59 = (((x257/x258)+x259)%x260);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x262 = 122586U;
	int64_t x263 = INT64_MIN;
	uint32_t x264 = 250U;
	int64_t t60 = -706096507633LL;

	t60 = (((x261/x262)+x263)%x264);

	if (t60 != -26LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x265 = UINT64_MAX;
	int16_t x266 = -1;
	volatile int16_t x268 = -268;
	uint64_t t61 = 1583LLU;

	t61 = (((x265/x266)+x267)%x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x270 = 58U;
	uint32_t x271 = 5605U;
	int8_t x272 = INT8_MIN;
	uint32_t t62 = 275U;

	t62 = (((x269/x270)+x271)%x272);

	if (t62 != 4257947321U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x276 = INT64_MIN;
	static int64_t t63 = -15LL;

	t63 = (((x273/x274)+x275)%x276);

	if (t63 != 123LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x277 = -1;
	volatile int32_t x278 = -63792;
	int32_t x279 = INT32_MIN;
	int32_t t64 = 88066;

	t64 = (((x277/x278)+x279)%x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x281 = 61453264331227727LLU;
	int32_t x282 = 11616;
	int16_t x283 = INT16_MIN;
	volatile uint64_t t65 = 116267LLU;

	t65 = (((x281/x282)+x283)%x284);

	if (t65 != 26160076LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x285 = 1U;
	volatile int64_t x286 = INT64_MAX;
	volatile int16_t x287 = INT16_MIN;
	static int16_t x288 = INT16_MAX;
	int64_t t66 = -17007303143099965LL;

	t66 = (((x285/x286)+x287)%x288);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x289 = 58678223950LLU;
	volatile uint32_t x290 = UINT32_MAX;
	int8_t x291 = -1;
	static int8_t x292 = INT8_MAX;
	volatile uint64_t t67 = 34297412742878952LLU;

	t67 = (((x289/x290)+x291)%x292);

	if (t67 != 12LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = 4U;
	int32_t x294 = INT32_MIN;
	volatile int32_t x295 = 120864989;
	int8_t x296 = INT8_MAX;
	static volatile int32_t t68 = -24445;

	t68 = (((x293/x294)+x295)%x296);

	if (t68 != 105) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x297 = 1LLU;
	int16_t x298 = INT16_MAX;
	static int8_t x299 = INT8_MAX;
	static uint8_t x300 = 1U;
	static uint64_t t69 = 741291354LLU;

	t69 = (((x297/x298)+x299)%x300);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = 0;
	int64_t x302 = -4140051LL;
	int32_t x303 = -1;
	volatile int64_t t70 = 8LL;

	t70 = (((x301/x302)+x303)%x304);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x309 = INT32_MIN;
	int16_t x310 = INT16_MIN;
	volatile int64_t x311 = -685623822462695LL;
	int32_t x312 = -31;
	volatile int64_t t71 = 1553814145LL;

	t71 = (((x309/x310)+x311)%x312);

	if (t71 != -17LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = -1;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	int64_t t72 = -125252220LL;

	t72 = (((x313/x314)+x315)%x316);

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x319 = 6448073018LL;
	int8_t x320 = INT8_MIN;

	t73 = (((x317/x318)+x319)%x320);

	if (t73 != 58LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x321 = 2202286642LL;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = -1LL;
	int8_t x324 = -1;

	t74 = (((x321/x322)+x323)%x324);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = INT16_MIN;
	volatile uint64_t x326 = 3474LLU;
	volatile uint64_t x327 = UINT64_MAX;
	int16_t x328 = 4026;
	static uint64_t t75 = 227284477110817LLU;

	t75 = (((x325/x326)+x327)%x328);

	if (t75 != 1693LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x330 = -13;
	int16_t x331 = INT16_MAX;
	volatile int16_t x332 = -1;
	int32_t t76 = 432;

	t76 = (((x329/x330)+x331)%x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MAX;
	uint32_t x334 = UINT32_MAX;
	static int8_t x336 = INT8_MAX;
	int64_t t77 = -1865LL;

	t77 = (((x333/x334)+x335)%x336);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x337 = UINT32_MAX;
	static volatile int64_t x339 = -1LL;
	uint64_t x340 = 3651532390920LLU;
	volatile uint64_t t78 = 13LLU;

	t78 = (((x337/x338)+x339)%x340);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = INT8_MAX;
	int32_t x342 = -4983740;
	int32_t x343 = -1;
	int8_t x344 = -1;

	t79 = (((x341/x342)+x343)%x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int8_t x346 = INT8_MAX;
	static int16_t x347 = INT16_MIN;
	int16_t x348 = -9591;
	volatile int32_t t80 = -4772;

	t80 = (((x345/x346)+x347)%x348);

	if (t80 != -3993) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MIN;
	uint64_t x351 = UINT64_MAX;
	static volatile int8_t x352 = INT8_MIN;
	volatile uint64_t t81 = 1384743953LLU;

	t81 = (((x349/x350)+x351)%x352);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x353 = 7U;
	uint32_t x354 = UINT32_MAX;
	int64_t x356 = 40971974972LL;

	t82 = (((x353/x354)+x355)%x356);

	if (t82 != 1219LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = -1LL;
	int64_t x359 = -1LL;
	volatile int8_t x360 = INT8_MIN;
	volatile int64_t t83 = 4032188LL;

	t83 = (((x357/x358)+x359)%x360);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x361 = 400U;
	int32_t x362 = 151787148;
	uint64_t x363 = 7424248815033162LLU;
	uint64_t t84 = 2135358473333LLU;

	t84 = (((x361/x362)+x363)%x364);

	if (t84 != 7424248815033162LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = 5513306;
	volatile uint16_t x366 = 2305U;
	uint32_t x367 = UINT32_MAX;
	static uint16_t x368 = UINT16_MAX;
	static uint32_t t85 = 5244654U;

	t85 = (((x365/x366)+x367)%x368);

	if (t85 != 2390U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = -1;
	static int16_t x370 = -1;
	static int32_t x372 = 153;
	volatile uint32_t t86 = 1873945U;

	t86 = (((x369/x370)+x371)%x372);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x373 = 59U;
	volatile uint8_t x374 = 23U;
	static uint8_t x375 = 2U;
	int64_t x376 = INT64_MIN;
	volatile int64_t t87 = -223835673249338398LL;

	t87 = (((x373/x374)+x375)%x376);

	if (t87 != 4LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x377 = 6U;
	int8_t x379 = INT8_MIN;

	t88 = (((x377/x378)+x379)%x380);

	if (t88 != -134) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = INT8_MAX;
	int64_t x382 = INT64_MIN;
	int8_t x384 = 43;

	t89 = (((x381/x382)+x383)%x384);

	if (t89 != 40LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = -1LL;
	uint32_t x390 = 64508U;
	static int8_t x391 = -1;
	int32_t x392 = INT32_MAX;
	volatile int64_t t90 = -10452508598LL;

	t90 = (((x389/x390)+x391)%x392);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = 25LLU;
	uint16_t x394 = 432U;
	int16_t x395 = 81;
	int16_t x396 = INT16_MAX;
	uint64_t t91 = 1880636046175566LLU;

	t91 = (((x393/x394)+x395)%x396);

	if (t91 != 81LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x399 = INT32_MIN;
	static uint16_t x400 = 2U;
	int32_t t92 = -232630030;

	t92 = (((x397/x398)+x399)%x400);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x405 = -1LL;
	int64_t x407 = -36096LL;
	volatile int32_t x408 = INT32_MIN;
	int64_t t93 = -26LL;

	t93 = (((x405/x406)+x407)%x408);

	if (t93 != -36096LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x409 = -2;
	volatile int8_t x410 = -3;
	volatile int8_t x412 = INT8_MAX;
	int32_t t94 = 123381;

	t94 = (((x409/x410)+x411)%x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x415 = INT64_MAX;
	int64_t x416 = -149LL;
	volatile int64_t t95 = -234681172832184870LL;

	t95 = (((x413/x414)+x415)%x416);

	if (t95 != 50LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = -14;
	volatile int32_t x418 = -219754584;
	uint64_t x419 = 58289LLU;
	static int16_t x420 = -1;
	uint64_t t96 = 8878282734LLU;

	t96 = (((x417/x418)+x419)%x420);

	if (t96 != 58289LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x421 = 301760U;
	static int32_t x422 = INT32_MAX;
	int16_t x423 = -1;
	uint64_t x424 = 3755528LLU;
	volatile uint64_t t97 = 3271487260012724LLU;

	t97 = (((x421/x422)+x423)%x424);

	if (t97 != 2398791LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x425 = UINT8_MAX;
	volatile int16_t x427 = 466;
	int32_t x428 = 3329408;
	static int32_t t98 = -629687549;

	t98 = (((x425/x426)+x427)%x428);

	if (t98 != 211) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x429 = INT64_MIN;
	volatile uint64_t x430 = 25250297620LLU;
	volatile int16_t x431 = INT16_MIN;
	static uint64_t t99 = 94894LLU;

	t99 = (((x429/x430)+x431)%x432);

	if (t99 != 365244987LLU) { NG(); } else { ; }
	
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

