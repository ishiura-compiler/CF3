#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x11 = INT16_MIN;
int16_t x12 = -1;
volatile int64_t x14 = -586840286202477882LL;
int8_t x15 = 8;
volatile int8_t x29 = INT8_MIN;
int16_t x37 = INT16_MIN;
uint64_t x39 = 91602382894897LLU;
static int64_t x42 = INT64_MIN;
uint32_t x52 = 28146146U;
int8_t x53 = 0;
static int16_t x56 = -1;
uint32_t t8 = 12891U;
static uint8_t x60 = 70U;
volatile int8_t x62 = INT8_MIN;
volatile int64_t t11 = 0LL;
volatile int16_t x69 = -1;
volatile uint64_t t13 = 12578668205961LLU;
volatile uint8_t x83 = 13U;
int8_t x84 = INT8_MIN;
int32_t t14 = -60898493;
static int8_t x93 = INT8_MIN;
int32_t t17 = 2421;
uint32_t x99 = 1U;
uint32_t t19 = 1U;
volatile uint64_t t20 = 2787738249726LLU;
static int16_t x109 = -12584;
int8_t x113 = -1;
int16_t x116 = 10;
volatile int32_t t22 = 27;
static volatile int64_t x117 = -1LL;
int16_t x125 = -1;
static int32_t x126 = -1;
uint8_t x127 = 119U;
int16_t x130 = 72;
int32_t x140 = 62189729;
uint64_t x150 = 11711529847238LLU;
uint64_t t29 = 186271404LLU;
int16_t x154 = -4;
volatile uint64_t t30 = 1101LLU;
int64_t x204 = -1LL;
static volatile int16_t x211 = -1;
uint64_t x216 = UINT64_MAX;
int16_t x222 = INT16_MIN;
static int16_t x225 = 2;
volatile uint64_t t40 = 143379LLU;
uint8_t x233 = UINT8_MAX;
static uint32_t x241 = 121189942U;
static volatile uint16_t x242 = 2U;
int16_t x252 = -1;
volatile int16_t x257 = -1007;
uint32_t x264 = 109U;
static volatile int64_t t49 = 6752323LL;
int64_t t50 = 923LL;
volatile int16_t x273 = INT16_MAX;
uint64_t x276 = 2354773374LLU;
uint16_t x277 = UINT16_MAX;
uint64_t x283 = UINT64_MAX;
static uint32_t x285 = UINT32_MAX;
uint64_t x286 = 35647311785LLU;
volatile uint64_t t55 = 2916831860747118LLU;
int64_t t57 = -335377405497251047LL;
volatile int64_t x306 = -1LL;
volatile int64_t t59 = 1753737855648996LL;
uint64_t x317 = UINT64_MAX;
uint64_t x322 = 12267956322LLU;
uint64_t x324 = 221258LLU;
uint16_t x330 = UINT16_MAX;
volatile uint32_t x332 = 2029U;
volatile uint32_t t63 = 178U;
uint64_t x335 = 769025980118LLU;
uint64_t x336 = 29562081LLU;
int32_t x346 = -240;
volatile int64_t x366 = -1LL;
volatile uint64_t x380 = 13LLU;
int32_t x383 = INT32_MIN;
uint16_t x389 = UINT16_MAX;
uint64_t t73 = 240632LLU;
uint32_t x394 = 170289U;
uint16_t x395 = 895U;
int16_t x397 = INT16_MIN;
static int16_t x400 = -1;
volatile int16_t x414 = INT16_MIN;
uint64_t t77 = 211384LLU;
volatile uint32_t x427 = 352970U;
int16_t x428 = -1;
int64_t x441 = INT64_MIN;
static uint8_t x442 = 5U;
volatile int64_t t82 = 1314937128022675LL;
int8_t x460 = INT8_MIN;
uint8_t x461 = UINT8_MAX;
int16_t x464 = -1;
static int64_t x468 = 503417995782409LL;
volatile int64_t t87 = -893387921LL;
int64_t x485 = INT64_MIN;
static uint32_t x486 = 5329U;
uint64_t t89 = 498284LLU;
int32_t x505 = INT32_MIN;
uint16_t x506 = UINT16_MAX;
volatile uint64_t x513 = 42658252692437LLU;
uint16_t x515 = UINT16_MAX;
int8_t x519 = 1;
uint64_t x520 = 6029625437607LLU;
int16_t x545 = 11565;
volatile uint32_t t99 = 31369898U;


