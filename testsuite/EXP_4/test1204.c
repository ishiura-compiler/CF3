#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
int32_t t0 = 4460;
int8_t x5 = INT8_MIN;
uint16_t x6 = 20275U;
volatile uint16_t x11 = 1561U;
uint64_t x16 = UINT64_MAX;
uint16_t x20 = 2145U;
volatile int32_t t4 = 92877;
int16_t x26 = INT16_MAX;
int32_t x28 = INT32_MAX;
static int64_t x29 = INT64_MIN;
static int8_t x33 = INT8_MAX;
volatile int32_t t8 = -74;
int64_t x38 = INT64_MAX;
static volatile int32_t t10 = 6131;
static int32_t x52 = INT32_MIN;
static volatile int32_t t14 = -187112889;
uint32_t x61 = 3066U;
int32_t x65 = -1;
uint16_t x67 = 3U;
int16_t x68 = INT16_MIN;
static int32_t t16 = 395955;
int16_t x69 = INT16_MIN;
volatile int32_t t17 = -10;
int8_t x74 = -1;
int32_t t18 = -912994296;
uint64_t x79 = 2149104454504557819LLU;
int32_t x82 = -1;
int64_t x85 = INT64_MIN;
static int32_t t22 = -201786;
uint64_t x100 = UINT64_MAX;
static volatile uint8_t x102 = UINT8_MAX;
int8_t x111 = INT8_MAX;
int32_t x115 = INT32_MAX;
static int16_t x117 = -3;
static int32_t x118 = -1;
int32_t x127 = 133649333;
static volatile uint32_t x130 = 0U;
volatile int16_t x131 = INT16_MAX;
static int32_t t31 = 1;
static int64_t x135 = 110382LL;
static volatile int32_t t32 = -4507097;
static uint16_t x149 = 97U;
int8_t x160 = -1;
int64_t x167 = INT64_MIN;
volatile int32_t x168 = -1;
static int32_t t40 = 70842;
uint64_t x174 = 1345493089631LLU;
static volatile int32_t t42 = 23991998;
int32_t x177 = INT32_MIN;
static volatile uint16_t x182 = UINT16_MAX;
uint16_t x191 = 215U;
int64_t x193 = INT64_MIN;
int32_t t48 = 124046;
uint16_t x201 = UINT16_MAX;
int8_t x203 = -4;
int8_t x204 = INT8_MIN;
volatile uint64_t x207 = 99LLU;
static uint16_t x214 = 3053U;
static volatile int32_t t53 = 1148323;
int32_t x231 = INT32_MIN;
uint16_t x239 = UINT16_MAX;
int32_t x240 = -1;
int32_t t59 = 8208503;
volatile int8_t x248 = INT8_MIN;
int8_t x258 = 7;
volatile int32_t t63 = 179752;
uint32_t x261 = 336811U;
int64_t x264 = INT64_MIN;
uint32_t x274 = 7U;
volatile int32_t t67 = 20363;
int64_t x283 = INT64_MIN;
volatile int32_t t70 = -62396487;
static int64_t x292 = INT64_MIN;
volatile int32_t t71 = 3983;
int32_t x293 = -1;
uint8_t x294 = UINT8_MAX;
int64_t x296 = -4123524660LL;
int16_t x300 = INT16_MIN;
int64_t x305 = INT64_MIN;
volatile int64_t x308 = INT64_MAX;
static int32_t t75 = -96147;
static int8_t x309 = -1;
volatile uint64_t x310 = 1008018879LLU;
int32_t t77 = 493;
int32_t x322 = 594;
uint16_t x328 = UINT16_MAX;
static volatile int8_t x330 = -1;
uint8_t x332 = UINT8_MAX;
int16_t x337 = -4;
static volatile int8_t x342 = -1;
int32_t x344 = INT32_MIN;
int32_t t86 = -1175;
volatile int64_t x360 = INT64_MIN;
static uint64_t x362 = 1972037497562123321LLU;
uint8_t x366 = 0U;
int64_t x372 = -88455007822312LL;
int64_t x373 = INT64_MIN;
int32_t t93 = 488654548;
volatile int64_t x386 = INT64_MIN;
static volatile int8_t x390 = INT8_MIN;
int32_t x404 = 2;


