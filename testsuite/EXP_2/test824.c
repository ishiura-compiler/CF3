#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
int16_t x5 = -683;
static uint8_t x11 = UINT8_MAX;
static uint32_t x12 = UINT32_MAX;
static uint64_t x15 = 357390562837108862LLU;
static uint16_t x16 = UINT16_MAX;
uint64_t t3 = 10448217632572901LLU;
volatile uint16_t x17 = 236U;
volatile uint64_t x30 = 11LLU;
uint32_t x32 = 8U;
int32_t x34 = 100826390;
volatile uint64_t t8 = 416318266337739363LLU;
volatile int32_t x39 = 404;
int16_t x40 = INT16_MIN;
static volatile int16_t x42 = -1;
int16_t x49 = INT16_MAX;
static uint64_t x52 = UINT64_MAX;
uint64_t t11 = 2460600240LLU;
uint64_t t12 = 125LLU;
static int16_t x59 = -1;
uint16_t x65 = UINT16_MAX;
uint16_t x69 = UINT16_MAX;
int32_t x70 = -1;
uint16_t x71 = 1U;
volatile int32_t t16 = 799;
int64_t x73 = INT64_MAX;
uint8_t x74 = 27U;
int32_t x75 = INT32_MAX;
uint32_t x77 = 13279623U;
volatile uint8_t x79 = 2U;
static uint8_t x84 = UINT8_MAX;
uint32_t x88 = UINT32_MAX;
int32_t x92 = INT32_MIN;
int64_t t21 = 15743LL;
uint64_t x94 = UINT64_MAX;
static uint32_t x98 = 21U;
int32_t x102 = -1;
volatile uint16_t x108 = UINT16_MAX;
int64_t t25 = -5444LL;
int64_t x109 = -2337LL;
volatile uint8_t x112 = 4U;
static int8_t x118 = -1;
int8_t x120 = INT8_MIN;
static int8_t x131 = INT8_MAX;
uint8_t x132 = 1U;
volatile int16_t x139 = 2;
static uint16_t x140 = 1517U;
int16_t x146 = INT16_MIN;
uint16_t x151 = 7964U;
static int8_t x156 = INT8_MIN;
int64_t x166 = -1LL;
volatile int64_t t39 = -30656124LL;
int32_t x175 = -1;
uint64_t t41 = 626796812LLU;
int32_t x179 = INT32_MIN;
int64_t x180 = -4100430324394LL;
volatile int64_t t42 = -2275744318596754421LL;
uint32_t t44 = 232U;
int32_t x189 = -1;
static int64_t t45 = 8122665LL;
volatile int16_t x196 = -249;
int8_t x212 = INT8_MAX;
int16_t x216 = 2046;
volatile uint64_t x217 = UINT64_MAX;
uint16_t x218 = 1U;
int8_t x219 = INT8_MAX;
uint64_t t52 = 895LLU;
int64_t x231 = 545415156113LL;
static int64_t t55 = -53679LL;
int8_t x233 = INT8_MIN;
volatile int64_t x244 = INT64_MAX;
int64_t t59 = 13542381556555758LL;
int16_t x254 = INT16_MAX;
uint8_t x256 = 3U;
int64_t x264 = INT64_MIN;
int32_t x267 = INT32_MAX;
volatile int64_t x271 = INT64_MAX;
static int64_t x279 = -126939640453833LL;
int32_t x285 = INT32_MAX;
uint32_t x288 = 13434184U;
int16_t x296 = -401;
int16_t x304 = INT16_MAX;
volatile uint32_t t72 = 161909711U;
int64_t x306 = INT64_MIN;
int8_t x308 = INT8_MIN;
uint8_t x310 = UINT8_MAX;
int32_t x311 = -1;
uint32_t x321 = 7039U;
uint64_t x325 = UINT64_MAX;
static int16_t x328 = 2;
uint8_t x333 = 1U;
uint64_t t79 = 6LLU;
volatile int16_t x338 = INT16_MIN;
static int64_t x341 = -2623419LL;
int64_t t81 = -187946782740660LL;
static int16_t x345 = INT16_MAX;
uint32_t x355 = UINT32_MAX;
static int8_t x360 = -1;
int64_t x369 = -11640597398392LL;
uint8_t x374 = 6U;
volatile uint32_t x386 = 232216U;
int64_t x390 = INT64_MAX;
int32_t x394 = 279057;
static int16_t x396 = -750;
static uint32_t x404 = 4911U;
uint32_t t95 = 46631U;
volatile int64_t x405 = INT64_MIN;
int32_t x407 = INT32_MIN;
uint32_t x420 = 60750U;


