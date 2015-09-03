#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = 28998U;
static uint16_t x12 = UINT16_MAX;
volatile int32_t t3 = 1222181;
static uint8_t x25 = 1U;
static int16_t x30 = INT16_MIN;
volatile uint8_t x31 = 1U;
int32_t x34 = INT32_MIN;
int16_t x35 = INT16_MAX;
static volatile int64_t x44 = -1LL;
int32_t x45 = -4;
int64_t x50 = INT64_MIN;
static volatile int8_t x53 = INT8_MIN;
int64_t x54 = INT64_MIN;
int64_t x56 = INT64_MAX;
volatile int16_t x57 = -1;
int32_t t14 = -254743522;
static int64_t x64 = -7260376498344314LL;
int8_t x65 = 3;
volatile int32_t t16 = 101;
int16_t x73 = 67;
volatile int32_t t18 = 408811766;
volatile int32_t t19 = -9692739;
static int8_t x82 = -1;
int64_t x87 = -1LL;
int8_t x89 = -1;
volatile uint64_t x91 = 1539LLU;
volatile uint64_t x99 = 9222417193LLU;
int64_t x100 = -1LL;
static volatile int32_t t25 = 28227;
uint64_t x106 = 1407219LLU;
static int16_t x113 = -1;
int16_t x114 = INT16_MIN;
static volatile int8_t x115 = 14;
int32_t t29 = -4667644;
uint32_t x131 = 22944U;
int8_t x132 = -1;
volatile int32_t t32 = -396529507;
uint32_t x134 = UINT32_MAX;
int16_t x137 = 1;
uint8_t x140 = 9U;
uint8_t x145 = 2U;
volatile int16_t x147 = INT16_MAX;
volatile int16_t x160 = -14354;
int32_t x167 = INT32_MIN;
int64_t x179 = INT64_MIN;
int8_t x181 = INT8_MIN;
int32_t x182 = INT32_MIN;
volatile int64_t x191 = -2235613LL;
int32_t t46 = 0;
volatile int32_t x195 = -9;
int16_t x200 = -3;
static volatile int32_t t51 = -31758995;
int8_t x220 = -34;
volatile uint32_t x225 = 2U;
int16_t x228 = -1;
int8_t x229 = -1;
int32_t x233 = 2;
static int64_t x236 = INT64_MIN;
int64_t x237 = INT64_MIN;
volatile uint64_t x238 = 1391500LLU;
volatile int32_t t60 = -68;
uint16_t x252 = 111U;
int32_t t61 = 24123;
int32_t x253 = INT32_MIN;
int32_t t63 = -7;
static int16_t x264 = -1;
static uint32_t x274 = UINT32_MAX;
static uint32_t x275 = 13474U;
volatile int32_t t68 = -12701669;
volatile uint64_t x282 = 475LLU;
volatile int32_t t69 = -7057770;
int32_t x288 = INT32_MAX;
int32_t x294 = 1198775;
int8_t x295 = 11;
uint32_t x297 = UINT32_MAX;
int32_t t73 = 529716860;
static int16_t x301 = INT16_MIN;
int8_t x311 = INT8_MAX;
uint64_t x314 = UINT64_MAX;
int32_t t78 = -54298298;
volatile int16_t x322 = INT16_MIN;
uint32_t x326 = 871397U;
int8_t x328 = -1;
static int32_t t80 = -1298088;
static int64_t x332 = 6LL;
int32_t t81 = 0;
static int16_t x333 = INT16_MIN;
volatile uint16_t x340 = 13U;
int32_t x342 = INT32_MAX;
uint16_t x343 = UINT16_MAX;
int32_t x346 = -7295;
static volatile int32_t t86 = 14098;
int32_t t88 = 36;
volatile uint8_t x364 = UINT8_MAX;
int16_t x366 = INT16_MAX;
uint32_t x367 = 0U;
uint16_t x371 = 2266U;
int64_t x377 = INT64_MAX;
volatile int16_t x385 = -1;
int32_t t95 = -7;
int64_t x391 = INT64_MIN;
int32_t t97 = 7;
int8_t x400 = 27;
uint8_t x402 = UINT8_MAX;
int16_t x403 = INT16_MIN;


