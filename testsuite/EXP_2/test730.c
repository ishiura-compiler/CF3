#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x10 = 110;
volatile uint64_t x12 = UINT64_MAX;
int32_t x23 = INT32_MIN;
uint16_t x29 = 859U;
volatile uint32_t t5 = 17811206U;
static volatile int16_t x41 = -1;
static volatile int16_t x50 = -1;
static int16_t x71 = INT16_MIN;
int64_t x104 = INT64_MIN;
static int64_t t12 = -5669304LL;
int16_t x107 = -1266;
int32_t x111 = 1151;
int64_t x118 = INT64_MIN;
static int32_t x130 = INT32_MIN;
static int8_t x149 = INT8_MAX;
static int64_t x152 = 138LL;
static volatile int64_t t20 = 3084782580143LL;
int32_t x157 = -1;
int16_t x162 = -1644;
int32_t x179 = INT32_MIN;
volatile int32_t x180 = -1;
int8_t x183 = INT8_MAX;
uint32_t t26 = 87743289U;
uint64_t x189 = 143551502LLU;
uint16_t x191 = UINT16_MAX;
volatile int64_t x207 = INT64_MAX;
int16_t x219 = -16251;
uint64_t x221 = 2278563486058238LLU;
int16_t x224 = INT16_MAX;
uint64_t t33 = 5530537426175439919LLU;
uint16_t x236 = 0U;
uint16_t x243 = 6U;
volatile int32_t t37 = -789811779;
static uint32_t x246 = 243U;
static int64_t x253 = INT64_MAX;
volatile int64_t t42 = -110290875754968326LL;
int8_t x276 = INT8_MAX;
int32_t t43 = 178881;
int32_t x280 = 6;
static int16_t x281 = INT16_MIN;
int8_t x286 = -1;
static volatile uint32_t x307 = 3429855U;
int32_t x310 = 123;
uint64_t t50 = 25LLU;
static int16_t x317 = -5;
int64_t x319 = INT64_MIN;
uint16_t x335 = UINT16_MAX;
volatile int32_t t54 = 244945692;
int8_t x343 = -18;
uint64_t t56 = 43659793LLU;
uint16_t x348 = UINT16_MAX;
volatile uint64_t t60 = 3604805799763317LLU;
static int64_t x366 = -1660LL;
int32_t t63 = -6514;
static volatile int8_t x387 = INT8_MIN;
volatile uint8_t x388 = UINT8_MAX;
int8_t x393 = -1;
int16_t x394 = -623;
uint64_t t67 = 333LLU;
int32_t x404 = -1;
int64_t t68 = -12205201667LL;
int8_t x406 = INT8_MIN;
uint64_t x407 = 24642321349088LLU;
uint64_t t69 = 681179369999157LLU;
int8_t x410 = INT8_MAX;
int32_t x418 = INT32_MIN;
static volatile int32_t x429 = -15;
int16_t x435 = INT16_MIN;
static int32_t x440 = INT32_MIN;
static uint32_t t75 = 22787U;
uint8_t x457 = 117U;
int32_t x458 = -1;
int32_t x460 = -96899;
volatile int32_t x463 = 49;
int32_t t78 = 737794;
int8_t x465 = -3;
uint16_t x468 = 12659U;
int64_t x478 = -1LL;
int64_t t81 = 10762089722466LL;
int8_t x484 = 50;
static uint8_t x485 = 0U;
uint64_t x487 = 5299629LLU;
int8_t x489 = -20;
int8_t x491 = INT8_MIN;
int8_t x492 = INT8_MIN;
volatile int16_t x508 = INT16_MIN;
static volatile uint64_t t87 = 257066LLU;
int8_t x509 = -7;
volatile int32_t x513 = INT32_MAX;
volatile int64_t x525 = -9364882714LL;
int8_t x527 = INT8_MIN;
static int64_t t92 = 1470482903LL;
static uint16_t x537 = 292U;
static uint32_t x538 = UINT32_MAX;
int8_t x543 = INT8_MIN;
volatile int32_t t95 = -230;
volatile uint8_t x547 = 85U;
int64_t x548 = -1LL;


