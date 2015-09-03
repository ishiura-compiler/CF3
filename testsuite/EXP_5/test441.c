#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = INT32_MIN;
uint16_t x9 = UINT16_MAX;
static uint16_t x10 = 1313U;
int32_t x11 = -1;
uint64_t x32 = 1137834940375097423LLU;
int64_t t5 = -46901159833603LL;
int64_t x38 = INT64_MAX;
static uint16_t x39 = 0U;
int8_t x41 = -1;
volatile uint64_t x43 = 3718582LLU;
static volatile int32_t t7 = -526951;
int8_t x47 = 30;
uint8_t x48 = 26U;
volatile int16_t x54 = INT16_MIN;
static uint8_t x62 = 1U;
static uint64_t t10 = 30088LLU;
int8_t x71 = INT8_MIN;
int64_t x75 = 219924449LL;
volatile uint8_t x84 = 8U;
int16_t x91 = 1;
uint32_t x95 = 70451U;
static uint32_t x97 = 647U;
int32_t x98 = 445224921;
int32_t x100 = INT32_MIN;
uint32_t t17 = 909588381U;
uint64_t x106 = 274396602144301980LLU;
uint32_t x114 = 774U;
int32_t x116 = INT32_MAX;
int32_t t22 = -19326;
static int16_t x149 = INT16_MIN;
int32_t t26 = -157949;
uint32_t x155 = 30U;
volatile uint32_t x156 = UINT32_MAX;
int16_t x160 = INT16_MIN;
int8_t x162 = -1;
int8_t x169 = INT8_MIN;
static volatile int8_t x172 = -1;
uint8_t x178 = 8U;
int16_t x183 = INT16_MAX;
volatile int32_t t34 = 475962473;
volatile int64_t t36 = 2594LL;
uint16_t x212 = 52U;
int64_t x214 = 525242369128LL;
volatile int64_t t38 = INT64_MAX;
uint8_t x223 = 15U;
uint16_t x226 = 508U;
uint8_t x252 = 0U;
static uint32_t x253 = UINT32_MAX;
volatile int16_t x256 = 2851;
uint32_t x265 = UINT32_MAX;
volatile uint32_t t46 = UINT32_MAX;
int32_t x269 = -255;
static int32_t t47 = -108;
int8_t x280 = -41;
static uint32_t x282 = 7507888U;
volatile int32_t t50 = 20808;
static uint32_t x290 = 59262U;
volatile int16_t x291 = INT16_MAX;
int64_t x309 = -1LL;
static int32_t t56 = 114316521;
volatile int16_t x317 = -1;
static int64_t x334 = 553LL;
int32_t t60 = -92;
uint16_t x339 = 3U;
static uint64_t x343 = 5295901525660374LLU;
uint8_t x344 = 1U;
uint8_t x351 = 2U;
int16_t x352 = INT16_MAX;
volatile int32_t x353 = INT32_MAX;
uint64_t x354 = UINT64_MAX;
uint16_t x355 = UINT16_MAX;
volatile int32_t x356 = INT32_MAX;
uint64_t x376 = UINT64_MAX;
static int8_t x380 = -56;
uint32_t x385 = UINT32_MAX;
static int32_t x394 = INT32_MIN;
int8_t x396 = -6;
volatile int32_t t70 = -51814;
int32_t t71 = -914;
int32_t x401 = -1;
int8_t x403 = 54;
static uint16_t x404 = UINT16_MAX;
volatile int64_t x406 = -1LL;
static uint64_t x414 = UINT64_MAX;
static volatile uint32_t t75 = 31U;
uint16_t x423 = 7907U;
static uint32_t x424 = UINT32_MAX;
int16_t x425 = 30;
int16_t x426 = -1;
static uint32_t x438 = UINT32_MAX;
int64_t t80 = 12619621LL;
int32_t x449 = INT32_MIN;
uint16_t x450 = 4212U;
int64_t x452 = -1LL;
volatile int32_t t83 = INT32_MIN;
volatile int64_t t85 = INT64_MAX;
int16_t x472 = INT16_MIN;
int32_t t88 = -43680;
int8_t x503 = INT8_MAX;
int8_t x504 = 0;
volatile int32_t t91 = 14003;
volatile int8_t x511 = INT8_MIN;
int64_t x516 = -8LL;
volatile uint8_t x530 = 124U;
volatile int32_t t98 = -1482;


