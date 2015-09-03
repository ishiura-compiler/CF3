#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -8LL;
volatile uint64_t x5 = 3836544466595878LLU;
int8_t x8 = -1;
static int8_t x13 = INT8_MIN;
volatile int32_t x15 = -1;
int32_t x19 = INT32_MIN;
uint32_t x22 = 30011520U;
uint64_t t5 = 256LLU;
uint16_t x29 = 13U;
uint32_t x38 = 6690238U;
uint64_t x40 = 15652672706945080LLU;
uint16_t x52 = 6319U;
int8_t x63 = INT8_MIN;
uint8_t x69 = 1U;
uint32_t x70 = UINT32_MAX;
uint16_t x71 = 852U;
uint16_t x77 = 21U;
uint32_t x79 = 3726145U;
volatile uint64_t t18 = 32415927116632LLU;
uint16_t x106 = 5374U;
int64_t x113 = INT64_MIN;
int64_t t22 = -241LL;
static uint16_t x119 = 2U;
uint8_t x120 = 90U;
uint32_t x123 = 1U;
volatile int16_t x126 = -1803;
uint64_t t27 = 38774978747LLU;
uint8_t x143 = 2U;
uint32_t t28 = 29U;
volatile int8_t x149 = INT8_MIN;
uint16_t x155 = UINT16_MAX;
int16_t x159 = -1;
static uint64_t x168 = 94905509LLU;
static volatile uint64_t x176 = 26256606LLU;
uint8_t x178 = UINT8_MAX;
static int32_t x181 = INT32_MAX;
volatile int16_t x186 = INT16_MIN;
int16_t x196 = -867;
uint32_t t39 = 170531764U;
int16_t x208 = INT16_MAX;
int32_t x216 = INT32_MAX;
int64_t x221 = -773025438427008738LL;
int32_t x224 = -2288;
static uint64_t x265 = UINT64_MAX;
static volatile int8_t x266 = INT8_MIN;
int16_t x271 = INT16_MIN;
int64_t x273 = 6470702LL;
int64_t t46 = -648700970LL;
int8_t x280 = INT8_MIN;
volatile int32_t t47 = 0;
uint64_t x281 = UINT64_MAX;
volatile uint64_t t48 = 7348883901048402LLU;
int32_t x288 = 7206;
static volatile uint64_t x304 = UINT64_MAX;
uint32_t x318 = 69U;
uint32_t x320 = UINT32_MAX;
static uint32_t t55 = 1803U;
int64_t x322 = INT64_MIN;
uint16_t x337 = 1U;
int64_t x340 = INT64_MIN;
static int32_t x345 = INT32_MIN;
int32_t x356 = INT32_MIN;
uint64_t t64 = 2492LLU;
int64_t x362 = INT64_MIN;
volatile int16_t x364 = INT16_MIN;
int16_t x366 = -85;
volatile uint16_t x386 = 283U;
uint16_t x387 = UINT16_MAX;
int8_t x388 = INT8_MIN;
uint64_t x392 = UINT64_MAX;
uint16_t x393 = UINT16_MAX;
uint32_t x394 = UINT32_MAX;
volatile int64_t x397 = -1LL;
volatile int32_t t73 = 616009;
uint32_t x414 = 923472U;
volatile uint64_t t75 = 244LLU;
uint64_t t77 = 63329507LLU;
static volatile int32_t x437 = INT32_MIN;
int32_t x446 = 0;
uint32_t x447 = 28514U;
int64_t x454 = INT64_MIN;
volatile uint16_t x464 = 300U;
int16_t x469 = -188;
int8_t x470 = INT8_MIN;
int32_t t87 = 201221674;
int64_t x485 = INT64_MIN;
int8_t x486 = INT8_MIN;
static volatile int64_t t91 = -5007789698675LL;
int64_t x490 = -965911458028785LL;
volatile int32_t x491 = INT32_MIN;
uint64_t x496 = 12287056LLU;
static uint16_t x499 = 251U;
int8_t x506 = 20;
int64_t x517 = INT64_MIN;
volatile int16_t x528 = INT16_MAX;