void f0(void) {
	int8_t x9 = -5;
	uint16_t x11 = 181U;
	volatile uint64_t t0 = 13LLU;

	t0 = ((x9%(x10%x11))-x12);

	if (t0 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	static int32_t x14 = INT32_MAX;
	volatile uint16_t x15 = 127U;
	uint16_t x16 = 191U;
	int32_t t1 = 63941;

	t1 = ((x13%(x14%x15))-x16);

	if (t1 != -190) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 619U;
	static int8_t x22 = 3;
	static int16_t x24 = INT16_MAX;
	volatile int32_t t2 = 220;

	t2 = ((x21%(x22%x23))-x24);

	if (t2 != -32766) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x25 = -1;
	static volatile uint16_t x26 = 3U;
	int8_t x27 = INT8_MAX;
	uint64_t x28 = 522968136405LLU;
	static volatile uint64_t t3 = 335958586583611LLU;

	t3 = ((x25%(x26%x27))-x28);

	if (t3 != 18446743550741415210LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x30 = 11U;
	int16_t x31 = INT16_MIN;
	uint16_t x32 = UINT16_MAX;
	static int32_t t4 = -7203863;

	t4 = ((x29%(x30%x31))-x32);

	if (t4 != -65534) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x33 = UINT16_MAX;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;

	t5 = ((x33%(x34%x35))-x36);

	if (t5 != 98303U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x42 = 159;
	volatile uint64_t x43 = 131491LLU;
	int32_t x44 = INT32_MIN;
	static uint64_t t6 = 4114LLU;

	t6 = ((x41%(x42%x43))-x44);

	if (t6 != 2147483768LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x49 = -68819384249348077LL;
	int16_t x51 = INT16_MAX;
	int8_t x52 = -1;
	static volatile int64_t t7 = 40327948LL;

	t7 = ((x49%(x50%x51))-x52);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = -1195679068373251LL;
	volatile int32_t x55 = 91799;
	uint32_t x56 = 11928U;
	int64_t t8 = -1LL;

	t8 = ((x53%(x54%x55))-x56);

	if (t8 != -12056LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = INT16_MAX;
	static volatile int8_t x70 = INT8_MIN;
	int8_t x72 = INT8_MAX;
	int32_t t9 = -5;

	t9 = ((x69%(x70%x71))-x72);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x89 = UINT32_MAX;
	int8_t x90 = -1;
	uint32_t x91 = 56U;
	int16_t x92 = INT16_MIN;
	static volatile uint32_t t10 = 76257U;

	t10 = ((x89%(x90%x91))-x92);

	if (t10 != 32771U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x93 = 1U;
	int16_t x94 = INT16_MIN;
	int64_t x95 = INT64_MIN;
	int64_t x96 = -1LL;
	int64_t t11 = 856748LL;

	t11 = ((x93%(x94%x95))-x96);

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x101 = -446964LL;
	static int64_t x102 = -6629133274101372LL;
	static volatile int32_t x103 = INT32_MIN;

	t12 = ((x101%(x102%x103))-x104);

	if (t12 != 9223372036854328844LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x105 = 82LLU;
	int64_t x106 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	volatile uint64_t t13 = 321192624739LLU;

	t13 = ((x105%(x106%x107))-x108);

	if (t13 != 32850LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x109 = INT64_MAX;
	uint16_t x110 = 4U;
	int64_t x112 = INT64_MAX;
	volatile int64_t t14 = 7331086831707LL;

	t14 = ((x109%(x110%x111))-x112);

	if (t14 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x117 = 50U;
	int32_t x119 = INT32_MAX;
	uint64_t x120 = UINT64_MAX;
	uint64_t t15 = 1LLU;

	t15 = ((x117%(x118%x119))-x120);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x129 = 281450233LL;
	int64_t x131 = -450289663626031LL;
	int16_t x132 = -22;
	static int64_t t16 = 1770793LL;

	t16 = ((x129%(x130%x131))-x132);

	if (t16 != 281450255LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x137 = 6U;
	volatile uint8_t x138 = UINT8_MAX;
	static int8_t x139 = 19;
	int8_t x140 = -1;
	volatile int32_t t17 = 23;

	t17 = ((x137%(x138%x139))-x140);

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x141 = -2;
	static uint16_t x142 = 915U;
	uint64_t x143 = 5882723467LLU;
	volatile int8_t x144 = INT8_MIN;
	volatile uint64_t t18 = 778919712928054LLU;

	t18 = ((x141%(x142%x143))-x144);

	if (t18 != 142LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = -8112;
	int8_t x147 = INT8_MIN;
	int8_t x148 = -7;
	volatile int32_t t19 = 555;

	t19 = ((x145%(x146%x147))-x148);

	if (t19 != 38) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x150 = 6U;
	int64_t x151 = 2414062506LL;

	t20 = ((x149%(x150%x151))-x152);

	if (t20 != -137LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MIN;
	static int8_t x160 = INT8_MIN;
	static volatile int64_t t21 = 3198909788478524357LL;

	t21 = ((x157%(x158%x159))-x160);

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x161 = INT32_MAX;
	int64_t x163 = 1650LL;
	volatile int64_t x164 = 1140647407198755092LL;
	volatile int64_t t22 = 118070LL;

	t22 = ((x161%(x162%x163))-x164);

	if (t22 != -1140647407198754665LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x169 = INT8_MAX;
	static volatile int16_t x170 = -1;
	int32_t x171 = INT32_MIN;
	static int8_t x172 = -10;
	int32_t t23 = 344618095;

	t23 = ((x169%(x170%x171))-x172);

	if (t23 != 10) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x177 = 18;
	int16_t x178 = INT16_MIN;
	int32_t t24 = -13015381;

	t24 = ((x177%(x178%x179))-x180);

	if (t24 != 19) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x181 = 0;
	volatile int16_t x182 = INT16_MAX;
	uint8_t x184 = 93U;
	volatile int32_t t25 = 1;

	t25 = ((x181%(x182%x183))-x184);

	if (t25 != -93) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x185 = 25088U;
	volatile uint32_t x186 = UINT32_MAX;
	static int32_t x187 = INT32_MAX;
	int16_t x188 = INT16_MIN;

	t26 = ((x185%(x186%x187))-x188);

	if (t26 != 32768U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x190 = INT64_MIN;
	volatile int16_t x192 = -77;
	uint64_t t27 = 110010468459136409LLU;

	t27 = ((x189%(x190%x191))-x192);

	if (t27 != 143551579LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x197 = INT64_MIN;
	int64_t x198 = -1LL;
	static uint64_t x199 = 2149311163521LLU;
	int8_t x200 = -1;
	volatile uint64_t t28 = 28700623342815162LLU;

	t28 = ((x197%(x198%x199))-x200);

	if (t28 != 913714241274LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	static uint64_t x208 = UINT64_MAX;
	uint64_t t29 = 3055LLU;

	t29 = ((x205%(x206%x207))-x208);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MAX;
	uint64_t x212 = 25990208659013LLU;
	volatile uint64_t t30 = 12028366LLU;

	t30 = ((x209%(x210%x211))-x212);

	if (t30 != 18446718083500892603LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x213 = INT32_MAX;
	volatile uint64_t x214 = UINT64_MAX;
	volatile uint64_t x215 = 29046307LLU;
	int64_t x216 = -139934802906595LL;
	volatile uint64_t t31 = 59LLU;

	t31 = ((x213%(x214%x215))-x216);

	if (t31 != 139934804004306LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x217 = INT16_MAX;
	int64_t x218 = INT64_MAX;
	volatile int32_t x220 = INT32_MIN;
	static int64_t t32 = -23104624323742LL;

	t32 = ((x217%(x218%x219))-x220);

	if (t32 != 2147484463LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x222 = 1U;
	static int16_t x223 = -7;

	t33 = ((x221%(x222%x223))-x224);

	if (t33 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x225 = 121;
	int32_t x226 = -7030;
	static volatile int32_t x227 = 125040;
	int32_t x228 = 28064;
	int32_t t34 = 3666;

	t34 = ((x225%(x226%x227))-x228);

	if (t34 != -27943) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x233 = -3;
	volatile uint64_t x234 = 82356456678709862LLU;
	int16_t x235 = INT16_MIN;
	uint64_t t35 = 985850LLU;

	t35 = ((x233%(x234%x235))-x236);

	if (t35 != 81254234357252387LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x237 = -7;
	int64_t x238 = -1LL;
	static volatile int16_t x239 = 176;
	int8_t x240 = INT8_MAX;
	int64_t t36 = -417418LL;

	t36 = ((x237%(x238%x239))-x240);

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x241 = -1;
	volatile uint8_t x242 = 65U;
	int16_t x244 = INT16_MAX;

	t37 = ((x241%(x242%x243))-x244);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int32_t x247 = INT32_MIN;
	volatile uint16_t x248 = UINT16_MAX;
	uint64_t t38 = 3278224444769LLU;

	t38 = ((x245%(x246%x247))-x248);

	if (t38 != 18446744073709486213LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x249 = UINT32_MAX;
	int32_t x250 = INT32_MIN;
	int32_t x251 = 66873160;
	uint64_t x252 = UINT64_MAX;
	uint64_t t39 = 3259063LLU;

	t39 = ((x249%(x250%x251))-x252);

	if (t39 != 7542528LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x254 = -1;
	volatile int64_t x255 = -10279633399570413LL;
	volatile int8_t x256 = INT8_MIN;
	volatile int64_t t40 = 16633431LL;

	t40 = ((x253%(x254%x255))-x256);

	if (t40 != 128LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x257 = -4181;
	int32_t x258 = -1;
	uint16_t x259 = 5U;
	int64_t x260 = INT64_MAX;
	int64_t t41 = 10697378791LL;

	t41 = ((x257%(x258%x259))-x260);

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x261 = -1;
	volatile int64_t x262 = -1LL;
	int64_t x263 = 162943453834LL;
	int32_t x264 = -761;

	t42 = ((x261%(x262%x263))-x264);

	if (t42 != 761LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x273 = -8;
	int8_t x274 = -1;
	int32_t x275 = INT32_MIN;

	t43 = ((x273%(x274%x275))-x276);

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x277 = -55;
	static uint16_t x278 = 15369U;
	uint64_t x279 = 5082LLU;
	static uint64_t t44 = 12092988894410240LLU;

	t44 = ((x277%(x278%x279))-x280);

	if (t44 != 78LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x282 = -1;
	uint64_t x283 = 23337696555LLU;
	uint8_t x284 = 1U;
	volatile uint64_t t45 = 23700373163065LLU;

	t45 = ((x281%(x282%x283))-x284);

	if (t45 != 16052801107LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x285 = INT16_MIN;
	volatile int64_t x287 = INT64_MIN;
	volatile int8_t x288 = 6;
	int64_t t46 = -73308961526613LL;

	t46 = ((x285%(x286%x287))-x288);

	if (t46 != -6LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x297 = 231178219321188778LLU;
	static int16_t x298 = -4123;
	volatile int32_t x299 = INT32_MIN;
	int64_t x300 = INT64_MIN;
	uint64_t t47 = 37455182271197732LLU;

	t47 = ((x297%(x298%x299))-x300);

	if (t47 != 9454550256175964586LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x301 = 2002924784LLU;
	static volatile uint8_t x302 = 44U;
	int64_t x303 = INT64_MIN;
	int32_t x304 = -34165;
	volatile uint64_t t48 = 33674456017276LLU;

	t48 = ((x301%(x302%x303))-x304);

	if (t48 != 34201LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x305 = -9514721;
	int16_t x306 = INT16_MAX;
	int32_t x308 = INT32_MIN;
	uint32_t t49 = 522288968U;

	t49 = ((x305%(x306%x307))-x308);

	if (t49 != 2147504128U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x311 = INT8_MIN;
	int64_t x312 = -30371349828959658LL;

	t50 = ((x309%(x310%x311))-x312);

	if (t50 != 30371349828959673LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MIN;
	int64_t x315 = INT64_MIN;
	int16_t x316 = 155;
	volatile int64_t t51 = 194200493827985LL;

	t51 = ((x313%(x314%x315))-x316);

	if (t51 != -155LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x318 = INT32_MAX;
	static uint8_t x320 = 12U;
	int64_t t52 = -764182LL;

	t52 = ((x317%(x318%x319))-x320);

	if (t52 != -17LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x329 = -1;
	volatile int32_t x330 = INT32_MAX;
	volatile int8_t x331 = -48;
	volatile int64_t x332 = 321774LL;
	static volatile int64_t t53 = 50775467427145LL;

	t53 = ((x329%(x330%x331))-x332);

	if (t53 != -321775LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x333 = INT8_MAX;
	int8_t x334 = -1;
	volatile int8_t x336 = -5;

	t54 = ((x333%(x334%x335))-x336);

	if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x337 = INT16_MIN;
	uint32_t x338 = 21U;
	static int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MAX;
	int64_t t55 = 9911993366LL;

	t55 = ((x337%(x338%x339))-x340);

	if (t55 != -32775LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = 12263489LLU;
	int8_t x344 = -9;

	t56 = ((x341%(x342%x343))-x344);

	if (t56 != 7894897LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x345 = UINT8_MAX;
	uint64_t x346 = 280281091LLU;
	volatile uint32_t x347 = 694064662U;
	static uint64_t t57 = 369067009413937593LLU;

	t57 = ((x345%(x346%x347))-x348);

	if (t57 != 18446744073709486336LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x349 = -1;
	int64_t x350 = -122LL;
	uint64_t x351 = 2810529217617853819LLU;
	static volatile uint8_t x352 = 34U;
	uint64_t t58 = 3615426140757LLU;

	t58 = ((x349%(x350%x351))-x352);

	if (t58 != 1027487625682837201LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x357 = -13;
	uint32_t x358 = 20205U;
	int8_t x359 = INT8_MIN;
	static volatile int8_t x360 = INT8_MAX;
	volatile uint32_t t59 = 47048638U;

	t59 = ((x357%(x358%x359))-x360);

	if (t59 != 10511U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x361 = -1;
	volatile int8_t x362 = 6;
	static uint64_t x363 = 280538855LLU;
	volatile int16_t x364 = INT16_MIN;

	t60 = ((x361%(x362%x363))-x364);

	if (t60 != 32771LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x365 = UINT8_MAX;
	uint64_t x367 = 2912213282508LLU;
	static int16_t x368 = -244;
	volatile uint64_t t61 = 15429463807051LLU;

	t61 = ((x365%(x366%x367))-x368);

	if (t61 != 499LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x369 = 1060391954;
	int8_t x370 = INT8_MIN;
	volatile int32_t x371 = INT32_MAX;
	int32_t x372 = 159216;
	volatile int32_t t62 = -212338;

	t62 = ((x369%(x370%x371))-x372);

	if (t62 != -159198) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	uint8_t x375 = UINT8_MAX;
	static volatile uint16_t x376 = UINT16_MAX;

	t63 = ((x373%(x374%x375))-x376);

	if (t63 != -65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x385 = 1U;
	uint32_t x386 = 30U;
	static volatile uint32_t t64 = 5U;

	t64 = ((x385%(x386%x387))-x388);

	if (t64 != 4294967042U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x389 = 32U;
	int8_t x390 = -15;
	volatile uint16_t x391 = 3367U;
	volatile int16_t x392 = 4928;
	int32_t t65 = -6;

	t65 = ((x389%(x390%x391))-x392);

	if (t65 != -4926) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x395 = UINT16_MAX;
	uint16_t x396 = 89U;
	int32_t t66 = 253163242;

	t66 = ((x393%(x394%x395))-x396);

	if (t66 != -90) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	static int32_t x399 = INT32_MAX;
	static int16_t x400 = INT16_MIN;

	t67 = ((x397%(x398%x399))-x400);

	if (t67 != 32770LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x401 = -1LL;
	int8_t x402 = -1;
	volatile int32_t x403 = -6412;

	t68 = ((x401%(x402%x403))-x404);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x405 = UINT32_MAX;
	static int16_t x408 = INT16_MIN;

	t69 = ((x405%(x406%x407))-x408);

	if (t69 != 4295000063LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x409 = 19U;
	int16_t x411 = 94;
	uint32_t x412 = 6U;
	uint32_t t70 = 96656U;

	t70 = ((x409%(x410%x411))-x412);

	if (t70 != 13U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x417 = 70U;
	int64_t x419 = INT64_MAX;
	uint16_t x420 = UINT16_MAX;
	static volatile int64_t t71 = 2098391258180385LL;

	t71 = ((x417%(x418%x419))-x420);

	if (t71 != -65465LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x421 = INT16_MIN;
	int32_t x422 = INT32_MAX;
	static int8_t x423 = INT8_MAX;
	uint16_t x424 = UINT16_MAX;
	int32_t t72 = -455182;

	t72 = ((x421%(x422%x423))-x424);

	if (t72 != -65536) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x430 = 12LLU;
	static uint8_t x431 = 28U;
	static uint8_t x432 = 3U;
	volatile uint64_t t73 = 32266LLU;

	t73 = ((x429%(x430%x431))-x432);

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x433 = -15832;
	volatile uint32_t x434 = 18U;
	int32_t x436 = INT32_MAX;
	volatile uint32_t t74 = 137U;

	t74 = ((x433%(x434%x435))-x436);

	if (t74 != 2147483661U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x437 = -2539;
	int8_t x438 = INT8_MIN;
	uint32_t x439 = UINT32_MAX;

	t75 = ((x437%(x438%x439))-x440);

	if (t75 != 2147481109U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x453 = 61641305;
	int16_t x454 = INT16_MIN;
	volatile uint32_t x455 = 3923486U;
	int8_t x456 = INT8_MAX;
	volatile uint32_t t76 = 871170888U;

	t76 = ((x453%(x454%x455))-x456);

	if (t76 != 901766U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x459 = 3277U;
	uint32_t t77 = 2080U;

	t77 = ((x457%(x458%x459))-x460);

	if (t77 != 96911U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x461 = -1;
	volatile int32_t x462 = INT32_MIN;
	int8_t x464 = INT8_MIN;

	t78 = ((x461%(x462%x463))-x464);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x466 = 11780LLU;
	int16_t x467 = INT16_MIN;
	uint64_t t79 = 1LLU;

	t79 = ((x465%(x466%x467))-x468);

	if (t79 != 18446744073709543930LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x473 = INT64_MAX;
	int8_t x474 = INT8_MIN;
	int64_t x475 = INT64_MIN;
	volatile int8_t x476 = 1;
	volatile int64_t t80 = -15930LL;

	t80 = ((x473%(x474%x475))-x476);

	if (t80 != 126LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x477 = INT64_MIN;
	volatile int32_t x479 = INT32_MIN;
	int32_t x480 = INT32_MIN;

	t81 = ((x477%(x478%x479))-x480);

	if (t81 != 2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x481 = 302434788;
	uint16_t x482 = 102U;
	int32_t x483 = INT32_MIN;
	static int32_t t82 = 11612;

	t82 = ((x481%(x482%x483))-x484);

	if (t82 != 46) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x486 = -4;
	uint64_t x488 = 147402847003LLU;
	static volatile uint64_t t83 = 257815LLU;

	t83 = ((x485%(x486%x487))-x488);

	if (t83 != 18446743926306704613LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x490 = 1LL;
	static volatile int64_t t84 = 202612009048LL;

	t84 = ((x489%(x490%x491))-x492);

	if (t84 != 128LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x497 = INT32_MAX;
	uint32_t x498 = UINT32_MAX;
	int64_t x499 = INT64_MAX;
	int64_t x500 = INT64_MAX;
	static volatile int64_t t85 = -207350LL;

	t85 = ((x497%(x498%x499))-x500);

	if (t85 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x501 = INT64_MIN;
	int64_t x502 = INT64_MIN;
	int16_t x503 = -151;
	static uint16_t x504 = 1U;
	volatile int64_t t86 = 101818182LL;

	t86 = ((x501%(x502%x503))-x504);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x505 = -1LL;
	uint16_t x506 = 8099U;
	static uint64_t x507 = UINT64_MAX;

	t87 = ((x505%(x506%x507))-x508);

	if (t87 != 39153LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x510 = -1LL;
	volatile uint32_t x511 = UINT32_MAX;
	uint8_t x512 = 35U;
	int64_t t88 = 907179LL;

	t88 = ((x509%(x510%x511))-x512);

	if (t88 != -35LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x514 = INT8_MAX;
	static volatile int32_t x515 = 3;
	int8_t x516 = INT8_MIN;
	int32_t t89 = -1;

	t89 = ((x513%(x514%x515))-x516);

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x517 = 2;
	uint16_t x518 = 7U;
	volatile int8_t x519 = INT8_MAX;
	volatile int32_t x520 = -1;
	int32_t t90 = -1;

	t90 = ((x517%(x518%x519))-x520);

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x521 = UINT8_MAX;
	uint8_t x522 = 14U;
	int16_t x523 = INT16_MIN;
	int8_t x524 = INT8_MIN;
	volatile int32_t t91 = -943;

	t91 = ((x521%(x522%x523))-x524);

	if (t91 != 131) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x526 = 1U;
	int32_t x528 = INT32_MAX;

	t92 = ((x525%(x526%x527))-x528);

	if (t92 != -2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x529 = -1;
	int8_t x530 = INT8_MAX;
	static volatile int8_t x531 = -25;
	static uint64_t x532 = UINT64_MAX;
	uint64_t t93 = 216473329569479943LLU;

	t93 = ((x529%(x530%x531))-x532);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x539 = INT16_MIN;
	int8_t x540 = INT8_MIN;
	uint32_t t94 = 4918U;

	t94 = ((x537%(x538%x539))-x540);

	if (t94 != 420U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x541 = 2U;
	int8_t x542 = -1;
	uint16_t x544 = 32430U;

	t95 = ((x541%(x542%x543))-x544);

	if (t95 != -32430) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x545 = -1LL;
	int32_t x546 = -3364868;
	volatile int64_t t96 = 1526694454810LL;

	t96 = ((x545%(x546%x547))-x548);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x549 = -1LL;
	uint64_t x550 = 10827670147LLU;
	int8_t x551 = INT8_MIN;
	int8_t x552 = 54;
	uint64_t t97 = 559359192668616LLU;

	t97 = ((x549%(x550%x551))-x552);

	if (t97 != 6416915942LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x553 = 916U;
	int64_t x554 = INT64_MIN;
	volatile uint8_t x555 = UINT8_MAX;
	uint8_t x556 = UINT8_MAX;
	static int64_t t98 = -15086882LL;

	t98 = ((x553%(x554%x555))-x556);

	if (t98 != -235LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x557 = 4926;
	uint16_t x558 = 3929U;
	int16_t x559 = INT16_MAX;
	uint64_t x560 = UINT64_MAX;
	uint64_t t99 = 1136455971663LLU;

	t99 = ((x557%(x558%x559))-x560);

	if (t99 != 998LLU) { NG(); } else { ; }
	
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

