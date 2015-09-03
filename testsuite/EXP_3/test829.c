#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -1;
int32_t x15 = INT32_MAX;
int32_t x20 = -177;
uint8_t x23 = UINT8_MAX;
uint16_t x24 = 288U;
int32_t t5 = 3831976;
int64_t x33 = INT64_MAX;
volatile int32_t x34 = 200;
int16_t x36 = INT16_MAX;
int32_t t10 = -1;
int64_t x54 = -1LL;
int32_t t12 = -2286;
int8_t x59 = INT8_MIN;
uint64_t x60 = 250605225LLU;
int16_t x66 = -1;
int16_t x67 = INT16_MAX;
int32_t x71 = -1;
int8_t x77 = INT8_MAX;
uint64_t x79 = 14467889996615338LLU;
uint8_t x87 = 72U;
volatile int32_t t21 = 1;
static volatile int32_t t22 = 73560079;
uint32_t x97 = UINT32_MAX;
int32_t x101 = INT32_MIN;
volatile uint32_t x103 = 746532U;
int16_t x107 = -2588;
uint8_t x120 = UINT8_MAX;
volatile int16_t x122 = -2;
int32_t x123 = INT32_MAX;
int16_t x136 = INT16_MIN;
int32_t t33 = -6646017;
int64_t x142 = -2LL;
static uint32_t x147 = 1070958108U;
volatile int32_t t35 = 39898;
int16_t x153 = -1;
int32_t x156 = -286742757;
volatile int32_t t37 = 6;
static int32_t t38 = 105;
static uint32_t x168 = 6U;
int32_t t42 = -6;
int64_t x186 = INT64_MIN;
uint32_t x189 = 5666543U;
int8_t x198 = INT8_MIN;
int16_t x199 = INT16_MIN;
int8_t x201 = -1;
int16_t x204 = -1;
static int8_t x213 = INT8_MIN;
volatile int32_t t52 = 457;
static int16_t x231 = INT16_MAX;
static volatile int32_t t56 = 9351;
uint8_t x237 = 0U;
int16_t x239 = INT16_MIN;
static uint8_t x240 = 3U;
int32_t t58 = -1321;
int64_t x243 = 3465052062823373286LL;
uint8_t x244 = 10U;
uint8_t x248 = UINT8_MAX;
int32_t t60 = -54467;
volatile uint16_t x253 = 3U;
int32_t x259 = INT32_MIN;
volatile int64_t x260 = INT64_MAX;
static int64_t x265 = INT64_MAX;
static int8_t x266 = INT8_MAX;
int8_t x276 = INT8_MAX;
int32_t x279 = -1;
int64_t x288 = -1LL;
volatile int32_t x291 = 677495;
static int64_t x292 = 103LL;
volatile int32_t t72 = -7;
volatile int8_t x299 = -1;
int32_t t73 = 107414;
uint16_t x304 = UINT16_MAX;
static int8_t x316 = 2;
int16_t x321 = INT16_MAX;
static volatile int64_t x322 = INT64_MIN;
static int8_t x326 = INT8_MIN;
int32_t x329 = 368510;
static volatile int32_t x336 = -1;
volatile int32_t t82 = 15025513;
volatile int64_t x341 = INT64_MAX;
int16_t x346 = INT16_MIN;
int64_t x349 = INT64_MAX;
volatile int32_t t86 = 0;
volatile int32_t t87 = -7791;
volatile int64_t x362 = 148168592527050LL;
static volatile int32_t t89 = 250780428;
static int32_t x367 = -1;
int32_t x369 = INT32_MIN;
static volatile int16_t x374 = INT16_MIN;
int32_t t92 = 411;
int8_t x378 = INT8_MIN;
static volatile int32_t t95 = -10;
static volatile int16_t x389 = INT16_MAX;
int8_t x396 = -62;
int64_t x401 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 20U;
	int64_t x2 = INT64_MAX;
	int64_t x3 = INT64_MIN;
	int32_t x4 = 43159141;
	volatile int32_t t0 = -19532331;

	t0 = ((x1|x2)<=(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int8_t x7 = INT8_MAX;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 35;

	t1 = ((x5|x6)<=(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x10 = 2;
	static int8_t x11 = 5;
	volatile int8_t x12 = INT8_MAX;
	int32_t t2 = -417;

	t2 = ((x9|x10)<=(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int16_t x14 = INT16_MAX;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 138952;

	t3 = ((x13|x14)<=(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	static uint32_t x18 = 1586980504U;
	int64_t x19 = INT64_MAX;
	int32_t t4 = -17100;

	t4 = ((x17|x18)<=(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 2U;
	int64_t x22 = INT64_MIN;

	t5 = ((x21|x22)<=(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int32_t x26 = -2657448;
	static uint8_t x27 = UINT8_MAX;
	uint16_t x28 = 53U;
	static int32_t t6 = -528617;

	t6 = ((x25|x26)<=(x27%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = INT16_MAX;
	volatile int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -108548468;

	t7 = ((x29|x30)<=(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x35 = -1LL;
	volatile int32_t t8 = -15445816;

	t8 = ((x33|x34)<=(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = 807;
	static int16_t x39 = INT16_MAX;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 64252;

	t9 = ((x37|x38)<=(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MAX;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = INT64_MIN;
	volatile int32_t x48 = -1;

	t10 = ((x45|x46)<=(x47%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 705413237U;
	uint64_t x50 = 116348LLU;
	static uint32_t x51 = UINT32_MAX;
	volatile int8_t x52 = -1;
	int32_t t11 = 24108;

	t11 = ((x49|x50)<=(x51%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 354568LLU;
	uint32_t x55 = 332318275U;
	static int32_t x56 = INT32_MIN;

	t12 = ((x53|x54)<=(x55%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	static volatile uint16_t x58 = UINT16_MAX;
	int32_t t13 = -8273621;

	t13 = ((x57|x58)<=(x59%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	int32_t x62 = 13993256;
	int32_t x63 = INT32_MIN;
	int16_t x64 = 3;
	int32_t t14 = 10696694;

	t14 = ((x61|x62)<=(x63%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -61;
	static uint64_t x68 = 1116511863048954023LLU;
	int32_t t15 = 45831;

	t15 = ((x65|x66)<=(x67%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = 2LL;
	int16_t x70 = INT16_MAX;
	volatile int32_t x72 = -72328;
	int32_t t16 = 214220;

	t16 = ((x69|x70)<=(x71%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MIN;
	uint32_t x74 = 1355U;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	volatile int32_t t17 = 208;

	t17 = ((x73|x74)<=(x75%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x78 = 3142530;
	int32_t x80 = -345615381;
	volatile int32_t t18 = -6;

	t18 = ((x77|x78)<=(x79%x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	static int16_t x84 = 65;
	int32_t t19 = 5;

	t19 = ((x81|x82)<=(x83%x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 52098672026573LL;
	int16_t x86 = -1;
	int8_t x88 = INT8_MIN;
	int32_t t20 = -28431;

	t20 = ((x85|x86)<=(x87%x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 5699U;
	int16_t x91 = INT16_MAX;
	uint8_t x92 = 6U;

	t21 = ((x89|x90)<=(x91%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 96U;
	int64_t x94 = INT64_MIN;
	static int8_t x95 = -25;
	volatile int32_t x96 = -1;

	t22 = ((x93|x94)<=(x95%x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x98 = 2770U;
	uint64_t x99 = 9753533606977590LLU;
	int64_t x100 = INT64_MIN;
	int32_t t23 = 9;

	t23 = ((x97|x98)<=(x99%x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x102 = 0U;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t24 = 1;

	t24 = ((x101|x102)<=(x103%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	static int16_t x106 = 10757;
	uint16_t x108 = 1U;
	volatile int32_t t25 = -815522;

	t25 = ((x105|x106)<=(x107%x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	uint8_t x110 = 47U;
	int8_t x111 = -1;
	int16_t x112 = 6;
	static int32_t t26 = -3;

	t26 = ((x109|x110)<=(x111%x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	static int8_t x114 = 7;
	int16_t x115 = INT16_MAX;
	uint64_t x116 = 2001530LLU;
	volatile int32_t t27 = -1840;

	t27 = ((x113|x114)<=(x115%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 154U;
	int32_t x118 = INT32_MAX;
	volatile uint64_t x119 = 4542LLU;
	int32_t t28 = -1281;

	t28 = ((x117|x118)<=(x119%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x121 = 13867U;
	int64_t x124 = INT64_MIN;
	volatile int32_t t29 = 7280;

	t29 = ((x121|x122)<=(x123%x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MAX;
	int8_t x126 = -1;
	uint64_t x127 = 39066499593LLU;
	volatile int32_t x128 = -1;
	int32_t t30 = 0;

	t30 = ((x125|x126)<=(x127%x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = -1;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t31 = 16125582;

	t31 = ((x129|x130)<=(x131%x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 8U;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 44U;
	volatile int32_t t32 = -14;

	t32 = ((x133|x134)<=(x135%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = 19U;
	volatile uint32_t x138 = 89215U;
	int8_t x139 = -29;
	int64_t x140 = INT64_MIN;

	t33 = ((x137|x138)<=(x139%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 3U;
	static int16_t x143 = INT16_MAX;
	static int8_t x144 = -1;
	static int32_t t34 = 1596;

	t34 = ((x141|x142)<=(x143%x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 334821112LL;
	uint32_t x146 = 167265U;
	int32_t x148 = INT32_MIN;

	t35 = ((x145|x146)<=(x147%x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -211;
	volatile int8_t x150 = 1;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = 7U;
	volatile int32_t t36 = 34;

	t36 = ((x149|x150)<=(x151%x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x154 = INT8_MIN;
	volatile uint64_t x155 = UINT64_MAX;

	t37 = ((x153|x154)<=(x155%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x157 = 3U;
	int16_t x158 = -1;
	int32_t x159 = -33535160;
	uint8_t x160 = 1U;

	t38 = ((x157|x158)<=(x159%x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = 10U;
	volatile int16_t x162 = 14;
	static uint32_t x163 = 11879668U;
	int8_t x164 = INT8_MIN;
	volatile int32_t t39 = -1;

	t39 = ((x161|x162)<=(x163%x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 0;
	int16_t x166 = -1;
	int16_t x167 = -3;
	static int32_t t40 = 1679896;

	t40 = ((x165|x166)<=(x167%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x169 = INT8_MAX;
	volatile int16_t x170 = INT16_MAX;
	volatile int32_t x171 = INT32_MIN;
	uint16_t x172 = 10027U;
	int32_t t41 = 1;

	t41 = ((x169|x170)<=(x171%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MAX;
	uint64_t x176 = UINT64_MAX;

	t42 = ((x173|x174)<=(x175%x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = INT8_MAX;
	static int64_t x178 = -1LL;
	uint64_t x179 = 588LLU;
	uint64_t x180 = 732545443425LLU;
	int32_t t43 = 26;

	t43 = ((x177|x178)<=(x179%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x181 = 4007U;
	static int64_t x182 = -1LL;
	static int64_t x183 = -1LL;
	static int16_t x184 = INT16_MAX;
	static volatile int32_t t44 = -6;

	t44 = ((x181|x182)<=(x183%x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = 9674142LL;
	int32_t t45 = -625;

	t45 = ((x185|x186)<=(x187%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x190 = INT16_MAX;
	static uint8_t x191 = 17U;
	int16_t x192 = INT16_MIN;
	int32_t t46 = -46410;

	t46 = ((x189|x190)<=(x191%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 11U;
	uint64_t x194 = 5036860816513449LLU;
	static int32_t x195 = 22248613;
	volatile int16_t x196 = 5967;
	volatile int32_t t47 = 2;

	t47 = ((x193|x194)<=(x195%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	static volatile uint8_t x200 = 53U;
	int32_t t48 = 3;

	t48 = ((x197|x198)<=(x199%x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MAX;
	volatile int32_t t49 = 107934;

	t49 = ((x201|x202)<=(x203%x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = -1;
	volatile uint16_t x206 = 14400U;
	static uint8_t x207 = 2U;
	int8_t x208 = 1;
	int32_t t50 = 1829400;

	t50 = ((x205|x206)<=(x207%x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x209 = 0;
	int32_t x210 = -1;
	int16_t x211 = -1727;
	int8_t x212 = INT8_MIN;
	int32_t t51 = 3414;

	t51 = ((x209|x210)<=(x211%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x214 = 2U;
	volatile int16_t x215 = INT16_MIN;
	int64_t x216 = -1LL;

	t52 = ((x213|x214)<=(x215%x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	static uint16_t x218 = 2U;
	int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t53 = -9;

	t53 = ((x217|x218)<=(x219%x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x221 = 4663070U;
	int64_t x222 = 640175932287LL;
	int8_t x223 = INT8_MIN;
	static int8_t x224 = -1;
	volatile int32_t t54 = 3107;

	t54 = ((x221|x222)<=(x223%x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x225 = 98U;
	int64_t x226 = INT64_MIN;
	volatile int32_t x227 = INT32_MAX;
	static int64_t x228 = INT64_MAX;
	int32_t t55 = -73;

	t55 = ((x225|x226)<=(x227%x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	int8_t x230 = INT8_MIN;
	static uint8_t x232 = 1U;

	t56 = ((x229|x230)<=(x231%x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x233 = 45024513347LL;
	volatile uint64_t x234 = UINT64_MAX;
	static int32_t x235 = 20;
	int16_t x236 = INT16_MAX;
	int32_t t57 = 4056;

	t57 = ((x233|x234)<=(x235%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x238 = UINT16_MAX;

	t58 = ((x237|x238)<=(x239%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = 4045;
	uint16_t x242 = 1866U;
	static volatile int32_t t59 = -3;

	t59 = ((x241|x242)<=(x243%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = -9LL;
	int32_t x246 = INT32_MAX;
	int8_t x247 = 13;

	t60 = ((x245|x246)<=(x247%x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = 3607950506865256LLU;
	int64_t x250 = INT64_MIN;
	int32_t x251 = -785697;
	static int16_t x252 = -2;
	volatile int32_t t61 = 0;

	t61 = ((x249|x250)<=(x251%x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x254 = INT64_MIN;
	uint8_t x255 = 94U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t62 = -119;

	t62 = ((x253|x254)<=(x255%x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MIN;
	static int32_t x258 = INT32_MAX;
	volatile int32_t t63 = 689134380;

	t63 = ((x257|x258)<=(x259%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = UINT64_MAX;
	uint32_t x262 = 1565U;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MIN;
	int32_t t64 = -256582;

	t64 = ((x261|x262)<=(x263%x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x267 = -1;
	int8_t x268 = -2;
	volatile int32_t t65 = 7298;

	t65 = ((x265|x266)<=(x267%x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -1638;
	uint64_t x270 = 4984616664LLU;
	static volatile uint16_t x271 = 7U;
	volatile int8_t x272 = INT8_MIN;
	int32_t t66 = 178;

	t66 = ((x269|x270)<=(x271%x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x273 = 109560017737509518LLU;
	int32_t x274 = -1;
	int64_t x275 = INT64_MIN;
	static volatile int32_t t67 = 113781680;

	t67 = ((x273|x274)<=(x275%x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	int64_t x278 = -5805LL;
	volatile int8_t x280 = -43;
	int32_t t68 = -26;

	t68 = ((x277|x278)<=(x279%x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MIN;
	int64_t x283 = 33168LL;
	static int64_t x284 = -1917736518552LL;
	volatile int32_t t69 = -1;

	t69 = ((x281|x282)<=(x283%x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = 1U;
	uint64_t x286 = 152482LLU;
	int32_t x287 = -1705;
	int32_t t70 = 44;

	t70 = ((x285|x286)<=(x287%x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x289 = INT64_MIN;
	static int8_t x290 = INT8_MAX;
	volatile int32_t t71 = 0;

	t71 = ((x289|x290)<=(x291%x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = INT32_MIN;
	static int64_t x294 = INT64_MAX;
	uint32_t x295 = UINT32_MAX;
	int32_t x296 = INT32_MIN;

	t72 = ((x293|x294)<=(x295%x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x297 = INT64_MAX;
	uint64_t x298 = UINT64_MAX;
	uint32_t x300 = UINT32_MAX;

	t73 = ((x297|x298)<=(x299%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = -1;
	int16_t x302 = -3;
	int16_t x303 = INT16_MIN;
	volatile int32_t t74 = -72266;

	t74 = ((x301|x302)<=(x303%x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x305 = UINT64_MAX;
	int32_t x306 = -348;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = 11957LLU;
	volatile int32_t t75 = 45500;

	t75 = ((x305|x306)<=(x307%x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t76 = 3;

	t76 = ((x309|x310)<=(x311%x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MIN;
	uint16_t x314 = UINT16_MAX;
	static uint16_t x315 = 347U;
	volatile int32_t t77 = 1;

	t77 = ((x313|x314)<=(x315%x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x317 = INT32_MIN;
	uint8_t x318 = UINT8_MAX;
	uint64_t x319 = 53635110LLU;
	static int64_t x320 = -234478813959LL;
	int32_t t78 = -10;

	t78 = ((x317|x318)<=(x319%x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x323 = 18568904U;
	int64_t x324 = -1LL;
	static int32_t t79 = 10549;

	t79 = ((x321|x322)<=(x323%x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = -1;
	static uint8_t x327 = UINT8_MAX;
	int16_t x328 = -1;
	volatile int32_t t80 = -31489400;

	t80 = ((x325|x326)<=(x327%x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x330 = 0U;
	uint64_t x331 = 21LLU;
	static uint32_t x332 = 3U;
	int32_t t81 = 81;

	t81 = ((x329|x330)<=(x331%x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x333 = 130075420U;
	int64_t x334 = -158531LL;
	int32_t x335 = 15;

	t82 = ((x333|x334)<=(x335%x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int32_t x338 = INT32_MIN;
	volatile int8_t x339 = INT8_MAX;
	int32_t x340 = INT32_MAX;
	int32_t t83 = 63;

	t83 = ((x337|x338)<=(x339%x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x342 = -1;
	volatile int32_t x343 = INT32_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t84 = -1872;

	t84 = ((x341|x342)<=(x343%x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x345 = INT8_MAX;
	volatile int16_t x347 = INT16_MIN;
	volatile uint16_t x348 = 7U;
	int32_t t85 = -87000;

	t85 = ((x345|x346)<=(x347%x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x350 = UINT8_MAX;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;

	t86 = ((x349|x350)<=(x351%x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -2;
	static int8_t x354 = 0;
	int8_t x355 = INT8_MAX;
	int64_t x356 = 34236111737LL;

	t87 = ((x353|x354)<=(x355%x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x357 = INT64_MAX;
	int8_t x358 = 20;
	static uint8_t x359 = 10U;
	int8_t x360 = INT8_MAX;
	volatile int32_t t88 = -5873;

	t88 = ((x357|x358)<=(x359%x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x361 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	int32_t x364 = -10560;

	t89 = ((x361|x362)<=(x363%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = 1;
	static int8_t x366 = -1;
	int16_t x368 = -2;
	volatile int32_t t90 = 904;

	t90 = ((x365|x366)<=(x367%x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x370 = 0U;
	uint16_t x371 = UINT16_MAX;
	volatile int32_t x372 = INT32_MIN;
	volatile int32_t t91 = -783899599;

	t91 = ((x369|x370)<=(x371%x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x373 = 18U;
	int64_t x375 = -3315LL;
	static int16_t x376 = INT16_MIN;

	t92 = ((x373|x374)<=(x375%x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MIN;
	volatile uint8_t x379 = UINT8_MAX;
	int16_t x380 = -1292;
	int32_t t93 = -26;

	t93 = ((x377|x378)<=(x379%x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x381 = 0U;
	uint16_t x382 = 103U;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = -1531;
	volatile int32_t t94 = -1584357;

	t94 = ((x381|x382)<=(x383%x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = -1LL;
	uint8_t x386 = 0U;
	static volatile int16_t x387 = INT16_MAX;
	int64_t x388 = INT64_MAX;

	t95 = ((x385|x386)<=(x387%x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x390 = 13U;
	volatile uint8_t x391 = 2U;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t96 = -480642;

	t96 = ((x389|x390)<=(x391%x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x393 = 126U;
	uint16_t x394 = 38U;
	int64_t x395 = -1LL;
	int32_t t97 = -2;

	t97 = ((x393|x394)<=(x395%x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x397 = 20LL;
	static uint16_t x398 = UINT16_MAX;
	volatile int8_t x399 = -1;
	static volatile int8_t x400 = -1;
	int32_t t98 = 25622317;

	t98 = ((x397|x398)<=(x399%x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x402 = 75U;
	int64_t x403 = INT64_MAX;
	static int8_t x404 = -3;
	volatile int32_t t99 = 117526;

	t99 = ((x401|x402)<=(x403%x404));

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

