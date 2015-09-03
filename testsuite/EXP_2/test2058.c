#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x9 = UINT16_MAX;
int64_t x10 = -38LL;
int16_t x15 = INT16_MIN;
static volatile uint32_t t2 = 379U;
int32_t x22 = INT32_MIN;
int8_t x24 = INT8_MIN;
uint8_t x26 = UINT8_MAX;
static uint64_t t5 = 9869479234062764LLU;
static int16_t x39 = -1;
int8_t x43 = INT8_MAX;
int32_t x45 = 3581408;
uint64_t x48 = 1201260759737LLU;
volatile int64_t t11 = 87LL;
uint64_t x57 = 610175678467995311LLU;
int64_t x60 = -14016461598402LL;
int32_t x64 = -1;
uint64_t x65 = 2099715937LLU;
uint8_t x70 = 73U;
static volatile int64_t t15 = 1LL;
uint64_t x95 = 2289411407LLU;
int16_t x109 = -1;
int64_t t21 = -113726955686099796LL;
uint64_t x119 = 515774303LLU;
uint64_t t23 = 21786LLU;
int8_t x122 = INT8_MAX;
int32_t x124 = INT32_MAX;
uint8_t x130 = 16U;
static uint32_t x157 = 184488U;
static uint32_t x162 = 28724U;
uint8_t x168 = 15U;
int8_t x182 = INT8_MIN;
int32_t x186 = -25984;
uint64_t x210 = UINT64_MAX;
int8_t x214 = 1;
uint16_t x220 = 14U;
static volatile int64_t t40 = 4832LL;
uint32_t x224 = 14945532U;
int16_t x235 = -267;
int32_t x236 = -1;
int64_t x237 = -1LL;
int16_t x250 = -1;
int32_t x251 = INT32_MIN;
volatile int32_t t46 = 10;
static volatile uint16_t x257 = 26559U;
static int32_t x258 = 0;
uint64_t x262 = 1987780LLU;
int64_t x263 = INT64_MIN;
uint64_t x269 = UINT64_MAX;
int16_t x293 = -1;
static uint32_t x294 = 12216U;
volatile int8_t x295 = INT8_MAX;
int16_t x296 = -1672;
int16_t x298 = 3;
volatile int32_t t56 = 0;
int64_t x306 = INT64_MAX;
static volatile int64_t x307 = -1LL;
int8_t x310 = -1;
volatile int8_t x311 = 61;
int32_t x314 = INT32_MIN;
uint16_t x315 = 81U;
uint64_t x332 = 30217233463600LLU;
int32_t x335 = -16210062;
volatile int64_t t63 = -178828705921787LL;
int8_t x337 = INT8_MIN;
volatile uint8_t x338 = 3U;
uint64_t x341 = 176793288683159804LLU;
int8_t x344 = -4;
static int8_t x347 = INT8_MIN;
static volatile int64_t t66 = 35885279LL;
uint8_t x350 = UINT8_MAX;
static volatile uint8_t x381 = 0U;
int16_t x397 = INT16_MIN;
int8_t x398 = 1;
volatile uint64_t t74 = 60791497803LLU;
uint8_t x414 = 1U;
volatile int16_t x434 = INT16_MIN;
volatile int64_t t78 = 92932799LL;
int32_t t79 = INT32_MAX;
int8_t x451 = INT8_MIN;
int16_t x452 = INT16_MAX;
volatile uint64_t t81 = 13238062LLU;
static uint32_t x456 = UINT32_MAX;
uint64_t t83 = 1684712LLU;
volatile uint32_t x476 = UINT32_MAX;
volatile int8_t x480 = -1;
int64_t t86 = 1LL;
uint32_t x487 = 131318914U;
int32_t x500 = INT32_MIN;
uint64_t x508 = UINT64_MAX;
static int8_t x510 = 0;
static volatile uint16_t x512 = UINT16_MAX;
static volatile uint8_t x517 = 98U;
int8_t x520 = INT8_MIN;
volatile int32_t t93 = 5515;
volatile int64_t x528 = INT64_MIN;
volatile int64_t t94 = 578256709506LL;
static int16_t x541 = -1;
volatile uint64_t t96 = 2684633869244868LLU;
volatile int64_t x546 = 368390LL;
volatile int16_t x547 = -21;
static int32_t x552 = -1893;
volatile int32_t t99 = 12358;


