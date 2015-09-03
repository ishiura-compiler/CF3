#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x13 = -1;
volatile int8_t x14 = INT8_MAX;
static int16_t x32 = -245;
uint32_t x33 = UINT32_MAX;
uint64_t x34 = UINT64_MAX;
volatile int64_t x36 = INT64_MIN;
int64_t t9 = -12059671LL;
int64_t x69 = -1LL;
uint32_t x94 = 34U;
int8_t x104 = 7;
uint32_t x108 = UINT32_MAX;
int64_t x125 = INT64_MAX;
static int8_t x126 = INT8_MIN;
volatile int64_t x147 = -90040868LL;
int8_t x156 = INT8_MAX;
volatile uint8_t x168 = 3U;
volatile uint64_t t25 = 330450LLU;
static int64_t x172 = -1LL;
volatile uint64_t x178 = 236336040343151LLU;
int16_t x179 = INT16_MAX;
int16_t x192 = INT16_MAX;
uint8_t x194 = UINT8_MAX;
uint16_t x201 = UINT16_MAX;
uint8_t x209 = 0U;
int32_t t34 = -385417354;
uint64_t t36 = 25627985137479LLU;
int16_t x225 = -9238;
static int8_t x227 = INT8_MIN;
static uint32_t t39 = 8534U;
volatile int64_t t40 = 4192301005736LL;
int16_t x271 = -1;
int8_t x274 = -18;
int64_t x275 = INT64_MIN;
volatile uint16_t x295 = UINT16_MAX;
int16_t x296 = -246;
int16_t x305 = -4;
int64_t x318 = 31309115LL;
int32_t x326 = INT32_MAX;
int32_t x330 = -1;
volatile int32_t t55 = 268;
static int64_t x356 = -52705024384LL;
int32_t x357 = INT32_MIN;
int64_t x358 = INT64_MAX;
int16_t x359 = INT16_MIN;
uint16_t x362 = 43U;
volatile int64_t x363 = INT64_MAX;
volatile int64_t t61 = -217LL;
uint32_t x384 = UINT32_MAX;
int16_t x396 = 5;
static int32_t t64 = 3957;
static volatile int32_t x401 = INT32_MIN;
uint32_t x439 = 13453U;
int8_t x458 = INT8_MIN;
uint64_t t71 = 2405876LLU;
volatile int32_t x468 = INT32_MIN;
int64_t x478 = INT64_MIN;
int64_t x479 = -1LL;
int64_t t74 = 332925243597343LL;
int32_t t75 = 55087210;
int64_t t77 = 132866042676LL;
uint8_t x521 = 26U;
uint16_t x524 = 23U;
static uint32_t x531 = 11523U;
static volatile int32_t x532 = -1010840;
int8_t x533 = -1;
int16_t x534 = -1;
volatile int64_t x542 = INT64_MIN;
int64_t x543 = -1LL;
int64_t t86 = -3LL;
volatile int64_t t90 = -45LL;
volatile int16_t x608 = INT16_MIN;
int32_t x619 = 4865121;
int64_t x620 = INT64_MIN;
int8_t x644 = 9;


