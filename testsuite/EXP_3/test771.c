#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 0LL;
int8_t x21 = INT8_MAX;
uint16_t x23 = 7U;
int8_t x26 = -19;
int8_t x45 = 0;
volatile uint16_t x76 = UINT16_MAX;
static volatile int32_t t13 = 32829121;
uint16_t x77 = 2U;
volatile uint32_t t14 = 235070727U;
static int32_t x93 = -10036032;
volatile int32_t t19 = -17;
int16_t x116 = INT16_MAX;
static volatile int8_t x118 = INT8_MIN;
int16_t x127 = -17;
volatile uint8_t x142 = 2U;
int64_t x144 = INT64_MAX;
static volatile int8_t x147 = -1;
static volatile uint64_t t26 = 6388874LLU;
volatile int64_t t27 = -2846820840965LL;
int32_t x161 = INT32_MIN;
int64_t x166 = 1LL;
uint16_t x167 = UINT16_MAX;
int64_t x175 = -1LL;
int64_t x178 = INT64_MAX;
static uint8_t x186 = 0U;
volatile int32_t t38 = -19;
int16_t x216 = INT16_MAX;
static uint8_t x217 = 27U;
static uint8_t x219 = 113U;
int16_t x220 = -111;
static volatile int32_t t40 = -14;
int64_t x222 = -90709571608947LL;
volatile int8_t x239 = INT8_MAX;
int8_t x247 = 61;
volatile int32_t x253 = INT32_MIN;
uint16_t x255 = 55U;
volatile int32_t t46 = 2;
int32_t x259 = -1;
volatile uint16_t x263 = UINT16_MAX;
int64_t x264 = INT64_MAX;
volatile int64_t t48 = -154711052LL;
int8_t x265 = -39;
volatile int32_t x277 = INT32_MAX;
volatile int64_t x281 = INT64_MIN;
uint64_t t53 = 6704171LLU;
int8_t x289 = -26;
static int64_t t57 = 763LL;
uint16_t x303 = 7617U;
uint8_t x305 = UINT8_MAX;
volatile int16_t x306 = -101;
static uint32_t x308 = UINT32_MAX;
int32_t x310 = -1243;
int32_t t60 = -20;
volatile int32_t t62 = -11475;
int16_t x329 = -6;
volatile int32_t x353 = -6;
uint64_t x362 = 556596054637819LLU;
static uint64_t x367 = 1221LLU;
static uint64_t t70 = 7LLU;
int8_t x373 = 2;
int8_t x374 = -46;
volatile int32_t t75 = -3387961;
static int32_t x397 = INT32_MIN;
volatile int8_t x406 = 1;
uint16_t x409 = UINT16_MAX;
static int32_t x411 = INT32_MIN;
static uint32_t x418 = 219196U;
int64_t x419 = -1LL;
int8_t x427 = -1;
volatile int8_t x429 = 28;
int64_t x437 = -275026092274912744LL;
uint32_t x450 = 13633U;
int64_t x465 = 999602361LL;
uint64_t x474 = UINT64_MAX;
volatile uint8_t x476 = UINT8_MAX;
volatile uint32_t x481 = UINT32_MAX;
volatile int64_t x484 = 674221051018273LL;
volatile int64_t t93 = -246601558083820811LL;
uint32_t x485 = 118564259U;
int64_t x489 = INT64_MIN;
static int32_t x491 = INT32_MIN;
int64_t x498 = -8048761484LL;
volatile uint8_t x501 = 0U;
int32_t x502 = INT32_MIN;
static uint32_t x512 = 590916379U;
int8_t x518 = INT8_MIN;
static volatile uint8_t x520 = 3U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = -1;
	static uint16_t x3 = UINT16_MAX;
	int64_t x4 = INT64_MIN;

	t0 = ((x1==x2)/(x3%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 436973LLU;
	uint16_t x6 = 1747U;
	volatile uint32_t x7 = UINT32_MAX;
	static volatile int64_t x8 = 13LL;
	int64_t t1 = 168825230LL;

	t1 = ((x5==x6)/(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	static volatile uint16_t x10 = 5987U;
	volatile int64_t x11 = -1LL;
	uint8_t x12 = 84U;
	static volatile int64_t t2 = -30896034892975873LL;

	t2 = ((x9==x10)/(x11%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x22 = UINT16_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t3 = 1419;

	t3 = ((x21==x22)/(x23%x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 179U;
	volatile uint8_t x27 = 50U;
	static uint16_t x28 = UINT16_MAX;
	int32_t t4 = 444711;

	t4 = ((x25==x26)/(x27%x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 342184025LLU;
	volatile int64_t x30 = -11379254162LL;
	static uint16_t x31 = UINT16_MAX;
	static volatile uint32_t x32 = 3198U;
	volatile uint32_t t5 = 725504U;

	t5 = ((x29==x30)/(x31%x32));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = -1;
	int64_t x39 = INT64_MIN;
	static int32_t x40 = -3116;
	static int64_t t6 = 21390169568933931LL;

	t6 = ((x37==x38)/(x39%x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = 3;
	static int32_t x42 = INT32_MIN;
	uint16_t x43 = 12606U;
	uint8_t x44 = 61U;
	static int32_t t7 = 53637392;

	t7 = ((x41==x42)/(x43%x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int64_t t8 = 24088008379652631LL;

	t8 = ((x45==x46)/(x47%x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MAX;
	int64_t x50 = INT64_MIN;
	uint64_t x51 = 7357484230222005LLU;
	static int16_t x52 = INT16_MIN;
	uint64_t t9 = 55LLU;

	t9 = ((x49==x50)/(x51%x52));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = UINT16_MAX;
	static int32_t x62 = INT32_MIN;
	int32_t x63 = INT32_MAX;
	static uint8_t x64 = UINT8_MAX;
	volatile int32_t t10 = 101;

	t10 = ((x61==x62)/(x63%x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = -6LL;
	int64_t x66 = INT64_MIN;
	int64_t x67 = -1LL;
	uint8_t x68 = 32U;
	int64_t t11 = -37913350505151LL;

	t11 = ((x65==x66)/(x67%x68));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = 2;
	int8_t x70 = INT8_MIN;
	int8_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int64_t t12 = -1847032567LL;

	t12 = ((x69==x70)/(x71%x72));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x73 = 11718U;
	int8_t x74 = -1;
	volatile int16_t x75 = 1;

	t13 = ((x73==x74)/(x75%x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x78 = 3U;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MIN;

	t14 = ((x77==x78)/(x79%x80));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 198U;
	volatile uint8_t x82 = 44U;
	uint16_t x83 = UINT16_MAX;
	volatile uint16_t x84 = 30011U;
	int32_t t15 = -175605055;

	t15 = ((x81==x82)/(x83%x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	uint64_t x87 = 374475587793355494LLU;
	int32_t x88 = INT32_MAX;
	uint64_t t16 = 5015696LLU;

	t16 = ((x85==x86)/(x87%x88));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x94 = INT16_MIN;
	volatile int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MAX;
	volatile int64_t t17 = -442782LL;

	t17 = ((x93==x94)/(x95%x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = -12510150877LL;
	volatile int8_t x98 = 0;
	volatile int32_t x99 = INT32_MIN;
	uint64_t x100 = 106130LLU;
	static volatile uint64_t t18 = 1LLU;

	t18 = ((x97==x98)/(x99%x100));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x109 = 109U;
	uint32_t x110 = 778U;
	static uint8_t x111 = UINT8_MAX;
	static uint16_t x112 = 25329U;

	t19 = ((x109==x110)/(x111%x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = INT16_MIN;
	uint16_t x114 = 1U;
	uint8_t x115 = 55U;
	volatile int32_t t20 = -678868;

	t20 = ((x113==x114)/(x115%x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = 1;
	volatile uint64_t x119 = 3254LLU;
	int32_t x120 = INT32_MIN;
	uint64_t t21 = 23245LLU;

	t21 = ((x117==x118)/(x119%x120));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x125 = -1;
	int16_t x126 = INT16_MIN;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t22 = -165347913;

	t22 = ((x125==x126)/(x127%x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = -60;
	uint16_t x136 = UINT16_MAX;
	int32_t t23 = -13;

	t23 = ((x133==x134)/(x135%x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = INT8_MIN;
	uint16_t x143 = UINT16_MAX;
	int64_t t24 = -1206257573295LL;

	t24 = ((x141==x142)/(x143%x144));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = -1;
	int32_t x148 = 5425520;
	int32_t t25 = -333598;

	t25 = ((x145==x146)/(x147%x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	static uint16_t x151 = 1U;
	uint64_t x152 = 488LLU;

	t26 = ((x149==x150)/(x151%x152));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x157 = INT8_MIN;
	int16_t x158 = -5;
	int8_t x159 = 1;
	int64_t x160 = -10900493520336317LL;

	t27 = ((x157==x158)/(x159%x160));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x162 = 1069163183U;
	int8_t x163 = INT8_MAX;
	static uint64_t x164 = 155366056380017LLU;
	static uint64_t t28 = 42071840504LLU;

	t28 = ((x161==x162)/(x163%x164));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x168 = 4U;
	volatile int32_t t29 = -78;

	t29 = ((x165==x166)/(x167%x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x169 = 2038156LL;
	static volatile int64_t x170 = -522160273814522LL;
	static volatile uint16_t x171 = 14909U;
	uint64_t x172 = UINT64_MAX;
	static uint64_t t30 = 7870573370LLU;

	t30 = ((x169==x170)/(x171%x172));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x173 = 484455U;
	static int16_t x174 = INT16_MIN;
	volatile uint32_t x176 = 344728317U;
	int64_t t31 = -127068742921523LL;

	t31 = ((x173==x174)/(x175%x176));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x177 = 1137250250614045LLU;
	int32_t x179 = INT32_MIN;
	volatile int64_t x180 = -14507086LL;
	volatile int64_t t32 = 68068080768LL;

	t32 = ((x177==x178)/(x179%x180));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x181 = 1735414;
	volatile int16_t x182 = INT16_MIN;
	int8_t x183 = -1;
	uint32_t x184 = 9834080U;
	static uint32_t t33 = 29219810U;

	t33 = ((x181==x182)/(x183%x184));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x185 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	static volatile int16_t x188 = INT16_MAX;
	static volatile int32_t t34 = 3;

	t34 = ((x185==x186)/(x187%x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = INT64_MIN;
	volatile int64_t x190 = -1LL;
	uint64_t x191 = 13751464762954LLU;
	uint16_t x192 = 24U;
	uint64_t t35 = 3905991714LLU;

	t35 = ((x189==x190)/(x191%x192));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = -1LL;
	volatile uint16_t x194 = 34U;
	static int64_t x195 = -4141908725216518298LL;
	static uint16_t x196 = 2150U;
	int64_t t36 = -22448602996165LL;

	t36 = ((x193==x194)/(x195%x196));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x201 = 7636;
	int8_t x202 = -1;
	static int16_t x203 = INT16_MIN;
	volatile int32_t x204 = INT32_MIN;
	volatile int32_t t37 = 6;

	t37 = ((x201==x202)/(x203%x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x205 = -48;
	int32_t x206 = -2926525;
	int16_t x207 = 212;
	static uint16_t x208 = UINT16_MAX;

	t38 = ((x205==x206)/(x207%x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x213 = 103LLU;
	volatile int16_t x214 = -1;
	int64_t x215 = INT64_MIN;
	static volatile int64_t t39 = -601541LL;

	t39 = ((x213==x214)/(x215%x216));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x218 = INT8_MAX;

	t40 = ((x217==x218)/(x219%x220));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x221 = -1;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	static volatile int64_t t41 = 10879828012LL;

	t41 = ((x221==x222)/(x223%x224));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x229 = 63U;
	int64_t x230 = INT64_MIN;
	int8_t x231 = 31;
	int8_t x232 = INT8_MIN;
	int32_t t42 = -983709185;

	t42 = ((x229==x230)/(x231%x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = INT64_MAX;
	volatile int16_t x240 = INT16_MIN;
	int32_t t43 = 473867260;

	t43 = ((x237==x238)/(x239%x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x245 = 85U;
	int8_t x246 = -1;
	int16_t x248 = 29;
	volatile int32_t t44 = 12039;

	t44 = ((x245==x246)/(x247%x248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x249 = INT8_MIN;
	uint32_t x250 = UINT32_MAX;
	uint32_t x251 = 184113U;
	uint32_t x252 = 478083498U;
	uint32_t t45 = 935103311U;

	t45 = ((x249==x250)/(x251%x252));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x254 = INT16_MIN;
	int16_t x256 = INT16_MAX;

	t46 = ((x253==x254)/(x255%x256));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x257 = 0U;
	volatile int16_t x258 = INT16_MAX;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t47 = -338986;

	t47 = ((x257==x258)/(x259%x260));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = -15549533461720976LL;
	int64_t x262 = INT64_MIN;

	t48 = ((x261==x262)/(x263%x264));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x266 = -1;
	int8_t x267 = INT8_MIN;
	int64_t x268 = -27LL;
	volatile int64_t t49 = 4449LL;

	t49 = ((x265==x266)/(x267%x268));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x269 = 941U;
	uint32_t x270 = 3906189U;
	int64_t x271 = INT64_MAX;
	uint8_t x272 = 102U;
	volatile int64_t t50 = -71864LL;

	t50 = ((x269==x270)/(x271%x272));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x273 = INT32_MAX;
	volatile int8_t x274 = 25;
	uint64_t x275 = 13648006643LLU;
	int64_t x276 = -4LL;
	uint64_t t51 = 72LLU;

	t51 = ((x273==x274)/(x275%x276));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x278 = INT32_MIN;
	int32_t x279 = 250758;
	uint8_t x280 = 48U;
	static volatile int32_t t52 = -78974928;

	t52 = ((x277==x278)/(x279%x280));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x282 = INT16_MIN;
	uint16_t x283 = UINT16_MAX;
	volatile uint64_t x284 = UINT64_MAX;

	t53 = ((x281==x282)/(x283%x284));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x285 = INT64_MAX;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = 2391498209111LLU;
	volatile int8_t x288 = -1;
	uint64_t t54 = 70LLU;

	t54 = ((x285==x286)/(x287%x288));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x290 = UINT8_MAX;
	uint8_t x291 = UINT8_MAX;
	uint8_t x292 = 4U;
	int32_t t55 = 866244319;

	t55 = ((x289==x290)/(x291%x292));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x293 = UINT32_MAX;
	static int32_t x294 = -1;
	uint32_t x295 = 343U;
	int64_t x296 = INT64_MAX;
	volatile int64_t t56 = 1474231LL;

	t56 = ((x293==x294)/(x295%x296));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x297 = 3520176U;
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	uint16_t x300 = 11U;

	t57 = ((x297==x298)/(x299%x300));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = -126381352LL;
	int64_t x302 = -2146190726546667615LL;
	static uint16_t x304 = 7835U;
	int32_t t58 = -4747;

	t58 = ((x301==x302)/(x303%x304));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x307 = 21;
	static volatile uint32_t t59 = 204761371U;

	t59 = ((x305==x306)/(x307%x308));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x309 = -1;
	int16_t x311 = 446;
	uint16_t x312 = 3U;

	t60 = ((x309==x310)/(x311%x312));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x313 = 147721722U;
	volatile uint64_t x314 = UINT64_MAX;
	volatile int32_t x315 = 14111;
	int64_t x316 = INT64_MAX;
	volatile int64_t t61 = 1LL;

	t61 = ((x313==x314)/(x315%x316));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MIN;
	int8_t x323 = 1;
	uint16_t x324 = UINT16_MAX;

	t62 = ((x321==x322)/(x323%x324));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x330 = 1;
	uint8_t x331 = 19U;
	int16_t x332 = INT16_MIN;
	int32_t t63 = 12478337;

	t63 = ((x329==x330)/(x331%x332));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = INT8_MIN;
	static uint16_t x334 = 31U;
	uint64_t x335 = 4LLU;
	uint16_t x336 = UINT16_MAX;
	uint64_t t64 = 17LLU;

	t64 = ((x333==x334)/(x335%x336));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x341 = 1LLU;
	static int32_t x342 = INT32_MIN;
	static uint64_t x343 = UINT64_MAX;
	int16_t x344 = 484;
	uint64_t t65 = 3524932601272936030LLU;

	t65 = ((x341==x342)/(x343%x344));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x345 = 56149LLU;
	int8_t x346 = INT8_MAX;
	int64_t x347 = INT64_MAX;
	int32_t x348 = 74;
	static int64_t t66 = 1015214925947053LL;

	t66 = ((x345==x346)/(x347%x348));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x354 = -31;
	static int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MAX;
	volatile int64_t t67 = -483500427438137LL;

	t67 = ((x353==x354)/(x355%x356));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x357 = -1LL;
	volatile int8_t x358 = INT8_MIN;
	uint8_t x359 = UINT8_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t68 = -37215209;

	t68 = ((x357==x358)/(x359%x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x361 = 30LLU;
	int64_t x363 = INT64_MAX;
	static uint8_t x364 = 24U;
	volatile int64_t t69 = 41598162727875519LL;

	t69 = ((x361==x362)/(x363%x364));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int16_t x366 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;

	t70 = ((x365==x366)/(x367%x368));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = UINT8_MAX;
	uint16_t x371 = 54U;
	int32_t x372 = INT32_MIN;
	int32_t t71 = 191142;

	t71 = ((x369==x370)/(x371%x372));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x375 = INT32_MAX;
	int64_t x376 = INT64_MAX;
	volatile int64_t t72 = 474439081786625LL;

	t72 = ((x373==x374)/(x375%x376));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x377 = -6;
	int8_t x378 = 14;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 170039900U;
	volatile uint32_t t73 = 100U;

	t73 = ((x377==x378)/(x379%x380));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x381 = UINT32_MAX;
	static uint8_t x382 = UINT8_MAX;
	int16_t x383 = -1;
	int64_t x384 = INT64_MIN;
	int64_t t74 = -220597050132050490LL;

	t74 = ((x381==x382)/(x383%x384));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x385 = UINT16_MAX;
	static uint8_t x386 = UINT8_MAX;
	int8_t x387 = -54;
	volatile uint16_t x388 = 550U;

	t75 = ((x385==x386)/(x387%x388));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x398 = -1;
	uint16_t x399 = UINT16_MAX;
	volatile int16_t x400 = INT16_MAX;
	volatile int32_t t76 = 0;

	t76 = ((x397==x398)/(x399%x400));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x405 = 4U;
	int32_t x407 = 6470;
	int8_t x408 = INT8_MAX;
	static int32_t t77 = -636994811;

	t77 = ((x405==x406)/(x407%x408));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x410 = INT64_MIN;
	int32_t x412 = INT32_MAX;
	volatile int32_t t78 = 1;

	t78 = ((x409==x410)/(x411%x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x414 = 1775057020LL;
	static int32_t x415 = -2;
	int64_t x416 = -246474466238LL;
	volatile int64_t t79 = 48015LL;

	t79 = ((x413==x414)/(x415%x416));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = -1;
	volatile uint32_t x420 = 49262U;
	int64_t t80 = 0LL;

	t80 = ((x417==x418)/(x419%x420));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = 3;
	uint32_t x423 = 13136121U;
	static int16_t x424 = INT16_MIN;
	static volatile uint32_t t81 = 1239U;

	t81 = ((x421==x422)/(x423%x424));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x425 = -1LL;
	static uint16_t x426 = UINT16_MAX;
	int64_t x428 = INT64_MIN;
	static int64_t t82 = 1947152226501LL;

	t82 = ((x425==x426)/(x427%x428));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x430 = INT64_MAX;
	int64_t x431 = 11086125000114910LL;
	volatile int16_t x432 = -2041;
	int64_t t83 = 18933458187530LL;

	t83 = ((x429==x430)/(x431%x432));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x438 = UINT16_MAX;
	int32_t x439 = INT32_MIN;
	int64_t x440 = INT64_MIN;
	static volatile int64_t t84 = 1286915865654858LL;

	t84 = ((x437==x438)/(x439%x440));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x441 = UINT8_MAX;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MAX;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t85 = 15LLU;

	t85 = ((x441==x442)/(x443%x444));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x449 = UINT32_MAX;
	int64_t x451 = INT64_MIN;
	uint32_t x452 = 130U;
	static volatile int64_t t86 = -180206407862687264LL;

	t86 = ((x449==x450)/(x451%x452));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x453 = -5;
	int16_t x454 = 7;
	volatile int64_t x455 = 1031816813717LL;
	uint64_t x456 = 37280LLU;
	volatile uint64_t t87 = 7828LLU;

	t87 = ((x453==x454)/(x455%x456));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x457 = 33888U;
	static int64_t x458 = INT64_MIN;
	volatile uint64_t x459 = UINT64_MAX;
	static int32_t x460 = INT32_MIN;
	uint64_t t88 = 3097050LLU;

	t88 = ((x457==x458)/(x459%x460));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x461 = 14286268868784008LL;
	int8_t x462 = 14;
	int64_t x463 = INT64_MAX;
	int64_t x464 = INT64_MIN;
	int64_t t89 = -1279658851LL;

	t89 = ((x461==x462)/(x463%x464));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x466 = 24;
	int8_t x467 = INT8_MIN;
	int64_t x468 = 369LL;
	volatile int64_t t90 = 953545321332LL;

	t90 = ((x465==x466)/(x467%x468));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x469 = INT32_MAX;
	static volatile uint8_t x470 = UINT8_MAX;
	int32_t x471 = INT32_MIN;
	static uint8_t x472 = 15U;
	volatile int32_t t91 = -10391;

	t91 = ((x469==x470)/(x471%x472));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x473 = INT16_MAX;
	int16_t x475 = INT16_MIN;
	int32_t t92 = 16232;

	t92 = ((x473==x474)/(x475%x476));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x482 = -1;
	uint8_t x483 = 11U;

	t93 = ((x481==x482)/(x483%x484));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x486 = INT64_MAX;
	static int64_t x487 = INT64_MAX;
	volatile int8_t x488 = INT8_MIN;
	volatile int64_t t94 = -447763428LL;

	t94 = ((x485==x486)/(x487%x488));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x490 = INT32_MAX;
	static int32_t x492 = 11;
	int32_t t95 = 1341588;

	t95 = ((x489==x490)/(x491%x492));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x497 = 6490059LLU;
	volatile uint64_t x499 = 75229540186141894LLU;
	static volatile int32_t x500 = -259;
	uint64_t t96 = 221584LLU;

	t96 = ((x497==x498)/(x499%x500));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x503 = UINT32_MAX;
	uint16_t x504 = 93U;
	volatile uint32_t t97 = 951824U;

	t97 = ((x501==x502)/(x503%x504));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x509 = 2LLU;
	int64_t x510 = -3561771LL;
	uint32_t x511 = UINT32_MAX;
	uint32_t t98 = 5810U;

	t98 = ((x509==x510)/(x511%x512));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x517 = INT32_MIN;
	int64_t x519 = -49194118LL;
	int64_t t99 = -744074882335LL;

	t99 = ((x517==x518)/(x519%x520));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

