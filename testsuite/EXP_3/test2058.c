#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = 54U;
int16_t x36 = INT16_MIN;
uint64_t x45 = 71LLU;
volatile uint8_t x49 = 108U;
static int32_t x56 = INT32_MIN;
static volatile int32_t t8 = 1855;
int32_t t10 = 1726;
volatile uint64_t t12 = 13542710842LLU;
uint32_t x79 = 7438170U;
volatile uint32_t x80 = UINT32_MAX;
uint64_t t14 = 128LLU;
int8_t x95 = INT8_MAX;
volatile int8_t x108 = -8;
static int64_t t19 = -14789221439732LL;
uint16_t x121 = 842U;
static int64_t x123 = INT64_MIN;
volatile uint16_t x125 = 213U;
int16_t x132 = INT16_MAX;
int8_t x143 = INT8_MAX;
int32_t x151 = -1;
int64_t x157 = 81LL;
uint32_t x164 = 501U;
int64_t x169 = INT64_MAX;
static int8_t x186 = INT8_MAX;
static int64_t x199 = 471702135LL;
static volatile int8_t x203 = INT8_MIN;
int8_t x228 = INT8_MAX;
uint64_t t40 = 346327524313574LLU;
volatile int8_t x242 = INT8_MIN;
uint64_t x261 = 4047995246765LLU;
static volatile int8_t x263 = INT8_MAX;
static int64_t x265 = -1060459148676784132LL;
int64_t x268 = -1LL;
volatile int64_t t45 = 950798783303LL;
int8_t x278 = -1;
volatile uint8_t x279 = 89U;
int8_t x281 = INT8_MAX;
uint32_t x303 = 10U;
static uint32_t t53 = 2U;
static volatile uint64_t t54 = 32460760269LLU;
int16_t x335 = -14;
volatile int8_t x336 = 53;
volatile uint64_t t56 = 57722768LLU;
int8_t x345 = -1;
static volatile int32_t x349 = -1;
volatile int32_t t59 = 484712;
static volatile uint64_t t60 = 459341462578LLU;
uint16_t x357 = 16U;
int8_t x366 = -1;
static uint32_t x373 = 666U;
static int32_t x390 = INT32_MIN;
static uint64_t x402 = 1890832LLU;
uint64_t t69 = 16809487707722537LLU;
int32_t x415 = INT32_MIN;
volatile int8_t x421 = INT8_MAX;
volatile uint64_t t72 = 481974470LLU;
static uint8_t x432 = 5U;
static int32_t x434 = -1;
static int8_t x436 = -2;
uint32_t x441 = 240U;
static volatile uint64_t t76 = 535167LLU;
int8_t x449 = -1;
static int64_t x463 = -1315658LL;
int32_t x464 = INT32_MIN;
static int8_t x465 = 0;
uint8_t x467 = 0U;
uint64_t t82 = 2042567317LLU;
volatile int64_t x480 = INT64_MAX;
int8_t x489 = -1;
int32_t x494 = -722758749;
static int8_t x502 = -1;
int64_t x503 = 1LL;
int16_t x504 = 305;
volatile int64_t t87 = -6123263LL;
uint64_t x510 = 1463759990LLU;
volatile int16_t x513 = INT16_MIN;
uint32_t x520 = 1U;
static int8_t x535 = -6;
uint32_t x539 = 192918601U;
volatile int8_t x544 = -1;
int64_t t95 = -1101885434837929612LL;
uint8_t x545 = 27U;
volatile int64_t x547 = INT64_MIN;
volatile uint64_t t96 = 242LLU;
static uint8_t x564 = 8U;
int32_t x565 = -23875675;
int8_t x572 = -1;


