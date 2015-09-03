#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MAX;
uint32_t x6 = 5650U;
int64_t x14 = INT64_MIN;
int16_t x19 = INT16_MAX;
volatile int32_t t4 = 0;
int16_t x32 = INT16_MAX;
int32_t x44 = 244257236;
static int8_t x47 = INT8_MAX;
volatile int8_t x48 = 6;
static int64_t x50 = INT64_MAX;
volatile uint64_t x66 = UINT64_MAX;
int8_t x71 = -1;
int64_t x82 = -1LL;
uint64_t t12 = 1472482121107124240LLU;
int32_t x93 = -1;
uint16_t x95 = 422U;
uint8_t x96 = 67U;
static volatile int64_t t14 = 110950416LL;
uint32_t x98 = 15016U;
int8_t x99 = INT8_MIN;
int32_t x100 = -426153256;
uint32_t x101 = 5971533U;
uint64_t x106 = UINT64_MAX;
int8_t x107 = INT8_MIN;
static volatile uint64_t t17 = 16168863066452LLU;
uint16_t x109 = UINT16_MAX;
int64_t x115 = -440671LL;
volatile int64_t t19 = 4132240LL;
volatile int64_t x132 = -1LL;
static volatile int64_t t21 = -1861LL;
uint64_t x133 = UINT64_MAX;
volatile int16_t x134 = -1;
volatile uint64_t t22 = 252625492169354LLU;
int16_t x142 = -1;
volatile int64_t x144 = 16307235LL;
uint32_t x174 = 25781U;
static int64_t x183 = INT64_MIN;
uint64_t x184 = UINT64_MAX;
uint64_t t28 = 0LLU;
int32_t x189 = INT32_MIN;
static int16_t x209 = INT16_MAX;
int8_t x210 = INT8_MIN;
int32_t t32 = 1;
static volatile uint64_t t34 = 25LLU;
static uint32_t t35 = 8236U;
int16_t x228 = INT16_MAX;
int8_t x233 = INT8_MIN;
uint32_t x238 = 158U;
int32_t x253 = -13036367;
uint16_t x256 = 611U;
uint8_t x258 = 44U;
volatile uint32_t x260 = 332094U;
volatile int8_t x262 = -1;
uint64_t x263 = 34432309532790614LLU;
int32_t x264 = 5269;
volatile uint64_t t43 = 521944762993LLU;
static volatile uint8_t x270 = 0U;
int8_t x289 = -1;
int16_t x291 = INT16_MIN;
volatile uint64_t t48 = 2169683LLU;
int16_t x306 = 62;
volatile int64_t t52 = 9331498309LL;
int16_t x333 = -1;
uint64_t t53 = 1278LLU;
int8_t x338 = INT8_MIN;
volatile uint64_t t57 = 14153868104371875LLU;
int8_t x361 = -2;
static uint8_t x363 = 21U;
volatile int32_t t58 = 16506007;
static uint16_t x368 = UINT16_MAX;
int64_t t60 = -657194211569332LL;
static uint16_t x409 = 18U;
int32_t x411 = 2336951;
int8_t x414 = INT8_MIN;
int16_t x415 = 3;
uint8_t x422 = 0U;
int16_t x424 = INT16_MIN;
uint64_t x434 = 6132LLU;
uint64_t t69 = 266820856064LLU;
uint64_t x445 = 54LLU;
volatile int64_t x447 = -1LL;
volatile uint64_t t70 = 7599144612728LLU;
int16_t x454 = 266;
static volatile int16_t x479 = INT16_MIN;
uint16_t x480 = 2026U;
uint16_t x486 = 87U;
uint32_t x493 = 557809U;
static uint16_t x511 = 0U;
volatile int8_t x513 = INT8_MIN;
int64_t x514 = -1255LL;
static int64_t x521 = 859439633LL;
int32_t x522 = -1;
int32_t x525 = INT32_MIN;
int64_t x526 = 739523975LL;
int16_t x532 = -1;
volatile uint8_t x536 = 110U;
static int64_t x543 = -1LL;
uint32_t x557 = UINT32_MAX;
int32_t x559 = INT32_MAX;
int64_t x560 = INT64_MAX;
static int64_t x584 = 814082203453738LL;
static int32_t x586 = -1;
int8_t x589 = INT8_MIN;
int32_t x598 = INT32_MIN;
int8_t x599 = INT8_MAX;
int8_t x614 = -50;
volatile uint64_t x615 = 0LLU;
volatile uint64_t t97 = 7LLU;


