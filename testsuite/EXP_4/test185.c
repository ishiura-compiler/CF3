#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
static int16_t x8 = INT16_MIN;
int64_t x9 = INT64_MAX;
uint16_t x10 = 358U;
static int8_t x19 = 0;
int16_t x30 = -1;
static uint64_t t6 = 1016284LLU;
int32_t x41 = -1147236;
int16_t x45 = -5;
volatile int32_t t8 = 105;
int16_t x55 = 30;
uint8_t x56 = UINT8_MAX;
uint32_t x57 = UINT32_MAX;
volatile int8_t x59 = INT8_MIN;
static int16_t x60 = -1;
uint32_t t10 = 721U;
uint64_t t11 = 101593656257LLU;
volatile uint64_t x70 = 53068LLU;
int64_t x72 = -1LL;
int32_t x90 = INT32_MAX;
int64_t x92 = -1LL;
int32_t x97 = -1;
volatile int16_t x101 = 1;
int8_t x102 = -1;
volatile uint64_t x110 = 290766511622LLU;
int16_t x112 = INT16_MIN;
int16_t x135 = INT16_MIN;
volatile int8_t x138 = 6;
int64_t x139 = INT64_MIN;
uint64_t t24 = 33143541LLU;
uint8_t x155 = 19U;
volatile uint64_t t26 = 121109190LLU;
int64_t t27 = 71228722002514566LL;
static uint16_t x168 = 2910U;
static int32_t x172 = 924028595;
volatile int8_t x177 = INT8_MAX;
int8_t x184 = INT8_MAX;
int16_t x191 = INT16_MAX;
static volatile int8_t x202 = INT8_MIN;
int8_t x203 = INT8_MIN;
uint16_t x205 = 1126U;
volatile int16_t x206 = INT16_MIN;
int8_t x219 = 1;
volatile int8_t x220 = 0;
int16_t x224 = INT16_MAX;
volatile uint64_t t37 = 6111LLU;
static int16_t x228 = 8;
volatile uint64_t t38 = 10328231848LLU;
int64_t x238 = -1LL;
uint32_t x239 = 2907701U;
int16_t x249 = INT16_MIN;
uint32_t x250 = UINT32_MAX;
int32_t x251 = -1;
int16_t x253 = -1;
int16_t x260 = 6600;
volatile int64_t x266 = -871041571821LL;
static int64_t x270 = INT64_MIN;
volatile int64_t t46 = -1998975186517125176LL;
volatile uint64_t t47 = 946037780LLU;
uint8_t x293 = UINT8_MAX;
uint64_t x303 = 2429395470296343703LLU;
int64_t x325 = -1LL;
static uint8_t x341 = 0U;
int16_t x342 = -7063;
int8_t x358 = INT8_MAX;
uint64_t t56 = 33126988841192918LLU;
uint16_t x363 = UINT16_MAX;
static uint64_t x364 = 25272466LLU;
volatile int8_t x384 = INT8_MIN;
volatile uint64_t t59 = 92107727125LLU;
int8_t x390 = -43;
volatile uint32_t t60 = 3524U;
uint8_t x394 = 0U;
uint32_t x410 = UINT32_MAX;
int8_t x411 = INT8_MIN;
uint32_t t64 = 100U;
int64_t t66 = -2LL;
int64_t x445 = -13060LL;
volatile int64_t x449 = INT64_MAX;
uint64_t x451 = 4LLU;
static uint64_t t72 = 139292002530635LLU;
uint8_t x490 = 103U;
uint64_t x491 = UINT64_MAX;
int8_t x492 = INT8_MIN;
volatile int32_t x494 = -59;
static int8_t x496 = 0;
int32_t x511 = -1;
int64_t x522 = 60LL;
uint32_t x529 = 34568U;
int32_t x531 = INT32_MAX;
static volatile int8_t x537 = INT8_MIN;
uint64_t x541 = 20941LLU;
volatile uint32_t t84 = 440375U;
uint8_t x553 = UINT8_MAX;
static int32_t t85 = -372235;
int8_t x566 = -3;
volatile uint16_t x567 = 7U;
volatile uint64_t x568 = 129796LLU;
int16_t x569 = INT16_MIN;
volatile int64_t t88 = 889349029497493011LL;
uint64_t t89 = 2472425232LLU;
static int16_t x578 = -1;
uint32_t x593 = UINT32_MAX;
int64_t x594 = -49LL;
int16_t x596 = INT16_MAX;
volatile uint32_t x597 = UINT32_MAX;
static int32_t x599 = -23603;
int16_t x607 = 575;
int64_t x609 = -1LL;
volatile int64_t t95 = -421581120LL;
int32_t x646 = -1;
uint32_t x647 = 104U;
int32_t x648 = -77681815;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int16_t x2 = 0;
	uint8_t x3 = 1U;
	uint8_t x4 = 3U;
	volatile int32_t t0 = -52;

	t0 = (x1*(x2-(x3-x4)));

	if (t0 != -65536) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	uint16_t x7 = 14U;
	int64_t t1 = 4148133943172195677LL;

	t1 = (x5*(x6-(x7-x8)));

	if (t1 != 15LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x11 = 7015953747087LLU;
	uint16_t x12 = UINT16_MAX;
	volatile uint64_t t2 = 12426781602910974LLU;

	t2 = (x9*(x10-(x11-x12)));

	if (t2 != 7015953681194LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x17 = -409;
	static uint64_t x18 = 146747897LLU;
	volatile int8_t x20 = -1;
	uint64_t t3 = 7LLU;

	t3 = (x17*(x18-(x19-x20)));

	if (t3 != 18446744013689662152LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x25 = 16778027534LLU;
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	uint64_t t4 = 93428060208LLU;

	t4 = (x25*(x26-(x27-x28)));

	if (t4 != 862948372460339200LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	int64_t x31 = 12690LL;
	static uint64_t x32 = 1050773845LLU;
	uint64_t t5 = 12302576LLU;

	t5 = (x29*(x30-(x31-x32)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MAX;
	int16_t x34 = INT16_MIN;
	static volatile uint16_t x35 = 335U;
	uint64_t x36 = 16210846406134091LLU;

	t6 = (x33*(x34-(x35-x36)));

	if (t6 != 16612666664046344196LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x42 = INT16_MIN;
	static uint64_t x43 = 18LLU;
	int32_t x44 = INT32_MIN;
	static volatile uint64_t t7 = 142304LLU;

	t7 = (x41*(x42-(x43-x44)));

	if (t7 != 2463708163676424LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x46 = INT16_MIN;
	static int32_t x47 = -1;
	volatile uint8_t x48 = 0U;

	t8 = (x45*(x46-(x47-x48)));

	if (t8 != 163835) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = -2;
	int64_t x54 = -7430LL;
	int64_t t9 = 780LL;

	t9 = (x53*(x54-(x55-x56)));

	if (t9 != 14410LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x58 = INT8_MIN;

	t10 = (x57*(x58-(x59-x60)));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = -212655906;
	uint16_t x62 = 4646U;
	static int16_t x63 = INT16_MAX;
	volatile uint64_t x64 = 550LLU;

	t11 = (x61*(x62-(x63-x64)));

	if (t11 != 5863135984326LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = -1LL;
	int16_t x66 = -55;
	uint64_t x67 = 8519153237598LLU;
	static int64_t x68 = INT64_MIN;
	static uint64_t t12 = 195218960041425LLU;

	t12 = (x65*(x66-(x67-x68)));

	if (t12 != 9223380556008013461LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x69 = 14885355939404002LLU;
	volatile int32_t x71 = INT32_MAX;
	uint64_t t13 = 516LLU;

	t13 = (x69*(x70-(x71-x72)));

	if (t13 != 5908970152262639896LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = 41U;
	uint8_t x74 = 9U;
	int32_t x75 = 3;
	static uint32_t x76 = UINT32_MAX;
	volatile uint32_t t14 = 508540U;

	t14 = (x73*(x74-(x75-x76)));

	if (t14 != 205U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 42325684513424500LLU;
	int8_t x91 = INT8_MIN;
	volatile uint64_t t15 = 5864LLU;

	t15 = (x89*(x90-(x91-x92)));

	if (t15 != 8730476850092552472LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = -54;
	volatile uint64_t x94 = 235LLU;
	int32_t x95 = -1;
	int16_t x96 = -11;
	volatile uint64_t t16 = 2LLU;

	t16 = (x93*(x94-(x95-x96)));

	if (t16 != 18446744073709539466LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x98 = 401200493LLU;
	static uint8_t x99 = UINT8_MAX;
	static int8_t x100 = -58;
	volatile uint64_t t17 = 103LLU;

	t17 = (x97*(x98-(x99-x100)));

	if (t17 != 18446744073308351436LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x103 = INT64_MIN;
	volatile int8_t x104 = INT8_MIN;
	static int64_t t18 = 274602881LL;

	t18 = (x101*(x102-(x103-x104)));

	if (t18 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = 0;
	uint32_t x111 = 507U;
	uint64_t t19 = 111LLU;

	t19 = (x109*(x110-(x111-x112)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	static int16_t x119 = 103;
	uint32_t x120 = UINT32_MAX;
	uint32_t t20 = 35587792U;

	t20 = (x117*(x118-(x119-x120)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x129 = 535U;
	volatile int32_t x130 = INT32_MAX;
	uint32_t x131 = 21U;
	int16_t x132 = INT16_MAX;
	uint32_t t21 = 173161U;

	t21 = (x129*(x130-(x131-x132)));

	if (t21 != 2165002223U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x133 = -3148;
	int8_t x134 = 17;
	int32_t x136 = -182;
	static int32_t t22 = -5560;

	t22 = (x133*(x134-(x135-x136)));

	if (t22 != -102634244) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x137 = 1869U;
	int64_t x140 = INT64_MIN;
	int64_t t23 = -454023LL;

	t23 = (x137*(x138-(x139-x140)));

	if (t23 != 11214LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x141 = UINT16_MAX;
	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = UINT64_MAX;
	int8_t x144 = -1;

	t24 = (x141*(x142-(x143-x144)));

	if (t24 != 16711425LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = -8841;
	volatile int32_t x150 = -264739787;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t25 = 6112795660359LLU;

	t25 = (x149*(x150-(x151-x152)));

	if (t25 != 2340564456867LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int16_t x154 = -1672;
	uint64_t x156 = 7492LLU;

	t26 = (x153*(x154-(x155-x156)));

	if (t26 != 380168535LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = 1LL;
	int8_t x162 = INT8_MAX;
	static uint32_t x163 = 0U;
	int16_t x164 = 85;

	t27 = (x161*(x162-(x163-x164)));

	if (t27 != 212LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x166 = -1;
	static uint16_t x167 = 5098U;
	volatile uint32_t t28 = 16U;

	t28 = (x165*(x166-(x167-x168)));

	if (t28 != 2189U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x169 = INT8_MAX;
	uint32_t x170 = 32962U;
	static uint32_t x171 = UINT32_MAX;
	uint32_t t29 = 1178526480U;

	t29 = (x169*(x170-(x171-x172)));

	if (t29 != 1391700874U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x178 = INT8_MAX;
	int16_t x179 = 856;
	int16_t x180 = INT16_MAX;
	static volatile int32_t t30 = 201655;

	t30 = (x177*(x178-(x179-x180)));

	if (t30 != 4068826) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x181 = 1U;
	int8_t x182 = INT8_MIN;
	static int64_t x183 = INT64_MAX;
	int64_t t31 = INT64_MIN;

	t31 = (x181*(x182-(x183-x184)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x189 = INT8_MAX;
	volatile int64_t x190 = -3682525982967680LL;
	uint8_t x192 = 56U;
	int64_t t32 = -13255164688LL;

	t32 = (x189*(x190-(x191-x192)));

	if (t32 != -467680799841049657LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x193 = 14;
	volatile uint32_t x194 = 3246252U;
	int8_t x195 = INT8_MIN;
	static int16_t x196 = INT16_MIN;
	static volatile uint32_t t33 = 2301U;

	t33 = (x193*(x194-(x195-x196)));

	if (t33 != 44990568U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x201 = INT16_MIN;
	static int16_t x204 = INT16_MAX;
	int32_t t34 = 198981;

	t34 = (x201*(x202-(x203-x204)));

	if (t34 != -1073709056) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x207 = INT16_MIN;
	int8_t x208 = -45;
	static volatile int32_t t35 = 428;

	t35 = (x205*(x206-(x207-x208)));

	if (t35 != -50670) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x217 = 4513LL;
	static uint16_t x218 = UINT16_MAX;
	static volatile int64_t t36 = -34366027840465LL;

	t36 = (x217*(x218-(x219-x220)));

	if (t36 != 295754942LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x221 = INT32_MIN;
	int32_t x222 = -101;
	static uint64_t x223 = UINT64_MAX;

	t37 = (x221*(x222-(x223-x224)));

	if (t37 != 18446673921861222400LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = 117440LLU;
	volatile int16_t x227 = INT16_MAX;

	t38 = (x225*(x226-(x227-x228)));

	if (t38 != 18446744070934724608LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x229 = UINT8_MAX;
	uint64_t x230 = 32898545928LLU;
	uint16_t x231 = 4032U;
	int16_t x232 = INT16_MIN;
	static volatile uint64_t t39 = 11039445548LLU;

	t39 = (x229*(x230-(x231-x232)));

	if (t39 != 8389119827640LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x237 = 3;
	static volatile uint32_t x240 = 199935210U;
	int64_t t40 = -4514748219LL;

	t40 = (x237*(x238-(x239-x240)));

	if (t40 != -12293819364LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x252 = UINT8_MAX;
	volatile uint32_t t41 = 53U;

	t41 = (x249*(x250-(x251-x252)));

	if (t41 != 4286611456U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	int16_t x256 = -1;
	int64_t t42 = 407620510200193694LL;

	t42 = (x253*(x254-(x255-x256)));

	if (t42 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x257 = 0;
	int16_t x258 = INT16_MIN;
	static int16_t x259 = -1;
	int32_t t43 = -115;

	t43 = (x257*(x258-(x259-x260)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x265 = INT32_MAX;
	static int16_t x267 = INT16_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t44 = 603986347848LLU;

	t44 = (x265*(x266-(x267-x268)));

	if (t44 != 11020434542197414894LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x269 = -940809146;
	static uint16_t x271 = 23U;
	uint64_t x272 = 231535910128LLU;
	volatile uint64_t t45 = 2262478889834902LLU;

	t45 = (x269*(x270-(x271-x272)));

	if (t45 != 3529827030296799062LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MAX;
	int32_t x275 = INT32_MIN;
	int64_t x276 = -1LL;

	t46 = (x273*(x274-(x275-x276)));

	if (t46 != -70368748306432LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x277 = INT64_MIN;
	volatile int32_t x278 = INT32_MAX;
	volatile int8_t x279 = INT8_MAX;
	uint64_t x280 = UINT64_MAX;

	t47 = (x277*(x278-(x279-x280)));

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x281 = UINT8_MAX;
	uint16_t x282 = 1144U;
	int16_t x283 = -197;
	uint16_t x284 = UINT16_MAX;
	int32_t t48 = 8921350;

	t48 = (x281*(x282-(x283-x284)));

	if (t48 != 17053380) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x294 = 253645854U;
	static int32_t x295 = -1;
	volatile uint32_t x296 = 2U;
	volatile uint32_t t49 = 377171U;

	t49 = (x293*(x294-(x295-x296)));

	if (t49 != 255184095U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x301 = 0;
	volatile int16_t x302 = -10181;
	volatile int16_t x304 = INT16_MIN;
	static uint64_t t50 = 1113301LLU;

	t50 = (x301*(x302-(x303-x304)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x317 = 12539;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 5945527U;
	int16_t x320 = 1;
	volatile uint32_t t51 = 54268434U;

	t51 = (x317*(x318-(x319-x320)));

	if (t51 != 2756855822U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x326 = INT16_MAX;
	static int16_t x327 = -1;
	int64_t x328 = 120875657041LL;
	static int64_t t52 = -383710522705LL;

	t52 = (x325*(x326-(x327-x328)));

	if (t52 != -120875689809LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x337 = -1;
	volatile int16_t x338 = 348;
	int32_t x339 = 389479019;
	static uint8_t x340 = 0U;
	int32_t t53 = -9006;

	t53 = (x337*(x338-(x339-x340)));

	if (t53 != 389478671) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x343 = INT8_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t54 = 2LLU;

	t54 = (x341*(x342-(x343-x344)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x345 = -1;
	uint32_t x346 = 1783764U;
	volatile int16_t x347 = -1;
	uint8_t x348 = 0U;
	uint32_t t55 = 27123721U;

	t55 = (x345*(x346-(x347-x348)));

	if (t55 != 4293183531U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x357 = UINT8_MAX;
	int8_t x359 = -1;
	static uint64_t x360 = 4254614873815178047LLU;

	t56 = (x357*(x358-(x359-x360)));

	if (t56 != 15015636547716440897LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x361 = 1LLU;
	int32_t x362 = INT32_MAX;
	volatile uint64_t t57 = 136671539470027LLU;

	t57 = (x361*(x362-(x363-x364)));

	if (t57 != 2172690578LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = 0;
	uint32_t x383 = 12607817U;
	static volatile uint32_t t58 = 29U;

	t58 = (x381*(x382-(x383-x384)));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x385 = 122293637110LLU;
	static uint64_t x386 = 56667LLU;
	int32_t x387 = INT32_MIN;
	volatile uint64_t x388 = 1950875728910LLU;

	t59 = (x385*(x386-(x387-x388)));

	if (t59 != 12323431670416167398LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x389 = UINT8_MAX;
	uint32_t x391 = UINT32_MAX;
	int8_t x392 = INT8_MIN;

	t60 = (x389*(x390-(x391-x392)));

	if (t60 != 4294923946U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x393 = 14898LLU;
	static uint16_t x395 = UINT16_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile uint64_t t61 = 385829201066439206LLU;

	t61 = (x393*(x394-(x395-x396)));

	if (t61 != 18446744072737010176LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x405 = -27680643818393LL;
	uint64_t x406 = 761LLU;
	int64_t x407 = 1LL;
	static int32_t x408 = 287016719;
	uint64_t t62 = 2586808168LLU;

	t62 = (x405*(x406-(x407-x408)));

	if (t62 != 5718089916724055249LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x409 = -1LL;
	int32_t x412 = INT32_MIN;
	int64_t t63 = 30487167481354LL;

	t63 = (x409*(x410-(x411-x412)));

	if (t63 != -2147483775LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x413 = UINT8_MAX;
	uint32_t x414 = UINT32_MAX;
	static int32_t x415 = 4038243;
	int16_t x416 = -1;

	t64 = (x413*(x414-(x415-x416)));

	if (t64 != 3265214821U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x425 = 1U;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = 62254411965249LLU;
	volatile int8_t x428 = INT8_MIN;
	volatile uint64_t t65 = 310166515637LLU;

	t65 = (x425*(x426-(x427-x428)));

	if (t65 != 18446681819297586111LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x433 = 5213LL;
	uint8_t x434 = UINT8_MAX;
	uint32_t x435 = 11386U;
	uint16_t x436 = UINT16_MAX;

	t66 = (x433*(x434-(x435-x436)));

	if (t66 != 283608052LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x446 = 5823U;
	uint64_t x447 = UINT64_MAX;
	static uint8_t x448 = 7U;
	volatile uint64_t t67 = 2739013395552244257LLU;

	t67 = (x445*(x446-(x447-x448)));

	if (t67 != 18446744073633398756LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x450 = 346133711LLU;
	int64_t x452 = INT64_MIN;
	uint64_t t68 = 886LLU;

	t68 = (x449*(x450-(x451-x452)));

	if (t68 != 18446744073363417909LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x453 = -1010024353390519345LL;
	uint64_t x454 = UINT64_MAX;
	uint32_t x455 = 91943810U;
	int64_t x456 = INT64_MAX;
	static volatile uint64_t t69 = 929098190668033055LLU;

	t69 = (x453*(x454-(x455-x456)));

	if (t69 != 14027347347290074180LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x469 = INT16_MIN;
	int32_t x470 = 79557681;
	int64_t x471 = INT64_MIN;
	uint64_t x472 = 240301LLU;
	static uint64_t t70 = 684986677926082287LLU;

	t70 = (x469*(x470-(x471-x472)));

	if (t70 != 18446741458889277440LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x477 = INT64_MIN;
	int64_t x478 = INT64_MAX;
	int8_t x479 = INT8_MAX;
	uint64_t x480 = 18441063502118LLU;
	uint64_t t71 = 21618743174925LLU;

	t71 = (x477*(x478-(x479-x480)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x481 = -5;
	uint64_t x482 = 523697457LLU;
	int16_t x483 = INT16_MIN;
	uint64_t x484 = 360273691746425789LLU;

	t72 = (x481*(x482-(x483-x484)));

	if (t72 != 16645375612358771546LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x485 = INT16_MIN;
	static volatile uint32_t x486 = UINT32_MAX;
	int8_t x487 = INT8_MIN;
	int32_t x488 = -1;
	volatile uint32_t t73 = 2565530U;

	t73 = (x485*(x486-(x487-x488)));

	if (t73 != 4290838528U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x489 = INT16_MIN;
	static uint64_t t74 = 11753LLU;

	t74 = (x489*(x490-(x491-x492)));

	if (t74 != 786432LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x493 = 239;
	int64_t x495 = -1LL;
	int64_t t75 = 313508242252LL;

	t75 = (x493*(x494-(x495-x496)));

	if (t75 != -13862LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x509 = UINT64_MAX;
	int16_t x510 = -267;
	int16_t x512 = INT16_MIN;
	volatile uint64_t t76 = 528LLU;

	t76 = (x509*(x510-(x511-x512)));

	if (t76 != 33034LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x513 = 42U;
	static int32_t x514 = -1;
	int64_t x515 = -545492435258193LL;
	int8_t x516 = -40;
	static int64_t t77 = -408914304LL;

	t77 = (x513*(x514-(x515-x516)));

	if (t77 != 22910682280842384LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x521 = 2LLU;
	static uint32_t x523 = 876U;
	uint64_t x524 = 60939LLU;
	static volatile uint64_t t78 = 110LLU;

	t78 = (x521*(x522-(x523-x524)));

	if (t78 != 120246LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x530 = 4855U;
	uint64_t x532 = 128817470396011712LLU;
	static uint64_t t79 = 1137574469183348904LLU;

	t79 = (x529*(x530-(x531-x532)));

	if (t79 != 7296920651284039104LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x533 = -1LL;
	uint16_t x534 = 89U;
	int16_t x535 = 3;
	static int32_t x536 = -1;
	volatile int64_t t80 = 9217200233057085LL;

	t80 = (x533*(x534-(x535-x536)));

	if (t80 != -85LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x538 = UINT64_MAX;
	uint32_t x539 = 4622U;
	volatile int8_t x540 = 1;
	volatile uint64_t t81 = 684699318056556581LLU;

	t81 = (x537*(x538-(x539-x540)));

	if (t81 != 591616LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x542 = -1;
	int8_t x543 = INT8_MIN;
	volatile uint64_t x544 = UINT64_MAX;
	uint64_t t82 = 1LLU;

	t82 = (x541*(x542-(x543-x544)));

	if (t82 != 2638566LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x545 = INT8_MAX;
	static volatile uint8_t x546 = 22U;
	int16_t x547 = INT16_MIN;
	int64_t x548 = 16775LL;
	static int64_t t83 = 53874876425382LL;

	t83 = (x545*(x546-(x547-x548)));

	if (t83 != 6294755LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x549 = -3;
	int8_t x550 = 7;
	int8_t x551 = INT8_MIN;
	volatile uint32_t x552 = 4937586U;

	t84 = (x549*(x550-(x551-x552)));

	if (t84 != 4280154133U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x554 = INT16_MAX;
	uint8_t x555 = UINT8_MAX;
	volatile int8_t x556 = INT8_MAX;

	t85 = (x553*(x554-(x555-x556)));

	if (t85 != 8322945) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x561 = INT32_MIN;
	int16_t x562 = INT16_MIN;
	uint64_t x563 = 97558037310LLU;
	int8_t x564 = 0;
	static volatile uint64_t t86 = 4071328LLU;

	t86 = (x561*(x562-(x563-x564)));

	if (t86 != 6590175412138016768LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x565 = INT32_MAX;
	volatile uint64_t t87 = 53043LLU;

	t87 = (x565*(x566-(x567-x568)));

	if (t87 != 278713312609542LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x570 = -1LL;
	int64_t x571 = 3836726100098LL;
	uint8_t x572 = 38U;

	t88 = (x569*(x570-(x571-x572)));

	if (t88 != 125721840846798848LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x573 = UINT32_MAX;
	uint64_t x574 = 234730LLU;
	int8_t x575 = 0;
	volatile int32_t x576 = 8475;

	t89 = (x573*(x574-(x575-x576)));

	if (t89 != 1044557520980475LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x577 = INT8_MIN;
	uint8_t x579 = 0U;
	int16_t x580 = -70;
	volatile int32_t t90 = 1968324;

	t90 = (x577*(x578-(x579-x580)));

	if (t90 != 9088) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x595 = 4U;
	static int64_t t91 = -44027777LL;

	t91 = (x593*(x594-(x595-x596)));

	if (t91 != 140505560088630LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x598 = INT8_MAX;
	uint16_t x600 = 3674U;
	volatile uint32_t t92 = 0U;

	t92 = (x597*(x598-(x599-x600)));

	if (t92 != 4294939892U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x605 = UINT64_MAX;
	uint16_t x606 = 3U;
	int64_t x608 = -1LL;
	static volatile uint64_t t93 = 48024252LLU;

	t93 = (x605*(x606-(x607-x608)));

	if (t93 != 573LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x610 = 0;
	int64_t x611 = -54362043953141LL;
	static int16_t x612 = 637;
	volatile int64_t t94 = 2469168LL;

	t94 = (x609*(x610-(x611-x612)));

	if (t94 != -54362043953778LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x621 = 1U;
	int8_t x622 = INT8_MIN;
	uint32_t x623 = 942470U;
	int64_t x624 = -1LL;

	t95 = (x621*(x622-(x623-x624)));

	if (t95 != -942599LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x629 = INT8_MAX;
	static int8_t x630 = INT8_MAX;
	int32_t x631 = INT32_MIN;
	static uint64_t x632 = UINT64_MAX;
	volatile uint64_t t96 = 1378386593LLU;

	t96 = (x629*(x630-(x631-x632)));

	if (t96 != 272730439298LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x633 = 220U;
	static volatile int8_t x634 = INT8_MIN;
	uint64_t x635 = UINT64_MAX;
	int64_t x636 = 5737426709LL;
	uint64_t t97 = 62659898282LLU;

	t97 = (x633*(x634-(x635-x636)));

	if (t97 != 1262233848040LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x641 = 7;
	static int8_t x642 = 7;
	int16_t x643 = INT16_MAX;
	static volatile int16_t x644 = -1;
	volatile int32_t t98 = 26572;

	t98 = (x641*(x642-(x643-x644)));

	if (t98 != -229327) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x645 = INT8_MIN;
	uint32_t t99 = 50U;

	t99 = (x645*(x646-(x647-x648)));

	if (t99 != 1353351168U) { NG(); } else { ; }
	
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

