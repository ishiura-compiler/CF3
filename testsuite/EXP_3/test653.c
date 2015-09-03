#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x13 = UINT8_MAX;
uint16_t x19 = 2410U;
uint8_t x27 = UINT8_MAX;
uint8_t x29 = 5U;
int32_t x30 = 0;
static int8_t x31 = INT8_MIN;
int64_t x32 = -1LL;
static int8_t x33 = INT8_MIN;
uint16_t x34 = 4018U;
static uint32_t x41 = UINT32_MAX;
volatile int8_t x43 = INT8_MIN;
static volatile int16_t x47 = INT16_MIN;
int16_t x54 = -1;
static uint16_t x56 = 764U;
static int16_t x61 = INT16_MAX;
volatile uint8_t x67 = UINT8_MAX;
int8_t x69 = -52;
int32_t x74 = INT32_MAX;
volatile int64_t x79 = INT64_MIN;
static volatile uint64_t t14 = 647LLU;
volatile int16_t x82 = 10;
uint64_t x103 = 257783965542LLU;
uint64_t t17 = 1056961LLU;
static int32_t x108 = -1;
uint16_t x110 = 3U;
int64_t x112 = -16995LL;
int8_t x119 = -1;
static uint8_t x121 = 15U;
static uint8_t x128 = 3U;
uint64_t x129 = 4LLU;
int16_t x134 = -1;
int8_t x136 = -1;
uint16_t x138 = 3U;
int64_t t25 = 470092LL;
int32_t x141 = -162915;
uint32_t x148 = UINT32_MAX;
uint64_t x150 = UINT64_MAX;
static uint8_t x153 = 43U;
static volatile int32_t t29 = 4;
int8_t x157 = 1;
int32_t x159 = INT32_MIN;
volatile int64_t x164 = INT64_MIN;
volatile int32_t t33 = 4;
volatile int32_t x175 = -3320424;
uint32_t x176 = 546873987U;
volatile uint8_t x178 = 28U;
static uint64_t t35 = 22386LLU;
uint16_t x190 = 1169U;
volatile int64_t t38 = 13366LL;
uint8_t x211 = UINT8_MAX;
static volatile uint16_t x212 = 11107U;
volatile int16_t x214 = -1;
static volatile uint32_t x215 = 11295U;
uint64_t x216 = UINT64_MAX;
uint8_t x217 = 10U;
int32_t x225 = INT32_MIN;
int32_t x226 = INT32_MIN;
volatile uint8_t x236 = 5U;
uint16_t x240 = 4U;
volatile int64_t t49 = 22220638324565LL;
volatile int64_t x242 = -1LL;
int32_t x277 = 8;
static int8_t x279 = INT8_MIN;
uint8_t x280 = 84U;
static int32_t x281 = INT32_MAX;
uint64_t x283 = 144017606352969803LLU;
uint16_t x285 = 5520U;
volatile int64_t x288 = -1LL;
static uint16_t x290 = 2U;
static int32_t x295 = INT32_MAX;
static int16_t x296 = INT16_MIN;
int16_t x303 = 7;
uint64_t x316 = 8068094539064LLU;
int8_t x318 = INT8_MAX;
uint16_t x321 = UINT16_MAX;
int64_t x323 = -1LL;
uint64_t x327 = 38061383005LLU;
static uint8_t x335 = 15U;
volatile int16_t x336 = INT16_MIN;
volatile int64_t t68 = -245621850495474LL;
int16_t x340 = INT16_MIN;
int8_t x343 = -1;
static volatile uint8_t x344 = UINT8_MAX;
volatile uint16_t x356 = UINT16_MAX;
int64_t x360 = -5990240LL;
volatile uint32_t x368 = 2416210U;
static uint64_t x371 = 191236806080LLU;
static int64_t x377 = -1LL;
int64_t x383 = INT64_MIN;
uint64_t t78 = 7739337548LLU;
uint16_t x387 = 1U;
int64_t x390 = -1117848118LL;
uint16_t x391 = UINT16_MAX;
int32_t x403 = INT32_MIN;
static uint16_t x410 = 6U;
static uint32_t x411 = 488U;
volatile int64_t x412 = -1LL;
uint32_t x415 = 77017U;
int32_t x419 = 599867;
int16_t x420 = 77;
volatile int32_t x422 = -1063;
static int64_t x424 = INT64_MIN;
uint16_t x425 = 3716U;
int16_t x430 = -1;
int64_t x432 = INT64_MIN;
volatile int32_t t90 = -62;
volatile uint16_t x437 = 12177U;
volatile int64_t t93 = -175444374292LL;
uint8_t x449 = 2U;
volatile uint64_t x450 = 187LLU;
uint8_t x452 = 27U;
volatile int64_t t96 = -1LL;
volatile int64_t t97 = 605060LL;
uint32_t x472 = 13932807U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MIN;
	static uint16_t x3 = UINT16_MAX;
	int32_t x4 = -1;
	volatile int32_t t0 = -1293729;

	t0 = ((x1|x2)*(x3/x4));

	if (t0 != 2147450880) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;
	volatile int64_t t1 = 16713LL;

	t1 = ((x13|x14)*(x15/x16));

	if (t1 != -2147483393LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = 2679;
	static int16_t x18 = 1380;
	int32_t x20 = -1867;
	int32_t t2 = 4440740;

	t2 = ((x17|x18)*(x19/x20));

	if (t2 != -3959) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	static uint64_t x22 = UINT64_MAX;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = INT64_MAX;
	static volatile uint64_t t3 = 7877989091029961LLU;

	t3 = ((x21|x22)*(x23/x24));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	int16_t x26 = -202;
	int64_t x28 = INT64_MIN;
	int64_t t4 = 994945437LL;

	t4 = ((x25|x26)*(x27/x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t t5 = 15829002828979LL;

	t5 = ((x29|x30)*(x31/x32));

	if (t5 != 640LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x35 = 1;
	int32_t x36 = INT32_MAX;
	int32_t t6 = 182;

	t6 = ((x33|x34)*(x35/x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x42 = 384U;
	int8_t x44 = 4;
	uint32_t t7 = 333253U;

	t7 = ((x41|x42)*(x43/x44));

	if (t7 != 32U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 37269333U;
	static volatile int8_t x46 = INT8_MIN;
	volatile uint16_t x48 = UINT16_MAX;
	uint32_t t8 = 83U;

	t8 = ((x45|x46)*(x47/x48));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	volatile uint16_t x55 = 21U;
	static int32_t t9 = -365680;

	t9 = ((x53|x54)*(x55/x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x62 = INT32_MAX;
	uint16_t x63 = 15324U;
	volatile int64_t x64 = INT64_MAX;
	volatile int64_t t10 = 12LL;

	t10 = ((x61|x62)*(x63/x64));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x65 = 47U;
	uint64_t x66 = 104933192853033156LLU;
	int64_t x68 = INT64_MIN;
	uint64_t t11 = 252813838LLU;

	t11 = ((x65|x66)*(x67/x68));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x70 = 1263011948556669LL;
	int8_t x71 = -1;
	static int64_t x72 = INT64_MAX;
	int64_t t12 = 25419617959536LL;

	t12 = ((x69|x70)*(x71/x72));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x73 = INT64_MAX;
	static uint32_t x75 = 19U;
	uint32_t x76 = UINT32_MAX;
	int64_t t13 = -226566LL;

	t13 = ((x73|x74)*(x75/x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = 50159575050707373LLU;
	int16_t x78 = INT16_MIN;
	static uint64_t x80 = 9048585285892926247LLU;

	t14 = ((x77|x78)*(x79/x80));

	if (t14 != 18446744073709543853LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x81 = -47;
	uint32_t x83 = 320U;
	int16_t x84 = INT16_MIN;
	uint32_t t15 = 134528U;

	t15 = ((x81|x82)*(x83/x84));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x97 = -1LL;
	static int64_t x98 = INT64_MAX;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = -1;
	uint64_t t16 = UINT64_MAX;

	t16 = ((x97|x98)*(x99/x100));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = -666;
	uint32_t x104 = 1053U;

	t17 = ((x101|x102)*(x103/x104));

	if (t17 != 18446743910666701672LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x105 = INT64_MIN;
	volatile uint8_t x106 = 6U;
	int32_t x107 = -1;
	int64_t t18 = -17276257LL;

	t18 = ((x105|x106)*(x107/x108));

	if (t18 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x109 = INT16_MIN;
	int64_t x111 = 4577LL;
	volatile int64_t t19 = 62675LL;

	t19 = ((x109|x110)*(x111/x112));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = 1038916;
	uint8_t x118 = 67U;
	int64_t x120 = -1LL;
	volatile int64_t t20 = -3414886698717145LL;

	t20 = ((x117|x118)*(x119/x120));

	if (t20 != 1038919LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x122 = -1;
	volatile int64_t x123 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	static volatile int64_t t21 = 1045882642605998LL;

	t21 = ((x121|x122)*(x123/x124));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x125 = UINT64_MAX;
	int8_t x126 = -18;
	uint8_t x127 = UINT8_MAX;
	static volatile uint64_t t22 = 5611LLU;

	t22 = ((x125|x126)*(x127/x128));

	if (t22 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x130 = INT64_MIN;
	static int64_t x131 = -1LL;
	volatile int64_t x132 = INT64_MIN;
	uint64_t t23 = 1752034949LLU;

	t23 = ((x129|x130)*(x131/x132));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x133 = 253U;
	static uint16_t x135 = UINT16_MAX;
	int32_t t24 = 2;

	t24 = ((x133|x134)*(x135/x136));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x137 = 901535U;
	int64_t x139 = -947810LL;
	int32_t x140 = 9732;

	t25 = ((x137|x138)*(x139/x140));

	if (t25 != -87448895LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x142 = INT32_MIN;
	int8_t x143 = -27;
	static volatile int32_t x144 = INT32_MIN;
	int32_t t26 = 1056868;

	t26 = ((x141|x142)*(x143/x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x145 = 11U;
	int16_t x146 = INT16_MIN;
	static int64_t x147 = 1412LL;
	int64_t t27 = 12LL;

	t27 = ((x145|x146)*(x147/x148));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = INT64_MIN;
	static uint16_t x151 = 1U;
	int8_t x152 = INT8_MIN;
	uint64_t t28 = 48767098198536200LLU;

	t28 = ((x149|x150)*(x151/x152));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x154 = 1U;
	static int32_t x155 = INT32_MIN;
	static uint16_t x156 = UINT16_MAX;

	t29 = ((x153|x154)*(x155/x156));

	if (t29 != -1409024) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x158 = 1;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t30 = 3546;

	t30 = ((x157|x158)*(x159/x160));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	volatile uint8_t x163 = UINT8_MAX;
	volatile int64_t t31 = 168600857LL;

	t31 = ((x161|x162)*(x163/x164));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x165 = UINT32_MAX;
	int32_t x166 = 164464683;
	int8_t x167 = INT8_MAX;
	int32_t x168 = INT32_MIN;
	volatile uint32_t t32 = 236084803U;

	t32 = ((x165|x166)*(x167/x168));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x169 = INT32_MAX;
	static int8_t x170 = INT8_MAX;
	int8_t x171 = -1;
	volatile uint16_t x172 = UINT16_MAX;

	t33 = ((x169|x170)*(x171/x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x173 = INT16_MIN;
	volatile int32_t x174 = INT32_MIN;
	uint32_t t34 = 13U;

	t34 = ((x173|x174)*(x175/x176));

	if (t34 != 4294737920U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x179 = 333137060LLU;
	static int16_t x180 = INT16_MIN;

	t35 = ((x177|x178)*(x179/x180));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = 0;
	int8_t x182 = 10;
	int32_t x183 = 318262;
	static uint32_t x184 = UINT32_MAX;
	uint32_t t36 = 5998U;

	t36 = ((x181|x182)*(x183/x184));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = 1U;
	int8_t x186 = INT8_MAX;
	int32_t x187 = INT32_MAX;
	volatile int64_t x188 = INT64_MIN;
	int64_t t37 = 22307LL;

	t37 = ((x185|x186)*(x187/x188));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x189 = INT64_MAX;
	volatile int32_t x191 = -1;
	volatile int16_t x192 = 1067;

	t38 = ((x189|x190)*(x191/x192));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x193 = INT16_MIN;
	uint16_t x194 = UINT16_MAX;
	static uint8_t x195 = 108U;
	int64_t x196 = -1LL;
	static volatile int64_t t39 = 693LL;

	t39 = ((x193|x194)*(x195/x196));

	if (t39 != 108LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x197 = 106U;
	volatile uint32_t x198 = 532283867U;
	uint8_t x199 = UINT8_MAX;
	uint8_t x200 = 41U;
	static volatile uint32_t t40 = 454072636U;

	t40 = ((x197|x198)*(x199/x200));

	if (t40 != 3193703394U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int64_t x203 = 37964491302LL;
	int16_t x204 = -1;
	volatile int64_t t41 = -75LL;

	t41 = ((x201|x202)*(x203/x204));

	if (t41 != 4859454886656LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x209 = INT64_MAX;
	int64_t x210 = -1LL;
	volatile int64_t t42 = 6054828890114LL;

	t42 = ((x209|x210)*(x211/x212));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = 597;
	uint64_t t43 = 46013LLU;

	t43 = ((x213|x214)*(x215/x216));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x218 = 0;
	uint8_t x219 = UINT8_MAX;
	uint32_t x220 = 1228191U;
	uint32_t t44 = 5435U;

	t44 = ((x217|x218)*(x219/x220));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = -1;
	volatile int32_t x222 = -104500;
	uint16_t x223 = 6956U;
	int64_t x224 = -2977622LL;
	volatile int64_t t45 = 2895408393LL;

	t45 = ((x221|x222)*(x223/x224));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	volatile int32_t t46 = INT32_MIN;

	t46 = ((x225|x226)*(x227/x228));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x229 = INT64_MAX;
	int16_t x230 = -16;
	uint32_t x231 = UINT32_MAX;
	int8_t x232 = -1;
	volatile int64_t t47 = -102957184LL;

	t47 = ((x229|x230)*(x231/x232));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	int32_t x235 = -60743;
	static volatile int32_t t48 = -3;

	t48 = ((x233|x234)*(x235/x236));

	if (t48 != 1554944) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = -633699794LL;
	int32_t x238 = -28;
	uint32_t x239 = 2732U;

	t49 = ((x237|x238)*(x239/x240));

	if (t49 != -12294LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x241 = 389U;
	static int64_t x243 = 469LL;
	volatile int8_t x244 = 5;
	int64_t t50 = -925336452133LL;

	t50 = ((x241|x242)*(x243/x244));

	if (t50 != -93LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = 1197LLU;
	uint16_t x247 = 3789U;
	uint16_t x248 = UINT16_MAX;
	uint64_t t51 = 776609731401LLU;

	t51 = ((x245|x246)*(x247/x248));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = 23536590U;
	static int64_t x254 = 234LL;
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = UINT16_MAX;
	int64_t t52 = 33465355074LL;

	t52 = ((x253|x254)*(x255/x256));

	if (t52 != 1542519596014LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x273 = UINT64_MAX;
	uint8_t x274 = UINT8_MAX;
	uint8_t x275 = UINT8_MAX;
	static volatile int32_t x276 = 209;
	uint64_t t53 = UINT64_MAX;

	t53 = ((x273|x274)*(x275/x276));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x278 = INT8_MIN;
	static volatile int32_t t54 = 672584;

	t54 = ((x277|x278)*(x279/x280));

	if (t54 != 120) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x282 = 2U;
	int16_t x284 = -1;
	uint64_t t55 = 1LLU;

	t55 = ((x281|x282)*(x283/x284));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x286 = -22;
	int64_t x287 = -23LL;
	volatile int64_t t56 = -1673431603LL;

	t56 = ((x285|x286)*(x287/x288));

	if (t56 != -138LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x289 = 1881044780LLU;
	int8_t x291 = -1;
	volatile int64_t x292 = -9536261330LL;
	volatile uint64_t t57 = 342453080LLU;

	t57 = ((x289|x290)*(x291/x292));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x293 = -26;
	int16_t x294 = -1;
	int32_t t58 = 375449;

	t58 = ((x293|x294)*(x295/x296));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x297 = INT8_MIN;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MAX;
	int64_t x300 = INT64_MAX;
	volatile int64_t t59 = 64631040LL;

	t59 = ((x297|x298)*(x299/x300));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x301 = 13859U;
	uint32_t x302 = UINT32_MAX;
	int8_t x304 = -1;
	uint32_t t60 = 121U;

	t60 = ((x301|x302)*(x303/x304));

	if (t60 != 7U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x305 = 1099451070433351912LLU;
	int16_t x306 = INT16_MIN;
	int16_t x307 = 6;
	static uint32_t x308 = 7140461U;
	uint64_t t61 = 1069003311LLU;

	t61 = ((x305|x306)*(x307/x308));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = -1;
	uint8_t x310 = 12U;
	volatile int64_t x311 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;
	volatile int64_t t62 = -1356310349292LL;

	t62 = ((x309|x310)*(x311/x312));

	if (t62 != -4294967296LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x313 = -10359047829969098LL;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = -15;
	uint64_t t63 = 2543448LLU;

	t63 = ((x313|x314)*(x315/x316));

	if (t63 != 18446744073707265235LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = INT64_MIN;
	int64_t x319 = INT64_MAX;
	int64_t x320 = INT64_MIN;
	int64_t t64 = 91LL;

	t64 = ((x317|x318)*(x319/x320));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x322 = 47U;
	int64_t x324 = INT64_MAX;
	volatile int64_t t65 = 151LL;

	t65 = ((x321|x322)*(x323/x324));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x325 = 0U;
	uint8_t x326 = 7U;
	int32_t x328 = INT32_MIN;
	volatile uint64_t t66 = 1958480030203835LLU;

	t66 = ((x325|x326)*(x327/x328));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x329 = -776;
	int8_t x330 = -30;
	static volatile uint8_t x331 = 3U;
	volatile uint16_t x332 = UINT16_MAX;
	volatile int32_t t67 = -16;

	t67 = ((x329|x330)*(x331/x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x333 = 124U;
	int64_t x334 = INT64_MIN;

	t68 = ((x333|x334)*(x335/x336));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x337 = 27;
	int16_t x338 = 87;
	int16_t x339 = 140;
	static volatile int32_t t69 = 164;

	t69 = ((x337|x338)*(x339/x340));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x341 = INT64_MIN;
	int16_t x342 = 0;
	volatile int64_t t70 = 7299636LL;

	t70 = ((x341|x342)*(x343/x344));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x353 = INT64_MIN;
	uint8_t x354 = 2U;
	static int8_t x355 = -24;
	volatile int64_t t71 = 5047356LL;

	t71 = ((x353|x354)*(x355/x356));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x357 = -1346;
	int16_t x358 = INT16_MAX;
	static volatile int32_t x359 = INT32_MAX;
	volatile int64_t t72 = -92999188475LL;

	t72 = ((x357|x358)*(x359/x360));

	if (t72 != 358LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x361 = -1;
	volatile int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MAX;
	static volatile uint64_t x364 = 130478352270761LLU;
	volatile uint64_t t73 = 57083572904LLU;

	t73 = ((x361|x362)*(x363/x364));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x365 = INT32_MIN;
	volatile int8_t x366 = -1;
	int16_t x367 = -102;
	static volatile uint32_t t74 = 829878730U;

	t74 = ((x365|x366)*(x367/x368));

	if (t74 != 4294965519U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	static volatile int64_t x372 = INT64_MIN;
	uint64_t t75 = 123591501385006LLU;

	t75 = ((x369|x370)*(x371/x372));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x373 = 28;
	int64_t x374 = -19LL;
	int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MIN;
	static volatile int64_t t76 = -675LL;

	t76 = ((x373|x374)*(x375/x376));

	if (t76 != -844424930131968LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x378 = 133994370LLU;
	int64_t x379 = -1LL;
	int16_t x380 = -1;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x377|x378)*(x379/x380));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x381 = UINT64_MAX;
	uint8_t x382 = UINT8_MAX;
	int16_t x384 = 11;

	t78 = ((x381|x382)*(x383/x384));

	if (t78 != 838488366986797800LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x385 = 0U;
	volatile int8_t x386 = INT8_MAX;
	uint64_t x388 = 168330231399LLU;
	uint64_t t79 = 14569225862056665LLU;

	t79 = ((x385|x386)*(x387/x388));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x389 = 387303U;
	int16_t x392 = INT16_MIN;
	volatile int64_t t80 = 101657878LL;

	t80 = ((x389|x390)*(x391/x392));

	if (t80 != 1117782545LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = 1LL;
	int32_t x394 = INT32_MAX;
	int16_t x395 = -1;
	int8_t x396 = INT8_MIN;
	volatile int64_t t81 = -99458831215LL;

	t81 = ((x393|x394)*(x395/x396));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x397 = -618;
	uint8_t x398 = 61U;
	int8_t x399 = -1;
	int8_t x400 = INT8_MIN;
	int32_t t82 = 286679;

	t82 = ((x397|x398)*(x399/x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x401 = INT64_MAX;
	int32_t x402 = 20763;
	static int32_t x404 = INT32_MIN;
	int64_t t83 = INT64_MAX;

	t83 = ((x401|x402)*(x403/x404));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x409 = -8482885383328LL;
	int64_t t84 = -1332472277LL;

	t84 = ((x409|x410)*(x411/x412));

	if (t84 != 4139648067061136LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	uint8_t x416 = UINT8_MAX;
	static uint64_t t85 = 3062742LLU;

	t85 = ((x413|x414)*(x415/x416));

	if (t85 != 18446744073709551314LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x417 = 1;
	volatile uint32_t x418 = 1U;
	uint32_t t86 = 25940342U;

	t86 = ((x417|x418)*(x419/x420));

	if (t86 != 7790U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x421 = 22;
	int8_t x423 = -1;
	volatile int64_t t87 = -36883347588155316LL;

	t87 = ((x421|x422)*(x423/x424));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x426 = 56712595;
	uint8_t x427 = UINT8_MAX;
	static int64_t x428 = INT64_MAX;
	int64_t t88 = -465166576LL;

	t88 = ((x425|x426)*(x427/x428));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x429 = -1;
	int8_t x431 = -1;
	volatile int64_t t89 = -13954784LL;

	t89 = ((x429|x430)*(x431/x432));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x433 = UINT8_MAX;
	int32_t x434 = INT32_MAX;
	int16_t x435 = -1;
	int16_t x436 = INT16_MIN;

	t90 = ((x433|x434)*(x435/x436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x438 = 2;
	static uint16_t x439 = UINT16_MAX;
	int16_t x440 = 294;
	int32_t t91 = 0;

	t91 = ((x437|x438)*(x439/x440));

	if (t91 != 2703738) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x441 = 11864092244003LLU;
	int8_t x442 = 1;
	int16_t x443 = -1;
	volatile int16_t x444 = INT16_MAX;
	uint64_t t92 = 2755465100535LLU;

	t92 = ((x441|x442)*(x443/x444));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x445 = -1LL;
	int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MIN;
	volatile int32_t x448 = INT32_MAX;

	t93 = ((x445|x446)*(x447/x448));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x451 = -15787;
	volatile uint64_t t94 = 128497LLU;

	t94 = ((x449|x450)*(x451/x452));

	if (t94 != 18446744073709442408LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = INT32_MIN;
	static uint16_t x454 = 44U;
	int16_t x455 = INT16_MIN;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t95 = 818962857;

	t95 = ((x453|x454)*(x455/x456));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x457 = 51U;
	int64_t x458 = INT64_MIN;
	int16_t x459 = 1;
	int16_t x460 = INT16_MAX;

	t96 = ((x457|x458)*(x459/x460));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x461 = 99U;
	int8_t x462 = INT8_MIN;
	volatile int64_t x463 = -1LL;
	static int16_t x464 = INT16_MIN;

	t97 = ((x461|x462)*(x463/x464));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x465 = INT16_MAX;
	int64_t x466 = INT64_MAX;
	int8_t x467 = -1;
	int16_t x468 = -3;
	int64_t t98 = 122978664926453499LL;

	t98 = ((x465|x466)*(x467/x468));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x469 = -10;
	volatile int32_t x470 = 148772994;
	int64_t x471 = 1LL;
	volatile int64_t t99 = -16616210LL;

	t99 = ((x469|x470)*(x471/x472));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