void f0(void) {
	static int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	volatile uint32_t t0 = 1515831U;

	t0 = (((x5+x6)*x7)-x8);

	if (t0 != 4109860992U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x13 = 3240385LLU;
	int32_t x15 = INT32_MAX;
	uint16_t x16 = 36U;
	static uint64_t t1 = 16346282LLU;

	t1 = (((x13+x14)*x15)-x16);

	if (t1 != 9230330710652259867LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x18 = 91;
	static volatile int16_t x20 = INT16_MAX;
	uint64_t t2 = 4889453993104786LLU;

	t2 = (((x17+x18)*x19)-x20);

	if (t2 != 2916263LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x21 = UINT8_MAX;
	int16_t x22 = INT16_MIN;
	int32_t x23 = -3;
	int16_t x24 = 1205;
	volatile int32_t t3 = 80158;

	t3 = (((x21+x22)*x23)-x24);

	if (t3 != 96334) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = 46;
	volatile int16_t x26 = -1;
	volatile int8_t x27 = 5;
	volatile uint8_t x28 = UINT8_MAX;

	t4 = (((x25+x26)*x27)-x28);

	if (t4 != -30) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	volatile int16_t x30 = -6;
	static int16_t x31 = -1;
	volatile int32_t t5 = -184101499;

	t5 = (((x29+x30)*x31)-x32);

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = 3LLU;
	volatile int8_t x42 = -1;
	int64_t x43 = -166103LL;
	static volatile uint64_t t6 = 14376151LLU;

	t6 = (((x41+x42)*x43)-x44);

	if (t6 != 18446744073464962174LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 10079764409LLU;
	volatile int64_t x46 = -1LL;
	volatile uint64_t t7 = 454935828183769LLU;

	t7 = (((x45+x46)*x47)-x48);

	if (t7 != 1280130079810LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x49 = 7633LLU;
	uint8_t x51 = 2U;
	int16_t x52 = INT16_MIN;
	uint64_t t8 = 71221997230479LLU;

	t8 = (((x49+x50)*x51)-x52);

	if (t8 != 48032LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	uint64_t x62 = 153228695786208LLU;
	int16_t x63 = INT16_MIN;
	int8_t x64 = -1;
	volatile uint64_t t9 = 56103660351106126LLU;

	t9 = (((x61+x62)*x63)-x64);

	if (t9 != 13425746171260829697LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = 2;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = INT64_MIN;
	static uint64_t t10 = 326534LLU;

	t10 = (((x65+x66)*x67)-x68);

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 0U;
	volatile int8_t x70 = INT8_MIN;
	int64_t x72 = INT64_MAX;
	static int64_t t11 = 16594364296LL;

	t11 = (((x69+x70)*x71)-x72);

	if (t11 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x83 = 848U;
	uint32_t x84 = 7374285U;

	t12 = (((x81+x82)*x83)-x84);

	if (t12 != 18446744073702175635LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x90 = UINT16_MAX;
	uint32_t x91 = UINT32_MAX;
	volatile int64_t x92 = INT64_MAX;
	int64_t t13 = -90LL;

	t13 = (((x89+x90)*x91)-x92);

	if (t13 != -9223372032559874045LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x94 = -1LL;

	t14 = (((x93+x94)*x95)-x96);

	if (t14 != -911LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x97 = UINT8_MAX;
	volatile uint32_t t15 = 1799U;

	t15 = (((x97+x98)*x99)-x100);

	if (t15 != 424198568U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	uint8_t x104 = 123U;
	volatile uint32_t t16 = 6U;

	t16 = (((x101+x102)*x103)-x104);

	if (t16 != 1522740537U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x105 = 175663759LLU;
	uint32_t x108 = 1298U;

	t17 = (((x105+x106)*x107)-x108);

	if (t17 != 18446744051224589294LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x110 = INT64_MIN;
	uint64_t x111 = 4432106300997475962LLU;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t18 = 3784619LLU;

	t18 = (((x109+x110)*x111)-x112);

	if (t18 != 14100995312696975878LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x113 = -1LL;
	static uint32_t x114 = 10631U;
	static uint32_t x116 = 1599U;

	t19 = (((x113+x114)*x115)-x116);

	if (t19 != -4684334329LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x125 = 31U;
	uint64_t x126 = 163LLU;
	volatile int64_t x127 = INT64_MIN;
	uint32_t x128 = 413851U;
	uint64_t t20 = 298695984164475LLU;

	t20 = (((x125+x126)*x127)-x128);

	if (t20 != 18446744073709137765LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x129 = 3860U;
	int8_t x130 = -1;
	int8_t x131 = INT8_MAX;

	t21 = (((x129+x130)*x131)-x132);

	if (t21 != 490094LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x135 = 16548368;
	int32_t x136 = 1;

	t22 = (((x133+x134)*x135)-x136);

	if (t22 != 18446744073676454879LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = -18;
	static int8_t x139 = INT8_MAX;
	static int16_t x140 = 961;
	int32_t t23 = -5877;

	t23 = (((x137+x138)*x139)-x140);

	if (t23 != -4164783) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x141 = 2U;
	uint32_t x143 = 130343U;
	volatile int64_t t24 = -3837587LL;

	t24 = (((x141+x142)*x143)-x144);

	if (t24 != -16176892LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x145 = 11;
	static uint16_t x146 = 6U;
	uint8_t x147 = UINT8_MAX;
	static int64_t x148 = -1LL;
	int64_t t25 = -17118306955806917LL;

	t25 = (((x145+x146)*x147)-x148);

	if (t25 != 4336LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x157 = INT16_MIN;
	int32_t x158 = -1;
	int32_t x159 = -1;
	int32_t x160 = 153;
	volatile int32_t t26 = -27243112;

	t26 = (((x157+x158)*x159)-x160);

	if (t26 != 32616) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x173 = UINT16_MAX;
	uint32_t x175 = 804U;
	uint32_t x176 = 7U;
	uint32_t t27 = 0U;

	t27 = (((x173+x174)*x175)-x176);

	if (t27 != 73418057U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x181 = 0U;
	uint8_t x182 = 1U;

	t28 = (((x181+x182)*x183)-x184);

	if (t28 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x186 = -60267;
	int64_t x187 = INT64_MIN;
	uint8_t x188 = UINT8_MAX;
	uint64_t t29 = 228LLU;

	t29 = (((x185+x186)*x187)-x188);

	if (t29 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x190 = 45;
	volatile uint32_t x191 = UINT32_MAX;
	static volatile int16_t x192 = -1;
	volatile uint32_t t30 = 53U;

	t30 = (((x189+x190)*x191)-x192);

	if (t30 != 2147483604U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x198 = 108373LL;
	uint8_t x199 = 87U;
	int16_t x200 = INT16_MAX;
	int64_t t31 = -35422192542LL;

	t31 = (((x197+x198)*x199)-x200);

	if (t31 != 6544868LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x211 = -59;
	int32_t x212 = INT32_MIN;

	t32 = (((x209+x210)*x211)-x212);

	if (t32 != 2145557947) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x213 = UINT64_MAX;
	int8_t x214 = -1;
	int16_t x215 = -1;
	static int16_t x216 = -3453;
	static volatile uint64_t t33 = 5LLU;

	t33 = (((x213+x214)*x215)-x216);

	if (t33 != 3455LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	static volatile int8_t x219 = INT8_MIN;
	volatile uint64_t x220 = 113980264740167LLU;

	t34 = (((x217+x218)*x219)-x220);

	if (t34 != 18446630093449022137LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x221 = 1548846479U;
	volatile int32_t x222 = INT32_MIN;
	static int8_t x223 = -1;
	uint8_t x224 = UINT8_MAX;

	t35 = (((x221+x222)*x223)-x224);

	if (t35 != 598636914U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = 22U;
	int8_t x227 = INT8_MAX;
	volatile int32_t t36 = -101651319;

	t36 = (((x225+x226)*x227)-x228);

	if (t36 != -46229) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x234 = UINT16_MAX;
	int8_t x235 = 0;
	int16_t x236 = 23;
	volatile int32_t t37 = 20100041;

	t37 = (((x233+x234)*x235)-x236);

	if (t37 != -23) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x237 = UINT8_MAX;
	int16_t x239 = -4;
	int64_t x240 = -29LL;
	int64_t t38 = -413932135367LL;

	t38 = (((x237+x238)*x239)-x240);

	if (t38 != 4294965673LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x241 = -1;
	int64_t x242 = 457395277LL;
	volatile uint64_t x243 = 64622495069440LLU;
	volatile uint64_t x244 = 172282744278185LLU;
	volatile uint64_t t39 = 47995LLU;

	t39 = (((x241+x242)*x243)-x244);

	if (t39 != 6339789729701998423LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x249 = INT32_MAX;
	volatile int32_t x250 = INT32_MIN;
	uint64_t x251 = 334LLU;
	int8_t x252 = INT8_MIN;
	uint64_t t40 = 28422092682LLU;

	t40 = (((x249+x250)*x251)-x252);

	if (t40 != 18446744073709551410LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x254 = -194;
	static int8_t x255 = INT8_MIN;
	volatile int32_t t41 = -1873178;

	t41 = (((x253+x254)*x255)-x256);

	if (t41 != 1668679197) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x259 = 101219864U;
	static volatile uint32_t t42 = 917234U;

	t42 = (((x257+x258)*x259)-x260);

	if (t42 != 158374626U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x261 = INT8_MIN;

	t43 = (((x261+x262)*x263)-x264);

	if (t43 != 14004976143979557141LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x269 = INT8_MAX;
	volatile uint16_t x271 = UINT16_MAX;
	volatile int32_t x272 = -2637;
	int32_t t44 = -3008792;

	t44 = (((x269+x270)*x271)-x272);

	if (t44 != 8325582) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x281 = UINT64_MAX;
	volatile int64_t x282 = 0LL;
	static int16_t x283 = -1;
	volatile int16_t x284 = -147;
	static volatile uint64_t t45 = 32634535LLU;

	t45 = (((x281+x282)*x283)-x284);

	if (t45 != 148LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x290 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t46 = -739035733;

	t46 = (((x289+x290)*x291)-x292);

	if (t46 != 98304) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x294 = -1;
	volatile int16_t x295 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	uint32_t t47 = 701U;

	t47 = (((x293+x294)*x295)-x296);

	if (t47 != 4294934530U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x301 = 254LLU;
	int16_t x302 = 11179;
	static int8_t x303 = -13;
	static uint16_t x304 = 999U;

	t48 = (((x301+x302)*x303)-x304);

	if (t48 != 18446744073709401988LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x305 = 0;
	int32_t x307 = -1;
	volatile uint16_t x308 = UINT16_MAX;
	int32_t t49 = -22050;

	t49 = (((x305+x306)*x307)-x308);

	if (t49 != -65597) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x313 = UINT64_MAX;
	volatile int32_t x314 = -1;
	int8_t x315 = INT8_MIN;
	static volatile int64_t x316 = INT64_MIN;
	uint64_t t50 = 3291LLU;

	t50 = (((x313+x314)*x315)-x316);

	if (t50 != 9223372036854776064LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x321 = 3U;
	volatile int16_t x322 = -1;
	int32_t x323 = -80810650;
	uint32_t x324 = 89U;
	volatile uint32_t t51 = 109375U;

	t51 = (((x321+x322)*x323)-x324);

	if (t51 != 4133345907U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x325 = -1LL;
	static volatile uint32_t x326 = 19074U;
	int64_t x327 = -366996907638251LL;
	uint8_t x328 = 5U;

	t52 = (((x325+x326)*x327)-x328);

	if (t52 != -6999732019384361328LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x334 = 1413LLU;
	uint64_t x335 = 14233003280887LLU;
	static int8_t x336 = -1;

	t53 = (((x333+x334)*x335)-x336);

	if (t53 != 20097000632612445LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x337 = UINT32_MAX;
	uint32_t x339 = 4958751U;
	static int8_t x340 = INT8_MAX;
	static volatile uint32_t t54 = 17210951U;

	t54 = (((x337+x338)*x339)-x340);

	if (t54 != 3655288290U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x345 = INT16_MIN;
	volatile int16_t x346 = INT16_MIN;
	int8_t x347 = -1;
	static int32_t x348 = 0;
	static int32_t t55 = -24;

	t55 = (((x345+x346)*x347)-x348);

	if (t55 != 65536) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x349 = UINT16_MAX;
	static int64_t x350 = -1LL;
	static int64_t x351 = 5824551LL;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t56 = 3257108351439640558LLU;

	t56 = (((x349+x350)*x351)-x352);

	if (t56 != 381706125235LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x353 = INT16_MIN;
	volatile uint64_t x354 = 267924836694645373LLU;
	int32_t x355 = INT32_MAX;
	static volatile int32_t x356 = -1;

	t57 = (((x353+x354)*x355)-x356);

	if (t57 != 1378120204823831940LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x362 = -1;
	int32_t x364 = 15464;

	t58 = (((x361+x362)*x363)-x364);

	if (t58 != -15527) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x365 = UINT64_MAX;
	static int8_t x366 = -1;
	int8_t x367 = INT8_MIN;
	volatile uint64_t t59 = 7134220463873467410LLU;

	t59 = (((x365+x366)*x367)-x368);

	if (t59 != 18446744073709486337LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x369 = 15655;
	uint16_t x370 = UINT16_MAX;
	static volatile int8_t x371 = INT8_MIN;
	volatile int64_t x372 = INT64_MIN;

	t60 = (((x369+x370)*x371)-x372);

	if (t60 != 9223372036844383488LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x377 = 4755212250324435LLU;
	volatile uint16_t x378 = 5315U;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MAX;
	volatile uint64_t t61 = 915774436115526160LLU;

	t61 = (((x377+x378)*x379)-x380);

	if (t61 != 18441988859311738219LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MAX;
	uint8_t x383 = UINT8_MAX;
	static int16_t x384 = INT16_MIN;
	uint32_t t62 = 13179U;

	t62 = (((x381+x382)*x383)-x384);

	if (t62 != 8388098U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x393 = INT8_MIN;
	static int16_t x394 = INT16_MAX;
	volatile int32_t x395 = -1;
	volatile int16_t x396 = INT16_MAX;
	volatile int32_t t63 = 806249359;

	t63 = (((x393+x394)*x395)-x396);

	if (t63 != -65406) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x397 = 3;
	int8_t x398 = INT8_MAX;
	int16_t x399 = -1;
	int64_t x400 = INT64_MIN;
	int64_t t64 = -1LL;

	t64 = (((x397+x398)*x399)-x400);

	if (t64 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x410 = UINT64_MAX;
	int8_t x412 = -1;
	uint64_t t65 = 49211018295275618LLU;

	t65 = (((x409+x410)*x411)-x412);

	if (t65 != 39728168LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x413 = 2LLU;
	int8_t x416 = 0;
	uint64_t t66 = 1LLU;

	t66 = (((x413+x414)*x415)-x416);

	if (t66 != 18446744073709551238LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x417 = -1;
	uint8_t x418 = 28U;
	uint8_t x419 = 44U;
	int64_t x420 = INT64_MAX;
	int64_t t67 = -321048425185131LL;

	t67 = (((x417+x418)*x419)-x420);

	if (t67 != -9223372036854774619LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x421 = 0U;
	int16_t x423 = INT16_MIN;
	volatile int32_t t68 = -18961;

	t68 = (((x421+x422)*x423)-x424);

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x433 = UINT64_MAX;
	int16_t x435 = INT16_MIN;
	static volatile int32_t x436 = 33;

	t69 = (((x433+x434)*x435)-x436);

	if (t69 != 18446744073508650975LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x446 = INT64_MAX;
	static volatile int32_t x448 = INT32_MAX;

	t70 = (((x445+x446)*x447)-x448);

	if (t70 != 9223372034707292108LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x449 = 770726598871862815LLU;
	volatile int16_t x450 = INT16_MIN;
	int16_t x451 = -6504;
	static uint8_t x452 = 15U;
	volatile uint64_t t71 = 244100681590LLU;

	t71 = (((x449+x450)*x451)-x452);

	if (t71 != 4708588986615413849LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x453 = 6U;
	static int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MAX;
	int32_t t72 = -4281955;

	t72 = (((x453+x454)*x455)-x456);

	if (t72 != -8913023) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x457 = 438;
	static uint64_t x458 = 7405710674LLU;
	uint32_t x459 = 2U;
	int64_t x460 = 126914864708LL;
	volatile uint64_t t73 = 130LLU;

	t73 = (((x457+x458)*x459)-x460);

	if (t73 != 18446743961606109132LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x477 = -498;
	volatile int8_t x478 = -6;
	int32_t t74 = -1;

	t74 = (((x477+x478)*x479)-x480);

	if (t74 != 16513046) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x481 = UINT8_MAX;
	int8_t x482 = INT8_MIN;
	int16_t x483 = 17;
	int16_t x484 = INT16_MIN;
	int32_t t75 = -3;

	t75 = (((x481+x482)*x483)-x484);

	if (t75 != 34927) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x485 = 1846533311955LL;
	uint8_t x487 = UINT8_MAX;
	static int16_t x488 = INT16_MIN;
	volatile int64_t t76 = 17652404972298LL;

	t76 = (((x485+x486)*x487)-x488);

	if (t76 != 470865994603478LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x489 = INT8_MIN;
	volatile int32_t x490 = -1;
	uint64_t x491 = 145LLU;
	int64_t x492 = INT64_MAX;
	static volatile uint64_t t77 = 6913260621506LLU;

	t77 = (((x489+x490)*x491)-x492);

	if (t77 != 9223372036854757104LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x494 = -1;
	int16_t x495 = INT16_MIN;
	int64_t x496 = -343565787522649386LL;
	int64_t t78 = -8910954288LL;

	t78 = (((x493+x494)*x495)-x496);

	if (t78 != 343565790719233322LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x497 = INT8_MIN;
	uint16_t x498 = 112U;
	volatile int16_t x499 = INT16_MIN;
	uint64_t x500 = 467689857103452LLU;
	static volatile uint64_t t79 = 200333187580LLU;

	t79 = (((x497+x498)*x499)-x500);

	if (t79 != 18446276383852972452LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x501 = 6U;
	int32_t x502 = -1;
	int8_t x503 = 1;
	uint16_t x504 = UINT16_MAX;
	int32_t t80 = 3;

	t80 = (((x501+x502)*x503)-x504);

	if (t80 != -65530) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x509 = UINT16_MAX;
	int32_t x510 = INT32_MIN;
	volatile uint64_t x512 = UINT64_MAX;
	uint64_t t81 = 12029450039512LLU;

	t81 = (((x509+x510)*x511)-x512);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x515 = 1224U;
	static int8_t x516 = INT8_MIN;
	static int64_t t82 = -273239615650865302LL;

	t82 = (((x513+x514)*x515)-x516);

	if (t82 != -1692664LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x523 = 3U;
	int32_t x524 = INT32_MIN;
	volatile int64_t t83 = 53011804LL;

	t83 = (((x521+x522)*x523)-x524);

	if (t83 != 4725802544LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x527 = -22;
	static int8_t x528 = INT8_MIN;
	int64_t t84 = -12903541607LL;

	t84 = (((x525+x526)*x527)-x528);

	if (t84 != 30975112934LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x529 = 4984529604LL;
	uint32_t x530 = 10792619U;
	static uint64_t x531 = 24973954LLU;
	uint64_t t85 = 416645552LLU;

	t85 = (((x529+x530)*x531)-x532);

	if (t85 != 124752947412379743LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x533 = 11U;
	int16_t x534 = INT16_MIN;
	int8_t x535 = INT8_MIN;
	volatile int32_t t86 = 8;

	t86 = (((x533+x534)*x535)-x536);

	if (t86 != 4192786) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x541 = 16LL;
	uint16_t x542 = 58U;
	uint8_t x544 = 30U;
	volatile int64_t t87 = 275179745LL;

	t87 = (((x541+x542)*x543)-x544);

	if (t87 != -104LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x553 = -1;
	int32_t x554 = -1;
	int32_t x555 = -91;
	static uint32_t x556 = 0U;
	volatile uint32_t t88 = 366023373U;

	t88 = (((x553+x554)*x555)-x556);

	if (t88 != 182U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x558 = 9688978LLU;
	volatile uint64_t t89 = 1657746434LLU;

	t89 = (((x557+x558)*x559)-x560);

	if (t89 != 20806915368691824LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x565 = -1;
	uint16_t x566 = 4566U;
	int64_t x567 = -1446LL;
	uint16_t x568 = 1U;
	volatile int64_t t90 = 2234496671090487637LL;

	t90 = (((x565+x566)*x567)-x568);

	if (t90 != -6600991LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x573 = INT32_MAX;
	static uint64_t x574 = UINT64_MAX;
	static uint32_t x575 = UINT32_MAX;
	int64_t x576 = 6LL;
	volatile uint64_t t91 = 197012017LLU;

	t91 = (((x573+x574)*x575)-x576);

	if (t91 != 9223372026117357564LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x577 = -486719246LL;
	int16_t x578 = INT16_MIN;
	uint16_t x579 = UINT16_MAX;
	int32_t x580 = INT32_MIN;
	int64_t t92 = 162780388951LL;

	t92 = (((x577+x578)*x579)-x580);

	if (t92 != -31897145753842LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x581 = -2869517020032713LL;
	volatile int32_t x582 = INT32_MIN;
	uint8_t x583 = 3U;
	int64_t t93 = -1138889220LL;

	t93 = (((x581+x582)*x583)-x584);

	if (t93 != -9422639706002821LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x585 = 1884602268LLU;
	int64_t x587 = -7009167786LL;
	volatile int32_t x588 = INT32_MIN;
	volatile uint64_t t94 = 18LLU;

	t94 = (((x585+x586)*x587)-x588);

	if (t94 != 5237250576578064402LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x590 = UINT8_MAX;
	static volatile int8_t x591 = -1;
	int16_t x592 = -4565;
	volatile int32_t t95 = 108;

	t95 = (((x589+x590)*x591)-x592);

	if (t95 != 4438) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x597 = 3198965LLU;
	uint32_t x600 = 45182U;
	static uint64_t t96 = 46794LLU;

	t96 = (((x597+x598)*x599)-x600);

	if (t96 != 18446743801385351693LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x613 = 40101;
	static int16_t x616 = INT16_MIN;

	t97 = (((x613+x614)*x615)-x616);

	if (t97 != 32768LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x621 = 76U;
	uint8_t x622 = 1U;
	volatile int8_t x623 = INT8_MIN;
	int32_t x624 = INT32_MIN;
	int32_t t98 = -245;

	t98 = (((x621+x622)*x623)-x624);

	if (t98 != 2147473792) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x629 = UINT16_MAX;
	static uint8_t x630 = 31U;
	uint32_t x631 = 2048U;
	volatile uint32_t x632 = 875672616U;
	static volatile uint32_t t99 = 86U;

	t99 = (((x629+x630)*x631)-x632);

	if (t99 != 3553573848U) { NG(); } else { ; }
	
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

