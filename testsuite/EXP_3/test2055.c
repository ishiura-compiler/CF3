#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x4 = 38U;
volatile int32_t t1 = -30175;
int8_t x14 = INT8_MIN;
int32_t t2 = -596958011;
volatile int64_t t3 = 2093737189760LL;
volatile uint8_t x26 = UINT8_MAX;
volatile int32_t x27 = INT32_MIN;
int8_t x35 = INT8_MIN;
uint64_t t7 = 4949561282227304LLU;
volatile int64_t x41 = -1LL;
int32_t x42 = INT32_MIN;
int8_t x45 = INT8_MIN;
volatile uint32_t t10 = 9U;
int8_t x54 = INT8_MAX;
volatile uint8_t x65 = UINT8_MAX;
uint32_t t14 = 423U;
uint8_t x76 = UINT8_MAX;
uint64_t t16 = 5881930LLU;
volatile int64_t t17 = 25729686147877519LL;
int16_t x88 = -1;
uint16_t x96 = UINT16_MAX;
volatile int64_t t19 = 1915226729LL;
volatile uint64_t x101 = UINT64_MAX;
static uint8_t x107 = 1U;
uint32_t x118 = 7U;
int32_t x119 = 3;
static volatile int32_t x120 = -1;
uint8_t x122 = UINT8_MAX;
volatile uint32_t t23 = 651539U;
static uint64_t x125 = UINT64_MAX;
volatile int32_t t25 = -398;
volatile uint16_t x142 = 1U;
static volatile int32_t x144 = -3260;
uint64_t x145 = UINT64_MAX;
uint32_t t28 = 220303338U;
int16_t x157 = 0;
uint32_t x168 = 1798U;
int16_t x169 = 16;
int8_t x170 = -1;
int8_t x173 = INT8_MIN;
int8_t x182 = -30;
int8_t x189 = INT8_MIN;
int32_t t37 = -8228414;
static int32_t x211 = INT32_MIN;
uint64_t t38 = 39587LLU;
int8_t x214 = -1;
static uint64_t x216 = UINT64_MAX;
volatile uint64_t t39 = 14702209181LLU;
int32_t x219 = -1;
volatile int32_t t40 = 52782;
int32_t x225 = -1;
int16_t x232 = INT16_MIN;
int8_t x235 = INT8_MIN;
uint16_t x247 = 695U;
uint16_t x248 = 1U;
static volatile int64_t t45 = -79424105391247377LL;
int8_t x255 = INT8_MIN;
uint64_t x258 = 784669989LLU;
static uint8_t x259 = 6U;
uint64_t x270 = 913LLU;
uint16_t x278 = 2697U;
volatile int32_t t50 = -145627813;
static int16_t x287 = INT16_MIN;
static int8_t x288 = INT8_MAX;
int64_t x293 = 112693569329990LL;
static int64_t t54 = 105789673169580LL;
uint64_t x299 = 20872062LLU;
volatile int64_t t56 = 3003792646LL;
int16_t x311 = 101;
uint64_t x326 = 120564LLU;
int16_t x327 = 566;
uint8_t x334 = 0U;
int64_t t62 = 62868608LL;
volatile uint64_t t63 = 1LLU;
int32_t x343 = INT32_MAX;
uint16_t x346 = 75U;
uint16_t x347 = 1366U;
volatile uint16_t x353 = 74U;
int64_t x364 = INT64_MIN;
int16_t x368 = INT16_MIN;
uint32_t x374 = UINT32_MAX;
static uint32_t x376 = 17U;
uint16_t x377 = UINT16_MAX;
volatile uint64_t t72 = 672433013948203LLU;
uint16_t x392 = 3235U;
uint8_t x393 = 70U;
uint32_t x394 = 9U;
int32_t x396 = 2171;
static int64_t x404 = -1LL;
uint16_t x407 = 1266U;
static int8_t x418 = 8;
uint64_t x420 = UINT64_MAX;
static int16_t x432 = -1;
volatile uint64_t t82 = 1LLU;
static volatile int32_t x435 = INT32_MIN;
uint16_t x449 = 3U;
uint8_t x451 = 12U;
uint64_t t86 = 3815LLU;
int64_t x460 = INT64_MIN;
volatile uint16_t x481 = 28323U;
uint16_t x482 = UINT16_MAX;
int16_t x483 = INT16_MIN;
volatile int16_t x484 = INT16_MAX;
static volatile uint16_t x488 = 14880U;
volatile int64_t x526 = -23330LL;
int8_t x532 = 3;
volatile int16_t x533 = -91;
int8_t x536 = INT8_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	static int8_t x2 = -1;
	int8_t x3 = 8;
	volatile int32_t t0 = 0;

	t0 = ((x1*x2)+(x3^x4));

	if (t0 != -32721) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	int16_t x6 = INT16_MIN;
	volatile int32_t x7 = -1;
	static int32_t x8 = -3944344;

	t1 = ((x5*x6)+(x7^x8));

	if (t1 != 3944343) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 6843;
	static int8_t x15 = INT8_MIN;
	volatile int32_t x16 = 44;

	t2 = ((x13*x14)+(x15^x16));

	if (t2 != -875988) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	uint16_t x18 = 10U;
	int8_t x19 = INT8_MAX;
	int64_t x20 = -1LL;

	t3 = ((x17*x18)+(x19^x20));

	if (t3 != -138LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	static volatile int64_t x22 = -1LL;
	int16_t x23 = INT16_MIN;
	uint32_t x24 = 90U;
	volatile int64_t t4 = 24LL;

	t4 = ((x21*x22)+(x23^x24));

	if (t4 != 4294934363LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -1423696531LL;
	volatile uint64_t x28 = 29904LLU;
	volatile uint64_t t5 = 16LLU;

	t5 = ((x25*x26)+(x27^x28));

	if (t5 != 18446743708519482467LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	volatile uint16_t x30 = 26U;
	int16_t x31 = -207;
	uint32_t x32 = 96313U;
	volatile uint64_t t6 = 239424LLU;

	t6 = ((x29*x30)+(x31^x32));

	if (t6 != 4294870766LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x33 = INT64_MAX;
	uint64_t x34 = 10347783213761LLU;
	int32_t x36 = INT32_MIN;

	t7 = ((x33*x34)+(x35^x36));

	if (t7 != 9223361691219045567LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 27923LL;
	int64_t x38 = -70887990LL;
	volatile uint16_t x39 = UINT16_MAX;
	static volatile int32_t x40 = -1;
	volatile int64_t t8 = 3013989823545640LL;

	t8 = ((x37*x38)+(x39^x40));

	if (t8 != -1979405410306LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x43 = -596068946246LL;
	uint32_t x44 = 7U;
	volatile int64_t t9 = 62487LL;

	t9 = ((x41*x42)+(x43^x44));

	if (t9 != -593921462595LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = 1947;
	uint32_t x47 = UINT32_MAX;
	int16_t x48 = -500;

	t10 = ((x45*x46)+(x47^x48));

	if (t10 != 4294718579U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = 185;
	uint16_t x50 = UINT16_MAX;
	static int16_t x51 = -1;
	int32_t x52 = 210760094;
	volatile int32_t t11 = -124538;

	t11 = ((x49*x50)+(x51^x52));

	if (t11 != -198636120) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -674;
	uint32_t x55 = 21U;
	static int16_t x56 = -1;
	volatile uint32_t t12 = 24U;

	t12 = ((x53*x54)+(x55^x56));

	if (t12 != 4294881676U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	uint32_t x58 = 987552641U;
	uint8_t x59 = UINT8_MAX;
	int32_t x60 = INT32_MIN;
	uint64_t t13 = 28033591149453741LLU;

	t13 = ((x57*x58)+(x59^x60));

	if (t13 != 18446744070574515582LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x66 = 3U;
	int32_t x67 = -1;
	int16_t x68 = INT16_MAX;

	t14 = ((x65*x66)+(x67^x68));

	if (t14 != 4294935293U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 0LLU;
	int16_t x74 = -246;
	int16_t x75 = INT16_MIN;
	uint64_t t15 = 1188451547289624LLU;

	t15 = ((x73*x74)+(x75^x76));

	if (t15 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x77 = 70540587759581303LLU;
	int8_t x78 = 1;
	int32_t x79 = INT32_MIN;
	volatile int16_t x80 = INT16_MIN;

	t16 = ((x77*x78)+(x79^x80));

	if (t16 != 70540589907032183LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x81 = UINT32_MAX;
	uint8_t x82 = 6U;
	int64_t x83 = -1302509LL;
	uint8_t x84 = UINT8_MAX;

	t17 = ((x81*x82)+(x83^x84));

	if (t17 != 4293664998LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 511709786019LLU;
	int64_t x86 = INT64_MIN;
	static int8_t x87 = INT8_MIN;
	uint64_t t18 = 55971LLU;

	t18 = ((x85*x86)+(x87^x88));

	if (t18 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = UINT16_MAX;
	static volatile int8_t x94 = INT8_MIN;
	int64_t x95 = 1LL;

	t19 = ((x93*x94)+(x95^x96));

	if (t19 != -8322946LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x102 = INT8_MIN;
	uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 3U;
	volatile uint64_t t20 = 1382985665114LLU;

	t20 = ((x101*x102)+(x103^x104));

	if (t20 != 124LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = -1614LL;
	volatile int8_t x108 = -1;
	static volatile int64_t t21 = -23LL;

	t21 = ((x105*x106)+(x107^x108));

	if (t21 != 3466038607870LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x117 = INT16_MAX;
	uint32_t t22 = 9143717U;

	t22 = ((x117*x118)+(x119^x120));

	if (t22 != 229365U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int8_t x123 = 0;
	int32_t x124 = -1;

	t23 = ((x121*x122)+(x123^x124));

	if (t23 != 4294967040U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x126 = INT16_MAX;
	static uint32_t x127 = 459324U;
	volatile int64_t x128 = INT64_MIN;
	static uint64_t t24 = 33LLU;

	t24 = ((x125*x126)+(x127^x128));

	if (t24 != 9223372036855202365LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x137 = -24;
	volatile uint16_t x138 = UINT16_MAX;
	static volatile int8_t x139 = -1;
	int32_t x140 = INT32_MIN;

	t25 = ((x137*x138)+(x139^x140));

	if (t25 != 2145910807) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x141 = 3822U;
	int8_t x143 = -32;
	volatile int32_t t26 = 99;

	t26 = ((x141*x142)+(x143^x144));

	if (t26 != 7058) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x146 = INT8_MAX;
	int16_t x147 = INT16_MIN;
	volatile int16_t x148 = INT16_MIN;
	volatile uint64_t t27 = 2819786LLU;

	t27 = ((x145*x146)+(x147^x148));

	if (t27 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x149 = 37U;
	uint8_t x150 = 35U;
	uint16_t x151 = 11U;
	uint16_t x152 = 6U;

	t28 = ((x149*x150)+(x151^x152));

	if (t28 != 1308U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x153 = INT32_MIN;
	volatile uint32_t x154 = 13179643U;
	volatile int64_t x155 = 6433838207LL;
	volatile int32_t x156 = INT32_MIN;
	volatile int64_t t29 = 53918346509769322LL;

	t29 = ((x153*x154)+(x155^x156));

	if (t29 != -2156096385LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MIN;
	static int64_t x160 = -990653273016436234LL;
	volatile int64_t t30 = 247538397031LL;

	t30 = ((x157*x158)+(x159^x160));

	if (t30 != 990653273016465910LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = -1LL;
	int64_t x166 = -41599149067LL;
	static volatile int64_t x167 = INT64_MIN;
	volatile int64_t t31 = -1105969674774769LL;

	t31 = ((x165*x166)+(x167^x168));

	if (t31 != -9223371995255624943LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MAX;
	static int64_t t32 = -12602448834519020LL;

	t32 = ((x169*x170)+(x171^x172));

	if (t32 != -9223372036854743057LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x174 = 5U;
	int64_t x175 = INT64_MAX;
	int16_t x176 = INT16_MIN;
	int64_t t33 = 19604754906548LL;

	t33 = ((x173*x174)+(x175^x176));

	if (t33 != -9223372036854743681LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	uint8_t x184 = 28U;
	static volatile int32_t t34 = -510606;

	t34 = ((x181*x182)+(x183^x184));

	if (t34 != 4067) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x190 = 4;
	static int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;
	volatile int32_t t35 = -2315195;

	t35 = ((x189*x190)+(x191^x192));

	if (t35 != -512) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x197 = UINT64_MAX;
	int16_t x198 = INT16_MIN;
	volatile uint64_t x199 = UINT64_MAX;
	static int16_t x200 = -1;
	volatile uint64_t t36 = 3356989475LLU;

	t36 = ((x197*x198)+(x199^x200));

	if (t36 != 32768LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x201 = -1;
	int32_t x202 = 122597;
	int8_t x203 = INT8_MIN;
	volatile int8_t x204 = INT8_MAX;

	t37 = ((x201*x202)+(x203^x204));

	if (t37 != -122598) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x209 = 148393706538883LLU;
	int8_t x210 = INT8_MIN;
	volatile uint64_t x212 = 1073336301236226676LLU;

	t38 = ((x209*x210)+(x211^x212));

	if (t38 != 17354413379100592372LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x213 = 7173LL;
	int64_t x215 = -1LL;

	t39 = ((x213*x214)+(x215^x216));

	if (t39 != 18446744073709544443LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x217 = -6;
	int16_t x218 = INT16_MAX;
	int16_t x220 = INT16_MAX;

	t40 = ((x217*x218)+(x219^x220));

	if (t40 != -229370) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x226 = 1;
	static uint16_t x227 = 21U;
	volatile int32_t x228 = INT32_MAX;
	int32_t t41 = -6;

	t41 = ((x225*x226)+(x227^x228));

	if (t41 != 2147483625) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = -17132LL;
	int32_t x231 = -1;
	volatile uint64_t t42 = 246826711316936LLU;

	t42 = ((x229*x230)+(x231^x232));

	if (t42 != 49899LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = INT16_MAX;
	int32_t x234 = 0;
	int8_t x236 = INT8_MAX;
	volatile int32_t t43 = 18558;

	t43 = ((x233*x234)+(x235^x236));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x241 = UINT8_MAX;
	int16_t x242 = -202;
	int64_t x243 = INT64_MAX;
	uint16_t x244 = 216U;
	static int64_t t44 = 289855599283038696LL;

	t44 = ((x241*x242)+(x243^x244));

	if (t44 != 9223372036854724081LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = 1812U;
	int64_t x246 = -24479LL;

	t45 = ((x245*x246)+(x247^x248));

	if (t45 != -44355254LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = INT64_MAX;
	int64_t x254 = -1LL;
	static int32_t x256 = -7000;
	int64_t t46 = -31LL;

	t46 = ((x253*x254)+(x255^x256));

	if (t46 != -9223372036854768855LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x257 = 55;
	static int8_t x260 = INT8_MIN;
	volatile uint64_t t47 = 3396LLU;

	t47 = ((x257*x258)+(x259^x260));

	if (t47 != 43156849273LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x269 = -6427;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	static uint64_t t48 = 0LLU;

	t48 = ((x269*x270)+(x271^x272));

	if (t48 != 18446744073703683765LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x273 = 3079U;
	uint32_t x274 = 124U;
	int64_t x275 = 278000761501047520LL;
	int8_t x276 = INT8_MIN;
	int64_t t49 = 164125LL;

	t49 = ((x273*x274)+(x275^x276));

	if (t49 != -278000761500665660LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x277 = 2;
	volatile int16_t x279 = -1;
	static int32_t x280 = INT32_MAX;

	t50 = ((x277*x278)+(x279^x280));

	if (t50 != -2147478254) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x281 = -1;
	int64_t x282 = -1LL;
	int16_t x283 = INT16_MAX;
	uint8_t x284 = 0U;
	int64_t t51 = 129LL;

	t51 = ((x281*x282)+(x283^x284));

	if (t51 != 32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x285 = -1;
	int32_t x286 = -244759;
	int32_t t52 = -59;

	t52 = ((x285*x286)+(x287^x288));

	if (t52 != 212118) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = -1;
	uint16_t x290 = 181U;
	int64_t x291 = -1LL;
	int8_t x292 = INT8_MIN;
	int64_t t53 = -263619LL;

	t53 = ((x289*x290)+(x291^x292));

	if (t53 != -54LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x294 = -1;
	volatile int8_t x295 = INT8_MIN;
	uint32_t x296 = 1U;

	t54 = ((x293*x294)+(x295^x296));

	if (t54 != -112689274362821LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x297 = -1;
	volatile int16_t x298 = -1;
	int8_t x300 = 6;
	uint64_t t55 = 38679456731400974LLU;

	t55 = ((x297*x298)+(x299^x300));

	if (t55 != 20872057LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x301 = INT16_MIN;
	volatile int32_t x302 = -6;
	int64_t x303 = 54149588182755LL;
	uint32_t x304 = 8554U;

	t56 = ((x301*x302)+(x303^x304));

	if (t56 != 54149588371337LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x305 = 2LLU;
	int32_t x306 = INT32_MIN;
	uint8_t x307 = 72U;
	static uint16_t x308 = 858U;
	static uint64_t t57 = 39058285862807214LLU;

	t57 = ((x305*x306)+(x307^x308));

	if (t57 != 18446744069414585106LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = -2193292LL;
	volatile int8_t x310 = -1;
	static uint16_t x312 = 2463U;
	volatile int64_t t58 = 4681838932179LL;

	t58 = ((x309*x310)+(x311^x312));

	if (t58 != 2195846LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x317 = INT8_MIN;
	uint64_t x318 = 788829LLU;
	uint32_t x319 = 28463065U;
	static int8_t x320 = -7;
	volatile uint64_t t59 = 191LLU;

	t59 = ((x317*x318)+(x319^x320));

	if (t59 != 4165534112LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x325 = INT32_MIN;
	int32_t x328 = INT32_MAX;
	uint64_t t60 = 473964490696LLU;

	t60 = ((x325*x326)+(x327^x328));

	if (t60 != 18446485166638497225LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x329 = INT16_MIN;
	uint8_t x330 = 1U;
	int64_t x331 = -37192252030LL;
	int32_t x332 = 12313;
	int64_t t61 = 2005350722LL;

	t61 = ((x329*x330)+(x331^x332));

	if (t61 != -37192272485LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x333 = INT64_MIN;
	int8_t x335 = INT8_MAX;
	volatile int16_t x336 = INT16_MAX;

	t62 = ((x333*x334)+(x335^x336));

	if (t62 != 32640LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x337 = UINT16_MAX;
	uint8_t x338 = UINT8_MAX;
	static uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;

	t63 = ((x337*x338)+(x339^x340));

	if (t63 != 16711552LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x341 = 14U;
	int8_t x342 = 4;
	int16_t x344 = -1;
	volatile int32_t t64 = 1248776;

	t64 = ((x341*x342)+(x343^x344));

	if (t64 != -2147483592) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x345 = 7U;
	static int64_t x348 = INT64_MIN;
	int64_t t65 = -5LL;

	t65 = ((x345*x346)+(x347^x348));

	if (t65 != -9223372036854773917LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x349 = 557759637845487392LL;
	int8_t x350 = -15;
	int16_t x351 = -1;
	static uint64_t x352 = UINT64_MAX;
	static uint64_t t66 = 408334397234LLU;

	t66 = ((x349*x350)+(x351^x352));

	if (t66 != 10080349506027240736LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x354 = UINT16_MAX;
	int32_t x355 = -1;
	int16_t x356 = INT16_MIN;
	volatile int32_t t67 = -504383;

	t67 = ((x353*x354)+(x355^x356));

	if (t67 != 4882357) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x361 = -1;
	int64_t x362 = INT64_MAX;
	static volatile int16_t x363 = INT16_MIN;
	int64_t t68 = -178917307546201455LL;

	t68 = ((x361*x362)+(x363^x364));

	if (t68 != -32767LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x365 = -1;
	uint8_t x366 = 88U;
	static volatile int64_t x367 = INT64_MAX;
	static int64_t t69 = 7564612LL;

	t69 = ((x365*x366)+(x367^x368));

	if (t69 != -9223372036854743129LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x373 = INT8_MIN;
	uint64_t x375 = 17897261671LLU;
	uint64_t t70 = 134383992LLU;

	t70 = ((x373*x374)+(x375^x376));

	if (t70 != 17897261814LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x378 = 27727719808733370LLU;
	int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	uint64_t t71 = 4529LLU;

	t71 = ((x377*x378)+(x379^x380));

	if (t71 != 131826404950601541LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x381 = UINT64_MAX;
	volatile int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	static volatile uint32_t x384 = 6056317U;

	t72 = ((x381*x382)+(x383^x384));

	if (t72 != 6436415869LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x385 = 1;
	uint8_t x386 = 12U;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = INT32_MAX;
	int32_t t73 = 5134203;

	t73 = ((x385*x386)+(x387^x388));

	if (t73 != 2147418124) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x389 = 34240351LLU;
	int64_t x390 = INT64_MIN;
	static int64_t x391 = 100513837404685258LL;
	uint64_t t74 = 13671LLU;

	t74 = ((x389*x390)+(x391^x392));

	if (t74 != 9323885874259464041LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x395 = INT16_MIN;
	static uint32_t t75 = 9247U;

	t75 = ((x393*x394)+(x395^x396));

	if (t75 != 4294937329U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x397 = UINT8_MAX;
	volatile int8_t x398 = 4;
	int16_t x399 = -10852;
	static int32_t x400 = INT32_MIN;
	int32_t t76 = 29611;

	t76 = ((x397*x398)+(x399^x400));

	if (t76 != 2147473816) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x401 = 68U;
	int32_t x402 = -1;
	uint32_t x403 = 1U;
	volatile int64_t t77 = 1779284637251951058LL;

	t77 = ((x401*x402)+(x403^x404));

	if (t77 != -70LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x405 = 3811LL;
	volatile uint16_t x406 = 0U;
	volatile uint8_t x408 = 50U;
	int64_t t78 = -229419620457LL;

	t78 = ((x405*x406)+(x407^x408));

	if (t78 != 1216LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x409 = INT16_MIN;
	int16_t x410 = 162;
	int16_t x411 = INT16_MAX;
	int64_t x412 = -124678LL;
	int64_t t79 = -42565283888LL;

	t79 = ((x409*x410)+(x411^x412));

	if (t79 != -5413115LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = INT16_MAX;
	static int16_t x419 = INT16_MIN;
	uint64_t t80 = 5554046982078LLU;

	t80 = ((x417*x418)+(x419^x420));

	if (t80 != 294903LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x425 = 1;
	int32_t x426 = INT32_MIN;
	static int64_t x427 = -1LL;
	int8_t x428 = INT8_MIN;
	volatile int64_t t81 = 102929213109LL;

	t81 = ((x425*x426)+(x427^x428));

	if (t81 != -2147483521LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x429 = 0U;
	uint8_t x430 = UINT8_MAX;
	uint64_t x431 = 182994164LLU;

	t82 = ((x429*x430)+(x431^x432));

	if (t82 != 18446744073526557451LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x433 = -1;
	int8_t x434 = INT8_MAX;
	uint64_t x436 = 20LLU;
	volatile uint64_t t83 = 112487LLU;

	t83 = ((x433*x434)+(x435^x436));

	if (t83 != 18446744071562067861LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	int16_t x448 = -3;
	volatile int32_t t84 = -1201;

	t84 = ((x445*x446)+(x447^x448));

	if (t84 != 1073741949) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x450 = -1;
	int16_t x452 = INT16_MAX;
	int32_t t85 = 1748;

	t85 = ((x449*x450)+(x451^x452));

	if (t85 != 32752) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x453 = -1;
	volatile uint64_t x454 = UINT64_MAX;
	int32_t x455 = INT32_MIN;
	volatile int64_t x456 = INT64_MAX;

	t86 = ((x453*x454)+(x455^x456));

	if (t86 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x457 = -1;
	uint64_t x458 = 172527306LLU;
	uint8_t x459 = UINT8_MAX;
	volatile uint64_t t87 = 66122446009LLU;

	t87 = ((x457*x458)+(x459^x460));

	if (t87 != 9223372036682248757LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x461 = INT8_MIN;
	uint16_t x462 = UINT16_MAX;
	uint64_t x463 = UINT64_MAX;
	int16_t x464 = INT16_MAX;
	uint64_t t88 = 2154865LLU;

	t88 = ((x461*x462)+(x463^x464));

	if (t88 != 18446744073701130368LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x465 = 2542U;
	int32_t x466 = INT32_MIN;
	int64_t x467 = -3140626938703957LL;
	static volatile int16_t x468 = INT16_MAX;
	int64_t t89 = -80LL;

	t89 = ((x465*x466)+(x467^x468));

	if (t89 != -3140626938711980LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x469 = -1LL;
	int32_t x470 = INT32_MIN;
	int8_t x471 = INT8_MIN;
	volatile int16_t x472 = -1040;
	int64_t t90 = 137238767LL;

	t90 = ((x469*x470)+(x471^x472));

	if (t90 != 2147484784LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x477 = 1U;
	static volatile int64_t x478 = -1561435648LL;
	int32_t x479 = -11;
	static uint8_t x480 = 14U;
	volatile int64_t t91 = 920LL;

	t91 = ((x477*x478)+(x479^x480));

	if (t91 != -1561435653LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t t92 = -142379794;

	t92 = ((x481*x482)+(x483^x484));

	if (t92 != 1856147804) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = INT8_MIN;
	uint16_t x486 = 7U;
	volatile int64_t x487 = -2963729LL;
	volatile int64_t t93 = -113649589998LL;

	t93 = ((x485*x486)+(x487^x488));

	if (t93 != -2950833LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x497 = 0U;
	volatile uint64_t x498 = 26LLU;
	int8_t x499 = INT8_MIN;
	int64_t x500 = INT64_MAX;
	static uint64_t t94 = 12333985119814626LLU;

	t94 = ((x497*x498)+(x499^x500));

	if (t94 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x505 = -1;
	volatile uint32_t x506 = 708804863U;
	int8_t x507 = -1;
	volatile int8_t x508 = 23;
	uint32_t t95 = 197977U;

	t95 = ((x505*x506)+(x507^x508));

	if (t95 != 3586162409U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x509 = -39360;
	uint32_t x510 = 1U;
	int8_t x511 = 30;
	volatile uint64_t x512 = 212456736LLU;
	volatile uint64_t t96 = 31967531335394LLU;

	t96 = ((x509*x510)+(x511^x512));

	if (t96 != 4507384702LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x525 = UINT64_MAX;
	uint8_t x527 = 41U;
	int16_t x528 = INT16_MAX;
	volatile uint64_t t97 = 40LLU;

	t97 = ((x525*x526)+(x527^x528));

	if (t97 != 56056LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x529 = 17U;
	volatile int8_t x530 = INT8_MIN;
	uint16_t x531 = 559U;
	volatile int32_t t98 = -1;

	t98 = ((x529*x530)+(x531^x532));

	if (t98 != -1620) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x534 = 12;
	static uint32_t x535 = 1U;
	uint32_t t99 = 1799204U;

	t99 = ((x533*x534)+(x535^x536));

	if (t99 != 4294966077U) { NG(); } else { ; }
	
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

