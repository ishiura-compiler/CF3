#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 68U;
static volatile uint8_t x2 = UINT8_MAX;
int32_t x6 = 103620;
volatile uint32_t x8 = UINT32_MAX;
int32_t t2 = 15;
volatile uint64_t t3 = 479622127893LLU;
int16_t x33 = INT16_MIN;
int8_t x35 = 5;
volatile int32_t x38 = INT32_MIN;
int32_t x49 = 14139;
uint32_t t9 = 321985U;
volatile int32_t x54 = -1;
static volatile uint64_t t10 = 3858430756248LLU;
int32_t x67 = INT32_MAX;
int16_t x70 = -975;
volatile int8_t x71 = -1;
volatile int64_t x72 = -1LL;
int16_t x80 = INT16_MIN;
int32_t x93 = 116797952;
volatile int64_t x94 = INT64_MIN;
int8_t x95 = 1;
static uint32_t x116 = UINT32_MAX;
int8_t x120 = INT8_MIN;
uint16_t x122 = UINT16_MAX;
volatile uint16_t x123 = UINT16_MAX;
uint32_t x124 = UINT32_MAX;
static volatile uint8_t x125 = 11U;
volatile uint16_t x133 = 54U;
volatile int64_t t29 = 382839358772108LL;
uint64_t x148 = 88710162738LLU;
volatile uint64_t t30 = 136715LLU;
int64_t x151 = -27335007LL;
int32_t x155 = -1;
volatile int16_t x162 = 236;
int16_t x163 = -266;
static volatile int32_t t36 = 52045000;
int16_t x181 = INT16_MAX;
int8_t x183 = 1;
volatile int8_t x186 = -1;
volatile int64_t t39 = 1696LL;
volatile uint8_t x190 = 15U;
static uint32_t x193 = 0U;
static int32_t t42 = 117;
volatile int64_t x210 = INT64_MIN;
static int32_t x232 = INT32_MIN;
static volatile int8_t x233 = INT8_MIN;
uint8_t x236 = 2U;
static int32_t x243 = -1;
volatile uint64_t t46 = 748439884675746LLU;
static int64_t x252 = -1LL;
int8_t x260 = -1;
uint64_t t50 = 998099221667434169LLU;
int32_t x264 = INT32_MAX;
uint32_t t52 = 733U;
int32_t t55 = -7349155;
int16_t x284 = -1;
uint8_t x286 = 1U;
int64_t x290 = -1LL;
int8_t x291 = INT8_MAX;
int64_t x296 = -1LL;
int64_t t59 = 345963LL;
int16_t x301 = INT16_MIN;
static uint32_t t64 = 4239165U;
uint16_t x323 = 1733U;
static uint8_t x325 = 1U;
static int16_t x326 = -1;
int64_t x329 = -1030444834LL;
int16_t x332 = -7443;
volatile int8_t x336 = INT8_MIN;
volatile int32_t t68 = 56638806;
volatile int64_t t70 = 1LL;
int16_t x346 = -1;
uint8_t x348 = 0U;
int8_t x349 = 3;
uint32_t t74 = 6339871U;
int16_t x363 = 13;
int16_t x381 = INT16_MAX;
uint16_t x383 = UINT16_MAX;
volatile int32_t x384 = -1;
int32_t t79 = 4;
static uint32_t x389 = 732U;
int32_t x393 = INT32_MIN;
static volatile uint8_t x395 = 8U;
uint32_t x399 = 68U;
volatile int16_t x402 = INT16_MIN;
int16_t x403 = INT16_MIN;
volatile uint64_t x412 = 3301030124LLU;
volatile int8_t x413 = 1;
uint64_t x421 = UINT64_MAX;
static uint64_t t87 = 9138666418368195997LLU;
int8_t x426 = -3;
int8_t x427 = INT8_MAX;
static volatile int32_t t88 = -653051644;
uint8_t x438 = 0U;
uint16_t x448 = UINT16_MAX;
int64_t x449 = -1LL;
int32_t x452 = -1;
int16_t x453 = 6;
volatile uint16_t x474 = 0U;
static int64_t t98 = 368442LL;


