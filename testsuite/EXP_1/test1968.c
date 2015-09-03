#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -862;
static int64_t x5 = -1611556741578LL;
volatile int32_t t1 = 243963;
int16_t x13 = -45;
volatile uint32_t x14 = UINT32_MAX;
uint32_t x20 = 1U;
volatile uint64_t x27 = 173436666878LLU;
int16_t x29 = -1;
int64_t x32 = INT64_MAX;
static int64_t x33 = -5319911LL;
volatile int64_t t8 = -41231298683051463LL;
static volatile int8_t x47 = -1;
uint64_t x58 = UINT64_MAX;
int64_t x60 = INT64_MIN;
volatile uint16_t x63 = UINT16_MAX;
static int16_t x66 = 69;
int32_t x75 = INT32_MAX;
volatile int8_t x76 = INT8_MAX;
uint8_t x77 = 10U;
uint8_t x80 = 25U;
uint32_t x89 = UINT32_MAX;
int32_t x96 = -1;
int16_t x106 = INT16_MIN;
int64_t x107 = INT64_MIN;
volatile int8_t x109 = INT8_MIN;
volatile uint16_t x110 = UINT16_MAX;
int8_t x113 = INT8_MIN;
static volatile int32_t t29 = -4381461;
int16_t x125 = INT16_MIN;
uint16_t x128 = UINT16_MAX;
int64_t x133 = INT64_MAX;
static int16_t x134 = INT16_MIN;
int16_t x136 = INT16_MIN;
volatile int32_t t32 = 191600466;
static uint64_t x138 = UINT64_MAX;
volatile int16_t x140 = 243;
int8_t x141 = 0;
int16_t x143 = INT16_MAX;
int8_t x147 = -1;
int32_t x158 = INT32_MIN;
volatile int32_t t41 = -418;
uint64_t x181 = 83807748585LLU;
volatile uint16_t x183 = UINT16_MAX;
int32_t x191 = INT32_MIN;
uint64_t x192 = UINT64_MAX;
static int32_t x195 = INT32_MAX;
int8_t x205 = INT8_MAX;
uint32_t x209 = 83567039U;
volatile uint32_t x218 = 8U;
int16_t x219 = 9;
int32_t x220 = -1;
static int32_t x226 = -1;
int32_t x237 = -1;
static uint16_t x241 = 28006U;
int64_t x251 = -1LL;
static int16_t x253 = INT16_MIN;
int32_t t61 = 2745074;
uint8_t x263 = 1U;
int16_t x276 = 7267;
volatile int64_t x277 = -18783754132LL;
int32_t t67 = -1644116;
volatile int32_t x289 = INT32_MIN;
static int16_t x291 = 0;
int32_t t69 = -386028669;
volatile int16_t x298 = -391;
int8_t x299 = INT8_MIN;
int16_t x301 = -1;
int16_t x304 = -3;
int32_t t71 = -1;
static volatile int64_t x309 = INT64_MIN;
uint8_t x310 = UINT8_MAX;
uint32_t x315 = 35U;
static uint8_t x316 = 5U;
int64_t t75 = -645720809668352344LL;
int8_t x322 = -14;
static uint32_t t77 = 9662U;
uint16_t x330 = 866U;
static uint32_t x332 = 460U;
uint16_t x334 = 598U;
uint16_t x337 = 30U;
uint16_t x342 = 1U;
volatile uint8_t x347 = 1U;
uint16_t x352 = 1513U;
int32_t t83 = 1;
static volatile int64_t t86 = 117LL;
uint32_t x367 = 10098U;
int8_t x368 = 59;
static int8_t x369 = INT8_MIN;
volatile uint32_t x375 = 175U;
uint64_t x378 = 8666715LLU;
volatile int32_t x389 = INT32_MAX;
static uint16_t x401 = 98U;
static int32_t x411 = -1;
uint32_t x416 = 27844U;


