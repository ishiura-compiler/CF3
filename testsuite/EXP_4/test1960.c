#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 2513640LLU;
volatile int32_t t1 = -5228163;
int32_t x13 = -1;
uint32_t x17 = 772U;
static volatile int8_t x19 = -1;
int32_t x21 = -1;
uint64_t x27 = UINT64_MAX;
volatile int8_t x28 = -1;
volatile int16_t x30 = -1;
int8_t x31 = INT8_MIN;
static int64_t x36 = -1LL;
int32_t x38 = INT32_MAX;
static uint8_t x39 = 7U;
int32_t x42 = 78186273;
int32_t t10 = -3893461;
volatile int64_t x45 = INT64_MIN;
int8_t x48 = -1;
uint16_t x57 = 214U;
int64_t x61 = 24LL;
static volatile uint8_t x68 = UINT8_MAX;
volatile int8_t x69 = -1;
uint8_t x73 = 0U;
int32_t t18 = 9741146;
volatile int32_t x79 = INT32_MAX;
int32_t x81 = INT32_MAX;
int8_t x87 = INT8_MIN;
static int16_t x96 = 3;
int64_t x98 = 651646736LL;
int8_t x117 = -1;
int8_t x120 = INT8_MIN;
uint8_t x139 = UINT8_MAX;
volatile int32_t t34 = 1944;
int32_t t35 = 1;
volatile int64_t x148 = INT64_MIN;
int32_t t36 = -1752;
static int32_t x153 = -1;
uint16_t x158 = UINT16_MAX;
static volatile int32_t t39 = -13539037;
int16_t x162 = INT16_MIN;
static int16_t x163 = 44;
int64_t x164 = INT64_MIN;
int16_t x165 = INT16_MAX;
int32_t x175 = INT32_MAX;
volatile uint8_t x176 = 1U;
int8_t x181 = INT8_MAX;
int32_t x185 = INT32_MIN;
static volatile int8_t x190 = 2;
int32_t x195 = -141447239;
int8_t x202 = 0;
int64_t x204 = INT64_MIN;
int64_t x205 = 1LL;
int32_t t51 = -7693;
uint32_t x210 = 3U;
volatile int16_t x214 = -5;
uint32_t x220 = 169031906U;
volatile int32_t x224 = 16892351;
int16_t x230 = INT16_MIN;
uint32_t x231 = 53U;
static int16_t x232 = -30;
int8_t x234 = INT8_MIN;
int32_t t58 = -325945;
int32_t x248 = INT32_MIN;
int64_t x256 = -34473418LL;
int32_t t64 = -460411354;
static volatile int16_t x268 = INT16_MAX;
int8_t x272 = -15;
int8_t x274 = INT8_MAX;
int32_t x275 = INT32_MIN;
static int32_t x280 = INT32_MIN;
volatile int32_t t69 = 7976641;
uint8_t x288 = 87U;
int8_t x293 = -46;
int64_t x295 = INT64_MIN;
int32_t t73 = 345818;
int32_t t74 = 4;
static int32_t x312 = -1;
static volatile uint32_t x324 = UINT32_MAX;
int64_t x328 = INT64_MAX;
int32_t t81 = 16;
uint16_t x330 = 434U;
int32_t x332 = -65665176;
volatile int8_t x333 = 6;
static int32_t x334 = INT32_MAX;
int32_t x335 = INT32_MIN;
static int32_t t83 = -26149;
int32_t x337 = INT32_MIN;
volatile int8_t x340 = 1;
static int32_t t84 = -3821;
static volatile int8_t x342 = -1;
int64_t x346 = INT64_MAX;
int32_t t86 = 23338;
static int64_t x349 = 1004141LL;
volatile int32_t t88 = -2679;
int8_t x357 = -1;
static uint64_t x360 = 87667857263LLU;
int64_t x361 = 899115007113LL;
uint16_t x365 = 4U;
int16_t x376 = INT16_MAX;
int64_t x381 = INT64_MIN;
volatile int16_t x382 = -1;
static int8_t x385 = INT8_MIN;
uint16_t x391 = 140U;
static int64_t x394 = INT64_MAX;
uint32_t x395 = UINT32_MAX;
int32_t t98 = 6446188;
int8_t x399 = INT8_MAX;


