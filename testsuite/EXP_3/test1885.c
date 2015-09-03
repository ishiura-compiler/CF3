#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = 1006564286U;
int16_t x15 = INT16_MIN;
int64_t x17 = -1LL;
static int16_t x21 = 2;
uint64_t x23 = UINT64_MAX;
volatile uint64_t t5 = 1404371059LLU;
static uint64_t x27 = 13359744180271LLU;
volatile uint64_t t8 = 220671814100393696LLU;
volatile uint8_t x44 = UINT8_MAX;
volatile uint64_t t10 = 26942209LLU;
uint64_t x45 = UINT64_MAX;
uint32_t x54 = 2531U;
static int16_t x57 = 559;
int32_t x58 = -181527;
volatile uint64_t t16 = 51LLU;
int32_t x72 = -1;
uint32_t x73 = 366502U;
uint32_t x75 = 19U;
int64_t x76 = INT64_MIN;
uint8_t x89 = 20U;
int32_t x92 = INT32_MAX;
int32_t x98 = -14890;
volatile int8_t x99 = INT8_MIN;
int16_t x100 = 8;
int32_t x103 = 11;
int16_t x105 = -28;
int8_t x106 = 11;
volatile int64_t t26 = -5411814622605LL;
volatile int8_t x116 = INT8_MIN;
uint32_t t28 = 7760540U;
int64_t x122 = INT64_MAX;
int64_t t29 = 20918942213173269LL;
int32_t x125 = 30346;
int64_t x129 = 113LL;
static volatile uint64_t x130 = UINT64_MAX;
int16_t x135 = INT16_MAX;
int16_t x136 = -13706;
static int16_t x142 = INT16_MAX;
int8_t x144 = 0;
volatile uint64_t t37 = 8763LLU;
int32_t x165 = 158173990;
int8_t x168 = INT8_MAX;
uint32_t x172 = UINT32_MAX;
volatile int64_t t41 = -228068211623LL;
uint8_t x179 = 118U;
int16_t x180 = -1;
volatile int16_t x181 = -1;
volatile uint32_t t45 = 3U;
int16_t x192 = INT16_MIN;
int8_t x199 = INT8_MIN;
volatile int64_t x200 = 9507LL;
int32_t x207 = INT32_MIN;
volatile int64_t x212 = -1LL;
static int64_t t51 = -15LL;
int8_t x221 = INT8_MAX;
static int32_t x226 = 107333827;
volatile uint64_t t53 = 131175600488584LLU;
static int16_t x233 = INT16_MIN;
int8_t x234 = -6;
int8_t x237 = INT8_MIN;
volatile int8_t x241 = -1;
uint16_t x243 = 3U;
int8_t x244 = INT8_MIN;
int8_t x245 = INT8_MIN;
uint16_t x246 = 8928U;
static volatile int64_t t59 = 192196330LL;
static uint64_t x265 = UINT64_MAX;
int16_t x267 = -12848;
volatile int64_t x277 = -1LL;
static uint8_t x280 = 3U;
int32_t x282 = -60560863;
int64_t x284 = 4315027813806701LL;
int64_t x286 = -146404230386LL;
int32_t x292 = 10698268;
static int8_t x294 = -1;
int32_t x300 = INT32_MAX;
int64_t t69 = 5685LL;
uint32_t x308 = 0U;
static uint32_t t75 = 39872U;
uint8_t x329 = 0U;
int32_t x330 = INT32_MAX;
int64_t x332 = 12190020473LL;
volatile int64_t t79 = 0LL;
static volatile int64_t x342 = INT64_MIN;
int64_t x344 = INT64_MIN;
uint64_t x346 = 0LLU;
uint32_t x349 = 29U;
int64_t t83 = -4354518470576371LL;
int64_t x357 = -1LL;
int32_t x374 = INT32_MIN;
int64_t x378 = -1LL;
volatile int16_t x379 = -8003;
uint64_t t91 = 10417986LLU;
int16_t x405 = -1;
int16_t x407 = INT16_MAX;
volatile int32_t x412 = 1346;
volatile int64_t t94 = -902819279027LL;
int32_t x422 = -242933993;
volatile uint64_t x432 = 506672143341468741LLU;