void f0(void) {
	uint8_t x2 = 2U;
	int16_t x3 = 9;
	static uint8_t x4 = 89U;

	t0 = (x1==(x2-(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -16743;

	t1 = (x5==(x6-(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	uint64_t x10 = 2LLU;
	volatile int64_t x12 = 1919648018LL;
	static volatile int32_t t2 = -706;

	t2 = (x9==(x10-(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 39U;
	volatile uint64_t x14 = UINT64_MAX;
	static uint64_t x15 = UINT64_MAX;
	int32_t t3 = 453;

	t3 = (x13==(x14-(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	uint16_t x18 = 3968U;
	uint16_t x19 = 3U;

	t4 = (x17==(x18-(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	static uint64_t x23 = 2117LLU;
	static int32_t x24 = -57;
	int32_t t5 = 469903;

	t5 = (x21==(x22-(x23==x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 916643224LL;
	int32_t x27 = 946102468;
	volatile int32_t t6 = 0;

	t6 = (x25==(x26-(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -2;
	volatile uint16_t x31 = 1954U;
	uint8_t x32 = 6U;
	int32_t t7 = -68828643;

	t7 = (x29==(x30-(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 51LLU;
	static int64_t x35 = -80682838LL;
	uint8_t x36 = 78U;

	t8 = (x33==(x34-(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	int8_t x39 = -1;
	int8_t x40 = -1;
	int32_t t9 = 1;

	t9 = (x37==(x38-(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -21;
	int32_t x42 = INT32_MAX;
	int16_t x43 = -1;
	int64_t x44 = 37995379043548LL;

	t10 = (x41==(x42-(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 8U;
	int8_t x46 = 3;
	int64_t x47 = -1825488238938LL;
	volatile int8_t x48 = INT8_MIN;
	static int32_t t11 = -1;

	t11 = (x45==(x46-(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int64_t x50 = -1LL;
	int16_t x51 = -1;
	volatile int32_t t12 = 1813;

	t12 = (x49==(x50-(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 1U;
	uint64_t x54 = 1578351LLU;
	volatile uint64_t x55 = UINT64_MAX;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 1;

	t13 = (x53==(x54-(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MAX;
	int8_t x58 = -1;
	int8_t x59 = -2;
	int32_t x60 = -1612924;

	t14 = (x57==(x58-(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = -1;
	static uint8_t x63 = UINT8_MAX;
	volatile int32_t x64 = -1;
	int32_t t15 = -38310;

	t15 = (x61==(x62-(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x66 = 555572889U;

	t16 = (x65==(x66-(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = 59;
	int64_t x71 = INT64_MIN;
	static volatile int64_t x72 = -233398507640317652LL;

	t17 = (x69==(x70-(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MIN;

	t18 = (x73==(x74-(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -6;
	volatile uint8_t x78 = 0U;
	uint64_t x80 = 119038514010187LLU;
	int32_t t19 = 2134;

	t19 = (x77==(x78-(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = INT32_MIN;
	volatile int16_t x83 = INT16_MAX;
	volatile int8_t x84 = INT8_MAX;
	volatile int32_t t20 = 3655;

	t20 = (x81==(x82-(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	static volatile int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	volatile int32_t t21 = -3;

	t21 = (x85==(x86-(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	uint32_t x94 = UINT32_MAX;
	int64_t x95 = INT64_MIN;
	int16_t x96 = -7111;

	t22 = (x93==(x94-(x95==x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = INT64_MIN;
	int32_t x98 = -103327;
	uint64_t x99 = 3016427968526LLU;
	static volatile int32_t t23 = -695858851;

	t23 = (x97==(x98-(x99==x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -1;
	static uint16_t x103 = UINT16_MAX;
	int32_t x104 = -796432;
	int32_t t24 = 362;

	t24 = (x101==(x102-(x103==x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = 2209;
	uint64_t x106 = 3660855787581535688LLU;
	int16_t x107 = -1;
	volatile int8_t x108 = -1;
	volatile int32_t t25 = 704031577;

	t25 = (x105==(x106-(x107==x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	static uint16_t x110 = 5854U;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t26 = 0;

	t26 = (x109==(x110-(x111==x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = UINT16_MAX;
	volatile int16_t x114 = -5;
	uint64_t x116 = UINT64_MAX;
	static volatile int32_t t27 = -6;

	t27 = (x113==(x114-(x115==x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x119 = 0;
	int64_t x120 = INT64_MIN;
	static volatile int32_t t28 = -6;

	t28 = (x117==(x118-(x119==x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = INT32_MAX;
	volatile uint16_t x122 = 5362U;
	static int32_t x123 = INT32_MAX;
	int32_t x124 = INT32_MAX;
	static volatile int32_t t29 = -10016;

	t29 = (x121==(x122-(x123==x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -4;
	uint8_t x126 = UINT8_MAX;
	static volatile uint64_t x128 = 666677LLU;
	static int32_t t30 = 440553618;

	t30 = (x125==(x126-(x127==x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MAX;
	int16_t x132 = -1;

	t31 = (x129==(x130-(x131==x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 108U;
	int16_t x134 = -1;
	volatile int16_t x136 = INT16_MIN;

	t32 = (x133==(x134-(x135==x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 179LLU;
	static int8_t x138 = 0;
	volatile int16_t x139 = INT16_MAX;
	int8_t x140 = -1;
	static int32_t t33 = 1017873559;

	t33 = (x137==(x138-(x139==x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = -1;
	static uint32_t x142 = 93U;
	int16_t x143 = -1;
	int64_t x144 = -3535LL;
	int32_t t34 = -4;

	t34 = (x141==(x142-(x143==x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 6U;
	static int64_t x146 = 145098LL;
	int64_t x147 = 488324994LL;
	int16_t x148 = INT16_MAX;
	int32_t t35 = -367;

	t35 = (x145==(x146-(x147==x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x150 = 1U;
	int32_t x151 = -335151835;
	uint16_t x152 = 281U;
	int32_t t36 = -2;

	t36 = (x149==(x150-(x151==x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = 1;
	volatile int16_t x154 = -15;
	uint16_t x155 = 161U;
	static int64_t x156 = INT64_MIN;
	volatile int32_t t37 = 663501608;

	t37 = (x153==(x154-(x155==x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	uint32_t x158 = 10702U;
	volatile uint8_t x159 = 1U;
	int32_t t38 = -14;

	t38 = (x157==(x158-(x159==x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = INT64_MAX;
	uint8_t x162 = 16U;
	int8_t x163 = -44;
	int8_t x164 = 0;
	volatile int32_t t39 = -42707;

	t39 = (x161==(x162-(x163==x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = 16488;
	uint8_t x166 = 79U;

	t40 = (x165==(x166-(x167==x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	static volatile uint32_t x170 = 2092707107U;
	int16_t x171 = -1;
	int64_t x172 = INT64_MIN;
	volatile int32_t t41 = 1;

	t41 = (x169==(x170-(x171==x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x173 = -47058641773LL;
	volatile int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;

	t42 = (x173==(x174-(x175==x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x178 = INT64_MIN;
	uint32_t x179 = UINT32_MAX;
	static int8_t x180 = -9;
	volatile int32_t t43 = -4;

	t43 = (x177==(x178-(x179==x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = -1LL;
	static volatile uint32_t x183 = UINT32_MAX;
	volatile int32_t x184 = -16217;
	volatile int32_t t44 = 5969727;

	t44 = (x181==(x182-(x183==x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = -1;
	volatile int16_t x186 = INT16_MIN;
	int16_t x187 = 401;
	int64_t x188 = INT64_MAX;
	volatile int32_t t45 = 12189669;

	t45 = (x185==(x186-(x187==x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 27877U;
	static uint16_t x190 = 62U;
	volatile int32_t x192 = INT32_MIN;
	int32_t t46 = 26;

	t46 = (x189==(x190-(x191==x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x194 = 2U;
	uint8_t x195 = 6U;
	uint16_t x196 = 6U;
	static volatile int32_t t47 = 0;

	t47 = (x193==(x194-(x195==x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x197 = 24256791LLU;
	volatile int8_t x198 = 32;
	int8_t x199 = INT8_MIN;
	volatile int16_t x200 = INT16_MAX;

	t48 = (x197==(x198-(x199==x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x202 = -1;
	static volatile int32_t t49 = -402741;

	t49 = (x201==(x202-(x203==x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = 8903173;
	volatile int32_t x206 = -249052883;
	volatile int8_t x208 = INT8_MAX;
	int32_t t50 = -20188;

	t50 = (x205==(x206-(x207==x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -3;
	static uint64_t x210 = UINT64_MAX;
	int64_t x211 = -3489616LL;
	uint32_t x212 = 257148U;
	int32_t t51 = 26328;

	t51 = (x209==(x210-(x211==x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MIN;
	volatile uint8_t x215 = 111U;
	static uint16_t x216 = 0U;
	int32_t t52 = 1523219;

	t52 = (x213==(x214-(x215==x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = 39891321703238009LLU;
	uint16_t x218 = 9U;
	static int64_t x219 = -1LL;
	int8_t x220 = INT8_MIN;

	t53 = (x217==(x218-(x219==x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = UINT16_MAX;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = 911;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t54 = 50;

	t54 = (x221==(x222-(x223==x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x225 = 5190U;
	int32_t x226 = INT32_MAX;
	uint16_t x227 = 21607U;
	volatile int64_t x228 = INT64_MIN;
	int32_t t55 = 27328372;

	t55 = (x225==(x226-(x227==x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	volatile int16_t x232 = INT16_MAX;
	static volatile int32_t t56 = -53511373;

	t56 = (x229==(x230-(x231==x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = 16;
	static volatile int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MAX;
	uint64_t x236 = 3289246968915716929LLU;
	volatile int32_t t57 = -132594;

	t57 = (x233==(x234-(x235==x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x237 = 3U;
	uint32_t x238 = UINT32_MAX;
	volatile int32_t t58 = -782877;

	t58 = (x237==(x238-(x239==x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = -482371457LL;
	int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MAX;
	static volatile uint32_t x244 = UINT32_MAX;

	t59 = (x241==(x242-(x243==x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MAX;
	static int16_t x246 = 1;
	int64_t x247 = INT64_MIN;
	int32_t t60 = 7551160;

	t60 = (x245==(x246-(x247==x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = -8768836041337498LL;
	static int32_t x250 = -1;
	static int64_t x251 = INT64_MAX;
	int32_t x252 = 119;
	volatile int32_t t61 = -171091117;

	t61 = (x249==(x250-(x251==x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -1;
	static int8_t x254 = -1;
	uint32_t x255 = 26U;
	int32_t x256 = -101526;
	int32_t t62 = -962;

	t62 = (x253==(x254-(x255==x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x257 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	uint16_t x260 = 7U;

	t63 = (x257==(x258-(x259==x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x262 = -1;
	int64_t x263 = -1LL;
	static int32_t t64 = 3372068;

	t64 = (x261==(x262-(x263==x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	volatile int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t65 = -446068920;

	t65 = (x265==(x266-(x267==x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x269 = -3;
	int64_t x270 = -1LL;
	int64_t x271 = -1LL;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t66 = -1416039;

	t66 = (x269==(x270-(x271==x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	static int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;

	t67 = (x273==(x274-(x275==x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MAX;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = 1;
	int32_t x280 = 6760;
	volatile int32_t t68 = -8241473;

	t68 = (x277==(x278-(x279==x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = 26;
	int32_t x282 = -1596;
	volatile int16_t x284 = INT16_MIN;
	static volatile int32_t t69 = -573872;

	t69 = (x281==(x282-(x283==x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x285 = 1LL;
	static int16_t x286 = INT16_MIN;
	static int8_t x287 = INT8_MIN;
	volatile int16_t x288 = 1;

	t70 = (x285==(x286-(x287==x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = 50340LLU;
	int64_t x290 = INT64_MIN;
	volatile uint64_t x291 = UINT64_MAX;

	t71 = (x289==(x290-(x291==x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x295 = INT32_MAX;
	volatile int32_t t72 = 7;

	t72 = (x293==(x294-(x295==x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x297 = -1558992527801679LL;
	int32_t x298 = -1;
	uint32_t x299 = 24093709U;
	int32_t t73 = -8;

	t73 = (x297==(x298-(x299==x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = 2U;
	int16_t x302 = 76;
	int64_t x303 = -1LL;
	int32_t x304 = -45;
	volatile int32_t t74 = -19294354;

	t74 = (x301==(x302-(x303==x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x306 = INT8_MAX;
	volatile int8_t x307 = INT8_MAX;

	t75 = (x305==(x306-(x307==x308)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x311 = -20;
	volatile int16_t x312 = INT16_MIN;
	static int32_t t76 = -1;

	t76 = (x309==(x310-(x311==x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = 396490;
	uint64_t x314 = 7LLU;
	int16_t x315 = 2134;
	int16_t x316 = INT16_MAX;

	t77 = (x313==(x314-(x315==x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x317 = INT8_MIN;
	int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	int16_t x320 = INT16_MIN;
	int32_t t78 = 3177;

	t78 = (x317==(x318-(x319==x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x321 = UINT16_MAX;
	int64_t x323 = 20589525LL;
	int16_t x324 = -1;
	int32_t t79 = 2649161;

	t79 = (x321==(x322-(x323==x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 1566885277005LL;
	static uint8_t x326 = UINT8_MAX;
	int32_t x327 = 121;
	int32_t t80 = 104;

	t80 = (x325==(x326-(x327==x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x329 = INT16_MAX;
	uint32_t x331 = 11U;
	static int32_t t81 = 399319464;

	t81 = (x329==(x330-(x331==x332)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MAX;
	int32_t x334 = -248215;
	static uint16_t x335 = 56U;
	int64_t x336 = 59560579408951522LL;
	volatile int32_t t82 = -3001;

	t82 = (x333==(x334-(x335==x336)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x338 = INT64_MAX;
	int64_t x339 = 95876588210LL;
	int64_t x340 = 618975223444LL;
	static volatile int32_t t83 = -7;

	t83 = (x337==(x338-(x339==x340)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x341 = 275612;
	int32_t x343 = -1351075;
	volatile int32_t t84 = 480097036;

	t84 = (x341==(x342-(x343==x344)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MIN;
	volatile int8_t x346 = 3;
	int64_t x347 = INT64_MIN;
	volatile int16_t x348 = -1;
	int32_t t85 = -35906;

	t85 = (x345==(x346-(x347==x348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x349 = 4U;
	static uint64_t x350 = 550586118LLU;
	int16_t x351 = INT16_MAX;
	int16_t x352 = INT16_MAX;

	t86 = (x349==(x350-(x351==x352)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x353 = 655303;
	volatile int8_t x354 = 54;
	volatile int16_t x355 = 543;
	int16_t x356 = -1;
	volatile int32_t t87 = 345904773;

	t87 = (x353==(x354-(x355==x356)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = -1LL;
	int8_t x358 = INT8_MIN;
	int64_t x359 = -1LL;
	int32_t t88 = 25;

	t88 = (x357==(x358-(x359==x360)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -23986445;
	int8_t x363 = 8;
	static int16_t x364 = 62;
	volatile int32_t t89 = 1858;

	t89 = (x361==(x362-(x363==x364)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x365 = 1687U;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = INT64_MAX;
	int32_t t90 = -529073;

	t90 = (x365==(x366-(x367==x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x369 = -1LL;
	int8_t x370 = INT8_MIN;
	volatile int32_t x371 = -20473837;
	int32_t t91 = -527279;

	t91 = (x369==(x370-(x371==x372)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x374 = 0U;
	volatile uint16_t x375 = UINT16_MAX;
	uint16_t x376 = UINT16_MAX;
	int32_t t92 = 63557114;

	t92 = (x373==(x374-(x375==x376)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x377 = 7U;
	uint16_t x378 = 13482U;
	uint16_t x379 = 2199U;
	int32_t x380 = INT32_MAX;

	t93 = (x377==(x378-(x379==x380)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = 58U;
	static volatile int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	volatile int8_t x384 = -1;
	int32_t t94 = 109321863;

	t94 = (x381==(x382-(x383==x384)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = 28LLU;
	uint16_t x387 = 0U;
	volatile int32_t x388 = -1350;
	int32_t t95 = 54072;

	t95 = (x385==(x386-(x387==x388)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = INT64_MIN;
	static uint64_t x391 = 189266073112LLU;
	int32_t x392 = 2953;
	volatile int32_t t96 = 8;

	t96 = (x389==(x390-(x391==x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x393 = INT16_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	int8_t x395 = -28;
	int16_t x396 = -973;
	volatile int32_t t97 = 3975;

	t97 = (x393==(x394-(x395==x396)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x397 = -105992835795LL;
	int64_t x398 = INT64_MAX;
	volatile int64_t x399 = INT64_MIN;
	uint8_t x400 = 23U;
	int32_t t98 = -1455224;

	t98 = (x397==(x398-(x399==x400)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x401 = -1;
	static uint64_t x402 = UINT64_MAX;
	int32_t x403 = 95424369;
	volatile int32_t t99 = -5726321;

	t99 = (x401==(x402-(x403==x404)));

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