void f0(void) {
	int8_t x1 = 0;
	static uint32_t x2 = 3023137U;
	static uint16_t x3 = 1006U;
	int32_t x4 = -1;

	t0 = (((x1|x2)<x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = 4U;
	int32_t x7 = INT32_MIN;
	volatile int32_t x8 = INT32_MAX;

	t1 = (((x5|x6)<x7)%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 595478462LLU;
	static uint8_t x10 = 10U;
	uint8_t x11 = 8U;
	uint32_t x12 = 27906U;
	volatile uint32_t t2 = 15995U;

	t2 = (((x9|x10)<x11)%x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x15 = UINT32_MAX;
	int16_t x16 = -1;
	int32_t t3 = 479222;

	t3 = (((x13|x14)<x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	uint64_t x18 = 1515312001781LLU;
	uint32_t x19 = 181916947U;
	uint32_t t4 = 916U;

	t4 = (((x17|x18)<x19)%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	volatile int16_t x26 = -1;
	volatile uint16_t x28 = 3U;
	static int32_t t5 = 1;

	t5 = (((x25|x26)<x27)%x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x30 = 3U;
	int8_t x31 = INT8_MIN;
	static volatile int64_t t6 = -12401869342856055LL;

	t6 = (((x29|x30)<x31)%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = 10487;
	static uint8_t x35 = 79U;
	int8_t x36 = INT8_MAX;
	static int32_t t7 = 92578;

	t7 = (((x33|x34)<x35)%x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = 1586865;
	uint8_t x39 = 14U;
	int64_t x40 = -1LL;

	t8 = (((x37|x38)<x39)%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x41 = 261592;
	static volatile int32_t x42 = INT32_MAX;
	int32_t x43 = -1;
	int64_t x44 = -645300LL;
	volatile int64_t t9 = -51LL;

	t9 = (((x41|x42)<x43)%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = UINT32_MAX;
	volatile int8_t x46 = INT8_MIN;
	uint32_t x48 = 488023386U;
	volatile uint32_t t10 = 23035524U;

	t10 = (((x45|x46)<x47)%x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = -1;
	int16_t x52 = -7;
	volatile int32_t t11 = -981346068;

	t11 = (((x49|x50)<x51)%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 3699U;
	static int32_t x54 = -2;
	int64_t x55 = INT64_MIN;
	int8_t x56 = -1;
	int32_t t12 = -845338;

	t12 = (((x53|x54)<x55)%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	int32_t x59 = -1;
	static int64_t t13 = 188270LL;

	t13 = (((x57|x58)<x59)%x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MAX;
	int16_t x62 = -1;
	int16_t x64 = -3327;
	volatile int32_t t14 = 1;

	t14 = (((x61|x62)<x63)%x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = UINT8_MAX;
	int32_t t15 = 1;

	t15 = (((x65|x66)<x67)%x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -6;
	static uint32_t x70 = 16461990U;
	uint16_t x71 = 32621U;
	static int8_t x72 = INT8_MIN;
	int32_t t16 = -20;

	t16 = (((x69|x70)<x71)%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	volatile uint8_t x74 = 11U;
	int32_t t17 = -826;

	t17 = (((x73|x74)<x75)%x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x78 = -47;
	int64_t x79 = INT64_MAX;
	volatile int32_t t18 = -11734472;

	t18 = (((x77|x78)<x79)%x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	uint8_t x82 = 49U;
	uint16_t x83 = 13U;
	volatile uint16_t x84 = 427U;
	volatile int32_t t19 = 20888;

	t19 = (((x81|x82)<x83)%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	volatile uint16_t x86 = 508U;
	int16_t x87 = 1;
	int64_t x88 = -3653203695844595652LL;
	volatile int64_t t20 = -3109911LL;

	t20 = (((x85|x86)<x87)%x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x90 = INT32_MAX;
	int16_t x91 = INT16_MIN;
	int32_t x92 = -1;
	int32_t t21 = -977;

	t21 = (((x89|x90)<x91)%x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MAX;
	static int64_t x94 = 759LL;
	int32_t x95 = INT32_MIN;
	int32_t t22 = 2;

	t22 = (((x93|x94)<x95)%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 29;
	int8_t x98 = -1;
	static int32_t x99 = -891202;
	static uint32_t x100 = UINT32_MAX;
	uint32_t t23 = 2265U;

	t23 = (((x97|x98)<x99)%x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	int32_t x102 = -9;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	int32_t t24 = -753724918;

	t24 = (((x101|x102)<x103)%x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = -5242LL;
	int16_t x108 = 1;
	int32_t t25 = -1829340;

	t25 = (((x105|x106)<x107)%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x111 = -1;
	int32_t x112 = -1;
	static int32_t t26 = -7;

	t26 = (((x109|x110)<x111)%x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = INT8_MIN;
	uint64_t x115 = UINT64_MAX;
	static int32_t x116 = -20293877;
	volatile int32_t t27 = 2042;

	t27 = (((x113|x114)<x115)%x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = -1;
	volatile uint16_t x118 = 850U;
	uint8_t x119 = 4U;
	int8_t x120 = INT8_MAX;
	int32_t t28 = 8456;

	t28 = (((x117|x118)<x119)%x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 950593452LLU;
	uint64_t x122 = UINT64_MAX;
	uint16_t x123 = UINT16_MAX;
	int32_t x124 = INT32_MAX;

	t29 = (((x121|x122)<x123)%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x126 = 3377U;
	int16_t x127 = INT16_MIN;
	int32_t t30 = 16408414;

	t30 = (((x125|x126)<x127)%x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -1;
	int8_t x130 = INT8_MIN;
	static int64_t x131 = -4963LL;
	uint8_t x132 = 2U;
	volatile int32_t t31 = 282;

	t31 = (((x129|x130)<x131)%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x135 = 47;

	t32 = (((x133|x134)<x135)%x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x137 = 0U;
	uint8_t x139 = UINT8_MAX;
	volatile int32_t t33 = 428;

	t33 = (((x137|x138)<x139)%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x142 = INT32_MIN;
	volatile int64_t x144 = INT64_MIN;
	volatile int64_t t34 = -37071420832647169LL;

	t34 = (((x141|x142)<x143)%x144);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = UINT16_MAX;
	volatile int8_t x146 = INT8_MIN;
	static uint16_t x148 = UINT16_MAX;
	int32_t t35 = -1396;

	t35 = (((x145|x146)<x147)%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 9797504LLU;
	int16_t x150 = 0;
	int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MAX;
	int32_t t36 = -7714;

	t36 = (((x149|x150)<x151)%x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x153 = INT16_MIN;
	uint32_t x154 = UINT32_MAX;
	uint8_t x155 = 25U;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t37 = 1;

	t37 = (((x153|x154)<x155)%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	int32_t x159 = INT32_MIN;
	int64_t x160 = INT64_MIN;
	int64_t t38 = 205090704260485708LL;

	t38 = (((x157|x158)<x159)%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x161 = 143754148U;
	uint32_t x162 = 1U;
	static volatile int64_t x163 = -86530638LL;
	static uint16_t x164 = 3008U;
	int32_t t39 = -21975411;

	t39 = (((x161|x162)<x163)%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MIN;
	static volatile int64_t x167 = INT64_MIN;
	int64_t x168 = 186LL;
	volatile int64_t t40 = 7717621024332LL;

	t40 = (((x165|x166)<x167)%x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = 1;
	int16_t x170 = INT16_MAX;
	volatile int16_t x171 = INT16_MAX;
	uint16_t x172 = UINT16_MAX;

	t41 = (((x169|x170)<x171)%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 116231267138720899LL;
	static int16_t x174 = INT16_MAX;
	static int16_t x175 = 180;
	volatile int64_t x176 = INT64_MIN;
	int64_t t42 = -34763710417485172LL;

	t42 = (((x173|x174)<x175)%x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	volatile int64_t x178 = -1LL;
	uint8_t x179 = UINT8_MAX;
	volatile int64_t x180 = -1LL;
	static int64_t t43 = 4496930609786129417LL;

	t43 = (((x177|x178)<x179)%x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = 0;
	static int8_t x184 = -6;
	volatile int32_t t44 = -6318;

	t44 = (((x181|x182)<x183)%x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -17;
	uint32_t x190 = UINT32_MAX;
	static volatile uint64_t t45 = 27561772750875480LLU;

	t45 = (((x189|x190)<x191)%x192);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 4U;
	static uint16_t x194 = 54U;
	uint16_t x196 = 1781U;
	volatile int32_t t46 = 20;

	t46 = (((x193|x194)<x195)%x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = INT16_MAX;
	int8_t x198 = -1;
	uint16_t x199 = UINT16_MAX;
	int8_t x200 = INT8_MAX;
	static int32_t t47 = 1251;

	t47 = (((x197|x198)<x199)%x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 26713719826602933LLU;
	static int16_t x202 = INT16_MIN;
	volatile uint32_t x203 = 671281U;
	uint8_t x204 = UINT8_MAX;
	int32_t t48 = -44443;

	t48 = (((x201|x202)<x203)%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x206 = 19U;
	uint8_t x207 = 4U;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t49 = -109974;

	t49 = (((x205|x206)<x207)%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x210 = 20U;
	int16_t x211 = INT16_MIN;
	int8_t x212 = -1;
	static int32_t t50 = -922;

	t50 = (((x209|x210)<x211)%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	static volatile uint32_t x214 = UINT32_MAX;
	static uint16_t x215 = 79U;
	uint64_t x216 = 1510LLU;
	uint64_t t51 = 1355131155LLU;

	t51 = (((x213|x214)<x215)%x216);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MIN;
	int32_t t52 = -330367853;

	t52 = (((x217|x218)<x219)%x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	uint32_t x224 = UINT32_MAX;
	uint32_t t53 = 124U;

	t53 = (((x221|x222)<x223)%x224);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	static int64_t x227 = INT64_MIN;
	static uint32_t x228 = UINT32_MAX;
	uint32_t t54 = 220U;

	t54 = (((x225|x226)<x227)%x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	int16_t x230 = -1;
	int32_t x231 = -1;
	static int16_t x232 = INT16_MAX;
	static volatile int32_t t55 = 14100;

	t55 = (((x229|x230)<x231)%x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = 5;
	uint8_t x234 = UINT8_MAX;
	volatile int32_t x235 = -1;
	int16_t x236 = -1;
	volatile int32_t t56 = -1;

	t56 = (((x233|x234)<x235)%x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x238 = UINT8_MAX;
	int64_t x239 = -132611918LL;
	int8_t x240 = INT8_MAX;
	volatile int32_t t57 = 61;

	t57 = (((x237|x238)<x239)%x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x242 = -1;
	int64_t x243 = INT64_MIN;
	uint8_t x244 = 15U;
	int32_t t58 = 31740;

	t58 = (((x241|x242)<x243)%x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -51535834;
	int64_t x250 = INT64_MIN;
	int32_t x252 = -660;
	volatile int32_t t59 = -3443266;

	t59 = (((x249|x250)<x251)%x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 2145U;
	volatile uint64_t x256 = 3864LLU;
	uint64_t t60 = 7LLU;

	t60 = (((x253|x254)<x255)%x256);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = UINT8_MAX;
	int32_t x258 = INT32_MIN;
	volatile int32_t x259 = INT32_MIN;
	int8_t x260 = -26;

	t61 = (((x257|x258)<x259)%x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x261 = INT64_MIN;
	volatile int64_t x262 = 564943761434LL;
	volatile int64_t x264 = INT64_MAX;
	volatile int64_t t62 = -4089LL;

	t62 = (((x261|x262)<x263)%x264);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x269 = 909U;
	int8_t x270 = INT8_MAX;
	uint32_t x271 = 1U;
	static volatile int16_t x272 = -1;
	int32_t t63 = 382;

	t63 = (((x269|x270)<x271)%x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x273 = 308U;
	int64_t x274 = -1LL;
	static uint8_t x275 = 19U;
	int32_t t64 = -1317;

	t64 = (((x273|x274)<x275)%x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x278 = INT64_MIN;
	volatile uint64_t x279 = 489757425941366LLU;
	int8_t x280 = 15;
	int32_t t65 = 224956341;

	t65 = (((x277|x278)<x279)%x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int32_t x282 = INT32_MIN;
	static int64_t x283 = 19156113LL;
	int8_t x284 = INT8_MAX;
	int32_t t66 = 0;

	t66 = (((x281|x282)<x283)%x284);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x285 = UINT32_MAX;
	int64_t x286 = INT64_MIN;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = -3;

	t67 = (((x285|x286)<x287)%x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x290 = 7435U;
	volatile uint8_t x292 = 108U;
	volatile int32_t t68 = 970;

	t68 = (((x289|x290)<x291)%x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	static uint64_t x295 = 1955LLU;
	uint8_t x296 = 15U;

	t69 = (((x293|x294)<x295)%x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x297 = -1LL;
	uint16_t x300 = 2046U;
	volatile int32_t t70 = 454113887;

	t70 = (((x297|x298)<x299)%x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x302 = INT8_MIN;
	int8_t x303 = -1;

	t71 = (((x301|x302)<x303)%x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = UINT64_MAX;
	static int16_t x306 = -1;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = -1;
	volatile int32_t t72 = 162502803;

	t72 = (((x305|x306)<x307)%x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x311 = INT16_MIN;
	static uint16_t x312 = UINT16_MAX;
	int32_t t73 = -4553851;

	t73 = (((x309|x310)<x311)%x312);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MIN;
	int32_t t74 = -1;

	t74 = (((x313|x314)<x315)%x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x317 = 290228470856LLU;
	uint8_t x318 = UINT8_MAX;
	volatile uint64_t x319 = 29617263430421840LLU;
	volatile int64_t x320 = INT64_MIN;

	t75 = (((x317|x318)<x319)%x320);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 875U;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MIN;
	volatile int64_t t76 = 9092293558059LL;

	t76 = (((x321|x322)<x323)%x324);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MIN;
	volatile int16_t x326 = 0;
	int8_t x327 = -1;
	volatile uint32_t x328 = UINT32_MAX;

	t77 = (((x325|x326)<x327)%x328);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	int8_t x331 = -1;
	uint32_t t78 = 27814U;

	t78 = (((x329|x330)<x331)%x332);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MAX;
	int16_t x335 = INT16_MAX;
	int8_t x336 = -1;
	volatile int32_t t79 = 123620;

	t79 = (((x333|x334)<x335)%x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x338 = INT16_MAX;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = -1;
	int32_t t80 = -48295;

	t80 = (((x337|x338)<x339)%x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = 23011257945LLU;
	volatile uint8_t x343 = 2U;
	static uint64_t x344 = 66486LLU;
	uint64_t t81 = 25097366121180883LLU;

	t81 = (((x341|x342)<x343)%x344);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MIN;
	int8_t x348 = -1;
	int32_t t82 = 1;

	t82 = (((x345|x346)<x347)%x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -2819613066LL;
	static int32_t x350 = INT32_MAX;
	uint64_t x351 = UINT64_MAX;

	t83 = (((x349|x350)<x351)%x352);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MIN;
	volatile int16_t x354 = INT16_MAX;
	int8_t x355 = INT8_MAX;
	volatile int32_t x356 = 54;
	int32_t t84 = -7;

	t84 = (((x353|x354)<x355)%x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = INT16_MIN;
	int32_t x358 = -1;
	int64_t x359 = -2582885026840LL;
	uint64_t x360 = 1347217273629288LLU;
	static volatile uint64_t t85 = 764502642447786LLU;

	t85 = (((x357|x358)<x359)%x360);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = 1012439U;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = INT32_MAX;
	int64_t x364 = INT64_MAX;

	t86 = (((x361|x362)<x363)%x364);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = 63;
	int64_t x366 = INT64_MAX;
	volatile int32_t t87 = -32959;

	t87 = (((x365|x366)<x367)%x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x370 = 5786714LL;
	uint32_t x371 = UINT32_MAX;
	uint64_t x372 = 2846LLU;
	static uint64_t t88 = 126935073275LLU;

	t88 = (((x369|x370)<x371)%x372);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MAX;
	int16_t x374 = -1098;
	int8_t x376 = 2;
	volatile int32_t t89 = 60;

	t89 = (((x373|x374)<x375)%x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = 8U;
	uint16_t x379 = 1377U;
	int8_t x380 = -1;
	volatile int32_t t90 = -13810;

	t90 = (((x377|x378)<x379)%x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x381 = 246606LLU;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MAX;
	uint64_t x384 = 1838317578746LLU;
	volatile uint64_t t91 = 1002578379584021LLU;

	t91 = (((x381|x382)<x383)%x384);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x385 = -1;
	uint64_t x386 = 1684198760774363LLU;
	static uint64_t x387 = UINT64_MAX;
	int16_t x388 = INT16_MIN;
	static int32_t t92 = 9;

	t92 = (((x385|x386)<x387)%x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x390 = 44642188U;
	uint32_t x391 = 7860578U;
	int8_t x392 = INT8_MIN;
	static int32_t t93 = 2930;

	t93 = (((x389|x390)<x391)%x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	int16_t x394 = -1;
	int16_t x395 = INT16_MIN;
	static int16_t x396 = INT16_MAX;
	volatile int32_t t94 = 3675;

	t94 = (((x393|x394)<x395)%x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 935U;
	int8_t x398 = -23;
	int8_t x399 = INT8_MAX;
	uint32_t x400 = UINT32_MAX;
	uint32_t t95 = 2U;

	t95 = (((x397|x398)<x399)%x400);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x402 = INT8_MIN;
	uint32_t x403 = 0U;
	int16_t x404 = 6397;
	int32_t t96 = -3;

	t96 = (((x401|x402)<x403)%x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = -1;
	int32_t x407 = INT32_MIN;
	volatile uint32_t x408 = 29708764U;
	uint32_t t97 = 106152U;

	t97 = (((x405|x406)<x407)%x408);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = -1;
	uint16_t x410 = 3U;
	uint16_t x412 = 15750U;
	int32_t t98 = 10592775;

	t98 = (((x409|x410)<x411)%x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = -278151385577771LL;
	int64_t x414 = INT64_MIN;
	uint16_t x415 = 5750U;
	volatile uint32_t t99 = 28481828U;

	t99 = (((x413|x414)<x415)%x416);

	if (t99 != 1U) { NG(); } else { ; }
	
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