void f0(void) {
	static uint8_t x1 = 3U;
	static int8_t x2 = -41;
	int32_t x3 = -1;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -628457772;

	t0 = ((x1|x2)<=(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	uint64_t x7 = UINT64_MAX;
	int8_t x8 = -3;
	volatile int32_t t1 = 1419;

	t1 = ((x5|x6)<=(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	uint32_t x10 = UINT32_MAX;
	uint16_t x11 = UINT16_MAX;
	volatile int32_t t2 = 257452;

	t2 = ((x9|x10)<=(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 201118409U;
	int8_t x14 = 0;
	volatile int32_t x15 = INT32_MIN;
	uint32_t x16 = UINT32_MAX;

	t3 = ((x13|x14)<=(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = -1;
	uint32_t x18 = 0U;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 3241;

	t4 = ((x17|x18)<=(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = 10U;
	uint8_t x24 = 2U;
	volatile int32_t t5 = 58905;

	t5 = ((x21|x22)<=(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	int16_t x28 = 167;
	int32_t t6 = 622967146;

	t6 = ((x25|x26)<=(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 7;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = -783986;

	t7 = ((x29|x30)<=(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	uint64_t x36 = 32580384LLU;
	static int32_t t8 = 179223200;

	t8 = ((x33|x34)<=(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x38 = 70U;
	int16_t x39 = INT16_MIN;
	volatile int8_t x40 = -1;
	volatile int32_t t9 = 29701;

	t9 = ((x37|x38)<=(x39/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = 13610690081355LLU;
	volatile int32_t t10 = -318512;

	t10 = ((x41|x42)<=(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 7;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -37;

	t11 = ((x45|x46)<=(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -46;
	volatile uint64_t x51 = 3356618320996575LLU;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -1582026;

	t12 = ((x49|x50)<=(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x55 = 28LLU;
	int32_t t13 = 72;

	t13 = ((x53|x54)<=(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MAX;
	static int8_t x60 = INT8_MIN;

	t14 = ((x57|x58)<=(x59/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	volatile int8_t x62 = -1;
	int8_t x63 = INT8_MAX;
	volatile int32_t t15 = -914413;

	t15 = ((x61|x62)<=(x63/x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = INT32_MAX;
	volatile uint32_t x68 = UINT32_MAX;

	t16 = ((x65|x66)<=(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 13874789882LL;
	int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MIN;
	int32_t x72 = -156670;
	volatile int32_t t17 = -45679;

	t17 = ((x69|x70)<=(x71/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	static volatile uint16_t x75 = UINT16_MAX;
	int16_t x76 = 2;

	t18 = ((x73|x74)<=(x75/x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1U;
	volatile int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	int8_t x80 = 5;

	t19 = ((x77|x78)<=(x79/x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -17LL;
	static volatile int16_t x83 = INT16_MIN;
	static uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -1917782;

	t20 = ((x81|x82)<=(x83/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 27U;
	uint64_t x86 = 7004268725859057LLU;
	volatile int64_t x88 = INT64_MAX;
	volatile int32_t t21 = 220955561;

	t21 = ((x85|x86)<=(x87/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x90 = 395742553U;
	volatile int8_t x92 = -22;
	int32_t t22 = -329831353;

	t22 = ((x89|x90)<=(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	static volatile int64_t x94 = -1LL;
	int32_t x95 = INT32_MIN;
	static uint16_t x96 = 9U;
	volatile int32_t t23 = -62713;

	t23 = ((x93|x94)<=(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = UINT8_MAX;
	uint16_t x98 = UINT16_MAX;
	int32_t t24 = -487830;

	t24 = ((x97|x98)<=(x99/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MIN;
	int8_t x103 = -7;
	volatile int8_t x104 = INT8_MAX;

	t25 = ((x101|x102)<=(x103/x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 5815;
	volatile int16_t x107 = -1;
	volatile int8_t x108 = INT8_MIN;
	int32_t t26 = -283715946;

	t26 = ((x105|x106)<=(x107/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -1LL;
	static volatile int32_t x110 = INT32_MIN;
	int64_t x111 = -1LL;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -29333017;

	t27 = ((x109|x110)<=(x111/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x116 = 10;
	int32_t t28 = 6;

	t28 = ((x113|x114)<=(x115/x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	static int32_t x118 = INT32_MIN;
	static int64_t x119 = -4025474LL;
	static volatile int8_t x120 = -25;

	t29 = ((x117|x118)<=(x119/x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	uint8_t x122 = UINT8_MAX;
	int16_t x123 = -658;
	int16_t x124 = 20;
	volatile int32_t t30 = -12;

	t30 = ((x121|x122)<=(x123/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = -3;
	volatile int8_t x127 = INT8_MAX;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 44129970;

	t31 = ((x125|x126)<=(x127/x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 6896U;
	int16_t x130 = 11815;

	t32 = ((x129|x130)<=(x131/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -6968163656961LL;
	volatile uint8_t x135 = 0U;
	uint32_t x136 = 1U;
	int32_t t33 = -3;

	t33 = ((x133|x134)<=(x135/x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = -1;
	volatile int32_t t34 = 547519;

	t34 = ((x137|x138)<=(x139/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	uint32_t x142 = 19055631U;
	uint8_t x143 = UINT8_MAX;
	int64_t x144 = -1LL;
	int32_t t35 = 68656;

	t35 = ((x141|x142)<=(x143/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 5U;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -196;

	t36 = ((x145|x146)<=(x147/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MIN;
	static uint8_t x152 = UINT8_MAX;
	int32_t t37 = -2105277;

	t37 = ((x149|x150)<=(x151/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 7409U;
	int64_t x154 = -1LL;
	static uint64_t x155 = 75LLU;
	static volatile uint16_t x156 = 2U;
	static int32_t t38 = 1811733;

	t38 = ((x153|x154)<=(x155/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 73815832U;
	static int8_t x158 = -1;
	int8_t x159 = -1;
	int32_t t39 = -131186445;

	t39 = ((x157|x158)<=(x159/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int32_t x162 = INT32_MIN;
	static uint32_t x163 = 528320U;
	int64_t x164 = -1LL;
	int32_t t40 = 0;

	t40 = ((x161|x162)<=(x163/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = 88U;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = 139092038;

	t41 = ((x165|x166)<=(x167/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = UINT16_MAX;
	int32_t x170 = -87794;
	uint8_t x171 = 69U;
	static volatile int16_t x172 = INT16_MIN;
	int32_t t42 = -3964521;

	t42 = ((x169|x170)<=(x171/x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	volatile int16_t x178 = INT16_MIN;
	uint16_t x180 = 153U;
	int32_t t43 = 33636;

	t43 = ((x177|x178)<=(x179/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = -173478;
	volatile int32_t t44 = 876;

	t44 = ((x181|x182)<=(x183/x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 11;
	static int32_t x186 = 22261980;
	int32_t x187 = INT32_MIN;
	int64_t x188 = 5414359999LL;
	volatile int32_t t45 = -738;

	t45 = ((x185|x186)<=(x187/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x189 = 5U;
	uint8_t x190 = 107U;
	uint64_t x192 = UINT64_MAX;

	t46 = ((x189|x190)<=(x191/x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x193 = 2635545797400755108LLU;
	int16_t x194 = INT16_MIN;
	int32_t x196 = INT32_MIN;
	int32_t t47 = 290860804;

	t47 = ((x193|x194)<=(x195/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 0;
	uint32_t x198 = 3950U;
	static int64_t x199 = 551007500821999850LL;
	int32_t t48 = 12;

	t48 = ((x197|x198)<=(x199/x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 446LLU;
	volatile int64_t x202 = INT64_MIN;
	volatile int8_t x203 = INT8_MAX;
	int8_t x204 = -1;
	volatile int32_t t49 = 0;

	t49 = ((x201|x202)<=(x203/x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -1;
	uint32_t x206 = 29887U;
	int32_t x207 = -238017946;
	int8_t x208 = INT8_MIN;
	volatile int32_t t50 = -45604;

	t50 = ((x205|x206)<=(x207/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 1U;
	int32_t x210 = -1;
	volatile uint32_t x211 = UINT32_MAX;
	int16_t x212 = INT16_MIN;

	t51 = ((x209|x210)<=(x211/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = INT32_MIN;
	int8_t x214 = -1;
	int32_t x215 = INT32_MAX;
	int16_t x216 = -18;
	int32_t t52 = -129855;

	t52 = ((x213|x214)<=(x215/x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = 90U;
	static uint64_t x218 = UINT64_MAX;
	int16_t x219 = INT16_MIN;
	int32_t t53 = 0;

	t53 = ((x217|x218)<=(x219/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	volatile int8_t x223 = INT8_MAX;
	static int32_t x224 = 782;
	volatile int32_t t54 = 64985760;

	t54 = ((x221|x222)<=(x223/x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x226 = 1;
	static int64_t x227 = -1LL;
	int32_t t55 = 843;

	t55 = ((x225|x226)<=(x227/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x230 = -1LL;
	static int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MAX;
	static int32_t t56 = 1371954;

	t56 = ((x229|x230)<=(x231/x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x234 = INT64_MAX;
	int16_t x235 = INT16_MAX;
	volatile int32_t t57 = 10122760;

	t57 = ((x233|x234)<=(x235/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x239 = -1LL;
	int32_t x240 = INT32_MIN;
	int32_t t58 = -160;

	t58 = ((x237|x238)<=(x239/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MIN;
	static uint16_t x242 = 58U;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = UINT32_MAX;
	int32_t t59 = 920;

	t59 = ((x241|x242)<=(x243/x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = -1;
	int64_t x246 = -1LL;
	volatile int64_t x247 = INT64_MAX;
	static int64_t x248 = -1LL;

	t60 = ((x245|x246)<=(x247/x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x249 = INT16_MIN;
	int16_t x250 = -2;
	uint16_t x251 = 26U;

	t61 = ((x249|x250)<=(x251/x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x254 = INT16_MAX;
	int64_t x255 = -1LL;
	static uint16_t x256 = UINT16_MAX;
	volatile int32_t t62 = 3;

	t62 = ((x253|x254)<=(x255/x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 8U;
	int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MAX;
	uint64_t x260 = 52286LLU;

	t63 = ((x257|x258)<=(x259/x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = 32037718;
	static int16_t x262 = INT16_MIN;
	int32_t x263 = 54611;
	int32_t t64 = 34;

	t64 = ((x261|x262)<=(x263/x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 110U;
	uint16_t x266 = 8951U;
	volatile int16_t x267 = INT16_MIN;
	static int16_t x268 = INT16_MIN;
	int32_t t65 = 813260;

	t65 = ((x265|x266)<=(x267/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = 2393240445LLU;
	static uint16_t x270 = 14U;
	int8_t x271 = -1;
	int64_t x272 = INT64_MIN;
	volatile int32_t t66 = 20;

	t66 = ((x269|x270)<=(x271/x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -7;
	int8_t x276 = -2;
	int32_t t67 = -2140003;

	t67 = ((x273|x274)<=(x275/x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = INT32_MIN;
	volatile int32_t x278 = -1;
	int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MIN;

	t68 = ((x277|x278)<=(x279/x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = INT32_MAX;
	int64_t x283 = INT64_MIN;
	int16_t x284 = 432;

	t69 = ((x281|x282)<=(x283/x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	volatile uint32_t x286 = 12U;
	volatile int64_t x287 = -26507038168059326LL;
	static int32_t t70 = 115945874;

	t70 = ((x285|x286)<=(x287/x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x289 = -40589;
	int8_t x290 = -1;
	uint16_t x291 = 30U;
	static uint64_t x292 = 5LLU;
	static volatile int32_t t71 = -27688;

	t71 = ((x289|x290)<=(x291/x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t72 = -43;

	t72 = ((x293|x294)<=(x295/x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x298 = INT16_MIN;
	volatile int64_t x299 = INT64_MIN;
	int16_t x300 = -545;

	t73 = ((x297|x298)<=(x299/x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x302 = UINT8_MAX;
	static volatile uint8_t x303 = UINT8_MAX;
	uint8_t x304 = 11U;
	volatile int32_t t74 = 693540223;

	t74 = ((x301|x302)<=(x303/x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	volatile int8_t x306 = INT8_MIN;
	int32_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	static int32_t t75 = -1331500;

	t75 = ((x305|x306)<=(x307/x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = -37;
	volatile int16_t x310 = -92;
	uint8_t x312 = UINT8_MAX;
	int32_t t76 = -59;

	t76 = ((x309|x310)<=(x311/x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = 4042369;
	static int16_t x315 = INT16_MAX;
	uint8_t x316 = 15U;
	volatile int32_t t77 = -10;

	t77 = ((x313|x314)<=(x315/x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 0U;
	int8_t x318 = INT8_MIN;
	int64_t x319 = -1LL;
	static int8_t x320 = 1;

	t78 = ((x317|x318)<=(x319/x320));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x321 = 1;
	int32_t x323 = INT32_MIN;
	volatile uint32_t x324 = 18U;
	int32_t t79 = 1123012;

	t79 = ((x321|x322)<=(x323/x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x325 = UINT16_MAX;
	static int16_t x327 = -1;

	t80 = ((x325|x326)<=(x327/x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = INT64_MAX;
	uint32_t x330 = 4605U;
	uint16_t x331 = 3278U;

	t81 = ((x329|x330)<=(x331/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x334 = INT8_MAX;
	int8_t x335 = INT8_MIN;
	int16_t x336 = 111;
	static volatile int32_t t82 = -5853450;

	t82 = ((x333|x334)<=(x335/x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = INT16_MAX;
	volatile int64_t x338 = INT64_MIN;
	static uint64_t x339 = 1241369058459893LLU;
	int32_t t83 = -569167;

	t83 = ((x337|x338)<=(x339/x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x341 = 1548498403LLU;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t84 = -13010520;

	t84 = ((x341|x342)<=(x343/x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = -1;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = UINT8_MAX;
	static int32_t t85 = 108178;

	t85 = ((x345|x346)<=(x347/x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = INT8_MIN;

	t86 = ((x349|x350)<=(x351/x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x353 = INT8_MAX;
	int64_t x354 = -1LL;
	volatile int64_t x355 = -1LL;
	volatile int16_t x356 = INT16_MIN;
	int32_t t87 = -19394;

	t87 = ((x353|x354)<=(x355/x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = INT64_MIN;
	volatile int64_t x358 = -1LL;
	static int8_t x359 = INT8_MAX;
	volatile int32_t x360 = INT32_MAX;

	t88 = ((x357|x358)<=(x359/x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MAX;
	volatile int16_t x363 = -13;
	int32_t t89 = -23;

	t89 = ((x361|x362)<=(x363/x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x365 = 0U;
	int64_t x368 = INT64_MIN;
	static int32_t t90 = 11;

	t90 = ((x365|x366)<=(x367/x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x369 = INT8_MIN;
	uint32_t x370 = 0U;
	volatile int16_t x372 = INT16_MIN;
	int32_t t91 = -2;

	t91 = ((x369|x370)<=(x371/x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = INT64_MAX;
	static int64_t x374 = INT64_MAX;
	static volatile int64_t x375 = -1LL;
	int8_t x376 = INT8_MIN;
	int32_t t92 = 17;

	t92 = ((x373|x374)<=(x375/x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x378 = INT16_MIN;
	int16_t x379 = -175;
	uint32_t x380 = 13695106U;
	int32_t t93 = 2;

	t93 = ((x377|x378)<=(x379/x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x381 = 1U;
	static int32_t x382 = INT32_MIN;
	uint16_t x383 = 117U;
	static uint16_t x384 = 77U;
	int32_t t94 = -586641;

	t94 = ((x381|x382)<=(x383/x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x386 = INT8_MAX;
	static int64_t x387 = 2688LL;
	int16_t x388 = 1;

	t95 = ((x385|x386)<=(x387/x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x389 = -1;
	static int32_t x390 = INT32_MAX;
	int16_t x392 = 82;
	volatile int32_t t96 = 28;

	t96 = ((x389|x390)<=(x391/x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -171256710252963454LL;
	static int8_t x394 = INT8_MAX;
	int32_t x395 = -223160068;
	uint8_t x396 = 58U;

	t97 = ((x393|x394)<=(x395/x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x397 = -38;
	static int16_t x398 = -1;
	int16_t x399 = INT16_MIN;
	int32_t t98 = 10670091;

	t98 = ((x397|x398)<=(x399/x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = INT16_MIN;
	static int16_t x404 = -1;
	static int32_t t99 = 21827;

	t99 = ((x401|x402)<=(x403/x404));

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

