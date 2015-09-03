#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 16;
uint16_t x7 = UINT16_MAX;
int16_t x15 = INT16_MAX;
volatile int32_t t3 = 0;
int64_t x19 = -336886448257362LL;
uint8_t x25 = UINT8_MAX;
int8_t x26 = INT8_MAX;
int8_t x32 = INT8_MIN;
volatile int32_t t8 = 15289;
int8_t x42 = INT8_MIN;
int16_t x47 = INT16_MIN;
int32_t x57 = -1;
uint64_t x66 = UINT64_MAX;
int8_t x68 = -1;
static int16_t x69 = INT16_MIN;
int64_t x70 = INT64_MIN;
volatile int16_t x72 = INT16_MIN;
int32_t t17 = -9786759;
int16_t x74 = -6979;
int8_t x76 = -1;
int64_t x78 = -550732936LL;
int64_t x80 = -1596252350462796952LL;
int32_t t21 = -587785;
int16_t x96 = -1;
uint64_t x97 = UINT64_MAX;
volatile int16_t x102 = -1;
static int64_t x104 = INT64_MAX;
uint32_t x107 = 31U;
int32_t t26 = 93;
int64_t x109 = -358023LL;
static int32_t x125 = INT32_MAX;
int16_t x127 = INT16_MIN;
volatile int32_t t33 = -470559;
int8_t x148 = 12;
int32_t x152 = INT32_MAX;
uint32_t x153 = 11783401U;
int32_t t39 = 515;
volatile int8_t x174 = INT8_MIN;
static int8_t x175 = -1;
volatile int32_t x176 = 12353;
int8_t x177 = INT8_MIN;
volatile int16_t x178 = 2703;
uint64_t x180 = UINT64_MAX;
uint16_t x185 = UINT16_MAX;
volatile uint8_t x192 = 47U;
volatile int32_t t47 = 4020933;
int32_t x195 = 1;
uint8_t x197 = 0U;
uint32_t x201 = 219858U;
uint32_t x204 = UINT32_MAX;
static int32_t t50 = -58;
volatile uint8_t x208 = 4U;
int64_t x210 = 17821LL;
static uint32_t x216 = 432221059U;
uint8_t x217 = 2U;
int32_t t54 = -14655;
uint32_t x226 = UINT32_MAX;
uint64_t x227 = 3042LLU;
uint32_t x232 = UINT32_MAX;
uint32_t x245 = UINT32_MAX;
int32_t t61 = 2;
int64_t x254 = INT64_MIN;
static int64_t x257 = INT64_MIN;
uint32_t x258 = 34133025U;
int8_t x259 = 0;
volatile int32_t t64 = -561718;
int32_t t65 = 36771307;
int64_t x265 = 4201877LL;
uint64_t x266 = 8414652901139171005LLU;
volatile uint8_t x284 = 0U;
uint32_t x285 = 5U;
static volatile uint64_t x288 = 176166LLU;
uint64_t x292 = 2076259LLU;
volatile uint64_t x295 = 14639028288579LLU;
int32_t x296 = INT32_MAX;
int32_t t74 = -1793;
int64_t x309 = -1LL;
int16_t x313 = -1;
int32_t x320 = INT32_MIN;
int32_t t79 = 108;
int8_t x340 = INT8_MIN;
int32_t x341 = 23008;
int32_t x342 = INT32_MIN;
int8_t x343 = INT8_MIN;
uint16_t x345 = 15480U;
int32_t x346 = INT32_MIN;
volatile int32_t t86 = -450706;
int16_t x350 = -1;
int32_t x354 = INT32_MIN;
uint16_t x356 = 0U;
int8_t x360 = INT8_MAX;
static int32_t x364 = INT32_MAX;
static int64_t x365 = -53LL;
volatile int32_t x370 = INT32_MAX;
int64_t x372 = 0LL;
static int16_t x379 = INT16_MAX;
int16_t x380 = 1;
volatile int64_t x385 = -1LL;
int64_t x392 = INT64_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile uint16_t x2 = UINT16_MAX;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = -1;

	t0 = (((x1|x2)<=x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -7155994;

	t1 = (((x5|x6)<=x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	static int16_t x10 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -26;

	t2 = (((x9|x10)<=x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint16_t x14 = 11559U;
	volatile int16_t x16 = -52;

	t3 = (((x13|x14)<=x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = UINT64_MAX;
	uint16_t x20 = 1251U;
	static volatile int32_t t4 = 1718;

	t4 = (((x17|x18)<=x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 455U;
	int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;
	int8_t x24 = 15;
	volatile int32_t t5 = 18450;

	t5 = (((x21|x22)<=x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x27 = 125198LLU;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -27130391;

	t6 = (((x25|x26)<=x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1591;
	static volatile int32_t x30 = INT32_MIN;
	volatile uint64_t x31 = 2280LLU;
	int32_t t7 = 0;

	t7 = (((x29|x30)<=x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	volatile int64_t x36 = INT64_MIN;

	t8 = (((x33|x34)<=x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	static uint32_t x38 = 31490203U;
	int64_t x39 = INT64_MIN;
	static volatile int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 657072;

	t9 = (((x37|x38)<=x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 15730U;
	uint16_t x43 = 1046U;
	static uint32_t x44 = 592181U;
	int32_t t10 = 61;

	t10 = (((x41|x42)<=x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -3644735620701176LL;
	int8_t x46 = INT8_MIN;
	int8_t x48 = INT8_MAX;
	static int32_t t11 = 1286;

	t11 = (((x45|x46)<=x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 105U;
	int32_t x50 = 1916;
	static uint8_t x51 = UINT8_MAX;
	int32_t x52 = -1961448;
	static volatile int32_t t12 = -8320136;

	t12 = (((x49|x50)<=x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int32_t x54 = INT32_MIN;
	int8_t x55 = 2;
	uint8_t x56 = 10U;
	static volatile int32_t t13 = -420971313;

	t13 = (((x53|x54)<=x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x58 = 11U;
	static uint16_t x59 = 3U;
	uint16_t x60 = 15U;
	static volatile int32_t t14 = 3126;

	t14 = (((x57|x58)<=x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 232U;
	volatile int32_t x62 = -93310;
	int16_t x63 = -1;
	int16_t x64 = -43;
	int32_t t15 = -30482;

	t15 = (((x61|x62)<=x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	int64_t x67 = -24729958LL;
	static volatile int32_t t16 = -4072663;

	t16 = (((x65|x66)<=x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x71 = 0;

	t17 = (((x69|x70)<=x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int16_t x75 = -1;
	volatile int32_t t18 = -3;

	t18 = (((x73|x74)<=x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = 28;
	int64_t x79 = INT64_MAX;
	int32_t t19 = 216587066;

	t19 = (((x77|x78)<=x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint16_t x82 = UINT16_MAX;
	static uint16_t x83 = 5643U;
	static int16_t x84 = INT16_MAX;
	static volatile int32_t t20 = 56;

	t20 = (((x81|x82)<=x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 7U;
	int16_t x86 = 2482;
	uint8_t x87 = 2U;
	int32_t x88 = INT32_MIN;

	t21 = (((x85|x86)<=x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 1;
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = INT32_MIN;
	int16_t x92 = 25;
	volatile int32_t t22 = -2729;

	t22 = (((x89|x90)<=x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = 2795409U;
	volatile int64_t x95 = INT64_MAX;
	int32_t t23 = 1;

	t23 = (((x93|x94)<=x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MIN;
	volatile int8_t x100 = INT8_MIN;
	static volatile int32_t t24 = 3460462;

	t24 = (((x97|x98)<=x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	volatile int8_t x103 = 3;
	int32_t t25 = -449186935;

	t25 = (((x101|x102)<=x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = UINT8_MAX;
	int8_t x106 = -1;
	int64_t x108 = INT64_MIN;

	t26 = (((x105|x106)<=x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = 134847775U;
	static int8_t x111 = -1;
	uint16_t x112 = 22U;
	volatile int32_t t27 = -681;

	t27 = (((x109|x110)<=x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 214LLU;
	int32_t x114 = 17319;
	static int16_t x115 = 0;
	uint32_t x116 = 120047U;
	int32_t t28 = -6843371;

	t28 = (((x113|x114)<=x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 15463151994781159LLU;
	static uint16_t x118 = 2U;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t x120 = INT32_MAX;
	int32_t t29 = 950;

	t29 = (((x117|x118)<=x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = INT64_MAX;
	int8_t x122 = INT8_MAX;
	static int8_t x123 = -31;
	int16_t x124 = -3505;
	int32_t t30 = -7;

	t30 = (((x121|x122)<=x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = INT32_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 407692;

	t31 = (((x125|x126)<=x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -5506;
	volatile uint8_t x130 = 7U;
	static int16_t x131 = INT16_MAX;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -109;

	t32 = (((x129|x130)<=x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = 1005;
	int8_t x135 = -1;
	static int64_t x136 = INT64_MIN;

	t33 = (((x133|x134)<=x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MAX;
	volatile int8_t x138 = -1;
	static int8_t x139 = -21;
	int8_t x140 = -1;
	volatile int32_t t34 = -16021;

	t34 = (((x137|x138)<=x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	volatile uint16_t x142 = UINT16_MAX;
	int32_t x143 = 520356570;
	volatile uint32_t x144 = 9U;
	volatile int32_t t35 = 21;

	t35 = (((x141|x142)<=x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	int32_t x146 = -37156;
	volatile uint32_t x147 = UINT32_MAX;
	static int32_t t36 = 45893;

	t36 = (((x145|x146)<=x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = -732;
	static volatile int16_t x150 = 329;
	uint64_t x151 = 171013443012LLU;
	int32_t t37 = -502698564;

	t37 = (((x149|x150)<=x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -1;
	volatile uint32_t x155 = UINT32_MAX;
	static int32_t x156 = -1;
	int32_t t38 = 3151;

	t38 = (((x153|x154)<=x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 28801619;
	int32_t x158 = INT32_MAX;
	int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;

	t39 = (((x157|x158)<=x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 8855913766017555LLU;
	int16_t x162 = INT16_MIN;
	uint32_t x163 = 2173U;
	uint32_t x164 = 2145866387U;
	int32_t t40 = -329;

	t40 = (((x161|x162)<=x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	static uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MIN;
	volatile int16_t x168 = INT16_MAX;
	static int32_t t41 = 437724;

	t41 = (((x165|x166)<=x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	volatile uint8_t x170 = 109U;
	volatile int8_t x171 = INT8_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 484772714;

	t42 = (((x169|x170)<=x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int32_t t43 = 509051;

	t43 = (((x173|x174)<=x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x179 = 12;
	volatile int32_t t44 = -28127601;

	t44 = (((x177|x178)<=x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 823782273618LLU;
	int16_t x182 = INT16_MIN;
	static int64_t x183 = -1LL;
	uint32_t x184 = 1115607031U;
	int32_t t45 = 2;

	t45 = (((x181|x182)<=x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = UINT8_MAX;
	int16_t x187 = -1;
	static int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -1;

	t46 = (((x185|x186)<=x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 14907U;
	int64_t x190 = -1865923LL;
	volatile int8_t x191 = INT8_MAX;

	t47 = (((x189|x190)<=x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 3U;
	int16_t x194 = INT16_MIN;
	static int16_t x196 = 2550;
	static volatile int32_t t48 = 4249391;

	t48 = (((x193|x194)<=x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 135059963630203LLU;
	int32_t x199 = 36967;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = -44;

	t49 = (((x197|x198)<=x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = INT8_MIN;
	static uint8_t x203 = UINT8_MAX;

	t50 = (((x201|x202)<=x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = 260;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = 18549284294161272LL;
	int32_t t51 = 2;

	t51 = (((x205|x206)<=x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = 1723;
	int32_t x211 = 1014;
	int32_t x212 = 120619237;
	volatile int32_t t52 = -102146940;

	t52 = (((x209|x210)<=x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MAX;
	int32_t t53 = -122176;

	t53 = (((x213|x214)<=x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 167U;
	uint8_t x219 = 0U;
	uint32_t x220 = 3259054U;

	t54 = (((x217|x218)<=x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 190797LL;
	uint64_t x222 = 8933279LLU;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = 32889281681LLU;
	int32_t t55 = -862529426;

	t55 = (((x221|x222)<=x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int8_t x228 = -54;
	volatile int32_t t56 = 987245969;

	t56 = (((x225|x226)<=x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -2316LL;
	uint32_t x230 = 0U;
	static uint32_t x231 = 39357152U;
	int32_t t57 = 1;

	t57 = (((x229|x230)<=x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = 7;
	int32_t x234 = INT32_MIN;
	int64_t x235 = -1LL;
	static int16_t x236 = -1;
	int32_t t58 = 166688949;

	t58 = (((x233|x234)<=x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = 2650;
	volatile int32_t x238 = 7188;
	int8_t x239 = 11;
	int64_t x240 = 108884871330LL;
	volatile int32_t t59 = 0;

	t59 = (((x237|x238)<=x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = -3;
	int64_t x244 = -482185962207193025LL;
	static int32_t t60 = -29;

	t60 = (((x241|x242)<=x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 1U;
	volatile uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MIN;

	t61 = (((x245|x246)<=x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 6U;
	uint32_t x250 = 2063105244U;
	static volatile int32_t x251 = 29;
	int16_t x252 = -1;
	static volatile int32_t t62 = -2554;

	t62 = (((x249|x250)<=x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MAX;
	uint32_t x255 = UINT32_MAX;
	uint8_t x256 = 2U;
	volatile int32_t t63 = 15748;

	t63 = (((x253|x254)<=x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x260 = INT16_MIN;

	t64 = (((x257|x258)<=x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = 195963266441262593LL;
	volatile int64_t x262 = -995874645381464LL;
	static uint32_t x263 = 51279000U;
	int8_t x264 = -1;

	t65 = (((x261|x262)<=x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x267 = UINT64_MAX;
	int16_t x268 = -1;
	int32_t t66 = 274454;

	t66 = (((x265|x266)<=x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int64_t x270 = -16695LL;
	int64_t x271 = 435LL;
	int8_t x272 = -48;
	int32_t t67 = 131921;

	t67 = (((x269|x270)<=x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MAX;
	int32_t x274 = INT32_MIN;
	static volatile int32_t x275 = 0;
	volatile int64_t x276 = INT64_MAX;
	int32_t t68 = -61697;

	t68 = (((x273|x274)<=x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -374098696;
	static int16_t x278 = INT16_MAX;
	int64_t x279 = INT64_MAX;
	volatile int8_t x280 = -13;
	volatile int32_t t69 = 1551;

	t69 = (((x277|x278)<=x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = UINT32_MAX;
	int16_t x282 = 1336;
	int64_t x283 = 3712466480006216LL;
	int32_t t70 = -8118;

	t70 = (((x281|x282)<=x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x286 = 60U;
	static volatile int8_t x287 = INT8_MIN;
	volatile int32_t t71 = -117;

	t71 = (((x285|x286)<=x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 31;
	int64_t x290 = 0LL;
	uint8_t x291 = 4U;
	int32_t t72 = -9242;

	t72 = (((x289|x290)<=x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = -1;
	volatile int32_t t73 = 1735;

	t73 = (((x293|x294)<=x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = -4;
	uint16_t x300 = 87U;

	t74 = (((x297|x298)<=x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = -3109340130397LL;
	static volatile uint64_t x302 = 154532241419259LLU;
	static int8_t x303 = 0;
	int32_t x304 = INT32_MAX;
	int32_t t75 = -98270;

	t75 = (((x301|x302)<=x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int8_t x306 = -19;
	static int32_t x307 = INT32_MIN;
	int32_t x308 = -1;
	volatile int32_t t76 = -3;

	t76 = (((x305|x306)<=x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x310 = -1;
	static int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	static int32_t t77 = -490;

	t77 = (((x309|x310)<=x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x314 = INT8_MAX;
	uint8_t x315 = 8U;
	int32_t x316 = 92427815;
	volatile int32_t t78 = 29327;

	t78 = (((x313|x314)<=x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 65U;
	volatile int64_t x318 = INT64_MIN;
	uint8_t x319 = UINT8_MAX;

	t79 = (((x317|x318)<=x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	volatile int64_t x323 = INT64_MIN;
	uint8_t x324 = 3U;
	static volatile int32_t t80 = -1;

	t80 = (((x321|x322)<=x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static int8_t x326 = -4;
	int32_t x327 = 9;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = -3274543;

	t81 = (((x325|x326)<=x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 32;
	uint16_t x330 = UINT16_MAX;
	uint32_t x331 = 689U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -96195029;

	t82 = (((x329|x330)<=x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -2LL;
	uint8_t x334 = UINT8_MAX;
	volatile int8_t x335 = 1;
	int8_t x336 = 0;
	int32_t t83 = 911363485;

	t83 = (((x333|x334)<=x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 1;
	uint16_t x338 = 0U;
	int8_t x339 = INT8_MIN;
	volatile int32_t t84 = 2477436;

	t84 = (((x337|x338)<=x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x344 = UINT8_MAX;
	static int32_t t85 = 243131430;

	t85 = (((x341|x342)<=x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x347 = INT64_MIN;
	static volatile int32_t x348 = INT32_MAX;

	t86 = (((x345|x346)<=x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = -1204;
	int8_t x351 = 0;
	int16_t x352 = INT16_MIN;
	int32_t t87 = 62997;

	t87 = (((x349|x350)<=x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MAX;
	int8_t x355 = -2;
	volatile int32_t t88 = -1;

	t88 = (((x353|x354)<=x355)==x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint64_t x358 = UINT64_MAX;
	uint8_t x359 = UINT8_MAX;
	int32_t t89 = 1504;

	t89 = (((x357|x358)<=x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 0U;
	volatile uint64_t x362 = 786115751LLU;
	static uint64_t x363 = 6603221557061LLU;
	int32_t t90 = 744016124;

	t90 = (((x361|x362)<=x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = 0;
	int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MAX;
	volatile int32_t t91 = 440;

	t91 = (((x365|x366)<=x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x369 = -1;
	volatile uint32_t x371 = 7063144U;
	volatile int32_t t92 = 279329842;

	t92 = (((x369|x370)<=x371)==x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	static uint8_t x374 = 62U;
	uint8_t x375 = UINT8_MAX;
	volatile uint32_t x376 = UINT32_MAX;
	volatile int32_t t93 = -6166;

	t93 = (((x373|x374)<=x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	static volatile int32_t x378 = -1384927;
	volatile int32_t t94 = 1;

	t94 = (((x377|x378)<=x379)==x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = UINT16_MAX;
	uint8_t x383 = UINT8_MAX;
	static int8_t x384 = INT8_MAX;
	int32_t t95 = 43639068;

	t95 = (((x381|x382)<=x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x386 = 15LLU;
	int64_t x387 = INT64_MIN;
	static int8_t x388 = -1;
	int32_t t96 = -1;

	t96 = (((x385|x386)<=x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	static int8_t x390 = -1;
	int32_t x391 = -1;
	volatile int32_t t97 = -555908717;

	t97 = (((x389|x390)<=x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 1118LLU;
	static int16_t x394 = INT16_MIN;
	int64_t x395 = -222781LL;
	uint32_t x396 = 231582U;
	volatile int32_t t98 = 1;

	t98 = (((x393|x394)<=x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MIN;
	uint8_t x398 = 24U;
	int32_t x399 = INT32_MIN;
	static volatile int64_t x400 = INT64_MAX;
	volatile int32_t t99 = 321;

	t99 = (((x397|x398)<=x399)==x400);

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