void f0(void) {
	int32_t x3 = INT32_MIN;
	int32_t x4 = -1;
	volatile int32_t t0 = 2311990;

	t0 = (x1*((x2%x3)*x4));

	if (t0 != -17340) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1U;
	static uint32_t x7 = 1304649936U;
	volatile uint32_t t1 = 7969U;

	t1 = (x5*((x6%x7)*x8));

	if (t1 != 4294863676U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x17 = INT8_MAX;
	uint8_t x18 = 2U;
	volatile int8_t x19 = INT8_MAX;
	static int16_t x20 = 0;

	t2 = (x17*((x18%x19)*x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x21 = 1520558LLU;
	static uint8_t x22 = 96U;
	int32_t x23 = 3;
	uint16_t x24 = 12U;

	t3 = (x21*((x22%x23)*x24));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint64_t x26 = 17668426738666751LLU;
	int64_t x27 = -29198117LL;
	static uint8_t x28 = UINT8_MAX;
	volatile uint64_t t4 = 972738LLU;

	t4 = (x25*((x26%x27)*x28));

	if (t4 != 6002667428926164479LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = 10697U;
	volatile int16_t x31 = INT16_MIN;
	uint64_t x32 = UINT64_MAX;
	uint64_t t5 = 1084564140314171LLU;

	t5 = (x29*((x30%x31)*x32));

	if (t5 != 22971632582656LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x34 = -4484528LL;
	int16_t x36 = -31;
	volatile int64_t t6 = 50LL;

	t6 = (x33*((x34%x35)*x36));

	if (t6 != -3047424LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = -464788393984LL;
	volatile uint8_t x39 = 2U;
	volatile int8_t x40 = 35;
	volatile int64_t t7 = -836LL;

	t7 = (x37*((x38%x39)*x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MIN;
	int64_t x43 = -36453968440LL;
	uint32_t x44 = 0U;
	volatile int64_t t8 = 892709LL;

	t8 = (x41*((x42%x43)*x44));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x50 = INT32_MIN;
	uint32_t x51 = 3U;
	volatile uint8_t x52 = UINT8_MAX;

	t9 = (x49*((x50%x51)*x52));

	if (t9 != 7210890U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = -1;
	uint64_t x55 = 39542386LLU;
	int16_t x56 = -21;

	t10 = (x53*((x54%x55)*x56));

	if (t10 != 435523767LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	uint16_t x58 = 18U;
	uint64_t x59 = 103595269LLU;
	int32_t x60 = INT32_MAX;
	static volatile uint64_t t11 = 1574889823318309LLU;

	t11 = (x57*((x58%x59)*x60));

	if (t11 != 18446739125907228928LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -1;
	int64_t x62 = -11071665LL;
	uint64_t x63 = 2LLU;
	int64_t x64 = 208287657891LL;
	volatile uint64_t t12 = 105132LLU;

	t12 = (x61*((x62%x63)*x64));

	if (t12 != 18446743865421893725LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = INT64_MIN;
	uint64_t x66 = UINT64_MAX;
	volatile uint32_t x68 = 6U;
	uint64_t t13 = 3174LLU;

	t13 = (x65*((x66%x67)*x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = UINT16_MAX;
	int64_t t14 = 257024LL;

	t14 = (x69*((x70%x71)*x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x73 = 5831U;
	int8_t x74 = -1;
	volatile int8_t x75 = INT8_MAX;
	static uint32_t x76 = 7876502U;
	static volatile uint32_t t15 = 29U;

	t15 = (x73*((x74%x75)*x76));

	if (t15 != 1316757094U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -1LL;
	int64_t x78 = 46170213LL;
	static uint64_t x79 = 11050LLU;
	uint64_t t16 = 61426521853273660LLU;

	t16 = (x77*((x78%x79)*x80));

	if (t16 != 108560384LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = 8111U;
	int64_t x86 = -50250856LL;
	uint8_t x87 = UINT8_MAX;
	volatile int32_t x88 = INT32_MAX;
	static int64_t t17 = 6LL;

	t17 = (x85*((x86%x87)*x88));

	if (t17 != -801239033597582LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -1;
	uint32_t x90 = 542U;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = -1LL;
	static uint64_t t18 = 825882493074497LLU;

	t18 = (x89*((x90%x91)*x92));

	if (t18 != 542LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x96 = INT8_MIN;
	volatile int64_t t19 = 96LL;

	t19 = (x93*((x94%x95)*x96));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	volatile uint32_t x98 = 1048U;
	uint64_t x99 = 33418491436LLU;
	static int32_t x100 = INT32_MIN;
	uint64_t t20 = 5049631519894817236LLU;

	t20 = (x97*((x98%x99)*x100));

	if (t20 != 288072046477312LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	uint16_t x102 = 2872U;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = INT8_MAX;
	int32_t t21 = 4;

	t21 = (x101*((x102%x103)*x104));

	if (t21 != -8509) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 156051U;
	int8_t x107 = INT8_MIN;
	volatile uint16_t x108 = UINT16_MAX;
	volatile uint32_t t22 = 43867172U;

	t22 = (x105*((x106%x107)*x108));

	if (t22 != 2147483648U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x109 = 53517298LL;
	uint32_t x110 = 1607329043U;
	int8_t x111 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile int64_t t23 = -936705LL;

	t23 = (x109*((x110%x111)*x112));

	if (t23 != 143835137302000394LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x113 = UINT32_MAX;
	uint64_t x114 = 1022025325359LLU;
	uint8_t x115 = 11U;
	uint64_t t24 = 40059110008LLU;

	t24 = (x113*((x114%x115)*x116));

	if (t24 != 18446744030759878661LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 1506744811LLU;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = INT32_MIN;
	volatile uint64_t t25 = 20683190LLU;

	t25 = (x117*((x118%x119)*x120));

	if (t25 != 192863335808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x121 = 82384245280677790LLU;
	volatile uint64_t t26 = 6628007913LLU;

	t26 = (x121*((x122%x123)*x124));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int16_t x128 = -245;
	volatile int32_t t27 = -350996;

	t27 = (x125*((x126%x127)*x128));

	if (t27 != 2695) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -1;
	uint64_t x130 = 1LLU;
	static int32_t x131 = INT32_MAX;
	static uint16_t x132 = 1U;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x129*((x130%x131)*x132));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -1481755976555244LL;

	t29 = (x133*((x134%x135)*x136));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x145 = 354;
	int64_t x146 = 1051029207771079237LL;
	int8_t x147 = -62;

	t30 = (x145*((x146%x147)*x148));

	if (t30 != 1224732506760828LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = 139LLU;
	volatile int64_t x150 = INT64_MAX;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t31 = 14997390LLU;

	t31 = (x149*((x150%x151)*x152));

	if (t31 != 18446743806585338624LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = -1;
	static int32_t x154 = 19677907;
	volatile int32_t x156 = -1;
	static volatile int32_t t32 = -2458882;

	t32 = (x153*((x154%x155)*x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = 1915;
	int8_t x158 = -1;
	volatile int16_t x159 = -1;
	int8_t x160 = INT8_MIN;
	volatile int32_t t33 = 103170;

	t33 = (x157*((x158%x159)*x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -1;
	volatile int8_t x164 = 2;
	int32_t t34 = -34346094;

	t34 = (x161*((x162%x163)*x164));

	if (t34 != -472) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = -9;
	volatile int32_t x167 = INT32_MIN;
	volatile uint8_t x168 = 3U;
	volatile int32_t t35 = 427372261;

	t35 = (x165*((x166%x167)*x168));

	if (t35 != -6885) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = -1;
	static int16_t x174 = INT16_MIN;
	uint16_t x175 = 1U;
	int16_t x176 = INT16_MIN;

	t36 = (x173*((x174%x175)*x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MAX;
	int64_t x178 = -1LL;
	uint16_t x179 = 3733U;
	volatile int16_t x180 = INT16_MIN;
	int64_t t37 = 2539014259631579598LL;

	t37 = (x177*((x178%x179)*x180));

	if (t37 != 4161536LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x182 = -1;
	volatile uint8_t x184 = 104U;
	volatile int32_t t38 = -15;

	t38 = (x181*((x182%x183)*x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = -1;
	static int64_t x187 = -1390955112LL;
	static int16_t x188 = -1;

	t39 = (x185*((x186%x187)*x188));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x189 = -7;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = -1;
	volatile int32_t t40 = -2135921;

	t40 = (x189*((x190%x191)*x192));

	if (t40 != 105) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x194 = INT64_MIN;
	int64_t x195 = 638345025LL;
	static volatile uint64_t x196 = UINT64_MAX;
	uint64_t t41 = 2382114LLU;

	t41 = (x193*((x194%x195)*x196));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = -1;
	static int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -1;

	t42 = (x201*((x202%x203)*x204));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x209 = INT32_MIN;
	int8_t x211 = 5;
	static int16_t x212 = 70;
	volatile int64_t t43 = -113650759LL;

	t43 = (x209*((x210%x211)*x212));

	if (t43 != 450971566080LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x229 = 13U;
	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MIN;
	int64_t t44 = 242320589966380440LL;

	t44 = (x229*((x230%x231)*x232));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x234 = 2394U;
	static int16_t x235 = INT16_MAX;
	volatile int32_t t45 = -45897;

	t45 = (x233*((x234%x235)*x236));

	if (t45 != -612864) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x242 = -1LL;
	uint64_t x244 = 3LLU;

	t46 = (x241*((x242%x243)*x244));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = INT8_MAX;
	static uint32_t x246 = UINT32_MAX;
	volatile int32_t x247 = INT32_MIN;
	static uint32_t x248 = 122U;
	uint32_t t47 = 10273221U;

	t47 = (x245*((x246%x247)*x248));

	if (t47 != 4294951802U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = -5;
	uint32_t x250 = 21602U;
	int16_t x251 = -1;
	static volatile int64_t t48 = 84015LL;

	t48 = (x249*((x250%x251)*x252));

	if (t48 != 108010LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = 15529196U;
	volatile uint8_t x254 = 4U;
	volatile int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MAX;
	static int64_t t49 = 10LL;

	t49 = (x253*((x254%x255)*x256));

	if (t49 != 133394777844231248LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x257 = -1;
	int64_t x258 = 849304LL;
	uint64_t x259 = 25LLU;

	t50 = (x257*((x258%x259)*x260));

	if (t50 != 4LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x261 = 3U;
	int8_t x262 = INT8_MIN;
	volatile uint32_t x263 = 43U;
	volatile uint32_t t51 = 10423650U;

	t51 = (x261*((x262%x263)*x264));

	if (t51 != 2147483597U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x265 = -2597;
	static uint8_t x266 = 6U;
	uint8_t x267 = 13U;
	volatile uint32_t x268 = 53453219U;

	t52 = (x265*((x266%x267)*x268));

	if (t52 != 315596966U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x269 = 890U;
	volatile int32_t x270 = -1;
	static int16_t x271 = -11;
	int16_t x272 = -11;
	volatile int32_t t53 = 4;

	t53 = (x269*((x270%x271)*x272));

	if (t53 != 9790) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x273 = 14;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	volatile uint16_t x276 = 1U;
	static volatile uint64_t t54 = 1603074181913548374LLU;

	t54 = (x273*((x274%x275)*x276));

	if (t54 != 458738LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = -2;

	t55 = (x277*((x278%x279)*x280));

	if (t55 != -65536) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = 1;
	int64_t x282 = INT64_MIN;
	volatile int16_t x283 = INT16_MIN;
	int64_t t56 = -2986276270648LL;

	t56 = (x281*((x282%x283)*x284));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x285 = -3872428238043122592LL;
	int64_t x287 = 2310375082LL;
	int64_t x288 = 0LL;
	volatile int64_t t57 = 1281695530039LL;

	t57 = (x285*((x286%x287)*x288));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x289 = 13393LLU;
	int64_t x292 = -20545LL;
	volatile uint64_t t58 = 242LLU;

	t58 = (x289*((x290%x291)*x292));

	if (t58 != 275159185LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x293 = -666;
	int16_t x294 = INT16_MIN;
	volatile uint32_t x295 = UINT32_MAX;

	t59 = (x293*((x294%x295)*x296));

	if (t59 != 2860426395648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = 18;
	volatile uint32_t x298 = 369U;
	uint64_t x299 = 929217535LLU;
	uint16_t x300 = 600U;
	uint64_t t60 = 61034600473468LLU;

	t60 = (x297*((x298%x299)*x300));

	if (t60 != 3985200LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x302 = -1LL;
	volatile int32_t x303 = INT32_MAX;
	uint32_t x304 = UINT32_MAX;
	static int64_t t61 = 1LL;

	t61 = (x301*((x302%x303)*x304));

	if (t61 != 140737488322560LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x305 = -456555168LL;
	uint64_t x306 = 382961362LLU;
	volatile int16_t x307 = -1;
	uint64_t x308 = 439569211815006LLU;
	static volatile uint64_t t62 = 0LLU;

	t62 = (x305*((x306%x307)*x308));

	if (t62 != 17320271357087774336LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x313 = 6U;
	static int64_t x314 = INT64_MAX;
	static volatile int32_t x315 = 140717841;
	int16_t x316 = INT16_MIN;
	volatile int64_t t63 = -2275173900LL;

	t63 = (x313*((x314%x315)*x316));

	if (t63 != -5004050497536LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x317 = -53;
	static volatile uint32_t x318 = 269237U;
	uint8_t x319 = 125U;
	volatile int16_t x320 = INT16_MAX;

	t64 = (x317*((x318%x319)*x320));

	if (t64 != 4100462384U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x321 = INT16_MIN;
	uint8_t x322 = UINT8_MAX;
	uint8_t x324 = 1U;
	volatile int32_t t65 = -9636;

	t65 = (x321*((x322%x323)*x324));

	if (t65 != -8355840) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x327 = 9341U;
	int32_t x328 = -1;
	static volatile int32_t t66 = 1352829;

	t66 = (x325*((x326%x327)*x328));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x330 = -1;
	int64_t x331 = -1LL;
	int64_t t67 = -134065033379787LL;

	t67 = (x329*((x330%x331)*x332));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x333 = -1;
	int32_t x334 = INT32_MAX;
	static int8_t x335 = -10;

	t68 = (x333*((x334%x335)*x336));

	if (t68 != 896) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x337 = 4668U;
	int64_t x338 = -1LL;
	int8_t x339 = INT8_MIN;
	volatile uint32_t x340 = 243953275U;
	int64_t t69 = -143315141900717LL;

	t69 = (x337*((x338%x339)*x340));

	if (t69 != -1138773887700LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x341 = INT32_MAX;
	static volatile int64_t x342 = 1506449645LL;
	int16_t x343 = INT16_MIN;
	static int32_t x344 = -3;

	t70 = (x341*((x342%x343)*x344));

	if (t70 != -41109279454521LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = INT32_MAX;
	int16_t x347 = INT16_MIN;
	static int32_t t71 = -381696;

	t71 = (x345*((x346%x347)*x348));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x350 = INT64_MIN;
	static uint32_t x351 = UINT32_MAX;
	uint16_t x352 = 1697U;
	int64_t t72 = 5347LL;

	t72 = (x349*((x350%x351)*x352));

	if (t72 != -10932839251968LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x353 = 1076252491967LL;
	volatile uint8_t x354 = 0U;
	uint64_t x355 = UINT64_MAX;
	static volatile uint8_t x356 = 1U;
	volatile uint64_t t73 = 2627138351570LLU;

	t73 = (x353*((x354%x355)*x356));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x357 = 96;
	uint32_t x358 = 25254U;
	uint16_t x359 = 306U;
	static int8_t x360 = -1;

	t74 = (x357*((x358%x359)*x360));

	if (t74 != 4294951744U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x361 = INT8_MAX;
	static uint64_t x362 = UINT64_MAX;
	uint8_t x364 = 6U;
	volatile uint64_t t75 = 68089794134LLU;

	t75 = (x361*((x362%x363)*x364));

	if (t75 != 1524LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = -1LL;
	volatile int8_t x367 = INT8_MAX;
	int16_t x368 = INT16_MIN;
	volatile int64_t t76 = 362318031672LL;

	t76 = (x365*((x366%x367)*x368));

	if (t76 != 140737488322560LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x369 = UINT16_MAX;
	static volatile uint8_t x370 = 106U;
	volatile uint32_t x371 = 457889U;
	static int32_t x372 = 20243;
	volatile uint32_t t77 = 26U;

	t77 = (x369*((x370%x371)*x372));

	if (t77 != 3183297058U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = UINT64_MAX;
	int8_t x374 = -1;
	int8_t x375 = INT8_MIN;
	static int32_t x376 = -1;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x373*((x374%x375)*x376));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x382 = 15;

	t79 = (x381*((x382%x383)*x384));

	if (t79 != -491505) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x385 = 494562;
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MAX;
	uint32_t x388 = UINT32_MAX;
	int64_t t80 = 10LL;

	t80 = (x385*((x386%x387)*x388));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x390 = 5U;
	uint16_t x391 = UINT16_MAX;
	int8_t x392 = -1;
	volatile uint32_t t81 = 28U;

	t81 = (x389*((x390%x391)*x392));

	if (t81 != 4294963636U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x394 = -1LL;
	int16_t x396 = INT16_MIN;
	static int64_t t82 = 4025865557LL;

	t82 = (x393*((x394%x395)*x396));

	if (t82 != -70368744177664LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = INT8_MAX;
	volatile int8_t x398 = INT8_MIN;
	static uint8_t x400 = 15U;
	static uint32_t t83 = 32652940U;

	t83 = (x397*((x398%x399)*x400));

	if (t83 != 114300U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x401 = UINT16_MAX;
	volatile uint8_t x404 = 9U;
	volatile int32_t t84 = -48631090;

	t84 = (x401*((x402%x403)*x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 909U;
	uint16_t x410 = 177U;
	int8_t x411 = -1;
	static volatile uint64_t t85 = 2051125705291709365LLU;

	t85 = (x409*((x410%x411)*x412));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x414 = INT8_MAX;
	int32_t x415 = -1;
	int64_t x416 = -1LL;
	int64_t t86 = -34586529774540722LL;

	t86 = (x413*((x414%x415)*x416));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x422 = 1U;
	uint8_t x423 = 15U;
	int16_t x424 = INT16_MIN;

	t87 = (x421*((x422%x423)*x424));

	if (t87 != 32768LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x425 = INT16_MAX;
	uint16_t x428 = 18U;

	t88 = (x425*((x426%x427)*x428));

	if (t88 != -1769418) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x429 = INT8_MIN;
	uint64_t x430 = 5388392118185901912LLU;
	int16_t x431 = -1;
	int16_t x432 = 7;
	volatile uint64_t t89 = 84709661LLU;

	t89 = (x429*((x430%x431)*x432));

	if (t89 != 5047609417334410240LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x433 = 667847LLU;
	volatile int64_t x434 = 166499968860LL;
	volatile uint64_t x435 = UINT64_MAX;
	static int32_t x436 = INT32_MAX;
	volatile uint64_t t90 = 11295049981512LLU;

	t90 = (x433*((x434%x435)*x436));

	if (t90 != 16141463603154118524LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x437 = -1;
	static volatile uint8_t x439 = 5U;
	int16_t x440 = 0;
	int32_t t91 = 131;

	t91 = (x437*((x438%x439)*x440));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x445 = 392;
	int32_t x446 = -1;
	int64_t x447 = -1LL;
	volatile int64_t t92 = 84828102409660LL;

	t92 = (x445*((x446%x447)*x448));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x450 = 20;
	int8_t x451 = -1;
	volatile int64_t t93 = -239275LL;

	t93 = (x449*((x450%x451)*x452));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x454 = 17439U;
	uint16_t x455 = 41U;
	static int32_t x456 = -1;
	uint32_t t94 = 1U;

	t94 = (x453*((x454%x455)*x456));

	if (t94 != 4294967212U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x457 = INT64_MIN;
	static int8_t x458 = -1;
	volatile int16_t x459 = -1;
	volatile uint8_t x460 = 70U;
	volatile int64_t t95 = -467477388620829LL;

	t95 = (x457*((x458%x459)*x460));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x461 = 355U;
	volatile int32_t x462 = INT32_MIN;
	int32_t x463 = INT32_MIN;
	uint16_t x464 = 9520U;
	uint32_t t96 = 8336357U;

	t96 = (x461*((x462%x463)*x464));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x473 = 993440874LL;
	volatile int64_t x475 = -1LL;
	int16_t x476 = -1;
	int64_t t97 = 264040293659LL;

	t97 = (x473*((x474%x475)*x476));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x477 = INT32_MAX;
	static uint8_t x478 = 2U;
	int64_t x479 = 10330LL;
	int16_t x480 = INT16_MIN;

	t98 = (x477*((x478%x479)*x480));

	if (t98 != -140737488289792LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x481 = 156949856;
	int32_t x482 = INT32_MIN;
	int8_t x483 = -1;
	static volatile int32_t x484 = INT32_MIN;
	static volatile int32_t t99 = -5565683;

	t99 = (x481*((x482%x483)*x484));

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