void f0(void) {
	static uint8_t x1 = 13U;
	volatile uint64_t x2 = 9096LLU;
	uint16_t x3 = 1U;
	volatile uint64_t t0 = 59705LLU;

	t0 = ((x1|(x2%x3))%x4);

	if (t0 != 13LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = 20U;
	int64_t x7 = 14068157LL;
	static volatile int32_t x8 = -1;
	int64_t t1 = 1451494105342696229LL;

	t1 = ((x5|(x6%x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 34LLU;
	int32_t x10 = INT32_MAX;
	static volatile uint64_t t2 = 68569302294182LLU;

	t2 = ((x9|(x10%x11))%x12);

	if (t2 != 127LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;

	t3 = ((x13|(x14%x15))%x16);

	if (t3 != 65510LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x18 = 31U;
	int16_t x19 = -1;
	uint64_t x20 = 7LLU;
	uint64_t t4 = 601398LLU;

	t4 = ((x17|(x18%x19))%x20);

	if (t4 != 5LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint16_t x22 = 6U;
	volatile int64_t x23 = 1LL;
	static uint8_t x24 = 23U;
	volatile int64_t t5 = -4751623760LL;

	t5 = ((x21|(x22%x23))%x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = INT64_MAX;
	int16_t x27 = INT16_MAX;
	int8_t x28 = -3;
	static volatile int64_t t6 = -174575773635261529LL;

	t6 = ((x25|(x26%x27))%x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 2;
	static int64_t x31 = -1LL;
	volatile uint64_t t7 = 4015870061768959LLU;

	t7 = ((x29|(x30%x31))%x32);

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MIN;
	volatile int32_t x35 = INT32_MIN;
	uint64_t x36 = 377176084346812606LLU;

	t8 = ((x33|(x34%x35))%x36);

	if (t8 != 342292025062545782LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	volatile int32_t t9 = -1531428;

	t9 = ((x37|(x38%x39))%x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile uint32_t x43 = UINT32_MAX;
	int8_t x44 = INT8_MIN;
	volatile uint32_t t10 = 14311U;

	t10 = ((x41|(x42%x43))%x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = UINT16_MAX;
	uint8_t x51 = UINT8_MAX;

	t11 = ((x49|(x50%x51))%x52);

	if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 1405006411406325LLU;
	uint64_t x54 = 14033265418918LLU;
	int8_t x55 = INT8_MIN;
	static int32_t x56 = INT32_MIN;

	t12 = ((x53|(x54%x55))%x56);

	if (t12 != 1405020701457399LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = 0;
	int64_t x58 = INT64_MIN;
	uint16_t x60 = 4366U;
	volatile int64_t t13 = 4770LL;

	t13 = ((x57|(x58%x59))%x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MIN;
	int32_t x62 = -1;
	volatile uint8_t x63 = 4U;
	volatile uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = -52;

	t14 = ((x61|(x62%x63))%x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = -1LL;
	int64_t x67 = -1LL;
	int8_t x68 = 14;
	volatile int64_t t15 = 7LL;

	t15 = ((x65|(x66%x67))%x68);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x72 = -32334;

	t16 = ((x69|(x70%x71))%x72);

	if (t16 != 867) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x76 = -1;
	static int64_t t17 = -1072203078401949649LL;

	t17 = ((x73|(x74%x75))%x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x78 = -1;
	uint8_t x80 = UINT8_MAX;
	volatile uint32_t t18 = 0U;

	t18 = ((x77|(x78%x79))%x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MIN;
	volatile int64_t t19 = -4985351603292397LL;

	t19 = ((x81|(x82%x83))%x84);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 1608015483485LL;
	int32_t x86 = 2;
	static int64_t x87 = INT64_MIN;
	int64_t t20 = -110LL;

	t20 = ((x85|(x86%x87))%x88);

	if (t20 != 1697715157LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x89 = -4681;
	int64_t x90 = -1LL;
	uint32_t x91 = UINT32_MAX;

	t21 = ((x89|(x90%x91))%x92);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = 31U;
	volatile uint64_t t22 = 32107952LLU;

	t22 = ((x93|(x94%x95))%x96);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -1964;
	int64_t x99 = INT64_MIN;
	volatile int8_t x100 = INT8_MIN;
	int64_t t23 = -1LL;

	t23 = ((x97|(x98%x99))%x100);

	if (t23 != -43LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int32_t x103 = -1;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t24 = 4U;

	t24 = ((x101|(x102%x103))%x104);

	if (t24 != 4294967168U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MIN;
	uint16_t x107 = 19048U;

	t25 = ((x105|(x106%x107))%x108);

	if (t25 != -18504LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = 9LL;
	int16_t x111 = INT16_MIN;
	static volatile int64_t t26 = 36692747866355LL;

	t26 = ((x109|(x110%x111))%x112);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	volatile int32_t x114 = -138;
	int16_t x115 = -93;
	volatile uint16_t x116 = 6U;
	int32_t t27 = 788664223;

	t27 = ((x113|(x114%x115))%x116);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	static uint64_t x119 = 4017342825921LLU;
	static uint64_t t28 = 1177054997921LLU;

	t28 = ((x117|(x118%x119))%x120);

	if (t28 != 18446744072465387934LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -1185766788044LL;
	int32_t x122 = -1;
	int64_t x123 = 3251602149LL;
	uint8_t x124 = UINT8_MAX;
	static int64_t t29 = -24079573050LL;

	t29 = ((x121|(x122%x123))%x124);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 3143U;
	int64_t x126 = 224505LL;
	static int16_t x127 = INT16_MAX;
	uint16_t x128 = UINT16_MAX;
	int64_t t30 = 1LL;

	t30 = ((x125|(x126%x127))%x128);

	if (t30 != 27903LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = 6899;
	int32_t t31 = 391;

	t31 = ((x129|(x130%x131))%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = -1LL;
	int32_t x134 = INT32_MAX;
	int32_t x135 = -3163370;
	int64_t x136 = -26LL;
	int64_t t32 = -10157584109LL;

	t32 = ((x133|(x134%x135))%x136);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = UINT16_MAX;
	int64_t x138 = INT64_MIN;
	int64_t t33 = 2610893LL;

	t33 = ((x137|(x138%x139))%x140);

	if (t33 != 304LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x142 = 50U;
	static int64_t x143 = 68709LL;
	volatile uint32_t x144 = 2035589U;
	int64_t t34 = -6450715166471899LL;

	t34 = ((x141|(x142%x143))%x144);

	if (t34 != -32718LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 136829941513LL;
	uint8_t x147 = 11U;
	uint16_t x148 = 23406U;
	int64_t t35 = 2475801600343105623LL;

	t35 = ((x145|(x146%x147))%x148);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = INT64_MIN;
	int8_t x150 = -1;
	int64_t x152 = INT64_MAX;
	static volatile int64_t t36 = -14397721310538275LL;

	t36 = ((x149|(x150%x151))%x152);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 1;
	volatile uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	static volatile uint32_t t37 = 31661U;

	t37 = ((x153|(x154%x155))%x156);

	if (t37 != 32767U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MIN;
	int16_t x159 = -450;
	uint8_t x160 = 3U;
	volatile int32_t t38 = 3899347;

	t38 = ((x157|(x158%x159))%x160);

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	volatile uint8_t x167 = 40U;
	volatile uint32_t x168 = 596686U;

	t39 = ((x165|(x166%x167))%x168);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	int64_t x171 = -26778179602LL;
	int8_t x172 = INT8_MAX;
	uint64_t t40 = 6135174LLU;

	t40 = ((x169|(x170%x171))%x172);

	if (t40 != 18LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x173 = 5053697816098805464LLU;
	uint32_t x174 = 10U;
	uint64_t x176 = UINT64_MAX;

	t41 = ((x173|(x174%x175))%x176);

	if (t41 != 5053697816098805466LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x177 = 25U;
	int16_t x178 = -1012;

	t42 = ((x177|(x178%x179))%x180);

	if (t42 != 4294966301LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = 23U;
	uint16_t x183 = 10U;
	uint32_t x184 = 1747353U;
	static volatile int64_t t43 = 3LL;

	t43 = ((x181|(x182%x183))%x184);

	if (t43 != -176192LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	static int32_t x186 = 219;
	uint32_t x187 = UINT32_MAX;
	static uint32_t x188 = 48315573U;

	t44 = ((x185|(x186%x187))%x188);

	if (t44 != 43196835U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x190 = 51469;
	int64_t x191 = 3LL;
	uint16_t x192 = 12500U;

	t45 = ((x189|(x190%x191))%x192);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = 0;
	static int16_t x194 = -34;
	int64_t x195 = INT64_MIN;
	int64_t t46 = 1LL;

	t46 = ((x193|(x194%x195))%x196);

	if (t46 != -34LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = -1;
	static int32_t x199 = INT32_MIN;
	static int32_t x200 = -25;
	volatile int64_t t47 = 2LL;

	t47 = ((x197|(x198%x199))%x200);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x201 = 1U;
	int64_t x202 = INT64_MIN;
	int16_t x203 = -13;
	int64_t x204 = 223997LL;
	int64_t t48 = -9516829LL;

	t48 = ((x201|(x202%x203))%x204);

	if (t48 != -7LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x205 = INT16_MIN;
	static uint8_t x206 = 92U;
	int8_t x207 = -25;
	uint64_t x208 = 10795LLU;
	uint64_t t49 = 22672319816687465LLU;

	t49 = ((x205|(x206%x207))%x208);

	if (t49 != 10685LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x209 = -1LL;
	int64_t x210 = 36LL;
	uint16_t x211 = 1436U;
	static int64_t t50 = -12641060LL;

	t50 = ((x209|(x210%x211))%x212);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -8156LL;
	static int64_t x214 = INT64_MIN;
	int32_t x215 = -1;
	int64_t t51 = 5928222LL;

	t51 = ((x213|(x214%x215))%x216);

	if (t51 != -2018LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x220 = 849335U;

	t52 = ((x217|(x218%x219))%x220);

	if (t52 != 586905LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x221 = 367362U;
	int32_t x222 = 30296950;
	int16_t x223 = INT16_MIN;
	static int32_t x224 = INT32_MIN;
	volatile uint32_t t53 = 9U;

	t53 = ((x221|(x222%x223))%x224);

	if (t53 != 383862U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = 168;
	int32_t x226 = 4095;
	uint8_t x227 = 1U;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t54 = 2U;

	t54 = ((x225|(x226%x227))%x228);

	if (t54 != 168U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	int16_t x230 = INT16_MAX;
	volatile int32_t x232 = INT32_MIN;

	t55 = ((x229|(x230%x231))%x232);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x234 = INT8_MIN;
	volatile int64_t x235 = 122229LL;
	static int64_t x236 = INT64_MAX;
	volatile int64_t t56 = 0LL;

	t56 = ((x233|(x234%x235))%x236);

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x237 = INT32_MAX;
	int16_t x238 = INT16_MIN;
	volatile int32_t x239 = 60016684;
	int16_t x240 = -155;
	volatile int32_t t57 = -657011102;

	t57 = ((x237|(x238%x239))%x240);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MAX;
	uint32_t x242 = 25116750U;
	uint16_t x243 = 3824U;
	int64_t t58 = -3362561493891743LL;

	t58 = ((x241|(x242%x243))%x244);

	if (t58 != 2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = 2;
	int64_t x246 = -77LL;
	volatile int8_t x247 = -1;
	static uint16_t x248 = 2U;

	t59 = ((x245|(x246%x247))%x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x249 = -1LL;
	static uint64_t x250 = UINT64_MAX;
	volatile int8_t x251 = INT8_MIN;
	int16_t x252 = 6;
	volatile uint64_t t60 = 867215720361405LLU;

	t60 = ((x249|(x250%x251))%x252);

	if (t60 != 3LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x253 = 1U;
	uint64_t x255 = 1188800996178108LLU;
	uint64_t t61 = 5985LLU;

	t61 = ((x253|(x254%x255))%x256);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = -1;
	uint32_t x259 = 520160U;
	static int8_t x260 = -1;
	static uint32_t t62 = 740U;

	t62 = ((x257|(x258%x259))%x260);

	if (t62 != 4294940703U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	static int8_t x262 = -1;
	int8_t x263 = -1;
	int64_t t63 = -371825271562LL;

	t63 = ((x261|(x262%x263))%x264);

	if (t63 != 255LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = -1;
	static volatile uint64_t x266 = 75134834LLU;
	volatile int32_t x268 = INT32_MIN;
	volatile uint64_t t64 = 84835359576569LLU;

	t64 = ((x265|(x266%x267))%x268);

	if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = 7352;
	int64_t x270 = 38739194673598997LL;
	int64_t x272 = -410LL;
	int64_t t65 = -1618794LL;

	t65 = ((x269|(x270%x271))%x272);

	if (t65 != 217LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = 7628U;
	int64_t x274 = 34712257489289181LL;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MAX;
	volatile int64_t t66 = -2867928695520810468LL;

	t66 = ((x273|(x274%x275))%x276);

	if (t66 != 1098620926LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = UINT64_MAX;
	int64_t x278 = -1LL;
	int32_t x280 = INT32_MAX;
	volatile uint64_t t67 = 688780536223287LLU;

	t67 = ((x277|(x278%x279))%x280);

	if (t67 != 3LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = -1LL;
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile uint64_t t68 = 4674596LLU;

	t68 = ((x281|(x282%x283))%x284);

	if (t68 != 128LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x286 = INT16_MIN;
	static uint16_t x287 = 62U;
	volatile uint32_t t69 = 17U;

	t69 = ((x285|(x286%x287))%x288);

	if (t69 != 9462599U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 14661U;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MAX;
	uint32_t t70 = 239U;

	t70 = ((x289|(x290%x291))%x292);

	if (t70 != 14661U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x293 = -1;
	static int64_t x294 = -87399854374043LL;
	uint16_t x295 = 597U;
	int64_t t71 = 12LL;

	t71 = ((x293|(x294%x295))%x296);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x301 = UINT16_MAX;
	uint32_t x302 = 247205038U;
	static uint32_t x303 = 2538U;

	t72 = ((x301|(x302%x303))%x304);

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x305 = 3144U;
	uint16_t x307 = UINT16_MAX;
	int64_t t73 = 6187762615LL;

	t73 = ((x305|(x306%x307))%x308);

	if (t73 != -56LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 36U;
	int32_t x312 = 5;
	volatile int32_t t74 = -146672;

	t74 = ((x309|(x310%x311))%x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x313 = 1;
	static int64_t x314 = INT64_MAX;
	uint8_t x315 = UINT8_MAX;
	volatile uint64_t x316 = 6LLU;
	uint64_t t75 = 710560328774268LLU;

	t75 = ((x313|(x314%x315))%x316);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x322 = INT16_MAX;
	uint64_t x323 = 59LLU;
	static uint32_t x324 = 3464652U;
	volatile uint64_t t76 = 268827328496604LLU;

	t76 = ((x321|(x322%x323))%x324);

	if (t76 != 7039LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x326 = -1;
	uint8_t x327 = UINT8_MAX;
	static volatile uint64_t t77 = 12208LLU;

	t77 = ((x325|(x326%x327))%x328);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x329 = 63U;
	int32_t x330 = INT32_MAX;
	int8_t x331 = INT8_MIN;
	volatile int8_t x332 = INT8_MIN;
	int32_t t78 = -39409433;

	t78 = ((x329|(x330%x331))%x332);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = INT64_MIN;
	uint16_t x335 = 28524U;
	uint64_t x336 = 282295LLU;

	t79 = ((x333|(x334%x335))%x336);

	if (t79 != 39206LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 462332LLU;
	static uint64_t x339 = 2669621413LLU;
	int16_t x340 = -38;
	volatile uint64_t t80 = 242910369919155LLU;

	t80 = ((x337|(x338%x339))%x340);

	if (t80 != 738713598LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x342 = -478851024;
	int16_t x343 = INT16_MAX;
	uint8_t x344 = UINT8_MAX;

	t81 = ((x341|(x342%x343))%x344);

	if (t81 != -161LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x346 = UINT8_MAX;
	uint8_t x347 = UINT8_MAX;
	uint8_t x348 = 61U;
	int32_t t82 = 456;

	t82 = ((x345|(x346%x347))%x348);

	if (t82 != 10) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 15U;
	uint8_t x350 = 39U;
	static int64_t x351 = 671041808988656LL;
	static uint32_t x352 = UINT32_MAX;
	static int64_t t83 = 85945198LL;

	t83 = ((x349|(x350%x351))%x352);

	if (t83 != 47LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	volatile int8_t x356 = INT8_MAX;
	volatile uint32_t t84 = 1002U;

	t84 = ((x353|(x354%x355))%x356);

	if (t84 != 15U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x357 = 135949219276143733LLU;
	int16_t x358 = INT16_MAX;
	int64_t x359 = 1LL;
	uint64_t t85 = 4LLU;

	t85 = ((x357|(x358%x359))%x360);

	if (t85 != 135949219276143733LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x365 = 387204356U;
	static int16_t x366 = -11712;
	int32_t x367 = INT32_MIN;
	volatile uint8_t x368 = UINT8_MAX;
	volatile uint32_t t86 = 8025U;

	t86 = ((x365|(x366%x367))%x368);

	if (t86 != 28U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x370 = 5702U;
	uint16_t x371 = 6655U;
	volatile uint16_t x372 = 50U;
	volatile int64_t t87 = 206128LL;

	t87 = ((x369|(x370%x371))%x372);

	if (t87 != -10LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = 0;
	volatile uint64_t x375 = 50033758847LLU;
	int16_t x376 = INT16_MAX;
	volatile uint64_t t88 = 33530578865870764LLU;

	t88 = ((x373|(x374%x375))%x376);

	if (t88 != 6LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = INT8_MIN;
	static volatile int32_t x378 = -2762751;
	uint32_t x379 = 2624U;
	int16_t x380 = -91;
	uint32_t t89 = 87876034U;

	t89 = ((x377|(x378%x379))%x380);

	if (t89 != 4294967169U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x381 = 0;
	volatile int8_t x382 = -1;
	int16_t x383 = INT16_MIN;
	uint16_t x384 = 2U;
	volatile int32_t t90 = 7937;

	t90 = ((x381|(x382%x383))%x384);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x387 = -1;
	uint64_t x388 = UINT64_MAX;
	static volatile uint64_t t91 = 1904LLU;

	t91 = ((x385|(x386%x387))%x388);

	if (t91 != 4294967295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MAX;
	int16_t x391 = INT16_MAX;
	volatile int16_t x392 = INT16_MAX;
	volatile int64_t t92 = 11655430355LL;

	t92 = ((x389|(x390%x391))%x392);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x393 = UINT16_MAX;
	volatile int8_t x395 = INT8_MIN;
	int32_t t93 = 1;

	t93 = ((x393|(x394%x395))%x396);

	if (t93 != 285) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = 0;
	uint8_t x398 = 9U;
	static int64_t x399 = -1LL;
	int32_t x400 = INT32_MIN;
	int64_t t94 = -52246101LL;

	t94 = ((x397|(x398%x399))%x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x401 = INT16_MIN;
	int32_t x402 = -1;
	static int8_t x403 = -27;

	t95 = ((x401|(x402%x403))%x404);

	if (t95 != 3135U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x406 = 63U;
	int16_t x408 = INT16_MAX;
	static int64_t t96 = -306310736191744502LL;

	t96 = ((x405|(x406%x407))%x408);

	if (t96 != -32712LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = -1;
	static volatile int64_t x410 = -1LL;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = 4994LLU;
	uint64_t t97 = 209LLU;

	t97 = ((x409|(x410%x411))%x412);

	if (t97 != 103LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x413 = INT8_MIN;
	static uint64_t x414 = UINT64_MAX;
	int64_t x415 = -1LL;
	int8_t x416 = -3;
	uint64_t t98 = 4681LLU;

	t98 = ((x413|(x414%x415))%x416);

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MIN;
	volatile int8_t x419 = INT8_MIN;
	int64_t t99 = 339156751742404856LL;

	t99 = ((x417|(x418%x419))%x420);

	if (t99 != -22058LL) { NG(); } else { ; }
	
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

