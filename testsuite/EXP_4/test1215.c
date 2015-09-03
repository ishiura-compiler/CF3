#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x8 = INT32_MAX;
int32_t t0 = 3;
int32_t t1 = 1;
int8_t x26 = -43;
uint64_t x37 = 683015LLU;
volatile uint32_t t6 = UINT32_MAX;
uint64_t x57 = 3LLU;
int32_t x58 = INT32_MAX;
volatile uint8_t x67 = 1U;
int16_t x68 = 368;
int32_t t9 = 374;
uint16_t x72 = 20284U;
volatile int64_t x73 = 0LL;
volatile int64_t t11 = -1321592371LL;
volatile uint32_t t12 = UINT32_MAX;
volatile int32_t t13 = 369;
int32_t x92 = 1020758375;
static uint16_t x122 = 31182U;
volatile int32_t x147 = -1;
uint8_t x148 = UINT8_MAX;
static uint64_t x166 = 255489249LLU;
int32_t x175 = INT32_MAX;
uint64_t x195 = 27460268602LLU;
int64_t x196 = INT64_MIN;
volatile uint64_t t27 = UINT64_MAX;
int64_t x201 = 4382356580353844LL;
uint64_t x204 = 5146732LLU;
int64_t t28 = -12701LL;
int8_t x208 = INT8_MIN;
volatile uint8_t x223 = UINT8_MAX;
int8_t x227 = 1;
static int32_t t31 = 133485906;
uint32_t x235 = 2206U;
int64_t x238 = -1LL;
int16_t x240 = INT16_MAX;
uint32_t t33 = 1990628217U;
int16_t x261 = INT16_MAX;
static volatile int16_t x262 = -1;
uint16_t x264 = 3U;
uint32_t x265 = 1953U;
int64_t x270 = -167139942LL;
uint16_t x284 = 9439U;
volatile int32_t t39 = -8547432;
volatile int32_t x291 = INT32_MIN;
uint16_t x297 = UINT16_MAX;
static uint16_t x298 = 885U;
volatile uint64_t x299 = 32213LLU;
static volatile int32_t t41 = -1188;
int8_t x308 = -14;
volatile int32_t t42 = -4;
uint8_t x313 = 1U;
int64_t x321 = 26153272249800LL;
volatile uint8_t x347 = 1U;
int32_t t48 = 7;
uint32_t x357 = 3U;
int32_t x364 = INT32_MIN;
static volatile int64_t t55 = -2LL;
int8_t x389 = INT8_MAX;
int32_t t57 = 42;
static volatile int16_t x412 = INT16_MAX;
int64_t x413 = 97LL;
int32_t x428 = -1;
static int16_t x434 = INT16_MAX;
uint16_t x435 = 7U;
uint32_t x443 = UINT32_MAX;
int32_t x444 = INT32_MIN;
volatile uint64_t x445 = 24094125062681LLU;
volatile int8_t x448 = INT8_MIN;
uint64_t t66 = 3918304613401639LLU;
uint64_t t67 = 13769658464076326LLU;
static uint16_t x465 = 5U;
int32_t x485 = 39;
volatile uint8_t x487 = UINT8_MAX;
int8_t x494 = INT8_MIN;
volatile int32_t x495 = -548;
uint32_t x553 = 3257732U;
int16_t x554 = INT16_MIN;
volatile int64_t t83 = INT64_MAX;
static volatile uint64_t x599 = 671LLU;
int32_t t85 = 1841388;
volatile int64_t x652 = INT64_MIN;
int8_t x656 = INT8_MIN;
uint32_t x689 = 28943U;
static int64_t x700 = -162079054208018411LL;
volatile uint32_t x706 = 441941360U;
int32_t t95 = -273975996;
int16_t x715 = 8365;
uint8_t x717 = 86U;
uint8_t x729 = 58U;
int32_t x732 = 3190902;
uint8_t x756 = 74U;