void f0(void) {
	volatile int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MIN;
	int32_t t0 = 40431454;

	t0 = (x9+(x10+(x11*x12)));

	if (t0 != -2147451008) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x13 = 2765756LLU;
	uint8_t x16 = 0U;
	uint64_t t1 = 3722482319LLU;

	t1 = (x13+(x14+(x15*x16)));

	if (t1 != 17859903787509839490LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -12795530322373675LL;
	uint32_t x18 = 12110U;
	int16_t x19 = -1;
	static uint16_t x20 = 1U;
	volatile int64_t t2 = -5362660LL;

	t2 = (x17+(x18+(x19*x20)));

	if (t2 != -12795530322361566LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x30 = -1LL;
	static int16_t x31 = -1;
	int64_t x32 = -1LL;
	volatile int64_t t3 = -12547501783168LL;

	t3 = (x29+(x30+(x31*x32)));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x38 = UINT8_MAX;
	uint64_t x40 = UINT64_MAX;
	static uint64_t t4 = 386LLU;

	t4 = (x37+(x38+(x39*x40)));

	if (t4 != 18446652471326624206LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x41 = INT8_MIN;
	int64_t x43 = -5600100847LL;
	int16_t x44 = -1;
	volatile int64_t t5 = 182137234354LL;

	t5 = (x41+(x42+(x43*x44)));

	if (t5 != -9223372031254675089LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = INT32_MIN;
	static volatile int64_t x46 = -201LL;
	static int16_t x47 = 3;
	volatile int32_t x48 = -1;
	int64_t t6 = -179714202740LL;

	t6 = (x45+(x46+(x47*x48)));

	if (t6 != -2147483852LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x49 = 11U;
	int16_t x50 = INT16_MAX;
	int32_t x51 = -4560613;
	volatile uint32_t t7 = 3850U;

	t7 = (x49+(x50+(x51*x52)));

	if (t7 != 8260832U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x54 = UINT32_MAX;
	int8_t x55 = INT8_MIN;

	t8 = (x53+(x54+(x55*x56)));

	if (t8 != 127U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = INT8_MAX;
	volatile int32_t x58 = 351;
	uint64_t x59 = UINT64_MAX;
	volatile uint64_t t9 = 34028LLU;

	t9 = (x57+(x58+(x59*x60)));

	if (t9 != 408LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x61 = 8748584351847662475LLU;
	int16_t x63 = INT16_MIN;
	volatile int16_t x64 = INT16_MIN;
	volatile uint64_t t10 = 117943492677782987LLU;

	t10 = (x61+(x62+(x63*x64)));

	if (t10 != 8748584352921404171LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x65 = INT64_MIN;
	static int8_t x66 = INT8_MIN;
	static int32_t x67 = INT32_MAX;
	uint32_t x68 = 5679113U;

	t11 = (x65+(x66+(x67*x68)));

	if (t11 != -9223372034712971401LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = -37214LL;
	uint64_t t12 = 15616440664106LLU;

	t12 = (x69+(x70+(x71*x72)));

	if (t12 != 37085LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x73 = UINT64_MAX;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MIN;
	static volatile int16_t x76 = INT16_MIN;

	t13 = (x73+(x74+(x75*x76)));

	if (t13 != 1073741822LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int8_t x82 = INT8_MAX;

	t14 = (x81+(x82+(x83*x84)));

	if (t14 != 63998) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = -1LL;
	int16_t x86 = INT16_MAX;
	static int64_t x87 = -1LL;
	uint64_t x88 = 1463158384329LLU;
	volatile uint64_t t15 = 1600313268990129LLU;

	t15 = (x85+(x86+(x87*x88)));

	if (t15 != 18446742610551200053LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 4055LLU;
	uint8_t x90 = 63U;
	int64_t x91 = 103LL;
	uint16_t x92 = UINT16_MAX;
	uint64_t t16 = 108143560373838246LLU;

	t16 = (x89+(x90+(x91*x92)));

	if (t16 != 6754223LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x94 = INT16_MAX;
	volatile int8_t x95 = INT8_MAX;
	volatile uint8_t x96 = 46U;

	t17 = (x93+(x94+(x95*x96)));

	if (t17 != 38481) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x97 = 16U;
	volatile uint64_t x98 = UINT64_MAX;
	int32_t x100 = INT32_MIN;
	uint64_t t18 = 764555LLU;

	t18 = (x97+(x98+(x99*x100)));

	if (t18 != 2147483663LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x101 = -1;
	uint8_t x102 = 24U;
	volatile int32_t x103 = INT32_MIN;
	static uint32_t x104 = 58323786U;

	t19 = (x101+(x102+(x103*x104)));

	if (t19 != 23U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = 33;
	int8_t x106 = INT8_MAX;
	volatile int64_t x107 = INT64_MIN;
	volatile uint64_t x108 = 8997896690552LLU;

	t20 = (x105+(x106+(x107*x108)));

	if (t20 != 160LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x110 = INT32_MIN;
	static uint64_t x111 = 388508257246770LLU;
	static int64_t x112 = INT64_MAX;
	uint64_t t21 = 195LLU;

	t21 = (x109+(x110+(x111*x112)));

	if (t21 != 18446355563304808614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x114 = INT8_MIN;
	volatile uint16_t x115 = UINT16_MAX;

	t22 = (x113+(x114+(x115*x116)));

	if (t22 != 655221) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x118 = -1;
	uint32_t x119 = 994011U;
	int32_t x120 = -1;
	int64_t t23 = -194123311LL;

	t23 = (x117+(x118+(x119*x120)));

	if (t23 != 4293973283LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x128 = 10U;
	volatile int32_t t24 = -7360;

	t24 = (x125+(x126+(x127*x128)));

	if (t24 != 1188) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = -1;
	int64_t x131 = -1LL;
	int64_t x132 = 1459780964LL;
	int64_t t25 = -2095066766633LL;

	t25 = (x129+(x130+(x131*x132)));

	if (t25 != -1459780893LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MIN;
	volatile int32_t x138 = -1;
	uint32_t x139 = UINT32_MAX;
	static uint32_t t26 = 8129U;

	t26 = (x137+(x138+(x139*x140)));

	if (t26 != 2085293918U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x141 = 104U;
	int8_t x142 = INT8_MIN;
	int32_t x143 = 1;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t27 = 52006LLU;

	t27 = (x141+(x142+(x143*x144)));

	if (t27 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MAX;
	int32_t x146 = -1;
	int8_t x147 = 31;
	static int16_t x148 = INT16_MAX;
	int32_t t28 = -1;

	t28 = (x145+(x146+(x147*x148)));

	if (t28 != 1015903) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = INT8_MAX;
	uint8_t x151 = UINT8_MAX;
	volatile int32_t x152 = -1;

	t29 = (x149+(x150+(x151*x152)));

	if (t29 != 11711529847110LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x153 = -27550;
	uint64_t x155 = UINT64_MAX;
	int64_t x156 = -1LL;

	t30 = (x153+(x154+(x155*x156)));

	if (t30 != 18446744073709524063LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x157 = 4U;
	int8_t x158 = -5;
	int8_t x159 = INT8_MIN;
	uint16_t x160 = 114U;
	static volatile int32_t t31 = -458313;

	t31 = (x157+(x158+(x159*x160)));

	if (t31 != -14593) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x177 = 192U;
	static uint32_t x178 = 528975690U;
	static int16_t x179 = 5;
	volatile uint16_t x180 = UINT16_MAX;
	uint32_t t32 = 3590U;

	t32 = (x177+(x178+(x179*x180)));

	if (t32 != 529303557U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x185 = INT64_MIN;
	uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MIN;
	volatile int32_t x188 = -1;
	volatile int64_t t33 = 42685065353228796LL;

	t33 = (x185+(x186+(x187*x188)));

	if (t33 != -9223372036854742785LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = -8;
	uint64_t x190 = 30780LLU;
	int64_t x191 = -670340203LL;
	int16_t x192 = 10552;
	volatile uint64_t t34 = 14LLU;

	t34 = (x189+(x190+(x191*x192)));

	if (t34 != 18446737000279760332LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x201 = INT64_MAX;
	static int32_t x202 = INT32_MIN;
	static int32_t x203 = -1;
	volatile int64_t t35 = -14504749LL;

	t35 = (x201+(x202+(x203*x204)));

	if (t35 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x205 = -1;
	int8_t x206 = 29;
	int64_t x207 = 18303LL;
	uint8_t x208 = 10U;
	int64_t t36 = -70998866830505894LL;

	t36 = (x205+(x206+(x207*x208)));

	if (t36 != 183058LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = -1;
	int16_t x210 = INT16_MAX;
	uint16_t x212 = 13U;
	int32_t t37 = 109127;

	t37 = (x209+(x210+(x211*x212)));

	if (t37 != 32753) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = -1LL;
	int32_t x214 = -380242;
	int64_t x215 = INT64_MIN;
	uint64_t t38 = 175876LLU;

	t38 = (x213+(x214+(x215*x216)));

	if (t38 != 9223372036854395565LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x221 = INT8_MIN;
	uint32_t x223 = UINT32_MAX;
	static volatile uint8_t x224 = 2U;
	static uint32_t t39 = 8706366U;

	t39 = (x221+(x222+(x223*x224)));

	if (t39 != 4294934398U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x226 = UINT64_MAX;
	uint8_t x227 = 1U;
	int16_t x228 = INT16_MIN;

	t40 = (x225+(x226+(x227*x228)));

	if (t40 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x229 = -1LL;
	static int8_t x230 = INT8_MIN;
	uint16_t x231 = UINT16_MAX;
	int8_t x232 = INT8_MIN;
	volatile int64_t t41 = -395735939193712256LL;

	t41 = (x229+(x230+(x231*x232)));

	if (t41 != -8388609LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x234 = 4867045189794LL;
	int16_t x235 = -1;
	int32_t x236 = -6;
	volatile int64_t t42 = 1312636LL;

	t42 = (x233+(x234+(x235*x236)));

	if (t42 != 4867045190055LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x237 = 2LLU;
	int64_t x238 = INT64_MAX;
	uint8_t x239 = 0U;
	volatile int32_t x240 = INT32_MAX;
	volatile uint64_t t43 = 690180508LLU;

	t43 = (x237+(x238+(x239*x240)));

	if (t43 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x243 = INT32_MIN;
	uint64_t x244 = 1728LLU;
	uint64_t t44 = 16LLU;

	t44 = (x241+(x242+(x243*x244)));

	if (t44 != 18446740362978997816LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x245 = 311681977828550LLU;
	int64_t x246 = INT64_MAX;
	int8_t x247 = -43;
	volatile uint8_t x248 = UINT8_MAX;
	volatile uint64_t t45 = 501LLU;

	t45 = (x245+(x246+(x247*x248)));

	if (t45 != 9223683718832593392LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x249 = UINT64_MAX;
	int8_t x250 = 0;
	uint8_t x251 = UINT8_MAX;
	static volatile uint64_t t46 = 70143839935LLU;

	t46 = (x249+(x250+(x251*x252)));

	if (t46 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = INT16_MIN;
	uint8_t x254 = 12U;
	uint32_t x255 = UINT32_MAX;
	static uint8_t x256 = 0U;
	volatile uint32_t t47 = 114913538U;

	t47 = (x253+(x254+(x255*x256)));

	if (t47 != 4294934540U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x258 = INT16_MIN;
	volatile int32_t x259 = INT32_MIN;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t48 = 30757899919LLU;

	t48 = (x257+(x258+(x259*x260)));

	if (t48 != 2147449873LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = -4;
	int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MIN;

	t49 = (x261+(x262+(x263*x264)));

	if (t49 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	int64_t x267 = 1879386LL;
	int8_t x268 = INT8_MAX;

	t50 = (x265+(x266+(x267*x268)));

	if (t50 != -1908801754LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x269 = 6U;
	volatile int16_t x270 = 940;
	int8_t x271 = -1;
	int32_t x272 = -1;
	volatile int32_t t51 = -59876276;

	t51 = (x269+(x270+(x271*x272)));

	if (t51 != 947) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x274 = INT8_MIN;
	int64_t x275 = INT64_MIN;
	uint64_t t52 = 7037LLU;

	t52 = (x273+(x274+(x275*x276)));

	if (t52 != 32639LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x278 = INT16_MAX;
	uint16_t x279 = 3U;
	int32_t x280 = -1067;
	int32_t t53 = -13375885;

	t53 = (x277+(x278+(x279*x280)));

	if (t53 != 95101) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x281 = -1;
	int8_t x282 = -5;
	static uint16_t x284 = 1U;
	volatile uint64_t t54 = 1940500LLU;

	t54 = (x281+(x282+(x283*x284)));

	if (t54 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x287 = UINT64_MAX;
	volatile uint64_t x288 = 152LLU;

	t55 = (x285+(x286+(x287*x288)));

	if (t55 != 39942278928LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x289 = INT64_MIN;
	static uint64_t x290 = UINT64_MAX;
	int16_t x291 = 1;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t56 = 6166LLU;

	t56 = (x289+(x290+(x291*x292)));

	if (t56 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x301 = -8282817095149677LL;
	uint16_t x302 = UINT16_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	int16_t x304 = INT16_MIN;

	t57 = (x301+(x302+(x303*x304)));

	if (t57 != -8282819242535022LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x305 = UINT16_MAX;
	uint8_t x307 = UINT8_MAX;
	volatile int8_t x308 = -2;
	volatile int64_t t58 = 495085353404642807LL;

	t58 = (x305+(x306+(x307*x308)));

	if (t58 != 65024LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x309 = INT64_MAX;
	uint16_t x310 = 3640U;
	int64_t x311 = -1LL;
	uint32_t x312 = UINT32_MAX;

	t59 = (x309+(x310+(x311*x312)));

	if (t59 != 9223372032559812152LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x318 = 36333451363501LL;
	volatile uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	volatile uint64_t t60 = 471368LLU;

	t60 = (x317+(x318+(x319*x320)));

	if (t60 != 36333451330860LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x321 = UINT32_MAX;
	int8_t x323 = 1;
	volatile uint64_t t61 = 1016994030833797LLU;

	t61 = (x321+(x322+(x323*x324)));

	if (t61 != 16563144875LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = INT8_MIN;
	static uint16_t x326 = 137U;
	uint64_t x327 = 52601059636567LLU;
	int16_t x328 = 1;
	volatile uint64_t t62 = 30237966207701LLU;

	t62 = (x325+(x326+(x327*x328)));

	if (t62 != 52601059636576LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x329 = UINT8_MAX;
	static int32_t x331 = INT32_MAX;

	t63 = (x329+(x330+(x331*x332)));

	if (t63 != 2147547409U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x333 = INT64_MAX;
	static uint8_t x334 = 16U;
	static volatile uint64_t t64 = 117923686252LLU;

	t64 = (x333+(x334+(x335*x336)));

	if (t64 != 13510636278497929765LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x337 = -1LL;
	uint16_t x338 = UINT16_MAX;
	int32_t x339 = -1;
	int16_t x340 = 23;
	int64_t t65 = 2865308682509LL;

	t65 = (x337+(x338+(x339*x340)));

	if (t65 != 65511LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x345 = 25;
	static uint16_t x347 = UINT16_MAX;
	uint32_t x348 = UINT32_MAX;
	uint32_t t66 = 358486U;

	t66 = (x345+(x346+(x347*x348)));

	if (t66 != 4294901546U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x349 = -1;
	int32_t x350 = -64225;
	volatile int8_t x351 = -10;
	int16_t x352 = -1;
	volatile int32_t t67 = 446366;

	t67 = (x349+(x350+(x351*x352)));

	if (t67 != -64216) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x357 = INT16_MIN;
	int8_t x358 = -1;
	static int16_t x359 = INT16_MIN;
	uint8_t x360 = 0U;
	volatile int32_t t68 = -76578;

	t68 = (x357+(x358+(x359*x360)));

	if (t68 != -32769) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x365 = 2;
	static uint16_t x367 = 2166U;
	int8_t x368 = INT8_MAX;
	volatile int64_t t69 = -271056609831798115LL;

	t69 = (x365+(x366+(x367*x368)));

	if (t69 != 275083LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x377 = 4U;
	static int8_t x378 = -1;
	uint64_t x379 = 968711852382070634LLU;
	volatile uint64_t t70 = 3625585LLU;

	t70 = (x377+(x378+(x379*x380)));

	if (t70 != 12593254080966918245LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x381 = INT16_MIN;
	volatile uint8_t x382 = UINT8_MAX;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t71 = 425457718LLU;

	t71 = (x381+(x382+(x383*x384)));

	if (t71 != 2147451135LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x385 = INT8_MIN;
	volatile int8_t x386 = INT8_MAX;
	volatile uint64_t x387 = 15433634883785LLU;
	volatile int8_t x388 = -1;
	volatile uint64_t t72 = 3147290LLU;

	t72 = (x385+(x386+(x387*x388)));

	if (t72 != 18446728640074667830LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x390 = 107;
	uint64_t x391 = 2919446023LLU;
	static uint8_t x392 = 15U;

	t73 = (x389+(x390+(x391*x392)));

	if (t73 != 43791755987LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x393 = -1;
	volatile uint32_t x396 = 65U;
	volatile uint32_t t74 = 1884U;

	t74 = (x393+(x394+(x395*x396)));

	if (t74 != 228463U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x398 = 17;
	int32_t x399 = 179678023;
	volatile int32_t t75 = 10223;

	t75 = (x397+(x398+(x399*x400)));

	if (t75 != -179710774) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x405 = -1;
	static int32_t x406 = INT32_MIN;
	static int8_t x407 = 5;
	uint8_t x408 = 1U;
	int32_t t76 = 236;

	t76 = (x405+(x406+(x407*x408)));

	if (t76 != -2147483644) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x413 = 307295889LLU;
	int64_t x415 = 6726858LL;
	uint64_t x416 = 492LLU;

	t77 = (x413+(x414+(x415*x416)));

	if (t77 != 3616877257LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x425 = INT64_MIN;
	volatile int16_t x426 = INT16_MAX;
	volatile int64_t t78 = -2306757288322LL;

	t78 = (x425+(x426+(x427*x428)));

	if (t78 != -9223372032560128715LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x443 = INT8_MIN;
	int16_t x444 = -6;
	static volatile int64_t t79 = 615792923602459LL;

	t79 = (x441+(x442+(x443*x444)));

	if (t79 != -9223372036854775035LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x445 = -1;
	static int8_t x446 = INT8_MIN;
	int8_t x447 = INT8_MIN;
	volatile uint16_t x448 = 25375U;
	static volatile int32_t t80 = -67951034;

	t80 = (x445+(x446+(x447*x448)));

	if (t80 != -3248129) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x449 = 21031584LL;
	int8_t x450 = 7;
	volatile uint8_t x451 = 59U;
	int8_t x452 = INT8_MIN;
	int64_t t81 = 83LL;

	t81 = (x449+(x450+(x451*x452)));

	if (t81 != 21024039LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x453 = INT8_MIN;
	uint8_t x454 = UINT8_MAX;
	static int64_t x455 = -1LL;
	uint16_t x456 = 23U;

	t82 = (x453+(x454+(x455*x456)));

	if (t82 != 104LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x457 = INT32_MIN;
	uint64_t x458 = 145LLU;
	int32_t x459 = 15812444;
	uint64_t t83 = 41440289894LLU;

	t83 = (x457+(x458+(x459*x460)));

	if (t83 != 18446744069538075281LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x462 = UINT8_MAX;
	volatile int8_t x463 = 2;
	volatile int32_t t84 = -215806;

	t84 = (x461+(x462+(x463*x464)));

	if (t84 != 508) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x465 = 19U;
	int32_t x466 = -698;
	int8_t x467 = 25;
	static int64_t t85 = -310028150LL;

	t85 = (x465+(x466+(x467*x468)));

	if (t85 != 12585449894559546LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x473 = INT32_MIN;
	int8_t x474 = -7;
	int64_t x475 = -1LL;
	int32_t x476 = -1665;
	volatile int64_t t86 = -979750464643007LL;

	t86 = (x473+(x474+(x475*x476)));

	if (t86 != -2147481990LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x481 = -12837;
	int64_t x482 = INT64_MIN;
	int32_t x483 = INT32_MIN;
	static int64_t x484 = -1LL;

	t87 = (x481+(x482+(x483*x484)));

	if (t87 != -9223372034707304997LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x487 = 5U;
	volatile uint16_t x488 = 6U;
	volatile int64_t t88 = 1LL;

	t88 = (x485+(x486+(x487*x488)));

	if (t88 != -9223372036854770449LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x497 = 1614201719LLU;
	volatile uint32_t x498 = UINT32_MAX;
	uint32_t x499 = 2U;
	int32_t x500 = -1;

	t89 = (x497+(x498+(x499*x500)));

	if (t89 != 5909169012LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x501 = 135742U;
	volatile int64_t x502 = 11LL;
	volatile uint8_t x503 = 3U;
	static volatile uint16_t x504 = UINT16_MAX;
	int64_t t90 = 1634396465445369853LL;

	t90 = (x501+(x502+(x503*x504)));

	if (t90 != 332358LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x507 = UINT16_MAX;
	uint32_t x508 = UINT32_MAX;
	volatile uint32_t t91 = 552U;

	t91 = (x505+(x506+(x507*x508)));

	if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x509 = INT32_MAX;
	static volatile int8_t x510 = INT8_MIN;
	int32_t x511 = INT32_MIN;
	uint64_t x512 = 2LLU;
	uint64_t t92 = 1048744LLU;

	t92 = (x509+(x510+(x511*x512)));

	if (t92 != 18446744071562067839LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x514 = -7932868464LL;
	int8_t x516 = INT8_MIN;
	volatile uint64_t t93 = 2LLU;

	t93 = (x513+(x514+(x515*x516)));

	if (t93 != 42650311435493LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x517 = 0U;
	int16_t x518 = 77;
	volatile uint64_t t94 = 33339787342LLU;

	t94 = (x517+(x518+(x519*x520)));

	if (t94 != 6029625437684LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x521 = INT16_MAX;
	volatile int16_t x522 = INT16_MIN;
	int16_t x523 = INT16_MIN;
	int32_t x524 = -1;
	int32_t t95 = -14;

	t95 = (x521+(x522+(x523*x524)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x529 = 259U;
	volatile uint16_t x530 = 148U;
	int16_t x531 = INT16_MIN;
	volatile uint8_t x532 = UINT8_MAX;
	volatile int32_t t96 = 951;

	t96 = (x529+(x530+(x531*x532)));

	if (t96 != -8355433) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x537 = INT32_MIN;
	volatile int16_t x538 = -5;
	static int8_t x539 = INT8_MIN;
	static int16_t x540 = -1;
	volatile int32_t t97 = -8799;

	t97 = (x537+(x538+(x539*x540)));

	if (t97 != -2147483525) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = INT8_MAX;
	volatile int32_t x542 = -1;
	static uint8_t x543 = 4U;
	int16_t x544 = -35;
	volatile int32_t t98 = 143720;

	t98 = (x541+(x542+(x543*x544)));

	if (t98 != -14) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x546 = 2U;
	uint32_t x547 = UINT32_MAX;
	static int32_t x548 = -1;

	t99 = (x545+(x546+(x547*x548)));

	if (t99 != 11568U) { NG(); } else { ; }
	
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

