#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x19 = -1;
int32_t x22 = INT32_MAX;
static uint64_t x34 = 114181996832243938LLU;
int64_t x36 = INT64_MAX;
int8_t x37 = -1;
int8_t x43 = INT8_MIN;
int8_t x61 = -7;
static volatile uint64_t x62 = 127186579677LLU;
uint32_t x64 = UINT32_MAX;
uint64_t t8 = 89968500628429014LLU;
volatile uint64_t t9 = 23788450537314LLU;
static uint8_t x79 = 0U;
uint32_t t10 = 22610U;
int8_t x90 = 7;
static uint32_t x95 = 356834U;
int16_t x98 = 0;
int32_t x101 = 1339940;
int32_t x104 = INT32_MAX;
int16_t x107 = INT16_MIN;
int16_t x110 = -1;
int16_t x116 = INT16_MIN;
static uint32_t x124 = UINT32_MAX;
int16_t x127 = INT16_MIN;
int16_t x141 = 365;
static volatile int16_t x143 = -4;
static int16_t x158 = INT16_MIN;
int8_t x167 = 10;
int64_t x168 = -1LL;
int8_t x181 = INT8_MAX;
volatile uint16_t x184 = 451U;
static uint16_t x187 = 233U;
int32_t x195 = 6242;
int32_t t34 = -5893343;
int16_t x219 = INT16_MAX;
volatile uint64_t t40 = 1160860LLU;
int8_t x226 = 0;
int8_t x227 = INT8_MAX;
volatile int32_t t41 = 235095414;
uint8_t x231 = 45U;
uint64_t t42 = 115LLU;
int32_t t43 = 3;
int32_t t45 = 199639406;
int32_t x271 = INT32_MIN;
uint8_t x278 = 0U;
int8_t x279 = INT8_MIN;
volatile int32_t t49 = 0;
static uint64_t x290 = UINT64_MAX;
int16_t x294 = 1;
int8_t x295 = 0;
int64_t x302 = -1LL;
uint8_t x304 = 91U;
int64_t x308 = 592225315207243589LL;
uint8_t x317 = 8U;
int16_t x323 = -1;
int8_t x349 = INT8_MIN;
static int8_t x353 = 1;
int16_t x368 = INT16_MIN;
volatile uint64_t t64 = 2302603LLU;
uint32_t x413 = 1U;
int64_t x415 = INT64_MIN;
uint8_t x422 = UINT8_MAX;
static volatile int64_t t68 = 576209383672331086LL;
volatile uint32_t x437 = UINT32_MAX;
int64_t t70 = -13961652140859LL;
volatile int64_t x450 = -24834862502627191LL;
static int8_t x461 = -3;
uint64_t x462 = UINT64_MAX;
volatile int16_t x468 = INT16_MIN;
uint32_t t76 = 35513321U;
uint32_t x481 = 3U;
int16_t x486 = -1;
uint64_t x487 = 13857988759584LLU;
int64_t x517 = -1LL;
volatile int32_t x519 = -5;
static volatile int64_t t83 = -66312584381LL;
static volatile uint64_t x528 = 3163430287585057607LLU;
volatile int8_t x537 = INT8_MAX;
uint8_t x555 = UINT8_MAX;
static int64_t t94 = -214452137LL;
int8_t x582 = INT8_MIN;
volatile int32_t x588 = INT32_MAX;
uint64_t x590 = 129407162677LLU;
uint16_t x592 = 354U;
uint8_t x596 = 7U;
uint8_t x597 = UINT8_MAX;
uint8_t x598 = 51U;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	uint64_t x8 = 491938867LLU;
	uint64_t t0 = 17LLU;

	t0 = ((x5*x6)^(x7+x8));

	if (t0 != 2639422515LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	int64_t x14 = 939LL;
	uint8_t x15 = 0U;
	int32_t x16 = -1;
	int64_t t1 = -77964305953LL;

	t1 = ((x13*x14)^(x15+x16));

	if (t1 != -30768214LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	uint32_t x18 = 2U;
	int16_t x20 = INT16_MIN;
	uint32_t t2 = 97U;

	t2 = ((x17*x18)^(x19+x20));

	if (t2 != 4294934529U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 0U;
	int16_t x23 = INT16_MAX;
	int16_t x24 = -1;
	volatile int32_t t3 = -1;

	t3 = ((x21*x22)^(x23+x24));

	if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = 168484561846477LL;
	uint64_t x35 = 1362273453196LLU;
	uint64_t t4 = 2423011LLU;

	t4 = ((x33*x34)^(x35+x36));

	if (t4 != 5398020181208838257LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x38 = 27U;
	int8_t x39 = -1;
	uint8_t x40 = 3U;
	volatile int32_t t5 = 401047;

	t5 = ((x37*x38)^(x39+x40));

	if (t5 != -25) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = UINT16_MAX;
	int8_t x42 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	static int32_t t6 = -420864764;

	t6 = ((x41*x42)^(x43+x44));

	if (t6 != 8355584) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x45 = 8U;
	volatile uint64_t x46 = UINT64_MAX;
	static volatile int32_t x47 = INT32_MIN;
	uint64_t x48 = 7849LLU;
	volatile uint64_t t7 = 143LLU;

	t7 = ((x45*x46)^(x47+x48));

	if (t7 != 2147475793LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x63 = -71525945;

	t8 = ((x61*x62)^(x63+x64));

	if (t8 != 18446743181667282995LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x65 = INT8_MAX;
	uint8_t x66 = 10U;
	static volatile int16_t x67 = 41;
	uint64_t x68 = 20561309261LLU;

	t9 = ((x65*x66)^(x67+x68));

	if (t9 != 20561308288LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = 294111;
	volatile int8_t x78 = 11;
	uint32_t x80 = 47134738U;

	t10 = ((x77*x78)^(x79+x80));

	if (t10 != 50226567U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x81 = 14725480524LLU;
	int16_t x82 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MIN;
	static uint64_t t11 = 570LLU;

	t11 = ((x81*x82)^(x83+x84));

	if (t11 != 9223854561400586239LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = 24U;
	int8_t x86 = INT8_MIN;
	volatile int32_t x87 = INT32_MIN;
	uint16_t x88 = 133U;
	volatile int32_t t12 = -3165;

	t12 = ((x85*x86)^(x87+x88));

	if (t12 != 2147480709) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x89 = INT16_MIN;
	int32_t x91 = INT32_MAX;
	uint64_t x92 = 134517625LLU;
	volatile uint64_t t13 = 1042440789460LLU;

	t13 = ((x89*x90)^(x91+x92));

	if (t13 != 18446744071427330936LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x93 = UINT32_MAX;
	volatile uint32_t x94 = 232376U;
	int8_t x96 = -1;
	static uint32_t t14 = 6370U;

	t14 = ((x93*x94)^(x95+x96));

	if (t14 != 4294509993U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x97 = 5252U;
	static int64_t x99 = 108012685LL;
	int64_t x100 = -238943409285707730LL;
	volatile int64_t t15 = 30186566504896LL;

	t15 = ((x97*x98)^(x99+x100));

	if (t15 != -238943409177695045LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x102 = 7;
	static int16_t x103 = INT16_MIN;
	static volatile int32_t t16 = 8120;

	t16 = ((x101*x102)^(x103+x104));

	if (t16 != 2138071299) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x105 = 109U;
	int16_t x106 = INT16_MIN;
	int8_t x108 = -52;
	static volatile int32_t t17 = 74286815;

	t17 = ((x105*x106)^(x107+x108));

	if (t17 != 3604428) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x109 = INT64_MAX;
	uint8_t x111 = 3U;
	int32_t x112 = -1;
	volatile int64_t t18 = 454349543746820829LL;

	t18 = ((x109*x110)^(x111+x112));

	if (t18 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x113 = -39;
	static volatile int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MIN;
	volatile int32_t t19 = -1;

	t19 = ((x113*x114)^(x115+x116));

	if (t19 != 1277991) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x121 = 467LL;
	uint64_t x122 = 2824282066480483LLU;
	int16_t x123 = INT16_MIN;
	static volatile uint64_t t20 = 4LLU;

	t20 = ((x121*x122)^(x123+x124));

	if (t20 != 1318939728283038822LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x125 = 22413455U;
	uint32_t x126 = UINT32_MAX;
	volatile uint64_t x128 = 50956LLU;
	uint64_t t21 = 655949384LLU;

	t21 = ((x125*x126)^(x127+x128));

	if (t21 != 4272535677LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = -248;
	static int8_t x130 = 50;
	int8_t x131 = INT8_MIN;
	volatile int16_t x132 = INT16_MIN;
	int32_t t22 = 31736735;

	t22 = ((x129*x130)^(x131+x132));

	if (t22 != 45072) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x142 = 54U;
	int16_t x144 = INT16_MIN;
	volatile int32_t t23 = 37611;

	t23 = ((x141*x142)^(x143+x144));

	if (t23 != -52478) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x145 = 17U;
	static int64_t x146 = 77LL;
	static volatile uint8_t x147 = 12U;
	int8_t x148 = INT8_MIN;
	int64_t t24 = 669LL;

	t24 = ((x145*x146)^(x147+x148));

	if (t24 != -1391LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x149 = 14LLU;
	uint16_t x150 = 1U;
	int16_t x151 = INT16_MIN;
	int8_t x152 = 1;
	uint64_t t25 = 5LLU;

	t25 = ((x149*x150)^(x151+x152));

	if (t25 != 18446744073709518863LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x157 = -1;
	int16_t x159 = INT16_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t26 = -4741;

	t26 = ((x157*x158)^(x159+x160));

	if (t26 != -32769) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = -1;
	uint64_t x162 = 363189447LLU;
	uint16_t x163 = UINT16_MAX;
	volatile int32_t x164 = -841;
	uint64_t t27 = 0LLU;

	t27 = ((x161*x162)^(x163+x164));

	if (t27 != 18446744073346406287LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x165 = INT8_MAX;
	uint16_t x166 = 28U;
	volatile int64_t t28 = -43626886812LL;

	t28 = ((x165*x166)^(x167+x168));

	if (t28 != 3565LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x169 = -1LL;
	int8_t x170 = 13;
	int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MIN;
	volatile int64_t t29 = 50725LL;

	t29 = ((x169*x170)^(x171+x172));

	if (t29 != -2147450868LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x173 = INT16_MIN;
	static uint64_t x174 = 867LLU;
	static int8_t x175 = -1;
	uint8_t x176 = UINT8_MAX;
	volatile uint64_t t30 = 882831470LLU;

	t30 = ((x173*x174)^(x175+x176));

	if (t30 != 18446744073681142014LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x177 = -1;
	uint64_t x178 = 451LLU;
	volatile int16_t x179 = -1;
	volatile int8_t x180 = -1;
	uint64_t t31 = 65921385193505LLU;

	t31 = ((x177*x178)^(x179+x180));

	if (t31 != 451LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x182 = -10794;
	int16_t x183 = INT16_MAX;
	int32_t t32 = -850492;

	t32 = ((x181*x182)^(x183+x184));

	if (t32 != -1338136) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x185 = 185U;
	int8_t x186 = INT8_MIN;
	volatile int8_t x188 = -1;
	volatile int32_t t33 = 303;

	t33 = ((x185*x186)^(x187+x188));

	if (t33 != -23704) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x193 = -4;
	static int16_t x194 = INT16_MIN;
	uint16_t x196 = UINT16_MAX;

	t34 = ((x193*x194)^(x195+x196));

	if (t34 != 202849) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x201 = 2U;
	uint32_t x202 = 4U;
	volatile int16_t x203 = INT16_MIN;
	static int32_t x204 = -24;
	uint32_t t35 = 68U;

	t35 = ((x201*x202)^(x203+x204));

	if (t35 != 4294934496U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x205 = -1;
	static int64_t x206 = -1LL;
	static int16_t x207 = INT16_MAX;
	uint16_t x208 = UINT16_MAX;
	static int64_t t36 = -49LL;

	t36 = ((x205*x206)^(x207+x208));

	if (t36 != 98303LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x209 = 812301;
	volatile int8_t x210 = -4;
	static int8_t x211 = 1;
	volatile int16_t x212 = -1;
	volatile int32_t t37 = 5195;

	t37 = ((x209*x210)^(x211+x212));

	if (t37 != -3249204) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = -1LL;
	volatile uint8_t x215 = 3U;
	int8_t x216 = INT8_MIN;
	volatile int64_t t38 = 3LL;

	t38 = ((x213*x214)^(x215+x216));

	if (t38 != -32893LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x217 = INT8_MAX;
	int32_t x218 = -38;
	int8_t x220 = 1;
	volatile int32_t t39 = 49554258;

	t39 = ((x217*x218)^(x219+x220));

	if (t39 != -37594) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x221 = 1571214673LLU;
	volatile uint32_t x222 = 1U;
	static uint8_t x223 = 14U;
	static volatile int16_t x224 = -1;

	t40 = ((x221*x222)^(x223+x224));

	if (t40 != 1571214684LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x225 = INT16_MIN;
	volatile int8_t x228 = 1;

	t41 = ((x225*x226)^(x227+x228));

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x229 = 1391LLU;
	int16_t x230 = INT16_MIN;
	int8_t x232 = -1;

	t42 = ((x229*x230)^(x231+x232));

	if (t42 != 18446744073663971372LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = INT32_MAX;
	int8_t x234 = 1;
	static volatile uint8_t x235 = UINT8_MAX;
	int8_t x236 = 25;

	t43 = ((x233*x234)^(x235+x236));

	if (t43 != 2147483367) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x245 = -1;
	volatile int64_t x246 = -1LL;
	volatile uint32_t x247 = 520U;
	int64_t x248 = INT64_MIN;
	volatile int64_t t44 = 1LL;

	t44 = ((x245*x246)^(x247+x248));

	if (t44 != -9223372036854775287LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = -5;
	uint16_t x250 = 0U;
	volatile int8_t x251 = -55;
	volatile int16_t x252 = INT16_MIN;

	t45 = ((x249*x250)^(x251+x252));

	if (t45 != -32823) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x257 = -42;
	volatile int16_t x258 = -7;
	uint8_t x259 = 1U;
	volatile int32_t x260 = -1;
	int32_t t46 = 1;

	t46 = ((x257*x258)^(x259+x260));

	if (t46 != 294) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x269 = -1;
	int16_t x270 = -521;
	int64_t x272 = INT64_MAX;
	static int64_t t47 = 4002541892287899LL;

	t47 = ((x269*x270)^(x271+x272));

	if (t47 != 9223372034707291638LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x277 = INT8_MAX;
	uint16_t x280 = 0U;
	volatile int32_t t48 = 820042436;

	t48 = ((x277*x278)^(x279+x280));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x281 = -1;
	static int32_t x282 = -1;
	volatile int8_t x283 = -2;
	static volatile int8_t x284 = INT8_MAX;

	t49 = ((x281*x282)^(x283+x284));

	if (t49 != 124) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = 13;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 3U;
	int32_t x288 = -1;
	volatile int32_t t50 = 1142533;

	t50 = ((x285*x286)^(x287+x288));

	if (t50 != -425982) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x289 = 447077U;
	int32_t x291 = -1;
	static int32_t x292 = INT32_MAX;
	uint64_t t51 = 3210173847707746643LLU;

	t51 = ((x289*x290)^(x291+x292));

	if (t51 != 18446744071562515045LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x293 = INT32_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t52 = -891;

	t52 = ((x293*x294)^(x295+x296));

	if (t52 != -2147450881) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x301 = -1;
	uint8_t x303 = 5U;
	int64_t t53 = 11696486093LL;

	t53 = ((x301*x302)^(x303+x304));

	if (t53 != 97LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x305 = 1U;
	static uint32_t x306 = 2660494U;
	uint64_t x307 = UINT64_MAX;
	uint64_t t54 = 3635230790287519LLU;

	t54 = ((x305*x306)^(x307+x308));

	if (t54 != 592225315204595658LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x313 = INT16_MIN;
	int8_t x314 = -4;
	uint8_t x315 = 12U;
	static uint32_t x316 = 1346869968U;
	static volatile uint32_t t55 = 1592218776U;

	t55 = ((x313*x314)^(x315+x316));

	if (t55 != 1346738908U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x318 = 611LLU;
	int64_t x319 = -11LL;
	int16_t x320 = INT16_MIN;
	uint64_t t56 = 60LLU;

	t56 = ((x317*x318)^(x319+x320));

	if (t56 != 18446744073709513965LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x321 = INT32_MIN;
	volatile int64_t x322 = -1354LL;
	static uint16_t x324 = 32U;
	static volatile int64_t t57 = 0LL;

	t57 = ((x321*x322)^(x323+x324));

	if (t57 != 2907692859423LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x329 = INT64_MAX;
	uint64_t x330 = 430823502LLU;
	int16_t x331 = INT16_MAX;
	int64_t x332 = -1LL;
	uint64_t t58 = 807402558LLU;

	t58 = ((x329*x330)^(x331+x332));

	if (t58 != 18446744073278740556LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x341 = 0;
	static int16_t x342 = INT16_MAX;
	volatile uint64_t x343 = 547991LLU;
	uint32_t x344 = UINT32_MAX;
	uint64_t t59 = 2365116588LLU;

	t59 = ((x341*x342)^(x343+x344));

	if (t59 != 4295515286LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x350 = 498427217U;
	volatile uint16_t x351 = UINT16_MAX;
	int32_t x352 = INT32_MIN;
	uint32_t t60 = 89U;

	t60 = ((x349*x350)^(x351+x352));

	if (t60 != 2773330047U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x354 = INT16_MIN;
	uint32_t x355 = UINT32_MAX;
	uint8_t x356 = UINT8_MAX;
	uint32_t t61 = 8U;

	t61 = ((x353*x354)^(x355+x356));

	if (t61 != 4294934782U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x365 = UINT64_MAX;
	int64_t x366 = -1LL;
	uint16_t x367 = 683U;
	volatile uint64_t t62 = 93779869570422LLU;

	t62 = ((x365*x366)^(x367+x368));

	if (t62 != 18446744073709519530LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x373 = UINT8_MAX;
	uint16_t x374 = UINT16_MAX;
	uint8_t x375 = 5U;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t63 = 901485LLU;

	t63 = ((x373*x374)^(x375+x376));

	if (t63 != 16711429LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x409 = INT16_MIN;
	uint64_t x410 = UINT64_MAX;
	uint64_t x411 = 266941641210734197LLU;
	uint16_t x412 = 8366U;

	t64 = ((x409*x410)^(x411+x412));

	if (t64 != 266941641210775331LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x414 = -1;
	int64_t x416 = INT64_MAX;
	int64_t t65 = -833LL;

	t65 = ((x413*x414)^(x415+x416));

	if (t65 != -4294967296LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x417 = 813482LLU;
	static uint8_t x418 = 6U;
	int16_t x419 = -1;
	static int8_t x420 = -1;
	static volatile uint64_t t66 = 857374329448312LLU;

	t66 = ((x417*x418)^(x419+x420));

	if (t66 != 18446744073704670722LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x421 = INT16_MAX;
	volatile int32_t x423 = 1;
	volatile int32_t x424 = INT32_MIN;
	int32_t t67 = 319528052;

	t67 = ((x421*x422)^(x423+x424));

	if (t67 != -2139128064) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x425 = 387483LL;
	static int32_t x426 = INT32_MAX;
	int32_t x427 = -1;
	int16_t x428 = -1;

	t68 = ((x425*x426)^(x427+x428));

	if (t68 != -832113405990501LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x433 = INT16_MAX;
	volatile int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = 25U;
	volatile uint32_t t69 = 18U;

	t69 = ((x433*x434)^(x435+x436));

	if (t69 != 4161689U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x438 = INT32_MIN;
	volatile uint32_t x439 = 0U;
	int64_t x440 = -1LL;

	t70 = ((x437*x438)^(x439+x440));

	if (t70 != -2147483649LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x445 = 0U;
	static int64_t x446 = 320096395899171327LL;
	volatile uint64_t x447 = UINT64_MAX;
	static int32_t x448 = INT32_MAX;
	static volatile uint64_t t71 = 5968699LLU;

	t71 = ((x445*x446)^(x447+x448));

	if (t71 != 2147483646LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x449 = 2U;
	uint8_t x451 = 87U;
	volatile int16_t x452 = 31;
	int64_t t72 = 418421738LL;

	t72 = ((x449*x450)^(x451+x452));

	if (t72 != -49669725005254300LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x453 = INT32_MIN;
	uint64_t x454 = 284LLU;
	static uint64_t x455 = 430267473149419040LLU;
	int8_t x456 = -61;
	volatile uint64_t t73 = 2872736405941300891LLU;

	t73 = ((x453*x454)^(x455+x456));

	if (t73 != 18016477199422053859LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x457 = UINT8_MAX;
	int8_t x458 = 1;
	static int8_t x459 = 1;
	volatile int16_t x460 = -12;
	static volatile int32_t t74 = 26;

	t74 = ((x457*x458)^(x459+x460));

	if (t74 != -246) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x463 = -1;
	static int64_t x464 = 499080LL;
	volatile uint64_t t75 = 130359LLU;

	t75 = ((x461*x462)^(x463+x464));

	if (t75 != 499076LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x465 = -1;
	int8_t x466 = INT8_MIN;
	uint32_t x467 = 100823552U;

	t76 = ((x465*x466)^(x467+x468));

	if (t76 != 100790912U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x477 = -3;
	volatile uint32_t x478 = 12827677U;
	uint8_t x479 = 0U;
	int16_t x480 = INT16_MIN;
	uint32_t t77 = 1U;

	t77 = ((x477*x478)^(x479+x480));

	if (t77 != 38489001U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x482 = -1;
	int8_t x483 = INT8_MIN;
	volatile int8_t x484 = 17;
	volatile uint32_t t78 = 0U;

	t78 = ((x481*x482)^(x483+x484));

	if (t78 != 108U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x485 = INT8_MIN;
	static int32_t x488 = INT32_MIN;
	uint64_t t79 = 107514348655LLU;

	t79 = ((x485*x486)^(x487+x488));

	if (t79 != 13855841276064LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x505 = INT16_MAX;
	int32_t x506 = -1;
	uint8_t x507 = 5U;
	volatile int8_t x508 = -1;
	int32_t t80 = 11164;

	t80 = ((x505*x506)^(x507+x508));

	if (t80 != -32763) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x509 = INT16_MIN;
	uint64_t x510 = UINT64_MAX;
	static int16_t x511 = INT16_MAX;
	uint8_t x512 = UINT8_MAX;
	uint64_t t81 = 43822284180LLU;

	t81 = ((x509*x510)^(x511+x512));

	if (t81 != 254LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x513 = UINT32_MAX;
	uint32_t x514 = 917117145U;
	uint32_t x515 = 8065813U;
	volatile int32_t x516 = -2;
	volatile uint32_t t82 = 389U;

	t82 = ((x513*x514)^(x515+x516));

	if (t82 != 3375297588U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x518 = UINT16_MAX;
	static uint16_t x520 = 0U;

	t83 = ((x517*x518)^(x519+x520));

	if (t83 != 65530LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x521 = INT32_MIN;
	static int64_t x522 = 568334309LL;
	int8_t x523 = INT8_MIN;
	int64_t x524 = -1LL;
	volatile int64_t t84 = 86983664LL;

	t84 = ((x521*x522)^(x523+x524));

	if (t84 != 1220488635174879103LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x525 = UINT32_MAX;
	int32_t x526 = INT32_MAX;
	uint16_t x527 = UINT16_MAX;
	uint64_t t85 = 1063241909560LLU;

	t85 = ((x525*x526)^(x527+x528));

	if (t85 != 3163430289732606791LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x533 = -1;
	uint16_t x534 = 0U;
	static uint32_t x535 = UINT32_MAX;
	static volatile int64_t x536 = 153229395704425421LL;
	int64_t t86 = 639051419190LL;

	t86 = ((x533*x534)^(x535+x536));

	if (t86 != 153229399999392716LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x538 = 0U;
	static int8_t x539 = -1;
	static volatile int16_t x540 = INT16_MIN;
	static volatile int32_t t87 = -16542;

	t87 = ((x537*x538)^(x539+x540));

	if (t87 != -32769) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x541 = 1;
	uint8_t x542 = 83U;
	int32_t x543 = INT32_MIN;
	int64_t x544 = -18380612316LL;
	int64_t t88 = 3370348657LL;

	t88 = ((x541*x542)^(x543+x544));

	if (t88 != -20528095881LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x545 = 81868;
	uint8_t x546 = 3U;
	uint32_t x547 = 23334U;
	uint64_t x548 = UINT64_MAX;
	static uint64_t t89 = 1401331392123LLU;

	t89 = ((x545*x546)^(x547+x548));

	if (t89 != 255041LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x553 = -1310;
	int64_t x554 = 2200200327LL;
	uint16_t x556 = 19U;
	static int64_t t90 = 871900994388LL;

	t90 = ((x553*x554)^(x555+x556));

	if (t90 != -2882262428612LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x557 = INT8_MIN;
	static int16_t x558 = INT16_MAX;
	static volatile uint8_t x559 = 0U;
	volatile int16_t x560 = 1;
	volatile int32_t t91 = -10984;

	t91 = ((x557*x558)^(x559+x560));

	if (t91 != -4194175) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x561 = 1U;
	static int8_t x562 = INT8_MAX;
	uint8_t x563 = 2U;
	int8_t x564 = -1;
	volatile int32_t t92 = 1133;

	t92 = ((x561*x562)^(x563+x564));

	if (t92 != 126) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x569 = INT16_MIN;
	int8_t x570 = INT8_MIN;
	int64_t x571 = INT64_MIN;
	uint8_t x572 = 0U;
	int64_t t93 = 33335477291LL;

	t93 = ((x569*x570)^(x571+x572));

	if (t93 != -9223372036850581504LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x573 = 121LL;
	volatile int16_t x574 = INT16_MAX;
	int8_t x575 = 4;
	int32_t x576 = 0;

	t94 = ((x573*x574)^(x575+x576));

	if (t94 != 3964803LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x581 = UINT8_MAX;
	static int64_t x583 = 6642083LL;
	volatile int8_t x584 = 1;
	int64_t t95 = 302240LL;

	t95 = ((x581*x582)^(x583+x584));

	if (t95 != -6629084LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x585 = 1568LLU;
	int64_t x586 = INT64_MAX;
	int16_t x587 = INT16_MIN;
	static volatile uint64_t t96 = 125226315085080653LLU;

	t96 = ((x585*x586)^(x587+x588));

	if (t96 != 18446744071562102303LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x589 = INT64_MIN;
	int32_t x591 = -1;
	volatile uint64_t t97 = 56668307512615493LLU;

	t97 = ((x589*x590)^(x591+x592));

	if (t97 != 9223372036854776161LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x593 = 172843446LL;
	int32_t x594 = INT32_MAX;
	uint8_t x595 = 7U;
	int64_t t98 = -1732554615802398118LL;

	t98 = ((x593*x594)^(x595+x596));

	if (t98 != 371178473776127556LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x599 = 0;
	int16_t x600 = INT16_MAX;
	int32_t t99 = 7641;

	t99 = ((x597*x598)^(x599+x600));

	if (t99 != 19762) { NG(); } else { ; }
	
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

