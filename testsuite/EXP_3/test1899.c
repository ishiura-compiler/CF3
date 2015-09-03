#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int16_t x4 = -2529;
int8_t x7 = INT8_MAX;
static uint32_t x11 = 21979258U;
int64_t x17 = INT64_MIN;
uint64_t x19 = 3886LLU;
int8_t x24 = INT8_MIN;
uint64_t x29 = UINT64_MAX;
static volatile int64_t t9 = 1016065LL;
static int32_t x44 = -1;
volatile int32_t t11 = -30;
int64_t t12 = 3171606739LL;
volatile int64_t t13 = 180LL;
int64_t x59 = 19740657LL;
uint64_t t20 = UINT64_MAX;
volatile int64_t t21 = -112147889269LL;
uint16_t x91 = 3U;
volatile int32_t t22 = -346421;
static int16_t x93 = INT16_MIN;
static uint16_t x95 = 3U;
int64_t x96 = -435264308113LL;
int64_t t23 = -27929LL;
uint64_t x101 = 176842LLU;
uint64_t x104 = 8113534827487645337LLU;
int8_t x106 = -1;
int32_t t26 = 51835890;
volatile int32_t x110 = 60398313;
int8_t x114 = -30;
volatile int32_t x119 = -1;
int8_t x139 = 20;
int8_t x141 = -35;
static int8_t x143 = 1;
int32_t x145 = INT32_MAX;
int32_t x149 = INT32_MIN;
int32_t x154 = -70215;
int8_t x156 = 60;
int64_t x157 = INT64_MIN;
volatile int64_t t41 = 2575735186402047817LL;
volatile uint16_t x169 = 1018U;
uint32_t x170 = 2410691U;
uint16_t x179 = 7U;
static uint16_t x182 = 1U;
uint8_t x183 = 10U;
volatile int32_t x186 = INT32_MIN;
static volatile uint32_t x200 = UINT32_MAX;
volatile uint32_t t49 = UINT32_MAX;
volatile int64_t x202 = INT64_MAX;
static volatile int64_t t50 = -782125559LL;
uint64_t x205 = 115266570835464LLU;
volatile int8_t x220 = 0;
uint8_t x221 = 97U;
static int16_t x222 = INT16_MIN;
uint32_t x227 = 9129568U;
static int8_t x232 = INT8_MIN;
int64_t x235 = INT64_MAX;
int32_t x259 = 113863;
volatile int8_t x260 = 8;
int64_t x261 = INT64_MAX;
static int16_t x265 = INT16_MIN;
int16_t x268 = -1645;
volatile int64_t t66 = -8LL;
static int8_t x278 = INT8_MAX;
uint64_t x279 = 1754LLU;
int16_t x283 = -165;
static int32_t t71 = 2;
int16_t x295 = INT16_MIN;
int64_t t72 = -43763LL;
int8_t x310 = INT8_MAX;
uint32_t x312 = UINT32_MAX;
int64_t t76 = -4315609844LL;
static uint8_t x326 = 4U;
volatile uint64_t t80 = UINT64_MAX;
int8_t x335 = INT8_MAX;
uint8_t x344 = 4U;
int16_t x348 = INT16_MIN;
int64_t x349 = INT64_MIN;
volatile int8_t x355 = INT8_MIN;
int64_t x367 = -2193606051LL;
int64_t x368 = INT64_MIN;
int32_t x372 = INT32_MIN;
volatile int16_t x374 = 2270;
static int16_t x379 = -1;
static volatile int32_t t92 = -16;
static int32_t x381 = -4;
uint32_t x404 = 14011U;
int64_t x410 = INT64_MAX;


