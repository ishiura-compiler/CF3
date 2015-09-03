#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = -1;
volatile int64_t x11 = -1LL;
int32_t x14 = INT32_MIN;
int64_t x15 = -1LL;
uint64_t t4 = UINT64_MAX;
int32_t x23 = INT32_MAX;
volatile uint16_t x25 = 63U;
static volatile int32_t x26 = -1;
volatile int32_t t7 = -101317;
int8_t x37 = INT8_MIN;
static volatile uint8_t x39 = 13U;
uint64_t x40 = 639036LLU;
static int64_t x46 = INT64_MIN;
uint8_t x50 = 24U;
volatile int32_t x52 = -283;
uint64_t x54 = 8558820662849LLU;
volatile uint32_t x55 = UINT32_MAX;
static volatile uint16_t x66 = 11987U;
int32_t t14 = 613;
volatile int32_t t16 = 15636;
int64_t x77 = INT64_MIN;
volatile int32_t t18 = 57387152;
static int8_t x94 = INT8_MIN;
int32_t x96 = -1;
volatile int8_t x100 = -3;
uint64_t x103 = UINT64_MAX;
static int8_t x104 = INT8_MIN;
static volatile int32_t x107 = INT32_MIN;
int64_t x109 = 20564075727LL;
static uint32_t x112 = 7413687U;
int32_t x116 = INT32_MIN;
int32_t t26 = 40099367;
static int8_t x129 = 1;
int32_t x130 = -35893530;
volatile int16_t x134 = 1;
volatile uint64_t t30 = 586682LLU;
volatile int16_t x140 = -1;
int16_t x143 = INT16_MAX;
volatile int32_t t32 = -3;
int32_t x146 = -1;
int32_t t33 = -1;
uint8_t x155 = 3U;
static int16_t x160 = INT16_MAX;
static int64_t x168 = 131257311694LL;
volatile int64_t t38 = -49545619LL;
static int8_t x170 = -1;
static int32_t x173 = INT32_MIN;
int64_t x176 = 420151505952LL;
volatile int64_t t40 = 16704789571LL;
uint8_t x182 = 4U;
volatile uint8_t x185 = 2U;
uint8_t x187 = UINT8_MAX;
int8_t x191 = INT8_MAX;
int8_t x193 = INT8_MIN;
uint32_t x195 = UINT32_MAX;
static int32_t x203 = INT32_MIN;
static int8_t x204 = 1;
int64_t x205 = -19300064493LL;
static uint32_t x207 = 1082852U;
int32_t x209 = INT32_MIN;
uint32_t x213 = UINT32_MAX;
volatile int8_t x219 = -1;
uint8_t x220 = 15U;
uint8_t x221 = 85U;
uint16_t x234 = 6U;
static int32_t t55 = 30079836;
uint16_t x237 = 11776U;
int8_t x243 = INT8_MAX;
volatile int8_t x245 = INT8_MAX;
int16_t x251 = INT16_MIN;
uint64_t x252 = UINT64_MAX;
volatile uint64_t t59 = UINT64_MAX;
int64_t x256 = -1LL;
static int16_t x258 = INT16_MIN;
int16_t x259 = INT16_MIN;
uint16_t x264 = 4U;
int32_t x266 = INT32_MAX;
uint64_t t64 = 259282897LLU;
int32_t x277 = -1;
uint64_t x279 = UINT64_MAX;
int64_t x280 = -1LL;
int64_t x286 = INT64_MAX;
int64_t x290 = INT64_MIN;
int32_t t69 = -383753929;
uint64_t x293 = 0LLU;
int8_t x304 = -1;
int8_t x311 = -1;
int32_t t77 = -751;
int32_t t78 = 69;
uint32_t x330 = 1762U;
volatile int8_t x332 = -1;
static volatile int8_t x333 = INT8_MIN;
int8_t x335 = -1;
uint32_t t80 = 33846328U;
uint8_t x337 = UINT8_MAX;
uint64_t x341 = UINT64_MAX;
int32_t x344 = 1;
volatile int32_t t82 = 1063002290;
int16_t x345 = -2;
volatile int8_t x347 = INT8_MAX;
uint32_t x367 = 190478U;
static int64_t t89 = INT64_MIN;
static int16_t x374 = INT16_MIN;
uint8_t x376 = 8U;
volatile int32_t x381 = -1;
int64_t x382 = INT64_MAX;
int64_t x383 = -1LL;
uint64_t x384 = UINT64_MAX;
static int64_t x388 = -1857627510175LL;
volatile uint64_t x399 = 78LLU;
volatile int32_t t96 = 222195580;
uint8_t x408 = UINT8_MAX;


