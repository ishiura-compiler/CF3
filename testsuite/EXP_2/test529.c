#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
volatile uint16_t x3 = 92U;
int32_t t1 = -1056;
int16_t x24 = 177;
uint8_t x26 = 1U;
volatile int32_t t6 = 17765;
int32_t x29 = -1;
int32_t x30 = -1;
volatile int64_t x31 = -1LL;
int32_t x34 = -219375;
int32_t t11 = 28959152;
int32_t x50 = -186566;
uint64_t x52 = 220343511374964LLU;
volatile int32_t t13 = 8489;
uint32_t x61 = 10U;
int8_t x69 = INT8_MIN;
int32_t t17 = 53493;
uint16_t x78 = UINT16_MAX;
int64_t x80 = -10801598LL;
uint32_t x87 = UINT32_MAX;
volatile int32_t t20 = 47;
int8_t x92 = -16;
volatile int32_t t25 = -24580;
int32_t x111 = INT32_MAX;
int32_t x113 = INT32_MAX;
int32_t x114 = -1;
uint32_t x118 = 15333U;
int64_t x120 = -3786647LL;
volatile int16_t x125 = -1;
int16_t x136 = INT16_MIN;
uint16_t x137 = 1725U;
volatile int32_t t34 = -36;
uint64_t x145 = 1066428826364LLU;
static int16_t x147 = INT16_MAX;
uint64_t x150 = 687637478512401054LLU;
int32_t t37 = 404246931;
int32_t t38 = 179290922;
uint32_t x165 = 131065759U;
static int64_t x167 = -1LL;
uint32_t x169 = 26679419U;
int16_t x177 = 714;
uint32_t x186 = UINT32_MAX;
static uint8_t x194 = 3U;
static volatile int32_t t47 = 40;
uint16_t x199 = UINT16_MAX;
static int32_t t48 = 4;
static uint32_t x205 = 439U;
int64_t x206 = INT64_MAX;
volatile int16_t x211 = INT16_MIN;
int64_t x214 = 3602524618832177130LL;
static uint16_t x220 = 0U;
uint8_t x221 = UINT8_MAX;
int8_t x227 = -2;
int32_t x229 = INT32_MAX;
static int64_t x234 = 15056LL;
static volatile uint64_t x239 = 76427LLU;
static volatile uint16_t x243 = 3903U;
uint64_t x245 = 1053344958LLU;
static int8_t x247 = -1;
int32_t t61 = -13558541;
uint64_t x264 = UINT64_MAX;
volatile int32_t t64 = -108016;
uint8_t x272 = 48U;
uint64_t x275 = 343212LLU;
int32_t t66 = 3533;
int64_t x279 = INT64_MIN;
int16_t x281 = INT16_MAX;
static uint16_t x283 = 249U;
int16_t x292 = INT16_MAX;
int32_t t70 = -72;
static volatile int32_t t71 = 303918;
volatile uint8_t x304 = 2U;
uint16_t x311 = 117U;
uint16_t x318 = UINT16_MAX;
int16_t x322 = -2156;
uint16_t x328 = 17393U;
uint8_t x330 = 2U;
volatile int64_t x331 = INT64_MIN;
static uint32_t x346 = 12U;
int64_t x347 = INT64_MAX;
volatile int32_t t84 = 0;
int32_t x356 = INT32_MIN;
static int32_t x360 = -1;
int32_t x365 = INT32_MIN;
uint32_t x369 = UINT32_MAX;
uint8_t x372 = UINT8_MAX;
static int16_t x379 = INT16_MIN;
volatile int32_t x380 = INT32_MIN;
static int64_t x381 = 949391612419301LL;
int64_t x384 = INT64_MIN;
int16_t x385 = INT16_MAX;
volatile int8_t x391 = -4;
int32_t x394 = 8910;
int32_t x397 = INT32_MIN;
int8_t x405 = -45;
volatile uint32_t x406 = 357U;
volatile int64_t x407 = INT64_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	static int32_t x4 = INT32_MIN;
	static int32_t t0 = -23443529;

	t0 = ((x1-(x2/x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -3;
	static int8_t x6 = -1;
	static uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MIN;

	t1 = ((x5-(x6/x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	static uint32_t x11 = UINT32_MAX;
	static int64_t x12 = INT64_MAX;
	volatile int32_t t2 = 1;

	t2 = ((x9-(x10/x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int16_t x14 = 57;
	static int8_t x15 = 1;
	uint16_t x16 = 122U;
	volatile int32_t t3 = 3082516;

	t3 = ((x13-(x14/x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	static int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = 69U;
	int32_t t4 = -3;

	t4 = ((x17-(x18/x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 34836LLU;
	volatile int32_t x22 = INT32_MIN;
	static uint8_t x23 = 7U;
	volatile int32_t t5 = 138;

	t5 = ((x21-(x22/x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MAX;

	t6 = ((x25-(x26/x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x32 = 44U;
	volatile int32_t t7 = -16;

	t7 = ((x29-(x30/x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 2010;
	static int64_t x35 = INT64_MIN;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = -176;

	t8 = ((x33-(x34/x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = -711330880162LL;
	int64_t x39 = -62837848111LL;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -473;

	t9 = ((x37-(x38/x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 12U;
	static int64_t x42 = -71891053455402563LL;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 124U;
	int32_t t10 = 314679784;

	t10 = ((x41-(x42/x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	volatile int32_t x46 = -1;
	int8_t x47 = -12;
	static volatile int16_t x48 = INT16_MAX;

	t11 = ((x45-(x46/x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 1;
	static int64_t x51 = INT64_MIN;
	int32_t t12 = 445;

	t12 = ((x49-(x50/x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int16_t x54 = -1;
	int32_t x55 = -1;
	int32_t x56 = 227009296;

	t13 = ((x53-(x54/x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -1;
	volatile int32_t x58 = 20;
	int16_t x59 = 2398;
	static int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 24640022;

	t14 = ((x57-(x58/x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -1;
	int32_t x63 = -1260446;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 202137;

	t15 = ((x61-(x62/x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	static int16_t x66 = -1;
	volatile int32_t x67 = -13306;
	int16_t x68 = INT16_MAX;
	int32_t t16 = -872716;

	t16 = ((x65-(x66/x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 0U;
	volatile int16_t x71 = INT16_MAX;
	static int16_t x72 = -1837;

	t17 = ((x69-(x70/x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int32_t x74 = 16785;
	volatile int64_t x75 = INT64_MAX;
	uint8_t x76 = 38U;
	int32_t t18 = 7421477;

	t18 = ((x73-(x74/x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	static int16_t x79 = INT16_MIN;
	static int32_t t19 = -267544417;

	t19 = ((x77-(x78/x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	int64_t x86 = -1LL;
	int64_t x88 = INT64_MAX;

	t20 = ((x85-(x86/x87))<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	int8_t x90 = -1;
	int64_t x91 = INT64_MIN;
	volatile int32_t t21 = -169203;

	t21 = ((x89-(x90/x91))<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 255084955U;
	int64_t x94 = INT64_MIN;
	int64_t x95 = 3663LL;
	int8_t x96 = 0;
	volatile int32_t t22 = -2049;

	t22 = ((x93-(x94/x95))<x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = INT32_MIN;
	static uint64_t x99 = UINT64_MAX;
	int64_t x100 = INT64_MAX;
	static int32_t t23 = -391670;

	t23 = ((x97-(x98/x99))<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 1U;
	int32_t x102 = INT32_MAX;
	volatile uint8_t x103 = 103U;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t24 = 676738209;

	t24 = ((x101-(x102/x103))<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	volatile int16_t x106 = 1;
	int32_t x107 = -61455372;
	static int32_t x108 = -214879368;

	t25 = ((x105-(x106/x107))<x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MIN;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t26 = -1;

	t26 = ((x109-(x110/x111))<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x115 = INT8_MIN;
	int16_t x116 = 666;
	int32_t t27 = 32342028;

	t27 = ((x113-(x114/x115))<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = -1;
	int16_t x119 = -1;
	volatile int32_t t28 = -14978;

	t28 = ((x117-(x118/x119))<x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MAX;
	int32_t x124 = INT32_MIN;
	volatile int32_t t29 = -176587;

	t29 = ((x121-(x122/x123))<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x126 = INT8_MIN;
	static int16_t x127 = -1;
	int32_t x128 = 6;
	static volatile int32_t t30 = 5;

	t30 = ((x125-(x126/x127))<x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 2625998391797009LLU;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = 3U;
	int64_t x132 = -93456454329697LL;
	volatile int32_t t31 = 916052929;

	t31 = ((x129-(x130/x131))<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = -929;
	volatile int16_t x135 = 4218;
	int32_t t32 = -12908;

	t32 = ((x133-(x134/x135))<x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x138 = 54U;
	static int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t33 = 25197;

	t33 = ((x137-(x138/x139))<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x141 = 33U;
	static uint8_t x142 = UINT8_MAX;
	int8_t x143 = INT8_MIN;
	volatile uint64_t x144 = 1228356401245715LLU;

	t34 = ((x141-(x142/x143))<x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MIN;
	static int8_t x148 = INT8_MAX;
	static volatile int32_t t35 = -975285493;

	t35 = ((x145-(x146/x147))<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -1107275;
	uint16_t x151 = UINT16_MAX;
	static volatile uint8_t x152 = 29U;
	volatile int32_t t36 = 109454;

	t36 = ((x149-(x150/x151))<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	volatile int64_t x154 = 1184347341363547914LL;
	volatile int16_t x155 = INT16_MAX;
	static uint8_t x156 = 10U;

	t37 = ((x153-(x154/x155))<x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = 9473832;
	int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MAX;

	t38 = ((x157-(x158/x159))<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = 46;
	int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MIN;
	static int64_t x164 = INT64_MIN;
	volatile int32_t t39 = -517;

	t39 = ((x161-(x162/x163))<x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x166 = -1;
	static int16_t x168 = INT16_MIN;
	int32_t t40 = 11;

	t40 = ((x165-(x166/x167))<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x170 = 7U;
	volatile int32_t x171 = 117;
	int32_t x172 = -233934;
	volatile int32_t t41 = 5397;

	t41 = ((x169-(x170/x171))<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x173 = 17U;
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = -1;
	volatile uint8_t x176 = 7U;
	volatile int32_t t42 = -4;

	t42 = ((x173-(x174/x175))<x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x178 = UINT8_MAX;
	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t43 = 4;

	t43 = ((x177-(x178/x179))<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	uint16_t x183 = 23U;
	uint32_t x184 = UINT32_MAX;
	int32_t t44 = -159874277;

	t44 = ((x181-(x182/x183))<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = INT64_MAX;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t45 = -4807485;

	t45 = ((x185-(x186/x187))<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 1U;
	static int64_t x190 = -1LL;
	volatile int64_t x191 = INT64_MIN;
	static uint16_t x192 = 4U;
	static volatile int32_t t46 = 36;

	t46 = ((x189-(x190/x191))<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 26U;
	uint8_t x195 = 60U;
	volatile uint16_t x196 = 5414U;

	t47 = ((x193-(x194/x195))<x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x197 = -1;
	static int8_t x198 = INT8_MIN;
	int16_t x200 = -1;

	t48 = ((x197-(x198/x199))<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 24939963LLU;
	int64_t x202 = -60LL;
	int32_t x203 = -1;
	int8_t x204 = INT8_MAX;
	volatile int32_t t49 = 29996502;

	t49 = ((x201-(x202/x203))<x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x207 = 6539U;
	int32_t x208 = 10;
	static volatile int32_t t50 = 7581302;

	t50 = ((x205-(x206/x207))<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t51 = 4;

	t51 = ((x209-(x210/x211))<x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = INT64_MIN;
	int16_t x215 = -1;
	volatile uint64_t x216 = 4LLU;
	static volatile int32_t t52 = -34973843;

	t52 = ((x213-(x214/x215))<x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = 15;
	static int16_t x218 = INT16_MIN;
	uint16_t x219 = 15101U;
	volatile int32_t t53 = -124554756;

	t53 = ((x217-(x218/x219))<x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x222 = 3U;
	int32_t x223 = INT32_MIN;
	int16_t x224 = 0;
	static int32_t t54 = 38;

	t54 = ((x221-(x222/x223))<x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = -3;
	static uint16_t x226 = 3U;
	volatile int32_t x228 = -1;
	volatile int32_t t55 = -11;

	t55 = ((x225-(x226/x227))<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x230 = INT16_MIN;
	volatile int32_t x231 = 870931;
	static int64_t x232 = -1LL;
	int32_t t56 = 11639;

	t56 = ((x229-(x230/x231))<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = INT8_MAX;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = INT16_MAX;
	int32_t t57 = 702;

	t57 = ((x233-(x234/x235))<x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 405344775265LLU;
	int16_t x238 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	int32_t t58 = 178405841;

	t58 = ((x237-(x238/x239))<x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = -31309;
	int8_t x242 = INT8_MIN;
	int16_t x244 = INT16_MAX;
	volatile int32_t t59 = -3;

	t59 = ((x241-(x242/x243))<x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x246 = 93U;
	static uint32_t x248 = 166U;
	int32_t t60 = 560162;

	t60 = ((x245-(x246/x247))<x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = 339;
	uint8_t x250 = 7U;
	int64_t x251 = -1LL;
	static int32_t x252 = INT32_MIN;

	t61 = ((x249-(x250/x251))<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = 1U;
	int16_t x258 = -107;
	int8_t x259 = INT8_MIN;
	int32_t x260 = -1;
	volatile int32_t t62 = 33042399;

	t62 = ((x257-(x258/x259))<x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x261 = 18960U;
	uint16_t x262 = 8U;
	volatile int32_t x263 = INT32_MAX;
	static volatile int32_t t63 = -7920;

	t63 = ((x261-(x262/x263))<x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x265 = 107U;
	int8_t x266 = -1;
	volatile uint32_t x267 = 531208629U;
	static uint32_t x268 = 1U;

	t64 = ((x265-(x266/x267))<x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = UINT16_MAX;
	int32_t x270 = -1;
	int8_t x271 = 1;
	int32_t t65 = -218782967;

	t65 = ((x269-(x270/x271))<x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x273 = INT8_MIN;
	uint8_t x274 = 54U;
	int16_t x276 = -14;

	t66 = ((x273-(x274/x275))<x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = 109;
	uint16_t x278 = UINT16_MAX;
	int8_t x280 = INT8_MAX;
	volatile int32_t t67 = -32974350;

	t67 = ((x277-(x278/x279))<x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x282 = 2U;
	int32_t x284 = INT32_MIN;
	volatile int32_t t68 = 54;

	t68 = ((x281-(x282/x283))<x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = 13740U;
	volatile uint64_t x286 = UINT64_MAX;
	int16_t x287 = INT16_MAX;
	int8_t x288 = 4;
	volatile int32_t t69 = 2015;

	t69 = ((x285-(x286/x287))<x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = -1LL;
	uint16_t x290 = 1118U;
	int64_t x291 = INT64_MIN;

	t70 = ((x289-(x290/x291))<x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = 3U;
	uint32_t x294 = 173728805U;
	int8_t x295 = INT8_MAX;
	int8_t x296 = 1;

	t71 = ((x293-(x294/x295))<x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x298 = -1;
	int32_t x299 = 1;
	int64_t x300 = INT64_MIN;
	volatile int32_t t72 = -20358307;

	t72 = ((x297-(x298/x299))<x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x301 = 31690U;
	static int16_t x302 = 0;
	int16_t x303 = -4;
	static int32_t t73 = 840891;

	t73 = ((x301-(x302/x303))<x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = 1038006;
	static uint32_t x306 = UINT32_MAX;
	uint8_t x307 = UINT8_MAX;
	int32_t x308 = INT32_MAX;
	volatile int32_t t74 = 32245;

	t74 = ((x305-(x306/x307))<x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 8U;
	uint64_t x310 = 511LLU;
	static int16_t x312 = 51;
	int32_t t75 = -862;

	t75 = ((x309-(x310/x311))<x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = -345657099LL;
	int64_t x315 = 89307200032812731LL;
	uint16_t x316 = 7968U;
	static int32_t t76 = -1;

	t76 = ((x313-(x314/x315))<x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x317 = UINT16_MAX;
	static uint8_t x319 = 49U;
	volatile uint32_t x320 = UINT32_MAX;
	int32_t t77 = 190330641;

	t77 = ((x317-(x318/x319))<x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MAX;
	static volatile int32_t t78 = 3307;

	t78 = ((x321-(x322/x323))<x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = -670;
	uint64_t x326 = 115097786737480714LLU;
	volatile int32_t x327 = -1;
	volatile int32_t t79 = -453999;

	t79 = ((x325-(x326/x327))<x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -2;
	int16_t x332 = -1;
	static volatile int32_t t80 = 6559579;

	t80 = ((x329-(x330/x331))<x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = 0U;
	volatile int64_t x335 = INT64_MAX;
	int16_t x336 = -1;
	volatile int32_t t81 = 3;

	t81 = ((x333-(x334/x335))<x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = UINT8_MAX;
	int8_t x338 = INT8_MIN;
	volatile int64_t x339 = INT64_MAX;
	uint64_t x340 = 1LLU;
	volatile int32_t t82 = -1260;

	t82 = ((x337-(x338/x339))<x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x341 = 1231959U;
	int32_t x342 = -35;
	uint8_t x343 = UINT8_MAX;
	static volatile uint32_t x344 = UINT32_MAX;
	volatile int32_t t83 = 490703306;

	t83 = ((x341-(x342/x343))<x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = INT64_MIN;
	uint8_t x348 = 3U;

	t84 = ((x345-(x346/x347))<x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = 121U;
	int64_t x350 = -1LL;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = -1;
	int32_t t85 = -232;

	t85 = ((x349-(x350/x351))<x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 4U;
	int32_t x354 = -138959;
	int64_t x355 = INT64_MAX;
	volatile int32_t t86 = 606;

	t86 = ((x353-(x354/x355))<x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x357 = -1;
	int32_t x358 = -1;
	volatile uint8_t x359 = UINT8_MAX;
	int32_t t87 = 1851;

	t87 = ((x357-(x358/x359))<x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = 0;
	static volatile int16_t x362 = -1;
	static uint16_t x363 = UINT16_MAX;
	int64_t x364 = INT64_MAX;
	static volatile int32_t t88 = -12032727;

	t88 = ((x361-(x362/x363))<x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x366 = -1LL;
	uint32_t x367 = UINT32_MAX;
	static volatile uint16_t x368 = 1U;
	int32_t t89 = -5043582;

	t89 = ((x365-(x366/x367))<x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x370 = 23U;
	int8_t x371 = -1;
	int32_t t90 = -46168;

	t90 = ((x369-(x370/x371))<x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MIN;
	static uint16_t x374 = 168U;
	volatile int16_t x375 = -2;
	volatile int64_t x376 = INT64_MIN;
	int32_t t91 = 139246813;

	t91 = ((x373-(x374/x375))<x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x377 = -1LL;
	uint64_t x378 = 932383250084291298LLU;
	int32_t t92 = -109060087;

	t92 = ((x377-(x378/x379))<x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x382 = INT16_MAX;
	volatile uint64_t x383 = 1683050322883544LLU;
	static volatile int32_t t93 = -4051;

	t93 = ((x381-(x382/x383))<x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x386 = INT32_MAX;
	volatile uint8_t x387 = 43U;
	volatile int8_t x388 = -1;
	volatile int32_t t94 = 495991;

	t94 = ((x385-(x386/x387))<x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = INT64_MAX;
	uint64_t x390 = UINT64_MAX;
	static volatile int16_t x392 = 2;
	int32_t t95 = -15376950;

	t95 = ((x389-(x390/x391))<x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MAX;
	int64_t x395 = 5LL;
	int8_t x396 = -1;
	volatile int32_t t96 = -375;

	t96 = ((x393-(x394/x395))<x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = INT32_MAX;
	uint32_t x399 = UINT32_MAX;
	static int32_t x400 = -627210;
	static volatile int32_t t97 = 3568;

	t97 = ((x397-(x398/x399))<x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = -1;
	uint16_t x402 = 13U;
	volatile uint16_t x403 = 1875U;
	static int32_t x404 = INT32_MIN;
	int32_t t98 = 8;

	t98 = ((x401-(x402/x403))<x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x408 = -1LL;
	int32_t t99 = -444059606;

	t99 = ((x405-(x406/x407))<x408);

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

