#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = UINT8_MAX;
static int32_t x12 = INT32_MAX;
int64_t t2 = 5332LL;
int64_t x13 = -1LL;
volatile int32_t x15 = -1;
int8_t x27 = -5;
int8_t x30 = INT8_MIN;
int32_t x32 = -22;
static int32_t x35 = INT32_MIN;
static int8_t x37 = INT8_MIN;
int8_t x38 = 2;
static volatile uint32_t x39 = 4524540U;
static int16_t x40 = -5;
uint8_t x50 = 4U;
static int64_t x51 = INT64_MAX;
static uint64_t x56 = 69001LLU;
uint8_t x63 = 13U;
int64_t t13 = 2256527900LL;
uint32_t x85 = UINT32_MAX;
uint64_t x87 = UINT64_MAX;
uint32_t x103 = UINT32_MAX;
static uint64_t x104 = UINT64_MAX;
volatile uint8_t x119 = 10U;
int8_t x125 = -1;
int8_t x126 = INT8_MAX;
int8_t x130 = 6;
volatile uint16_t x132 = 5072U;
int64_t x150 = -2744LL;
volatile int64_t t26 = 1368525298LL;
uint64_t x172 = UINT64_MAX;
int16_t x197 = -36;
int16_t x213 = -1;
volatile int8_t x215 = -1;
uint64_t x222 = 503543974189LLU;
int64_t x230 = -1LL;
uint8_t x235 = 5U;
int64_t x254 = INT64_MIN;
uint8_t x288 = 7U;
int64_t x289 = INT64_MAX;
int8_t x290 = -1;
static uint32_t x291 = UINT32_MAX;
volatile int64_t t47 = -8628904435LL;
volatile int8_t x295 = INT8_MIN;
volatile int64_t t48 = -3235153905754850LL;
uint16_t x301 = UINT16_MAX;
int8_t x304 = INT8_MIN;
int8_t x306 = INT8_MIN;
int32_t x308 = INT32_MAX;
int64_t x309 = -1LL;
int64_t x310 = INT64_MIN;
uint16_t x312 = 1U;
uint32_t x313 = 1379U;
volatile uint32_t x316 = 1887740616U;
uint64_t x324 = UINT64_MAX;
static int64_t t55 = -14449685743689141LL;
int8_t x339 = -1;
int16_t x341 = -3;
int8_t x350 = -1;
uint8_t x351 = 11U;
static volatile int64_t x353 = INT64_MAX;
volatile uint64_t t61 = 1041964866093304281LLU;
volatile int32_t x358 = -1;
uint64_t x360 = 1939199872089471LLU;
static int64_t x370 = INT64_MIN;
uint32_t x371 = 7707693U;
volatile int32_t x372 = -909;
int32_t x386 = 199;
int8_t x405 = INT8_MAX;
volatile int32_t t70 = -43;
int16_t x425 = INT16_MIN;
int16_t x438 = -1;
uint64_t t73 = 26994756871LLU;
int8_t x442 = INT8_MIN;
volatile int8_t x445 = -1;
static int8_t x462 = -1;
uint8_t x464 = 9U;
volatile uint64_t x476 = 59781LLU;
uint64_t t80 = 1014LLU;
int64_t x485 = INT64_MIN;
volatile uint64_t t81 = 8014LLU;
volatile uint64_t t83 = 131218109766657LLU;
uint64_t x508 = UINT64_MAX;
volatile uint64_t t84 = 8533611040LLU;
int32_t x509 = -1;
volatile uint64_t t87 = 3585540408280871LLU;
int64_t x526 = INT64_MAX;
uint64_t t91 = 1612518278722519LLU;
uint32_t x554 = 176U;
int16_t x555 = INT16_MAX;
uint16_t x559 = UINT16_MAX;
uint32_t x561 = UINT32_MAX;
static int16_t x569 = -1;
int8_t x570 = INT8_MAX;
uint16_t x583 = 3U;
int8_t x585 = INT8_MAX;
volatile int64_t x586 = 19531655078LL;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int64_t x2 = -1LL;
	int32_t x3 = 30264;
	int64_t x4 = 29LL;
	int64_t t0 = -2092804LL;

	t0 = (x1&(x2/(x3*x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint64_t x6 = UINT64_MAX;
	uint32_t x8 = 287585578U;
	uint64_t t1 = 689917613432198834LLU;

	t1 = (x5&(x6/(x7*x8)));

	if (t1 != 1833421789LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MIN;
	volatile int16_t x11 = -1;

	t2 = (x9&(x10/(x11*x12)));

	if (t2 != 4294967298LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 0U;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 56365247LLU;

	t3 = (x13&(x14/(x15*x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 5LLU;
	static int16_t x22 = 393;
	static int16_t x23 = INT16_MAX;
	uint16_t x24 = 2U;
	uint64_t t4 = 1767163094376212557LLU;

	t4 = (x21&(x22/(x23*x24)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	int64_t x26 = -7385141LL;
	int32_t x28 = -1;
	volatile int64_t t5 = 7478813LL;

	t5 = (x25&(x26/(x27*x28)));

	if (t5 != 30300LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 61892128790252LL;
	static volatile int8_t x31 = INT8_MIN;
	volatile int64_t t6 = -3926570793425138LL;

	t6 = (x29&(x30/(x31*x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -1;
	static uint64_t x34 = 9LLU;
	uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 883938664LLU;

	t7 = (x33&(x34/(x35*x36)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t t8 = 9408654U;

	t8 = (x37&(x38/(x39*x40)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 527871157LL;
	int16_t x42 = -1;
	volatile int16_t x43 = -2;
	int8_t x44 = INT8_MAX;
	volatile int64_t t9 = 20683315026LL;

	t9 = (x41&(x42/(x43*x44)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -1;
	int8_t x52 = -1;
	int64_t t10 = 165175LL;

	t10 = (x49&(x50/(x51*x52)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = 13;
	int16_t x54 = 1047;
	volatile int16_t x55 = INT16_MAX;
	static volatile uint64_t t11 = 2314152879688LLU;

	t11 = (x53&(x54/(x55*x56)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 5U;
	volatile int32_t x58 = INT32_MAX;
	static int16_t x59 = INT16_MIN;
	static volatile int8_t x60 = 1;
	static volatile int32_t t12 = -2;

	t12 = (x57&(x58/(x59*x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 643877561288797754LL;
	int64_t x62 = INT64_MIN;
	static volatile uint32_t x64 = 8759U;

	t13 = (x61&(x62/(x63*x64)));

	if (t13 != 643876277024073786LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = 1;
	int32_t x66 = INT32_MIN;
	volatile int8_t x67 = -1;
	int8_t x68 = INT8_MAX;
	int32_t t14 = 7479;

	t14 = (x65&(x66/(x67*x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MIN;
	volatile int16_t x74 = 11969;
	uint8_t x75 = 3U;
	uint64_t x76 = 8LLU;
	volatile uint64_t t15 = 1760639075LLU;

	t15 = (x73&(x74/(x75*x76)));

	if (t15 != 384LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x77 = 96U;
	uint8_t x78 = 9U;
	uint16_t x79 = 1U;
	int32_t x80 = -29116;
	int32_t t16 = -63719392;

	t16 = (x77&(x78/(x79*x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	int32_t x82 = 1183248;
	volatile int64_t x83 = -129461200357LL;
	volatile int32_t x84 = 2375279;
	int64_t t17 = -1377463616547LL;

	t17 = (x81&(x82/(x83*x84)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x86 = -1373;
	volatile uint32_t x88 = 11U;
	static volatile uint64_t t18 = 29468LLU;

	t18 = (x85&(x86/(x87*x88)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = 107;
	volatile int16_t x94 = INT16_MAX;
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = -1;
	static int32_t t19 = -172720893;

	t19 = (x93&(x94/(x95*x96)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 18;
	int8_t x102 = INT8_MAX;
	volatile uint64_t t20 = 1LLU;

	t20 = (x101&(x102/(x103*x104)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = -117952;
	uint16_t x118 = 10015U;
	uint64_t x120 = 552LLU;
	uint64_t t21 = 10653039LLU;

	t21 = (x117&(x118/(x119*x120)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = UINT32_MAX;
	static uint32_t t22 = 1473397U;

	t22 = (x125&(x126/(x127*x128)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x129 = INT64_MIN;
	uint8_t x131 = 31U;
	volatile int64_t t23 = 15720427768LL;

	t23 = (x129&(x130/(x131*x132)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x133 = 21750U;
	static uint64_t x134 = 17525LLU;
	int16_t x135 = -1;
	int8_t x136 = INT8_MIN;
	static uint64_t t24 = 9078331521LLU;

	t24 = (x133&(x134/(x135*x136)));

	if (t24 != 128LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x137 = 25U;
	uint8_t x138 = 1U;
	volatile int16_t x139 = INT16_MIN;
	int8_t x140 = -1;
	int32_t t25 = -1;

	t25 = (x137&(x138/(x139*x140)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x149 = 54U;
	volatile uint32_t x151 = 3104U;
	uint8_t x152 = UINT8_MAX;

	t26 = (x149&(x150/(x151*x152)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x161 = UINT32_MAX;
	int16_t x162 = 1;
	volatile int64_t x163 = 1LL;
	uint32_t x164 = 25U;
	volatile int64_t t27 = -947508556207029LL;

	t27 = (x161&(x162/(x163*x164)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x169 = INT32_MIN;
	volatile int16_t x170 = INT16_MAX;
	int64_t x171 = -682002966904690LL;
	uint64_t t28 = 11LLU;

	t28 = (x169&(x170/(x171*x172)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x185 = INT16_MIN;
	uint64_t x186 = 683390292137134808LLU;
	uint32_t x187 = 1100U;
	int32_t x188 = -7910;
	volatile uint64_t t29 = 123981540739769268LLU;

	t29 = (x185&(x186/(x187*x188)));

	if (t29 != 159416320LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x189 = 623501888892688LLU;
	int32_t x190 = 1573;
	static int64_t x191 = -1LL;
	int8_t x192 = INT8_MIN;
	uint64_t t30 = 2LLU;

	t30 = (x189&(x190/(x191*x192)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x193 = 1U;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = 1104247615286054375LLU;
	volatile int64_t x196 = INT64_MIN;
	static volatile uint64_t t31 = 3607661965263LLU;

	t31 = (x193&(x194/(x195*x196)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x198 = 62660490U;
	volatile uint8_t x199 = UINT8_MAX;
	uint64_t x200 = 2029705LLU;
	volatile uint64_t t32 = 41201515512110755LLU;

	t32 = (x197&(x198/(x199*x200)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x201 = 5636090224062420611LLU;
	int8_t x202 = INT8_MAX;
	volatile uint8_t x203 = 1U;
	int32_t x204 = -12322;
	volatile uint64_t t33 = 91040667LLU;

	t33 = (x201&(x202/(x203*x204)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x209 = -6;
	static int8_t x210 = 53;
	volatile uint32_t x211 = UINT32_MAX;
	volatile int32_t x212 = INT32_MIN;
	uint32_t t34 = 11080U;

	t34 = (x209&(x210/(x211*x212)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x214 = INT64_MAX;
	uint32_t x216 = UINT32_MAX;
	int64_t t35 = INT64_MAX;

	t35 = (x213&(x214/(x215*x216)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x217 = INT8_MIN;
	static volatile int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	static uint64_t x220 = 79498778600827367LLU;
	volatile uint64_t t36 = 1894940868955LLU;

	t36 = (x217&(x218/(x219*x220)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x221 = 2U;
	static volatile uint8_t x223 = UINT8_MAX;
	uint16_t x224 = 1U;
	volatile uint64_t t37 = 2741020486201132LLU;

	t37 = (x221&(x222/(x223*x224)));

	if (t37 != 2LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x229 = INT8_MIN;
	static int16_t x231 = INT16_MIN;
	uint32_t x232 = 12811U;
	int64_t t38 = 0LL;

	t38 = (x229&(x230/(x231*x232)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x233 = 590LL;
	static volatile int32_t x234 = INT32_MIN;
	int64_t x236 = 28969176514051LL;
	volatile int64_t t39 = -1243457681248087069LL;

	t39 = (x233&(x234/(x235*x236)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x241 = -1;
	static int32_t x242 = -1;
	int8_t x243 = INT8_MAX;
	static int16_t x244 = INT16_MAX;
	volatile int32_t t40 = -23;

	t40 = (x241&(x242/(x243*x244)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x249 = INT16_MAX;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = 614576;
	int32_t x252 = -1;
	volatile uint32_t t41 = 3786655U;

	t41 = (x249&(x250/(x251*x252)));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x253 = INT32_MIN;
	int16_t x255 = -6243;
	uint32_t x256 = 99197U;
	static int64_t t42 = -203627912931125LL;

	t42 = (x253&(x254/(x255*x256)));

	if (t42 != -4294967296LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x257 = -1;
	static int16_t x258 = INT16_MAX;
	uint16_t x259 = 3155U;
	uint8_t x260 = UINT8_MAX;
	int32_t t43 = -6;

	t43 = (x257&(x258/(x259*x260)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x269 = -1;
	int8_t x270 = 22;
	uint64_t x271 = 3LLU;
	volatile int64_t x272 = 7212091842LL;
	volatile uint64_t t44 = 10823734027223058LLU;

	t44 = (x269&(x270/(x271*x272)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x277 = -1;
	static int16_t x278 = 238;
	static int32_t x279 = INT32_MIN;
	uint16_t x280 = 1U;
	volatile int32_t t45 = 0;

	t45 = (x277&(x278/(x279*x280)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x285 = 78U;
	int16_t x286 = INT16_MAX;
	volatile int16_t x287 = -22;
	volatile int32_t t46 = -74065617;

	t46 = (x285&(x286/(x287*x288)));

	if (t46 != 12) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x292 = INT32_MIN;

	t47 = (x289&(x290/(x291*x292)));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x293 = INT64_MIN;
	static int64_t x294 = INT64_MIN;
	int16_t x296 = INT16_MAX;

	t48 = (x293&(x294/(x295*x296)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MIN;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;
	volatile uint32_t t49 = 1110198078U;

	t49 = (x297&(x298/(x299*x300)));

	if (t49 != 131071U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x302 = 2U;
	volatile uint64_t x303 = 1238030LLU;
	volatile uint64_t t50 = 5LLU;

	t50 = (x301&(x302/(x303*x304)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x305 = INT64_MAX;
	uint32_t x307 = 21U;
	volatile int64_t t51 = -14LL;

	t51 = (x305&(x306/(x307*x308)));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x311 = -51546424172LL;
	volatile int64_t t52 = 117233585861330379LL;

	t52 = (x309&(x310/(x311*x312)));

	if (t52 != 178933304LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x314 = -1;
	int32_t x315 = -1;
	uint32_t t53 = 4U;

	t53 = (x313&(x314/(x315*x316)));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x321 = -1LL;
	uint16_t x322 = 14U;
	int32_t x323 = INT32_MIN;
	uint64_t t54 = 569573016594567LLU;

	t54 = (x321&(x322/(x323*x324)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x325 = INT32_MAX;
	int64_t x326 = -66692442115LL;
	int16_t x327 = INT16_MAX;
	int16_t x328 = 1;

	t55 = (x325&(x326/(x327*x328)));

	if (t55 != 2145448295LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x329 = -1;
	int64_t x330 = INT64_MIN;
	int32_t x331 = -1;
	static uint16_t x332 = UINT16_MAX;
	static volatile int64_t t56 = -18452446020145475LL;

	t56 = (x329&(x330/(x331*x332)));

	if (t56 != 140739635871744LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x333 = 125U;
	uint64_t x334 = 3255349789652442868LLU;
	int64_t x335 = INT64_MAX;
	volatile int64_t x336 = -1LL;
	volatile uint64_t t57 = 0LLU;

	t57 = (x333&(x334/(x335*x336)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x337 = INT32_MAX;
	int8_t x338 = INT8_MAX;
	int16_t x340 = -1;
	int32_t t58 = -39;

	t58 = (x337&(x338/(x339*x340)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x342 = INT64_MIN;
	int16_t x343 = 23;
	volatile int32_t x344 = 150550;
	static volatile int64_t t59 = -7806LL;

	t59 = (x341&(x342/(x343*x344)));

	if (t59 != -2663674364103LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x349 = -79LL;
	volatile int8_t x352 = 3;
	static int64_t t60 = 217270933664LL;

	t60 = (x349&(x350/(x351*x352)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x354 = 592079U;
	uint64_t x355 = UINT64_MAX;
	uint64_t x356 = 10198LLU;

	t61 = (x353&(x354/(x355*x356)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x357 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	uint64_t t62 = 78LLU;

	t62 = (x357&(x358/(x359*x360)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x361 = 95U;
	int8_t x362 = INT8_MAX;
	uint64_t x363 = 2412559218300478LLU;
	uint32_t x364 = 20326U;
	uint64_t t63 = 2LLU;

	t63 = (x361&(x362/(x363*x364)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x369 = INT8_MIN;
	volatile int64_t t64 = -20474471011035LL;

	t64 = (x369&(x370/(x371*x372)));

	if (t64 != -5824153472LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x373 = 21883U;
	uint32_t x374 = 52U;
	int32_t x375 = -1;
	int8_t x376 = INT8_MAX;
	volatile uint32_t t65 = 14668U;

	t65 = (x373&(x374/(x375*x376)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x377 = -1LL;
	int8_t x378 = 1;
	int32_t x379 = 3;
	uint32_t x380 = 5U;
	int64_t t66 = 27LL;

	t66 = (x377&(x378/(x379*x380)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x385 = INT16_MIN;
	static uint64_t x387 = 198841543LLU;
	uint8_t x388 = 56U;
	uint64_t t67 = 78LLU;

	t67 = (x385&(x386/(x387*x388)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = -1336;
	uint16_t x395 = 365U;
	volatile uint16_t x396 = 22U;
	int32_t t68 = 18973;

	t68 = (x393&(x394/(x395*x396)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;
	uint64_t t69 = 3409329347270LLU;

	t69 = (x405&(x406/(x407*x408)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x421 = 3U;
	int8_t x422 = INT8_MAX;
	int8_t x423 = INT8_MIN;
	int16_t x424 = 248;

	t70 = (x421&(x422/(x423*x424)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MAX;
	static uint64_t x428 = UINT64_MAX;
	static uint64_t t71 = 2119196496LLU;

	t71 = (x425&(x426/(x427*x428)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x429 = 4;
	static int16_t x430 = 410;
	volatile int64_t x431 = 1153565263LL;
	int32_t x432 = -1;
	volatile int64_t t72 = -1979773280269LL;

	t72 = (x429&(x430/(x431*x432)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x437 = INT16_MIN;
	uint64_t x439 = 5723937046843LLU;
	uint16_t x440 = 130U;

	t73 = (x437&(x438/(x439*x440)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x441 = INT16_MIN;
	uint64_t x443 = 1774597302721003875LLU;
	volatile int16_t x444 = -1;
	volatile uint64_t t74 = 1379445791LLU;

	t74 = (x441&(x442/(x443*x444)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x446 = INT32_MIN;
	static int16_t x447 = -3;
	int64_t x448 = -1LL;
	volatile int64_t t75 = -3449678859505907138LL;

	t75 = (x445&(x446/(x447*x448)));

	if (t75 != -715827882LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x449 = 3U;
	int32_t x450 = -1;
	uint16_t x451 = 4U;
	int32_t x452 = 4;
	static int32_t t76 = -184094;

	t76 = (x449&(x450/(x451*x452)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x461 = 1U;
	volatile int16_t x463 = INT16_MIN;
	int32_t t77 = -1;

	t77 = (x461&(x462/(x463*x464)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x465 = 81513789985648LLU;
	uint32_t x466 = 3U;
	int32_t x467 = -12349260;
	int16_t x468 = -1;
	volatile uint64_t t78 = 10037346848218405LLU;

	t78 = (x465&(x466/(x467*x468)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x469 = UINT8_MAX;
	volatile uint32_t x470 = UINT32_MAX;
	uint32_t x471 = 87645705U;
	int64_t x472 = 2404932LL;
	volatile int64_t t79 = 18410396LL;

	t79 = (x469&(x470/(x471*x472)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x473 = 71794446117LLU;
	volatile int8_t x474 = INT8_MAX;
	int64_t x475 = INT64_MAX;

	t80 = (x473&(x474/(x475*x476)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x486 = INT64_MIN;
	volatile uint64_t x487 = 9804574834LLU;
	volatile uint32_t x488 = 37U;

	t81 = (x485&(x486/(x487*x488)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x493 = INT64_MIN;
	static int8_t x494 = 0;
	static int8_t x495 = 44;
	uint32_t x496 = 2U;
	int64_t t82 = -5098693664817952LL;

	t82 = (x493&(x494/(x495*x496)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x501 = INT8_MAX;
	uint32_t x502 = 222275U;
	static uint64_t x503 = 5LLU;
	int8_t x504 = -1;

	t83 = (x501&(x502/(x503*x504)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x505 = 6095132705875LL;
	int16_t x506 = INT16_MIN;
	volatile int16_t x507 = INT16_MIN;

	t84 = (x505&(x506/(x507*x508)));

	if (t84 != 6095132705875LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x510 = 63481U;
	int8_t x511 = -6;
	static int8_t x512 = -1;
	static uint32_t t85 = 229506U;

	t85 = (x509&(x510/(x511*x512)));

	if (t85 != 10580U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x513 = UINT16_MAX;
	uint8_t x514 = 30U;
	int8_t x515 = INT8_MIN;
	int8_t x516 = -3;
	int32_t t86 = 8044;

	t86 = (x513&(x514/(x515*x516)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x517 = INT64_MAX;
	uint8_t x518 = 0U;
	int32_t x519 = INT32_MIN;
	uint64_t x520 = UINT64_MAX;

	t87 = (x517&(x518/(x519*x520)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x521 = INT32_MIN;
	uint64_t x522 = UINT64_MAX;
	uint32_t x523 = UINT32_MAX;
	volatile uint8_t x524 = UINT8_MAX;
	volatile uint64_t t88 = 14846473675545495LLU;

	t88 = (x521&(x522/(x523*x524)));

	if (t88 != 4294967296LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x525 = INT32_MIN;
	volatile uint8_t x527 = UINT8_MAX;
	int16_t x528 = INT16_MAX;
	volatile int64_t t89 = 8576675096LL;

	t89 = (x525&(x526/(x527*x528)));

	if (t89 != 1103806595072LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x529 = INT32_MIN;
	static uint64_t x530 = 1432LLU;
	static uint64_t x531 = 15231408780LLU;
	uint32_t x532 = 88390U;
	volatile uint64_t t90 = 14LLU;

	t90 = (x529&(x530/(x531*x532)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x533 = 5890796LLU;
	int32_t x534 = 2159544;
	static volatile uint64_t x535 = 189LLU;
	volatile uint16_t x536 = 209U;

	t91 = (x533&(x534/(x535*x536)));

	if (t91 != 36LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x541 = -1;
	int16_t x542 = -1;
	static uint32_t x543 = UINT32_MAX;
	uint8_t x544 = 75U;
	uint32_t t92 = 1531200U;

	t92 = (x541&(x542/(x543*x544)));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x553 = -1LL;
	int8_t x556 = -1;
	int64_t t93 = -67272LL;

	t93 = (x553&(x554/(x555*x556)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x557 = 16188936520523660LLU;
	volatile uint16_t x558 = 20119U;
	int16_t x560 = INT16_MAX;
	static volatile uint64_t t94 = 218321217568235LLU;

	t94 = (x557&(x558/(x559*x560)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x562 = -14202;
	uint16_t x563 = UINT16_MAX;
	volatile int8_t x564 = -1;
	uint32_t t95 = 4202U;

	t95 = (x561&(x562/(x563*x564)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x565 = -383;
	int32_t x566 = -1;
	volatile int16_t x567 = 138;
	int32_t x568 = -1;
	static volatile int32_t t96 = 0;

	t96 = (x565&(x566/(x567*x568)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x571 = 1937590550LLU;
	volatile int8_t x572 = INT8_MIN;
	volatile uint64_t t97 = 233694LLU;

	t97 = (x569&(x570/(x571*x572)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x581 = 27;
	int64_t x582 = INT64_MAX;
	uint8_t x584 = 14U;
	int64_t t98 = -22132904906LL;

	t98 = (x581&(x582/(x583*x584)));

	if (t98 != 8LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x587 = 6;
	int64_t x588 = -14590LL;
	volatile int64_t t99 = 17720164LL;

	t99 = (x585&(x586/(x587*x588)));

	if (t99 != 116LL) { NG(); } else { ; }
	
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

