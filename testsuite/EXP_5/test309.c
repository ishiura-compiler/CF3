#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
int8_t x4 = INT8_MAX;
int64_t x10 = 23LL;
int32_t t2 = 3;
int8_t x15 = -1;
static volatile int32_t x16 = INT32_MIN;
uint32_t x17 = 20501U;
int32_t t4 = -57;
int32_t x24 = -2;
uint16_t x26 = 2280U;
int16_t x28 = 2605;
static uint64_t x34 = UINT64_MAX;
static volatile uint32_t x35 = 24907U;
int8_t x37 = INT8_MIN;
int32_t x39 = 2;
static int32_t t9 = 102418547;
static uint64_t x45 = 71191827169211551LLU;
uint32_t x47 = 5766U;
static int16_t x53 = -1;
uint32_t x54 = 53U;
uint8_t x68 = 1U;
volatile int32_t t16 = 106178;
static volatile int8_t x75 = INT8_MAX;
int32_t t17 = -1;
int32_t t18 = 7413720;
volatile uint16_t x101 = 0U;
static volatile uint16_t x102 = UINT16_MAX;
static volatile uint64_t x115 = UINT64_MAX;
int16_t x117 = -615;
int16_t x119 = 521;
uint8_t x121 = UINT8_MAX;
static uint64_t x122 = 2075388610LLU;
uint32_t x124 = UINT32_MAX;
int32_t t27 = -7923;
volatile int64_t x137 = -1LL;
int8_t x141 = INT8_MIN;
int64_t x145 = 0LL;
static int32_t x148 = -1;
uint8_t x155 = 24U;
int64_t x162 = -877390828483958803LL;
static int64_t x163 = INT64_MIN;
static int32_t t36 = 27414373;
volatile int32_t t37 = 1636807;
uint64_t x177 = UINT64_MAX;
volatile int64_t x180 = INT64_MIN;
static volatile int32_t x185 = INT32_MIN;
uint16_t x186 = UINT16_MAX;
int32_t x190 = INT32_MIN;
int8_t x205 = -6;
volatile uint16_t x206 = 0U;
static volatile int32_t x208 = INT32_MIN;
uint16_t x211 = UINT16_MAX;
volatile int32_t t48 = -708966915;
volatile int32_t x215 = 43265415;
volatile int32_t t49 = 8312;
volatile int32_t x224 = INT32_MIN;
static uint8_t x225 = 6U;
uint32_t x227 = UINT32_MAX;
static int64_t x236 = -144746983280LL;
uint64_t x244 = 272839970531156365LLU;
int32_t x246 = INT32_MIN;
int64_t x252 = INT64_MIN;
static int16_t x256 = -374;
volatile int32_t t58 = 1;
int16_t x265 = INT16_MAX;
static int16_t x287 = -1916;
volatile int8_t x291 = -1;
static uint16_t x294 = UINT16_MAX;
static uint16_t x295 = UINT16_MAX;
uint64_t x298 = 212605601913380931LLU;
uint8_t x308 = 59U;
int32_t x322 = 443832;
int8_t x324 = 8;
int32_t t73 = 37922;
int32_t t74 = -24289;
uint32_t x330 = 1335993U;
static volatile int32_t t75 = 502415343;
static uint16_t x338 = 86U;
int64_t x340 = INT64_MIN;
volatile int32_t t77 = 1778779;
uint32_t x343 = UINT32_MAX;
uint8_t x350 = UINT8_MAX;
int8_t x357 = INT8_MIN;
int16_t x360 = INT16_MIN;
uint16_t x366 = 60U;
int8_t x368 = INT8_MAX;
volatile int32_t t84 = -1133099;
uint8_t x371 = 41U;
static int8_t x373 = INT8_MAX;
int8_t x374 = 1;
uint64_t x378 = 176134LLU;
uint32_t x379 = UINT32_MAX;
int32_t x380 = -1;
uint64_t x389 = 11760337932124478LLU;
int8_t x392 = 2;
static int8_t x395 = -7;
uint16_t x396 = UINT16_MAX;
volatile int32_t t91 = -5;
volatile uint32_t x406 = 1U;
uint32_t x407 = 3818970U;
int32_t t93 = 14167;
int32_t t94 = -859293;
int32_t x415 = INT32_MIN;
uint8_t x418 = 14U;
int32_t t96 = 3;
uint32_t x423 = 5U;
int64_t x430 = -1LL;
uint16_t x433 = 5966U;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int16_t x2 = 0;
	int32_t t0 = -881;

	t0 = (x1<=((x2-x3)&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	int8_t x6 = -1;
	int8_t x7 = -1;
	uint16_t x8 = 14311U;
	int32_t t1 = 23469;

	t1 = (x5<=((x6-x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int32_t x11 = -246409249;
	static int8_t x12 = -1;

	t2 = (x9<=((x10-x11)&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint8_t x14 = 82U;
	int32_t t3 = 10543;

	t3 = (x13<=((x14-x15)&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MAX;

	t4 = (x17<=((x18-x19)&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x22 = -1;
	static uint8_t x23 = 19U;
	static volatile int32_t t5 = -540308;

	t5 = (x21<=((x22-x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	uint64_t x27 = UINT64_MAX;
	int32_t t6 = -1;

	t6 = (x25<=((x26-x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int64_t x30 = -83643594LL;
	volatile int16_t x31 = -1116;
	volatile uint16_t x32 = 471U;
	volatile int32_t t7 = 29346;

	t7 = (x29<=((x30-x31)&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x36 = -1;
	volatile int32_t t8 = 131232282;

	t8 = (x33<=((x34-x35)&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = -1;
	volatile int32_t x40 = 33;

	t9 = (x37<=((x38-x39)&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int32_t x42 = 125459376;
	static int16_t x43 = 5426;
	int32_t x44 = INT32_MIN;
	static volatile int32_t t10 = 2048;

	t10 = (x41<=((x42-x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = INT64_MAX;
	volatile int8_t x48 = 0;
	volatile int32_t t11 = -97;

	t11 = (x45<=((x46-x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int64_t x50 = -1LL;
	uint32_t x51 = 2U;
	uint8_t x52 = 0U;
	volatile int32_t t12 = -213;

	t12 = (x49<=((x50-x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = -1;
	int32_t t13 = 86596;

	t13 = (x53<=((x54-x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	static int8_t x58 = INT8_MIN;
	uint16_t x59 = 7859U;
	static uint64_t x60 = 778775770156LLU;
	volatile int32_t t14 = 0;

	t14 = (x57<=((x58-x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	int64_t x63 = -66897999131478LL;
	uint8_t x64 = 0U;
	volatile int32_t t15 = 98437;

	t15 = (x61<=((x62-x63)&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 23U;
	int8_t x66 = INT8_MAX;
	int8_t x67 = INT8_MIN;

	t16 = (x65<=((x66-x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = 419702LLU;
	int16_t x74 = INT16_MAX;
	static int64_t x76 = INT64_MAX;

	t17 = (x73<=((x74-x75)&x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 33;
	uint32_t x78 = 241188290U;
	uint8_t x79 = 24U;
	int8_t x80 = INT8_MAX;

	t18 = (x77<=((x78-x79)&x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MAX;
	volatile uint16_t x86 = 101U;
	int16_t x87 = 0;
	volatile int64_t x88 = -1LL;
	volatile int32_t t19 = 219;

	t19 = (x85<=((x86-x87)&x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = INT8_MAX;
	int16_t x91 = 1;
	volatile int32_t x92 = INT32_MIN;
	static volatile int32_t t20 = 66043106;

	t20 = (x89<=((x90-x91)&x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = -1;
	int64_t x95 = -1LL;
	int8_t x96 = INT8_MIN;
	int32_t t21 = -159;

	t21 = (x93<=((x94-x95)&x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = 1;
	int64_t x99 = -5610538534006859LL;
	int64_t x100 = INT64_MIN;
	volatile int32_t t22 = -407171846;

	t22 = (x97<=((x98-x99)&x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x103 = 31990101;
	uint8_t x104 = 1U;
	static volatile int32_t t23 = 0;

	t23 = (x101<=((x102-x103)&x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	static int16_t x106 = -4010;
	int8_t x107 = 15;
	int32_t x108 = INT32_MIN;
	static int32_t t24 = -28;

	t24 = (x105<=((x106-x107)&x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 61920U;
	uint16_t x114 = 1U;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t25 = 8257;

	t25 = (x113<=((x114-x115)&x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x118 = 2U;
	int16_t x120 = INT16_MIN;
	volatile int32_t t26 = -488138243;

	t26 = (x117<=((x118-x119)&x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x123 = 40U;

	t27 = (x121<=((x122-x123)&x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 5U;
	int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MIN;
	volatile int8_t x128 = -3;
	int32_t t28 = -11059;

	t28 = (x125<=((x126-x127)&x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MIN;
	volatile int64_t x130 = INT64_MIN;
	int64_t x131 = -1524353LL;
	volatile int32_t x132 = -465140;
	volatile int32_t t29 = -11;

	t29 = (x129<=((x130-x131)&x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x138 = 10;
	int8_t x139 = INT8_MAX;
	int64_t x140 = INT64_MIN;
	volatile int32_t t30 = -1;

	t30 = (x137<=((x138-x139)&x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x142 = -5;
	int8_t x143 = -1;
	uint8_t x144 = 1U;
	int32_t t31 = 48007;

	t31 = (x141<=((x142-x143)&x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = INT32_MAX;
	int64_t x147 = -224LL;
	static volatile int32_t t32 = -10;

	t32 = (x145<=((x146-x147)&x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1;
	volatile uint32_t x150 = 224446890U;
	volatile int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t33 = 550564276;

	t33 = (x149<=((x150-x151)&x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -1;
	static uint8_t x154 = 3U;
	int64_t x156 = -1LL;
	volatile int32_t t34 = -1703;

	t34 = (x153<=((x154-x155)&x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -8;
	volatile int32_t x158 = 7550;
	int64_t x159 = -1LL;
	volatile int64_t x160 = 438578300888834LL;
	int32_t t35 = -705031108;

	t35 = (x157<=((x158-x159)&x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = UINT32_MAX;
	uint16_t x164 = 0U;

	t36 = (x161<=((x162-x163)&x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = -5996006097063713LL;
	int32_t x166 = -1;
	int8_t x167 = INT8_MIN;
	volatile int64_t x168 = INT64_MIN;

	t37 = (x165<=((x166-x167)&x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = -1;
	volatile uint32_t x170 = UINT32_MAX;
	uint16_t x171 = UINT16_MAX;
	uint32_t x172 = 26U;
	volatile int32_t t38 = -1;

	t38 = (x169<=((x170-x171)&x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = 1932U;
	uint64_t x174 = UINT64_MAX;
	volatile int32_t x175 = INT32_MIN;
	static volatile int64_t x176 = INT64_MIN;
	static volatile int32_t t39 = 33;

	t39 = (x173<=((x174-x175)&x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x178 = -3;
	int32_t x179 = -1;
	int32_t t40 = -29;

	t40 = (x177<=((x178-x179)&x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = INT8_MIN;
	static uint64_t x182 = 787304300143540LLU;
	int16_t x183 = INT16_MIN;
	volatile uint16_t x184 = 48U;
	int32_t t41 = 76633;

	t41 = (x181<=((x182-x183)&x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x187 = INT16_MAX;
	static int8_t x188 = INT8_MIN;
	static int32_t t42 = -8;

	t42 = (x185<=((x186-x187)&x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -1LL;
	volatile uint16_t x191 = 0U;
	int32_t x192 = -1;
	volatile int32_t t43 = -802;

	t43 = (x189<=((x190-x191)&x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int64_t x194 = -14LL;
	uint16_t x195 = UINT16_MAX;
	int32_t x196 = 479781083;
	volatile int32_t t44 = -1;

	t44 = (x193<=((x194-x195)&x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x197 = 11683944642397LL;
	int8_t x198 = INT8_MIN;
	volatile int8_t x199 = -1;
	static uint16_t x200 = UINT16_MAX;
	static int32_t t45 = 3426;

	t45 = (x197<=((x198-x199)&x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = 7430;
	uint32_t x202 = 704283612U;
	int32_t x203 = 204513;
	int16_t x204 = -1;
	int32_t t46 = -501499;

	t46 = (x201<=((x202-x203)&x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x207 = -60711;
	volatile int32_t t47 = -543;

	t47 = (x205<=((x206-x207)&x208));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x209 = 242876243;
	volatile uint16_t x210 = 141U;
	int32_t x212 = -41561;

	t48 = (x209<=((x210-x211)&x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x214 = -7;
	int8_t x216 = INT8_MIN;

	t49 = (x213<=((x214-x215)&x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x218 = 11218U;
	int64_t x219 = 21LL;
	int64_t x220 = INT64_MIN;
	volatile int32_t t50 = 1850780;

	t50 = (x217<=((x218-x219)&x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = 0;
	static int32_t x222 = -1772;
	int8_t x223 = INT8_MIN;
	volatile int32_t t51 = -1;

	t51 = (x221<=((x222-x223)&x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x226 = INT8_MIN;
	int64_t x228 = -1LL;
	volatile int32_t t52 = -1043654;

	t52 = (x225<=((x226-x227)&x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = 803329523399LL;
	uint32_t x230 = 10658U;
	int64_t x231 = -16036330292LL;
	uint64_t x232 = UINT64_MAX;
	static volatile int32_t t53 = 209063;

	t53 = (x229<=((x230-x231)&x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = -1;
	static int16_t x234 = 1;
	int64_t x235 = INT64_MAX;
	int32_t t54 = -1;

	t54 = (x233<=((x234-x235)&x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = -1;
	static volatile int16_t x242 = INT16_MIN;
	volatile int32_t x243 = INT32_MIN;
	int32_t t55 = -946;

	t55 = (x241<=((x242-x243)&x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x245 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t56 = 1594;

	t56 = (x245<=((x246-x247)&x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x249 = 18LLU;
	int32_t x250 = -1;
	static uint32_t x251 = 577447452U;
	static int32_t t57 = 3426;

	t57 = (x249<=((x250-x251)&x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x253 = INT16_MAX;
	int64_t x254 = 421197LL;
	static volatile int64_t x255 = INT64_MAX;

	t58 = (x253<=((x254-x255)&x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x261 = UINT8_MAX;
	static int8_t x262 = 0;
	int32_t x263 = 23083256;
	int32_t x264 = INT32_MIN;
	volatile int32_t t59 = -889804;

	t59 = (x261<=((x262-x263)&x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x266 = -14292;
	uint16_t x267 = 1U;
	volatile int8_t x268 = -1;
	int32_t t60 = -2;

	t60 = (x265<=((x266-x267)&x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = 2U;
	uint64_t x270 = UINT64_MAX;
	int64_t x271 = -1LL;
	int16_t x272 = 25;
	static volatile int32_t t61 = -3;

	t61 = (x269<=((x270-x271)&x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x273 = -250278LL;
	int16_t x274 = 7;
	static uint32_t x275 = UINT32_MAX;
	int16_t x276 = -1;
	int32_t t62 = 76;

	t62 = (x273<=((x274-x275)&x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	volatile uint16_t x279 = UINT16_MAX;
	volatile int32_t x280 = INT32_MIN;
	int32_t t63 = -1357;

	t63 = (x277<=((x278-x279)&x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = -6174409;
	int16_t x282 = -1;
	int64_t x283 = -1LL;
	int32_t x284 = -1;
	static volatile int32_t t64 = 519345;

	t64 = (x281<=((x282-x283)&x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = 43290650LL;
	uint32_t x288 = 2351380U;
	int32_t t65 = 1;

	t65 = (x285<=((x286-x287)&x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x289 = 840234LLU;
	uint64_t x290 = 2746048437315926LLU;
	uint64_t x292 = 3613LLU;
	volatile int32_t t66 = -513;

	t66 = (x289<=((x290-x291)&x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = 256U;
	int32_t x296 = -1;
	volatile int32_t t67 = -43;

	t67 = (x293<=((x294-x295)&x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = 1426U;
	volatile int32_t x299 = INT32_MIN;
	uint32_t x300 = 576870502U;
	static volatile int32_t t68 = -678;

	t68 = (x297<=((x298-x299)&x300));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	int32_t t69 = 2288;

	t69 = (x305<=((x306-x307)&x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MAX;
	uint8_t x310 = 0U;
	uint32_t x311 = UINT32_MAX;
	static int8_t x312 = INT8_MAX;
	int32_t t70 = 412646128;

	t70 = (x309<=((x310-x311)&x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t71 = -6097199;

	t71 = (x313<=((x314-x315)&x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x317 = UINT8_MAX;
	static volatile uint16_t x318 = 23244U;
	volatile int16_t x319 = 3545;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t72 = -17375;

	t72 = (x317<=((x318-x319)&x320));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = -1;
	static volatile int64_t x323 = INT64_MAX;

	t73 = (x321<=((x322-x323)&x324));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = INT32_MIN;
	volatile uint16_t x326 = UINT16_MAX;
	uint32_t x327 = UINT32_MAX;
	volatile uint64_t x328 = 257452990626682732LLU;

	t74 = (x325<=((x326-x327)&x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = 1;
	uint64_t x331 = UINT64_MAX;
	static uint32_t x332 = UINT32_MAX;

	t75 = (x329<=((x330-x331)&x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x333 = INT64_MIN;
	static int16_t x334 = -1;
	int16_t x335 = -18;
	uint16_t x336 = UINT16_MAX;
	int32_t t76 = 0;

	t76 = (x333<=((x334-x335)&x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = -1;
	uint32_t x339 = 4U;

	t77 = (x337<=((x338-x339)&x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x341 = INT16_MAX;
	int8_t x342 = -7;
	volatile int64_t x344 = -13283411959LL;
	static int32_t t78 = -35;

	t78 = (x341<=((x342-x343)&x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = INT8_MAX;
	static int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MIN;
	int32_t t79 = -3292;

	t79 = (x345<=((x346-x347)&x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x349 = -8271436278034LL;
	int8_t x351 = INT8_MAX;
	int32_t x352 = INT32_MIN;
	static int32_t t80 = 220059504;

	t80 = (x349<=((x350-x351)&x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x354 = 9;
	uint32_t x355 = 805U;
	uint32_t x356 = 1203003046U;
	int32_t t81 = -388551436;

	t81 = (x353<=((x354-x355)&x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x358 = 40;
	int8_t x359 = INT8_MIN;
	volatile int32_t t82 = -594955;

	t82 = (x357<=((x358-x359)&x360));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x361 = 183986889LLU;
	uint64_t x362 = UINT64_MAX;
	volatile int32_t x363 = 0;
	static uint32_t x364 = 779833283U;
	volatile int32_t t83 = 1;

	t83 = (x361<=((x362-x363)&x364));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x365 = 6343U;
	int16_t x367 = 48;

	t84 = (x365<=((x366-x367)&x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = -386672711086767861LL;
	int32_t x370 = 58907406;
	uint16_t x372 = 2U;
	volatile int32_t t85 = -1;

	t85 = (x369<=((x370-x371)&x372));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x375 = -21;
	int8_t x376 = INT8_MIN;
	int32_t t86 = -64708627;

	t86 = (x373<=((x374-x375)&x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x377 = INT8_MAX;
	int32_t t87 = 150721780;

	t87 = (x377<=((x378-x379)&x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x381 = 4302U;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = INT16_MAX;
	static volatile int32_t t88 = 6;

	t88 = (x381<=((x382-x383)&x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = 1U;
	static int64_t x386 = INT64_MIN;
	volatile int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int32_t t89 = -963;

	t89 = (x385<=((x386-x387)&x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MAX;
	static volatile int32_t t90 = 27281904;

	t90 = (x389<=((x390-x391)&x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x393 = 2909;
	int64_t x394 = INT64_MIN;

	t91 = (x393<=((x394-x395)&x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = INT16_MIN;
	static int16_t x402 = INT16_MIN;
	volatile int16_t x403 = -1;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t92 = 27250063;

	t92 = (x401<=((x402-x403)&x404));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x405 = INT64_MAX;
	int8_t x408 = INT8_MIN;

	t93 = (x405<=((x406-x407)&x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x409 = INT32_MAX;
	static volatile int8_t x410 = -1;
	volatile int16_t x411 = INT16_MIN;
	static uint8_t x412 = UINT8_MAX;

	t94 = (x409<=((x410-x411)&x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x413 = INT16_MIN;
	uint64_t x414 = 390413126546869661LLU;
	int16_t x416 = -738;
	int32_t t95 = 24944;

	t95 = (x413<=((x414-x415)&x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x417 = -1;
	int32_t x419 = -1;
	static uint16_t x420 = UINT16_MAX;

	t96 = (x417<=((x418-x419)&x420));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x421 = 2U;
	volatile uint32_t x422 = 7394561U;
	static uint16_t x424 = 690U;
	int32_t t97 = -408125;

	t97 = (x421<=((x422-x423)&x424));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x429 = 5757351U;
	uint32_t x431 = 70598265U;
	static uint32_t x432 = 15U;
	static int32_t t98 = 118376;

	t98 = (x429<=((x430-x431)&x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x434 = 1U;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 98491609291LLU;
	int32_t t99 = 2;

	t99 = (x433<=((x434-x435)&x436));

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