void f0(void) {
	int32_t x1 = -241252;
	int8_t x2 = 3;
	int16_t x3 = INT16_MIN;
	int16_t x4 = -1;
	int32_t t0 = 56038254;

	t0 = ((x1-x2)^(x3|x4));

	if (t0 != 241254) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint8_t x6 = 1U;
	static uint32_t x7 = 15U;
	volatile int16_t x8 = 9;

	t1 = ((x5-x6)^(x7|x8));

	if (t1 != 4294967152U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = -1;
	int8_t x11 = 0;
	uint8_t x12 = UINT8_MAX;
	int64_t t2 = 0LL;

	t2 = ((x9-x10)^(x11|x12));

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -4;
	volatile int64_t x14 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	int64_t t3 = 330739259546065LL;

	t3 = ((x13-x14)^(x15|x16));

	if (t3 != -9223372036854743044LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 118775595;
	uint64_t x19 = UINT64_MAX;
	static int8_t x20 = INT8_MIN;
	volatile uint64_t t4 = 755308931189274386LLU;

	t4 = ((x17-x18)^(x19|x20));

	if (t4 != 118775595LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	static int32_t x24 = -1;

	t5 = ((x21-x22)^(x23|x24));

	if (t5 != 2147483644LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int8_t x26 = INT8_MAX;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 35231677221398429LLU;

	t6 = ((x25-x26)^(x27|x28));

	if (t6 != 9223358677110562734LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static int8_t x30 = -3;
	static int16_t x31 = 1221;
	volatile int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 1;

	t7 = ((x29-x30)^(x31|x32));

	if (t7 != 2147483590) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 122249056639LLU;
	uint64_t x34 = UINT64_MAX;
	volatile uint64_t x35 = UINT64_MAX;
	uint64_t x36 = UINT64_MAX;

	t8 = ((x33-x34)^(x35|x36));

	if (t8 != 18446743951460494975LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x38 = UINT32_MAX;
	int32_t x39 = INT32_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile uint32_t t9 = 2463902U;

	t9 = ((x37-x38)^(x39|x40));

	if (t9 != 2147516414U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	int16_t x42 = 3;
	int64_t x43 = -1LL;

	t10 = ((x41-x42)^(x43|x44));

	if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	int8_t x47 = 3;
	static int16_t x48 = -1;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x45-x46)^(x47|x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 92U;
	int64_t x50 = -1LL;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -1;
	static int64_t t12 = -315652915LL;

	t12 = ((x49-x50)^(x51|x52));

	if (t12 != -94LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 1249430775U;
	uint32_t x55 = UINT32_MAX;
	static volatile uint64_t x56 = 1LLU;
	volatile uint64_t t13 = 380LLU;

	t13 = ((x53-x54)^(x55|x56));

	if (t13 != 3045539051LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 30775769945LL;

	t14 = ((x57-x58)^(x59|x60));

	if (t14 != -178362LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	volatile int64_t x62 = INT64_MIN;
	uint16_t x63 = 1U;
	static volatile uint8_t x64 = 14U;
	volatile int64_t t15 = 17581189108LL;

	t15 = ((x61-x62)^(x63|x64));

	if (t15 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 552616930435415096LLU;
	static volatile int32_t x66 = -8749402;
	static int64_t x67 = -7598LL;
	uint16_t x68 = UINT16_MAX;

	t16 = ((x65-x66)^(x67|x68));

	if (t16 != 17894127143265387117LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -183;
	uint16_t x70 = 30739U;
	int32_t x71 = -1;
	static volatile int32_t t17 = -5;

	t17 = ((x69-x70)^(x71|x72));

	if (t17 != 30921) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x74 = UINT8_MAX;
	int64_t t18 = -86606339LL;

	t18 = ((x73-x74)^(x75|x76));

	if (t18 != -9223372036854409548LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int64_t x82 = -1LL;
	static int8_t x83 = -21;
	uint16_t x84 = 634U;
	volatile uint64_t t19 = 4133362992766478LLU;

	t19 = ((x81-x82)^(x83|x84));

	if (t19 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MIN;
	volatile int16_t x87 = 16;
	int8_t x88 = -1;
	int64_t t20 = 2268918710548882LL;

	t20 = ((x85-x86)^(x87|x88));

	if (t20 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x90 = 7;
	static volatile uint32_t x91 = UINT32_MAX;
	volatile uint32_t t21 = 326852004U;

	t21 = ((x89-x90)^(x91|x92));

	if (t21 != 4294967282U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	static int32_t x94 = INT32_MAX;
	int8_t x95 = -1;
	uint64_t x96 = 102891LLU;
	static uint64_t t22 = 353736LLU;

	t22 = ((x93-x94)^(x95|x96));

	if (t22 != 2147483647LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	volatile int64_t t23 = -51967819LL;

	t23 = ((x97-x98)^(x99|x100));

	if (t23 != 9223372036854760866LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	int64_t x102 = -1LL;
	volatile int8_t x104 = INT8_MIN;
	volatile int64_t t24 = -19581536LL;

	t24 = ((x101-x102)^(x103|x104));

	if (t24 != -117LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = -1;
	static volatile uint32_t t25 = 409598635U;

	t25 = ((x105-x106)^(x107|x108));

	if (t25 != 38U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 160U;
	int16_t x110 = 5636;
	static volatile int16_t x111 = INT16_MAX;
	int64_t x112 = 5LL;

	t26 = ((x109-x110)^(x111|x112));

	if (t26 != -27293LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = 110282LL;
	static int64_t x114 = 220816961259268LL;
	int64_t x115 = INT64_MAX;
	int64_t t27 = -1LL;

	t27 = ((x113-x114)^(x115|x116));

	if (t27 != 220816961148985LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MIN;
	volatile uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MAX;

	t28 = ((x117-x118)^(x119|x120));

	if (t28 != 4294966912U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 118U;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = INT8_MIN;

	t29 = ((x121-x122)^(x123|x124));

	if (t29 != 9223372036854775688LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = INT64_MAX;
	uint64_t x127 = UINT64_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t30 = 18386238LLU;

	t30 = ((x125-x126)^(x127|x128));

	if (t30 != 9223372036854745460LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x131 = -1LL;
	volatile int16_t x132 = -10716;
	volatile uint64_t t31 = 47683301010LLU;

	t31 = ((x129-x130)^(x131|x132));

	if (t31 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = -1;
	uint16_t x134 = UINT16_MAX;
	int32_t t32 = -972582795;

	t32 = ((x133-x134)^(x135|x136));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = -1;
	static int32_t x139 = -34654162;
	static int64_t x140 = -1LL;
	int64_t t33 = 1821612910239LL;

	t33 = ((x137-x138)^(x139|x140));

	if (t33 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x141 = 40U;
	int8_t x143 = -1;
	volatile int32_t t34 = -13547;

	t34 = ((x141-x142)^(x143|x144));

	if (t34 != 32726) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 9818U;
	int16_t x146 = INT16_MIN;
	int64_t x147 = 62334LL;
	static uint32_t x148 = 2U;
	static volatile int64_t t35 = 12LL;

	t35 = ((x145-x146)^(x147|x148));

	if (t35 != 21796LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = 4648U;
	volatile int8_t x150 = INT8_MIN;
	volatile int8_t x151 = 1;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t36 = 19146629U;

	t36 = ((x149-x150)^(x151|x152));

	if (t36 != 4294962519U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 0;
	static int32_t x154 = INT32_MAX;
	static uint64_t x155 = UINT64_MAX;
	static int32_t x156 = 5;

	t37 = ((x153-x154)^(x155|x156));

	if (t37 != 2147483646LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	int16_t x158 = -1;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = 4816189094LLU;
	static uint64_t t38 = 9389118LLU;

	t38 = ((x157-x158)^(x159|x160));

	if (t38 != 9223372036854775719LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 6U;
	uint32_t x162 = UINT32_MAX;
	int8_t x163 = INT8_MIN;
	int32_t x164 = 394075058;
	volatile uint32_t t39 = 2637563U;

	t39 = ((x161-x162)^(x163|x164));

	if (t39 != 4294967221U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = -1;
	volatile uint64_t t40 = 505705883751779LLU;

	t40 = ((x165-x166)^(x167|x168));

	if (t40 != 18446744073551377624LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = 6;
	volatile int8_t x171 = -1;

	t41 = ((x169-x170)^(x171|x172));

	if (t41 != 9223372032559808518LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -32;
	uint8_t x174 = UINT8_MAX;
	static uint8_t x175 = 2U;
	int8_t x176 = 2;
	int32_t t42 = 445119249;

	t42 = ((x173-x174)^(x175|x176));

	if (t42 != -285) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = 7389U;
	uint16_t x178 = 0U;
	volatile int32_t t43 = -270024785;

	t43 = ((x177-x178)^(x179|x180));

	if (t43 != -7390) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x182 = INT64_MIN;
	static int8_t x183 = INT8_MAX;
	static uint8_t x184 = UINT8_MAX;
	int64_t t44 = -29455407317683507LL;

	t44 = ((x181-x182)^(x183|x184));

	if (t44 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = -1;
	volatile uint8_t x186 = UINT8_MAX;
	int8_t x187 = -1;
	static uint32_t x188 = UINT32_MAX;

	t45 = ((x185-x186)^(x187|x188));

	if (t45 != 255U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	uint32_t x191 = 738304044U;
	static volatile uint32_t t46 = 2U;

	t46 = ((x189-x190)^(x191|x192));

	if (t46 != 2147459244U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x193 = 10;
	int64_t x194 = 6716696LL;
	uint64_t x195 = 158210366843066517LLU;
	int64_t x196 = 329765LL;
	uint64_t t47 = 24LLU;

	t47 = ((x193-x194)^(x195|x196));

	if (t47 != 18288533706873150023LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = 1075U;
	uint32_t x198 = UINT32_MAX;
	int64_t t48 = -72811583LL;

	t48 = ((x197-x198)^(x199|x200));

	if (t48 != -1129LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	static int64_t x202 = 756048294752354LL;
	int64_t x203 = -1LL;
	uint16_t x204 = 0U;
	int64_t t49 = 301765773092724335LL;

	t49 = ((x201-x202)^(x203|x204));

	if (t49 != 756048294785121LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x205 = -1LL;
	static volatile uint32_t x206 = 24U;
	volatile uint8_t x208 = UINT8_MAX;
	static volatile int64_t t50 = -29128702666LL;

	t50 = ((x205-x206)^(x207|x208));

	if (t50 != 2147483416LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 199U;
	static uint32_t x210 = 252766U;
	static uint8_t x211 = UINT8_MAX;

	t51 = ((x209-x210)^(x211|x212));

	if (t51 != -4294714730LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x222 = 215541827954451186LLU;
	int8_t x223 = INT8_MIN;
	int64_t x224 = -1LL;
	uint64_t t52 = 1358148LLU;

	t52 = ((x221-x222)^(x223|x224));

	if (t52 != 215541827954451058LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 39536371242740LLU;
	int64_t x227 = INT64_MIN;
	static int64_t x228 = INT64_MIN;

	t53 = ((x225-x226)^(x227|x228));

	if (t53 != 9223411573118684721LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x229 = -1LL;
	int32_t x230 = INT32_MAX;
	int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MIN;
	volatile int64_t t54 = 33624795486126LL;

	t54 = ((x229-x230)^(x231|x232));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x235 = 35;
	int64_t x236 = -1LL;
	static int64_t t55 = 1682247232483157757LL;

	t55 = ((x233-x234)^(x235|x236));

	if (t55 != 32761LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x238 = 6064U;
	uint32_t x239 = 16U;
	int16_t x240 = INT16_MAX;
	uint32_t t56 = 9432934U;

	t56 = ((x237-x238)^(x239|x240));

	if (t56 != 4294940719U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x242 = UINT8_MAX;
	int32_t t57 = -19480042;

	t57 = ((x241-x242)^(x243|x244));

	if (t57 != 131) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x247 = -1;
	static uint16_t x248 = 4853U;
	int32_t t58 = -784141;

	t58 = ((x245-x246)^(x247|x248));

	if (t58 != 9055) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x249 = -1;
	volatile uint16_t x250 = UINT16_MAX;
	static volatile int64_t x251 = INT64_MIN;
	uint16_t x252 = 6948U;

	t59 = ((x249-x250)^(x251|x252));

	if (t59 != 9223372036854717220LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x257 = 353342U;
	volatile int8_t x258 = INT8_MIN;
	static int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	volatile uint32_t t60 = 125U;

	t60 = ((x257-x258)^(x259|x260));

	if (t60 != 4294613822U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 4U;
	int32_t x262 = 2140103;
	int8_t x263 = -1;
	volatile int32_t x264 = -429;
	volatile int32_t t61 = 22;

	t61 = ((x261-x262)^(x263|x264));

	if (t61 != 2140098) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x266 = UINT32_MAX;
	volatile int64_t x268 = INT64_MIN;
	uint64_t t62 = 3694351LLU;

	t62 = ((x265-x266)^(x267|x268));

	if (t62 != 4294954448LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = INT32_MIN;
	static int64_t x274 = INT64_MIN;
	static volatile int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MAX;
	volatile int64_t t63 = -57512636944512LL;

	t63 = ((x273-x274)^(x275|x276));

	if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x278 = 1189644839093LLU;
	volatile int16_t x279 = -1;
	volatile uint64_t t64 = 0LLU;

	t64 = ((x277-x278)^(x279|x280));

	if (t64 != 1189644839093LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = 28462U;
	static int16_t x283 = -1;
	int64_t t65 = -13LL;

	t65 = ((x281-x282)^(x283|x284));

	if (t65 != -60589326LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = -1;
	uint8_t x287 = 43U;
	int32_t x288 = INT32_MIN;
	static volatile int64_t t66 = -37447005197124LL;

	t66 = ((x285-x286)^(x287|x288));

	if (t66 != -147801029414LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = 7U;
	int64_t x290 = -495659237471784LL;
	static volatile int8_t x291 = 0;
	volatile int64_t t67 = -1108734463094680LL;

	t67 = ((x289-x290)^(x291|x292));

	if (t67 != 495659230971955LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x293 = -9159LL;
	int16_t x295 = INT16_MAX;
	uint64_t x296 = 366657453095LLU;
	volatile uint64_t t68 = 1773018785779LLU;

	t68 = ((x293-x294)^(x295|x296));

	if (t68 != 18446743707052090309LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x297 = 0U;
	static volatile int32_t x298 = -147401;
	int64_t x299 = INT64_MAX;

	t69 = ((x297-x298)^(x299|x300));

	if (t69 != 9223372036854628406LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x301 = INT64_MIN;
	int16_t x302 = -1;
	int32_t x303 = INT32_MAX;
	int8_t x304 = -1;
	volatile int64_t t70 = -969615458507LL;

	t70 = ((x301-x302)^(x303|x304));

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 1696211634LLU;
	uint32_t x307 = 57016565U;
	volatile uint64_t t71 = 2399563LLU;

	t71 = ((x305-x306)^(x307|x308));

	if (t71 != 2575556024LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = 1;
	int8_t x310 = 0;
	int8_t x311 = -16;
	uint16_t x312 = UINT16_MAX;
	int32_t t72 = 0;

	t72 = ((x309-x310)^(x311|x312));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t73 = 43;

	t73 = ((x313-x314)^(x315|x316));

	if (t73 != 2147418239) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x317 = 210707447U;
	int8_t x318 = INT8_MIN;
	static uint16_t x319 = UINT16_MAX;
	uint64_t x320 = 1178694732055264LLU;
	uint64_t t74 = 71340355338936LLU;

	t74 = ((x317-x318)^(x319|x320));

	if (t74 != 1178694924295048LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = -351872;
	uint32_t x322 = 2U;
	static uint32_t x323 = 5440262U;
	int32_t x324 = INT32_MAX;

	t75 = ((x321-x322)^(x323|x324));

	if (t75 != 2147835521U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 98LLU;
	volatile uint64_t x326 = 96804LLU;
	int16_t x327 = -1;
	uint32_t x328 = 3U;
	volatile uint64_t t76 = 23858646245527732LLU;

	t76 = ((x325-x326)^(x327|x328));

	if (t76 != 18446744069414681025LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x331 = 34U;
	volatile int64_t t77 = 3067566093660395LL;

	t77 = ((x329-x330)^(x331|x332));

	if (t77 != -11432299654LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = -55;
	int32_t x334 = INT32_MIN;
	int32_t x335 = 448;
	int64_t x336 = 1350584768711781189LL;
	int64_t t78 = 4274306020491865LL;

	t78 = ((x333-x334)^(x335|x336));

	if (t78 != 1350584770788168716LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	static int64_t x338 = -54126240358910215LL;
	volatile int64_t x339 = INT64_MIN;
	int16_t x340 = -16315;

	t79 = ((x337-x338)^(x339|x340));

	if (t79 != -54126240358889150LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = 8166435383158LLU;
	int8_t x343 = -1;
	volatile uint64_t t80 = 1367984933852LLU;

	t80 = ((x341-x342)^(x343|x344));

	if (t80 != 9223363870419392649LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = INT32_MAX;
	int64_t x347 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;
	static uint64_t t81 = 1114LLU;

	t81 = ((x345-x346)^(x347|x348));

	if (t81 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x350 = INT32_MIN;
	int8_t x351 = -1;
	static int16_t x352 = -514;
	volatile uint32_t t82 = 81U;

	t82 = ((x349-x350)^(x351|x352));

	if (t82 != 2147483618U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = 88;
	int64_t x354 = -1LL;
	int64_t x355 = -1LL;
	static volatile int32_t x356 = INT32_MAX;

	t83 = ((x353-x354)^(x355|x356));

	if (t83 != -90LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x358 = -1LL;
	static int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	volatile int64_t t84 = 1124776LL;

	t84 = ((x357-x358)^(x359|x360));

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MAX;
	volatile int8_t x362 = -1;
	static int32_t x363 = -11;
	int16_t x364 = -6;
	int32_t t85 = -52843;

	t85 = ((x361-x362)^(x363|x364));

	if (t85 != -32769) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x365 = 291161242;
	static uint64_t x366 = UINT64_MAX;
	uint32_t x367 = UINT32_MAX;
	int32_t x368 = INT32_MIN;
	volatile uint64_t t86 = 12873878777531LLU;

	t86 = ((x365-x366)^(x367|x368));

	if (t86 != 4003806052LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	static int64_t x370 = INT64_MIN;
	int32_t x371 = 15;
	int16_t x372 = -1;
	volatile int64_t t87 = -6272872938289LL;

	t87 = ((x369-x370)^(x371|x372));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x373 = 2224U;
	int16_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile uint32_t t88 = 2U;

	t88 = ((x373-x374)^(x375|x376));

	if (t88 != 2147481423U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = INT8_MIN;
	int16_t x380 = INT16_MAX;
	int64_t t89 = -90923659770357LL;

	t89 = ((x377-x378)^(x379|x380));

	if (t89 != 126LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = -1LL;
	volatile int16_t x382 = 97;
	int8_t x383 = INT8_MIN;
	static uint32_t x384 = 21806U;
	volatile int64_t t90 = -106LL;

	t90 = ((x381-x382)^(x383|x384));

	if (t90 != -4294967248LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = 1;
	volatile uint64_t x391 = UINT64_MAX;
	static int32_t x392 = -35287237;

	t91 = ((x389-x390)^(x391|x392));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MIN;
	volatile uint8_t x399 = 21U;
	static int8_t x400 = INT8_MAX;
	int32_t t92 = -28730763;

	t92 = ((x397-x398)^(x399|x400));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x406 = INT32_MIN;
	volatile int8_t x408 = INT8_MIN;
	static int32_t t93 = INT32_MIN;

	t93 = ((x405-x406)^(x407|x408));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x409 = INT8_MAX;
	int64_t x410 = 49074757578781LL;
	int64_t x411 = 7219025LL;

	t94 = ((x409-x410)^(x411|x412));

	if (t94 != -49074750359759LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x413 = 1346LLU;
	volatile uint16_t x414 = 6U;
	volatile uint64_t x415 = 41189375191767406LLU;
	static volatile uint8_t x416 = 5U;
	uint64_t t95 = 174207533696696LLU;

	t95 = ((x413-x414)^(x415|x416));

	if (t95 != 41189375191768147LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x421 = -18;
	int8_t x423 = -1;
	int16_t x424 = 15;
	volatile int32_t t96 = 2;

	t96 = ((x421-x422)^(x423|x424));

	if (t96 != -242933976) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x425 = UINT64_MAX;
	int16_t x426 = 0;
	int16_t x427 = -1;
	int16_t x428 = -3902;
	volatile uint64_t t97 = 477252265700227640LLU;

	t97 = ((x425-x426)^(x427|x428));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x429 = UINT16_MAX;
	int64_t x430 = -1LL;
	int8_t x431 = INT8_MIN;
	static uint64_t t98 = 536812LLU;

	t98 = ((x429-x430)^(x431|x432));

	if (t98 != 18446744073709486021LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x433 = UINT8_MAX;
	static int16_t x434 = INT16_MIN;
	volatile int32_t x435 = INT32_MIN;
	uint16_t x436 = 48U;
	volatile int32_t t99 = 29093373;

	t99 = ((x433-x434)^(x435|x436));

	if (t99 != -2147450673) { NG(); } else { ; }
	
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

