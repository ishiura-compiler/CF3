#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MAX;
uint64_t x3 = 78LLU;
int32_t x4 = INT32_MIN;
volatile int64_t x5 = INT64_MIN;
int8_t x8 = -1;
int8_t x11 = -30;
int64_t x13 = 40LL;
uint64_t t5 = 125LLU;
volatile int16_t x35 = -1;
int16_t x38 = INT16_MAX;
static int16_t x39 = 947;
static uint16_t x43 = UINT16_MAX;
volatile uint64_t t10 = 8759275LLU;
int8_t x49 = INT8_MIN;
static uint32_t x52 = 31U;
int64_t x59 = 178169099187723LL;
uint32_t x61 = 4U;
static int64_t x65 = INT64_MIN;
volatile int64_t x68 = INT64_MIN;
volatile int64_t t16 = 1476853129LL;
int64_t x74 = -501533LL;
static int32_t x78 = -69320027;
volatile int64_t x83 = INT64_MIN;
int32_t x84 = INT32_MIN;
int64_t t20 = -52074732778871LL;
static uint16_t x96 = 38U;
static int64_t x106 = 11892577109422007LL;
static int8_t x107 = INT8_MAX;
static int8_t x109 = INT8_MIN;
int16_t x116 = -1;
volatile uint32_t t26 = 10U;
int8_t x120 = 10;
int32_t x140 = INT32_MIN;
int64_t x143 = -1LL;
int64_t t33 = -1512082677441441180LL;
int16_t x155 = INT16_MAX;
volatile uint64_t t36 = 88446067643466LLU;
int32_t x175 = 4;
int8_t x180 = INT8_MAX;
int64_t t42 = 10466LL;
int64_t x200 = INT64_MAX;
volatile int32_t t46 = -59794170;
volatile int64_t x211 = INT64_MIN;
static int64_t x213 = INT64_MIN;
volatile int64_t t49 = -98673764075694771LL;
int64_t t50 = -136653104111035403LL;
int64_t x225 = 33943384118LL;
static int64_t x228 = INT64_MAX;
static volatile int64_t x229 = INT64_MIN;
static uint32_t x230 = UINT32_MAX;
int8_t x236 = -1;
static int32_t x245 = INT32_MIN;
int64_t x248 = INT64_MIN;
int8_t x255 = -1;
uint32_t t58 = 1732U;
volatile int32_t x266 = -1;
int64_t x269 = -1LL;
uint64_t x274 = 2618054498663851LLU;
volatile uint64_t t63 = 274948444599897LLU;
int16_t x277 = INT16_MAX;
int32_t x284 = -1;
uint8_t x286 = UINT8_MAX;
int32_t x290 = 10;
volatile uint32_t x294 = 2396297U;
uint64_t x295 = UINT64_MAX;
volatile int32_t x296 = INT32_MIN;
volatile uint64_t t68 = 2564344LLU;
volatile int64_t x297 = INT64_MAX;
volatile uint16_t x300 = UINT16_MAX;
int8_t x302 = INT8_MIN;
int16_t x304 = 1;
static int8_t x306 = INT8_MAX;
static int64_t x313 = INT64_MIN;
int8_t x315 = -8;
static uint8_t x318 = 0U;
uint64_t x324 = 7519LLU;
uint16_t x330 = UINT16_MAX;
int8_t x332 = INT8_MIN;
int64_t t77 = 912LL;
int64_t x340 = INT64_MAX;
volatile uint64_t t79 = 116529756021624542LLU;
int16_t x347 = -1972;
static volatile int32_t t80 = -158756;
static int32_t t81 = -7515;
uint32_t x360 = UINT32_MAX;
int64_t t86 = 9LL;
uint32_t x378 = 4004U;
int64_t x379 = -1LL;
static int16_t x382 = -21;
int32_t x385 = 17348952;
uint64_t x390 = 2978841LLU;
int8_t x396 = INT8_MIN;
int16_t x397 = INT16_MAX;
static volatile uint64_t t92 = 142245917LLU;
volatile int8_t x405 = INT8_MIN;
uint64_t t94 = 78602912649233LLU;
volatile int8_t x418 = 12;
volatile int64_t x420 = INT64_MIN;
int16_t x425 = INT16_MIN;


