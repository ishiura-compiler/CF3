#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = -1;
uint16_t x15 = UINT16_MAX;
int8_t x18 = -1;
int8_t x22 = INT8_MIN;
uint8_t x38 = 49U;
int8_t x54 = 28;
int32_t t8 = 451;
volatile int16_t x74 = INT16_MAX;
uint8_t x75 = 100U;
uint32_t x76 = 509U;
static int32_t x77 = INT32_MIN;
uint16_t x85 = 1U;
static int16_t x87 = INT16_MIN;
volatile uint8_t x119 = 3U;
volatile int8_t x126 = 6;
volatile int8_t x127 = 2;
volatile int16_t x131 = INT16_MIN;
int32_t x132 = INT32_MIN;
uint16_t x136 = UINT16_MAX;
int64_t t17 = 1926973162443436690LL;
int32_t x143 = -11956;
volatile int32_t x144 = -1;
uint8_t x151 = UINT8_MAX;
int8_t x152 = INT8_MIN;
volatile int16_t x157 = INT16_MIN;
uint32_t x159 = 27U;
int64_t t20 = -18468429912LL;
int8_t x163 = -1;
int8_t x174 = INT8_MAX;
static uint8_t x176 = UINT8_MAX;
volatile uint32_t t23 = 27934U;
static int32_t t24 = -5151;
int8_t x193 = INT8_MAX;
int32_t x201 = INT32_MIN;
static uint16_t x203 = 19U;
static volatile int8_t x208 = INT8_MAX;
uint8_t x210 = UINT8_MAX;
int64_t x211 = -1LL;
int64_t t28 = 16848698721531807LL;
uint64_t x225 = UINT64_MAX;
int64_t x232 = -1LL;
int64_t x235 = -1764630LL;
volatile int32_t x241 = -704095;
int16_t x258 = -1;
static int8_t x260 = -22;
int8_t x263 = -1;
int8_t x271 = -7;
uint16_t x272 = 27172U;
volatile int16_t x274 = -1;
volatile int64_t t40 = -82664649066LL;
volatile uint64_t x298 = 7540210700882LLU;
uint16_t x300 = 1658U;
int8_t x302 = -1;
volatile uint16_t x311 = 250U;
uint64_t t44 = 496734LLU;
uint8_t x318 = UINT8_MAX;
uint16_t x345 = 118U;
static int64_t t50 = -344559700451LL;
int64_t x355 = 145870942LL;
volatile uint16_t x377 = 1U;
int64_t x385 = INT64_MIN;
int64_t x405 = INT64_MIN;
int16_t x408 = 2931;
int64_t t59 = INT64_MIN;
static volatile int32_t t60 = 341;
uint32_t x432 = UINT32_MAX;
uint16_t x440 = UINT16_MAX;
int64_t t64 = 7127062408LL;
uint32_t x442 = 36771U;
int64_t x443 = 2063242678LL;
static int64_t x446 = 746LL;
int64_t t66 = -8007115766148214LL;
uint64_t x468 = 59601LLU;
int32_t x498 = INT32_MIN;
int8_t x500 = -1;
volatile int8_t x503 = INT8_MIN;
volatile uint64_t t71 = 2040614531117LLU;
volatile uint64_t t72 = 11454388492108405LLU;
uint64_t x519 = 6120686209807625494LLU;
volatile uint64_t t73 = 7969285105704580LLU;
static uint32_t x528 = 28476742U;
uint32_t t74 = 3093U;
uint32_t x531 = 881497U;
int8_t x545 = INT8_MAX;
volatile uint32_t t77 = 5894582U;
static int8_t x555 = INT8_MIN;
static int16_t x556 = INT16_MAX;
int32_t t78 = 0;
int64_t x563 = INT64_MAX;
static int32_t x569 = INT32_MIN;
static int16_t x586 = INT16_MAX;
int8_t x587 = -53;
volatile int16_t x590 = INT16_MIN;
volatile uint8_t x591 = UINT8_MAX;
uint64_t x594 = UINT64_MAX;
uint64_t x613 = UINT64_MAX;
volatile uint64_t t86 = 27940305817682LLU;
int16_t x634 = 235;
static uint8_t x649 = UINT8_MAX;
static volatile int8_t x650 = -1;
static int16_t x651 = INT16_MIN;
volatile int32_t t89 = -2528332;
int16_t x656 = 15696;
int8_t x669 = INT8_MAX;
static int32_t x671 = INT32_MAX;
volatile int8_t x680 = INT8_MIN;
int16_t x681 = INT16_MIN;
int32_t x701 = INT32_MAX;
int32_t x702 = INT32_MIN;
int64_t x703 = -63073LL;
int64_t t98 = -2890467LL;
int64_t x720 = INT64_MAX;


