#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = 8397U;
int64_t x8 = INT64_MAX;
static volatile int64_t t1 = 1579905LL;
static volatile int16_t x10 = 904;
int64_t t3 = 32197928802389491LL;
uint16_t x30 = 12U;
volatile uint64_t x32 = UINT64_MAX;
static int8_t x38 = INT8_MIN;
uint8_t x50 = 1U;
uint32_t x53 = UINT32_MAX;
volatile int64_t x61 = 9LL;
int64_t x63 = 11LL;
volatile uint16_t x86 = UINT16_MAX;
uint64_t x90 = 1438239373LLU;
uint32_t x92 = UINT32_MAX;
uint64_t t14 = 94544038469054569LLU;
static int32_t x112 = INT32_MIN;
int8_t x118 = -1;
int16_t x119 = -1;
uint32_t x128 = 41798U;
int8_t x131 = INT8_MIN;
static uint8_t x141 = 117U;
int64_t t24 = -16869580546866420LL;
int64_t x151 = 16572063968236LL;
int16_t x154 = 0;
int16_t x155 = INT16_MIN;
static uint32_t t26 = 3175U;
static uint8_t x160 = 3U;
int64_t x171 = INT64_MIN;
int8_t x181 = INT8_MIN;
int64_t x186 = -3728565800LL;
uint32_t x225 = UINT32_MAX;
uint8_t x235 = 65U;
volatile int32_t x240 = -1;
uint8_t x245 = UINT8_MAX;
int16_t x256 = 10037;
int64_t t45 = 201232019155770LL;
int64_t x267 = INT64_MIN;
static uint64_t x270 = UINT64_MAX;
static int32_t x273 = -1;
uint64_t x275 = UINT64_MAX;
static int8_t x282 = 1;
int32_t x291 = INT32_MIN;
volatile int32_t x292 = INT32_MIN;
static int64_t x343 = -76585LL;
uint32_t x345 = 85727016U;
uint8_t x346 = 48U;
int16_t x354 = 14540;
int32_t t65 = 243031;
static uint32_t x361 = 1345948519U;
int32_t x375 = -1;
int8_t x386 = -14;
volatile int8_t x390 = -1;
int8_t x391 = -1;
volatile uint8_t x393 = 4U;
volatile int16_t x394 = -1;
int16_t x404 = 827;
volatile int32_t t71 = 6427;
static int64_t x405 = INT64_MIN;
uint64_t x406 = 22712LLU;
volatile uint16_t x407 = 5U;
int32_t x414 = -1;
uint64_t x418 = 12789LLU;
volatile uint64_t t75 = 0LLU;
int64_t x421 = 1LL;
static volatile int16_t x427 = INT16_MIN;
int8_t x432 = INT8_MAX;
int32_t x438 = -1;
static int16_t x442 = 281;
volatile int32_t t80 = 3;
uint16_t x449 = 12U;
static volatile int32_t x450 = 3183411;
volatile int16_t x463 = INT16_MAX;
static int8_t x472 = -1;
volatile int32_t t89 = -1;
volatile int16_t x508 = -1;
volatile uint64_t t90 = 21792357075231930LLU;
int16_t x510 = INT16_MIN;
int8_t x511 = 0;
static volatile uint32_t x513 = 30U;
static int32_t x516 = 484156;
int32_t t94 = -152126;
uint64_t t95 = 0LLU;
volatile int64_t t98 = 16348667223119877LL;
volatile int32_t t99 = 107039499;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	static volatile uint32_t x2 = 0U;
	static int32_t x3 = -1;
	uint32_t t0 = 6300U;

	t0 = ((x1*x2)|(x3<=x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -8498167510LL;
	volatile uint16_t x6 = 60U;
	uint16_t x7 = UINT16_MAX;

	t1 = ((x5*x6)|(x7<=x8));

	if (t1 != -509890050599LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MAX;
	uint16_t x11 = 13U;
	int64_t x12 = INT64_MAX;
	int32_t t2 = -70;

	t2 = ((x9*x10)|(x11<=x12));

	if (t2 != 29621369) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MAX;
	int64_t x14 = 80281LL;
	int32_t x15 = INT32_MIN;
	volatile uint8_t x16 = 0U;

	t3 = ((x13*x14)|(x15<=x16));

	if (t3 != 172402134664807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x18 = 17967;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -525218719LL;

	t4 = ((x17*x18)|(x19<=x20));

	if (t4 != -17967LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	static uint8_t x31 = UINT8_MAX;
	static volatile int32_t t5 = -369529720;

	t5 = ((x29*x30)|(x31<=x32));

	if (t5 != -1535) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = -1;
	int16_t x39 = 447;
	int32_t x40 = -1;
	static volatile int32_t t6 = 51;

	t6 = ((x37*x38)|(x39<=x40));

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = INT16_MIN;
	static uint8_t x46 = 18U;
	static uint32_t x47 = 228983U;
	volatile int8_t x48 = -1;
	volatile int32_t t7 = 1;

	t7 = ((x45*x46)|(x47<=x48));

	if (t7 != -589823) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = 1564719470530595LL;
	int8_t x51 = 30;
	static int64_t x52 = INT64_MIN;
	static int64_t t8 = 1315318LL;

	t8 = ((x49*x50)|(x51<=x52));

	if (t8 != 1564719470530595LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x54 = -1;
	uint64_t x55 = 5400900053299LLU;
	volatile uint16_t x56 = UINT16_MAX;
	volatile uint32_t t9 = 906584U;

	t9 = ((x53*x54)|(x55<=x56));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x62 = UINT8_MAX;
	int16_t x64 = INT16_MAX;
	volatile int64_t t10 = 917300802294LL;

	t10 = ((x61*x62)|(x63<=x64));

	if (t10 != 2295LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x73 = UINT64_MAX;
	uint64_t x74 = 29962264278LLU;
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = 225;
	volatile uint64_t t11 = 34791530180565207LLU;

	t11 = ((x73*x74)|(x75<=x76));

	if (t11 != 18446744043747287338LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x81 = INT64_MIN;
	static uint64_t x82 = 13999LLU;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MAX;
	volatile uint64_t t12 = 9347804LLU;

	t12 = ((x81*x82)|(x83<=x84));

	if (t12 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x85 = 0;
	static uint32_t x87 = 10601097U;
	volatile uint8_t x88 = 27U;
	static int32_t t13 = -27145387;

	t13 = ((x85*x86)|(x87<=x88));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = INT32_MIN;
	uint16_t x91 = 1U;

	t14 = ((x89*x90)|(x91<=x92));

	if (t14 != 15358148538282278913LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x93 = 2U;
	int8_t x94 = INT8_MIN;
	static int64_t x95 = 8397206016108796LL;
	volatile int64_t x96 = 132815649LL;
	int32_t t15 = -13;

	t15 = ((x93*x94)|(x95<=x96));

	if (t15 != -256) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x101 = 5;
	static int8_t x102 = -1;
	static uint8_t x103 = 0U;
	int32_t x104 = -702459;
	static int32_t t16 = 8201414;

	t16 = ((x101*x102)|(x103<=x104));

	if (t16 != -5) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x105 = 5;
	static uint16_t x106 = 14785U;
	int32_t x107 = INT32_MIN;
	uint32_t x108 = 10929U;
	int32_t t17 = -100538341;

	t17 = ((x105*x106)|(x107<=x108));

	if (t17 != 73925) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = 1;
	int32_t x110 = INT32_MIN;
	volatile uint32_t x111 = UINT32_MAX;
	int32_t t18 = INT32_MIN;

	t18 = ((x109*x110)|(x111<=x112));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = 4;
	volatile int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	static int16_t x116 = INT16_MAX;
	int32_t t19 = -22575089;

	t19 = ((x113*x114)|(x115<=x116));

	if (t19 != -511) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x117 = -1;
	uint8_t x120 = 1U;
	int32_t t20 = -26491;

	t20 = ((x117*x118)|(x119<=x120));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x125 = 2616U;
	int16_t x126 = INT16_MIN;
	int64_t x127 = 1607303543621805LL;
	uint32_t t21 = 815U;

	t21 = ((x125*x126)|(x127<=x128));

	if (t21 != 4209246208U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x129 = 4490869238287196LLU;
	int8_t x130 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	volatile uint64_t t22 = 210118967LLU;

	t22 = ((x129*x130)|(x131<=x132));

	if (t22 != 17871912811208790528LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x142 = -655;
	static int16_t x143 = -1;
	int16_t x144 = INT16_MAX;
	volatile int32_t t23 = 0;

	t23 = ((x141*x142)|(x143<=x144));

	if (t23 != -76635) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x145 = -1LL;
	int8_t x146 = INT8_MAX;
	static volatile int16_t x147 = INT16_MIN;
	volatile int64_t x148 = INT64_MAX;

	t24 = ((x145*x146)|(x147<=x148));

	if (t24 != -127LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x149 = UINT8_MAX;
	volatile uint64_t x150 = 8221327197587975LLU;
	uint64_t x152 = 380612091269331570LLU;
	volatile uint64_t t25 = 1901062612219205LLU;

	t25 = ((x149*x150)|(x151<=x152));

	if (t25 != 2096438435384933625LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x156 = INT16_MIN;

	t26 = ((x153*x154)|(x155<=x156));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x157 = -3858903136091670596LL;
	volatile uint64_t x158 = 211629143LLU;
	int32_t x159 = 95651626;
	static volatile uint64_t t27 = 2095587936LLU;

	t27 = ((x157*x158)|(x159<=x160));

	if (t27 != 15125169226918256868LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x169 = INT16_MAX;
	int64_t x170 = 35353LL;
	int64_t x172 = -58993LL;
	volatile int64_t t28 = 28460249581LL;

	t28 = ((x169*x170)|(x171<=x172));

	if (t28 != 1158411751LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x173 = UINT8_MAX;
	static uint8_t x174 = UINT8_MAX;
	static int8_t x175 = -1;
	uint16_t x176 = UINT16_MAX;
	static volatile int32_t t29 = -8;

	t29 = ((x173*x174)|(x175<=x176));

	if (t29 != 65025) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t30 = 31;

	t30 = ((x181*x182)|(x183<=x184));

	if (t30 != 16385) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x185 = INT32_MAX;
	int16_t x187 = 1;
	uint64_t x188 = 3542LLU;
	int64_t t31 = 2872321536228352LL;

	t31 = ((x185*x186)|(x187<=x188));

	if (t31 != -8007034082263472599LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x189 = -1;
	uint64_t x190 = UINT64_MAX;
	static uint8_t x191 = 1U;
	int64_t x192 = INT64_MIN;
	volatile uint64_t t32 = 42160407LLU;

	t32 = ((x189*x190)|(x191<=x192));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x193 = 13U;
	static int8_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MAX;
	volatile int32_t t33 = 725000;

	t33 = ((x193*x194)|(x195<=x196));

	if (t33 != -13) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x197 = 266LLU;
	int64_t x198 = INT64_MAX;
	int64_t x199 = 15325489058466LL;
	volatile int16_t x200 = INT16_MIN;
	uint64_t t34 = 594316LLU;

	t34 = ((x197*x198)|(x199<=x200));

	if (t34 != 18446744073709551350LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x213 = INT8_MIN;
	volatile int8_t x214 = INT8_MIN;
	volatile int8_t x215 = -1;
	uint8_t x216 = 0U;
	volatile int32_t t35 = -22;

	t35 = ((x213*x214)|(x215<=x216));

	if (t35 != 16385) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x217 = -453389689641LL;
	int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 11076750351562LLU;
	int64_t t36 = -1LL;

	t36 = ((x217*x218)|(x219<=x220));

	if (t36 != 58033880274048LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x221 = 6U;
	static uint64_t x222 = UINT64_MAX;
	uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t37 = 6025907257248213LLU;

	t37 = ((x221*x222)|(x223<=x224));

	if (t37 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x226 = 116U;
	int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MAX;
	uint32_t t38 = 89276U;

	t38 = ((x225*x226)|(x227<=x228));

	if (t38 != 4294967181U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = -40297934LL;
	int32_t x231 = 185;
	int16_t x232 = INT16_MIN;
	volatile uint64_t t39 = 802344135633LLU;

	t39 = ((x229*x230)|(x231<=x232));

	if (t39 != 40297934LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x233 = INT8_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	volatile uint16_t x236 = UINT16_MAX;
	uint64_t t40 = 29921541275892LLU;

	t40 = ((x233*x234)|(x235<=x236));

	if (t40 != 129LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x238 = 0;
	static int32_t x239 = -539;
	uint32_t t41 = 155U;

	t41 = ((x237*x238)|(x239<=x240));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = -1;
	volatile int16_t x242 = INT16_MIN;
	uint32_t x243 = 217058U;
	static uint64_t x244 = 3711LLU;
	int32_t t42 = -7296;

	t42 = ((x241*x242)|(x243<=x244));

	if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x246 = 0U;
	uint8_t x247 = 5U;
	int64_t x248 = INT64_MAX;
	int32_t t43 = -27;

	t43 = ((x245*x246)|(x247<=x248));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x249 = 0U;
	int64_t x250 = INT64_MIN;
	int16_t x251 = -1741;
	static uint8_t x252 = 7U;
	volatile int64_t t44 = -5482643911042LL;

	t44 = ((x249*x250)|(x251<=x252));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x253 = 221991215LL;
	uint32_t x254 = 186U;
	static uint32_t x255 = 12U;

	t45 = ((x253*x254)|(x255<=x256));

	if (t45 != 41290365991LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x257 = 62U;
	uint32_t x258 = 1705U;
	static int64_t x259 = INT64_MIN;
	uint64_t x260 = 3LLU;
	volatile uint32_t t46 = 2140896643U;

	t46 = ((x257*x258)|(x259<=x260));

	if (t46 != 105710U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x261 = 70U;
	static uint64_t x262 = 13027866LLU;
	static uint32_t x263 = UINT32_MAX;
	int32_t x264 = -1;
	volatile uint64_t t47 = 14545324208676131LLU;

	t47 = ((x261*x262)|(x263<=x264));

	if (t47 != 911950621LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x265 = 171U;
	int32_t x266 = 247451;
	int64_t x268 = INT64_MAX;
	volatile int32_t t48 = -1503;

	t48 = ((x265*x266)|(x267<=x268));

	if (t48 != 42314121) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x269 = 1U;
	uint16_t x271 = 243U;
	int8_t x272 = -1;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x269*x270)|(x271<=x272));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x274 = -6;
	uint16_t x276 = 13U;
	int32_t t50 = 43388176;

	t50 = ((x273*x274)|(x275<=x276));

	if (t50 != 6) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x281 = INT64_MAX;
	static int64_t x283 = INT64_MIN;
	int32_t x284 = -3901509;
	static volatile int64_t t51 = INT64_MAX;

	t51 = ((x281*x282)|(x283<=x284));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x289 = -1;
	int32_t x290 = -1;
	volatile int32_t t52 = 1;

	t52 = ((x289*x290)|(x291<=x292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x293 = 6670U;
	uint64_t x294 = 20847369760351225LLU;
	uint16_t x295 = 8U;
	int16_t x296 = -3;
	volatile uint64_t t53 = 1480377932LLU;

	t53 = ((x293*x294)|(x295<=x296));

	if (t53 != 9924747785575809438LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x297 = INT16_MAX;
	uint16_t x298 = 163U;
	uint16_t x299 = 4064U;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t54 = 4;

	t54 = ((x297*x298)|(x299<=x300));

	if (t54 != 5341021) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x301 = -47;
	int8_t x302 = -1;
	uint16_t x303 = 11U;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t55 = -1;

	t55 = ((x301*x302)|(x303<=x304));

	if (t55 != 47) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = -26531747548LL;
	volatile uint16_t x306 = 29378U;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	static volatile int64_t t56 = -190588928357765LL;

	t56 = ((x305*x306)|(x307<=x308));

	if (t56 != -779449679465143LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x309 = 6LLU;
	volatile int8_t x310 = -16;
	int64_t x311 = -527LL;
	volatile int64_t x312 = -12758099728483LL;
	uint64_t t57 = 375246310LLU;

	t57 = ((x309*x310)|(x311<=x312));

	if (t57 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x313 = -1;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	int64_t x316 = -3764979096337LL;
	volatile uint64_t t58 = 1125LLU;

	t58 = ((x313*x314)|(x315<=x316));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x321 = UINT32_MAX;
	uint8_t x322 = UINT8_MAX;
	uint64_t x323 = 967821LLU;
	int32_t x324 = INT32_MIN;
	volatile uint32_t t59 = 9620587U;

	t59 = ((x321*x322)|(x323<=x324));

	if (t59 != 4294967041U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x325 = INT16_MAX;
	static int8_t x326 = INT8_MIN;
	static int64_t x327 = 31369013355LL;
	static volatile int16_t x328 = INT16_MIN;
	volatile int32_t t60 = 738583819;

	t60 = ((x325*x326)|(x327<=x328));

	if (t60 != -4194176) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MAX;
	uint32_t x331 = 2808U;
	uint64_t x332 = UINT64_MAX;
	static int32_t t61 = 1;

	t61 = ((x329*x330)|(x331<=x332));

	if (t61 != -4161535) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = -1;
	int32_t x340 = -466;
	int32_t t62 = 1;

	t62 = ((x337*x338)|(x339<=x340));

	if (t62 != -32640) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x341 = 30828293;
	uint64_t x342 = 1375303775429LLU;
	static uint64_t x344 = 104480LLU;
	uint64_t t63 = 898646LLU;

	t63 = ((x341*x342)|(x343<=x344));

	if (t63 != 5504779605512309465LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x347 = 1U;
	uint64_t x348 = 3LLU;
	static uint32_t t64 = 0U;

	t64 = ((x345*x346)|(x347<=x348));

	if (t64 != 4114896769U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x353 = -1;
	int64_t x355 = -1LL;
	uint8_t x356 = 9U;

	t65 = ((x353*x354)|(x355<=x356));

	if (t65 != -14539) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x362 = 124567;
	uint32_t x363 = UINT32_MAX;
	static volatile int16_t x364 = INT16_MIN;
	volatile uint32_t t66 = 15U;

	t66 = ((x361*x362)|(x363<=x364));

	if (t66 != 2425799617U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x373 = 18259U;
	int16_t x374 = -1;
	int64_t x376 = INT64_MAX;
	int32_t t67 = 63559599;

	t67 = ((x373*x374)|(x375<=x376));

	if (t67 != -18259) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x385 = INT16_MIN;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t68 = 7238;

	t68 = ((x385*x386)|(x387<=x388));

	if (t68 != 458753) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x389 = INT32_MAX;
	uint16_t x392 = 6213U;
	static volatile int32_t t69 = -14948289;

	t69 = ((x389*x390)|(x391<=x392));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MAX;
	int32_t t70 = 90091;

	t70 = ((x393*x394)|(x395<=x396));

	if (t70 != -4) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x401 = -1;
	int16_t x402 = -1;
	static volatile int32_t x403 = -1;

	t71 = ((x401*x402)|(x403<=x404));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x408 = INT16_MAX;
	uint64_t t72 = 202091807593LLU;

	t72 = ((x405*x406)|(x407<=x408));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x409 = INT16_MIN;
	uint16_t x410 = 12297U;
	static int64_t x411 = INT64_MIN;
	static int16_t x412 = -77;
	int32_t t73 = 2184451;

	t73 = ((x409*x410)|(x411<=x412));

	if (t73 != -402948095) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x413 = UINT64_MAX;
	uint64_t x415 = 10320205LLU;
	uint16_t x416 = 1631U;
	volatile uint64_t t74 = 114661912LLU;

	t74 = ((x413*x414)|(x415<=x416));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x417 = 3U;
	static int64_t x419 = INT64_MIN;
	volatile uint32_t x420 = UINT32_MAX;

	t75 = ((x417*x418)|(x419<=x420));

	if (t75 != 38367LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x422 = INT64_MAX;
	uint64_t x423 = UINT64_MAX;
	int8_t x424 = 0;
	volatile int64_t t76 = INT64_MAX;

	t76 = ((x421*x422)|(x423<=x424));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x425 = -1;
	static uint16_t x426 = 7U;
	uint8_t x428 = 110U;
	static int32_t t77 = -31057036;

	t77 = ((x425*x426)|(x427<=x428));

	if (t77 != -7) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x429 = 2732U;
	uint64_t x430 = UINT64_MAX;
	int16_t x431 = 143;
	volatile uint64_t t78 = 6LLU;

	t78 = ((x429*x430)|(x431<=x432));

	if (t78 != 18446744073709548884LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x437 = 2U;
	static int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t79 = 143921;

	t79 = ((x437*x438)|(x439<=x440));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x441 = 1U;
	volatile int16_t x443 = -1;
	uint64_t x444 = UINT64_MAX;

	t80 = ((x441*x442)|(x443<=x444));

	if (t80 != 281) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = -32LL;
	static int64_t x446 = -16928LL;
	int8_t x447 = -27;
	uint8_t x448 = 10U;
	int64_t t81 = 2051036534LL;

	t81 = ((x445*x446)|(x447<=x448));

	if (t81 != 541697LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x451 = 73041056408LLU;
	uint8_t x452 = 15U;
	int32_t t82 = -13391094;

	t82 = ((x449*x450)|(x451<=x452));

	if (t82 != 38200932) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x461 = 46U;
	int8_t x462 = -5;
	int16_t x464 = -4;
	int32_t t83 = 125051011;

	t83 = ((x461*x462)|(x463<=x464));

	if (t83 != -230) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x465 = INT16_MIN;
	static int32_t x466 = -21;
	int32_t x467 = INT32_MIN;
	static int64_t x468 = 9650572LL;
	int32_t t84 = -1;

	t84 = ((x465*x466)|(x467<=x468));

	if (t84 != 688129) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x469 = INT8_MAX;
	static int16_t x470 = INT16_MIN;
	int64_t x471 = INT64_MIN;
	int32_t t85 = 86802;

	t85 = ((x469*x470)|(x471<=x472));

	if (t85 != -4161535) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x473 = 222725150013LLU;
	static int32_t x474 = INT32_MIN;
	uint64_t x475 = 136662215872550515LLU;
	volatile uint64_t x476 = 9422987LLU;
	uint64_t t86 = 1121921142874793LLU;

	t86 = ((x473*x474)|(x475<=x476));

	if (t86 != 1316728265183854592LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x477 = 13U;
	volatile int8_t x478 = -2;
	int16_t x479 = -1;
	uint64_t x480 = UINT64_MAX;
	int32_t t87 = 38849;

	t87 = ((x477*x478)|(x479<=x480));

	if (t87 != -25) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x489 = INT8_MIN;
	int16_t x490 = 14;
	int8_t x491 = 30;
	int16_t x492 = -1;
	int32_t t88 = 33155813;

	t88 = ((x489*x490)|(x491<=x492));

	if (t88 != -1792) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x497 = 58U;
	uint16_t x498 = 16848U;
	uint64_t x499 = 1712728341043866LLU;
	static int32_t x500 = INT32_MAX;

	t89 = ((x497*x498)|(x499<=x500));

	if (t89 != 977184) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x505 = 125973748970969LLU;
	int32_t x506 = INT32_MIN;
	int32_t x507 = INT32_MIN;

	t90 = ((x505*x506)|(x507<=x508));

	if (t90 != 13382592611529785345LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x509 = INT16_MAX;
	uint64_t x512 = UINT64_MAX;
	volatile int32_t t91 = -497690;

	t91 = ((x509*x510)|(x511<=x512));

	if (t91 != -1073709055) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x514 = -1;
	int64_t x515 = 502158215744057LL;
	uint32_t t92 = 14965U;

	t92 = ((x513*x514)|(x515<=x516));

	if (t92 != 4294967266U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x521 = -1;
	uint32_t x522 = UINT32_MAX;
	uint16_t x523 = 1U;
	uint16_t x524 = 42U;
	volatile uint32_t t93 = 3342U;

	t93 = ((x521*x522)|(x523<=x524));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x525 = -54;
	uint16_t x526 = UINT16_MAX;
	volatile int64_t x527 = INT64_MIN;
	int16_t x528 = INT16_MIN;

	t94 = ((x525*x526)|(x527<=x528));

	if (t94 != -3538889) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x529 = 2894857551555025LLU;
	uint64_t x530 = 33292167419925843LLU;
	uint64_t x531 = UINT64_MAX;
	int32_t x532 = -1;

	t95 = ((x529*x530)|(x531<=x532));

	if (t95 != 9387474617308066755LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x533 = 88203U;
	uint16_t x534 = 32U;
	uint64_t x535 = 235134LLU;
	int32_t x536 = INT32_MIN;
	volatile uint32_t t96 = 148865156U;

	t96 = ((x533*x534)|(x535<=x536));

	if (t96 != 2822497U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x537 = 46U;
	static int32_t x538 = -885;
	uint16_t x539 = 0U;
	uint64_t x540 = UINT64_MAX;
	static volatile int32_t t97 = 1;

	t97 = ((x537*x538)|(x539<=x540));

	if (t97 != -40709) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x541 = -1;
	static int64_t x542 = INT64_MAX;
	volatile int32_t x543 = -409;
	static int16_t x544 = INT16_MIN;

	t98 = ((x541*x542)|(x543<=x544));

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x545 = 3;
	volatile int32_t x546 = 0;
	uint16_t x547 = 7U;
	int64_t x548 = -1LL;

	t99 = ((x545*x546)|(x547<=x548));

	if (t99 != 0) { NG(); } else { ; }
	
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