void f0(void) {
	static int32_t x1 = 18853;
	int64_t x2 = -1LL;
	volatile int32_t x3 = INT32_MAX;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = INT64_MAX;

	t0 = ((x1==(x2/x3))|x4);

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x6 = INT32_MAX;
	static uint64_t x7 = 7LLU;
	static uint8_t x8 = UINT8_MAX;
	int32_t t1 = 120;

	t1 = ((x5==(x6/x7))|x8);

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static volatile uint8_t x12 = 23U;
	int32_t t2 = -172380;

	t2 = ((x9==(x10/x11))|x12);

	if (t2 != 23) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 57581959180286LLU;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t3 = INT32_MIN;

	t3 = ((x13==(x14/x15))|x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	uint8_t x19 = UINT8_MAX;
	uint64_t x20 = UINT64_MAX;

	t4 = ((x17==(x18/x19))|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 3U;
	uint64_t x22 = UINT64_MAX;
	static volatile int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -76559;

	t5 = ((x21==(x22/x23))|x24);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x27 = UINT64_MAX;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = 393216602;

	t6 = ((x25==(x26/x27))|x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = -1;
	uint16_t x34 = 11330U;
	volatile int16_t x35 = 6874;
	volatile int8_t x36 = INT8_MIN;

	t7 = ((x33==(x34/x35))|x36);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x38 = INT16_MIN;
	uint64_t t8 = 57774820026829LLU;

	t8 = ((x37==(x38/x39))|x40);

	if (t8 != 639036LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 559011531888677LLU;
	static int32_t x42 = 0;
	int32_t x43 = INT32_MIN;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t9 = INT32_MIN;

	t9 = ((x41==(x42/x43))|x44);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = INT32_MAX;

	t10 = ((x45==(x46/x47))|x48);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x49 = UINT8_MAX;
	int16_t x51 = -60;
	volatile int32_t t11 = 6243687;

	t11 = ((x49==(x50/x51))|x52);

	if (t11 != -283) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 14U;
	volatile int64_t x56 = -1LL;
	volatile int64_t t12 = -49948273347976LL;

	t12 = ((x53==(x54/x55))|x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 1U;
	uint64_t x62 = 10119992078588LLU;
	uint64_t x63 = UINT64_MAX;
	static uint32_t x64 = UINT32_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = ((x61==(x62/x63))|x64);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1;
	static volatile uint16_t x67 = UINT16_MAX;
	static int16_t x68 = -1;

	t14 = ((x65==(x66/x67))|x68);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	volatile int8_t x70 = -23;
	int64_t x71 = 93089205LL;
	int8_t x72 = -39;
	volatile int32_t t15 = 351143897;

	t15 = ((x69==(x70/x71))|x72);

	if (t15 != -39) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x73 = 5513247LLU;
	int8_t x74 = 1;
	static volatile int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MIN;

	t16 = ((x73==(x74/x75))|x76);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x78 = 0U;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = -49;
	int32_t t17 = -709688070;

	t17 = ((x77==(x78/x79))|x80);

	if (t17 != -49) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MAX;
	static int32_t x86 = 32381990;
	int64_t x87 = INT64_MAX;
	volatile int8_t x88 = -13;

	t18 = ((x85==(x86/x87))|x88);

	if (t18 != -13) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = -978827;
	static int8_t x91 = INT8_MIN;
	int32_t x92 = 1762;
	static volatile int32_t t19 = -64161;

	t19 = ((x89==(x90/x91))|x92);

	if (t19 != 1762) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x93 = UINT32_MAX;
	int8_t x95 = INT8_MAX;
	volatile int32_t t20 = 20513068;

	t20 = ((x93==(x94/x95))|x96);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = -459LL;
	int8_t x98 = INT8_MAX;
	int64_t x99 = -3156518685181LL;
	volatile int32_t t21 = -81;

	t21 = ((x97==(x98/x99))|x100);

	if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	static int64_t x102 = INT64_MIN;
	volatile int32_t t22 = 1;

	t22 = ((x101==(x102/x103))|x104);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	static volatile uint8_t x106 = UINT8_MAX;
	uint64_t x108 = UINT64_MAX;
	static volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x105==(x106/x107))|x108);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = -20582138;
	int16_t x111 = -1;
	uint32_t t24 = 0U;

	t24 = ((x109==(x110/x111))|x112);

	if (t24 != 7413687U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = INT8_MIN;
	volatile int32_t x114 = INT32_MIN;
	static int32_t x115 = 1;
	int32_t t25 = INT32_MIN;

	t25 = ((x113==(x114/x115))|x116);

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = 15;
	static int16_t x118 = INT16_MAX;
	int8_t x119 = INT8_MAX;
	static int32_t x120 = -4;

	t26 = ((x117==(x118/x119))|x120);

	if (t26 != -4) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x122 = INT16_MIN;
	uint8_t x123 = 16U;
	volatile int32_t x124 = -701;
	int32_t t27 = -295971;

	t27 = ((x121==(x122/x123))|x124);

	if (t27 != -701) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = UINT64_MAX;
	int16_t x126 = -255;
	volatile int8_t x127 = INT8_MAX;
	int8_t x128 = 0;
	int32_t t28 = 1;

	t28 = ((x125==(x126/x127))|x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x131 = INT32_MAX;
	volatile int64_t x132 = INT64_MIN;
	int64_t t29 = INT64_MIN;

	t29 = ((x129==(x130/x131))|x132);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	volatile int16_t x135 = INT16_MAX;
	uint64_t x136 = 157459910698LLU;

	t30 = ((x133==(x134/x135))|x136);

	if (t30 != 157459910698LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -291415945061685LL;
	uint8_t x138 = 1U;
	int32_t x139 = -1;
	volatile int32_t t31 = 219607;

	t31 = ((x137==(x138/x139))|x140);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -6;
	uint32_t x142 = 7U;
	uint16_t x144 = 1U;

	t32 = ((x141==(x142/x143))|x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x145 = 76U;
	static int32_t x147 = INT32_MIN;
	uint16_t x148 = 27142U;

	t33 = ((x145==(x146/x147))|x148);

	if (t33 != 27142) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -1;
	int16_t x150 = -1;
	uint64_t x151 = 458LLU;
	static uint64_t x152 = 687637LLU;
	uint64_t t34 = 1503886729LLU;

	t34 = ((x149==(x150/x151))|x152);

	if (t34 != 687637LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = 3421U;
	uint64_t x154 = UINT64_MAX;
	int32_t x156 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = ((x153==(x154/x155))|x156);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x157 = 5U;
	int64_t x158 = INT64_MAX;
	volatile int64_t x159 = INT64_MAX;
	volatile int32_t t36 = 1118366;

	t36 = ((x157==(x158/x159))|x160);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = 1533;
	volatile int16_t x162 = INT16_MIN;
	static int32_t x163 = INT32_MAX;
	int32_t x164 = INT32_MAX;
	volatile int32_t t37 = INT32_MAX;

	t37 = ((x161==(x162/x163))|x164);

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = UINT16_MAX;
	uint16_t x166 = 193U;
	volatile int16_t x167 = -8;

	t38 = ((x165==(x166/x167))|x168);

	if (t38 != 131257311694LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x169 = 2;
	static volatile int8_t x171 = -46;
	int16_t x172 = -3860;
	static int32_t t39 = -1738155;

	t39 = ((x169==(x170/x171))|x172);

	if (t39 != -3860) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = -3;
	uint16_t x175 = 359U;

	t40 = ((x173==(x174/x175))|x176);

	if (t40 != 420151505952LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MAX;
	int64_t x178 = INT64_MIN;
	static volatile uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t41 = INT32_MIN;

	t41 = ((x177==(x178/x179))|x180);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MAX;
	uint8_t x183 = 8U;
	static volatile uint8_t x184 = 10U;
	volatile int32_t t42 = -10;

	t42 = ((x181==(x182/x183))|x184);

	if (t42 != 10) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = -1;
	volatile int64_t x188 = INT64_MAX;
	int64_t t43 = INT64_MAX;

	t43 = ((x185==(x186/x187))|x188);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 3869999548274025696LLU;
	uint8_t x190 = 125U;
	volatile int64_t x192 = 3198146LL;
	volatile int64_t t44 = -1593578022449654LL;

	t44 = ((x189==(x190/x191))|x192);

	if (t44 != 3198146LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x194 = 1U;
	int32_t x196 = INT32_MAX;
	volatile int32_t t45 = INT32_MAX;

	t45 = ((x193==(x194/x195))|x196);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	int8_t x198 = 0;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = -2;
	volatile int32_t t46 = -39983;

	t46 = ((x197==(x198/x199))|x200);

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -34679;
	int64_t x202 = INT64_MAX;
	volatile int32_t t47 = 54241839;

	t47 = ((x201==(x202/x203))|x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x206 = INT8_MIN;
	uint32_t x208 = 49813884U;
	uint32_t t48 = 3257312U;

	t48 = ((x205==(x206/x207))|x208);

	if (t48 != 49813884U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t49 = 6;

	t49 = ((x209==(x210/x211))|x212);

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x214 = 1957275403900320LL;
	int16_t x215 = -1;
	uint8_t x216 = UINT8_MAX;
	int32_t t50 = -427;

	t50 = ((x213==(x214/x215))|x216);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MIN;
	static volatile int16_t x218 = INT16_MIN;
	int32_t t51 = -5956318;

	t51 = ((x217==(x218/x219))|x220);

	if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x222 = -1LL;
	int8_t x223 = -8;
	uint32_t x224 = 15U;
	uint32_t t52 = 17U;

	t52 = ((x221==(x222/x223))|x224);

	if (t52 != 15U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MIN;
	static int64_t x227 = -1LL;
	int16_t x228 = 4;
	volatile int32_t t53 = 218993;

	t53 = ((x225==(x226/x227))|x228);

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = -1;
	uint32_t x230 = 881027114U;
	int64_t x231 = -1LL;
	int64_t x232 = -24105375LL;
	volatile int64_t t54 = 945891379LL;

	t54 = ((x229==(x230/x231))|x232);

	if (t54 != -24105375LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = 1;
	int32_t x235 = 44;
	volatile int8_t x236 = -48;

	t55 = ((x233==(x234/x235))|x236);

	if (t55 != -48) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x238 = 1568;
	int8_t x239 = INT8_MIN;
	int16_t x240 = -109;
	volatile int32_t t56 = 53331695;

	t56 = ((x237==(x238/x239))|x240);

	if (t56 != -109) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 2U;
	static uint32_t x242 = 1U;
	int32_t x244 = INT32_MAX;
	static int32_t t57 = INT32_MAX;

	t57 = ((x241==(x242/x243))|x244);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x246 = UINT16_MAX;
	int16_t x247 = -1;
	static int8_t x248 = INT8_MIN;
	int32_t t58 = -287190;

	t58 = ((x245==(x246/x247))|x248);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x249 = UINT16_MAX;
	static volatile uint16_t x250 = 5U;

	t59 = ((x249==(x250/x251))|x252);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = 20U;
	int16_t x254 = 29;
	uint8_t x255 = 10U;
	static volatile int64_t t60 = 1050003143LL;

	t60 = ((x253==(x254/x255))|x256);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x257 = 1U;
	volatile int64_t x260 = INT64_MIN;
	int64_t t61 = -57585374LL;

	t61 = ((x257==(x258/x259))|x260);

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	volatile int8_t x262 = 3;
	int16_t x263 = -1;
	int32_t t62 = 154370524;

	t62 = ((x261==(x262/x263))|x264);

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -1;
	int16_t x267 = -2;
	int64_t x268 = -6LL;
	int64_t t63 = -29277058105LL;

	t63 = ((x265==(x266/x267))|x268);

	if (t63 != -6LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = INT16_MAX;
	int32_t x270 = INT32_MAX;
	int32_t x271 = -1;
	static uint64_t x272 = 856LLU;

	t64 = ((x269==(x270/x271))|x272);

	if (t64 != 856LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x273 = -1;
	static int32_t x274 = INT32_MIN;
	static uint8_t x275 = 102U;
	uint64_t x276 = UINT64_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x273==(x274/x275))|x276);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x278 = 1715645295215701947LLU;
	int64_t t66 = 532360302036LL;

	t66 = ((x277==(x278/x279))|x280);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int16_t x282 = INT16_MIN;
	static int32_t x283 = INT32_MIN;
	static int64_t x284 = -163LL;
	static int64_t t67 = 4226194LL;

	t67 = ((x281==(x282/x283))|x284);

	if (t67 != -163LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = 4524121002601019910LL;
	volatile int8_t x287 = INT8_MIN;
	volatile int32_t x288 = -1;
	volatile int32_t t68 = 727745282;

	t68 = ((x285==(x286/x287))|x288);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x291 = 357LLU;
	volatile int16_t x292 = INT16_MIN;

	t69 = ((x289==(x290/x291))|x292);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x294 = 2U;
	int8_t x295 = INT8_MAX;
	uint64_t x296 = 399LLU;
	uint64_t t70 = 1932111929LLU;

	t70 = ((x293==(x294/x295))|x296);

	if (t70 != 399LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = 2704U;
	static uint16_t x298 = UINT16_MAX;
	int64_t x299 = INT64_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x297==(x298/x299))|x300);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = -1;
	int64_t x302 = INT64_MIN;
	volatile int16_t x303 = 41;
	static volatile int32_t t72 = -96579;

	t72 = ((x301==(x302/x303))|x304);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MAX;
	static int8_t x308 = INT8_MIN;
	int32_t t73 = 17319;

	t73 = ((x305==(x306/x307))|x308);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MIN;
	static int8_t x310 = -1;
	uint32_t x312 = 43528985U;
	volatile uint32_t t74 = 821863580U;

	t74 = ((x309==(x310/x311))|x312);

	if (t74 != 43528985U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = INT16_MIN;
	static int8_t x315 = INT8_MIN;
	volatile int16_t x316 = INT16_MAX;
	int32_t t75 = -28966;

	t75 = ((x313==(x314/x315))|x316);

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 5U;
	volatile uint8_t x318 = UINT8_MAX;
	int16_t x319 = INT16_MIN;
	int8_t x320 = -1;
	int32_t t76 = 104673287;

	t76 = ((x317==(x318/x319))|x320);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = -1LL;
	uint16_t x322 = 13U;
	static int16_t x323 = INT16_MAX;
	uint8_t x324 = UINT8_MAX;

	t77 = ((x321==(x322/x323))|x324);

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x325 = 62160778U;
	volatile int8_t x326 = INT8_MAX;
	static volatile uint64_t x327 = 207791202019577LLU;
	int16_t x328 = INT16_MIN;

	t78 = ((x325==(x326/x327))|x328);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 0U;
	volatile int32_t x331 = -1;
	static int32_t t79 = -2256456;

	t79 = ((x329==(x330/x331))|x332);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x334 = 13U;
	static uint32_t x336 = 2735U;

	t80 = ((x333==(x334/x335))|x336);

	if (t80 != 2735U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x338 = -2;
	static int64_t x339 = INT64_MIN;
	int64_t x340 = -1LL;
	static int64_t t81 = 0LL;

	t81 = ((x337==(x338/x339))|x340);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x342 = 114399;
	int32_t x343 = 2196;

	t82 = ((x341==(x342/x343))|x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x346 = 8U;
	int16_t x348 = INT16_MAX;
	int32_t t83 = -14;

	t83 = ((x345==(x346/x347))|x348);

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = 21U;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	uint16_t x352 = 717U;
	volatile int32_t t84 = -5;

	t84 = ((x349==(x350/x351))|x352);

	if (t84 != 717) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x353 = UINT16_MAX;
	int16_t x354 = INT16_MIN;
	volatile int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;
	int32_t t85 = INT32_MIN;

	t85 = ((x353==(x354/x355))|x356);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x357 = UINT8_MAX;
	uint64_t x358 = 13LLU;
	volatile int8_t x359 = INT8_MIN;
	static uint8_t x360 = UINT8_MAX;
	volatile int32_t t86 = -3407066;

	t86 = ((x357==(x358/x359))|x360);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x361 = 3U;
	static int64_t x362 = -421132208LL;
	volatile int32_t x363 = -58022;
	int64_t x364 = -146LL;
	volatile int64_t t87 = 55373343639LL;

	t87 = ((x361==(x362/x363))|x364);

	if (t87 != -146LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = UINT32_MAX;
	int32_t x366 = -1;
	static int8_t x368 = 2;
	volatile int32_t t88 = 15282;

	t88 = ((x365==(x366/x367))|x368);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = 80LL;
	uint64_t x370 = 14259974831624LLU;
	int32_t x371 = -2370;
	int64_t x372 = INT64_MIN;

	t89 = ((x369==(x370/x371))|x372);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x373 = 342U;
	int64_t x375 = -1LL;
	int32_t t90 = -4;

	t90 = ((x373==(x374/x375))|x376);

	if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x377 = 3U;
	uint32_t x378 = 134U;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = 4;
	int32_t t91 = -6904028;

	t91 = ((x377==(x378/x379))|x380);

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t t92 = UINT64_MAX;

	t92 = ((x381==(x382/x383))|x384);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x385 = UINT32_MAX;
	volatile int16_t x386 = -1;
	int8_t x387 = -1;
	static int64_t t93 = -15600784292LL;

	t93 = ((x385==(x386/x387))|x388);

	if (t93 != -1857627510175LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	volatile uint32_t x390 = 30077984U;
	static volatile int64_t x391 = -1LL;
	static uint16_t x392 = 2U;
	static int32_t t94 = -3;

	t94 = ((x389==(x390/x391))|x392);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 108U;
	int8_t x394 = INT8_MIN;
	uint32_t x395 = 41419346U;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t95 = -861330;

	t95 = ((x393==(x394/x395))|x396);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = -2;
	int32_t x398 = -51;
	int32_t x400 = 3818;

	t96 = ((x397==(x398/x399))|x400);

	if (t96 != 3818) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 8010656U;
	static int32_t x402 = 480811893;
	int16_t x403 = 39;
	static uint16_t x404 = 336U;
	int32_t t97 = 1768577;

	t97 = ((x401==(x402/x403))|x404);

	if (t97 != 336) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x405 = INT64_MAX;
	int64_t x406 = INT64_MAX;
	uint8_t x407 = 27U;
	static volatile int32_t t98 = 53205;

	t98 = ((x405==(x406/x407))|x408);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MIN;
	volatile int64_t x410 = 8849292976459898LL;
	uint64_t x411 = 408860611977350834LLU;
	uint32_t x412 = 62236U;
	uint32_t t99 = 0U;

	t99 = ((x409==(x410/x411))|x412);

	if (t99 != 62236U) { NG(); } else { ; }
	
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