void f0(void) {
	int32_t x2 = -54712;
	static int8_t x3 = 29;
	volatile int32_t t0 = 12340128;

	t0 = ((x1/x2)+(x3|x4));

	if (t0 != -2529) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -370;
	uint64_t x6 = 33341080747751842LLU;
	int32_t x8 = -1;
	static volatile uint64_t t1 = 1005226407531LLU;

	t1 = ((x5/x6)+(x7|x8));

	if (t1 != 552LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 7353U;
	int32_t x10 = INT32_MIN;
	static int32_t x12 = 366;
	static uint32_t t2 = 160013U;

	t2 = ((x9/x10)+(x11|x12));

	if (t2 != 21979518U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int64_t x14 = -64332LL;
	volatile int32_t x15 = -1;
	int16_t x16 = INT16_MIN;
	static int64_t t3 = 5LL;

	t3 = ((x13/x14)+(x15|x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 1550664U;
	uint8_t x20 = 52U;
	volatile uint64_t t4 = 341846645637LLU;

	t4 = ((x17/x18)+(x19|x20));

	if (t4 != 18446738125695003781LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	int32_t x22 = -1;
	int64_t x23 = INT64_MAX;
	int64_t t5 = -193535721180985072LL;

	t5 = ((x21/x22)+(x23|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 119LLU;
	static uint64_t x26 = UINT64_MAX;
	int32_t x27 = -55169;
	uint8_t x28 = UINT8_MAX;
	volatile uint64_t t6 = 63376511011LLU;

	t6 = ((x25/x26)+(x27|x28));

	if (t6 != 18446744073709496575LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1992;
	int64_t x31 = 14LL;
	int8_t x32 = -3;
	uint64_t t7 = 154296688576990LLU;

	t7 = ((x29/x30)+(x31|x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	int32_t x34 = -160298808;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MIN;
	static int64_t t8 = -936315158172668LL;

	t8 = ((x33/x34)+(x35|x36));

	if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 1366150510556594LL;
	int64_t x38 = INT64_MIN;
	uint8_t x39 = 28U;
	uint32_t x40 = 16358U;

	t9 = ((x37/x38)+(x39|x40));

	if (t9 != 16382LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 407112LLU;
	uint16_t x42 = 345U;
	int16_t x43 = 1300;
	uint64_t t10 = 75354374481LLU;

	t10 = ((x41/x42)+(x43|x44));

	if (t10 != 1179LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -146;
	int32_t x46 = 564;
	uint16_t x47 = 0U;
	static int16_t x48 = INT16_MIN;

	t11 = ((x45/x46)+(x47|x48));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int64_t x50 = INT64_MIN;
	volatile int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MIN;

	t12 = ((x49/x50)+(x51|x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 7;
	int64_t x54 = INT64_MIN;
	int64_t x55 = 336604913LL;
	volatile uint8_t x56 = UINT8_MAX;

	t13 = ((x53/x54)+(x55|x56));

	if (t13 != 336604927LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 3444LL;
	static uint16_t x58 = 789U;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = -8LL;

	t14 = ((x57/x58)+(x59|x60));

	if (t14 != -9223372036835035147LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -2LL;
	static int8_t x62 = INT8_MAX;
	int8_t x63 = -1;
	static volatile uint8_t x64 = 2U;
	volatile int64_t t15 = -780LL;

	t15 = ((x61/x62)+(x63|x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -9816;
	int8_t x66 = -36;
	volatile int64_t x67 = -1LL;
	volatile int64_t x68 = INT64_MIN;
	static volatile int64_t t16 = 13784LL;

	t16 = ((x65/x66)+(x67|x68));

	if (t16 != 271LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = 98503;
	static int16_t x71 = -18;
	static int16_t x72 = -3;
	volatile int32_t t17 = 6;

	t17 = ((x69/x70)+(x71|x72));

	if (t17 != 21800) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 47U;
	static int16_t x74 = INT16_MIN;
	int32_t x75 = 62;
	int16_t x76 = 126;
	volatile int32_t t18 = 112;

	t18 = ((x73/x74)+(x75|x76));

	if (t18 != 126) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 2792266274203085108LLU;
	uint32_t x78 = 992U;
	int16_t x79 = INT16_MIN;
	int16_t x80 = -1;
	uint64_t t19 = 14463933LLU;

	t19 = ((x77/x78)+(x79|x80));

	if (t19 != 2814784550607947LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x81 = 3U;
	int16_t x82 = -21;
	static uint64_t x83 = 62LLU;
	static int16_t x84 = -1;

	t20 = ((x81/x82)+(x83|x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 4086350996497108745LL;
	volatile int16_t x86 = -1;
	uint8_t x87 = 2U;
	static int32_t x88 = INT32_MAX;

	t21 = ((x85/x86)+(x87|x88));

	if (t21 != -4086350994349625098LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = UINT16_MAX;
	static int8_t x90 = INT8_MAX;
	static int16_t x92 = -1;

	t22 = ((x89/x90)+(x91|x92));

	if (t22 != 515) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = INT8_MIN;

	t23 = ((x93/x94)+(x95|x96));

	if (t23 != -435264307857LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 28U;
	int32_t x98 = INT32_MIN;
	uint16_t x99 = UINT16_MAX;
	volatile int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 11906;

	t24 = ((x97/x98)+(x99|x100));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = INT8_MIN;
	int8_t x103 = 0;
	static volatile uint64_t t25 = 181811705461730LLU;

	t25 = ((x101/x102)+(x103|x104));

	if (t25 != 8113534827487645337LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = UINT16_MAX;
	static uint16_t x107 = 990U;
	volatile int32_t x108 = -1;

	t26 = ((x105/x106)+(x107|x108));

	if (t26 != -65536) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = -4;
	int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MIN;
	static int64_t t27 = -1045249724090LL;

	t27 = ((x109/x110)+(x111|x112));

	if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	volatile uint32_t x115 = UINT32_MAX;
	int8_t x116 = -20;
	uint32_t t28 = 1520U;

	t28 = ((x113/x114)+(x115|x116));

	if (t28 != 71582787U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = UINT32_MAX;
	static int64_t x118 = 30580986510135015LL;
	static int8_t x120 = -18;
	volatile int64_t t29 = -20LL;

	t29 = ((x117/x118)+(x119|x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	int8_t x122 = -3;
	static int64_t x123 = -1LL;
	static uint8_t x124 = 3U;
	volatile int64_t t30 = 877020627LL;

	t30 = ((x121/x122)+(x123|x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int8_t x126 = INT8_MAX;
	static volatile uint32_t x127 = UINT32_MAX;
	uint32_t x128 = UINT32_MAX;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x125/x126)+(x127|x128));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	volatile int16_t x132 = INT16_MAX;
	int32_t t32 = 230820003;

	t32 = ((x129/x130)+(x131|x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	static int32_t x134 = -1;
	static int16_t x135 = 4644;
	volatile int8_t x136 = INT8_MAX;
	int32_t t33 = 32649615;

	t33 = ((x133/x134)+(x135|x136));

	if (t33 != 37503) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 24LLU;
	int16_t x138 = -7;
	volatile uint32_t x140 = 1270953556U;
	static volatile uint64_t t34 = 3LLU;

	t34 = ((x137/x138)+(x139|x140));

	if (t34 != 1270953556LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	static int64_t x144 = INT64_MAX;
	int64_t t35 = INT64_MAX;

	t35 = ((x141/x142)+(x143|x144));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x146 = INT32_MIN;
	volatile int8_t x147 = INT8_MIN;
	uint64_t x148 = 9235711692453LLU;
	static uint64_t t36 = 6119379954LLU;

	t36 = ((x145/x146)+(x147|x148));

	if (t36 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x150 = 8001497410547363013LLU;
	uint32_t x151 = 894574105U;
	int32_t x152 = 61;
	volatile uint64_t t37 = 233690648116159LLU;

	t37 = ((x149/x150)+(x151|x152));

	if (t37 != 894574143LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	uint8_t x155 = 0U;
	volatile int64_t t38 = -5LL;

	t38 = ((x153/x154)+(x155|x156));

	if (t38 != 131358997890180LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = 724831U;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	static int64_t t39 = 3606615150LL;

	t39 = ((x157/x158)+(x159|x160));

	if (t39 != -12724858673190LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint16_t x162 = 25U;
	int8_t x163 = -1;
	uint32_t x164 = UINT32_MAX;
	uint32_t t40 = 1U;

	t40 = ((x161/x162)+(x163|x164));

	if (t40 != 1309U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x165 = 1717U;
	int32_t x166 = INT32_MAX;
	int8_t x167 = -52;
	int64_t x168 = INT64_MAX;

	t41 = ((x165/x166)+(x167|x168));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x171 = INT32_MIN;
	volatile int64_t x172 = INT64_MIN;
	int64_t t42 = -808963LL;

	t42 = ((x169/x170)+(x171|x172));

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 23;
	uint16_t x174 = 11437U;
	volatile int16_t x175 = 633;
	static int16_t x176 = 608;
	static int32_t t43 = 1;

	t43 = ((x173/x174)+(x175|x176));

	if (t43 != 633) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 1;
	int16_t x178 = 58;
	uint16_t x180 = 3U;
	static volatile int32_t t44 = -6676;

	t44 = ((x177/x178)+(x179|x180));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 26U;
	static uint8_t x184 = UINT8_MAX;
	volatile uint32_t t45 = 404015U;

	t45 = ((x181/x182)+(x183|x184));

	if (t45 != 281U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -9947185099146LL;
	volatile int64_t x187 = -1LL;
	volatile uint64_t x188 = UINT64_MAX;
	uint64_t t46 = 3679959258829394LLU;

	t46 = ((x185/x186)+(x187|x188));

	if (t46 != 4631LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	static int16_t x191 = INT16_MAX;
	static int16_t x192 = -7405;
	volatile int32_t t47 = -12021003;

	t47 = ((x189/x190)+(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 105U;
	static uint16_t x194 = 14U;
	int64_t x195 = -1LL;
	int16_t x196 = -1;
	volatile int64_t t48 = -202416210152607823LL;

	t48 = ((x193/x194)+(x195|x196));

	if (t48 != 6LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -2;
	int32_t x198 = INT32_MAX;
	static int8_t x199 = -1;

	t49 = ((x197/x198)+(x199|x200));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -20595783;
	int16_t x203 = 122;
	int16_t x204 = INT16_MIN;

	t50 = ((x201/x202)+(x203|x204));

	if (t50 != -32646LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MIN;
	volatile int16_t x207 = -1;
	int16_t x208 = INT16_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x205/x206)+(x207|x208));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 58821LLU;
	volatile int16_t x210 = -1;
	uint64_t x211 = 122058493815717833LLU;
	int64_t x212 = INT64_MIN;
	uint64_t t52 = 472LLU;

	t52 = ((x209/x210)+(x211|x212));

	if (t52 != 9345430530670493641LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	volatile int32_t x214 = -1;
	int16_t x215 = -7015;
	static volatile int16_t x216 = -358;
	uint64_t t53 = 201343413LLU;

	t53 = ((x213/x214)+(x215|x216));

	if (t53 != 18446744073709551260LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 3U;
	volatile int8_t x218 = -31;
	static int64_t x219 = INT64_MAX;
	int64_t t54 = INT64_MAX;

	t54 = ((x217/x218)+(x219|x220));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x223 = 3;
	uint64_t x224 = 167108LLU;
	static uint64_t t55 = 31555635LLU;

	t55 = ((x221/x222)+(x223|x224));

	if (t55 != 167111LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 151U;
	volatile int32_t x226 = INT32_MAX;
	int16_t x228 = INT16_MAX;
	uint32_t t56 = 340U;

	t56 = ((x225/x226)+(x227|x228));

	if (t56 != 9142271U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -52;
	uint8_t x230 = UINT8_MAX;
	int64_t x231 = 999502LL;
	volatile int64_t t57 = -79054LL;

	t57 = ((x229/x230)+(x231|x232));

	if (t57 != -50LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 1876U;
	int8_t x234 = 1;
	int8_t x236 = INT8_MIN;
	volatile int64_t t58 = 338518060LL;

	t58 = ((x233/x234)+(x235|x236));

	if (t58 != 1875LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	volatile uint16_t x238 = 15U;
	uint16_t x239 = 33U;
	static int32_t x240 = 1;
	volatile int64_t t59 = 768219037347005LL;

	t59 = ((x237/x238)+(x239|x240));

	if (t59 != -614891469123651687LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = -1;
	volatile uint64_t x243 = 3664429LLU;
	static int64_t x244 = 4412LL;
	static uint64_t t60 = 30771288LLU;

	t60 = ((x241/x242)+(x243|x244));

	if (t60 != 3701565LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -22;
	static int8_t x246 = INT8_MIN;
	static uint8_t x247 = 1U;
	int8_t x248 = 1;
	static int32_t t61 = -6;

	t61 = ((x245/x246)+(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = INT16_MAX;
	int8_t x250 = INT8_MIN;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = -27;
	static int32_t t62 = 1854025;

	t62 = ((x249/x250)+(x251|x252));

	if (t62 != -256) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	int16_t x254 = -57;
	uint16_t x255 = 6U;
	int64_t x256 = 1964355877LL;
	uint64_t t63 = 57336LLU;

	t63 = ((x253/x254)+(x255|x256));

	if (t63 != 1964355880LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x258 = 425803U;
	volatile uint32_t t64 = 111446U;

	t64 = ((x257/x258)+(x259|x260));

	if (t64 != 123957U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x262 = INT16_MIN;
	int8_t x263 = -1;
	static int64_t x264 = INT64_MIN;
	int64_t t65 = -31799065483368LL;

	t65 = ((x261/x262)+(x263|x264));

	if (t65 != -281474976710656LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MIN;
	volatile int16_t x267 = -1;

	t66 = ((x265/x266)+(x267|x268));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	uint64_t x270 = UINT64_MAX;
	uint32_t x271 = 3067U;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t67 = UINT64_MAX;

	t67 = ((x269/x270)+(x271|x272));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x277 = 1291;
	static int64_t x280 = INT64_MAX;
	uint64_t t68 = 57162622LLU;

	t68 = ((x277/x278)+(x279|x280));

	if (t68 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = -1542101359977995082LL;
	uint64_t x284 = 187876863LLU;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x281/x282)+(x283|x284));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MAX;
	volatile int64_t x286 = 84LL;
	uint16_t x287 = UINT16_MAX;
	uint8_t x288 = UINT8_MAX;
	int64_t t70 = 27LL;

	t70 = ((x285/x286)+(x287|x288));

	if (t70 != 65925LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x289 = INT8_MIN;
	volatile int32_t x290 = INT32_MIN;
	volatile int16_t x291 = -1;
	int16_t x292 = INT16_MIN;

	t71 = ((x289/x290)+(x291|x292));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = -3;
	static int64_t x294 = -1LL;
	volatile int8_t x296 = INT8_MIN;

	t72 = ((x293/x294)+(x295|x296));

	if (t72 != -125LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x301 = 328U;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = 24613U;
	volatile uint32_t t73 = 7737U;

	t73 = ((x301/x302)+(x303|x304));

	if (t73 != 4294967205U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x305 = 0U;
	volatile int64_t x306 = INT64_MIN;
	uint8_t x307 = 9U;
	uint64_t x308 = 43093968549298650LLU;
	static volatile uint64_t t74 = 3LLU;

	t74 = ((x305/x306)+(x307|x308));

	if (t74 != 43093968549298651LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = 0LL;
	int64_t x311 = INT64_MIN;
	volatile int64_t t75 = -493282752886763LL;

	t75 = ((x309/x310)+(x311|x312));

	if (t75 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = -584865580LL;
	uint16_t x314 = 1U;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;

	t76 = ((x313/x314)+(x315|x316));

	if (t76 != -584865708LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -7377;
	int64_t x318 = -30431374018164LL;
	int8_t x319 = -37;
	volatile int32_t x320 = INT32_MAX;
	int64_t t77 = 920LL;

	t77 = ((x317/x318)+(x319|x320));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x321 = 3U;
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MIN;
	int64_t x324 = 1036644905959952679LL;
	int64_t t78 = 239065740048466798LL;

	t78 = ((x321/x322)+(x323|x324));

	if (t78 != -1309273817LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -1;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t79 = 611037108;

	t79 = ((x325/x326)+(x327|x328));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 204158947515LLU;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	int8_t x332 = -1;

	t80 = ((x329/x330)+(x331|x332));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x333 = 2966U;
	int64_t x334 = -129694276969LL;
	int32_t x336 = INT32_MIN;
	int64_t t81 = -14597926714485LL;

	t81 = ((x333/x334)+(x335|x336));

	if (t81 != -2147483521LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = -49;
	int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	uint16_t x340 = 27U;
	static volatile int32_t t82 = -193;

	t82 = ((x337/x338)+(x339|x340));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = -1;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	int64_t t83 = 1175803198071LL;

	t83 = ((x341/x342)+(x343|x344));

	if (t83 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = 0;
	static int32_t x346 = 823687;
	static uint32_t x347 = 43216U;
	volatile uint32_t t84 = 0U;

	t84 = ((x345/x346)+(x347|x348));

	if (t84 != 4294944976U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x350 = INT32_MIN;
	static volatile uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MIN;
	volatile int64_t t85 = 1LL;

	t85 = ((x349/x350)+(x351|x352));

	if (t85 != 4294934783LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x353 = -1;
	int64_t x354 = INT64_MIN;
	volatile uint64_t x356 = 59LLU;
	uint64_t t86 = 407857208327908LLU;

	t86 = ((x353/x354)+(x355|x356));

	if (t86 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = -1;
	int64_t x358 = INT64_MAX;
	static int64_t x359 = -1LL;
	int8_t x360 = INT8_MIN;
	static volatile int64_t t87 = 7LL;

	t87 = ((x357/x358)+(x359|x360));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 941U;
	int32_t x362 = 39802;
	int16_t x363 = 8186;
	static uint32_t x364 = 3U;
	uint32_t t88 = 2U;

	t88 = ((x361/x362)+(x363|x364));

	if (t88 != 8187U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	volatile int64_t t89 = 296873111118LL;

	t89 = ((x365/x366)+(x367|x368));

	if (t89 != -2193606051LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	volatile int16_t x371 = INT16_MAX;
	static int32_t t90 = -51125868;

	t90 = ((x369/x370)+(x371|x372));

	if (t90 != -2147450881) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x373 = UINT16_MAX;
	int16_t x375 = -1;
	uint8_t x376 = 0U;
	volatile int32_t t91 = -91;

	t91 = ((x373/x374)+(x375|x376));

	if (t91 != 27) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MAX;
	int32_t x380 = INT32_MIN;

	t92 = ((x377/x378)+(x379|x380));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x382 = INT64_MAX;
	uint8_t x383 = 26U;
	uint32_t x384 = UINT32_MAX;
	int64_t t93 = 42887799393106LL;

	t93 = ((x381/x382)+(x383|x384));

	if (t93 != 4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = -1;
	int8_t x387 = -1;
	static int64_t x388 = INT64_MIN;
	int64_t t94 = -944794211034921212LL;

	t94 = ((x385/x386)+(x387|x388));

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = -1;
	volatile int16_t x390 = -682;
	static int8_t x391 = -1;
	uint64_t x392 = 298841LLU;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x389/x390)+(x391|x392));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = 55U;
	volatile int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = 41294638123996LLU;
	static uint64_t t96 = 32771674137463860LLU;

	t96 = ((x397/x398)+(x399|x400));

	if (t96 != 18446744072237124572LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x401 = 31U;
	uint16_t x402 = UINT16_MAX;
	static volatile uint64_t x403 = 8117963088LLU;
	static volatile uint64_t t97 = 30996257LLU;

	t97 = ((x401/x402)+(x403|x404));

	if (t97 != 8117977083LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = -1;
	static int16_t x406 = -6;
	static uint32_t x407 = 62U;
	int16_t x408 = INT16_MIN;
	volatile uint32_t t98 = 54U;

	t98 = ((x405/x406)+(x407|x408));

	if (t98 != 4294934590U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x409 = -1;
	int64_t x411 = -1LL;
	int32_t x412 = INT32_MIN;
	int64_t t99 = -207235100532425675LL;

	t99 = ((x409/x410)+(x411|x412));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