void f0(void) {
	uint64_t x2 = 599891616456638LLU;
	uint64_t t0 = 997846346LLU;

	t0 = ((x1&(x2/x3))%x4);

	if (t0 != 25940LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -13979LL;
	int16_t x7 = 4019;
	int64_t t1 = -128760352LL;

	t1 = ((x5&(x6/x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -513189;
	volatile int32_t x10 = -1;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 49780;

	t2 = ((x9&(x10/x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = -1;
	int16_t x15 = -1;
	uint16_t x16 = 1U;
	volatile int64_t t3 = -7545634992LL;

	t3 = ((x13&(x14/x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = -1;
	int32_t x20 = INT32_MIN;
	uint32_t t4 = 2U;

	t4 = ((x17&(x18/x19))%x20);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 11569496LLU;
	uint8_t x22 = UINT8_MAX;
	volatile int8_t x23 = INT8_MAX;
	volatile uint64_t x24 = 32474064747451LLU;

	t5 = ((x21&(x22/x23))%x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int8_t x26 = INT8_MAX;
	uint32_t x27 = 1856U;
	int16_t x28 = INT16_MAX;
	volatile uint32_t t6 = 7506U;

	t6 = ((x25&(x26/x27))%x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	volatile int32_t x30 = INT32_MIN;
	int32_t x31 = -207541374;
	static volatile uint16_t x32 = 2U;
	int32_t t7 = -4136;

	t7 = ((x29&(x30/x31))%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 158782208174082203LLU;
	uint16_t x34 = 3921U;
	uint32_t x36 = 54U;
	uint64_t t8 = 281262706092774LLU;

	t8 = ((x33&(x34/x35))%x36);

	if (t8 != 29LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	static int64_t x40 = INT64_MIN;
	int64_t t9 = -10257181065LL;

	t9 = ((x37&(x38/x39))%x40);

	if (t9 != 34LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	static uint64_t x42 = 1846999874861336LLU;
	int16_t x44 = INT16_MIN;

	t10 = ((x41&(x42/x43))%x44);

	if (t10 != 47949LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	static uint8_t x46 = 61U;
	int32_t x47 = INT32_MAX;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -810140;

	t11 = ((x45&(x46/x47))%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x50 = 6343U;
	uint16_t x51 = 5U;
	uint32_t t12 = 237385U;

	t12 = ((x49&(x50/x51))%x52);

	if (t12 != 5U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = UINT16_MAX;
	static int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = 643825;

	t13 = ((x53&(x54/x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MAX;
	volatile uint16_t x58 = 3U;
	uint16_t x60 = UINT16_MAX;
	int64_t t14 = -617854959199893LL;

	t14 = ((x57&(x58/x59))%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 30762LLU;
	uint64_t x63 = UINT64_MAX;
	volatile int32_t x64 = 12873;
	volatile uint64_t t15 = 74407018361611LLU;

	t15 = ((x61&(x62/x63))%x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x66 = 1230638182U;
	int32_t x67 = INT32_MIN;

	t16 = ((x65&(x66/x67))%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int16_t x75 = 116;
	int32_t x76 = -4;
	static int64_t t17 = -210033707LL;

	t17 = ((x73&(x74/x75))%x76);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 2059U;
	static volatile int32_t x79 = -3600;
	volatile int16_t x80 = INT16_MIN;
	int32_t t18 = 5185079;

	t18 = ((x77&(x78/x79))%x80);

	if (t18 != 2051) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MIN;
	static int16_t x82 = 10119;
	volatile int64_t t19 = 11525446709089LL;

	t19 = ((x81&(x82/x83))%x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	uint16_t x86 = 22U;
	int64_t x87 = -446202455006355LL;
	uint16_t x88 = 72U;

	t20 = ((x85&(x86/x87))%x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int16_t x94 = 1;
	int64_t x95 = INT64_MAX;
	int64_t t21 = 94691259LL;

	t21 = ((x93&(x94/x95))%x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MAX;
	int32_t x98 = -11;
	uint16_t x99 = 110U;
	int16_t x100 = -4611;
	int32_t t22 = -7;

	t22 = ((x97&(x98/x99))%x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MAX;
	int32_t x102 = -11343438;
	static int32_t x103 = -1;
	int32_t x104 = -1;
	static int32_t t23 = 4;

	t23 = ((x101&(x102/x103))%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x105 = 14LLU;
	int32_t x108 = -1;
	uint64_t t24 = 714276994918677590LLU;

	t24 = ((x105&(x106/x107))%x108);

	if (t24 != 10LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = INT64_MAX;
	volatile uint32_t x111 = UINT32_MAX;
	int64_t x112 = -1LL;
	volatile int64_t t25 = 172823750LL;

	t25 = ((x109&(x110/x111))%x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	uint8_t x114 = 3U;
	uint32_t x115 = 1U;

	t26 = ((x113&(x114/x115))%x116);

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = INT64_MIN;
	volatile int8_t x118 = INT8_MIN;
	int16_t x119 = 2;
	int64_t t27 = 17793620606LL;

	t27 = ((x117&(x118/x119))%x120);

	if (t27 != -8LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 87705521273504585LLU;
	static uint64_t x126 = UINT64_MAX;
	int64_t x127 = -1LL;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t28 = 2608623647LLU;

	t28 = ((x125&(x126/x127))%x128);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MAX;
	volatile uint64_t x131 = 268623478268LLU;
	int16_t x132 = INT16_MAX;
	volatile uint64_t t29 = 38LLU;

	t29 = ((x129&(x130/x131))%x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x133 = 0U;
	volatile int64_t x134 = 15787719LL;
	static int32_t x135 = -1;
	uint8_t x136 = 23U;
	volatile int64_t t30 = 1LL;

	t30 = ((x133&(x134/x135))%x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 28U;
	volatile int16_t x138 = INT16_MIN;
	volatile int8_t x139 = 1;
	volatile int32_t t31 = 409728;

	t31 = ((x137&(x138/x139))%x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = -145;
	int64_t x142 = INT64_MAX;
	volatile int32_t x144 = INT32_MIN;
	int64_t t32 = -36LL;

	t32 = ((x141&(x142/x143))%x144);

	if (t32 != -2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x145 = 3186466296LL;
	static int32_t x146 = -120387;
	int64_t x147 = -1LL;
	static int16_t x148 = 452;

	t33 = ((x145&(x146/x147))%x148);

	if (t33 != 432LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	volatile uint16_t x154 = 669U;
	int16_t x156 = INT16_MAX;
	volatile int32_t t34 = -1313;

	t34 = ((x153&(x154/x155))%x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 217869514U;
	int8_t x158 = INT8_MIN;
	uint8_t x159 = 5U;
	uint16_t x160 = 19306U;
	uint32_t t35 = 535162101U;

	t35 = ((x157&(x158/x159))%x160);

	if (t35 != 1296U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = INT8_MIN;
	uint64_t x162 = 2874937143363LLU;
	int32_t x163 = -75;
	volatile uint64_t x164 = UINT64_MAX;

	t36 = ((x161&(x162/x163))%x164);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 30U;
	int16_t x166 = -151;
	int16_t x167 = INT16_MIN;
	int8_t x168 = 38;
	volatile int32_t t37 = 11440;

	t37 = ((x165&(x166/x167))%x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	uint8_t x170 = 0U;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = 4100501471384855557LLU;
	uint64_t t38 = 285606344813LLU;

	t38 = ((x169&(x170/x171))%x172);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = -44788453199685777LL;
	uint64_t x176 = 333076987345950LLU;
	static uint64_t t39 = 406235494980919918LLU;

	t39 = ((x173&(x174/x175))%x176);

	if (t39 != 68787798638026LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = 12;
	volatile int32_t x178 = -1;
	static volatile int8_t x179 = -1;
	int32_t t40 = 56;

	t40 = ((x177&(x178/x179))%x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 0;
	uint16_t x182 = 4385U;
	static uint64_t x183 = 177062LLU;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t41 = 16002LLU;

	t41 = ((x181&(x182/x183))%x184);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x185 = -1LL;
	static int64_t x186 = 11278150631024LL;
	int8_t x187 = -1;
	static int8_t x188 = 26;

	t42 = ((x185&(x186/x187))%x188);

	if (t42 != -4LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x189 = INT32_MAX;
	uint64_t x190 = 6333270808LLU;
	static uint8_t x191 = 4U;
	int16_t x192 = INT16_MIN;
	uint64_t t43 = 564LLU;

	t43 = ((x189&(x190/x191))%x192);

	if (t43 != 1583317702LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 136U;
	static volatile uint16_t x194 = UINT16_MAX;
	int16_t x195 = 96;
	int64_t x196 = INT64_MAX;
	volatile int64_t t44 = -1096LL;

	t44 = ((x193&(x194/x195))%x196);

	if (t44 != 136LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = -1;
	int64_t x199 = 310236499664LL;
	static int64_t t45 = -2862LL;

	t45 = ((x197&(x198/x199))%x200);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = 0;
	static int16_t x207 = INT16_MIN;
	int32_t x208 = -1;

	t46 = ((x205&(x206/x207))%x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = 116;
	static int64_t x210 = -1LL;
	static int8_t x212 = INT8_MAX;
	int64_t t47 = -15659978LL;

	t47 = ((x209&(x210/x211))%x212);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x214 = INT16_MIN;
	uint32_t x215 = 8U;
	static int16_t x216 = INT16_MAX;
	int64_t t48 = -10050565566935LL;

	t48 = ((x213&(x214/x215))%x216);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -7;
	uint16_t x218 = 3871U;
	volatile int16_t x219 = -1;
	int64_t x220 = INT64_MAX;

	t49 = ((x217&(x218/x219))%x220);

	if (t49 != -3871LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 16U;
	int32_t x222 = -1;
	int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MAX;

	t50 = ((x221&(x222/x223))%x224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = -1;
	static volatile int64_t t51 = 2019LL;

	t51 = ((x225&(x226/x227))%x228);

	if (t51 != 33943384064LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x231 = -879;
	uint16_t x232 = 7U;
	volatile int64_t t52 = 379177110168521132LL;

	t52 = ((x229&(x230/x231))%x232);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = INT64_MIN;
	int64_t x234 = -1LL;
	int64_t x235 = INT64_MAX;
	static volatile int64_t t53 = -53106752LL;

	t53 = ((x233&(x234/x235))%x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x237 = 173970726U;
	int32_t x238 = -1;
	static int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MAX;
	int64_t t54 = -59645643LL;

	t54 = ((x237&(x238/x239))%x240);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = 36U;
	volatile uint16_t x242 = 30460U;
	static uint64_t x243 = UINT64_MAX;
	volatile uint32_t x244 = UINT32_MAX;
	static volatile uint64_t t55 = 1LLU;

	t55 = ((x241&(x242/x243))%x244);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x246 = INT64_MAX;
	static volatile int64_t x247 = 5404529939448822LL;
	int64_t t56 = 1967397029753239LL;

	t56 = ((x245&(x246/x247))%x248);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x249 = 5U;
	static volatile int64_t x250 = 1032232LL;
	uint64_t x251 = 291779164340962LLU;
	int8_t x252 = INT8_MAX;
	uint64_t t57 = 466514746767LLU;

	t57 = ((x249&(x250/x251))%x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 916U;
	int16_t x254 = INT16_MIN;
	int32_t x256 = INT32_MAX;

	t58 = ((x253&(x254/x255))%x256);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = 1;
	static volatile int16_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	volatile int16_t x260 = INT16_MAX;
	volatile uint64_t t59 = 4777780LLU;

	t59 = ((x257&(x258/x259))%x260);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x261 = 180167LLU;
	static uint8_t x262 = 0U;
	uint64_t x263 = 8LLU;
	int32_t x264 = -158336;
	uint64_t t60 = 261846556650418LLU;

	t60 = ((x261&(x262/x263))%x264);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x265 = 8637LL;
	static uint8_t x267 = 11U;
	static uint32_t x268 = UINT32_MAX;
	int64_t t61 = 480643417316519961LL;

	t61 = ((x265&(x266/x267))%x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x270 = INT64_MIN;
	volatile int16_t x271 = 29;
	static int64_t x272 = INT64_MAX;
	volatile int64_t t62 = 19LL;

	t62 = ((x269&(x270/x271))%x272);

	if (t62 != -318047311615681924LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = -6941049221580LL;
	uint16_t x275 = UINT16_MAX;
	int64_t x276 = 1487322LL;

	t63 = ((x273&(x274/x275))%x276);

	if (t63 != 490548LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x278 = -9978;
	int16_t x279 = INT16_MAX;
	volatile int32_t x280 = 6192083;
	int32_t t64 = 1;

	t64 = ((x277&(x278/x279))%x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = -1;
	int64_t x282 = -1LL;
	int16_t x283 = INT16_MAX;
	volatile int64_t t65 = -207LL;

	t65 = ((x281&(x282/x283))%x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x285 = UINT64_MAX;
	int16_t x287 = -3;
	uint16_t x288 = 10425U;
	uint64_t t66 = 950242254336209LLU;

	t66 = ((x285&(x286/x287))%x288);

	if (t66 != 3681LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x289 = 31465433U;
	static uint16_t x291 = 21425U;
	static int16_t x292 = INT16_MIN;
	static volatile uint32_t t67 = 35855651U;

	t67 = ((x289&(x290/x291))%x292);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = 131278744;

	t68 = ((x293&(x294/x295))%x296);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x298 = INT64_MIN;
	int8_t x299 = 4;
	int64_t t69 = -243434963582556LL;

	t69 = ((x297&(x298/x299))%x300);

	if (t69 != 24576LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = -1;
	static int32_t x303 = -4;
	volatile int32_t t70 = 165203;

	t70 = ((x301&(x302/x303))%x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = 1;
	int8_t x307 = -4;
	int8_t x308 = -1;
	volatile int32_t t71 = -7122916;

	t71 = ((x305&(x306/x307))%x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = 16U;
	volatile uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = -152;
	int32_t x312 = INT32_MAX;
	static int32_t t72 = 4474;

	t72 = ((x309&(x310/x311))%x312);

	if (t72 != 16) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x314 = UINT8_MAX;
	int16_t x316 = INT16_MIN;
	int64_t t73 = 6682795LL;

	t73 = ((x313&(x314/x315))%x316);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x317 = -1;
	uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 62U;
	static volatile int32_t t74 = 16559250;

	t74 = ((x317&(x318/x319))%x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x321 = UINT8_MAX;
	volatile uint8_t x322 = 0U;
	int8_t x323 = 3;
	volatile uint64_t t75 = 13561842908LLU;

	t75 = ((x321&(x322/x323))%x324);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = 2U;
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 985U;
	uint16_t x328 = 11U;
	uint32_t t76 = 411U;

	t76 = ((x325&(x326/x327))%x328);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = INT32_MIN;
	int64_t x331 = 1LL;

	t77 = ((x329&(x330/x331))%x332);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = 4;
	static volatile int64_t x334 = -656433919488981LL;
	int8_t x335 = 12;
	static int64_t x336 = 62066473947991LL;
	static volatile int64_t t78 = 9901723557093LL;

	t78 = ((x333&(x334/x335))%x336);

	if (t78 != 4LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x337 = INT8_MIN;
	uint64_t x338 = 3733157228LLU;
	int8_t x339 = INT8_MIN;

	t79 = ((x337&(x338/x339))%x340);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = 0;
	uint16_t x348 = 10U;

	t80 = ((x345&(x346/x347))%x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = 0;
	uint8_t x350 = 114U;
	int16_t x351 = 2496;
	static uint8_t x352 = 8U;

	t81 = ((x349&(x350/x351))%x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x353 = INT64_MIN;
	int8_t x354 = -1;
	int64_t x355 = INT64_MAX;
	int32_t x356 = -1;
	volatile int64_t t82 = 102690LL;

	t82 = ((x353&(x354/x355))%x356);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = INT64_MIN;
	volatile uint32_t x358 = 4668U;
	static int8_t x359 = -1;
	int64_t t83 = 5223847158LL;

	t83 = ((x357&(x358/x359))%x360);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x365 = -1;
	static int64_t x366 = INT64_MIN;
	static volatile int8_t x367 = 1;
	static volatile int32_t x368 = 8;
	static int64_t t84 = -1865044232856715LL;

	t84 = ((x365&(x366/x367))%x368);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = -1;
	volatile uint32_t x370 = UINT32_MAX;
	static int16_t x371 = 4810;
	int64_t x372 = INT64_MIN;
	int64_t t85 = -2204066476019449967LL;

	t85 = ((x369&(x370/x371))%x372);

	if (t85 != 892924LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = 231429487452541722LL;
	int16_t x375 = 922;
	int64_t x376 = 5733484996LL;

	t86 = ((x373&(x374/x375))%x376);

	if (t86 != 239072948LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x377 = INT16_MAX;
	volatile int32_t x380 = INT32_MIN;
	int64_t t87 = 722714393LL;

	t87 = ((x377&(x378/x379))%x380);

	if (t87 != 28764LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x381 = UINT32_MAX;
	volatile int16_t x383 = -5254;
	int64_t x384 = INT64_MIN;
	int64_t t88 = 8LL;

	t88 = ((x381&(x382/x383))%x384);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x386 = 57114322U;
	int64_t x387 = 2062583083406907LL;
	static volatile uint32_t x388 = 4U;
	int64_t t89 = 1800LL;

	t89 = ((x385&(x386/x387))%x388);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x389 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MAX;
	static uint64_t t90 = 7160345123041820158LLU;

	t90 = ((x389&(x390/x391))%x392);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x393 = INT64_MIN;
	int8_t x394 = -34;
	int32_t x395 = 534752;
	volatile int64_t t91 = -1LL;

	t91 = ((x393&(x394/x395))%x396);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x398 = INT16_MIN;
	uint64_t x399 = UINT64_MAX;
	static uint32_t x400 = 89849U;

	t92 = ((x397&(x398/x399))%x400);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x401 = 1U;
	static int8_t x402 = -5;
	int8_t x403 = INT8_MAX;
	int32_t x404 = -1;
	static uint32_t t93 = 449U;

	t93 = ((x401&(x402/x403))%x404);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x406 = UINT64_MAX;
	uint8_t x407 = UINT8_MAX;
	int32_t x408 = INT32_MAX;

	t94 = ((x405&(x406/x407))%x408);

	if (t94 != 50529026LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = -1;
	int16_t x410 = -1;
	int64_t x411 = -1LL;
	volatile int32_t x412 = INT32_MIN;
	int64_t t95 = -122986LL;

	t95 = ((x409&(x410/x411))%x412);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x413 = 1U;
	uint64_t x414 = 4256142LLU;
	uint64_t x415 = UINT64_MAX;
	uint8_t x416 = 6U;
	uint64_t t96 = 843460703413LLU;

	t96 = ((x413&(x414/x415))%x416);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = -1;
	uint32_t x419 = 779644915U;
	int64_t t97 = -41568180528170775LL;

	t97 = ((x417&(x418/x419))%x420);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x421 = -862561885;
	static volatile uint16_t x422 = 98U;
	volatile uint16_t x423 = 41U;
	uint32_t x424 = 149U;
	static uint32_t t98 = 99746981U;

	t98 = ((x421&(x422/x423))%x424);

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	int8_t x428 = -52;
	int32_t t99 = -61921;

	t99 = ((x425&(x426/x427))%x428);

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

