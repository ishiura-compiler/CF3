#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x16 = 332405U;
volatile int64_t t1 = 0LL;
int16_t x22 = INT16_MIN;
int32_t t2 = 32457623;
int32_t x30 = -1;
uint64_t x46 = 2788251184549LLU;
uint16_t x57 = 34U;
volatile int64_t x61 = INT64_MIN;
uint32_t x64 = 3553U;
uint16_t x70 = 585U;
static int8_t x85 = INT8_MIN;
int32_t x88 = -1;
volatile int32_t t9 = 370971;
uint8_t x95 = 9U;
int32_t x96 = -277;
uint32_t x97 = UINT32_MAX;
volatile int16_t x101 = INT16_MIN;
int8_t x102 = INT8_MIN;
volatile uint64_t x104 = 2623331LLU;
static uint64_t t12 = 35207992956LLU;
int8_t x107 = INT8_MAX;
uint32_t x113 = 11U;
uint32_t x119 = UINT32_MAX;
uint16_t x135 = 7781U;
volatile uint32_t t22 = 5U;
int64_t x150 = INT64_MIN;
int64_t t23 = -418266157282LL;
static volatile uint64_t t24 = 672317649259326504LLU;
int32_t x157 = INT32_MAX;
uint8_t x158 = UINT8_MAX;
int32_t t25 = -32518;
uint64_t x171 = 218LLU;
volatile int64_t x183 = INT64_MIN;
volatile uint64_t t31 = 270861758326LLU;
uint8_t x246 = 1U;
uint8_t x247 = UINT8_MAX;
uint8_t x250 = 4U;
int8_t x258 = INT8_MIN;
uint64_t x259 = UINT64_MAX;
static int32_t x270 = 3047558;
int64_t x275 = -54498317087659LL;
volatile uint32_t x276 = UINT32_MAX;
int8_t x280 = INT8_MIN;
uint64_t x282 = 23779131955142LLU;
int8_t x283 = -3;
int8_t x289 = -1;
volatile int8_t x292 = INT8_MIN;
int16_t x293 = -11;
volatile uint64_t x295 = 90640352011774696LLU;
static volatile int16_t x298 = INT16_MIN;
int64_t x307 = 89402244LL;
uint8_t x313 = 104U;
int64_t x323 = INT64_MAX;
static int16_t x333 = -1;
int8_t x334 = INT8_MIN;
static int32_t x340 = 1;
static int16_t x348 = -1;
int16_t x353 = -1;
int64_t x364 = -1LL;
int16_t x379 = INT16_MIN;
volatile int8_t x380 = -1;
uint8_t x382 = UINT8_MAX;
volatile uint64_t t64 = 4183876356665LLU;
uint8_t x392 = 7U;
static int8_t x402 = -52;
int8_t x404 = INT8_MAX;
int32_t x407 = INT32_MIN;
static int16_t x431 = INT16_MIN;
volatile int64_t t72 = -9LL;
uint64_t x454 = 93520LLU;
uint8_t x458 = 107U;
volatile int32_t t76 = 405200843;
int32_t x468 = -1;
static volatile int8_t x469 = 9;
volatile uint8_t x472 = 4U;
int64_t x491 = INT64_MAX;
int16_t x501 = -3;
static int32_t x503 = INT32_MAX;
int32_t x508 = -46782;
volatile int64_t t87 = -4289149316027LL;
uint32_t x520 = 357143156U;
int16_t x522 = INT16_MAX;
int32_t x528 = -136559996;
uint64_t t90 = 1348819898LLU;
static uint64_t t93 = 9851LLU;
volatile int32_t t94 = 1;
volatile int16_t x559 = INT16_MAX;
static int32_t x560 = 864082706;
int16_t x564 = -1;
uint8_t x565 = 60U;
volatile int16_t x570 = INT16_MIN;
uint32_t x571 = 23696U;
static uint64_t x583 = UINT64_MAX;
uint64_t x584 = UINT64_MAX;
volatile uint64_t t99 = 89505561LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = 1;
	uint64_t x3 = 103723921316296LLU;
	volatile int64_t x4 = -35081LL;
	uint64_t t0 = 49459246115072504LLU;

	t0 = (x1%((x2%x3)*x4));

	if (t0 != 34953LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x13 = 3U;
	int32_t x14 = -1;
	int64_t x15 = INT64_MIN;

	t1 = (x13%((x14%x15)*x16));

	if (t1 != 3LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x21 = INT8_MAX;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;

	t2 = (x21%((x22%x23)*x24));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x29 = 0;
	int64_t x31 = INT64_MAX;
	int8_t x32 = INT8_MAX;
	volatile int64_t t3 = -1578LL;

	t3 = (x29%((x30%x31)*x32));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x45 = 2;
	static int64_t x47 = 12381058848484LL;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t4 = 1618593859482LLU;

	t4 = (x45%((x46%x47)*x48));

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x58 = INT8_MAX;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = -1;
	int32_t t5 = 10467;

	t5 = (x57%((x58%x59)*x60));

	if (t5 != 34) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x62 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;
	volatile uint64_t t6 = 9LLU;

	t6 = (x61%((x62%x63)*x64));

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x69 = -7;
	volatile uint32_t x71 = 8072U;
	uint8_t x72 = UINT8_MAX;
	volatile uint32_t t7 = 2876U;

	t7 = (x69%((x70%x71)*x72));

	if (t7 != 69864U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x77 = -3872;
	uint32_t x78 = 344U;
	int32_t x79 = INT32_MIN;
	int64_t x80 = 9794803700642715LL;
	volatile int64_t t8 = 104LL;

	t8 = (x77%((x78%x79)*x80));

	if (t8 != -3872LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x86 = INT16_MAX;
	uint8_t x87 = 52U;

	t9 = (x85%((x86%x87)*x88));

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x93 = INT32_MIN;
	volatile int64_t x94 = -3607557185496LL;
	volatile int64_t t10 = 3749940832980817LL;

	t10 = (x93%((x94%x95)*x96));

	if (t10 != -152LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x98 = 15118U;
	volatile uint64_t x99 = 820LLU;
	uint16_t x100 = 1517U;
	static uint64_t t11 = 908722013777LLU;

	t11 = (x97%((x98%x99)*x100));

	if (t11 != 243207LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x103 = INT64_MIN;

	t12 = (x101%((x102%x103)*x104));

	if (t12 != 335753600LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 1101317452913571LLU;
	volatile int16_t x108 = INT16_MAX;
	uint64_t t13 = 10376100736246440LLU;

	t13 = (x105%((x106%x107)*x108));

	if (t13 != 8LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x109 = 246648483U;
	static uint16_t x110 = 10223U;
	uint16_t x111 = UINT16_MAX;
	volatile uint32_t x112 = UINT32_MAX;
	uint32_t t14 = 309396U;

	t14 = (x109%((x110%x111)*x112));

	if (t14 != 246648483U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x114 = -12611526629985LL;
	static volatile uint32_t x115 = 116540U;
	volatile int64_t x116 = -8052LL;
	volatile int64_t t15 = 0LL;

	t15 = (x113%((x114%x115)*x116));

	if (t15 != 11LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x117 = 0;
	int16_t x118 = INT16_MIN;
	static volatile int8_t x120 = -1;
	uint32_t t16 = 88365U;

	t16 = (x117%((x118%x119)*x120));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x121 = UINT16_MAX;
	static int16_t x122 = -38;
	int16_t x123 = INT16_MAX;
	volatile int8_t x124 = INT8_MAX;
	int32_t t17 = -100333;

	t17 = (x121%((x122%x123)*x124));

	if (t17 != 2797) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x125 = INT32_MAX;
	static int8_t x126 = INT8_MIN;
	uint8_t x127 = 12U;
	uint64_t x128 = 46795455961LLU;
	volatile uint64_t t18 = 1LLU;

	t18 = (x125%((x126%x127)*x128));

	if (t18 != 2147483647LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = 209U;
	static uint16_t x136 = 83U;
	static int64_t t19 = -4492LL;

	t19 = (x133%((x134%x135)*x136));

	if (t19 != -4749LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = -1;
	int64_t x139 = INT64_MIN;
	int64_t x140 = -1LL;
	volatile int64_t t20 = 63420783117317LL;

	t20 = (x137%((x138%x139)*x140));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x141 = INT8_MIN;
	static int16_t x142 = -69;
	uint64_t x143 = UINT64_MAX;
	int16_t x144 = INT16_MAX;
	volatile uint64_t t21 = 195414LLU;

	t21 = (x141%((x142%x143)*x144));

	if (t21 != 2260795LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 1518U;
	volatile int8_t x147 = INT8_MAX;
	int32_t x148 = -62358;

	t22 = (x145%((x146%x147)*x148));

	if (t22 != 7512550U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int64_t x151 = 5LL;
	uint32_t x152 = UINT32_MAX;

	t23 = (x149%((x150%x151)*x152));

	if (t23 != 4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = INT8_MIN;
	volatile int32_t x154 = -7709;
	uint16_t x155 = UINT16_MAX;
	static uint64_t x156 = 333178LLU;

	t24 = (x153%((x154%x155)*x156));

	if (t24 != 2568469074LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x159 = UINT16_MAX;
	static uint8_t x160 = UINT8_MAX;

	t25 = (x157%((x158%x159)*x160));

	if (t25 != 33022) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x169 = -1;
	uint8_t x170 = 1U;
	volatile int32_t x172 = INT32_MAX;
	uint64_t t26 = 2228511017847LLU;

	t26 = (x169%((x170%x171)*x172));

	if (t26 != 3LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x177 = -1;
	int8_t x178 = -1;
	int32_t x179 = INT32_MAX;
	uint32_t x180 = 3U;
	static uint32_t t27 = 62801836U;

	t27 = (x177%((x178%x179)*x180));

	if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x181 = -1;
	static uint32_t x182 = 109U;
	int32_t x184 = INT32_MAX;
	int64_t t28 = 27763681942405467LL;

	t28 = (x181%((x182%x183)*x184));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = INT8_MIN;
	static int32_t x186 = -24;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = INT8_MIN;
	volatile uint32_t t29 = 180U;

	t29 = (x185%((x186%x187)*x188));

	if (t29 != 896U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x189 = INT8_MIN;
	volatile int16_t x190 = INT16_MIN;
	uint16_t x191 = 3U;
	int64_t x192 = 6226058238812LL;
	int64_t t30 = 213824098317477LL;

	t30 = (x189%((x190%x191)*x192));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x193 = -1;
	uint16_t x194 = 10U;
	int8_t x195 = 7;
	uint64_t x196 = 557351910353334LLU;

	t31 = (x193%((x194%x195)*x196));

	if (t31 != 625248655609551LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x197 = 5492404U;
	uint8_t x198 = 6U;
	static uint16_t x199 = 18U;
	int64_t x200 = 937758796LL;
	volatile int64_t t32 = 513334LL;

	t32 = (x197%((x198%x199)*x200));

	if (t32 != 5492404LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x205 = 2;
	uint64_t x206 = 92681546011905000LLU;
	volatile int16_t x207 = INT16_MIN;
	int64_t x208 = 991LL;
	uint64_t t33 = 35815401645LLU;

	t33 = (x205%((x206%x207)*x208));

	if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x217 = 13197830022493293LLU;
	int32_t x218 = -54235327;
	int16_t x219 = -3;
	int16_t x220 = 101;
	static uint64_t t34 = 32360510002967LLU;

	t34 = (x217%((x218%x219)*x220));

	if (t34 != 13197830022493293LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = INT8_MAX;
	uint8_t x230 = 30U;
	static uint64_t x231 = UINT64_MAX;
	int32_t x232 = INT32_MIN;
	uint64_t t35 = 5858417LLU;

	t35 = (x229%((x230%x231)*x232));

	if (t35 != 127LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x241 = UINT64_MAX;
	static uint16_t x242 = 2U;
	int16_t x243 = 578;
	int32_t x244 = 1;
	volatile uint64_t t36 = 1175828925LLU;

	t36 = (x241%((x242%x243)*x244));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x245 = UINT8_MAX;
	volatile uint64_t x248 = UINT64_MAX;
	uint64_t t37 = 7565994424351715746LLU;

	t37 = (x245%((x246%x247)*x248));

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x249 = INT64_MAX;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = 192U;
	volatile int64_t t38 = -254617403LL;

	t38 = (x249%((x250%x251)*x252));

	if (t38 != 511LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x253 = -22;
	int64_t x254 = -409600LL;
	uint32_t x255 = UINT32_MAX;
	int64_t x256 = -37681LL;
	static volatile int64_t t39 = -1079916092234619LL;

	t39 = (x253%((x254%x255)*x256));

	if (t39 != -22LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x257 = INT8_MIN;
	volatile uint32_t x260 = 47384531U;
	uint64_t t40 = 9080313LLU;

	t40 = (x257%((x258%x259)*x260));

	if (t40 != 6065219840LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x265 = UINT16_MAX;
	static uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MIN;
	volatile int64_t x268 = -1LL;
	volatile int64_t t41 = 722332870LL;

	t41 = (x265%((x266%x267)*x268));

	if (t41 != 3LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x269 = INT8_MAX;
	static int8_t x271 = -18;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t42 = 2147223396LLU;

	t42 = (x269%((x270%x271)*x272));

	if (t42 != 127LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x273 = INT64_MIN;
	static uint64_t x274 = 221138110973421LLU;
	uint64_t t43 = 6LLU;

	t43 = (x273%((x274%x275)*x276));

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x277 = INT16_MAX;
	static int64_t x278 = -1LL;
	int64_t x279 = -186604LL;
	static volatile int64_t t44 = 445LL;

	t44 = (x277%((x278%x279)*x280));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x281 = INT16_MAX;
	int32_t x284 = INT32_MIN;
	uint64_t t45 = 85393LLU;

	t45 = (x281%((x282%x283)*x284));

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x290 = -1;
	static int32_t x291 = INT32_MAX;
	volatile int32_t t46 = 3574621;

	t46 = (x289%((x290%x291)*x292));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x294 = INT32_MIN;
	uint8_t x296 = UINT8_MAX;
	uint64_t t47 = 23612606515LLU;

	t47 = (x293%((x294%x295)*x296));

	if (t47 != 6524827714899358205LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x297 = -3027565;
	volatile int8_t x299 = -57;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t48 = 390;

	t48 = (x297%((x298%x299)*x300));

	if (t48 != -3027565) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x301 = 2;
	int64_t x302 = 1372926580LL;
	int32_t x303 = INT32_MIN;
	static int8_t x304 = -23;
	volatile int64_t t49 = -2795032582668426297LL;

	t49 = (x301%((x302%x303)*x304));

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x305 = 27044744476LLU;
	static uint16_t x306 = 19850U;
	uint8_t x308 = 7U;
	volatile uint64_t t50 = 1144LLU;

	t50 = (x305%((x306%x307)*x308));

	if (t50 != 72276LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x314 = INT16_MIN;
	int64_t x315 = 68558776630549LL;
	int16_t x316 = -27;
	volatile int64_t t51 = -39860207LL;

	t51 = (x313%((x314%x315)*x316));

	if (t51 != 104LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MIN;
	volatile int64_t x319 = 915524364150255408LL;
	int8_t x320 = INT8_MIN;
	volatile int64_t t52 = 904982185LL;

	t52 = (x317%((x318%x319)*x320));

	if (t52 != 32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x321 = INT8_MAX;
	int16_t x322 = INT16_MAX;
	static volatile int16_t x324 = 8;
	int64_t t53 = 458023839LL;

	t53 = (x321%((x322%x323)*x324));

	if (t53 != 127LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x335 = INT32_MAX;
	uint32_t x336 = 23U;
	volatile uint32_t t54 = 49280136U;

	t54 = (x333%((x334%x335)*x336));

	if (t54 != 2943U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x337 = UINT32_MAX;
	int64_t x338 = INT64_MIN;
	volatile int16_t x339 = INT16_MAX;
	volatile int64_t t55 = -45618502110LL;

	t55 = (x337%((x338%x339)*x340));

	if (t55 != 7LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x341 = -18LL;
	static int16_t x342 = INT16_MAX;
	static uint64_t x343 = UINT64_MAX;
	int16_t x344 = -1;
	volatile uint64_t t56 = 3632LLU;

	t56 = (x341%((x342%x343)*x344));

	if (t56 != 32749LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MIN;
	volatile uint8_t x347 = 76U;
	volatile int64_t t57 = -8527169866LL;

	t57 = (x345%((x346%x347)*x348));

	if (t57 != -8LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x354 = INT16_MAX;
	static uint8_t x355 = 4U;
	int8_t x356 = INT8_MIN;
	static int32_t t58 = 6232;

	t58 = (x353%((x354%x355)*x356));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x357 = -1;
	volatile int16_t x358 = INT16_MIN;
	int64_t x359 = -3741252194LL;
	int32_t x360 = 427;
	volatile int64_t t59 = 95136144850LL;

	t59 = (x357%((x358%x359)*x360));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x361 = INT32_MIN;
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = INT64_MIN;
	int64_t t60 = 1572430535529848LL;

	t60 = (x361%((x362%x363)*x364));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x365 = 8U;
	int32_t x366 = INT32_MIN;
	volatile uint8_t x367 = 23U;
	volatile int8_t x368 = INT8_MAX;
	volatile int32_t t61 = -380036;

	t61 = (x365%((x366%x367)*x368));

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x373 = -1;
	int32_t x374 = -141604;
	int64_t x375 = INT64_MIN;
	static volatile int16_t x376 = INT16_MIN;
	volatile int64_t t62 = 375752038LL;

	t62 = (x373%((x374%x375)*x376));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x377 = 648;
	volatile int32_t x378 = -462;
	int32_t t63 = -14128;

	t63 = (x377%((x378%x379)*x380));

	if (t63 != 186) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x381 = UINT64_MAX;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = INT64_MIN;

	t64 = (x381%((x382%x383)*x384));

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x385 = -261184498551LL;
	int8_t x386 = INT8_MIN;
	int32_t x387 = -3;
	int16_t x388 = INT16_MAX;
	static int64_t t65 = 0LL;

	t65 = (x385%((x386%x387)*x388));

	if (t65 != -52231LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x389 = INT16_MIN;
	volatile uint8_t x390 = UINT8_MAX;
	static int8_t x391 = INT8_MAX;
	int32_t t66 = 1505570;

	t66 = (x389%((x390%x391)*x392));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x397 = INT16_MIN;
	uint32_t x398 = 109842U;
	static int32_t x399 = INT32_MIN;
	static uint16_t x400 = 381U;
	volatile uint32_t t67 = 209791436U;

	t67 = (x397%((x398%x399)*x400));

	if (t67 != 26254724U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x401 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	static volatile int64_t t68 = -1413739806879506LL;

	t68 = (x401%((x402%x403)*x404));

	if (t68 != -1532LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x405 = INT32_MAX;
	volatile int16_t x406 = -1;
	static int32_t x408 = -1944;
	static int32_t t69 = -499849178;

	t69 = (x405%((x406%x407)*x408));

	if (t69 != 1279) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x409 = INT32_MIN;
	uint32_t x410 = UINT32_MAX;
	volatile int32_t x411 = INT32_MAX;
	int8_t x412 = INT8_MIN;
	uint32_t t70 = 96916044U;

	t70 = (x409%((x410%x411)*x412));

	if (t70 != 2147483648U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x413 = INT32_MAX;
	uint16_t x414 = 8148U;
	int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MAX;
	int32_t t71 = 128410485;

	t71 = (x413%((x414%x415)*x416));

	if (t71 != 7) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x429 = INT64_MAX;
	int32_t x430 = INT32_MAX;
	static int8_t x432 = -1;

	t72 = (x429%((x430%x431)*x432));

	if (t72 != 7LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x437 = 281U;
	uint64_t x438 = 3716982314154355889LLU;
	static int8_t x439 = -1;
	uint32_t x440 = 60U;
	uint64_t t73 = 3LLU;

	t73 = (x437%((x438%x439)*x440));

	if (t73 != 281LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x441 = 0;
	int32_t x442 = INT32_MIN;
	int64_t x443 = INT64_MIN;
	volatile int16_t x444 = INT16_MAX;
	static int64_t t74 = 327552LL;

	t74 = (x441%((x442%x443)*x444));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x453 = 2;
	int8_t x455 = INT8_MAX;
	int32_t x456 = INT32_MAX;
	volatile uint64_t t75 = 324077750035LLU;

	t75 = (x453%((x454%x455)*x456));

	if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x457 = 1;
	int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MIN;

	t76 = (x457%((x458%x459)*x460));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x461 = 102U;
	int8_t x462 = INT8_MIN;
	uint64_t x463 = 2371045278442863LLU;
	static int64_t x464 = -540LL;
	volatile uint64_t t77 = 4728539537668LLU;

	t77 = (x461%((x462%x463)*x464));

	if (t77 != 102LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x465 = 13U;
	volatile int8_t x466 = INT8_MIN;
	static volatile int8_t x467 = 7;
	volatile int32_t t78 = 87153;

	t78 = (x465%((x466%x467)*x468));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x470 = UINT16_MAX;
	int8_t x471 = INT8_MIN;
	int32_t t79 = -7193;

	t79 = (x469%((x470%x471)*x472));

	if (t79 != 9) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x473 = 3U;
	uint64_t x474 = 322LLU;
	static volatile int32_t x475 = INT32_MAX;
	int32_t x476 = 568;
	static volatile uint64_t t80 = 63954LLU;

	t80 = (x473%((x474%x475)*x476));

	if (t80 != 3LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x481 = 1023309556091LL;
	int64_t x482 = INT64_MIN;
	uint8_t x483 = 10U;
	int16_t x484 = INT16_MAX;
	int64_t t81 = 529979569362081615LL;

	t81 = (x481%((x482%x483)*x484));

	if (t81 != 78131LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x489 = INT32_MIN;
	volatile int32_t x490 = INT32_MIN;
	int8_t x492 = INT8_MAX;
	int64_t t82 = -409280808958LL;

	t82 = (x489%((x490%x491)*x492));

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x493 = -1161346;
	static int8_t x494 = 30;
	volatile uint64_t x495 = 21563506581527LLU;
	static volatile int8_t x496 = -1;
	volatile uint64_t t83 = 48162920664LLU;

	t83 = (x493%((x494%x495)*x496));

	if (t83 != 18446744073708390270LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x502 = INT64_MAX;
	static int64_t x504 = INT64_MIN;
	int64_t t84 = 6956867643217LL;

	t84 = (x501%((x502%x503)*x504));

	if (t84 != -3LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x505 = -5897706;
	int64_t x506 = -1022152507248LL;
	int64_t x507 = INT64_MAX;
	int64_t t85 = 104060013367276155LL;

	t85 = (x505%((x506%x507)*x508));

	if (t85 != -5897706LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x509 = -1;
	uint16_t x510 = 855U;
	static uint8_t x511 = 67U;
	int64_t x512 = -1LL;
	volatile int64_t t86 = 2LL;

	t86 = (x509%((x510%x511)*x512));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x513 = INT64_MAX;
	int16_t x514 = 1;
	static volatile int8_t x515 = INT8_MIN;
	static int8_t x516 = INT8_MIN;

	t87 = (x513%((x514%x515)*x516));

	if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x517 = -2393786;
	int16_t x518 = 907;
	int32_t x519 = INT32_MIN;
	volatile uint32_t t88 = 5177U;

	t88 = (x517%((x518%x519)*x520));

	if (t88 != 679982926U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x521 = UINT8_MAX;
	static int64_t x523 = -108407LL;
	volatile int16_t x524 = INT16_MIN;
	static int64_t t89 = 171021LL;

	t89 = (x521%((x522%x523)*x524));

	if (t89 != 255LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x525 = -1;
	int8_t x526 = INT8_MIN;
	uint64_t x527 = UINT64_MAX;

	t90 = (x525%((x526%x527)*x528));

	if (t90 != 7059990015LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x533 = INT16_MIN;
	int16_t x534 = -1;
	volatile int64_t x535 = INT64_MAX;
	int8_t x536 = INT8_MAX;
	int64_t t91 = -34971236216718LL;

	t91 = (x533%((x534%x535)*x536));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x541 = 523201LLU;
	int64_t x542 = -54LL;
	static int8_t x543 = INT8_MAX;
	int8_t x544 = 47;
	uint64_t t92 = 1904841106115071438LLU;

	t92 = (x541%((x542%x543)*x544));

	if (t92 != 523201LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x545 = 310080771261798LLU;
	int8_t x546 = INT8_MAX;
	int32_t x547 = INT32_MIN;
	uint32_t x548 = 823324U;

	t93 = (x545%((x546%x547)*x548));

	if (t93 != 48373430LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x553 = INT8_MAX;
	int16_t x554 = 49;
	int16_t x555 = INT16_MIN;
	uint8_t x556 = 71U;

	t94 = (x553%((x554%x555)*x556));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x557 = UINT64_MAX;
	int64_t x558 = INT64_MIN;
	static uint64_t t95 = 26607187692474LLU;

	t95 = (x557%((x558%x559)*x560));

	if (t95 != 6912661647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x561 = 8U;
	int8_t x562 = INT8_MIN;
	int8_t x563 = 20;
	volatile int32_t t96 = -186745304;

	t96 = (x561%((x562%x563)*x564));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x566 = INT32_MAX;
	uint64_t x567 = 8502812099LLU;
	int16_t x568 = -54;
	volatile uint64_t t97 = 134366236753LLU;

	t97 = (x565%((x566%x567)*x568));

	if (t97 != 60LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x569 = INT64_MIN;
	static int32_t x572 = -1;
	int64_t t98 = 68LL;

	t98 = (x569%((x570%x571)*x572));

	if (t98 != -58666112LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x581 = 99LL;
	volatile uint64_t x582 = 90398879721944LLU;

	t99 = (x581%((x582%x583)*x584));

	if (t99 != 99LLU) { NG(); } else { ; }
	
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