void f0(void) {
	static int32_t x5 = INT32_MIN;
	volatile int8_t x6 = INT8_MAX;
	volatile int32_t x7 = -9006802;
	int64_t x8 = INT64_MAX;

	t0 = (x5|((x6*x7)==x8));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x12 = -4;
	int32_t t1 = -340;

	t1 = (x9|((x10*x11)==x12));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 9;
	int16_t x14 = -1;
	static int64_t x15 = INT64_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t2 = 2029;

	t2 = (x13|((x14*x15)==x16));

	if (t2 != 9) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	volatile uint8_t x18 = 38U;
	uint64_t x19 = 1724429423383992LLU;
	static uint64_t x20 = 14055060686766670LLU;
	int32_t t3 = 15216519;

	t3 = (x17|((x18*x19)==x20));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	static uint16_t x26 = 356U;
	volatile uint16_t x27 = 3408U;
	uint8_t x28 = 3U;
	int32_t t4 = -5663168;

	t4 = (x25|((x26*x27)==x28));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	static volatile int64_t x30 = -13174458547LL;
	volatile uint16_t x31 = 13686U;

	t5 = (x29|((x30*x31)==x32));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = 0;
	int8_t x40 = -2;
	static int32_t t6 = 98873;

	t6 = (x37|((x38*x39)==x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x42 = -343242;
	int32_t x44 = 2107;

	t7 = (x41|((x42*x43)==x44));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x45 = INT32_MAX;
	static volatile uint16_t x46 = UINT16_MAX;
	static int32_t t8 = INT32_MAX;

	t8 = (x45|((x46*x47)==x48));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	int16_t x55 = 1256;
	volatile int64_t x56 = INT64_MIN;
	int64_t t9 = INT64_MIN;

	t9 = (x53|((x54*x55)==x56));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 2600LLU;
	int16_t x63 = 1;
	volatile int32_t x64 = 67740633;

	t10 = (x61|((x62*x63)==x64));

	if (t10 != 2600LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = -1;
	uint8_t x72 = 3U;
	int32_t t11 = INT32_MAX;

	t11 = (x69|((x70*x71)==x72));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MIN;
	static uint16_t x74 = UINT16_MAX;
	uint32_t x76 = 1617U;
	int32_t t12 = 26;

	t12 = (x73|((x74*x75)==x76));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x77 = -1;
	int16_t x78 = INT16_MIN;
	volatile int16_t x79 = -1;
	volatile uint64_t x80 = UINT64_MAX;
	volatile int32_t t13 = -12772;

	t13 = (x77|((x78*x79)==x80));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x81 = INT64_MIN;
	int64_t x82 = 6650078678078LL;
	volatile int16_t x83 = -1;
	int64_t t14 = INT64_MIN;

	t14 = (x81|((x82*x83)==x84));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 37019690304239LLU;
	int64_t x90 = INT64_MAX;
	volatile int16_t x92 = 0;
	static uint64_t t15 = 190LLU;

	t15 = (x89|((x90*x91)==x92));

	if (t15 != 37019690304239LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x93 = INT16_MIN;
	static volatile int16_t x94 = INT16_MIN;
	static int64_t x96 = INT64_MIN;
	volatile int32_t t16 = -28137;

	t16 = (x93|((x94*x95)==x96));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x99 = -1;

	t17 = (x97|((x98*x99)==x100));

	if (t17 != 647U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x101 = -1;
	int16_t x102 = -1;
	static int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MAX;
	volatile int32_t t18 = -84329;

	t18 = (x101|((x102*x103)==x104));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = INT32_MIN;
	int8_t x107 = 1;
	static uint64_t x108 = 24655LLU;
	int32_t t19 = INT32_MIN;

	t19 = (x105|((x106*x107)==x108));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x113 = 41111073LLU;
	int8_t x115 = INT8_MIN;
	volatile uint64_t t20 = 4328475636765544LLU;

	t20 = (x113|((x114*x115)==x116));

	if (t20 != 41111073LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = 13453071LLU;
	volatile int16_t x118 = INT16_MIN;
	uint8_t x119 = UINT8_MAX;
	uint64_t x120 = 63LLU;
	uint64_t t21 = 5LLU;

	t21 = (x117|((x118*x119)==x120));

	if (t21 != 13453071LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x121 = 1;
	static volatile uint32_t x122 = 15537406U;
	static int16_t x123 = -184;
	uint64_t x124 = 124798LLU;

	t22 = (x121|((x122*x123)==x124));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = -875670308664197LL;
	int16_t x126 = 48;
	uint32_t x127 = 157U;
	static int8_t x128 = INT8_MIN;
	static volatile int64_t t23 = 40615391153LL;

	t23 = (x125|((x126*x127)==x128));

	if (t23 != -875670308664197LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = -1LL;
	uint16_t x138 = 2U;
	volatile uint8_t x139 = 11U;
	int8_t x140 = INT8_MIN;
	static int64_t t24 = -146337370133LL;

	t24 = (x137|((x138*x139)==x140));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x141 = 42;
	int8_t x142 = INT8_MAX;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 22U;
	static volatile int32_t t25 = -1;

	t25 = (x141|((x142*x143)==x144));

	if (t25 != 42) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x150 = INT8_MIN;
	static uint64_t x151 = 29LLU;
	int8_t x152 = INT8_MIN;

	t26 = (x149|((x150*x151)==x152));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MAX;
	volatile int32_t t27 = 15157;

	t27 = (x153|((x154*x155)==x156));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x157 = INT16_MIN;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t t28 = -78187;

	t28 = (x157|((x158*x159)==x160));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = -1;
	int16_t x163 = 1;
	volatile int64_t x164 = 307580666792LL;
	volatile int32_t t29 = 3953;

	t29 = (x161|((x162*x163)==x164));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x170 = 1;
	int16_t x171 = 1;
	volatile int32_t t30 = 884;

	t30 = (x169|((x170*x171)==x172));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x177 = -1;
	uint16_t x179 = 37U;
	uint32_t x180 = 3309U;
	int32_t t31 = -8;

	t31 = (x177|((x178*x179)==x180));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x181 = INT16_MIN;
	int16_t x182 = 13730;
	uint16_t x184 = UINT16_MAX;
	int32_t t32 = -38;

	t32 = (x181|((x182*x183)==x184));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = INT8_MAX;
	volatile int16_t x187 = INT16_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t33 = INT32_MIN;

	t33 = (x185|((x186*x187)==x188));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x193 = 0U;
	uint64_t x194 = 8088670113781268LLU;
	static int8_t x195 = -1;
	int32_t x196 = INT32_MIN;

	t34 = (x193|((x194*x195)==x196));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x201 = -1LL;
	static int8_t x202 = 1;
	int64_t x203 = -6634197857LL;
	volatile int64_t x204 = -4518292300LL;
	int64_t t35 = 11271876328LL;

	t35 = (x201|((x202*x203)==x204));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x205 = 861LL;
	int8_t x206 = -1;
	int16_t x207 = -1;
	volatile uint32_t x208 = 8311587U;

	t36 = (x205|((x206*x207)==x208));

	if (t36 != 861LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x209 = 12538070LLU;
	static int16_t x210 = 54;
	volatile uint64_t x211 = 151566385700LLU;
	volatile uint64_t t37 = 658LLU;

	t37 = (x209|((x210*x211)==x212));

	if (t37 != 12538070LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = INT64_MAX;
	volatile int16_t x215 = INT16_MIN;
	static volatile int8_t x216 = INT8_MAX;

	t38 = (x213|((x214*x215)==x216));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x217 = 3;
	int16_t x218 = 15400;
	static int16_t x219 = -42;
	int16_t x220 = -1;
	static int32_t t39 = 9;

	t39 = (x217|((x218*x219)==x220));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = INT32_MAX;
	int8_t x222 = 1;
	uint64_t x224 = UINT64_MAX;
	static int32_t t40 = INT32_MAX;

	t40 = (x221|((x222*x223)==x224));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MIN;
	static int32_t t41 = 50;

	t41 = (x225|((x226*x227)==x228));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = INT8_MIN;
	uint64_t x238 = 0LLU;
	uint8_t x239 = 6U;
	int32_t x240 = 68197964;
	int32_t t42 = 1;

	t42 = (x237|((x238*x239)==x240));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x245 = -1LL;
	int32_t x246 = 20155;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = INT32_MIN;
	volatile int64_t t43 = 83099982723986LL;

	t43 = (x245|((x246*x247)==x248));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x249 = -3100;
	int32_t x250 = -1;
	int16_t x251 = -1;
	static int32_t t44 = -179686;

	t44 = (x249|((x250*x251)==x252));

	if (t44 != -3100) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x254 = 890952516218286272LLU;
	int16_t x255 = -1;
	uint32_t t45 = UINT32_MAX;

	t45 = (x253|((x254*x255)==x256));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x266 = UINT8_MAX;
	uint8_t x267 = UINT8_MAX;
	volatile int32_t x268 = INT32_MIN;

	t46 = (x265|((x266*x267)==x268));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x270 = INT64_MAX;
	int64_t x271 = -1LL;
	int64_t x272 = INT64_MIN;

	t47 = (x269|((x270*x271)==x272));

	if (t47 != -255) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x277 = 81U;
	static int64_t x278 = -198LL;
	static int16_t x279 = 136;
	volatile int32_t t48 = 1;

	t48 = (x277|((x278*x279)==x280));

	if (t48 != 81) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x281 = -3;
	volatile int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;
	volatile int32_t t49 = 396;

	t49 = (x281|((x282*x283)==x284));

	if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	static uint8_t x287 = UINT8_MAX;
	int8_t x288 = -1;

	t50 = (x285|((x286*x287)==x288));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x292 = INT32_MIN;
	static volatile uint64_t t51 = UINT64_MAX;

	t51 = (x289|((x290*x291)==x292));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x297 = UINT8_MAX;
	static uint8_t x298 = 102U;
	volatile uint64_t x299 = 2775215233435LLU;
	int8_t x300 = INT8_MAX;
	int32_t t52 = 46176;

	t52 = (x297|((x298*x299)==x300));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x301 = INT16_MAX;
	static uint32_t x302 = UINT32_MAX;
	static volatile int8_t x303 = INT8_MIN;
	static volatile uint64_t x304 = 604221883LLU;
	int32_t t53 = -1488;

	t53 = (x301|((x302*x303)==x304));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x305 = INT64_MAX;
	uint16_t x306 = 298U;
	int64_t x307 = -4040761238461492LL;
	uint64_t x308 = 14187LLU;
	static int64_t t54 = INT64_MAX;

	t54 = (x305|((x306*x307)==x308));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x310 = -9;
	volatile uint32_t x311 = 2335U;
	volatile int64_t x312 = -1LL;
	int64_t t55 = 1019114518LL;

	t55 = (x309|((x310*x311)==x312));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x313 = UINT16_MAX;
	static int16_t x314 = 1;
	int32_t x315 = INT32_MAX;
	volatile uint64_t x316 = UINT64_MAX;

	t56 = (x313|((x314*x315)==x316));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x318 = INT32_MAX;
	int32_t x319 = -1;
	int64_t x320 = INT64_MIN;
	int32_t t57 = 117457522;

	t57 = (x317|((x318*x319)==x320));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x321 = 3209692112LL;
	static uint32_t x322 = 730933554U;
	int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t58 = 1LL;

	t58 = (x321|((x322*x323)==x324));

	if (t58 != 3209692112LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = 489059LL;
	int32_t x326 = INT32_MAX;
	static volatile uint64_t x327 = 325059728779240LLU;
	static int32_t x328 = 0;
	int64_t t59 = 6407732511439014LL;

	t59 = (x325|((x326*x327)==x328));

	if (t59 != 489059LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x333 = 14;
	int32_t x335 = INT32_MIN;
	volatile uint32_t x336 = 107139U;

	t60 = (x333|((x334*x335)==x336));

	if (t60 != 14) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x337 = 2577014093082526LLU;
	int16_t x338 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	volatile uint64_t t61 = 30456LLU;

	t61 = (x337|((x338*x339)==x340));

	if (t61 != 2577014093082526LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x341 = -1;
	uint16_t x342 = 1139U;
	volatile int32_t t62 = -85;

	t62 = (x341|((x342*x343)==x344));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x349 = 68779784030712758LLU;
	int16_t x350 = INT16_MAX;
	static uint64_t t63 = 8LLU;

	t63 = (x349|((x350*x351)==x352));

	if (t63 != 68779784030712758LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t t64 = INT32_MAX;

	t64 = (x353|((x354*x355)==x356));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x365 = 18U;
	int8_t x366 = -1;
	int16_t x367 = INT16_MAX;
	volatile int32_t x368 = -1;
	uint32_t t65 = 1469U;

	t65 = (x365|((x366*x367)==x368));

	if (t65 != 18U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x369 = 3;
	uint32_t x370 = 38801536U;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = UINT8_MAX;
	static volatile int32_t t66 = 59612234;

	t66 = (x369|((x370*x371)==x372));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x373 = 6U;
	int8_t x374 = 4;
	static uint64_t x375 = UINT64_MAX;
	static int32_t t67 = 21818239;

	t67 = (x373|((x374*x375)==x376));

	if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x377 = UINT8_MAX;
	uint16_t x378 = 7146U;
	static uint32_t x379 = 5U;
	volatile int32_t t68 = -6911;

	t68 = (x377|((x378*x379)==x380));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = INT16_MIN;
	int32_t x388 = -1;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x385|((x386*x387)==x388));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x393 = UINT8_MAX;
	volatile uint64_t x395 = 3810668100252105581LLU;

	t70 = (x393|((x394*x395)==x396));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x397 = -1;
	uint16_t x398 = 1U;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;

	t71 = (x397|((x398*x399)==x400));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x402 = INT16_MIN;
	volatile int32_t t72 = -281316;

	t72 = (x401|((x402*x403)==x404));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x405 = INT16_MAX;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = 154128925;
	int32_t t73 = 22;

	t73 = (x405|((x406*x407)==x408));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x413 = 154364896U;
	int32_t x415 = -224738528;
	int32_t x416 = INT32_MAX;
	volatile uint32_t t74 = 112381U;

	t74 = (x413|((x414*x415)==x416));

	if (t74 != 154364896U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x417 = 7U;
	int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	static int64_t x420 = -3596LL;

	t75 = (x417|((x418*x419)==x420));

	if (t75 != 7U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x421 = INT32_MIN;
	volatile int8_t x422 = INT8_MIN;
	int32_t t76 = INT32_MIN;

	t76 = (x421|((x422*x423)==x424));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = -1;
	volatile int32_t t77 = -52621;

	t77 = (x425|((x426*x427)==x428));

	if (t77 != 30) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x429 = UINT16_MAX;
	int8_t x430 = 0;
	int64_t x431 = -1LL;
	uint8_t x432 = 48U;
	static volatile int32_t t78 = 116758032;

	t78 = (x429|((x430*x431)==x432));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x433 = UINT16_MAX;
	static uint64_t x434 = 124463687814850409LLU;
	int32_t x435 = -738089486;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t79 = -4173332;

	t79 = (x433|((x434*x435)==x436));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x437 = -1947LL;
	int8_t x439 = INT8_MIN;
	static uint16_t x440 = 15976U;

	t80 = (x437|((x438*x439)==x440));

	if (t80 != -1947LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x441 = INT16_MAX;
	int64_t x442 = INT64_MIN;
	int16_t x443 = 1;
	int32_t x444 = 0;
	volatile int32_t t81 = 966482;

	t81 = (x441|((x442*x443)==x444));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x445 = -22;
	int32_t x446 = 8;
	static uint16_t x447 = 2U;
	int64_t x448 = INT64_MAX;
	int32_t t82 = -808835;

	t82 = (x445|((x446*x447)==x448));

	if (t82 != -22) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x451 = 10LLU;

	t83 = (x449|((x450*x451)==x452));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x453 = -179206354856LL;
	uint16_t x454 = 7689U;
	uint64_t x455 = 67422282084302LLU;
	volatile int8_t x456 = INT8_MIN;
	volatile int64_t t84 = -2LL;

	t84 = (x453|((x454*x455)==x456));

	if (t84 != -179206354856LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x457 = INT64_MAX;
	int8_t x458 = -1;
	int16_t x459 = 5;
	int16_t x460 = -1;

	t85 = (x457|((x458*x459)==x460));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x469 = INT32_MAX;
	int8_t x470 = 0;
	int64_t x471 = -1LL;
	static volatile int32_t t86 = INT32_MAX;

	t86 = (x469|((x470*x471)==x472));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x473 = 15721U;
	uint32_t x474 = UINT32_MAX;
	uint16_t x475 = 51U;
	volatile uint8_t x476 = 1U;
	static uint32_t t87 = 146724129U;

	t87 = (x473|((x474*x475)==x476));

	if (t87 != 15721U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x481 = INT8_MAX;
	volatile int8_t x482 = INT8_MIN;
	uint8_t x483 = UINT8_MAX;
	int32_t x484 = -1;

	t88 = (x481|((x482*x483)==x484));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x489 = INT8_MAX;
	int8_t x490 = 11;
	uint8_t x491 = UINT8_MAX;
	uint16_t x492 = UINT16_MAX;
	static volatile int32_t t89 = -14819;

	t89 = (x489|((x490*x491)==x492));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x493 = -1;
	uint64_t x494 = UINT64_MAX;
	int8_t x495 = -1;
	static volatile uint16_t x496 = UINT16_MAX;
	int32_t t90 = -456177986;

	t90 = (x493|((x494*x495)==x496));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x501 = -1;
	int16_t x502 = -1;

	t91 = (x501|((x502*x503)==x504));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x509 = 97U;
	volatile uint8_t x510 = 14U;
	volatile uint32_t x512 = UINT32_MAX;
	int32_t t92 = 805450326;

	t92 = (x509|((x510*x511)==x512));

	if (t92 != 97) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x513 = 5707U;
	volatile uint16_t x514 = 6U;
	int8_t x515 = -1;
	int32_t t93 = -527;

	t93 = (x513|((x514*x515)==x516));

	if (t93 != 5707) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x517 = -1;
	static int8_t x518 = -1;
	int32_t x519 = -1;
	uint64_t x520 = 19606857LLU;
	volatile int32_t t94 = -255943;

	t94 = (x517|((x518*x519)==x520));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x521 = INT16_MIN;
	volatile int16_t x522 = 1;
	volatile int64_t x523 = -1LL;
	int32_t x524 = INT32_MIN;
	static volatile int32_t t95 = 19922198;

	t95 = (x521|((x522*x523)==x524));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x525 = -1;
	volatile uint8_t x526 = UINT8_MAX;
	uint32_t x527 = 9615155U;
	int16_t x528 = -1;
	volatile int32_t t96 = -299981472;

	t96 = (x525|((x526*x527)==x528));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x529 = UINT8_MAX;
	volatile uint8_t x531 = 0U;
	int64_t x532 = 1975LL;
	volatile int32_t t97 = -47;

	t97 = (x529|((x530*x531)==x532));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x533 = -502;
	volatile int8_t x534 = INT8_MAX;
	static int32_t x535 = 483;
	int16_t x536 = -1;

	t98 = (x533|((x534*x535)==x536));

	if (t98 != -502) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x537 = 28U;
	uint64_t x538 = 88076336LLU;
	int8_t x539 = INT8_MIN;
	uint64_t x540 = 7874LLU;
	volatile int32_t t99 = 2860;

	t99 = (x537|((x538*x539)==x540));

	if (t99 != 28) { NG(); } else { ; }
	
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

