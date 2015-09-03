#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = INT16_MAX;
uint64_t x24 = UINT64_MAX;
int16_t x33 = -1;
int32_t x34 = -1;
int8_t x46 = 52;
volatile uint64_t x49 = 326204LLU;
int16_t x52 = INT16_MAX;
int64_t x55 = 3618302LL;
static int32_t x75 = INT32_MIN;
volatile uint64_t t12 = 62217LLU;
static int16_t x83 = -1;
static int64_t x86 = 4316034651857LL;
uint8_t x87 = 6U;
int16_t x88 = 423;
volatile int32_t x93 = INT32_MAX;
static int32_t t15 = INT32_MAX;
volatile uint32_t x102 = 15U;
volatile uint64_t t17 = 8841943866727061LLU;
int32_t x105 = 8822;
uint8_t x107 = 5U;
static int32_t t18 = -3444;
int32_t x112 = -1609351;
int16_t x114 = INT16_MIN;
uint32_t x118 = UINT32_MAX;
int16_t x119 = 2;
static int16_t x130 = INT16_MAX;
uint64_t t23 = 377509997533474546LLU;
static volatile uint8_t x134 = 12U;
int16_t x138 = INT16_MIN;
static uint8_t x148 = UINT8_MAX;
int16_t x152 = -1;
int8_t x166 = INT8_MIN;
volatile int32_t t31 = -187369;
int64_t x173 = -1LL;
int64_t t32 = 558237051807631798LL;
static int16_t x177 = INT16_MIN;
static uint16_t x181 = UINT16_MAX;
int16_t x183 = -32;
uint32_t x187 = 107791U;
volatile int64_t t35 = 5LL;
volatile int16_t x194 = 0;
uint64_t x196 = 103039LLU;
int8_t x200 = -1;
uint8_t x205 = 7U;
int8_t x213 = 0;
static int64_t x214 = 27027242000582LL;
volatile int16_t x221 = -1;
uint64_t x227 = 2891265LLU;
int8_t x233 = INT8_MAX;
volatile uint32_t x236 = 171092498U;
static int64_t t45 = -40842794LL;
uint16_t x241 = 9366U;
int64_t x249 = INT64_MIN;
uint32_t x250 = 0U;
volatile uint32_t x251 = UINT32_MAX;
static volatile uint8_t x253 = 2U;
int64_t x259 = -836532159229787LL;
static int16_t x267 = INT16_MIN;
volatile int64_t t51 = -1260591815587368LL;
int16_t x283 = 4709;
int64_t x284 = -1LL;
volatile int32_t x294 = -1;
int8_t x296 = INT8_MIN;
int32_t t54 = 1;
volatile int64_t t56 = 479616215548LL;
int8_t x317 = INT8_MIN;
uint64_t x322 = UINT64_MAX;
uint64_t t59 = 184361778088234LLU;
int8_t x326 = -63;
int64_t x327 = -108373LL;
volatile uint16_t x341 = 159U;
uint32_t x353 = 27060U;
volatile int64_t t65 = -6319575603LL;
volatile uint32_t t67 = 1052731031U;
uint64_t x374 = 70LLU;
uint64_t x381 = 110LLU;
static uint32_t t74 = 0U;
int64_t x403 = -2214LL;
int8_t x405 = INT8_MIN;
uint8_t x414 = 77U;
static int64_t x415 = -364LL;
int16_t x431 = -131;
volatile int64_t t81 = -3LL;
int16_t x434 = INT16_MIN;
static volatile uint64_t t83 = 357530946LLU;
static uint64_t x477 = 15422213LLU;
int64_t x481 = -1LL;
uint32_t x483 = UINT32_MAX;
volatile int16_t x484 = -12;
uint64_t x485 = UINT64_MAX;
uint32_t x493 = 7U;
int8_t x494 = INT8_MIN;
static int16_t x502 = -1;
uint8_t x509 = 1U;
uint64_t t97 = 70024943898LLU;
int64_t t98 = 66925LL;
static uint32_t x522 = UINT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile int16_t x2 = 1;
	int32_t x3 = -1;
	volatile int32_t t0 = -186;

	t0 = (x1^(x2&(x3*x4)));

	if (t0 != 2147483646) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint32_t x6 = 0U;
	int32_t x7 = INT32_MAX;
	int64_t x8 = 432018LL;
	int64_t t1 = INT64_MIN;

	t1 = (x5^(x6&(x7*x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int64_t x10 = -1LL;
	static uint32_t x11 = 77U;
	static int8_t x12 = 9;
	static volatile int64_t t2 = 1LL;

	t2 = (x9^(x10&(x11*x12)));

	if (t2 != 4294966602LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static volatile uint64_t x14 = 7LLU;
	uint8_t x15 = 2U;
	static int8_t x16 = INT8_MAX;
	volatile uint64_t t3 = 389013337LLU;

	t3 = (x13^(x14&(x15*x16)));

	if (t3 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 8U;
	volatile int16_t x22 = INT16_MAX;
	int64_t x23 = 161165258LL;
	static uint64_t t4 = 283962847LLU;

	t4 = (x21^(x22&(x23*x24)));

	if (t4 != 20542LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 40U;
	int16_t x26 = 3812;
	uint32_t x27 = 4802137U;
	static int32_t x28 = -260324798;
	volatile uint32_t t5 = 11344350U;

	t5 = (x25^(x26&(x27*x28)));

	if (t5 != 1224U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x35 = -1;
	uint16_t x36 = UINT16_MAX;
	int32_t t6 = -1359;

	t6 = (x33^(x34&(x35*x36)));

	if (t6 != 65534) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 19929191231LLU;
	static volatile int64_t x38 = INT64_MIN;
	uint8_t x39 = UINT8_MAX;
	static int16_t x40 = -1;
	uint64_t t7 = 47272451503871LLU;

	t7 = (x37^(x38&(x39*x40)));

	if (t7 != 9223372056783967039LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	int32_t x47 = -471324;
	int16_t x48 = 0;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x45^(x46&(x47*x48)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x50 = INT16_MIN;
	uint32_t x51 = 658U;
	volatile uint64_t t9 = 1059787095810LLU;

	t9 = (x49^(x50&(x51*x52)));

	if (t9 != 21789244LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = -1;
	int32_t x54 = 4086;
	int32_t x56 = -13926;
	volatile int64_t t10 = -28LL;

	t10 = (x53^(x54&(x55*x56)));

	if (t10 != -2245LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 1014U;
	static uint32_t x62 = 3685767U;
	int64_t x63 = INT64_MIN;
	volatile uint64_t x64 = 5LLU;
	volatile uint64_t t11 = 0LLU;

	t11 = (x61^(x62&(x63*x64)));

	if (t11 != 1014LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x73 = 1U;
	uint8_t x74 = UINT8_MAX;
	uint64_t x76 = UINT64_MAX;

	t12 = (x73^(x74&(x75*x76)));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = INT32_MAX;
	int64_t x82 = INT64_MIN;
	uint32_t x84 = 49052500U;
	static volatile int64_t t13 = 47763920578LL;

	t13 = (x81^(x82&(x83*x84)));

	if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = INT64_MIN;
	int64_t t14 = 121LL;

	t14 = (x85^(x86&(x87*x88)));

	if (t14 != -9223372036854775616LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x94 = 10U;
	int8_t x95 = -31;
	volatile int8_t x96 = INT8_MIN;

	t15 = (x93^(x94&(x95*x96)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x97 = INT8_MIN;
	static volatile uint32_t x98 = 33998U;
	static uint64_t x99 = 541808870469223LLU;
	static uint32_t x100 = 1847858U;
	uint64_t t16 = 756259242538446180LLU;

	t16 = (x97^(x98&(x99*x100)));

	if (t16 != 18446744073709550478LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x101 = 959U;
	uint64_t x103 = UINT64_MAX;
	static uint8_t x104 = 13U;

	t17 = (x101^(x102&(x103*x104)));

	if (t17 != 956LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x106 = -1;
	int8_t x108 = 48;

	t18 = (x105^(x106&(x107*x108)));

	if (t18 != 8838) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x109 = 500331559434760992LL;
	static int64_t x110 = -1LL;
	int64_t x111 = 91234896LL;
	volatile int64_t t19 = -534823123922LL;

	t19 = (x109^(x110&(x111*x112)));

	if (t19 != -500195796737379088LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x113 = -1;
	uint64_t x115 = 48342913767250LLU;
	int8_t x116 = -10;
	volatile uint64_t t20 = 4719565LLU;

	t20 = (x113^(x114&(x115*x116)));

	if (t20 != 483429137678335LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = -390115264;
	static volatile uint32_t x120 = 103U;
	uint32_t t21 = 151045U;

	t21 = (x117^(x118&(x119*x120)));

	if (t21 != 3904852110U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = INT64_MAX;
	static int64_t x126 = -1LL;
	static uint16_t x127 = 234U;
	int32_t x128 = -3774364;
	int64_t t22 = -4664LL;

	t22 = (x125^(x126&(x127*x128)));

	if (t22 != -9223372035971574633LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x129 = 110136396U;
	uint64_t x131 = 70582071279918716LLU;
	volatile int16_t x132 = INT16_MIN;

	t23 = (x129^(x130&(x131*x132)));

	if (t23 != 110136396LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int8_t x135 = 46;
	uint8_t x136 = UINT8_MAX;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x133^(x134&(x135*x136)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x137 = -1;
	int8_t x139 = -1;
	volatile int64_t x140 = INT64_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x137^(x138&(x139*x140)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x145 = INT32_MIN;
	uint8_t x146 = 0U;
	volatile int16_t x147 = INT16_MAX;
	int32_t t26 = INT32_MIN;

	t26 = (x145^(x146&(x147*x148)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = -202392139754817298LL;
	uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = INT16_MAX;
	volatile uint64_t t27 = 3LLU;

	t27 = (x149^(x150&(x151*x152)));

	if (t27 != 202392139754813679LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x157 = INT16_MAX;
	uint8_t x158 = 6U;
	volatile int16_t x159 = -414;
	uint8_t x160 = 46U;
	int32_t t28 = 384047100;

	t28 = (x157^(x158&(x159*x160)));

	if (t28 != 32763) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x161 = 2;
	uint32_t x162 = 19028480U;
	int8_t x163 = -1;
	static int16_t x164 = INT16_MIN;
	volatile uint32_t t29 = 884804674U;

	t29 = (x161^(x162&(x163*x164)));

	if (t29 != 2U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x165 = INT64_MIN;
	uint64_t x167 = 50566012747LLU;
	static uint64_t x168 = UINT64_MAX;
	uint64_t t30 = 0LLU;

	t30 = (x165^(x166&(x167*x168)));

	if (t30 != 9223371986288763008LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = INT16_MIN;
	uint16_t x170 = 4U;
	int16_t x171 = 1563;
	int16_t x172 = INT16_MIN;

	t31 = (x169^(x170&(x171*x172)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x174 = INT8_MIN;
	uint32_t x175 = 234507U;
	static int64_t x176 = 1LL;

	t32 = (x173^(x174&(x175*x176)));

	if (t32 != -234497LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x178 = -9;
	uint64_t x179 = 17402816185137886LLU;
	int16_t x180 = INT16_MAX;
	volatile uint64_t t33 = 2192732552049LLU;

	t33 = (x177^(x178&(x179*x180)));

	if (t33 != 1610988346582959394LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x182 = -535638477;
	int8_t x184 = -37;
	volatile int32_t t34 = -145421;

	t34 = (x181^(x182&(x183*x184)));

	if (t34 != 64479) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x185 = -1LL;
	uint16_t x186 = UINT16_MAX;
	int32_t x188 = -1;

	t35 = (x185^(x186&(x187*x188)));

	if (t35 != -23282LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x189 = 7971U;
	uint64_t x190 = 491351882LLU;
	int8_t x191 = INT8_MIN;
	volatile int32_t x192 = 1;
	volatile uint64_t t36 = 97LLU;

	t36 = (x189^(x190&(x191*x192)));

	if (t36 != 491352099LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = -1;
	uint32_t x195 = 10460456U;
	uint64_t t37 = UINT64_MAX;

	t37 = (x193^(x194&(x195*x196)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = 30U;
	uint32_t x199 = 107401013U;
	static uint32_t t38 = 5444782U;

	t38 = (x197^(x198&(x199*x200)));

	if (t38 != 2147483658U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x201 = 724564LL;
	int16_t x202 = -3995;
	int8_t x203 = INT8_MAX;
	int8_t x204 = INT8_MIN;
	int64_t t39 = -499846367838LL;

	t39 = (x201^(x202&(x203*x204)));

	if (t39 != -733612LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x206 = 95;
	uint16_t x207 = 4U;
	int32_t x208 = -21;
	static int32_t t40 = 176281281;

	t40 = (x205^(x206&(x207*x208)));

	if (t40 != 11) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MIN;
	static int64_t t41 = 246348690LL;

	t41 = (x213^(x214&(x215*x216)));

	if (t41 != 27027241992320LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x217 = 316;
	int16_t x218 = -1;
	volatile int16_t x219 = INT16_MAX;
	static int64_t x220 = -77190198LL;
	volatile int64_t t42 = -3788164LL;

	t42 = (x217^(x218&(x219*x220)));

	if (t42 != -2529291217654LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x222 = -1LL;
	uint16_t x223 = 12354U;
	uint64_t x224 = 37179316211075LLU;
	uint64_t t43 = 960963082LLU;

	t43 = (x221^(x222&(x223*x224)));

	if (t43 != 17987430801237931065LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x225 = INT32_MAX;
	uint8_t x226 = 1U;
	static int8_t x228 = -1;
	uint64_t t44 = 35608894613332572LLU;

	t44 = (x225^(x226&(x227*x228)));

	if (t44 != 2147483646LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x234 = INT64_MAX;
	int8_t x235 = INT8_MIN;

	t45 = (x233^(x234&(x235*x236)));

	if (t45 != 3869964159LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x242 = 61377156LLU;
	uint64_t x243 = 26824352354839494LLU;
	int8_t x244 = 1;
	static volatile uint64_t t46 = 7561685880620909LLU;

	t46 = (x241^(x242&(x243*x244)));

	if (t46 != 18918930LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = INT8_MAX;
	int8_t x246 = INT8_MIN;
	volatile uint8_t x247 = 106U;
	static int8_t x248 = 1;
	int32_t t47 = -2691832;

	t47 = (x245^(x246&(x247*x248)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x252 = UINT32_MAX;
	int64_t t48 = INT64_MIN;

	t48 = (x249^(x250&(x251*x252)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x254 = 255062U;
	static int32_t x255 = -1;
	static int8_t x256 = 1;
	static uint32_t t49 = 304285U;

	t49 = (x253^(x254&(x255*x256)));

	if (t49 != 255060U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = UINT16_MAX;
	static uint64_t x260 = 1102503LLU;
	uint64_t t50 = 119492500LLU;

	t50 = (x257^(x258&(x259*x260)));

	if (t50 != 18446744073709488675LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x265 = 10162U;
	int64_t x266 = -8771865130668238LL;
	int32_t x268 = 15919;

	t51 = (x265^(x266&(x267*x268)));

	if (t51 != -8771865635444814LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x273 = INT8_MIN;
	volatile int32_t x274 = 49755;
	volatile int8_t x275 = INT8_MIN;
	static uint16_t x276 = UINT16_MAX;
	static volatile int32_t t52 = 21;

	t52 = (x273^(x274&(x275*x276)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x281 = 1730U;
	int64_t x282 = INT64_MIN;
	volatile int64_t t53 = -116777455395324LL;

	t53 = (x281^(x282&(x283*x284)));

	if (t53 != -9223372036854774078LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x293 = INT16_MIN;
	volatile uint16_t x295 = 44U;

	t54 = (x293^(x294&(x295*x296)));

	if (t54 != 27136) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x305 = 3;
	static volatile uint8_t x306 = 1U;
	static int32_t x307 = 5961;
	uint32_t x308 = 258284U;
	volatile uint32_t t55 = 919184U;

	t55 = (x305^(x306&(x307*x308)));

	if (t55 != 3U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x309 = 2523953122988653029LL;
	int8_t x310 = INT8_MAX;
	int16_t x311 = INT16_MIN;
	int32_t x312 = -19212;

	t56 = (x309^(x310&(x311*x312)));

	if (t56 != 2523953122988653029LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x313 = INT32_MIN;
	volatile int32_t x314 = INT32_MIN;
	volatile uint16_t x315 = 5U;
	int32_t x316 = 27306314;
	int32_t t57 = INT32_MIN;

	t57 = (x313^(x314&(x315*x316)));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x318 = 3857LL;
	uint32_t x319 = UINT32_MAX;
	static int32_t x320 = INT32_MAX;
	int64_t t58 = -1LL;

	t58 = (x317^(x318&(x319*x320)));

	if (t58 != -127LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x321 = 92252645LLU;
	static uint16_t x323 = 0U;
	int64_t x324 = INT64_MIN;

	t59 = (x321^(x322&(x323*x324)));

	if (t59 != 92252645LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x325 = 5U;
	volatile int8_t x328 = INT8_MIN;
	volatile int64_t t60 = -3745029318125442LL;

	t60 = (x325^(x326&(x327*x328)));

	if (t60 != 13871749LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x333 = -1219;
	int32_t x334 = -1;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	static int32_t t61 = 20360;

	t61 = (x333^(x334&(x335*x336)));

	if (t61 != 4193213) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x337 = INT32_MIN;
	static int16_t x338 = -1;
	int32_t x339 = -2;
	uint64_t x340 = 744082LLU;
	volatile uint64_t t62 = 1487438697LLU;

	t62 = (x337^(x338&(x339*x340)));

	if (t62 != 2145995484LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x342 = INT8_MAX;
	uint64_t x343 = UINT64_MAX;
	static uint16_t x344 = 1057U;
	volatile uint64_t t63 = 1940459972071LLU;

	t63 = (x341^(x342&(x343*x344)));

	if (t63 != 192LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x354 = INT8_MAX;
	uint16_t x355 = UINT16_MAX;
	uint32_t x356 = UINT32_MAX;
	uint32_t t64 = 67U;

	t64 = (x353^(x354&(x355*x356)));

	if (t64 != 27061U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x357 = -17;
	volatile int64_t x358 = -1LL;
	static uint16_t x359 = UINT16_MAX;
	int8_t x360 = -7;

	t65 = (x357^(x358&(x359*x360)));

	if (t65 != 458728LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = INT16_MAX;
	static int64_t x362 = 455087895LL;
	uint32_t x363 = 1U;
	int8_t x364 = 12;
	int64_t t66 = 686606735143074340LL;

	t66 = (x361^(x362&(x363*x364)));

	if (t66 != 32763LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	uint8_t x371 = 27U;
	int16_t x372 = -14;

	t67 = (x369^(x370&(x371*x372)));

	if (t67 != 377U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x373 = INT16_MIN;
	static uint32_t x375 = 1276U;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t68 = 846486770815442LLU;

	t68 = (x373^(x374&(x375*x376)));

	if (t68 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x377 = 47449315U;
	static int8_t x378 = INT8_MIN;
	static int8_t x379 = INT8_MIN;
	static uint64_t x380 = 632149245937424960LLU;
	uint64_t t69 = 3845835912310414111LLU;

	t69 = (x377^(x378&(x379*x380)));

	if (t69 != 11318616888535606499LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x382 = 3;
	volatile int16_t x383 = INT16_MIN;
	volatile uint8_t x384 = 3U;
	volatile uint64_t t70 = 192LLU;

	t70 = (x381^(x382&(x383*x384)));

	if (t70 != 110LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x385 = INT64_MIN;
	uint32_t x386 = 769U;
	static int8_t x387 = INT8_MIN;
	int32_t x388 = -1847632;
	static volatile int64_t t71 = INT64_MIN;

	t71 = (x385^(x386&(x387*x388)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x389 = -214;
	static volatile uint8_t x390 = UINT8_MAX;
	uint64_t x391 = 449361718LLU;
	volatile int32_t x392 = INT32_MIN;
	volatile uint64_t t72 = 2907726045LLU;

	t72 = (x389^(x390&(x391*x392)));

	if (t72 != 18446744073709551402LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x393 = UINT8_MAX;
	int8_t x394 = INT8_MIN;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = INT16_MAX;
	volatile uint64_t t73 = 220LLU;

	t73 = (x393^(x394&(x395*x396)));

	if (t73 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x397 = INT8_MIN;
	static int16_t x398 = -1;
	static uint32_t x399 = 7925263U;
	volatile int16_t x400 = INT16_MAX;

	t74 = (x397^(x398&(x399*x400)));

	if (t74 != 2305912433U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x401 = 4803U;
	uint16_t x402 = 8U;
	static int8_t x404 = -1;
	volatile int64_t t75 = -6357838LL;

	t75 = (x401^(x402&(x403*x404)));

	if (t75 != 4803LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x406 = UINT64_MAX;
	uint32_t x407 = UINT32_MAX;
	int8_t x408 = INT8_MIN;
	uint64_t t76 = 47559793596041808LLU;

	t76 = (x405^(x406&(x407*x408)));

	if (t76 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x409 = INT32_MIN;
	volatile int16_t x410 = INT16_MIN;
	int16_t x411 = -2;
	volatile uint8_t x412 = 1U;
	int32_t t77 = 9033646;

	t77 = (x409^(x410&(x411*x412)));

	if (t77 != 2147450880) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x413 = INT16_MAX;
	uint16_t x416 = 2945U;
	static int64_t t78 = -533219420LL;

	t78 = (x413^(x414&(x415*x416)));

	if (t78 != 32763LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x417 = INT32_MIN;
	int16_t x418 = INT16_MIN;
	volatile int64_t x419 = -4257342196465LL;
	static volatile uint8_t x420 = 1U;
	static int64_t t79 = 3743403546447991LL;

	t79 = (x417^(x418&(x419*x420)));

	if (t79 != 4257430437888LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x425 = 1U;
	int32_t x426 = INT32_MIN;
	uint16_t x427 = 28092U;
	uint32_t x428 = 19784623U;
	uint32_t t80 = 6125998U;

	t80 = (x425^(x426&(x427*x428)));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x429 = INT16_MAX;
	volatile int32_t x430 = -1;
	int64_t x432 = 7LL;

	t81 = (x429^(x430&(x431*x432)));

	if (t81 != -31852LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x433 = 2364539LLU;
	volatile uint16_t x435 = 3201U;
	static uint16_t x436 = UINT16_MAX;
	uint64_t t82 = 94058302215498188LLU;

	t82 = (x433^(x434&(x435*x436)));

	if (t82 != 212112507LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x441 = 0;
	uint64_t x442 = UINT64_MAX;
	volatile int64_t x443 = -1LL;
	static int64_t x444 = 64812720531167830LL;

	t83 = (x441^(x442&(x443*x444)));

	if (t83 != 18381931353178383786LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = INT64_MIN;
	volatile int64_t x446 = INT64_MIN;
	int16_t x447 = -95;
	int64_t x448 = 63059258LL;
	volatile int64_t t84 = 406887408893LL;

	t84 = (x445^(x446&(x447*x448)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x449 = 574420139LLU;
	uint32_t x450 = UINT32_MAX;
	int8_t x451 = -1;
	int32_t x452 = -3;
	volatile uint64_t t85 = 112788366487182LLU;

	t85 = (x449^(x450&(x451*x452)));

	if (t85 != 574420136LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x453 = 987464132U;
	int32_t x454 = 557;
	volatile int8_t x455 = -1;
	int64_t x456 = -62056LL;
	int64_t t86 = -1015LL;

	t86 = (x453^(x454&(x455*x456)));

	if (t86 != 987464684LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x465 = -1LL;
	int64_t x466 = -126LL;
	int16_t x467 = -2041;
	uint16_t x468 = 1U;
	volatile int64_t t87 = 449987180218904LL;

	t87 = (x465^(x466&(x467*x468)));

	if (t87 != 2045LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x473 = -1;
	uint32_t x474 = 51523145U;
	int8_t x475 = -1;
	uint32_t x476 = 222U;
	uint32_t t88 = 106034091U;

	t88 = (x473^(x474&(x475*x476)));

	if (t88 != 4243444223U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x478 = INT32_MIN;
	uint8_t x479 = 1U;
	int64_t x480 = INT64_MIN;
	volatile uint64_t t89 = 138LLU;

	t89 = (x477^(x478&(x479*x480)));

	if (t89 != 9223372036870198021LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x482 = -1;
	volatile int64_t t90 = 816736LL;

	t90 = (x481^(x482&(x483*x484)));

	if (t90 != -13LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x486 = 185960LLU;
	volatile uint64_t x487 = 78LLU;
	volatile int8_t x488 = -1;
	uint64_t t91 = 20837820205948LLU;

	t91 = (x485^(x486&(x487*x488)));

	if (t91 != 18446744073709365727LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x495 = 525945U;
	volatile int32_t x496 = INT32_MIN;
	volatile uint32_t t92 = 1933U;

	t92 = (x493^(x494&(x495*x496)));

	if (t92 != 2147483655U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x497 = 12;
	int8_t x498 = -1;
	int32_t x499 = INT32_MIN;
	int64_t x500 = -1LL;
	static volatile int64_t t93 = 1714LL;

	t93 = (x497^(x498&(x499*x500)));

	if (t93 != 2147483660LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x501 = 58U;
	int8_t x503 = INT8_MAX;
	volatile uint16_t x504 = UINT16_MAX;
	volatile uint32_t t94 = 513197U;

	t94 = (x501^(x502&(x503*x504)));

	if (t94 != 8323003U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x505 = INT8_MIN;
	static volatile uint64_t x506 = 100568LLU;
	uint32_t x507 = 13U;
	volatile uint16_t x508 = 43U;
	volatile uint64_t t95 = 88016456246LLU;

	t95 = (x505^(x506&(x507*x508)));

	if (t95 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x510 = 5410U;
	int16_t x511 = 161;
	int8_t x512 = INT8_MAX;
	volatile uint32_t t96 = 574U;

	t96 = (x509^(x510&(x511*x512)));

	if (t96 != 1283U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x513 = INT16_MIN;
	uint16_t x514 = 46U;
	static int8_t x515 = INT8_MAX;
	uint64_t x516 = 2203559LLU;

	t97 = (x513^(x514&(x515*x516)));

	if (t97 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = INT32_MIN;
	static int64_t x518 = -1LL;
	volatile int16_t x519 = -167;
	int8_t x520 = -1;

	t98 = (x517^(x518&(x519*x520)));

	if (t98 != -2147483481LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x521 = 504;
	uint32_t x523 = 45U;
	int32_t x524 = 1195331;
	uint32_t t99 = 61U;

	t99 = (x521^(x522&(x523*x524)));

	if (t99 != 53790015U) { NG(); } else { ; }
	
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