void f0(void) {
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MIN;
	uint32_t t0 = 0U;

	t0 = ((x5*x6)/(x7^x8));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = 121783902616LLU;
	uint8_t x18 = 2U;
	int32_t x19 = -655263;
	int32_t x20 = -1;
	volatile uint64_t t1 = 576617008312LLU;

	t1 = ((x17*x18)/(x19^x20));

	if (t1 != 371710LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x25 = 7U;
	uint8_t x26 = 111U;
	uint16_t x27 = 1U;
	int32_t x28 = INT32_MIN;
	volatile int32_t t2 = -2390253;

	t2 = ((x25*x26)/(x27^x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x29 = 71174;
	uint16_t x30 = 10U;
	static int8_t x31 = INT8_MAX;
	static int32_t x32 = -1;
	static int32_t t3 = 1;

	t3 = ((x29*x30)/(x31^x32));

	if (t3 != -5560) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = 84522967925578LLU;
	uint16_t x34 = UINT16_MAX;
	int32_t x35 = INT32_MIN;
	uint64_t t4 = 2217435862377710LLU;

	t4 = ((x33*x34)/(x35^x36));

	if (t4 != 2579436277LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 2567787352LLU;
	uint64_t x38 = 20657255LLU;
	int64_t x39 = INT64_MAX;
	int8_t x40 = -1;
	volatile uint64_t t5 = 1984415127557LLU;

	t5 = ((x37*x38)/(x39^x40));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x46 = UINT16_MAX;
	static int64_t x47 = -4382722229016LL;
	volatile uint8_t x48 = 8U;
	volatile uint64_t t6 = 540129294605012LLU;

	t6 = ((x45*x46)/(x47^x48));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x50 = 19;
	int8_t x51 = 0;
	int8_t x52 = -1;
	static int32_t t7 = 1969137;

	t7 = ((x49*x50)/(x51^x52));

	if (t7 != -2052) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MAX;
	uint8_t x55 = 119U;

	t8 = ((x53*x54)/(x55^x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x61 = -1;
	uint8_t x62 = 14U;
	volatile uint16_t x63 = 8U;
	int16_t x64 = -1;
	int32_t t9 = -5;

	t9 = ((x61*x62)/(x63^x64));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = 12899087;
	int8_t x66 = -1;
	volatile int32_t x67 = -212813083;
	static int16_t x68 = INT16_MAX;

	t10 = ((x65*x66)/(x67^x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x69 = INT64_MIN;
	static int64_t x70 = 0LL;
	volatile uint8_t x71 = 5U;
	int32_t x72 = INT32_MIN;
	static int64_t t11 = 143707422710469023LL;

	t11 = ((x69*x70)/(x71^x72));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = -1;
	static int16_t x74 = 1;
	uint32_t x75 = 1519U;
	uint64_t x76 = UINT64_MAX;

	t12 = ((x73*x74)/(x75^x76));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = 1;
	uint32_t x78 = 10967847U;
	uint32_t t13 = 504U;

	t13 = ((x77*x78)/(x79^x80));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = -127468733213490LL;
	uint64_t x86 = 2231651LLU;
	uint8_t x87 = UINT8_MAX;
	static int16_t x88 = INT16_MAX;

	t14 = ((x85*x86)/(x87^x88));

	if (t14 != 328561123115608LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x89 = 0U;
	int32_t x90 = INT32_MAX;
	volatile uint64_t x91 = 264810LLU;
	uint16_t x92 = UINT16_MAX;
	static volatile uint64_t t15 = 971529166410120543LLU;

	t15 = ((x89*x90)/(x91^x92));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x93 = UINT32_MAX;
	static volatile int8_t x94 = INT8_MAX;
	int16_t x96 = INT16_MAX;
	uint32_t t16 = 99U;

	t16 = ((x93*x94)/(x95^x96));

	if (t16 != 131586U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = -1;
	static volatile int32_t x106 = -19725;
	uint32_t x107 = 1969082U;
	uint32_t t17 = 1U;

	t17 = ((x105*x106)/(x107^x108));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x113 = UINT64_MAX;
	uint64_t x114 = UINT64_MAX;
	static int8_t x115 = -52;
	static uint16_t x116 = UINT16_MAX;
	volatile uint64_t t18 = 29912LLU;

	t18 = ((x113*x114)/(x115^x116));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x117 = 5U;
	int16_t x118 = INT16_MIN;
	volatile uint16_t x119 = 14970U;
	volatile int64_t x120 = -1LL;

	t19 = ((x117*x118)/(x119^x120));

	if (t19 != -286874LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x122 = 1035539;
	int32_t x124 = -1;
	volatile int64_t t20 = 0LL;

	t20 = ((x121*x122)/(x123^x124));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x126 = -3346781414LL;
	uint8_t x127 = 0U;
	int32_t x128 = INT32_MIN;
	int64_t t21 = -36379374LL;

	t21 = ((x125*x126)/(x127^x128));

	if (t21 != 331LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x129 = -1;
	volatile uint32_t x130 = UINT32_MAX;
	volatile uint64_t x131 = 240845533705267LLU;
	static volatile uint64_t t22 = 32674148239178LLU;

	t22 = ((x129*x130)/(x131^x132));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x141 = INT32_MIN;
	volatile int16_t x142 = 1;
	uint32_t x144 = UINT32_MAX;
	uint32_t t23 = 690140U;

	t23 = ((x141*x142)/(x143^x144));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x145 = 2U;
	int8_t x146 = -1;
	int64_t x147 = -12501982118623444LL;
	int16_t x148 = 489;
	volatile int64_t t24 = -8162LL;

	t24 = ((x145*x146)/(x147^x148));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int16_t x150 = INT16_MAX;
	int64_t x152 = -194679016LL;
	volatile int64_t t25 = 7LL;

	t25 = ((x149*x150)/(x151^x152));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = 39314U;
	int8_t x155 = 4;
	int64_t x156 = INT64_MAX;
	int64_t t26 = 1LL;

	t26 = ((x153*x154)/(x155^x156));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x158 = 7727U;
	uint32_t x159 = 2117810U;
	uint64_t x160 = UINT64_MAX;
	uint64_t t27 = 143226544206028909LLU;

	t27 = ((x157*x158)/(x159^x160));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x161 = 16U;
	static uint16_t x162 = 1607U;
	uint8_t x163 = 2U;
	volatile uint32_t t28 = 8020U;

	t28 = ((x161*x162)/(x163^x164));

	if (t28 != 51U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x165 = INT16_MAX;
	uint64_t x166 = 1248533629917639286LLU;
	volatile uint64_t x167 = UINT64_MAX;
	static volatile int32_t x168 = INT32_MIN;
	static uint64_t t29 = 41958LLU;

	t29 = ((x165*x166)/(x167^x168));

	if (t29 != 6644912112LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x170 = 1U;
	static uint32_t x171 = 2583U;
	int32_t x172 = -1;
	volatile int64_t t30 = -4361402530030669155LL;

	t30 = ((x169*x170)/(x171^x172));

	if (t30 != 2147484940LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x181 = 18U;
	volatile uint16_t x182 = 311U;
	int64_t x183 = 933LL;
	int64_t x184 = INT64_MIN;
	int64_t t31 = -1301970222LL;

	t31 = ((x181*x182)/(x183^x184));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x185 = -1LL;
	int16_t x187 = INT16_MIN;
	uint64_t x188 = 34862023LLU;
	uint64_t t32 = 3261389640312986574LLU;

	t32 = ((x185*x186)/(x187^x188));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x189 = -1LL;
	static int32_t x190 = -403718271;
	int16_t x191 = 981;
	int16_t x192 = INT16_MAX;
	volatile int64_t t33 = -15706844LL;

	t33 = ((x189*x190)/(x191^x192));

	if (t33 != 12701LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x197 = INT32_MIN;
	volatile uint64_t x198 = 651482LLU;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t34 = 2LLU;

	t34 = ((x197*x198)/(x199^x200));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = 52092LLU;
	uint32_t x202 = 52U;
	static uint64_t x204 = 239409766702LLU;
	uint64_t t35 = 5453421465397361LLU;

	t35 = ((x201*x202)/(x203^x204));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x205 = -1;
	uint16_t x206 = 383U;
	static int64_t x207 = INT64_MAX;
	static uint16_t x208 = 2468U;
	int64_t t36 = -12LL;

	t36 = ((x205*x206)/(x207^x208));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x217 = INT16_MIN;
	static int64_t x218 = -1LL;
	int16_t x219 = 1;
	int64_t x220 = 29190429072LL;
	static volatile int64_t t37 = -261052805451474938LL;

	t37 = ((x217*x218)/(x219^x220));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x225 = 3282368816659623LLU;
	int32_t x226 = 504;
	int32_t x227 = INT32_MAX;
	volatile uint64_t t38 = 26598642332LLU;

	t38 = ((x225*x226)/(x227^x228));

	if (t38 != 770349978LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MIN;
	volatile int64_t x231 = -1LL;
	volatile uint8_t x232 = 68U;
	int64_t t39 = -77630513157912803LL;

	t39 = ((x229*x230)/(x231^x232));

	if (t39 != 121099LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x237 = -344692394421462LL;
	volatile int16_t x238 = -1;
	static int16_t x239 = INT16_MIN;
	volatile uint64_t x240 = UINT64_MAX;

	t40 = ((x237*x238)/(x239^x240));

	if (t40 != 10519498105LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x241 = 1011;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MAX;
	volatile int32_t t41 = -132289880;

	t41 = ((x241*x242)/(x243^x244));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x253 = INT8_MAX;
	int8_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t42 = -4194441;

	t42 = ((x253*x254)/(x255^x256));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MAX;
	int64_t x259 = INT64_MIN;
	int16_t x260 = -1;
	int64_t t43 = 1LL;

	t43 = ((x257*x258)/(x259^x260));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x262 = -1LL;
	int64_t x264 = 10117361992LL;
	volatile uint64_t t44 = 2717347220775LLU;

	t44 = ((x261*x262)/(x263^x264));

	if (t44 != 1823275679LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x266 = 4U;
	static int16_t x267 = INT16_MIN;

	t45 = ((x265*x266)/(x267^x268));

	if (t45 != -129454530311201LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x269 = 65;
	static uint32_t x270 = 0U;
	static int64_t x271 = INT64_MIN;
	int8_t x272 = -1;
	volatile int64_t t46 = 3768745140306LL;

	t46 = ((x269*x270)/(x271^x272));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x277 = 31U;
	int8_t x280 = INT8_MIN;
	volatile int32_t t47 = 47;

	t47 = ((x277*x278)/(x279^x280));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x282 = 35621248336790698LLU;
	static volatile int8_t x283 = INT8_MIN;
	static int64_t x284 = INT64_MIN;
	volatile uint64_t t48 = 142345854355LLU;

	t48 = ((x281*x282)/(x283^x284));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x293 = INT32_MAX;
	static int8_t x294 = -1;
	uint32_t x295 = UINT32_MAX;
	volatile uint8_t x296 = 48U;
	volatile uint32_t t49 = 1781684986U;

	t49 = ((x293*x294)/(x295^x296));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x301 = 10478597U;
	int8_t x302 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;
	static uint32_t t50 = 716U;

	t50 = ((x301*x302)/(x303^x304));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x313 = -3LL;
	volatile uint64_t x314 = 438372074347082951LLU;
	int32_t x315 = -1;
	static int32_t x316 = INT32_MIN;
	volatile uint64_t t51 = 14307019841334LLU;

	t51 = ((x313*x314)/(x315^x316));

	if (t51 != 7977535882LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x321 = -1;
	int8_t x322 = -1;
	static int32_t x323 = INT32_MAX;
	volatile uint32_t x324 = 1292982U;
	uint32_t t52 = 85U;

	t52 = ((x321*x322)/(x323^x324));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x325 = INT8_MIN;
	static volatile int16_t x326 = 211;
	volatile int16_t x327 = 0;
	uint32_t x328 = 2002U;

	t53 = ((x325*x326)/(x327^x328));

	if (t53 != 2145324U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x329 = 1146611265716720353LLU;
	int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;

	t54 = ((x329*x330)/(x331^x332));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x333 = -1;
	int8_t x334 = INT8_MIN;
	volatile int32_t t55 = -1;

	t55 = ((x333*x334)/(x335^x336));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x337 = 1U;
	volatile int16_t x338 = -1;
	uint64_t x339 = 8515171598679138374LLU;
	int8_t x340 = 39;

	t56 = ((x337*x338)/(x339^x340));

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x341 = 57215850289LLU;
	int16_t x342 = INT16_MAX;
	static int8_t x343 = -1;
	uint8_t x344 = UINT8_MAX;
	static volatile uint64_t t57 = 18392230369603081LLU;

	t57 = ((x341*x342)/(x343^x344));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x346 = 3391U;
	int16_t x347 = 58;
	int8_t x348 = INT8_MAX;
	volatile uint32_t t58 = 460898582U;

	t58 = ((x345*x346)/(x347^x348));

	if (t58 != 62245853U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x350 = INT8_MAX;
	volatile int8_t x351 = -1;
	static uint16_t x352 = 27U;

	t59 = ((x349*x350)/(x351^x352));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x353 = 353977634415LLU;
	int64_t x354 = 6607LL;
	uint64_t x355 = 0LLU;
	volatile uint8_t x356 = 19U;

	t60 = ((x353*x354)/(x355^x356));

	if (t60 != 123091064767363LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x358 = 95U;
	static uint16_t x359 = 2U;
	int8_t x360 = 0;
	static int32_t t61 = 227302;

	t61 = ((x357*x358)/(x359^x360));

	if (t61 != 760) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x361 = UINT32_MAX;
	int32_t x362 = 594372;
	volatile int16_t x363 = -1;
	int16_t x364 = -247;
	volatile uint32_t t62 = 1700U;

	t62 = ((x361*x362)/(x363^x364));

	if (t62 != 17456800U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x365 = 28U;
	volatile int32_t x367 = -1;
	static volatile int16_t x368 = -9;
	volatile int32_t t63 = -278849;

	t63 = ((x365*x366)/(x367^x368));

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x369 = 5524;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MAX;
	volatile uint64_t x372 = 16733LLU;
	uint64_t t64 = 3159799476283LLU;

	t64 = ((x369*x370)/(x371^x372));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x374 = INT8_MIN;
	uint32_t x375 = 151513U;
	static uint8_t x376 = 24U;
	uint32_t t65 = 10090U;

	t65 = ((x373*x374)/(x375^x376));

	if (t65 != 28351U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x385 = 106;
	static uint8_t x386 = 31U;
	volatile int64_t x387 = INT64_MIN;
	static int16_t x388 = -5279;
	int64_t t66 = -3LL;

	t66 = ((x385*x386)/(x387^x388));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x389 = 103158398LL;
	static volatile int16_t x391 = INT16_MAX;
	int64_t x392 = 2LL;
	int64_t t67 = 1011801296LL;

	t67 = ((x389*x390)/(x391^x392));

	if (t67 != -6761207778387LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x393 = UINT32_MAX;
	static uint8_t x394 = UINT8_MAX;
	uint16_t x395 = UINT16_MAX;
	static uint64_t x396 = UINT64_MAX;
	volatile uint64_t t68 = 1695120148805262495LLU;

	t68 = ((x393*x394)/(x395^x396));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x401 = INT8_MIN;
	volatile int16_t x403 = -7;
	uint32_t x404 = UINT32_MAX;

	t69 = ((x401*x402)/(x403^x404));

	if (t69 != 3074457345577920853LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x409 = -58;
	uint64_t x410 = 12517LLU;
	int16_t x411 = INT16_MIN;
	static int8_t x412 = -48;
	uint64_t t70 = 14305525534LLU;

	t70 = ((x409*x410)/(x411^x412));

	if (t70 != 563775796873741LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x413 = -1;
	static uint64_t x414 = 18LLU;
	static uint32_t x416 = UINT32_MAX;
	volatile uint64_t t71 = 433185028627224975LLU;

	t71 = ((x413*x414)/(x415^x416));

	if (t71 != 8589934595LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x422 = 4;
	static uint64_t x423 = UINT64_MAX;
	int32_t x424 = -481;

	t72 = ((x421*x422)/(x423^x424));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x429 = -1;
	static int64_t x430 = -752365347034172831LL;
	int16_t x431 = INT16_MIN;
	static volatile int64_t t73 = -9130952231LL;

	t73 = ((x429*x430)/(x431^x432));

	if (t73 != -22963872265487LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x433 = INT16_MIN;
	int64_t x435 = INT64_MIN;
	volatile int64_t t74 = -16565968611LL;

	t74 = ((x433*x434)/(x435^x436));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	int32_t x440 = INT32_MAX;
	int32_t t75 = 61;

	t75 = ((x437*x438)/(x439^x440));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x442 = 2741307921LLU;
	int8_t x443 = INT8_MIN;
	uint8_t x444 = UINT8_MAX;

	t76 = ((x441*x442)/(x443^x444));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x445 = 1;
	int16_t x446 = INT16_MIN;
	int64_t x447 = INT64_MIN;
	static int64_t x448 = INT64_MAX;
	int64_t t77 = -430267199151718203LL;

	t77 = ((x445*x446)/(x447^x448));

	if (t77 != 32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x450 = INT16_MIN;
	volatile int8_t x451 = INT8_MIN;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t78 = 122329LLU;

	t78 = ((x449*x450)/(x451^x452));

	if (t78 != 258LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x453 = -1;
	int16_t x454 = -1;
	int32_t x455 = INT32_MIN;
	static uint32_t x456 = 22U;
	volatile uint32_t t79 = 207U;

	t79 = ((x453*x454)/(x455^x456));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x457 = 11U;
	volatile int32_t x458 = INT32_MAX;
	int64_t x459 = 575816747847LL;
	int8_t x460 = 1;
	int64_t t80 = 62LL;

	t80 = ((x457*x458)/(x459^x460));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x461 = -1;
	int8_t x462 = INT8_MAX;
	static volatile int64_t t81 = 20LL;

	t81 = ((x461*x462)/(x463^x464));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x466 = 386964793959LLU;
	int16_t x468 = -31;

	t82 = ((x465*x466)/(x467^x468));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x473 = 7880;
	volatile uint8_t x474 = 0U;
	static uint8_t x475 = UINT8_MAX;
	int32_t x476 = INT32_MAX;
	volatile int32_t t83 = -8;

	t83 = ((x473*x474)/(x475^x476));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x477 = 533878333;
	static volatile uint32_t x478 = 500U;
	uint16_t x479 = UINT16_MAX;
	volatile int64_t t84 = 2289LL;

	t84 = ((x477*x478)/(x479^x480));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x490 = 223;
	volatile int32_t x491 = INT32_MAX;
	volatile int8_t x492 = 5;
	static volatile int32_t t85 = -125291073;

	t85 = ((x489*x490)/(x491^x492));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x493 = -1;
	uint8_t x495 = 7U;
	int8_t x496 = INT8_MAX;
	volatile int32_t t86 = 28916;

	t86 = ((x493*x494)/(x495^x496));

	if (t86 != 6022989) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x501 = 5U;

	t87 = ((x501*x502)/(x503^x504));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x505 = UINT32_MAX;
	uint16_t x506 = UINT16_MAX;
	int16_t x507 = -1;
	volatile int16_t x508 = INT16_MAX;
	uint32_t t88 = 2U;

	t88 = ((x505*x506)/(x507^x508));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x509 = INT8_MIN;
	uint16_t x511 = 0U;
	uint64_t x512 = UINT64_MAX;
	static volatile uint64_t t89 = 150846098LLU;

	t89 = ((x509*x510)/(x511^x512));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x514 = INT16_MAX;
	static int8_t x515 = -1;
	int32_t x516 = INT32_MIN;
	static int32_t t90 = 2810426;

	t90 = ((x513*x514)/(x515^x516));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x517 = 9U;
	uint8_t x518 = 24U;
	static int16_t x519 = -35;
	static volatile uint32_t t91 = 731773133U;

	t91 = ((x517*x518)/(x519^x520));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x525 = 8095098LL;
	int16_t x526 = INT16_MIN;
	int16_t x527 = INT16_MIN;
	volatile int32_t x528 = -1089;
	int64_t t92 = 1436796147LL;

	t92 = ((x525*x526)/(x527^x528));

	if (t92 != -8373375LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x533 = INT32_MIN;
	int8_t x534 = 1;
	int64_t x536 = 128965724076LL;
	int64_t t93 = -227084536959322523LL;

	t93 = ((x533*x534)/(x535^x536));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x537 = -1LL;
	uint64_t x538 = 2084193018903LLU;
	uint32_t x540 = 4542335U;
	volatile uint64_t t94 = 86619331106LLU;

	t94 = ((x537*x538)/(x539^x540));

	if (t94 != 97904965719LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x541 = INT8_MAX;
	int32_t x542 = -4;
	int64_t x543 = INT64_MIN;

	t95 = ((x541*x542)/(x543^x544));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x546 = UINT16_MAX;
	uint64_t x548 = UINT64_MAX;

	t96 = ((x545*x546)/(x547^x548));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x561 = INT64_MIN;
	volatile uint64_t x562 = 10987734895228LLU;
	int8_t x563 = -6;
	uint64_t t97 = 4386175167972457848LLU;

	t97 = ((x561*x562)/(x563^x564));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x566 = -16225LL;
	volatile int8_t x567 = -1;
	int32_t x568 = INT32_MIN;
	int64_t t98 = -10753613LL;

	t98 = ((x565*x566)/(x567^x568));

	if (t98 != 180LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x569 = -1;
	int8_t x570 = INT8_MAX;
	int8_t x571 = INT8_MIN;
	int32_t t99 = -495;

	t99 = ((x569*x570)/(x571^x572));

	if (t99 != -1) { NG(); } else { ; }
	
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

