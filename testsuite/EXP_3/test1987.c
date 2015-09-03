#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 167706371;
volatile int32_t t1 = -1;
int64_t x12 = -1LL;
volatile uint64_t t2 = 96429154160036874LLU;
static uint64_t x19 = 127650LLU;
volatile uint8_t x20 = 4U;
static uint16_t x24 = 67U;
volatile int32_t x32 = -1;
uint8_t x34 = 20U;
uint64_t x36 = 5566LLU;
uint64_t t10 = 119661887LLU;
volatile int16_t x49 = INT16_MIN;
uint8_t x51 = UINT8_MAX;
uint16_t x53 = UINT16_MAX;
int8_t x54 = INT8_MIN;
volatile int8_t x58 = INT8_MAX;
int16_t x59 = -1;
int16_t x61 = INT16_MAX;
volatile int32_t t16 = 733658290;
uint32_t x69 = 46492844U;
uint64_t x78 = 7714408146455LLU;
int32_t t20 = -1777;
int8_t x96 = -1;
uint32_t x97 = 479U;
int32_t x98 = INT32_MIN;
static int32_t t24 = -25430070;
static int32_t t27 = 3;
uint8_t x113 = 14U;
int32_t x114 = -1;
int64_t x117 = INT64_MIN;
int32_t t30 = -17089;
static uint8_t x125 = 24U;
static volatile uint32_t x129 = 15566U;
int16_t x132 = INT16_MIN;
uint64_t x139 = 132LLU;
int64_t x148 = 15893647552762LL;
static int64_t t40 = -61993122488027LL;
int16_t x165 = 11;
int16_t x168 = -1370;
static int32_t x174 = -1383166;
static int16_t x175 = INT16_MAX;
static volatile uint32_t t43 = 1020226U;
int64_t x180 = INT64_MIN;
int64_t t45 = -299098559289160LL;
int32_t t46 = -60978;
uint16_t x191 = 27U;
static uint16_t x192 = 2007U;
static int32_t t47 = 5;
static uint16_t x194 = 0U;
static int8_t x203 = INT8_MAX;
uint16_t x206 = UINT16_MAX;
static volatile int32_t x211 = INT32_MIN;
static int32_t t52 = -1;
volatile int16_t x214 = INT16_MIN;
static uint8_t x216 = 1U;
uint32_t x222 = 76U;
volatile int64_t x232 = -1LL;
static uint16_t x235 = 72U;
volatile uint8_t x246 = 115U;
int64_t x253 = -9884265173LL;
volatile int8_t x254 = -1;
uint64_t t63 = 0LLU;
static int8_t x259 = INT8_MIN;
volatile uint64_t x261 = 1160LLU;
int8_t x265 = INT8_MAX;
uint64_t x268 = 1LLU;
uint32_t x273 = 2856329U;
volatile uint32_t x278 = 4685U;
int64_t x282 = INT64_MAX;
int32_t x283 = 2975779;
static uint8_t x291 = 4U;
static uint8_t x294 = 0U;
int8_t x295 = INT8_MIN;
uint64_t t73 = 168523LLU;
volatile int64_t t74 = 124117567LL;
int16_t x315 = 6457;
int32_t t79 = 531972;
uint8_t x321 = UINT8_MAX;
int8_t x323 = -1;
uint32_t x332 = 0U;
int32_t x333 = -118527738;
int32_t x335 = INT32_MAX;
int16_t x336 = 1;
int32_t t83 = 260283975;
int16_t x343 = -1;
int8_t x344 = 3;
volatile uint64_t t86 = 31LLU;
uint8_t x355 = 125U;
int32_t x357 = -1;
static int8_t x360 = INT8_MAX;
int16_t x361 = INT16_MAX;
static int8_t x365 = INT8_MIN;
uint32_t x366 = UINT32_MAX;
static uint8_t x371 = UINT8_MAX;
int32_t x375 = INT32_MIN;
int64_t x382 = -38LL;
static int32_t x388 = 39;
int32_t x392 = INT32_MIN;
uint64_t x398 = 2825809LLU;
uint32_t x400 = 30271U;