void f0(void) {
	static volatile int16_t x5 = -176;
	int64_t x6 = 2863104430LL;
	int8_t x7 = -1;
	int32_t x8 = -83737;
	static int64_t t0 = 298LL;

	t0 = (x5/(x6*(x7&x8)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	int8_t x12 = -37;
	static uint32_t t1 = 403456U;

	t1 = (x9/(x10*(x11&x12)));

	if (t1 != 116080197U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = 61;
	uint64_t x14 = 86449694511LLU;
	int8_t x16 = INT8_MAX;
	volatile uint64_t t2 = 24206LLU;

	t2 = (x13/(x14*(x15&x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x17 = INT64_MIN;
	uint8_t x19 = UINT8_MAX;
	static int64_t x20 = 3LL;
	volatile int64_t t3 = -99398550571LL;

	t3 = (x17/(x18*(x19&x20)));

	if (t3 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -20;
	static uint16_t x23 = 23984U;
	static uint32_t x24 = 551331697U;
	volatile uint32_t t4 = 1U;

	t4 = (x21/(x22*(x23&x24)));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 119U;
	uint16_t x28 = 26030U;
	int32_t t5 = 240575;

	t5 = (x25/(x26*(x27&x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = -1LL;
	static uint32_t x39 = 14U;
	static volatile uint32_t x40 = UINT32_MAX;
	volatile int64_t t6 = -982819889702LL;

	t6 = (x37/(x38*(x39&x40)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x53 = INT16_MIN;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = 690;
	static int32_t t7 = 58026;

	t7 = (x53/(x54*(x55&x56)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = -1;
	uint16_t x67 = UINT16_MAX;
	int8_t x68 = 52;

	t8 = (x65/(x66*(x67&x68)));

	if (t8 != -630) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = INT16_MIN;
	static int16_t x70 = 11;
	volatile uint32_t x71 = 1195122U;
	volatile int16_t x72 = -41;
	uint32_t t9 = 36285035U;

	t9 = (x69/(x70*(x71&x72)));

	if (t9 != 326U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x73 = INT32_MIN;
	volatile uint32_t t10 = 20719737U;

	t10 = (x73/(x74*(x75&x76)));

	if (t10 != 655U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x78 = 14445LL;
	volatile uint16_t x79 = UINT16_MAX;
	volatile uint32_t x80 = 19U;
	int64_t t11 = -6919079LL;

	t11 = (x77/(x78*(x79&x80)));

	if (t11 != -7824LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x86 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	int32_t t12 = -3454894;

	t12 = (x85/(x86*(x87&x88)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x105 = 24U;
	static int16_t x106 = INT16_MAX;
	int64_t x107 = -1LL;
	uint32_t x108 = UINT32_MAX;
	int64_t t13 = -14542344235667894LL;

	t13 = (x105/(x106*(x107&x108)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x117 = UINT64_MAX;
	static uint8_t x118 = 116U;
	uint8_t x120 = UINT8_MAX;
	uint64_t t14 = 0LLU;

	t14 = (x117/(x118*(x119&x120)));

	if (t14 != 53007885269280320LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x125 = 2U;
	static int64_t x128 = 152890LL;
	int64_t t15 = 263537194064343449LL;

	t15 = (x125/(x126*(x127&x128)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x129 = 15024166338146203LL;
	uint64_t x130 = 107LLU;
	uint64_t t16 = 162158472826018LLU;

	t16 = (x129/(x130*(x131&x132)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x133 = UINT16_MAX;
	int64_t x134 = -1LL;
	uint32_t x135 = UINT32_MAX;

	t17 = (x133/(x134*(x135&x136)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x141 = 26702U;
	uint16_t x142 = 121U;
	volatile uint32_t t18 = 27398U;

	t18 = (x141/(x142*(x143&x144)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x149 = UINT8_MAX;
	int64_t x150 = -1LL;
	volatile int64_t t19 = 205855002055022443LL;

	t19 = (x149/(x150*(x151&x152)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x158 = INT64_MIN;
	uint16_t x160 = 1U;

	t20 = (x157/(x158*(x159&x160)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MAX;
	int8_t x164 = -1;
	volatile int64_t t21 = 8135972988395LL;

	t21 = (x161/(x162*(x163&x164)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x165 = 990;
	int16_t x166 = -1;
	static int64_t x167 = -1LL;
	static int16_t x168 = INT16_MAX;
	int64_t t22 = -72425764LL;

	t22 = (x165/(x166*(x167&x168)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x173 = 139348507U;
	volatile int8_t x175 = INT8_MIN;

	t23 = (x173/(x174*(x175&x176)));

	if (t23 != 8572U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MAX;
	static int32_t x183 = 31;
	int16_t x184 = INT16_MAX;

	t24 = (x181/(x182*(x183&x184)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x194 = -1;
	int16_t x195 = -1;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t25 = 264;

	t25 = (x193/(x194*(x195&x196)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x202 = 1058593164U;
	int64_t x204 = -356108873051LL;
	static int64_t t26 = -27LL;

	t26 = (x201/(x202*(x203&x204)));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x205 = INT32_MAX;
	int16_t x206 = 38;
	int16_t x207 = -1;
	int32_t t27 = 508107;

	t27 = (x205/(x206*(x207&x208)));

	if (t27 != 444982) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x209 = INT64_MIN;
	int16_t x212 = INT16_MIN;

	t28 = (x209/(x210*(x211&x212)));

	if (t28 != 1103823438081LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x226 = 31U;
	uint32_t x227 = 11840353U;
	static int64_t x228 = INT64_MAX;
	volatile uint64_t t29 = 1274138550467219LLU;

	t29 = (x225/(x226*(x227&x228)));

	if (t29 != 50256631744LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x229 = UINT64_MAX;
	int16_t x230 = -11728;
	int32_t x231 = -159514553;
	volatile uint64_t t30 = 18944LLU;

	t30 = (x229/(x230*(x231&x232)));

	if (t30 != 9860420LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x233 = 1LL;
	volatile int8_t x234 = INT8_MIN;
	static uint16_t x236 = UINT16_MAX;
	volatile int64_t t31 = -12LL;

	t31 = (x233/(x234*(x235&x236)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x237 = -1LL;
	static int64_t x238 = 2798663LL;
	static volatile uint8_t x239 = 55U;
	static uint16_t x240 = 2U;
	volatile int64_t t32 = 4213918223389785LL;

	t32 = (x237/(x238*(x239&x240)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x242 = -10;
	int32_t x243 = -28316147;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t33 = 1;

	t33 = (x241/(x242*(x243&x244)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x253 = INT32_MAX;
	int8_t x254 = INT8_MIN;
	volatile uint8_t x255 = UINT8_MAX;
	static uint64_t x256 = UINT64_MAX;
	static volatile uint64_t t34 = 12LLU;

	t34 = (x253/(x254*(x255&x256)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x257 = 18610999U;
	volatile int32_t x259 = -10119;
	uint32_t t35 = 258863U;

	t35 = (x257/(x258*(x259&x260)));

	if (t35 != 1836U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x261 = 38883920739852LLU;
	static volatile int16_t x262 = INT16_MIN;
	uint64_t x264 = 854129LLU;
	static uint64_t t36 = 3132961262767LLU;

	t36 = (x261/(x262*(x263&x264)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x269 = INT64_MIN;
	uint16_t x270 = UINT16_MAX;
	int64_t t37 = 1159873383650632465LL;

	t37 = (x269/(x270*(x271&x272)));

	if (t37 != -5180345843LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x273 = -3930LL;
	int16_t x275 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;
	volatile int64_t t38 = 93LL;

	t38 = (x273/(x274*(x275&x276)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = -1;
	static int8_t x280 = INT8_MIN;
	uint32_t t39 = 25948U;

	t39 = (x277/(x278*(x279&x280)));

	if (t39 != 33554431U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x285 = -15LL;
	int8_t x286 = INT8_MIN;
	uint32_t x287 = 52999835U;
	static int8_t x288 = INT8_MIN;

	t40 = (x285/(x286*(x287&x288)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	volatile int16_t x295 = -1;
	int16_t x296 = -1;
	uint64_t t41 = 6896540966044499LLU;

	t41 = (x293/(x294*(x295&x296)));

	if (t41 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x297 = INT8_MIN;
	static uint32_t x299 = 193254U;
	static uint64_t t42 = 246318511131754LLU;

	t42 = (x297/(x298*(x299&x300)));

	if (t42 != 4010LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x301 = 5842U;
	static int16_t x303 = -1;
	volatile int8_t x304 = -1;
	int32_t t43 = 5557;

	t43 = (x301/(x302*(x303&x304)));

	if (t43 != 5842) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x309 = INT8_MAX;
	uint64_t x310 = UINT64_MAX;
	int16_t x312 = -3302;

	t44 = (x309/(x310*(x311&x312)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	uint32_t x316 = 225U;
	uint32_t t45 = 1U;

	t45 = (x313/(x314*(x315&x316)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x317 = -32570;
	static uint16_t x319 = UINT16_MAX;
	volatile int32_t x320 = 63;
	int32_t t46 = 1;

	t46 = (x317/(x318*(x319&x320)));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x321 = 48;
	int8_t x322 = -3;
	static int8_t x323 = INT8_MAX;
	int16_t x324 = 187;
	int32_t t47 = -6396;

	t47 = (x321/(x322*(x323&x324)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x325 = 1024842719;
	static uint32_t x326 = 2970033U;
	static uint8_t x327 = 14U;
	uint8_t x328 = 103U;
	volatile uint32_t t48 = 63393U;

	t48 = (x325/(x326*(x327&x328)));

	if (t48 != 57U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x346 = -24;
	int64_t x347 = INT64_MAX;
	volatile int8_t x348 = 11;
	static volatile int64_t t49 = -100226283542902572LL;

	t49 = (x345/(x346*(x347&x348)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int64_t x350 = -1LL;
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;

	t50 = (x349/(x350*(x351&x352)));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x353 = -3596;
	int32_t x354 = -3294100;
	int8_t x356 = 5;
	int64_t t51 = -37411223556LL;

	t51 = (x353/(x354*(x355&x356)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x357 = UINT16_MAX;
	uint32_t x358 = UINT32_MAX;
	int16_t x359 = 406;
	int32_t x360 = -626768;
	uint32_t t52 = 174U;

	t52 = (x357/(x358*(x359&x360)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x361 = 55U;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -301;
	uint64_t x364 = 47198736172LLU;
	uint64_t t53 = 663274507905LLU;

	t53 = (x361/(x362*(x363&x364)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x365 = UINT32_MAX;
	static volatile int16_t x366 = 17;
	uint16_t x367 = UINT16_MAX;
	int8_t x368 = -11;
	static uint32_t t54 = 8U;

	t54 = (x365/(x366*(x367&x368)));

	if (t54 != 3855U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x378 = UINT8_MAX;
	int64_t x379 = 20LL;
	int16_t x380 = INT16_MAX;
	int64_t t55 = 25669126086515LL;

	t55 = (x377/(x378*(x379&x380)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x381 = -62318193;
	int16_t x382 = INT16_MIN;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = -7068919629052LL;
	int64_t t56 = 14132250763LL;

	t56 = (x381/(x382*(x383&x384)));

	if (t56 != 475LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MIN;
	volatile int16_t x388 = -1;
	volatile int64_t t57 = -5820365LL;

	t57 = (x385/(x386*(x387&x388)));

	if (t57 != -562949953421312LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile int32_t x398 = INT32_MAX;
	static uint8_t x399 = 64U;
	static volatile uint32_t x400 = UINT32_MAX;
	static uint32_t t58 = 15U;

	t58 = (x397/(x398*(x399&x400)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x406 = 1;
	uint8_t x407 = 1U;

	t59 = (x405/(x406*(x407&x408)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x413 = 0U;
	static volatile int32_t x414 = -1;
	int8_t x415 = INT8_MIN;
	int32_t x416 = -1;

	t60 = (x413/(x414*(x415&x416)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x425 = -1LL;
	static volatile int32_t x426 = INT32_MIN;
	volatile uint64_t x427 = 22LLU;
	static volatile int32_t x428 = -1;
	uint64_t t61 = 32LLU;

	t61 = (x425/(x426*(x427&x428)));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x429 = -1LL;
	volatile int32_t x430 = INT32_MAX;
	int64_t x431 = -538255LL;
	int64_t t62 = 8501013LL;

	t62 = (x429/(x430*(x431&x432)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x433 = INT64_MIN;
	static int8_t x434 = -13;
	uint16_t x435 = UINT16_MAX;
	int8_t x436 = INT8_MIN;
	int64_t t63 = -4LL;

	t63 = (x433/(x434*(x435&x436)));

	if (t63 != 10847146475677LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x437 = -1LL;
	volatile int32_t x438 = 3314491;
	uint32_t x439 = 944971U;

	t64 = (x437/(x438*(x439&x440)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x441 = -109;
	uint64_t x444 = UINT64_MAX;
	uint64_t t65 = 0LLU;

	t65 = (x441/(x442*(x443&x444)));

	if (t65 != 243144LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x445 = INT8_MAX;
	int32_t x447 = -30672207;
	int8_t x448 = INT8_MIN;

	t66 = (x445/(x446*(x447&x448)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x465 = INT8_MAX;
	int8_t x466 = INT8_MIN;
	static int32_t x467 = 178223360;
	uint64_t t67 = 14281762668LLU;

	t67 = (x465/(x466*(x467&x468)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x477 = 21628LLU;
	int32_t x478 = -1;
	uint16_t x479 = 287U;
	volatile int8_t x480 = 50;
	static volatile uint64_t t68 = 51LLU;

	t68 = (x477/(x478*(x479&x480)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x497 = -10603;
	int64_t x499 = -1LL;
	volatile int64_t t69 = -1LL;

	t69 = (x497/(x498*(x499&x500)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x501 = 6332U;
	volatile uint8_t x502 = 30U;
	int8_t x504 = -1;
	static volatile int32_t t70 = -12893;

	t70 = (x501/(x502*(x503&x504)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x505 = UINT16_MAX;
	int16_t x506 = -3;
	volatile uint64_t x507 = 44770LLU;
	uint32_t x508 = UINT32_MAX;

	t71 = (x505/(x506*(x507&x508)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x509 = -1;
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = INT32_MIN;
	volatile int8_t x512 = INT8_MIN;

	t72 = (x509/(x510*(x511&x512)));

	if (t72 != 8589934591LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x517 = -1;
	uint8_t x518 = 68U;
	int32_t x520 = -11455769;

	t73 = (x517/(x518*(x519&x520)));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x525 = 2U;
	int8_t x526 = INT8_MIN;
	int16_t x527 = -57;

	t74 = (x525/(x526*(x527&x528)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x529 = 473067902998LLU;
	int8_t x530 = -1;
	int8_t x532 = 1;
	volatile uint64_t t75 = 524725028004LLU;

	t75 = (x529/(x530*(x531&x532)));

	if (t75 != 110LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x546 = 18973U;
	uint64_t x547 = UINT64_MAX;
	int32_t x548 = -1;
	volatile uint64_t t76 = 362614392305226LLU;

	t76 = (x545/(x546*(x547&x548)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x549 = 35U;
	uint32_t x550 = UINT32_MAX;
	int8_t x551 = INT8_MIN;
	static uint16_t x552 = 1938U;

	t77 = (x549/(x550*(x551&x552)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x553 = 5U;
	static uint16_t x554 = 1904U;

	t78 = (x553/(x554*(x555&x556)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x557 = UINT32_MAX;
	static int16_t x558 = INT16_MIN;
	static volatile int32_t x559 = -25287887;
	int8_t x560 = 13;
	uint32_t t79 = 395592806U;

	t79 = (x557/(x558*(x559&x560)));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x561 = INT8_MIN;
	int64_t x562 = -1191929211LL;
	volatile uint32_t x564 = 6085837U;
	int64_t t80 = 12054178813LL;

	t80 = (x561/(x562*(x563&x564)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x570 = INT64_MIN;
	volatile int64_t x571 = 87081LL;
	uint8_t x572 = 7U;
	static volatile int64_t t81 = 1095565410656155LL;

	t81 = (x569/(x570*(x571&x572)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x585 = INT32_MIN;
	int32_t x588 = 30;
	volatile int32_t t82 = 87099666;

	t82 = (x585/(x586*(x587&x588)));

	if (t82 != -6553) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x589 = -1;
	static int8_t x592 = -1;
	int32_t t83 = -3925;

	t83 = (x589/(x590*(x591&x592)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x593 = -113901;
	uint8_t x595 = 4U;
	uint64_t x596 = 45472846514151455LLU;
	volatile uint64_t t84 = 933845LLU;

	t84 = (x593/(x594*(x595&x596)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x597 = 1;
	int8_t x598 = INT8_MIN;
	uint64_t x599 = UINT64_MAX;
	uint8_t x600 = 43U;
	volatile uint64_t t85 = 27LLU;

	t85 = (x597/(x598*(x599&x600)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x614 = 14370127567810LL;
	uint8_t x615 = 6U;
	int64_t x616 = INT64_MAX;

	t86 = (x613/(x614*(x615&x616)));

	if (t86 != 213947LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x629 = 3U;
	uint64_t x630 = 6501550LLU;
	volatile int32_t x631 = 6326707;
	uint32_t x632 = 689U;
	static uint64_t t87 = 10599LLU;

	t87 = (x629/(x630*(x631&x632)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x633 = -121LL;
	int8_t x635 = INT8_MAX;
	static uint32_t x636 = 314463U;
	volatile int64_t t88 = 52991985722LL;

	t88 = (x633/(x634*(x635&x636)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x652 = 18718626;

	t89 = (x649/(x650*(x651&x652)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x653 = 11258U;
	int64_t x654 = 1385706321929LL;
	int32_t x655 = 264989176;
	volatile int64_t t90 = 395692LL;

	t90 = (x653/(x654*(x655&x656)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x665 = INT8_MAX;
	int16_t x666 = 52;
	volatile int32_t x667 = -1;
	int64_t x668 = -1LL;
	volatile int64_t t91 = 68260LL;

	t91 = (x665/(x666*(x667&x668)));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x670 = -1LL;
	int16_t x672 = INT16_MIN;
	static int64_t t92 = -4716LL;

	t92 = (x669/(x670*(x671&x672)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x673 = -15;
	uint16_t x674 = 2U;
	int32_t x675 = INT32_MIN;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t93 = 307250162362798176LLU;

	t93 = (x673/(x674*(x675&x676)));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x677 = INT16_MIN;
	static int64_t x678 = -4585644054909545LL;
	int16_t x679 = 197;
	volatile int64_t t94 = -16053889703157LL;

	t94 = (x677/(x678*(x679&x680)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x682 = -1LL;
	volatile int16_t x683 = -1;
	uint16_t x684 = UINT16_MAX;
	int64_t t95 = -26800LL;

	t95 = (x681/(x682*(x683&x684)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x685 = 1;
	uint8_t x686 = UINT8_MAX;
	static uint8_t x687 = UINT8_MAX;
	int32_t x688 = -7601;
	volatile int32_t t96 = 0;

	t96 = (x685/(x686*(x687&x688)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x689 = -1;
	uint32_t x690 = UINT32_MAX;
	volatile uint64_t x691 = 55144270LLU;
	static int8_t x692 = INT8_MIN;
	volatile uint64_t t97 = 1466091528465530LLU;

	t97 = (x689/(x690*(x691&x692)));

	if (t97 != 77LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x704 = INT16_MIN;

	t98 = (x701/(x702*(x703&x704)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x717 = INT64_MIN;
	static int64_t x718 = -1LL;
	uint8_t x719 = 29U;
	int64_t t99 = -324241343521083501LL;

	t99 = (x717/(x718*(x719&x720)));

	if (t99 != 318047311615681924LL) { NG(); } else { ; }
	
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