void f0(void) {
	uint8_t x5 = UINT8_MAX;
	static uint16_t x6 = UINT16_MAX;
	int32_t x7 = 1130007;

	t0 = (x5<<(x6*(x7==x8)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 5U;
	int32_t x10 = INT32_MIN;
	volatile int8_t x11 = -8;
	int64_t x12 = -1LL;

	t1 = (x9<<(x10*(x11==x12)));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x25 = 22U;
	uint16_t x27 = UINT16_MAX;
	int32_t x28 = INT32_MIN;
	int32_t t2 = 2894473;

	t2 = (x25<<(x26*(x27==x28)));

	if (t2 != 22) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = 7685806038485457LL;
	volatile int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MIN;
	int64_t t3 = -990840940903490LL;

	t3 = (x29<<(x30*(x31==x32)));

	if (t3 != 7685806038485457LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x33 = 111U;
	uint64_t x34 = 3995619LLU;
	int64_t x35 = INT64_MIN;
	int32_t x36 = -3;
	uint32_t t4 = 697951400U;

	t4 = (x33<<(x34*(x35==x36)));

	if (t4 != 111U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x38 = -6;
	uint32_t x39 = 32666U;
	int64_t x40 = INT64_MIN;
	uint64_t t5 = 389945LLU;

	t5 = (x37<<(x38*(x39==x40)));

	if (t5 != 683015LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x41 = UINT32_MAX;
	uint16_t x42 = 107U;
	volatile int8_t x43 = 7;
	int64_t x44 = 109LL;

	t6 = (x41<<(x42*(x43==x44)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x59 = 2401U;
	volatile uint16_t x60 = 1602U;
	static uint64_t t7 = 4356379455LLU;

	t7 = (x57<<(x58*(x59==x60)));

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x61 = 45U;
	uint8_t x62 = UINT8_MAX;
	static int16_t x63 = INT16_MAX;
	volatile int16_t x64 = INT16_MIN;
	static volatile int32_t t8 = 1503;

	t8 = (x61<<(x62*(x63==x64)));

	if (t8 != 45) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x65 = 34;
	volatile uint8_t x66 = UINT8_MAX;

	t9 = (x65<<(x66*(x67==x68)));

	if (t9 != 34) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x70 = 0;
	int32_t x71 = 66;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x69<<(x70*(x71==x72)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = 7;
	uint16_t x76 = UINT16_MAX;

	t11 = (x73<<(x74*(x75==x76)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x81 = UINT32_MAX;
	static uint64_t x82 = 451LLU;
	int16_t x83 = -4520;
	static int32_t x84 = INT32_MIN;

	t12 = (x81<<(x82*(x83==x84)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x85 = 1;
	int64_t x86 = -87140LL;
	int16_t x87 = -11;
	int64_t x88 = 28680229900987LL;

	t13 = (x85<<(x86*(x87==x88)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x89 = UINT8_MAX;
	volatile int8_t x90 = INT8_MAX;
	uint32_t x91 = 56U;
	int32_t t14 = 988812280;

	t14 = (x89<<(x90*(x91==x92)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x93 = 150;
	volatile int8_t x94 = -1;
	static int16_t x95 = INT16_MIN;
	static uint32_t x96 = 1U;
	static volatile int32_t t15 = 6226;

	t15 = (x93<<(x94*(x95==x96)));

	if (t15 != 150) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x97 = UINT64_MAX;
	volatile uint8_t x98 = 32U;
	static uint16_t x99 = UINT16_MAX;
	uint16_t x100 = UINT16_MAX;
	volatile uint64_t t16 = 4586218583LLU;

	t16 = (x97<<(x98*(x99==x100)));

	if (t16 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x121 = 50250725LLU;
	uint64_t x123 = UINT64_MAX;
	static int32_t x124 = INT32_MAX;
	volatile uint64_t t17 = 50178617182551855LLU;

	t17 = (x121<<(x122*(x123==x124)));

	if (t17 != 50250725LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = UINT64_MAX;
	uint32_t x131 = 27096146U;
	volatile int8_t x132 = -17;
	static int32_t t18 = 70112693;

	t18 = (x129<<(x130*(x131==x132)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x145 = 5544098U;
	int8_t x146 = 45;
	volatile uint32_t t19 = 334U;

	t19 = (x145<<(x146*(x147==x148)));

	if (t19 != 5544098U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x157 = 6834036818391772810LLU;
	static volatile uint8_t x158 = 57U;
	volatile int32_t x159 = INT32_MIN;
	int16_t x160 = -1;
	uint64_t t20 = 934049823635827LLU;

	t20 = (x157<<(x158*(x159==x160)));

	if (t20 != 6834036818391772810LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x161 = 6343U;
	volatile int32_t x162 = 20833;
	static uint8_t x163 = 6U;
	int64_t x164 = INT64_MIN;
	int32_t t21 = 365797586;

	t21 = (x161<<(x162*(x163==x164)));

	if (t21 != 6343) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x165 = 1688056U;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 26980691U;
	volatile uint32_t t22 = 776677U;

	t22 = (x165<<(x166*(x167==x168)));

	if (t22 != 1688056U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x169 = 4746U;
	static volatile int64_t x170 = -130246243LL;
	static volatile int64_t x171 = -1LL;
	int8_t x172 = INT8_MIN;
	int32_t t23 = -4788;

	t23 = (x169<<(x170*(x171==x172)));

	if (t23 != 4746) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x173 = UINT32_MAX;
	static int16_t x174 = INT16_MIN;
	uint8_t x176 = 2U;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x173<<(x174*(x175==x176)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x177 = 245671215057139665LL;
	static volatile uint16_t x178 = UINT16_MAX;
	uint64_t x179 = 70306385349410539LLU;
	int16_t x180 = -1;
	int64_t t25 = -33208463218455605LL;

	t25 = (x177<<(x178*(x179==x180)));

	if (t25 != 245671215057139665LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MIN;
	int16_t x191 = -1;
	volatile int16_t x192 = -34;
	volatile int32_t t26 = INT32_MAX;

	t26 = (x189<<(x190*(x191==x192)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x193 = UINT64_MAX;
	uint32_t x194 = 3197336U;

	t27 = (x193<<(x194*(x195==x196)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x202 = 6722144245692LLU;
	int64_t x203 = INT64_MAX;

	t28 = (x201<<(x202*(x203==x204)));

	if (t28 != 4382356580353844LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x205 = UINT8_MAX;
	volatile uint64_t x206 = UINT64_MAX;
	int16_t x207 = INT16_MIN;
	volatile int32_t t29 = 4268998;

	t29 = (x205<<(x206*(x207==x208)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x221 = 1079;
	volatile int32_t x222 = INT32_MIN;
	int32_t x224 = -256146;
	int32_t t30 = 150436;

	t30 = (x221<<(x222*(x223==x224)));

	if (t30 != 1079) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x225 = 11U;
	static uint64_t x226 = UINT64_MAX;
	int8_t x228 = -57;

	t31 = (x225<<(x226*(x227==x228)));

	if (t31 != 11) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x233 = INT64_MAX;
	volatile uint8_t x234 = UINT8_MAX;
	static int16_t x236 = INT16_MIN;
	int64_t t32 = INT64_MAX;

	t32 = (x233<<(x234*(x235==x236)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x237 = 711U;
	static int8_t x239 = 19;

	t33 = (x237<<(x238*(x239==x240)));

	if (t33 != 711U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x257 = 54U;
	static volatile uint64_t x258 = 10LLU;
	int8_t x259 = -1;
	uint64_t x260 = 30617LLU;
	int32_t t34 = 11169938;

	t34 = (x257<<(x258*(x259==x260)));

	if (t34 != 54) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x263 = INT8_MIN;
	volatile int32_t t35 = -138491007;

	t35 = (x261<<(x262*(x263==x264)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x266 = -1;
	uint16_t x267 = 179U;
	uint64_t x268 = 26614541LLU;
	volatile uint32_t t36 = 835850U;

	t36 = (x265<<(x266*(x267==x268)));

	if (t36 != 1953U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x269 = 0LLU;
	volatile uint8_t x271 = 17U;
	int16_t x272 = -8164;
	uint64_t t37 = 221851348282LLU;

	t37 = (x269<<(x270*(x271==x272)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MIN;
	int32_t t38 = 3049000;

	t38 = (x281<<(x282*(x283==x284)));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x285 = 1;
	int64_t x286 = INT64_MIN;
	uint16_t x287 = 1507U;
	int16_t x288 = -15;

	t39 = (x285<<(x286*(x287==x288)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x289 = INT64_MAX;
	int64_t x290 = -215634LL;
	static int64_t x292 = INT64_MAX;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x289<<(x290*(x291==x292)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x300 = -1;

	t41 = (x297<<(x298*(x299==x300)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x306 = -1LL;
	int16_t x307 = INT16_MAX;

	t42 = (x305<<(x306*(x307==x308)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x309 = INT16_MAX;
	uint32_t x310 = UINT32_MAX;
	static int32_t x311 = INT32_MIN;
	uint8_t x312 = 0U;
	volatile int32_t t43 = -275;

	t43 = (x309<<(x310*(x311==x312)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x314 = 12161U;
	int32_t x315 = INT32_MAX;
	int16_t x316 = 7;
	int32_t t44 = -37;

	t44 = (x313<<(x314*(x315==x316)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x322 = 241993771134LLU;
	uint8_t x323 = 10U;
	volatile uint32_t x324 = UINT32_MAX;
	int64_t t45 = -65LL;

	t45 = (x321<<(x322*(x323==x324)));

	if (t45 != 26153272249800LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x329 = 0;
	volatile int16_t x330 = -8;
	volatile int64_t x331 = -1LL;
	static int64_t x332 = INT64_MIN;
	static volatile int32_t t46 = -599;

	t46 = (x329<<(x330*(x331==x332)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x341 = 3;
	uint16_t x342 = 1147U;
	volatile int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MAX;
	int32_t t47 = -382210544;

	t47 = (x341<<(x342*(x343==x344)));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x345 = 225U;
	volatile int32_t x346 = INT32_MIN;
	static uint64_t x348 = 190010570324403LLU;

	t48 = (x345<<(x346*(x347==x348)));

	if (t48 != 225) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x349 = INT8_MAX;
	int16_t x350 = INT16_MAX;
	uint32_t x351 = 110U;
	volatile uint32_t x352 = UINT32_MAX;
	static int32_t t49 = 1612660;

	t49 = (x349<<(x350*(x351==x352)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x353 = 1109486886448LLU;
	int16_t x354 = 758;
	static volatile uint8_t x355 = 1U;
	static int32_t x356 = INT32_MAX;
	static volatile uint64_t t50 = 6024827LLU;

	t50 = (x353<<(x354*(x355==x356)));

	if (t50 != 1109486886448LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x358 = 6U;
	volatile int64_t x359 = INT64_MIN;
	int16_t x360 = -1;
	volatile uint32_t t51 = 17034173U;

	t51 = (x357<<(x358*(x359==x360)));

	if (t51 != 3U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x361 = 1U;
	volatile uint64_t x362 = 81092009764937873LLU;
	uint64_t x363 = 28203394810826LLU;
	static volatile int32_t t52 = -4;

	t52 = (x361<<(x362*(x363==x364)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x369 = 341360666902352LL;
	uint8_t x370 = UINT8_MAX;
	static int64_t x371 = 12939818720227667LL;
	static int16_t x372 = INT16_MIN;
	int64_t t53 = 13641093003LL;

	t53 = (x369<<(x370*(x371==x372)));

	if (t53 != 341360666902352LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x373 = UINT32_MAX;
	static int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	volatile int8_t x376 = INT8_MIN;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x373<<(x374*(x375==x376)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x381 = 1357921938708173LL;
	volatile int64_t x382 = INT64_MIN;
	static int32_t x383 = 137167;
	int16_t x384 = INT16_MIN;

	t55 = (x381<<(x382*(x383==x384)));

	if (t55 != 1357921938708173LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x390 = 9578LLU;
	int64_t x391 = INT64_MAX;
	uint64_t x392 = UINT64_MAX;
	int32_t t56 = -7335077;

	t56 = (x389<<(x390*(x391==x392)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x393 = 41;
	int8_t x394 = INT8_MAX;
	int8_t x395 = -1;
	int8_t x396 = INT8_MIN;

	t57 = (x393<<(x394*(x395==x396)));

	if (t57 != 41) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x401 = UINT8_MAX;
	static uint64_t x402 = 252LLU;
	int64_t x403 = -1LL;
	static int64_t x404 = INT64_MAX;
	static volatile int32_t t58 = -32244;

	t58 = (x401<<(x402*(x403==x404)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x410 = -1;
	int32_t x411 = 147754;
	static uint64_t t59 = UINT64_MAX;

	t59 = (x409<<(x410*(x411==x412)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x414 = UINT16_MAX;
	int32_t x415 = 1;
	volatile int16_t x416 = INT16_MIN;
	int64_t t60 = -480623175255LL;

	t60 = (x413<<(x414*(x415==x416)));

	if (t60 != 97LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x421 = INT16_MAX;
	int32_t x422 = 830560276;
	uint32_t x423 = 353U;
	volatile uint16_t x424 = 47U;
	volatile int32_t t61 = -41982889;

	t61 = (x421<<(x422*(x423==x424)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x425 = 12701;
	int32_t x426 = INT32_MAX;
	int8_t x427 = 5;
	volatile int32_t t62 = 1515142;

	t62 = (x425<<(x426*(x427==x428)));

	if (t62 != 12701) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x433 = 4U;
	volatile int64_t x436 = -1LL;
	static volatile int32_t t63 = 285809;

	t63 = (x433<<(x434*(x435==x436)));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x437 = UINT64_MAX;
	int16_t x438 = 291;
	static uint32_t x439 = UINT32_MAX;
	int32_t x440 = INT32_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = (x437<<(x438*(x439==x440)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x441 = 881390490818782066LL;
	int8_t x442 = -1;
	int64_t t65 = 2218831680704805LL;

	t65 = (x441<<(x442*(x443==x444)));

	if (t65 != 881390490818782066LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x446 = INT32_MIN;
	int32_t x447 = INT32_MIN;

	t66 = (x445<<(x446*(x447==x448)));

	if (t66 != 24094125062681LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x453 = 54423083022271695LLU;
	int64_t x454 = INT64_MAX;
	int16_t x455 = 1;
	static int8_t x456 = INT8_MIN;

	t67 = (x453<<(x454*(x455==x456)));

	if (t67 != 54423083022271695LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x457 = 13462118925LL;
	static int16_t x458 = 4003;
	int64_t x459 = -1LL;
	int8_t x460 = 1;
	int64_t t68 = 1LL;

	t68 = (x457<<(x458*(x459==x460)));

	if (t68 != 13462118925LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x466 = 1;
	int8_t x467 = INT8_MIN;
	static uint64_t x468 = 425007048LLU;
	static volatile int32_t t69 = -5435755;

	t69 = (x465<<(x466*(x467==x468)));

	if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x486 = 52U;
	uint32_t x488 = 283495780U;
	int32_t t70 = 1879;

	t70 = (x485<<(x486*(x487==x488)));

	if (t70 != 39) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x493 = 0LLU;
	uint32_t x496 = 1553U;
	uint64_t t71 = 4375186309466810025LLU;

	t71 = (x493<<(x494*(x495==x496)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x497 = INT32_MAX;
	static uint16_t x498 = 24U;
	int32_t x499 = INT32_MIN;
	int8_t x500 = INT8_MIN;
	int32_t t72 = INT32_MAX;

	t72 = (x497<<(x498*(x499==x500)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x501 = INT16_MAX;
	int16_t x502 = INT16_MIN;
	int32_t x503 = 42;
	static int32_t x504 = INT32_MAX;
	static int32_t t73 = 8601;

	t73 = (x501<<(x502*(x503==x504)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x509 = 457751U;
	int8_t x510 = INT8_MAX;
	int32_t x511 = -8837;
	volatile int16_t x512 = INT16_MAX;
	uint32_t t74 = 432582681U;

	t74 = (x509<<(x510*(x511==x512)));

	if (t74 != 457751U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x513 = 0U;
	int64_t x514 = -28511894LL;
	static int8_t x515 = INT8_MAX;
	uint32_t x516 = 1094086U;
	uint32_t t75 = 2633U;

	t75 = (x513<<(x514*(x515==x516)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x517 = UINT64_MAX;
	int16_t x518 = 0;
	uint32_t x519 = 9975774U;
	int32_t x520 = -157;
	uint64_t t76 = UINT64_MAX;

	t76 = (x517<<(x518*(x519==x520)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x521 = INT64_MAX;
	int64_t x522 = INT64_MIN;
	volatile int8_t x523 = 4;
	int16_t x524 = INT16_MIN;
	static int64_t t77 = INT64_MAX;

	t77 = (x521<<(x522*(x523==x524)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x549 = 4777;
	uint64_t x550 = UINT64_MAX;
	int8_t x551 = 1;
	int32_t x552 = INT32_MAX;
	int32_t t78 = 7871;

	t78 = (x549<<(x550*(x551==x552)));

	if (t78 != 4777) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x555 = INT64_MAX;
	int32_t x556 = INT32_MAX;
	volatile uint32_t t79 = 20758419U;

	t79 = (x553<<(x554*(x555==x556)));

	if (t79 != 3257732U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x557 = 23;
	static volatile int64_t x558 = -8406037829252019LL;
	int16_t x559 = -1;
	int16_t x560 = INT16_MAX;
	int32_t t80 = 165;

	t80 = (x557<<(x558*(x559==x560)));

	if (t80 != 23) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x569 = INT64_MAX;
	volatile int8_t x570 = 1;
	static uint16_t x571 = 0U;
	int16_t x572 = INT16_MAX;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x569<<(x570*(x571==x572)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x577 = INT32_MAX;
	int32_t x578 = INT32_MIN;
	int64_t x579 = -1LL;
	uint64_t x580 = 25683681004661546LLU;
	static int32_t t82 = INT32_MAX;

	t82 = (x577<<(x578*(x579==x580)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x593 = INT64_MAX;
	int64_t x594 = 1LL;
	int32_t x595 = -1;
	uint16_t x596 = 5395U;

	t83 = (x593<<(x594*(x595==x596)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x597 = UINT64_MAX;
	int64_t x598 = 3394317516LL;
	static volatile uint32_t x600 = 1659U;
	uint64_t t84 = UINT64_MAX;

	t84 = (x597<<(x598*(x599==x600)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x609 = INT8_MAX;
	static volatile uint32_t x610 = 2U;
	volatile int16_t x611 = -1;
	uint32_t x612 = UINT32_MAX;

	t85 = (x609<<(x610*(x611==x612)));

	if (t85 != 508) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x625 = 374141239LL;
	uint16_t x626 = 0U;
	int64_t x627 = 4153122844737874338LL;
	int16_t x628 = INT16_MAX;
	int64_t t86 = 1885000024106LL;

	t86 = (x625<<(x626*(x627==x628)));

	if (t86 != 374141239LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x645 = INT16_MAX;
	uint64_t x646 = 259449591307LLU;
	volatile int64_t x647 = INT64_MIN;
	uint32_t x648 = 1614842301U;
	static volatile int32_t t87 = 0;

	t87 = (x645<<(x646*(x647==x648)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x649 = INT64_MAX;
	uint32_t x650 = UINT32_MAX;
	int16_t x651 = INT16_MIN;
	static volatile int64_t t88 = INT64_MAX;

	t88 = (x649<<(x650*(x651==x652)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x653 = 26;
	volatile uint16_t x654 = UINT16_MAX;
	volatile int8_t x655 = INT8_MAX;
	volatile int32_t t89 = -5171;

	t89 = (x653<<(x654*(x655==x656)));

	if (t89 != 26) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x677 = 384793067U;
	int16_t x678 = INT16_MAX;
	int32_t x679 = 7;
	uint32_t x680 = 330283669U;
	volatile uint32_t t90 = 97U;

	t90 = (x677<<(x678*(x679==x680)));

	if (t90 != 384793067U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x685 = 3U;
	uint64_t x686 = 142693436694LLU;
	static uint8_t x687 = 28U;
	int8_t x688 = 1;
	volatile int32_t t91 = -908;

	t91 = (x685<<(x686*(x687==x688)));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x690 = -25;
	int32_t x691 = INT32_MAX;
	static uint64_t x692 = 1168LLU;
	static uint32_t t92 = 4273893U;

	t92 = (x689<<(x690*(x691==x692)));

	if (t92 != 28943U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x693 = 570394;
	int8_t x694 = 5;
	static uint16_t x695 = 394U;
	volatile int8_t x696 = INT8_MAX;
	volatile int32_t t93 = -1127645;

	t93 = (x693<<(x694*(x695==x696)));

	if (t93 != 570394) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x697 = UINT64_MAX;
	int32_t x698 = INT32_MAX;
	volatile uint16_t x699 = 60U;
	static volatile uint64_t t94 = UINT64_MAX;

	t94 = (x697<<(x698*(x699==x700)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x705 = 564;
	int64_t x707 = INT64_MIN;
	uint16_t x708 = UINT16_MAX;

	t95 = (x705<<(x706*(x707==x708)));

	if (t95 != 564) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x713 = UINT16_MAX;
	int8_t x714 = 3;
	int16_t x716 = -1;
	int32_t t96 = 1;

	t96 = (x713<<(x714*(x715==x716)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x718 = 1U;
	uint16_t x719 = UINT16_MAX;
	int64_t x720 = INT64_MIN;
	static volatile int32_t t97 = -4234939;

	t97 = (x717<<(x718*(x719==x720)));

	if (t97 != 86) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x730 = UINT64_MAX;
	static int64_t x731 = INT64_MAX;
	int32_t t98 = -1927;

	t98 = (x729<<(x730*(x731==x732)));

	if (t98 != 58) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x753 = INT32_MAX;
	static uint32_t x754 = 46076U;
	int64_t x755 = INT64_MIN;
	volatile int32_t t99 = INT32_MAX;

	t99 = (x753<<(x754*(x755==x756)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