void f0(void) {
	uint8_t x1 = 1U;
	int32_t x3 = INT32_MAX;
	int16_t x4 = -10479;
	int32_t t0 = -617;

	t0 = (x1<=(x2==(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int16_t x6 = INT16_MIN;
	static int16_t x7 = 2;
	int8_t x8 = INT8_MIN;

	t1 = (x5<=(x6==(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -201699917LL;
	volatile int32_t x10 = 1685700;
	int16_t x11 = -1;
	uint64_t x12 = UINT64_MAX;
	static int32_t t2 = -8148106;

	t2 = (x9<=(x10==(x11|x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	volatile int64_t x15 = INT64_MIN;
	int8_t x16 = 2;
	int32_t t3 = -181098;

	t3 = (x13<=(x14==(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 15645254U;
	int32_t x20 = 60426;
	static int32_t t4 = -153488;

	t4 = (x17<=(x18==(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	int16_t x23 = -491;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 13;

	t5 = (x21<=(x22==(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int8_t x26 = -31;
	int32_t t6 = 197545094;

	t6 = (x25<=(x26==(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	volatile uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 6918396;

	t7 = (x29<=(x30==(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 19908U;
	uint8_t x34 = 2U;
	volatile uint64_t x35 = 19582659548LLU;
	int32_t t8 = -1;

	t8 = (x33<=(x34==(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 2456;

	t9 = (x37<=(x38==(x39|x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 384374998U;
	volatile int32_t x43 = -7176;
	volatile int64_t x44 = INT64_MIN;

	t10 = (x41<=(x42==(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 29753203LLU;
	static volatile uint32_t x47 = 366685U;
	static volatile int32_t t11 = 11305295;

	t11 = (x45<=(x46==(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 129263539805LLU;
	uint32_t x50 = 1U;
	int8_t x51 = INT8_MIN;
	int16_t x52 = -1;
	volatile int32_t t12 = 16;

	t12 = (x49<=(x50==(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	static int32_t x54 = INT32_MIN;
	uint32_t x55 = 838U;
	uint16_t x56 = 22U;
	int32_t t13 = 2066;

	t13 = (x53<=(x54==(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	int32_t x59 = -78610624;
	int8_t x60 = 26;
	int32_t t14 = -932;

	t14 = (x57<=(x58==(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = -118;

	t15 = (x61<=(x62==(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int32_t x66 = -1010;
	int64_t x67 = INT64_MIN;
	volatile int32_t t16 = -2;

	t16 = (x65<=(x66==(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x70 = -31;
	static int16_t x71 = INT16_MIN;
	volatile int16_t x72 = INT16_MIN;
	int32_t t17 = -667420;

	t17 = (x69<=(x70==(x71|x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MIN;
	static int16_t x76 = INT16_MAX;

	t18 = (x73<=(x74==(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = UINT16_MAX;
	volatile int64_t x78 = INT64_MIN;
	static uint64_t x80 = 1872010470LLU;
	int32_t t19 = -22992;

	t19 = (x77<=(x78==(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 22U;
	volatile int16_t x83 = 1460;
	static int8_t x84 = -1;
	volatile int32_t t20 = -111100216;

	t20 = (x81<=(x82==(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 4382;
	volatile int16_t x86 = 0;
	int8_t x88 = -1;
	int32_t t21 = -6614;

	t21 = (x85<=(x86==(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 125410548U;
	int32_t x90 = -1;
	volatile int64_t x91 = -1LL;
	uint64_t x92 = 30LLU;
	int32_t t22 = 3;

	t22 = (x89<=(x90==(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = 808U;
	volatile int64_t x94 = INT64_MIN;
	static volatile int8_t x95 = -1;
	int32_t t23 = 65458789;

	t23 = (x93<=(x94==(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = 912;
	volatile int32_t x99 = -1836;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -4243;

	t24 = (x97<=(x98==(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	volatile uint64_t x102 = 66LLU;
	int64_t x103 = -1LL;
	int8_t x104 = INT8_MIN;
	int32_t t25 = 514637306;

	t25 = (x101<=(x102==(x103|x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MAX;
	static int16_t x107 = 6;
	int32_t x108 = -20638258;
	volatile int32_t t26 = -1;

	t26 = (x105<=(x106==(x107|x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	int16_t x111 = 64;
	static volatile int16_t x112 = INT16_MAX;
	int32_t t27 = -105;

	t27 = (x109<=(x110==(x111|x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	volatile uint32_t x114 = UINT32_MAX;
	int16_t x115 = -1;
	static int8_t x116 = INT8_MIN;
	int32_t t28 = -100729570;

	t28 = (x113<=(x114==(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int32_t t29 = -4;

	t29 = (x117<=(x118==(x119|x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	static volatile int8_t x123 = INT8_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = 555990;

	t30 = (x121<=(x122==(x123|x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x126 = -1;
	int16_t x127 = 0;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -18823122;

	t31 = (x125<=(x126==(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 20LLU;
	static int32_t x130 = INT32_MIN;
	volatile uint8_t x131 = 1U;
	static uint32_t x132 = UINT32_MAX;
	int32_t t32 = 4904;

	t32 = (x129<=(x130==(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 21;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = 0U;
	int8_t x136 = -1;
	volatile int32_t t33 = -548556583;

	t33 = (x133<=(x134==(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -644;
	volatile int64_t x138 = -1LL;
	int32_t x140 = -1;

	t34 = (x137<=(x138==(x139|x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static volatile int64_t x142 = -1LL;
	int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MAX;

	t35 = (x141<=(x142==(x143|x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	uint8_t x146 = 41U;
	static int32_t x147 = INT32_MAX;

	t36 = (x145<=(x146==(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = INT32_MIN;
	static uint8_t x150 = 4U;
	int32_t x151 = INT32_MAX;
	volatile int16_t x152 = 0;
	volatile int32_t t37 = 87839734;

	t37 = (x149<=(x150==(x151|x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = 245234279;
	uint64_t x155 = 2792795104089420LLU;
	int32_t x156 = -120904;
	volatile int32_t t38 = 47668;

	t38 = (x153<=(x154==(x155|x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 0U;
	uint8_t x159 = 1U;
	int16_t x160 = INT16_MAX;

	t39 = (x157<=(x158==(x159|x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 1418167U;
	int32_t t40 = 2876;

	t40 = (x161<=(x162==(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 71;

	t41 = (x165<=(x166==(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = 0;
	uint64_t x171 = 3002521668096LLU;
	int32_t x172 = -83;
	int32_t t42 = -11;

	t42 = (x169<=(x170==(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = 1763301;
	volatile int16_t x174 = 6374;
	int32_t t43 = 20423347;

	t43 = (x173<=(x174==(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	volatile uint16_t x178 = UINT16_MAX;
	int16_t x179 = 225;
	static volatile int32_t x180 = INT32_MAX;
	int32_t t44 = 802419;

	t44 = (x177<=(x178==(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = -1;
	int64_t x183 = INT64_MAX;
	static volatile int16_t x184 = INT16_MIN;
	volatile int32_t t45 = 1748082;

	t45 = (x181<=(x182==(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -118;
	int64_t x187 = -727639497747807907LL;
	int32_t x188 = -1;
	volatile int32_t t46 = 284147509;

	t46 = (x185<=(x186==(x187|x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 25U;
	int32_t x191 = -1;
	int64_t x192 = 591743637435LL;
	volatile int32_t t47 = 52361;

	t47 = (x189<=(x190==(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = 23;
	int64_t x194 = INT64_MAX;
	int8_t x196 = -1;
	int32_t t48 = -80475965;

	t48 = (x193<=(x194==(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	uint16_t x198 = 4237U;
	static int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;
	int32_t t49 = -195;

	t49 = (x197<=(x198==(x199|x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	volatile int32_t t50 = -9;

	t50 = (x201<=(x202==(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = -2;
	uint8_t x208 = 0U;

	t51 = (x205<=(x206==(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 11393U;
	static int8_t x211 = 0;
	volatile int8_t x212 = INT8_MAX;
	int32_t t52 = 24810420;

	t52 = (x209<=(x210==(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int8_t x215 = INT8_MAX;
	int32_t x216 = -29629084;
	int32_t t53 = -7;

	t53 = (x213<=(x214==(x215|x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -26;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	int32_t t54 = 104353341;

	t54 = (x217<=(x218==(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	uint64_t x222 = 35394850266001073LLU;
	uint8_t x223 = UINT8_MAX;
	int32_t t55 = -395;

	t55 = (x221<=(x222==(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -22;
	static volatile uint8_t x226 = UINT8_MAX;
	volatile uint32_t x227 = 13455305U;
	volatile int32_t x228 = INT32_MAX;
	int32_t t56 = 6;

	t56 = (x225<=(x226==(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = 157091LL;
	int32_t t57 = 16055525;

	t57 = (x229<=(x230==(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = INT8_MAX;
	int32_t x235 = -1;
	volatile uint16_t x236 = 1U;

	t58 = (x233<=(x234==(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 110U;
	uint8_t x238 = UINT8_MAX;
	uint32_t x239 = UINT32_MAX;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 0;

	t59 = (x237<=(x238==(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int8_t x242 = -11;
	volatile uint8_t x243 = 2U;
	int8_t x244 = -1;
	int32_t t60 = 10;

	t60 = (x241<=(x242==(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -7;
	volatile int64_t x246 = -1LL;
	uint64_t x247 = UINT64_MAX;
	volatile int32_t t61 = -8503272;

	t61 = (x245<=(x246==(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static uint8_t x250 = 0U;
	volatile uint16_t x251 = 4526U;
	static volatile int64_t x252 = -29434194LL;
	int32_t t62 = 4698083;

	t62 = (x249<=(x250==(x251|x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = -1;
	int32_t x254 = INT32_MIN;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t t63 = 4304396;

	t63 = (x253<=(x254==(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 1U;
	int16_t x258 = 1;
	int32_t x259 = INT32_MIN;
	uint8_t x260 = 37U;

	t64 = (x257<=(x258==(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = -45;
	static int32_t x262 = 953399818;
	int64_t x263 = INT64_MIN;
	uint32_t x264 = 1019753393U;
	static volatile int32_t t65 = -14552524;

	t65 = (x261<=(x262==(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	uint8_t x266 = 2U;
	int8_t x267 = -30;
	int32_t t66 = -55323;

	t66 = (x265<=(x266==(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	volatile int64_t x270 = INT64_MIN;
	int8_t x271 = -13;
	static volatile int32_t t67 = -6480;

	t67 = (x269<=(x270==(x271|x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	static uint8_t x276 = 26U;
	static int32_t t68 = -1;

	t68 = (x273<=(x274==(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -1;
	int8_t x278 = -1;
	static uint64_t x279 = UINT64_MAX;

	t69 = (x277<=(x278==(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 22U;
	int8_t x282 = -1;
	uint8_t x283 = 5U;
	volatile int8_t x284 = -1;
	int32_t t70 = 1;

	t70 = (x281<=(x282==(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 1;
	int32_t x286 = INT32_MIN;
	int8_t x287 = 0;
	volatile int32_t t71 = 250788444;

	t71 = (x285<=(x286==(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static int8_t x290 = -1;
	int16_t x291 = -1;
	volatile int64_t x292 = 225017845125LL;
	int32_t t72 = 10;

	t72 = (x289<=(x290==(x291|x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x294 = 529582013U;
	static int32_t x296 = INT32_MIN;

	t73 = (x293<=(x294==(x295|x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = -59646146LL;
	int8_t x298 = 16;
	int16_t x299 = -425;
	uint16_t x300 = UINT16_MAX;

	t74 = (x297<=(x298==(x299|x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = UINT16_MAX;
	int64_t x302 = -454490969LL;
	int8_t x303 = INT8_MIN;
	static int32_t x304 = INT32_MIN;
	static int32_t t75 = 993;

	t75 = (x301<=(x302==(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile uint16_t x306 = 20U;
	static uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 6155099;

	t76 = (x305<=(x306==(x307|x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static int16_t x310 = INT16_MIN;
	int64_t x311 = -11301913019847144LL;
	volatile int32_t t77 = 141;

	t77 = (x309<=(x310==(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 1;
	uint8_t x314 = UINT8_MAX;
	static uint64_t x315 = 144167037775619017LLU;
	volatile int32_t x316 = INT32_MAX;
	int32_t t78 = 12;

	t78 = (x313<=(x314==(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	int8_t x318 = INT8_MAX;
	volatile int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t79 = -4344928;

	t79 = (x317<=(x318==(x319|x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 6;
	int32_t x322 = -1;
	uint32_t x323 = UINT32_MAX;
	volatile int32_t t80 = 377571787;

	t80 = (x321<=(x322==(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MAX;
	uint16_t x326 = 5U;
	volatile int64_t x327 = INT64_MIN;

	t81 = (x325<=(x326==(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -1;
	int32_t x331 = 755;
	volatile int32_t t82 = 965794649;

	t82 = (x329<=(x330==(x331|x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x336 = INT16_MIN;

	t83 = (x333<=(x334==(x335|x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = 1846U;
	int8_t x339 = INT8_MIN;

	t84 = (x337<=(x338==(x339|x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x343 = INT8_MAX;
	static int32_t x344 = INT32_MIN;
	int32_t t85 = 7;

	t85 = (x341<=(x342==(x343|x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int64_t x347 = INT64_MIN;
	int64_t x348 = 2238142255594926161LL;

	t86 = (x345<=(x346==(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -164;

	t87 = (x349<=(x350==(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	uint32_t x354 = UINT32_MAX;
	int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MIN;

	t88 = (x353<=(x354==(x355|x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x358 = UINT64_MAX;
	int32_t x359 = -1;
	int32_t t89 = 7442;

	t89 = (x357<=(x358==(x359|x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x362 = UINT8_MAX;
	int32_t x363 = INT32_MIN;
	uint64_t x364 = 1LLU;
	volatile int32_t t90 = 12;

	t90 = (x361<=(x362==(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x366 = 121U;
	static uint32_t x367 = UINT32_MAX;
	int64_t x368 = INT64_MAX;
	int32_t t91 = -9452713;

	t91 = (x365<=(x366==(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	int64_t x370 = 8435905968537414LL;
	int16_t x371 = -1826;
	int16_t x372 = INT16_MIN;
	static int32_t t92 = -64203993;

	t92 = (x369<=(x370==(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	volatile int64_t x374 = INT64_MIN;
	volatile int32_t x375 = -1;
	volatile int32_t t93 = 225415;

	t93 = (x373<=(x374==(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	int64_t x378 = 3693LL;
	volatile int16_t x379 = 292;
	volatile int64_t x380 = -1LL;
	static int32_t t94 = 757919;

	t94 = (x377<=(x378==(x379|x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x383 = UINT32_MAX;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t95 = -3;

	t95 = (x381<=(x382==(x383|x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x386 = 27U;
	static int8_t x387 = -17;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -15096;

	t96 = (x385<=(x386==(x387|x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	uint64_t x390 = 2355543559803858954LLU;
	volatile uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = -3205;

	t97 = (x389<=(x390==(x391|x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 29236U;
	uint32_t x396 = UINT32_MAX;

	t98 = (x393<=(x394==(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = INT8_MIN;
	int16_t x400 = -1;
	volatile int32_t t99 = 702898582;

	t99 = (x397<=(x398==(x399|x400)));

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

