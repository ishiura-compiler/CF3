#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 29942506752188LLU;
static volatile int64_t x18 = INT64_MAX;
int32_t x21 = 104460103;
int32_t x24 = INT32_MAX;
uint16_t x35 = 2U;
volatile uint16_t x36 = 997U;
volatile uint32_t x46 = UINT32_MAX;
uint64_t x47 = UINT64_MAX;
int8_t x63 = -56;
uint64_t t10 = 27897LLU;
uint8_t x75 = 4U;
volatile uint64_t t12 = 256222550LLU;
static int8_t x85 = INT8_MIN;
uint32_t t14 = 4030U;
static int8_t x93 = INT8_MAX;
int64_t x110 = INT64_MIN;
int64_t x111 = INT64_MIN;
volatile int64_t t16 = 181LL;
int32_t x117 = -696588;
static volatile uint64_t x119 = UINT64_MAX;
static int32_t x143 = INT32_MIN;
int16_t x147 = INT16_MIN;
volatile int64_t t21 = -35049319045416128LL;
volatile uint64_t x150 = 17078986169481239LLU;
volatile uint64_t t22 = 2108875795LLU;
int32_t x156 = 4154366;
int32_t x162 = INT32_MIN;
int64_t x164 = INT64_MIN;
volatile int64_t x165 = INT64_MIN;
int16_t x168 = INT16_MIN;
uint32_t x173 = 31U;
static uint64_t t26 = 893950039655LLU;
uint32_t x177 = 82208570U;
uint16_t x183 = 36U;
int64_t x204 = 3301031934784LL;
uint16_t x205 = 65U;
volatile int8_t x208 = INT8_MAX;
int32_t t32 = 50687615;
int64_t x220 = INT64_MAX;
int64_t t33 = INT64_MAX;
uint16_t x222 = 8432U;
int64_t x224 = INT64_MIN;
int32_t t35 = INT32_MIN;
static int16_t x237 = INT16_MIN;
int32_t x238 = INT32_MIN;
static volatile int32_t t36 = 3;
int8_t x245 = 58;
int32_t x247 = 7633211;
uint64_t t37 = 3187291LLU;
int8_t x250 = INT8_MIN;
int16_t x252 = -70;
static volatile int32_t t38 = -649988927;
static int64_t x255 = INT64_MAX;
volatile int32_t x259 = INT32_MIN;
uint32_t x262 = UINT32_MAX;
int32_t x265 = INT32_MIN;
int64_t x266 = INT64_MIN;
uint8_t x267 = UINT8_MAX;
volatile int32_t x270 = INT32_MIN;
int8_t x272 = INT8_MIN;
int8_t x275 = 17;
static int32_t x280 = INT32_MAX;
uint64_t t45 = UINT64_MAX;
volatile int32_t t49 = 29;
volatile uint32_t x312 = UINT32_MAX;
static int32_t x315 = -1;
volatile uint32_t t52 = 5U;
int8_t x321 = INT8_MIN;
static int16_t x322 = INT16_MIN;
uint32_t x327 = 296U;
int16_t x331 = INT16_MIN;
uint16_t x336 = 21653U;
int8_t x341 = -1;
int64_t x343 = -4186739731LL;
static volatile uint32_t x347 = 37U;
int16_t x349 = -1;
int64_t x356 = 271179277235845LL;
int16_t x358 = INT16_MIN;
int16_t x359 = -1;
int8_t x364 = -29;
int8_t x368 = INT8_MAX;
volatile int64_t x374 = -898029971LL;
uint32_t x395 = UINT32_MAX;
int16_t x396 = INT16_MIN;
uint16_t x398 = UINT16_MAX;
uint8_t x399 = UINT8_MAX;
volatile int8_t x403 = 5;
int32_t t71 = -102;
static int32_t x411 = -126402564;
uint32_t x420 = 3667U;
uint32_t x426 = 841U;
int8_t x430 = INT8_MIN;
uint64_t x438 = 34159LLU;
int64_t t79 = -18876010486LL;
int64_t x450 = INT64_MIN;
uint64_t x452 = UINT64_MAX;
volatile uint64_t t80 = 0LLU;
int16_t x472 = INT16_MIN;
volatile int16_t x473 = 0;
int32_t x474 = -1;
int16_t x477 = -1;
int64_t t84 = 267436826LL;
static volatile uint64_t t86 = 13535LLU;
int16_t x510 = INT16_MIN;
int8_t x511 = 6;
uint32_t t93 = 302607U;
int8_t x529 = INT8_MAX;
int64_t x537 = -1LL;
volatile int32_t x544 = INT32_MAX;
static int16_t x558 = 837;
int16_t x560 = -2794;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = 24333401616LLU;
	uint32_t x3 = UINT32_MAX;
	volatile int16_t x4 = INT16_MAX;

	t0 = (x1-(x2/(x3%x4)));

	if (t0 != 18446744063450934096LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 25U;
	volatile int8_t x6 = INT8_MIN;
	static int32_t x7 = -10;
	static int64_t x8 = INT64_MIN;
	int64_t t1 = 1311LL;

	t1 = (x5-(x6/(x7%x8)));

	if (t1 != 13LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x17 = 1315;
	volatile uint8_t x19 = UINT8_MAX;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int64_t t2 = 43300680140LL;

	t2 = (x17-(x18/(x19%x20)));

	if (t2 != -36170086419037021LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 15U;
	volatile uint32_t t3 = 7U;

	t3 = (x21-(x22/(x23%x24)));

	if (t3 != 104460086U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x29 = 240U;
	int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	volatile uint32_t x32 = 2306U;
	uint32_t t4 = 27U;

	t4 = (x29-(x30/(x31%x32)));

	if (t4 != 4280839355U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 64U;
	uint16_t x34 = 14593U;
	int32_t t5 = -354;

	t5 = (x33-(x34/(x35%x36)));

	if (t5 != -7232) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 5LLU;
	volatile uint16_t x40 = UINT16_MAX;
	volatile uint64_t t6 = 4315063578501755770LLU;

	t6 = (x37-(x38/(x39%x40)));

	if (t6 != 16602069668486080102LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x45 = UINT64_MAX;
	int16_t x48 = INT16_MAX;
	uint64_t t7 = 134081131862LLU;

	t7 = (x45-(x46/(x47%x48)));

	if (t7 != 18446744073423220462LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = INT16_MIN;
	int8_t x50 = -1;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = 970909276371529914LLU;
	uint64_t t8 = 3357647947673LLU;

	t8 = (x49-(x50/(x51%x52)));

	if (t8 != 18446744073709518829LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x57 = 1896U;
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = 458888598655LL;
	static int64_t x60 = INT64_MIN;
	int64_t t9 = 2323580LL;

	t9 = (x57-(x58/(x59%x60)));

	if (t9 != 1896LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = 0;
	int16_t x62 = INT16_MIN;
	static uint64_t x64 = 867634580696LLU;

	t10 = (x61-(x62/(x63%x64)));

	if (t10 != 18446744073687233849LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = -3;
	static int64_t x66 = INT64_MAX;
	int64_t x67 = INT64_MIN;
	static int64_t x68 = INT64_MAX;
	static int64_t t11 = -3433756234827448166LL;

	t11 = (x65-(x66/(x67%x68)));

	if (t11 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile int64_t x74 = INT64_MIN;
	uint64_t x76 = UINT64_MAX;

	t12 = (x73-(x74/(x75%x76)));

	if (t12 != 16140901064495824896LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x86 = 2U;
	int8_t x87 = INT8_MAX;
	static int32_t x88 = INT32_MIN;
	volatile uint32_t t13 = 3374105U;

	t13 = (x85-(x86/(x87%x88)));

	if (t13 != 4294967168U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x89 = 1;
	uint16_t x90 = 0U;
	static uint32_t x91 = 3305621U;
	volatile uint8_t x92 = 61U;

	t14 = (x89-(x90/(x91%x92)));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x94 = UINT16_MAX;
	uint16_t x95 = 98U;
	static uint16_t x96 = 584U;
	volatile int32_t t15 = 191;

	t15 = (x93-(x94/(x95%x96)));

	if (t15 != -541) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = 220;
	int16_t x112 = -16121;

	t16 = (x109-(x110/(x111%x112)));

	if (t16 != -681949873334698LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x113 = -1;
	int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MIN;
	static uint16_t x116 = 27627U;
	volatile int64_t t17 = -425154LL;

	t17 = (x113-(x114/(x115%x116)));

	if (t17 != 990588769933924LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x118 = -350102456223222LL;
	uint32_t x120 = 9U;
	uint64_t t18 = 75376LLU;

	t18 = (x117-(x118/(x119%x120)));

	if (t18 != 15372345078499966963LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x125 = 3;
	static uint64_t x126 = 13850312365249LLU;
	uint16_t x127 = UINT16_MAX;
	int32_t x128 = INT32_MAX;
	volatile uint64_t t19 = 384133258659833333LLU;

	t19 = (x125-(x126/(x127%x128)));

	if (t19 != 18446744073498209400LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x141 = 3U;
	volatile uint32_t x142 = 20319768U;
	int64_t x144 = INT64_MIN;
	static int64_t t20 = 137406712029LL;

	t20 = (x141-(x142/(x143%x144)));

	if (t20 != 3LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x145 = 3LL;
	int64_t x146 = -557686LL;
	uint8_t x148 = UINT8_MAX;

	t21 = (x145-(x146/(x147%x148)));

	if (t21 != -4353LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x149 = -3;
	int16_t x151 = -1;
	static int64_t x152 = -47727227242LL;

	t22 = (x149-(x150/(x151%x152)));

	if (t22 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x153 = 51U;
	static volatile int32_t x154 = INT32_MIN;
	int32_t x155 = 571311;
	static uint32_t t23 = 101177228U;

	t23 = (x153-(x154/(x155%x156)));

	if (t23 != 3809U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x161 = 181542179U;
	uint64_t x163 = 19728LLU;
	uint64_t t24 = 95588038021LLU;

	t24 = (x161-(x162/(x163%x164)));

	if (t24 != 18445809019953970820LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x166 = 516687LLU;
	int8_t x167 = INT8_MAX;
	volatile uint64_t t25 = 5903425730068620239LLU;

	t25 = (x165-(x166/(x167%x168)));

	if (t25 != 9223372036854771740LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x174 = INT64_MAX;
	volatile uint64_t x175 = UINT64_MAX;
	static uint16_t x176 = 4U;

	t26 = (x173-(x174/(x175%x176)));

	if (t26 != 15372286728091293045LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x178 = INT16_MIN;
	volatile uint64_t x179 = 2LLU;
	uint32_t x180 = UINT32_MAX;
	uint64_t t27 = 18420350098720LLU;

	t27 = (x177-(x178/(x179%x180)));

	if (t27 != 9223372036937000762LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x181 = 0;
	int64_t x182 = -1LL;
	static volatile int32_t x184 = INT32_MAX;
	volatile int64_t t28 = 1518351903792077509LL;

	t28 = (x181-(x182/(x183%x184)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x185 = -3665;
	volatile int32_t x186 = -1338;
	int32_t x187 = 985;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t29 = 249758;

	t29 = (x185-(x186/(x187%x188)));

	if (t29 != -3664) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x197 = INT16_MAX;
	volatile int8_t x198 = 16;
	static uint16_t x199 = 32237U;
	static uint32_t x200 = 500543166U;
	volatile uint32_t t30 = 205298U;

	t30 = (x197-(x198/(x199%x200)));

	if (t30 != 32767U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x201 = -1;
	int16_t x202 = -1;
	int32_t x203 = -5504;
	volatile int64_t t31 = -84804802060LL;

	t31 = (x201-(x202/(x203%x204)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x206 = INT8_MIN;
	uint8_t x207 = 26U;

	t32 = (x205-(x206/(x207%x208)));

	if (t32 != 69) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x217 = INT64_MAX;
	int32_t x218 = 0;
	int32_t x219 = 799033;

	t33 = (x217-(x218/(x219%x220)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x221 = UINT16_MAX;
	static uint32_t x223 = 15099779U;
	static volatile int64_t t34 = 133034907LL;

	t34 = (x221-(x222/(x223%x224)));

	if (t34 != 65535LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x233 = INT32_MIN;
	volatile uint16_t x234 = 30321U;
	int32_t x235 = INT32_MIN;
	int32_t x236 = 117575855;

	t35 = (x233-(x234/(x235%x236)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x239 = 1U;
	static int16_t x240 = 65;

	t36 = (x237-(x238/(x239%x240)));

	if (t36 != 2147450880) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x246 = 132696739963742053LLU;
	static uint32_t x248 = UINT32_MAX;

	t37 = (x245-(x246/(x247%x248)));

	if (t37 != 18446744056325420676LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x249 = 509;
	int32_t x251 = -1;

	t38 = (x249-(x250/(x251%x252)));

	if (t38 != 381) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x253 = 3290872019244LLU;
	static uint64_t x254 = 51LLU;
	volatile int32_t x256 = 841496552;
	uint64_t t39 = 12925492345LLU;

	t39 = (x253-(x254/(x255%x256)));

	if (t39 != 3290872019244LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x257 = -728127962;
	int8_t x258 = -2;
	volatile int8_t x260 = INT8_MAX;
	int32_t t40 = -12;

	t40 = (x257-(x258/(x259%x260)));

	if (t40 != -728127962) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x263 = INT64_MIN;
	int32_t x264 = 367671447;
	int64_t t41 = -14608440228344538LL;

	t41 = (x261-(x262/(x263%x264)));

	if (t41 != 4294967319LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x268 = INT32_MIN;
	volatile int64_t t42 = -3948LL;

	t42 = (x265-(x266/(x267%x268)));

	if (t42 != 36170084271554688LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x269 = 0U;
	int16_t x271 = 3;
	int32_t t43 = -1008492616;

	t43 = (x269-(x270/(x271%x272)));

	if (t43 != 715827882) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x273 = INT32_MIN;
	int8_t x274 = 14;
	int32_t x276 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x273-(x274/(x275%x276)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x277 = UINT64_MAX;
	static int8_t x278 = -1;
	static int64_t x279 = INT64_MIN;

	t45 = (x277-(x278/(x279%x280)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	int16_t x283 = 36;
	volatile uint32_t x284 = UINT32_MAX;
	static volatile uint32_t t46 = 1967901328U;

	t46 = (x281-(x282/(x283%x284)));

	if (t46 != 2028179005U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = -1;
	volatile int64_t x286 = -14922316966513LL;
	static uint8_t x287 = 2U;
	int64_t x288 = INT64_MIN;
	volatile int64_t t47 = 368138LL;

	t47 = (x285-(x286/(x287%x288)));

	if (t47 != 7461158483255LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x293 = UINT8_MAX;
	uint64_t x294 = 3194992078626672929LLU;
	int32_t x295 = INT32_MIN;
	volatile int32_t x296 = -2504298;
	uint64_t t48 = 771995463580115457LLU;

	t48 = (x293-(x294/(x295%x296)));

	if (t48 != 255LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x297 = INT16_MAX;
	int16_t x298 = INT16_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	int8_t x300 = 9;

	t49 = (x297-(x298/(x299%x300)));

	if (t49 != 27306) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	uint32_t t50 = 567018U;

	t50 = (x309-(x310/(x311%x312)));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x313 = 2719705711346638349LLU;
	uint32_t x314 = UINT32_MAX;
	int64_t x316 = INT64_MIN;
	volatile uint64_t t51 = 58LLU;

	t51 = (x313-(x314/(x315%x316)));

	if (t51 != 2719705715641605644LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x317 = 16857121U;
	int32_t x318 = INT32_MIN;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;

	t52 = (x317-(x318/(x319%x320)));

	if (t52 != 16857121U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x323 = 2U;
	volatile int32_t x324 = INT32_MIN;
	static volatile int32_t t53 = -41229486;

	t53 = (x321-(x322/(x323%x324)));

	if (t53 != 16256) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x325 = -1;
	int64_t x326 = 29959LL;
	int8_t x328 = -63;
	static volatile int64_t t54 = -943LL;

	t54 = (x325-(x326/(x327%x328)));

	if (t54 != -102LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x329 = 150387U;
	volatile int64_t x330 = INT64_MIN;
	volatile uint16_t x332 = 15U;
	static volatile int64_t t55 = -550LL;

	t55 = (x329-(x330/(x331%x332)));

	if (t55 != -1152921504606696589LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x333 = UINT32_MAX;
	static uint16_t x334 = 446U;
	uint16_t x335 = 3U;
	uint32_t t56 = 3233684U;

	t56 = (x333-(x334/(x335%x336)));

	if (t56 != 4294967147U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x342 = INT16_MAX;
	uint16_t x344 = UINT16_MAX;
	volatile int64_t t57 = -72420758090688691LL;

	t57 = (x341-(x342/(x343%x344)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x345 = 14170U;
	int8_t x346 = 1;
	static int8_t x348 = INT8_MAX;
	uint32_t t58 = 301141U;

	t58 = (x345-(x346/(x347%x348)));

	if (t58 != 14170U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x350 = -1;
	int32_t x351 = -3179306;
	static int16_t x352 = 82;
	int32_t t59 = 8641;

	t59 = (x349-(x350/(x351%x352)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x353 = 9U;
	static uint64_t x354 = 934LLU;
	volatile uint32_t x355 = 55U;
	static volatile uint64_t t60 = 1249LLU;

	t60 = (x353-(x354/(x355%x356)));

	if (t60 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x357 = 555;
	int32_t x360 = INT32_MIN;
	int32_t t61 = -456132071;

	t61 = (x357-(x358/(x359%x360)));

	if (t61 != -32213) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x361 = -1;
	uint16_t x362 = 216U;
	int32_t x363 = -1;
	static int32_t t62 = 7024135;

	t62 = (x361-(x362/(x363%x364)));

	if (t62 != 215) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x365 = INT32_MAX;
	int16_t x366 = 387;
	static volatile uint32_t x367 = 3U;
	uint32_t t63 = 14U;

	t63 = (x365-(x366/(x367%x368)));

	if (t63 != 2147483518U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x369 = INT8_MIN;
	static int8_t x370 = INT8_MAX;
	uint8_t x371 = UINT8_MAX;
	static int16_t x372 = -4958;
	static int32_t t64 = -1;

	t64 = (x369-(x370/(x371%x372)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = INT16_MIN;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MIN;
	int64_t t65 = -725468782LL;

	t65 = (x373-(x374/(x375%x376)));

	if (t65 != 3488918LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x381 = UINT64_MAX;
	int64_t x382 = -2LL;
	uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = INT16_MIN;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x381-(x382/(x383%x384)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x385 = -62864LL;
	uint64_t x386 = 10113653444188890LLU;
	int32_t x387 = INT32_MIN;
	static int64_t x388 = INT64_MIN;
	uint64_t t67 = 1583262893712411LLU;

	t67 = (x385-(x386/(x387%x388)));

	if (t67 != 18446744073709488752LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MAX;
	int64_t t68 = -17890933LL;

	t68 = (x393-(x394/(x395%x396)));

	if (t68 != -281485714391048LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x397 = INT8_MAX;
	uint8_t x400 = 94U;
	volatile int32_t t69 = -3;

	t69 = (x397-(x398/(x399%x400)));

	if (t69 != -851) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t70 = 20283098;

	t70 = (x401-(x402/(x403%x404)));

	if (t70 != 152) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x405 = -11;
	int8_t x406 = INT8_MAX;
	int32_t x407 = -151;
	int8_t x408 = 23;

	t71 = (x405-(x406/(x407%x408)));

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	static uint16_t x412 = 6012U;
	int32_t t72 = -3446847;

	t72 = (x409-(x410/(x411%x412)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x413 = INT32_MIN;
	volatile int16_t x414 = -1;
	int16_t x415 = 221;
	uint8_t x416 = 6U;
	volatile int32_t t73 = INT32_MIN;

	t73 = (x413-(x414/(x415%x416)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x417 = INT8_MAX;
	int32_t x418 = INT32_MAX;
	static uint64_t x419 = 73777822978155837LLU;
	uint64_t t74 = 130862901LLU;

	t74 = (x417-(x418/(x419%x420)));

	if (t74 != 18446744073707887027LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x425 = 1LLU;
	static uint32_t x427 = 94906857U;
	uint64_t x428 = 169LLU;
	volatile uint64_t t75 = 4657LLU;

	t75 = (x425-(x426/(x427%x428)));

	if (t75 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x429 = 0U;
	int8_t x431 = INT8_MIN;
	uint64_t x432 = 1281541085248360214LLU;
	volatile uint64_t t76 = 11926531LLU;

	t76 = (x429-(x430/(x431%x432)));

	if (t76 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x433 = INT16_MIN;
	uint8_t x434 = 57U;
	volatile int16_t x435 = -1;
	volatile int8_t x436 = 2;
	volatile int32_t t77 = 1988798;

	t77 = (x433-(x434/(x435%x436)));

	if (t77 != -32711) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x437 = INT64_MIN;
	int64_t x439 = -1LL;
	volatile int8_t x440 = INT8_MIN;
	uint64_t t78 = 7428288300136273LLU;

	t78 = (x437-(x438/(x439%x440)));

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x441 = UINT32_MAX;
	static int8_t x442 = INT8_MIN;
	static uint8_t x443 = 26U;
	volatile int64_t x444 = -27191874283928LL;

	t79 = (x441-(x442/(x443%x444)));

	if (t79 != 4294967299LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x449 = INT32_MIN;
	int64_t x451 = 49275LL;

	t80 = (x449-(x450/(x451%x452)));

	if (t80 != 18446556889988514345LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x457 = INT8_MIN;
	int16_t x458 = INT16_MAX;
	volatile uint16_t x459 = 34U;
	int64_t x460 = -17706383715LL;
	static int64_t t81 = -5949LL;

	t81 = (x457-(x458/(x459%x460)));

	if (t81 != -1091LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x469 = INT64_MAX;
	volatile uint16_t x470 = 3351U;
	uint64_t x471 = UINT64_MAX;
	volatile uint64_t t82 = 170LLU;

	t82 = (x469-(x470/(x471%x472)));

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x475 = 359653U;
	volatile int32_t x476 = INT32_MIN;
	volatile uint32_t t83 = 22277U;

	t83 = (x473-(x474/(x475%x476)));

	if (t83 != 4294955355U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x478 = INT64_MAX;
	int32_t x479 = INT32_MIN;
	int32_t x480 = INT32_MAX;

	t84 = (x477-(x478/(x479%x480)));

	if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x489 = INT8_MAX;
	static volatile uint8_t x490 = 5U;
	static int16_t x491 = -1;
	static volatile uint32_t x492 = 937U;
	uint32_t t85 = 0U;

	t85 = (x489-(x490/(x491%x492)));

	if (t85 != 127U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x493 = 0;
	uint16_t x494 = 0U;
	uint64_t x495 = 14LLU;
	volatile uint32_t x496 = UINT32_MAX;

	t86 = (x493-(x494/(x495%x496)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x497 = -1;
	volatile int64_t x498 = -159611511LL;
	static int16_t x499 = INT16_MIN;
	int64_t x500 = -38642153091LL;
	volatile int64_t t87 = 599616280292822LL;

	t87 = (x497-(x498/(x499%x500)));

	if (t87 != -4871LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x501 = 21U;
	int32_t x502 = INT32_MIN;
	static int64_t x503 = -1LL;
	static int64_t x504 = -925781005882LL;
	volatile int64_t t88 = -348906904800835773LL;

	t88 = (x501-(x502/(x503%x504)));

	if (t88 != -2147483627LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x509 = 1;
	uint64_t x512 = 293113978343228LLU;
	static volatile uint64_t t89 = 8087412867137LLU;

	t89 = (x509-(x510/(x511%x512)));

	if (t89 != 15372286728091298476LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MIN;
	volatile uint32_t x515 = 411U;
	int64_t x516 = INT64_MIN;
	int64_t t90 = -3239242LL;

	t90 = (x513-(x514/(x515%x516)));

	if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x517 = INT8_MIN;
	int64_t x518 = INT64_MAX;
	uint16_t x519 = UINT16_MAX;
	int64_t x520 = INT64_MAX;
	int64_t t91 = -177LL;

	t91 = (x517-(x518/(x519%x520)));

	if (t91 != -140739635871872LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x521 = UINT8_MAX;
	volatile int32_t x522 = INT32_MIN;
	int64_t x523 = 209664307138234942LL;
	int64_t x524 = INT64_MIN;
	static int64_t t92 = 237302LL;

	t92 = (x521-(x522/(x523%x524)));

	if (t92 != 255LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x525 = -41385;
	volatile uint8_t x526 = UINT8_MAX;
	int32_t x527 = 11621;
	uint32_t x528 = UINT32_MAX;

	t93 = (x525-(x526/(x527%x528)));

	if (t93 != 4294925911U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x530 = 325;
	int16_t x531 = INT16_MIN;
	static uint32_t x532 = UINT32_MAX;
	volatile uint32_t t94 = 7758489U;

	t94 = (x529-(x530/(x531%x532)));

	if (t94 != 127U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x538 = 0U;
	int64_t x539 = INT64_MAX;
	uint8_t x540 = UINT8_MAX;
	static int64_t t95 = 2190LL;

	t95 = (x537-(x538/(x539%x540)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x541 = INT32_MIN;
	static uint16_t x542 = 101U;
	volatile int64_t x543 = 253LL;
	volatile int64_t t96 = -7605819986601LL;

	t96 = (x541-(x542/(x543%x544)));

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x545 = -101;
	int32_t x546 = 350178;
	volatile int16_t x547 = INT16_MIN;
	uint8_t x548 = 19U;
	volatile int32_t t97 = 1280874;

	t97 = (x545-(x546/(x547%x548)));

	if (t97 != 29080) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x557 = 1U;
	int8_t x559 = INT8_MIN;
	volatile int32_t t98 = -221;

	t98 = (x557-(x558/(x559%x560)));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x561 = 1U;
	int16_t x562 = INT16_MIN;
	static uint64_t x563 = 1620238819971LLU;
	int8_t x564 = -7;
	volatile uint64_t t99 = 5509063435LLU;

	t99 = (x561-(x562/(x563%x564)));

	if (t99 != 18446744073698166417LLU) { NG(); } else { ; }
	
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