void f0(void) {
	int16_t x1 = 0;
	int32_t x2 = INT32_MAX;
	int64_t x3 = -1LL;
	uint8_t x4 = 3U;

	t0 = ((x1^x2)%(x3%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = UINT32_MAX;
	static uint64_t x7 = 8801322714018703LLU;
	volatile uint64_t t1 = 1689LLU;

	t1 = ((x5^x6)%(x7%x8));

	if (t1 != 3836547751694297LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MAX;
	static volatile uint32_t x12 = UINT32_MAX;
	int64_t t2 = -543869249235435LL;

	t2 = ((x9^x10)%(x11%x12));

	if (t2 != -121LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = UINT16_MAX;
	volatile int8_t x16 = INT8_MIN;
	int32_t t3 = -4;

	t3 = ((x13^x14)%(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 9171391LL;
	uint32_t x18 = 50U;
	static uint64_t x20 = 195033126283290LLU;
	static volatile uint64_t t4 = 68128512452220138LLU;

	t4 = ((x17^x18)%(x19%x20));

	if (t4 != 9171341LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 6U;
	uint64_t x23 = 25877238LLU;
	static int16_t x24 = INT16_MIN;

	t5 = ((x21^x22)%(x23%x24));

	if (t5 != 4134288LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x30 = 3U;
	static uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	uint64_t t6 = 31813481259219LLU;

	t6 = ((x29^x30)%(x31%x32));

	if (t6 != 14LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MIN;
	volatile int64_t x35 = -1LL;
	int16_t x36 = INT16_MIN;
	volatile int64_t t7 = -6140LL;

	t7 = ((x33^x34)%(x35%x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x39 = INT32_MAX;
	volatile uint64_t t8 = 6956423255494LLU;

	t8 = ((x37^x38)%(x39%x40));

	if (t8 != 2140793410LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 7U;
	volatile int32_t x42 = INT32_MAX;
	volatile int32_t x43 = -75;
	uint32_t x44 = 3089U;
	uint32_t t9 = 5U;

	t9 = ((x41^x42)%(x43%x44));

	if (t9 != 2829U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MIN;
	int16_t x46 = 3713;
	int64_t x47 = 277LL;
	static int16_t x48 = 5676;
	int64_t t10 = 60231331LL;

	t10 = ((x45^x46)%(x47%x48));

	if (t10 != -114LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 102156766U;
	static int16_t x50 = -1;
	int32_t x51 = -1;
	volatile uint32_t t11 = 1988649275U;

	t11 = ((x49^x50)%(x51%x52));

	if (t11 != 4192810529U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x61 = 1726238729480LLU;
	static uint8_t x62 = UINT8_MAX;
	int32_t x64 = -3;
	uint64_t t12 = 3538LLU;

	t12 = ((x61^x62)%(x63%x64));

	if (t12 != 1726238729719LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 0U;
	static int8_t x66 = -18;
	volatile int16_t x67 = -723;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t13 = -154797433;

	t13 = ((x65^x66)%(x67%x68));

	if (t13 != -18) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x72 = 89805278LL;
	int64_t t14 = 110581414017576022LL;

	t14 = ((x69^x70)%(x71%x72));

	if (t14 != 362LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = -1LL;
	volatile int16_t x75 = -1;
	int16_t x76 = 2079;
	volatile int64_t t15 = -65LL;

	t15 = ((x73^x74)%(x75%x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x78 = 7673841459116LLU;
	volatile uint32_t x80 = 33282U;
	volatile uint64_t t16 = 303427802055LLU;

	t16 = ((x77^x78)%(x79%x80));

	if (t16 != 9743LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x81 = 1U;
	volatile int8_t x82 = INT8_MIN;
	int16_t x83 = -1;
	int32_t x84 = INT32_MIN;
	volatile int32_t t17 = 127;

	t17 = ((x81^x82)%(x83%x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 253U;
	volatile int8_t x86 = INT8_MAX;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = 30LLU;

	t18 = ((x85^x86)%(x87%x88));

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 1U;
	int32_t x98 = INT32_MAX;
	volatile int64_t x99 = -1LL;
	int8_t x100 = INT8_MIN;
	volatile int64_t t19 = 19266702004LL;

	t19 = ((x97^x98)%(x99%x100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = UINT32_MAX;
	uint16_t x107 = UINT16_MAX;
	static uint8_t x108 = 57U;
	uint32_t t20 = 586052U;

	t20 = ((x105^x106)%(x107%x108));

	if (t20 != 5U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = UINT64_MAX;
	static int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = -128744LL;
	volatile uint64_t t21 = 47275133683185LLU;

	t21 = ((x109^x110)%(x111%x112));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x114 = UINT8_MAX;
	uint32_t x115 = 672529U;
	int16_t x116 = INT16_MAX;

	t22 = ((x113^x114)%(x115%x116));

	if (t22 != -5257LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x117 = 2667U;
	volatile uint32_t x118 = UINT32_MAX;
	uint32_t t23 = 691U;

	t23 = ((x117^x118)%(x119%x120));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = -16663430;
	int8_t x122 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;
	volatile uint32_t t24 = 1284U;

	t24 = ((x121^x122)%(x123%x124));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x125 = 6U;
	static uint32_t x127 = 1057107U;
	static volatile uint8_t x128 = UINT8_MAX;
	uint32_t t25 = 5296472U;

	t25 = ((x125^x126)%(x127%x128));

	if (t25 != 47U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = 60LLU;
	int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	static uint8_t x132 = 5U;
	volatile uint64_t t26 = 19456LLU;

	t26 = ((x129^x130)%(x131%x132));

	if (t26 != 18446744071562068028LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = 261682265U;
	uint64_t x138 = 52LLU;
	uint16_t x139 = UINT16_MAX;
	static uint64_t x140 = 21074LLU;

	t27 = ((x137^x138)%(x139%x140));

	if (t27 != 1030LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x141 = 4989994U;
	uint8_t x142 = 3U;
	static int8_t x144 = INT8_MIN;

	t28 = ((x141^x142)%(x143%x144));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MAX;
	static int8_t x146 = -33;
	int64_t x147 = -50382652663LL;
	static volatile int32_t x148 = INT32_MIN;
	volatile int64_t t29 = -266077998351114LL;

	t29 = ((x145^x146)%(x147%x148));

	if (t29 != -570708840LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x150 = 18978748U;
	uint64_t x151 = 3178518517926285LLU;
	int8_t x152 = -60;
	static volatile uint64_t t30 = 521229555603LLU;

	t30 = ((x149^x150)%(x151%x152));

	if (t30 != 4275988540LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 3532U;
	volatile int64_t x154 = INT64_MIN;
	uint32_t x156 = 146254U;
	volatile int64_t t31 = 45LL;

	t31 = ((x153^x154)%(x155%x156));

	if (t31 != -29236LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x157 = UINT32_MAX;
	static uint64_t x158 = UINT64_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile uint64_t t32 = 311LLU;

	t32 = ((x157^x158)%(x159%x160));

	if (t32 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x165 = 21;
	int32_t x166 = 3473;
	static int16_t x167 = -1;
	uint64_t t33 = 121421164964LLU;

	t33 = ((x165^x166)%(x167%x168));

	if (t33 != 3460LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x173 = UINT64_MAX;
	int64_t x174 = -1LL;
	int8_t x175 = INT8_MAX;
	uint64_t t34 = 3883416975824LLU;

	t34 = ((x173^x174)%(x175%x176));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = -1;
	int16_t x179 = INT16_MIN;
	volatile int32_t x180 = -1987;
	volatile int32_t t35 = 0;

	t35 = ((x177^x178)%(x179%x180));

	if (t35 != -256) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MIN;
	int16_t x184 = -11;
	int64_t t36 = -1131310923LL;

	t36 = ((x181^x182)%(x183%x184));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x185 = 1U;
	int32_t x187 = -175639;
	int32_t x188 = INT32_MIN;
	int32_t t37 = 2;

	t37 = ((x185^x186)%(x187%x188));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x193 = 1U;
	uint32_t x194 = 452467523U;
	uint32_t x195 = 91915697U;
	volatile uint32_t t38 = 83469U;

	t38 = ((x193^x194)%(x195%x196));

	if (t38 != 84804734U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x197 = 2U;
	int32_t x198 = INT32_MIN;
	volatile int8_t x199 = INT8_MAX;
	uint32_t x200 = 917U;

	t39 = ((x197^x198)%(x199%x200));

	if (t39 != 10U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int64_t x206 = -1LL;
	uint64_t x207 = UINT64_MAX;
	volatile uint64_t t40 = 274324692936462LLU;

	t40 = ((x205^x206)%(x207%x208));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = INT16_MIN;
	static int64_t x214 = 1LL;
	int8_t x215 = -1;
	int64_t t41 = -4276968314LL;

	t41 = ((x213^x214)%(x215%x216));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x222 = UINT64_MAX;
	int64_t x223 = INT64_MIN;
	uint64_t t42 = 189LLU;

	t42 = ((x221^x222)%(x223%x224));

	if (t42 != 773025438427008737LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x229 = INT16_MIN;
	uint16_t x230 = UINT16_MAX;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	volatile uint32_t t43 = 27423U;

	t43 = ((x229^x230)%(x231%x232));

	if (t43 != 2U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x267 = 1;
	int64_t x268 = INT64_MIN;
	volatile uint64_t t44 = 6155234999LLU;

	t44 = ((x265^x266)%(x267%x268));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x269 = INT16_MIN;
	int64_t x270 = -29898422270736870LL;
	uint64_t x272 = 2602835239375286LLU;
	static volatile uint64_t t45 = 18672534848210LLU;

	t45 = ((x269^x270)%(x271%x272));

	if (t45 != 150093317520238LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	uint8_t x276 = 126U;

	t46 = ((x273^x274)%(x275%x276));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x277 = INT8_MIN;
	static int32_t x278 = INT32_MIN;
	uint16_t x279 = 747U;

	t47 = ((x277^x278)%(x279%x280));

	if (t47 != 47) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x282 = -65648427;
	static int32_t x283 = INT32_MIN;
	volatile int64_t x284 = 72232LL;

	t48 = ((x281^x282)%(x283%x284));

	if (t48 != 65648426LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x285 = INT8_MAX;
	int8_t x286 = -1;
	volatile int64_t x287 = INT64_MAX;
	volatile int64_t t49 = -78511LL;

	t49 = ((x285^x286)%(x287%x288));

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MIN;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = INT16_MIN;
	volatile int64_t t50 = -3518824978LL;

	t50 = ((x289^x290)%(x291%x292));

	if (t50 != 32647LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x301 = -1;
	int8_t x302 = -1;
	int8_t x303 = INT8_MAX;
	static uint64_t t51 = 395749LLU;

	t51 = ((x301^x302)%(x303%x304));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x305 = 47U;
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = 7U;
	volatile int64_t x308 = INT64_MIN;
	volatile uint64_t t52 = 1000906414LLU;

	t52 = ((x305^x306)%(x307%x308));

	if (t52 != 3LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x309 = INT64_MAX;
	int8_t x310 = 0;
	int8_t x311 = INT8_MAX;
	int32_t x312 = INT32_MIN;
	int64_t t53 = -1389285155492897LL;

	t53 = ((x309^x310)%(x311%x312));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x313 = 8LLU;
	volatile int64_t x314 = INT64_MAX;
	uint8_t x315 = 1U;
	uint32_t x316 = 84U;
	uint64_t t54 = 7135673477268LLU;

	t54 = ((x313^x314)%(x315%x316));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x317 = INT16_MIN;
	uint8_t x319 = 10U;

	t55 = ((x317^x318)%(x319%x320));

	if (t55 != 7U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x321 = -12;
	static uint8_t x323 = UINT8_MAX;
	static int64_t x324 = INT64_MIN;
	static volatile int64_t t56 = -1672839LL;

	t56 = ((x321^x322)%(x323%x324));

	if (t56 != 116LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = 118037238941812136LL;
	int64_t x327 = INT64_MAX;
	int8_t x328 = -5;
	int64_t t57 = 1566956319LL;

	t57 = ((x325^x326)%(x327%x328));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x329 = 177U;
	int32_t x330 = INT32_MIN;
	static int8_t x331 = -1;
	static uint16_t x332 = 5U;
	volatile uint32_t t58 = 804465U;

	t58 = ((x329^x330)%(x331%x332));

	if (t58 != 2147483825U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = -1;
	int64_t x334 = -1LL;
	static int8_t x335 = INT8_MAX;
	int16_t x336 = INT16_MIN;
	int64_t t59 = 1LL;

	t59 = ((x333^x334)%(x335%x336));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x338 = 2953U;
	uint16_t x339 = 3U;
	volatile int64_t t60 = -7953397478495LL;

	t60 = ((x337^x338)%(x339%x340));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	static int16_t x343 = 4629;
	static uint64_t x344 = 175196018LLU;
	static uint64_t t61 = 3817996695817353651LLU;

	t61 = ((x341^x342)%(x343%x344));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x346 = -3;
	static volatile uint8_t x347 = 2U;
	int8_t x348 = INT8_MIN;
	int32_t t62 = -29;

	t62 = ((x345^x346)%(x347%x348));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	uint64_t x355 = 1027399782109138055LLU;
	volatile uint64_t t63 = 874LLU;

	t63 = ((x353^x354)%(x355%x356));

	if (t63 != 980947777854204425LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x357 = 23972U;
	uint64_t x358 = 64251791864227202LLU;
	int16_t x359 = 2;
	static int64_t x360 = 130236LL;

	t64 = ((x357^x358)%(x359%x360));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x361 = 30U;
	uint8_t x363 = UINT8_MAX;
	volatile int64_t t65 = 3LL;

	t65 = ((x361^x362)%(x363%x364));

	if (t65 != -98LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x365 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	static volatile int8_t x368 = INT8_MAX;
	volatile int64_t t66 = 24270LL;

	t66 = ((x365^x366)%(x367%x368));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = 856;
	uint8_t x379 = 77U;
	volatile uint64_t x380 = 3308340328127409843LLU;
	uint64_t t67 = 1065571580LLU;

	t67 = ((x377^x378)%(x379%x380));

	if (t67 != 23LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x381 = 12;
	int8_t x382 = -14;
	static int32_t x383 = INT32_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t68 = 7545LL;

	t68 = ((x381^x382)%(x383%x384));

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x385 = 1U;
	static volatile int32_t t69 = -36058;

	t69 = ((x385^x386)%(x387%x388));

	if (t69 != 28) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x389 = 67U;
	volatile uint8_t x390 = UINT8_MAX;
	int16_t x391 = 15;
	static uint64_t t70 = 3LLU;

	t70 = ((x389^x390)%(x391%x392));

	if (t70 != 8LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x395 = -1309353818953690663LL;
	int8_t x396 = 15;
	volatile int64_t t71 = 9LL;

	t71 = ((x393^x394)%(x395%x396));

	if (t71 != 6LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x398 = 1264U;
	static uint8_t x399 = UINT8_MAX;
	volatile int64_t x400 = 48036087LL;
	static volatile int64_t t72 = 6962859524718LL;

	t72 = ((x397^x398)%(x399%x400));

	if (t72 != -245LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x401 = UINT16_MAX;
	static uint8_t x402 = 23U;
	int16_t x403 = 103;
	int16_t x404 = INT16_MIN;

	t73 = ((x401^x402)%(x403%x404));

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x409 = INT64_MIN;
	int16_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	uint64_t x412 = 7332626220676050LLU;
	uint64_t t74 = 172LLU;

	t74 = ((x409^x410)%(x411%x412));

	if (t74 != 32767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x413 = INT32_MAX;
	static uint64_t x415 = 1122945LLU;
	volatile int8_t x416 = INT8_MAX;

	t75 = ((x413^x414)%(x415%x416));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x417 = INT8_MAX;
	uint8_t x418 = UINT8_MAX;
	int64_t x419 = -1LL;
	int32_t x420 = INT32_MIN;
	int64_t t76 = -142LL;

	t76 = ((x417^x418)%(x419%x420));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x421 = -1;
	static int64_t x422 = -1LL;
	uint64_t x423 = 4140586624692282316LLU;
	volatile int32_t x424 = INT32_MAX;

	t77 = ((x421^x422)%(x423%x424));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x425 = 3U;
	uint8_t x426 = 2U;
	static int16_t x427 = INT16_MIN;
	int32_t x428 = 179471;
	static int32_t t78 = 1707536;

	t78 = ((x425^x426)%(x427%x428));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x433 = INT8_MIN;
	uint16_t x434 = 1U;
	uint16_t x435 = UINT16_MAX;
	volatile uint32_t x436 = 916774353U;
	uint32_t t79 = 46514U;

	t79 = ((x433^x434)%(x435%x436));

	if (t79 != 65409U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x438 = -1;
	int32_t x439 = -45041;
	int8_t x440 = INT8_MIN;
	static volatile int32_t t80 = -39;

	t80 = ((x437^x438)%(x439%x440));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x441 = INT8_MIN;
	volatile int32_t x442 = INT32_MIN;
	static int64_t x443 = -507940976461028212LL;
	uint16_t x444 = 10U;
	int64_t t81 = -29712290LL;

	t81 = ((x441^x442)%(x443%x444));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x445 = -1;
	static int64_t x448 = INT64_MIN;
	volatile int64_t t82 = -4052LL;

	t82 = ((x445^x446)%(x447%x448));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x449 = INT32_MIN;
	static uint64_t x450 = UINT64_MAX;
	int32_t x451 = INT32_MAX;
	int32_t x452 = 6631896;
	uint64_t t83 = 29445579875330790LLU;

	t83 = ((x449^x450)%(x451%x452));

	if (t83 != 369286LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x453 = INT64_MAX;
	volatile int32_t x455 = -1;
	uint16_t x456 = 28U;
	static int64_t t84 = 2269619576687691881LL;

	t84 = ((x453^x454)%(x455%x456));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x457 = 5860U;
	uint32_t x458 = UINT32_MAX;
	int64_t x459 = INT64_MAX;
	static uint32_t x460 = 2381918U;
	volatile int64_t t85 = -437787867864019LL;

	t85 = ((x457^x458)%(x459%x460));

	if (t85 != 210296LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x461 = INT8_MAX;
	int64_t x462 = INT64_MIN;
	int32_t x463 = INT32_MIN;
	int64_t t86 = -530285405173LL;

	t86 = ((x461^x462)%(x463%x464));

	if (t86 != -129LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x471 = INT32_MAX;
	uint16_t x472 = 156U;

	t87 = ((x469^x470)%(x471%x472));

	if (t87 != 69) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x473 = INT32_MIN;
	int8_t x474 = -7;
	int32_t x475 = -1;
	static int16_t x476 = INT16_MIN;
	volatile int32_t t88 = -8491354;

	t88 = ((x473^x474)%(x475%x476));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = INT32_MAX;
	int16_t x478 = -1;
	static int16_t x479 = INT16_MAX;
	int8_t x480 = INT8_MAX;
	volatile int32_t t89 = 20;

	t89 = ((x477^x478)%(x479%x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x481 = INT64_MIN;
	volatile int8_t x482 = -5;
	int8_t x483 = -1;
	int16_t x484 = -51;
	volatile int64_t t90 = -24872610880373LL;

	t90 = ((x481^x482)%(x483%x484));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x487 = 16639665772LL;
	int8_t x488 = INT8_MIN;

	t91 = ((x485^x486)%(x487%x488));

	if (t91 != 60LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x489 = 49015171LLU;
	volatile int32_t x492 = -500776758;
	volatile uint64_t t92 = 34862263790266LLU;

	t92 = ((x489^x490)%(x491%x492));

	if (t92 != 18445778162211293836LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x493 = INT16_MAX;
	static uint32_t x494 = 14514054U;
	static int16_t x495 = 2;
	volatile uint64_t t93 = 714874LLU;

	t93 = ((x493^x494)%(x495%x496));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x497 = -1745;
	uint32_t x498 = 4117085U;
	volatile int32_t x500 = INT32_MAX;
	volatile uint32_t t94 = 61U;

	t94 = ((x497^x498)%(x499%x500));

	if (t94 != 132U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x505 = -1;
	int16_t x507 = INT16_MAX;
	int16_t x508 = INT16_MIN;
	int32_t t95 = 32802000;

	t95 = ((x505^x506)%(x507%x508));

	if (t95 != -21) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x509 = INT16_MIN;
	static uint8_t x510 = UINT8_MAX;
	volatile int32_t x511 = -36225688;
	int32_t x512 = 783711672;
	volatile int32_t t96 = -1502;

	t96 = ((x509^x510)%(x511%x512));

	if (t96 != -32513) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x518 = 8U;
	int64_t x519 = -1LL;
	volatile uint8_t x520 = 30U;
	volatile int64_t t97 = 35LL;

	t97 = ((x517^x518)%(x519%x520));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x525 = 10;
	volatile int16_t x526 = -1;
	uint32_t x527 = UINT32_MAX;
	uint32_t t98 = 202445U;

	t98 = ((x525^x526)%(x527%x528));

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x529 = 11;
	int16_t x530 = INT16_MIN;
	static int8_t x531 = -2;
	int64_t x532 = -604932278LL;
	int64_t t99 = -11LL;

	t99 = ((x529^x530)%(x531%x532));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