void f0(void) {
	uint8_t x1 = 28U;
	int8_t x2 = 8;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = UINT16_MAX;

	t0 = ((x1<=x2)&(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	uint16_t x6 = UINT16_MAX;
	static int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;

	t1 = ((x5<=x6)&(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 47689LLU;
	uint64_t x10 = UINT64_MAX;
	volatile uint64_t x11 = 234157LLU;

	t2 = ((x9<=x10)&(x11|x12));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 3U;
	static int32_t x14 = INT32_MAX;
	int16_t x15 = 4008;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -28;

	t3 = ((x13<=x14)&(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	volatile int16_t x18 = INT16_MIN;
	static volatile uint64_t t4 = 8970LLU;

	t4 = ((x17<=x18)&(x19|x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int16_t x22 = 1;
	static int32_t x23 = INT32_MAX;
	int32_t t5 = 11055;

	t5 = ((x21<=x22)&(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 1U;
	static int8_t x26 = INT8_MIN;
	uint16_t x27 = 2940U;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = -93004130910937033LL;

	t6 = ((x25<=x26)&(x27|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MAX;
	static int32_t t7 = -462682637;

	t7 = ((x29<=x30)&(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 14;
	uint32_t x35 = UINT32_MAX;
	uint64_t t8 = 2LLU;

	t8 = ((x33<=x34)&(x35|x36));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = -3;
	static volatile uint32_t x40 = 6U;
	uint32_t t9 = 6413U;

	t9 = ((x37<=x38)&(x39|x40));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x41 = 19242U;
	volatile uint32_t x42 = 976440279U;
	static uint64_t x43 = 556774656207589LLU;
	int32_t x44 = INT32_MIN;

	t10 = ((x41<=x42)&(x43|x44));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	uint8_t x47 = 0U;
	int16_t x48 = -6890;
	int32_t t11 = 9;

	t11 = ((x45<=x46)&(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -2467100762LL;
	volatile uint16_t x52 = 6708U;
	static volatile int32_t t12 = -3;

	t12 = ((x49<=x50)&(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = 54;
	static uint32_t x56 = UINT32_MAX;
	static uint32_t t13 = 868762625U;

	t13 = ((x53<=x54)&(x55|x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int8_t x60 = 1;
	volatile int32_t t14 = -62139;

	t14 = ((x57<=x58)&(x59|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x62 = 1U;
	uint8_t x63 = UINT8_MAX;
	uint16_t x64 = 6U;
	int32_t t15 = 6143287;

	t15 = ((x61<=x62)&(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint16_t x66 = 90U;
	uint16_t x67 = UINT16_MAX;
	int8_t x68 = -1;

	t16 = ((x65<=x66)&(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	static int16_t x71 = INT16_MIN;
	uint8_t x72 = 1U;
	int32_t t17 = -15756;

	t17 = ((x69<=x70)&(x71|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MIN;
	volatile int64_t x75 = INT64_MAX;
	uint32_t x76 = 50982U;
	volatile int64_t t18 = -361189266373848010LL;

	t18 = ((x73<=x74)&(x75|x76));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -1;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = 1U;
	uint32_t t19 = 3U;

	t19 = ((x77<=x78)&(x79|x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 56;
	int32_t x82 = -87;
	static volatile int8_t x83 = -1;
	int16_t x84 = INT16_MAX;

	t20 = ((x81<=x82)&(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	static uint32_t x86 = 1U;
	uint32_t x87 = 3909194U;
	uint32_t x88 = UINT32_MAX;
	uint32_t t21 = 535364716U;

	t21 = ((x85<=x86)&(x87|x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -29200573;
	volatile uint8_t x90 = 17U;
	int32_t x91 = 225720597;
	volatile int8_t x92 = INT8_MAX;
	volatile int32_t t22 = -408594;

	t22 = ((x89<=x90)&(x91|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x93 = 1831323U;
	int64_t x94 = 11453LL;
	int64_t x95 = -28668849009576305LL;
	static int64_t t23 = 9LL;

	t23 = ((x93<=x94)&(x95|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x99 = UINT16_MAX;
	int8_t x100 = INT8_MAX;

	t24 = ((x97<=x98)&(x99|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 157U;
	static int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MIN;
	static int64_t x104 = INT64_MIN;
	int64_t t25 = 49030859836845672LL;

	t25 = ((x101<=x102)&(x103|x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = UINT16_MAX;
	uint64_t x106 = 1137558144631209301LLU;
	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = 5U;
	uint64_t t26 = 208898978436211LLU;

	t26 = ((x105<=x106)&(x107|x108));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 10U;
	uint8_t x110 = 12U;
	static int32_t x111 = INT32_MAX;
	int8_t x112 = 31;

	t27 = ((x109<=x110)&(x111|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x115 = INT32_MIN;
	static int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -9709445360306685LL;

	t28 = ((x113<=x114)&(x115|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x118 = INT64_MIN;
	volatile int16_t x119 = -1216;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 817787;

	t29 = ((x117<=x118)&(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 14678941U;
	int8_t x123 = INT8_MIN;
	static int32_t x124 = 25;

	t30 = ((x121<=x122)&(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x126 = 119330599;
	static int16_t x127 = INT16_MAX;
	static uint8_t x128 = UINT8_MAX;
	int32_t t31 = 497752;

	t31 = ((x125<=x126)&(x127|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = 1;
	int16_t x131 = -55;
	static int32_t t32 = -16375701;

	t32 = ((x129<=x130)&(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	volatile int8_t x134 = -45;
	static int32_t x135 = INT32_MAX;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t33 = 3371;

	t33 = ((x133<=x134)&(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 2U;
	volatile uint8_t x138 = UINT8_MAX;
	uint8_t x140 = 4U;
	static uint64_t t34 = 8087755348LLU;

	t34 = ((x137<=x138)&(x139|x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 46800LLU;
	volatile uint8_t x142 = UINT8_MAX;
	volatile int32_t x143 = INT32_MIN;
	uint16_t x144 = 26466U;
	volatile int32_t t35 = -6;

	t35 = ((x141<=x142)&(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = -7905218491193LL;
	static int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MAX;
	volatile int64_t t36 = 424228819214967884LL;

	t36 = ((x145<=x146)&(x147|x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = 0;
	static int16_t x150 = INT16_MIN;
	int64_t x151 = 166413984955713209LL;
	static int8_t x152 = INT8_MAX;
	static volatile int64_t t37 = -505LL;

	t37 = ((x149<=x150)&(x151|x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 14U;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = 896U;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t38 = 3108;

	t38 = ((x153<=x154)&(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	static uint64_t x158 = 2246LLU;
	int8_t x159 = INT8_MAX;
	volatile int64_t x160 = -1LL;
	volatile int64_t t39 = -7041421258797LL;

	t39 = ((x157<=x158)&(x159|x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	int32_t x162 = 259958;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;

	t40 = ((x161<=x162)&(x163|x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 2U;
	static int64_t x167 = INT64_MIN;
	static int64_t t41 = 1195651LL;

	t41 = ((x165<=x166)&(x167|x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	uint8_t x170 = UINT8_MAX;
	volatile int16_t x171 = INT16_MIN;
	volatile uint64_t x172 = 26589611071955LLU;
	uint64_t t42 = 2830LLU;

	t42 = ((x169<=x170)&(x171|x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	uint32_t x176 = 324U;

	t43 = ((x173<=x174)&(x175|x176));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 5;
	static uint32_t x178 = UINT32_MAX;
	int64_t x179 = INT64_MAX;
	int64_t t44 = 1LL;

	t44 = ((x177<=x178)&(x179|x180));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = -33485609;
	int64_t x184 = INT64_MIN;

	t45 = ((x181<=x182)&(x183|x184));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = UINT8_MAX;
	volatile int32_t x186 = INT32_MAX;
	static uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 3689U;

	t46 = ((x185<=x186)&(x187|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 11U;
	int64_t x190 = INT64_MIN;

	t47 = ((x189<=x190)&(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int16_t x195 = 1027;
	volatile uint32_t x196 = UINT32_MAX;
	volatile uint32_t t48 = 40U;

	t48 = ((x193<=x194)&(x195|x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = INT64_MIN;
	int32_t x199 = -1;
	volatile int32_t x200 = -1712662;
	int32_t t49 = 125105;

	t49 = ((x197<=x198)&(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1298;
	int64_t x202 = INT64_MAX;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = -34595;

	t50 = ((x201<=x202)&(x203|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	static volatile int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	int64_t t51 = 0LL;

	t51 = ((x205<=x206)&(x207|x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	volatile int8_t x210 = -1;
	int8_t x212 = INT8_MIN;

	t52 = ((x209<=x210)&(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = -1;
	uint16_t x215 = 1U;
	int32_t t53 = 67403626;

	t53 = ((x213<=x214)&(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MAX;
	static volatile uint16_t x218 = UINT16_MAX;
	volatile uint16_t x219 = UINT16_MAX;
	static int8_t x220 = INT8_MAX;
	static volatile int32_t t54 = -632216713;

	t54 = ((x217<=x218)&(x219|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 1LL;
	static uint32_t x223 = 1850685773U;
	uint32_t x224 = 38879482U;
	uint32_t t55 = 94331U;

	t55 = ((x221<=x222)&(x223|x224));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 236872317127089LLU;
	int64_t x226 = INT64_MAX;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 973;

	t56 = ((x225<=x226)&(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 19U;
	uint32_t x230 = 535974004U;
	static uint32_t x231 = UINT32_MAX;
	volatile int64_t t57 = 22321555100725396LL;

	t57 = ((x229<=x230)&(x231|x232));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 2U;
	int32_t x234 = INT32_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = -8781135;

	t58 = ((x233<=x234)&(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x238 = INT16_MIN;
	int8_t x239 = 39;
	static volatile uint32_t x240 = UINT32_MAX;
	uint32_t t59 = 3U;

	t59 = ((x237<=x238)&(x239|x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	uint64_t x242 = 1861014790LLU;
	int8_t x243 = INT8_MAX;
	uint8_t x244 = 4U;
	volatile int32_t t60 = -33269060;

	t60 = ((x241<=x242)&(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MAX;
	int64_t x247 = -1LL;
	int32_t x248 = -1;
	int64_t t61 = -2447755LL;

	t61 = ((x245<=x246)&(x247|x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = -52;
	int8_t x251 = 5;
	static int8_t x252 = -7;
	volatile int32_t t62 = 146274126;

	t62 = ((x249<=x250)&(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x255 = 2968940359949144013LLU;
	int32_t x256 = INT32_MAX;

	t63 = ((x253<=x254)&(x255|x256));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = 0U;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t64 = 320514989085437004LLU;

	t64 = ((x257<=x258)&(x259|x260));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = -3866307;
	static volatile int64_t x264 = -299346222145LL;
	int64_t t65 = -572085889510608624LL;

	t65 = ((x261<=x262)&(x263|x264));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = 125462438;
	int16_t x267 = INT16_MAX;
	uint64_t t66 = 475319LLU;

	t66 = ((x265<=x266)&(x267|x268));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = -6;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	volatile int16_t x272 = -1;
	static volatile int32_t t67 = 111;

	t67 = ((x269<=x270)&(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x274 = -219709098;
	volatile uint16_t x275 = 34U;
	static uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = -3996555;

	t68 = ((x273<=x274)&(x275|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int8_t x279 = INT8_MAX;
	static int8_t x280 = INT8_MIN;
	static volatile int32_t t69 = 47976;

	t69 = ((x277<=x278)&(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	volatile int8_t x284 = -5;
	volatile int32_t t70 = -53;

	t70 = ((x281<=x282)&(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	volatile uint32_t x286 = UINT32_MAX;
	volatile int64_t x287 = -1LL;
	int16_t x288 = -45;
	volatile int64_t t71 = -15998030023127904LL;

	t71 = ((x285<=x286)&(x287|x288));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 1575U;
	static uint8_t x290 = 1U;
	volatile int8_t x292 = INT8_MIN;
	static int32_t t72 = -975;

	t72 = ((x289<=x290)&(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	uint64_t x296 = 434649LLU;

	t73 = ((x293<=x294)&(x295|x296));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	int64_t x300 = -1LL;

	t74 = ((x297<=x298)&(x299|x300));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = 4473;
	uint32_t x302 = 1922217893U;
	int32_t x303 = INT32_MAX;
	int32_t x304 = 4981691;
	int32_t t75 = -377421;

	t75 = ((x301<=x302)&(x303|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 6U;
	static uint64_t x306 = 5837LLU;
	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -7112;

	t76 = ((x305<=x306)&(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = -23;
	uint16_t x310 = 3U;
	uint16_t x311 = 26U;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t77 = 31;

	t77 = ((x309<=x310)&(x311|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 5159;
	int64_t x314 = -119585LL;
	int8_t x316 = INT8_MAX;
	static int32_t t78 = 1;

	t78 = ((x313<=x314)&(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -5770329LL;
	int32_t x318 = -1;
	int32_t x319 = -3678291;
	uint8_t x320 = UINT8_MAX;

	t79 = ((x317<=x318)&(x319|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = -9;
	uint32_t x324 = 205U;
	volatile uint32_t t80 = 7U;

	t80 = ((x321<=x322)&(x323|x324));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	static uint32_t x326 = 47170U;
	uint32_t x327 = 2143160111U;
	static int64_t x328 = -1LL;
	volatile int64_t t81 = -2655481LL;

	t81 = ((x325<=x326)&(x327|x328));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 1;
	uint64_t x330 = 15817562435414LLU;
	uint8_t x331 = 68U;
	static uint32_t t82 = 35639U;

	t82 = ((x329<=x330)&(x331|x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = -1LL;

	t83 = ((x333<=x334)&(x335|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 8U;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = INT8_MIN;
	uint8_t x340 = 15U;
	static int32_t t84 = -234;

	t84 = ((x337<=x338)&(x339|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	volatile uint8_t x342 = 22U;
	volatile int32_t t85 = -63772;

	t85 = ((x341<=x342)&(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 3375182U;
	int64_t x346 = 20433LL;
	uint64_t x347 = 3996152689277LLU;
	int8_t x348 = 17;

	t86 = ((x345<=x346)&(x347|x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	static int16_t x350 = 13;
	int16_t x351 = INT16_MAX;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t87 = 147549;

	t87 = ((x349<=x350)&(x351|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	static int16_t x354 = -1;
	static volatile int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 113006526;

	t88 = ((x353<=x354)&(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x358 = INT16_MAX;
	volatile int64_t x359 = INT64_MAX;
	int64_t t89 = -1161062724167658342LL;

	t89 = ((x357<=x358)&(x359|x360));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = 0LLU;
	uint8_t x363 = 31U;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = 1801029;

	t90 = ((x361<=x362)&(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x367 = -1;
	volatile uint8_t x368 = 1U;
	int32_t t91 = -2328;

	t91 = ((x365<=x366)&(x367|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 157745323418956145LLU;
	int32_t x370 = INT32_MIN;
	int8_t x372 = -1;
	static volatile int32_t t92 = 0;

	t92 = ((x369<=x370)&(x371|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1202U;
	volatile int16_t x374 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 20914;

	t93 = ((x373<=x374)&(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 3990LL;
	uint16_t x378 = 610U;
	static int16_t x379 = -18;
	int8_t x380 = -51;
	volatile int32_t t94 = 1401928;

	t94 = ((x377<=x378)&(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = -1;
	uint32_t x383 = UINT32_MAX;
	static uint16_t x384 = 160U;
	volatile uint32_t t95 = 108U;

	t95 = ((x381<=x382)&(x383|x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = 1;
	int16_t x386 = INT16_MIN;
	static uint16_t x387 = UINT16_MAX;
	int32_t t96 = -9957;

	t96 = ((x385<=x386)&(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = -1;
	static volatile int32_t x391 = -1;
	volatile int32_t t97 = -971595;

	t97 = ((x389<=x390)&(x391|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -6330;
	int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	volatile int64_t x396 = 2857199385805811LL;
	static int64_t t98 = 262934209009LL;

	t98 = ((x393<=x394)&(x395|x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 4U;
	int64_t x399 = -6196279891LL;
	static int64_t t99 = -1947682981995049LL;

	t99 = ((x397<=x398)&(x399|x400));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