void f0(void) {
	static int32_t x9 = 2032292;
	uint32_t x10 = 214U;
	uint32_t x11 = 1960864U;
	int16_t x12 = 7;
	uint32_t t0 = 587U;

	t0 = (x9/((x10&x11)%x12));

	if (t0 != 1016146U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x15 = INT8_MAX;
	volatile int8_t x16 = INT8_MIN;
	int32_t t1 = -41457104;

	t1 = (x13/((x14&x15)%x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x25 = INT16_MIN;
	static volatile int16_t x26 = -159;
	uint16_t x27 = 1U;
	int32_t x28 = INT32_MIN;
	int32_t t2 = 1;

	t2 = (x25/((x26&x27)%x28));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x29 = -1;
	static int32_t x30 = -92308;
	int8_t x31 = -24;
	int32_t t3 = -5682789;

	t3 = (x29/((x30&x31)%x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x35 = -1;
	volatile uint64_t t4 = 61250749505LLU;

	t4 = (x33/((x34&x35)%x36));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	uint32_t x47 = 296525U;
	int32_t x48 = INT32_MIN;
	static volatile uint64_t t5 = 459799145702LLU;

	t5 = (x45/((x46&x47)%x48));

	if (t5 != 62209743103311LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = 15241;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = INT16_MAX;
	uint32_t t6 = 2U;

	t6 = (x49/((x50&x51)%x52));

	if (t6 != 281801U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	uint64_t x59 = 1650471682269444922LLU;
	int64_t x60 = -1LL;
	static volatile uint64_t t7 = 278691603149797169LLU;

	t7 = (x57/((x58&x59)%x60));

	if (t7 != 11LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x62 = 484066566917764618LL;
	int16_t x63 = -1;
	uint64_t x64 = 230096157852667969LLU;
	uint64_t t8 = 7541252806LLU;

	t8 = (x61/((x62&x63)%x64));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x65 = INT8_MIN;
	int16_t x66 = -1;
	int64_t x67 = INT64_MAX;
	static int8_t x68 = -44;

	t9 = (x65/((x66&x67)%x68));

	if (t9 != -18LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x70 = 37U;
	static uint8_t x71 = 4U;
	volatile uint32_t x72 = 3U;
	int64_t t10 = 52737272825478179LL;

	t10 = (x69/((x70&x71)%x72));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MIN;
	uint16_t x74 = 1730U;
	int8_t x75 = -6;
	int16_t x76 = 1905;
	volatile int32_t t11 = -1;

	t11 = (x73/((x74&x75)%x76));

	if (t11 != -18) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x85 = 1003LLU;
	static uint16_t x86 = UINT16_MAX;
	static int64_t x87 = -2734527710511142779LL;
	int64_t x88 = -30560521LL;
	volatile uint64_t t12 = 2396373383LLU;

	t12 = (x85/((x86&x87)%x88));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x93 = INT32_MIN;
	static uint16_t x95 = 15784U;
	int8_t x96 = INT8_MIN;
	volatile uint32_t t13 = 120536940U;

	t13 = (x93/((x94&x95)%x96));

	if (t13 != 67108864U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x101 = 0LL;
	uint8_t x102 = 10U;
	uint8_t x103 = 15U;
	static volatile int64_t t14 = 2600246945523392408LL;

	t14 = (x101/((x102&x103)%x104));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x105 = -1;
	int8_t x106 = INT8_MAX;
	uint8_t x107 = UINT8_MAX;
	static uint32_t t15 = 22U;

	t15 = (x105/((x106&x107)%x108));

	if (t15 != 33818640U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x117 = 28955U;
	int64_t x118 = INT64_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MIN;
	static int64_t t16 = -1255LL;

	t16 = (x117/((x118&x119)%x120));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x127 = -632;
	static uint64_t x128 = 273389555956117442LLU;
	uint64_t t17 = 11528284766744056LLU;

	t17 = (x125/((x126&x127)%x128));

	if (t17 != 71LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x129 = INT16_MIN;
	uint16_t x130 = 14217U;
	uint16_t x131 = UINT16_MAX;
	volatile int16_t x132 = INT16_MAX;
	static int32_t t18 = -316;

	t18 = (x129/((x130&x131)%x132));

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x133 = -4;
	uint64_t x134 = 42LLU;
	uint64_t x135 = 933LLU;
	static uint32_t x136 = 48342U;
	uint64_t t19 = 1LLU;

	t19 = (x133/((x134&x135)%x136));

	if (t19 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x137 = 15U;
	uint16_t x138 = 177U;
	int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MIN;
	volatile int64_t t20 = 85948642311LL;

	t20 = (x137/((x138&x139)%x140));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x145 = 3;
	int16_t x146 = -1;
	uint32_t x148 = 65915U;
	volatile int64_t t21 = 5458LL;

	t21 = (x145/((x146&x147)%x148));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x149 = INT32_MAX;
	int64_t x150 = -58260305334921799LL;
	int32_t x151 = INT32_MIN;
	int32_t x152 = 53;
	int64_t t22 = 4836869LL;

	t22 = (x149/((x150&x151)%x152));

	if (t22 != -46684427LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x153 = 191545U;
	static volatile uint16_t x154 = UINT16_MAX;
	int16_t x155 = INT16_MIN;
	uint32_t t23 = 0U;

	t23 = (x153/((x154&x155)%x156));

	if (t23 != 95772U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x157 = UINT32_MAX;
	static volatile uint8_t x158 = 39U;
	uint16_t x159 = UINT16_MAX;
	uint32_t x160 = UINT32_MAX;
	static uint32_t t24 = 355722U;

	t24 = (x157/((x158&x159)%x160));

	if (t24 != 110127366U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x165 = -558131321LL;
	static int32_t x166 = INT32_MAX;
	uint64_t x167 = 772LLU;

	t25 = (x165/((x166&x167)%x168));

	if (t25 != 18446744073151420295LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x169 = 1113876514032560512LLU;
	int8_t x170 = INT8_MIN;
	uint64_t x171 = 387537LLU;
	volatile uint64_t t26 = 59937265LLU;

	t26 = (x169/((x170&x171)%x172));

	if (t26 != 2874846470392LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x177 = INT64_MIN;
	static int8_t x180 = INT8_MIN;
	uint64_t t27 = 3580751563LLU;

	t27 = (x177/((x178&x179)%x180));

	if (t27 != 304210958041319LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x181 = 18U;
	volatile int8_t x182 = INT8_MAX;
	int16_t x183 = -1;
	static int32_t x184 = INT32_MIN;
	volatile uint32_t t28 = 12U;

	t28 = (x181/((x182&x183)%x184));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x185 = 1U;
	int8_t x186 = INT8_MIN;
	static volatile int32_t x187 = INT32_MAX;
	uint8_t x188 = 19U;
	int32_t t29 = -3634;

	t29 = (x185/((x186&x187)%x188));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x189 = INT16_MAX;
	int32_t x190 = -1;
	uint64_t x191 = 107549LLU;
	volatile uint64_t t30 = 3537095LLU;

	t30 = (x189/((x190&x191)%x192));

	if (t30 != 3LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x193 = INT8_MAX;
	int16_t x195 = -1;
	volatile int16_t x196 = INT16_MIN;
	int32_t t31 = 196108;

	t31 = (x193/((x194&x195)%x196));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x197 = 58;
	int32_t x198 = -1;
	int64_t x199 = -1LL;
	int64_t x200 = -55926167725LL;
	static volatile int64_t t32 = -243499322386184LL;

	t32 = (x197/((x198&x199)%x200));

	if (t32 != -58LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x202 = 25U;
	int32_t x203 = -1;
	static uint32_t x204 = 17426U;
	uint32_t t33 = 28571U;

	t33 = (x201/((x202&x203)%x204));

	if (t33 != 2621U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x210 = INT8_MIN;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = -21;

	t34 = (x209/((x210&x211)%x212));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x217 = 7;
	uint16_t x218 = 5U;
	uint64_t x219 = 13052214129979LLU;
	volatile int32_t x220 = -276093972;
	uint64_t t35 = 6231544041LLU;

	t35 = (x217/((x218&x219)%x220));

	if (t35 != 7LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x221 = UINT8_MAX;
	uint64_t x222 = 8611361008375LLU;
	static int8_t x223 = INT8_MAX;
	static int8_t x224 = -16;

	t36 = (x221/((x222&x223)%x224));

	if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x226 = -1LL;
	uint8_t x228 = UINT8_MAX;
	int64_t t37 = -5784924770992LL;

	t37 = (x225/((x226&x227)%x228));

	if (t37 != 72LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x233 = INT8_MIN;
	static int32_t x234 = 21;
	int8_t x235 = -1;
	int16_t x236 = 748;
	int32_t t38 = -1;

	t38 = (x233/((x234&x235)%x236));

	if (t38 != -6) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MAX;
	uint32_t x259 = UINT32_MAX;
	static uint32_t x260 = UINT32_MAX;

	t39 = (x257/((x258&x259)%x260));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x261 = INT32_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = -1;
	static int64_t x264 = INT64_MIN;

	t40 = (x261/((x262&x263)%x264));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x265 = 3;
	static int64_t x266 = INT64_MIN;
	int8_t x267 = -1;
	volatile uint8_t x268 = 10U;
	int64_t t41 = -176516842LL;

	t41 = (x265/((x266&x267)%x268));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x269 = -1;
	static volatile int16_t x270 = -92;
	int16_t x272 = 695;
	volatile int32_t t42 = -6;

	t42 = (x269/((x270&x271)%x272));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x276 = 3U;
	int64_t t43 = -16497312527928113LL;

	t43 = (x273/((x274&x275)%x276));

	if (t43 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x281 = INT32_MAX;
	uint64_t x282 = 10LLU;
	int8_t x283 = INT8_MAX;
	volatile uint64_t x284 = 81LLU;
	volatile uint64_t t44 = 20LLU;

	t44 = (x281/((x282&x283)%x284));

	if (t44 != 214748364LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x285 = -5;
	volatile uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 1425820U;
	int16_t x288 = INT16_MIN;
	static volatile uint32_t t45 = 312275944U;

	t45 = (x285/((x286&x287)%x288));

	if (t45 != 27531841U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x289 = UINT8_MAX;
	volatile int32_t x290 = 6859475;
	int16_t x291 = -1;
	volatile uint64_t x292 = 414377947799LLU;
	uint64_t t46 = 130612LLU;

	t46 = (x289/((x290&x291)%x292));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x293 = 450U;
	static uint16_t x294 = UINT16_MAX;
	uint32_t t47 = 123U;

	t47 = (x293/((x294&x295)%x296));

	if (t47 != 4U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x297 = UINT32_MAX;
	int16_t x298 = -1;
	int32_t x299 = INT32_MAX;
	uint16_t x300 = 25943U;
	uint32_t t48 = 35689U;

	t48 = (x297/((x298&x299)%x300));

	if (t48 != 165963U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x301 = 864131799U;
	int64_t x302 = 5LL;
	int32_t x303 = -3;
	int64_t x304 = -22953951223LL;
	int64_t t49 = -471228929448166LL;

	t49 = (x301/((x302&x303)%x304));

	if (t49 != 172826359LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x306 = 509356717875327LL;
	int16_t x307 = -6726;
	uint64_t x308 = 81929LLU;
	volatile uint64_t t50 = 515LLU;

	t50 = (x305/((x306&x307)%x308));

	if (t50 != 237031559335289LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	static uint8_t x310 = 2U;
	static uint64_t x311 = UINT64_MAX;
	int8_t x312 = INT8_MAX;
	uint64_t t51 = 71954942108094856LLU;

	t51 = (x309/((x310&x311)%x312));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x317 = INT64_MIN;
	static int16_t x319 = -2;
	int16_t x320 = INT16_MAX;
	int64_t t52 = 1LL;

	t52 = (x317/((x318&x319)%x320));

	if (t52 != -554655844419675LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = 57U;
	uint32_t x323 = 137779001U;
	volatile int32_t x324 = 7243;
	uint32_t t53 = 9U;

	t53 = (x321/((x322&x323)%x324));

	if (t53 != 75350301U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x325 = INT16_MIN;
	volatile int32_t x327 = -1;
	int32_t x328 = 745336;
	volatile int32_t t54 = -62;

	t54 = (x325/((x326&x327)%x328));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x329 = 44;
	int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;

	t55 = (x329/((x330&x331)%x332));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	static int32_t x335 = INT32_MIN;
	uint16_t x336 = 18U;
	volatile int64_t t56 = -3LL;

	t56 = (x333/((x334&x335)%x336));

	if (t56 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = 130675517587996LLU;
	int16_t x343 = -1;
	int64_t x344 = -1LL;
	volatile uint64_t t57 = 74LLU;

	t57 = (x341/((x342&x343)%x344));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x353 = 6027;
	int16_t x354 = INT16_MAX;
	static int32_t x355 = -1;
	int64_t t58 = -3247067LL;

	t58 = (x353/((x354&x355)%x356));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x360 = INT32_MAX;
	int64_t t59 = 4LL;

	t59 = (x357/((x358&x359)%x360));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x361 = INT64_MAX;
	int16_t x364 = -2547;
	int64_t t60 = 21531688155941890LL;

	t60 = (x361/((x362&x363)%x364));

	if (t60 != 214497024112901762LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x373 = 51U;
	static int32_t x374 = -1;
	int64_t x375 = INT64_MAX;
	int16_t x376 = INT16_MIN;

	t61 = (x373/((x374&x375)%x376));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x381 = 245081044LLU;
	int64_t x382 = INT64_MIN;
	volatile uint64_t x383 = UINT64_MAX;
	volatile uint64_t t62 = 37LLU;

	t62 = (x381/((x382&x383)%x384));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x393 = 3U;
	volatile int64_t x394 = INT64_MIN;
	volatile int64_t x395 = INT64_MIN;
	static int64_t t63 = -29LL;

	t63 = (x393/((x394&x395)%x396));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x397 = 3701U;
	int32_t x398 = INT32_MAX;
	int16_t x399 = INT16_MIN;
	volatile uint16_t x400 = 29435U;

	t64 = (x397/((x398&x399)%x400));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x402 = 1021348306LLU;
	static uint8_t x403 = UINT8_MAX;
	uint8_t x404 = 104U;
	uint64_t t65 = 159928483791LLU;

	t65 = (x401/((x402&x403)%x404));

	if (t65 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MIN;
	int64_t x411 = INT64_MAX;
	static uint64_t x412 = 35628014822254051LLU;
	uint64_t t66 = 1517170901841934047LLU;

	t66 = (x409/((x410&x411)%x412));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x429 = UINT8_MAX;
	uint32_t x430 = 5978U;
	uint16_t x431 = UINT16_MAX;
	volatile int64_t x432 = INT64_MIN;
	volatile int64_t t67 = 516LL;

	t67 = (x429/((x430&x431)%x432));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x433 = -1LL;
	int16_t x434 = INT16_MIN;
	int32_t x435 = INT32_MIN;
	int8_t x436 = -15;
	volatile int64_t t68 = 87355770309LL;

	t68 = (x433/((x434&x435)%x436));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x437 = 500;
	static int8_t x438 = INT8_MAX;
	uint16_t x440 = UINT16_MAX;
	uint32_t t69 = 685780U;

	t69 = (x437/((x438&x439)%x440));

	if (t69 != 38U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x441 = INT16_MAX;
	int64_t x442 = 160303381LL;
	static int64_t x443 = INT64_MAX;
	volatile int8_t x444 = INT8_MAX;
	int64_t t70 = -202LL;

	t70 = (x441/((x442&x443)%x444));

	if (t70 != 744LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x457 = 49U;
	int32_t x459 = INT32_MIN;
	static uint64_t x460 = UINT64_MAX;

	t71 = (x457/((x458&x459)%x460));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x465 = INT16_MIN;
	volatile int64_t x466 = -50814385576LL;
	uint32_t x467 = 13U;
	static int64_t t72 = -70411542542204467LL;

	t72 = (x465/((x466&x467)%x468));

	if (t72 != -4096LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x473 = -1;
	uint8_t x474 = 122U;
	int64_t x475 = -1LL;
	volatile int8_t x476 = INT8_MAX;
	int64_t t73 = -4166506LL;

	t73 = (x473/((x474&x475)%x476));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x477 = 82130U;
	uint8_t x480 = 29U;

	t74 = (x477/((x478&x479)%x480));

	if (t74 != -6844LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x481 = 26;
	int32_t x482 = 716273996;
	int16_t x483 = INT16_MAX;
	static int8_t x484 = INT8_MIN;

	t75 = (x481/((x482&x483)%x484));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x493 = INT32_MIN;
	int8_t x494 = -1;
	int8_t x495 = INT8_MAX;
	static uint32_t x496 = 7240U;
	uint32_t t76 = 89665U;

	t76 = (x493/((x494&x495)%x496));

	if (t76 != 16909320U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x505 = -7374LL;
	static volatile int16_t x506 = INT16_MIN;
	volatile int16_t x507 = -1;
	static int64_t x508 = INT64_MAX;

	t77 = (x505/((x506&x507)%x508));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x513 = 5U;
	int16_t x514 = 27;
	uint64_t x515 = 14LLU;
	int8_t x516 = INT8_MIN;
	uint64_t t78 = 235737LLU;

	t78 = (x513/((x514&x515)%x516));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x517 = 0;
	int32_t x518 = 3;
	static volatile int64_t x519 = 50514110673318915LL;
	int32_t x520 = INT32_MIN;
	static volatile int64_t t79 = -1LL;

	t79 = (x517/((x518&x519)%x520));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x522 = UINT16_MAX;
	uint32_t x523 = UINT32_MAX;
	uint32_t t80 = 9808782U;

	t80 = (x521/((x522&x523)%x524));

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x525 = -18;
	int32_t x526 = -2;
	static uint32_t x527 = UINT32_MAX;
	volatile int8_t x528 = -14;
	volatile uint32_t t81 = 1699U;

	t81 = (x525/((x526&x527)%x528));

	if (t81 != 357913939U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x529 = -47809530;
	int16_t x530 = -1;
	uint32_t t82 = 242U;

	t82 = (x529/((x530&x531)%x532));

	if (t82 != 368580U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x535 = 6;
	int8_t x536 = INT8_MIN;
	volatile int32_t t83 = 8605;

	t83 = (x533/((x534&x535)%x536));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x541 = 19848313710036LLU;
	int8_t x544 = INT8_MAX;
	static volatile uint64_t t84 = 153226935LLU;

	t84 = (x541/((x542&x543)%x544));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x549 = -24002;
	volatile int32_t x550 = -97515138;
	uint8_t x551 = 107U;
	int16_t x552 = INT16_MAX;
	volatile int32_t t85 = 29238590;

	t85 = (x549/((x550&x551)%x552));

	if (t85 != -226) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x557 = UINT8_MAX;
	int16_t x558 = INT16_MAX;
	volatile int16_t x559 = -1;
	int64_t x560 = INT64_MIN;

	t86 = (x557/((x558&x559)%x560));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x565 = INT64_MIN;
	uint16_t x566 = 1410U;
	int16_t x567 = INT16_MAX;
	int64_t x568 = INT64_MAX;
	volatile int64_t t87 = 19465271021529LL;

	t87 = (x565/((x566&x567)%x568));

	if (t87 != -6541398607698422LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x573 = UINT32_MAX;
	static int32_t x574 = INT32_MAX;
	int16_t x575 = INT16_MAX;
	volatile uint16_t x576 = 57U;
	uint32_t t88 = 424188291U;

	t88 = (x573/((x574&x575)%x576));

	if (t88 != 87652393U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x581 = 8137094878LLU;
	uint64_t x582 = 9520696124LLU;
	int32_t x583 = INT32_MIN;
	uint32_t x584 = 22U;
	uint64_t t89 = 15175378412977389LLU;

	t89 = (x581/((x582&x583)%x584));

	if (t89 != 1017136859LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x585 = INT64_MIN;
	int16_t x586 = INT16_MAX;
	volatile int64_t x587 = INT64_MAX;
	int64_t x588 = INT64_MAX;

	t90 = (x585/((x586&x587)%x588));

	if (t90 != -281483566907400LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x593 = 81U;
	uint16_t x594 = 83U;
	volatile int64_t x595 = 64LL;
	uint32_t x596 = 21091U;
	static volatile int64_t t91 = -47018955945LL;

	t91 = (x593/((x594&x595)%x596));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x597 = 106U;
	volatile int16_t x598 = 8;
	volatile int32_t x599 = -1;
	uint64_t x600 = 16018295673LLU;
	volatile uint64_t t92 = 6LLU;

	t92 = (x597/((x598&x599)%x600));

	if (t92 != 13LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x605 = INT64_MIN;
	int64_t x606 = INT64_MAX;
	int8_t x607 = -1;
	int64_t t93 = 64LL;

	t93 = (x605/((x606&x607)%x608));

	if (t93 != -281483566907400LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x609 = -104785587378LL;
	static volatile uint64_t x610 = 8456LLU;
	int64_t x611 = -229704089274LL;
	int64_t x612 = INT64_MIN;
	volatile uint64_t t94 = 6143592815031210LLU;

	t94 = (x609/((x610&x611)%x612));

	if (t94 != 72057593628609235LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x613 = INT64_MIN;
	uint64_t x614 = 83631LLU;
	int32_t x615 = -195541;
	volatile int64_t x616 = -1LL;
	uint64_t t95 = 23659626LLU;

	t95 = (x613/((x614&x615)%x616));

	if (t95 != 138482831657054LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x617 = -1;
	uint8_t x618 = 58U;
	int64_t t96 = -2400899768612LL;

	t96 = (x617/((x618&x619)%x620));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x629 = 868630688LLU;
	uint32_t x630 = UINT32_MAX;
	static int64_t x631 = 49455751344LL;
	uint32_t x632 = 1870923228U;
	volatile uint64_t t97 = 1828624423LLU;

	t97 = (x629/((x630&x631)%x632));

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x633 = -1LL;
	volatile uint64_t x634 = UINT64_MAX;
	volatile int64_t x635 = -10875LL;
	int32_t x636 = INT32_MAX;
	uint64_t t98 = 137057368179330221LLU;

	t98 = (x633/((x634&x635)%x636));

	if (t98 != 8589978080LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x641 = UINT8_MAX;
	volatile int8_t x642 = INT8_MAX;
	volatile int16_t x643 = -1001;
	static volatile int32_t t99 = 11272467;

	t99 = (x641/((x642&x643)%x644));

	if (t99 != 51) { NG(); } else { ; }
	
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