void f0(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int64_t x6 = -1LL;
	static int16_t x7 = INT16_MAX;
	int64_t x8 = -1LL;
	volatile int64_t t0 = -3905437585LL;

	t0 = ((x5*(x6^x7))/x8);

	if (t0 != 8355840LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x11 = 3;
	uint16_t x12 = 4295U;
	static int64_t t1 = 512268LL;

	t1 = ((x9*(x10^x11))/x12);

	if (t1 != -595LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	uint32_t x16 = 24U;

	t2 = ((x13*(x14^x15))/x16);

	if (t2 != 178782890U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 295U;
	static volatile uint8_t x18 = 103U;
	static int16_t x19 = INT16_MAX;
	int64_t x20 = INT64_MIN;
	int64_t t3 = -77333913113299LL;

	t3 = ((x17*(x18^x19))/x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 0U;
	volatile int16_t x23 = INT16_MIN;
	static int32_t t4 = -43318;

	t4 = ((x21*(x22^x23))/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 0U;
	uint32_t x27 = UINT32_MAX;
	static uint64_t x28 = 188126556317206LLU;

	t5 = ((x25*(x26^x27))/x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	static int64_t x32 = -45794285230208415LL;
	static uint64_t t6 = 2684290LLU;

	t6 = ((x29*(x30^x31))/x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 1;
	static int64_t x38 = -29250356LL;
	volatile uint32_t x40 = 1517987U;
	int64_t t7 = -43606LL;

	t7 = ((x37*(x38^x39))/x40);

	if (t7 != 19LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	static volatile uint32_t x42 = 1673121957U;
	static volatile int32_t x44 = 48502;
	volatile uint32_t t8 = 849332U;

	t8 = ((x41*(x42^x43))/x44);

	if (t8 != 54056U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x46 = 1U;
	static uint16_t x47 = 65U;
	static volatile uint64_t t9 = 7422962699162399063LLU;

	t9 = ((x45*(x46^x47))/x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 27500187074LLU;
	volatile int32_t x50 = -1;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MAX;
	static uint64_t t10 = 244305290416LLU;

	t10 = ((x49*(x50^x51))/x52);

	if (t10 != 562967132975535LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = -1LL;
	volatile uint16_t x55 = 2U;
	int64_t x56 = INT64_MIN;

	t11 = ((x53*(x54^x55))/x56);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x58 = UINT16_MAX;
	volatile int16_t x59 = 2;
	uint64_t t12 = 5454LLU;

	t12 = ((x57*(x58^x59))/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	uint32_t x63 = 724U;
	volatile uint32_t t13 = 12800967U;

	t13 = ((x61*(x62^x63))/x64);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MIN;
	int8_t x67 = -4;
	int16_t x68 = -1438;
	uint64_t t14 = 11499638984LLU;

	t14 = ((x65*(x66^x67))/x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	int32_t x71 = -40;
	static volatile int64_t x72 = -1448169427725089LL;

	t15 = ((x69*(x70^x71))/x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -1;
	volatile uint32_t x78 = 5314569U;
	int16_t x79 = 496;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t16 = -31691727260846LL;

	t16 = ((x77*(x78^x79))/x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = 42304033;
	static int16_t x82 = -1;
	volatile uint32_t x83 = 290071U;
	int32_t x84 = INT32_MAX;
	static volatile uint32_t t17 = 761402083U;

	t17 = ((x81*(x82^x83))/x84);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x89 = 15U;
	static volatile int8_t x90 = -1;
	volatile int32_t x91 = -1;
	static uint32_t x92 = 32186U;
	volatile uint32_t t18 = 789979U;

	t18 = ((x89*(x90^x91))/x92);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = 349U;
	static int8_t x94 = INT8_MAX;
	uint32_t x96 = 19953U;
	uint64_t t19 = 434364LLU;

	t19 = ((x93*(x94^x95))/x96);

	if (t19 != 40044332LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	int64_t x98 = -4LL;
	static uint64_t x99 = 3435LLU;
	static uint32_t x100 = 35393264U;
	volatile uint64_t t20 = 2897985LLU;

	t20 = ((x97*(x98^x99))/x100);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x110 = 21;
	int16_t x111 = INT16_MIN;
	volatile int64_t x112 = -85LL;

	t21 = ((x109*(x110^x111))/x112);

	if (t21 != -385LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = 0;
	uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 6879U;
	int32_t x116 = 512;
	int32_t t22 = -3412381;

	t22 = ((x113*(x114^x115))/x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = 802565;
	uint32_t x118 = 237U;
	volatile int32_t x120 = -329354;

	t23 = ((x117*(x118^x119))/x120);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x121 = UINT16_MAX;
	int16_t x123 = -1;
	int32_t t24 = 123;

	t24 = ((x121*(x122^x123))/x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x129 = 10825U;
	static int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t25 = 15097LL;

	t25 = ((x129*(x130^x131))/x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MAX;
	static int16_t x138 = INT16_MAX;
	uint8_t x139 = 9U;
	uint8_t x140 = 40U;
	static volatile int32_t t26 = 2270667;

	t26 = ((x137*(x138^x139))/x140);

	if (t26 != 104006) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MAX;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = UINT8_MAX;
	int64_t t27 = 7906050400650217LL;

	t27 = ((x149*(x150^x151))/x152);

	if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x158 = 336U;
	int32_t x159 = 27101;
	static uint64_t x160 = 370998LLU;
	uint64_t t28 = 435424LLU;

	t28 = ((x157*(x158^x159))/x160);

	if (t28 != 1732LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x161 = INT16_MIN;
	static volatile int64_t x163 = -208298376203LL;
	uint8_t x164 = 43U;
	int64_t t29 = 0LL;

	t29 = ((x161*(x162^x163))/x164);

	if (t29 != 158733029153482LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = -1;
	volatile int64_t x166 = INT64_MAX;
	int16_t x167 = INT16_MIN;
	volatile int64_t t30 = 3169871393106120LL;

	t30 = ((x165*(x166^x167))/x168);

	if (t30 != 614891469123649536LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = 817;
	int64_t x170 = -1LL;
	int32_t x171 = INT32_MAX;
	static volatile uint64_t x172 = 77187920LLU;
	uint64_t t31 = 4LLU;

	t31 = ((x169*(x170^x171))/x172);

	if (t31 != 238984834922LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x181 = 3780067359LLU;
	volatile uint64_t x183 = 102247486025802833LLU;
	static volatile int64_t x184 = INT64_MIN;
	static uint64_t t32 = 73378770811020310LLU;

	t32 = ((x181*(x182^x183))/x184);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x185 = 36;
	static uint8_t x187 = 52U;
	int8_t x188 = -1;
	volatile int32_t t33 = 493847;

	t33 = ((x185*(x186^x187))/x188);

	if (t33 != 933552) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x189 = 3U;
	uint8_t x190 = UINT8_MAX;
	volatile int32_t x191 = -1;
	static uint16_t x192 = UINT16_MAX;
	volatile int32_t t34 = -8238717;

	t34 = ((x189*(x190^x191))/x192);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x197 = UINT64_MAX;
	int32_t x198 = -1760;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = -1;
	volatile uint64_t t35 = 98438567LLU;

	t35 = ((x197*(x198^x199))/x200);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x201 = -1;
	int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MAX;
	int64_t x204 = INT64_MIN;
	volatile int64_t t36 = 7022LL;

	t36 = ((x201*(x202^x203))/x204);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x205 = 15527931753LLU;
	volatile int16_t x206 = -8095;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = -213205988176999447LL;
	static uint64_t t37 = 1607576720LLU;

	t37 = ((x205*(x206^x207))/x208);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x209 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	uint8_t x212 = 27U;
	static uint64_t t38 = 21168489LLU;

	t38 = ((x209*(x210^x211))/x212);

	if (t38 != 683212743470570002LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x213 = INT32_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t x216 = INT32_MAX;
	volatile uint64_t t39 = 33697025LLU;

	t39 = ((x213*(x214^x215))/x216);

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x217 = -1;
	int64_t x218 = INT64_MAX;
	int64_t x219 = INT64_MAX;

	t40 = ((x217*(x218^x219))/x220);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x221 = -1;
	int32_t x222 = INT32_MIN;
	int32_t x223 = -30095;
	uint32_t t41 = 30U;

	t41 = ((x221*(x222^x223))/x224);

	if (t41 != 143U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x225 = INT8_MIN;
	static uint32_t x226 = 660U;
	static volatile int32_t x227 = INT32_MAX;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t42 = 442686LLU;

	t42 = ((x225*(x226^x227))/x228);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = -1;
	int8_t x234 = -1;
	int32_t t43 = -1;

	t43 = ((x233*(x234^x235))/x236);

	if (t43 != 266) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x238 = INT16_MIN;
	uint64_t x239 = 469846526880291LLU;
	int64_t x240 = 658217007LL;
	uint64_t t44 = 44718947804LLU;

	t44 = ((x237*(x238^x239))/x240);

	if (t44 != 713817LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = 2;
	static int64_t x242 = 103LL;
	int16_t x243 = -1;
	static volatile int32_t x244 = -1;
	volatile int64_t t45 = -1LL;

	t45 = ((x241*(x242^x243))/x244);

	if (t45 != 208LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = -1;
	static int8_t x252 = 2;

	t46 = ((x249*(x250^x251))/x252);

	if (t46 != -1073741823) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x253 = 7686063;
	volatile uint32_t x254 = UINT32_MAX;
	uint16_t x255 = 238U;
	int16_t x256 = -88;
	uint32_t t47 = 1690384U;

	t47 = ((x253*(x254^x255))/x256);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x259 = 130U;
	uint64_t x260 = 2833LLU;
	volatile uint64_t t48 = 205410680922814LLU;

	t48 = ((x257*(x258^x259))/x260);

	if (t48 != 1218LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x261 = INT64_MAX;
	int8_t x264 = INT8_MAX;
	uint64_t t49 = 34352339141207224LLU;

	t49 = ((x261*(x262^x263))/x264);

	if (t49 != 72624976668132189LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x270 = -1;
	uint16_t x271 = 614U;
	uint64_t x272 = 636013515201336LLU;
	volatile uint64_t t50 = 525799913419LLU;

	t50 = ((x269*(x270^x271))/x272);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x277 = 203064LL;
	uint64_t x278 = 3487LLU;
	uint8_t x279 = 53U;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t51 = 247017295386LLU;

	t51 = ((x277*(x278^x279))/x280);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x281 = INT16_MAX;
	static int32_t x282 = -1;
	int8_t x283 = 1;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t52 = -4307507;

	t52 = ((x281*(x282^x283))/x284);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x285 = 1;
	volatile uint32_t x286 = 119U;
	static volatile int32_t x287 = INT32_MAX;
	int16_t x288 = -1;
	uint32_t t53 = 249U;

	t53 = ((x285*(x286^x287))/x288);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x289 = UINT32_MAX;
	int32_t x290 = INT32_MIN;
	int16_t x291 = 13;
	int8_t x292 = INT8_MIN;
	uint32_t t54 = 1038095U;

	t54 = ((x289*(x290^x291))/x292);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t t55 = 0U;

	t55 = ((x293*(x294^x295))/x296);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x297 = 14;
	static int8_t x299 = -9;
	int32_t x300 = INT32_MIN;

	t56 = ((x297*(x298^x299))/x300);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x305 = 300860181407689992LLU;
	uint16_t x308 = 26U;
	uint64_t t57 = 94572389136LLU;

	t57 = ((x305*(x306^x307))/x308);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x309 = 3364U;
	int16_t x312 = -6875;
	int32_t t58 = -39932;

	t58 = ((x309*(x310^x311))/x312);

	if (t58 != 30) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x313 = 1;
	uint16_t x316 = 188U;
	volatile int32_t t59 = -713;

	t59 = ((x313*(x314^x315))/x316);

	if (t59 != -11422784) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x321 = UINT8_MAX;
	static volatile uint32_t x322 = 105U;
	int16_t x323 = INT16_MIN;
	uint32_t x324 = 28057920U;
	uint32_t t60 = 26854119U;

	t60 = ((x321*(x322^x323))/x324);

	if (t60 != 152U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = INT16_MAX;
	int16_t x326 = -468;
	static int8_t x327 = INT8_MAX;
	int8_t x328 = -1;
	volatile int32_t t61 = -527884005;

	t61 = ((x325*(x326^x327))/x328);

	if (t61 != 14057043) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MIN;
	volatile uint64_t x331 = UINT64_MAX;
	volatile uint64_t t62 = 4748349096LLU;

	t62 = ((x329*(x330^x331))/x332);

	if (t62 != 305235LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x333 = -1;
	int32_t x334 = INT32_MAX;
	static int64_t x336 = -1LL;

	t63 = ((x333*(x334^x335))/x336);

	if (t63 != -2131273587LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x339 = UINT64_MAX;
	uint8_t x340 = 44U;
	uint64_t t64 = 876862713880363LLU;

	t64 = ((x337*(x338^x339))/x340);

	if (t64 != 11LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x342 = 27374;
	uint16_t x343 = 962U;
	static volatile uint64_t t65 = 3162180126LLU;

	t65 = ((x341*(x342^x343))/x344);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x345 = 3;
	int64_t x346 = -67448291731768LL;
	int64_t x348 = 135210LL;

	t66 = ((x345*(x346^x347))/x348);

	if (t66 != 1496523002LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x349 = -1LL;
	int64_t x351 = -1LL;
	uint32_t x352 = 776994U;
	int64_t t67 = 3LL;

	t67 = ((x349*(x350^x351))/x352);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x357 = INT8_MIN;
	volatile int16_t x358 = -1;
	int8_t x359 = INT8_MAX;
	int8_t x360 = -1;
	int32_t t68 = 232920;

	t68 = ((x357*(x358^x359))/x360);

	if (t68 != -16384) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x377 = -56627116;
	static uint16_t x378 = 12U;
	int16_t x379 = -1;
	int8_t x380 = INT8_MIN;
	volatile int32_t t69 = -473;

	t69 = ((x377*(x378^x379))/x380);

	if (t69 != -5751191) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x382 = INT64_MIN;
	volatile int64_t x383 = -1LL;
	static volatile int32_t x384 = INT32_MAX;
	int64_t t70 = -113361596671LL;

	t70 = ((x381*(x382^x383))/x384);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x385 = UINT16_MAX;
	int8_t x386 = -1;
	int64_t x387 = -1LL;
	int32_t x388 = INT32_MIN;
	static int64_t t71 = -389815371625LL;

	t71 = ((x385*(x386^x387))/x388);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x399 = 2497U;
	int8_t x400 = -3;
	static volatile uint32_t t72 = 514178612U;

	t72 = ((x397*(x398^x399))/x400);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x405 = 1U;
	volatile int32_t x406 = INT32_MIN;
	volatile int64_t x407 = -1LL;
	static volatile uint16_t x408 = UINT16_MAX;
	static volatile int64_t t73 = 385LL;

	t73 = ((x405*(x406^x407))/x408);

	if (t73 != 32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x409 = 3LLU;
	int16_t x410 = 1;
	int8_t x411 = 0;
	int16_t x412 = INT16_MIN;

	t74 = ((x409*(x410^x411))/x412);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x413 = 714383;
	int8_t x415 = -6;
	int64_t x416 = INT64_MIN;
	int64_t t75 = 55145337202LL;

	t75 = ((x413*(x414^x415))/x416);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x429 = INT16_MAX;
	uint32_t x430 = UINT32_MAX;
	int32_t x431 = INT32_MIN;
	int64_t x432 = -1LL;
	static volatile int64_t t76 = -41986237349449LL;

	t76 = ((x429*(x430^x431))/x432);

	if (t76 != -2147450881LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x433 = 27U;
	static int8_t x435 = -60;
	int8_t x436 = -55;
	volatile int32_t t77 = -1365071;

	t77 = ((x433*(x434^x435))/x436);

	if (t77 != -16056) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x437 = -1;
	static uint16_t x438 = 13640U;
	uint8_t x439 = UINT8_MAX;
	static int64_t x440 = INT64_MIN;

	t78 = ((x437*(x438^x439))/x440);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x441 = -1;
	uint8_t x442 = 0U;
	int32_t x443 = INT32_MAX;
	volatile int8_t x444 = -1;

	t79 = ((x441*(x442^x443))/x444);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x445 = 178U;
	int64_t x446 = -1LL;
	int8_t x447 = -3;
	int8_t x448 = INT8_MAX;
	volatile int64_t t80 = 4358583537898LL;

	t80 = ((x445*(x446^x447))/x448);

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x449 = UINT64_MAX;
	volatile int64_t x450 = INT64_MIN;

	t81 = ((x449*(x450^x451))/x452);

	if (t81 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x453 = -974;
	int64_t x454 = -127824LL;
	volatile uint64_t x455 = 3298851LLU;
	uint64_t t82 = 62333577LLU;

	t82 = ((x453*(x454^x455))/x456);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x461 = INT32_MIN;
	static uint64_t x462 = 9742165122573754LLU;
	int8_t x463 = -1;
	int64_t x464 = INT64_MIN;

	t83 = ((x461*(x462^x463))/x464);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x469 = INT16_MIN;
	int32_t x470 = INT32_MAX;
	uint32_t x471 = 814413902U;
	int64_t x472 = -1534130LL;
	volatile int64_t t84 = -25512808527837LL;

	t84 = ((x469*(x470^x471))/x472);

	if (t84 != -1357LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x473 = 5U;
	uint16_t x474 = UINT16_MAX;
	static int16_t x475 = -1303;
	volatile uint32_t t85 = 1043032203U;

	t85 = ((x473*(x474^x475))/x476);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x477 = 52;
	volatile int64_t x478 = 8201874818LL;
	uint32_t x479 = 2600432U;

	t86 = ((x477*(x478^x479))/x480);

	if (t86 != -426587199272LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x485 = UINT16_MAX;
	volatile uint64_t x486 = 1047368830544932LLU;
	int8_t x488 = -1;
	uint64_t t87 = 42LLU;

	t87 = ((x485*(x486^x487))/x488);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x489 = 329;
	static int8_t x490 = -1;
	int64_t x491 = -59758272970048LL;
	int8_t x492 = INT8_MAX;
	int64_t t88 = -3942009277445LL;

	t88 = ((x489*(x490^x491))/x492);

	if (t88 != 154806864623192LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x493 = INT8_MAX;
	int8_t x494 = 7;
	int16_t x495 = -1;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t89 = -749;

	t89 = ((x493*(x494^x495))/x496);

	if (t89 != -3) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x497 = INT8_MIN;
	static volatile int8_t x498 = -1;
	static volatile uint64_t x499 = 540941568197983953LLU;
	volatile uint64_t t90 = 4165391048LLU;

	t90 = ((x497*(x498^x499))/x500);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x505 = 0U;
	volatile int8_t x506 = 30;
	uint64_t x507 = 1549LLU;
	volatile uint64_t t91 = 898566850LLU;

	t91 = ((x505*(x506^x507))/x508);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x509 = 55U;
	int64_t x511 = -1LL;
	volatile int64_t t92 = -12523044182850591LL;

	t92 = ((x509*(x510^x511))/x512);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x518 = INT16_MIN;
	volatile int8_t x519 = -14;

	t93 = ((x517*(x518^x519))/x520);

	if (t93 != -25077) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x525 = 1035122481649457LL;
	static uint8_t x526 = 0U;
	static uint8_t x527 = 3U;

	t94 = ((x525*(x526^x527))/x528);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x529 = INT32_MIN;
	static volatile int16_t x530 = -10385;
	static volatile uint64_t x531 = 4123421729615357374LLU;
	volatile int16_t x532 = INT16_MIN;
	uint64_t t95 = 325512477LLU;

	t95 = ((x529*(x530^x531))/x532);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x542 = INT16_MIN;
	int16_t x543 = INT16_MAX;
	uint64_t x544 = UINT64_MAX;

	t96 = ((x541*(x542^x543))/x544);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x545 = -675;
	volatile int64_t x548 = -1LL;
	volatile int64_t t97 = -461535635LL;

	t97 = ((x545*(x546^x547))/x548);

	if (t97 != -248672025LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x549 = 10U;
	uint32_t x550 = 2107449U;
	static volatile int16_t x551 = INT16_MIN;
	uint32_t t98 = 1060U;

	t98 = ((x549*(x550^x551))/x552);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x557 = 93U;
	int32_t x558 = -3933876;
	int16_t x559 = INT16_MAX;
	int16_t x560 = INT16_MIN;

	t99 = ((x557*(x558^x559))/x560);

	if (t99 != 11248) { NG(); } else { ; }
	
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

