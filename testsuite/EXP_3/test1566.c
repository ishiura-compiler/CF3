#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = INT32_MIN;
uint64_t t4 = 1385928542LLU;
int8_t x37 = INT8_MIN;
int32_t x39 = INT32_MAX;
int8_t x40 = -25;
static int16_t x48 = -15;
static int64_t x65 = -47383223053071586LL;
static int64_t x66 = -154034529062881LL;
static int8_t x68 = INT8_MIN;
static int16_t x72 = INT16_MIN;
int32_t t14 = 342055;
int64_t x85 = -22705LL;
int32_t x88 = -7;
uint64_t t15 = 8656526862115140040LLU;
int8_t x90 = INT8_MIN;
int32_t x91 = INT32_MIN;
volatile int32_t t16 = 106231;
static int32_t x93 = -5936;
int8_t x95 = INT8_MIN;
volatile uint32_t x98 = 37U;
uint8_t x106 = 83U;
static int8_t x107 = INT8_MAX;
static volatile uint8_t x108 = 2U;
volatile uint64_t t21 = 9226824438281LLU;
uint32_t t22 = 530219254U;
uint64_t x125 = 564944LLU;
int16_t x140 = INT16_MIN;
static uint64_t t27 = 463912734659036LLU;
int8_t x141 = 12;
volatile int64_t x154 = INT64_MIN;
int64_t x155 = 5044199904LL;
volatile int32_t x156 = -14;
int32_t x160 = INT32_MIN;
volatile int32_t t32 = -800950;
uint8_t x170 = 3U;
static volatile uint64_t t35 = 2947381LLU;
static uint32_t t37 = 19548323U;
volatile uint64_t t38 = 149247LLU;
volatile int32_t t39 = 121742;
int16_t x198 = INT16_MIN;
volatile int32_t t40 = -361675;
int64_t x219 = -214070753518603098LL;
int64_t x223 = -21LL;
volatile int16_t x229 = INT16_MIN;
uint64_t t49 = 24LLU;
int16_t x246 = 7;
volatile uint32_t t50 = 865U;
volatile uint64_t x258 = 136455142833LLU;
volatile uint64_t t51 = 3606306LLU;
int64_t x265 = INT64_MAX;
int64_t x266 = INT64_MIN;
int32_t x275 = 812;
int64_t t58 = 40116LL;
int8_t x301 = INT8_MIN;
int64_t x302 = INT64_MIN;
static volatile uint8_t x316 = 5U;
static int64_t t62 = -72534472LL;
int64_t x320 = -1LL;
static int64_t x322 = INT64_MAX;
uint32_t x326 = 1U;
static uint64_t x331 = UINT64_MAX;
int8_t x340 = 1;
int64_t x351 = INT64_MIN;
uint64_t x354 = 4LLU;
volatile int64_t x355 = -1LL;
volatile int64_t x365 = 1477274140LL;
uint32_t x370 = 14146U;
uint64_t x382 = 88938551413859674LLU;
uint32_t x384 = UINT32_MAX;
volatile uint32_t t76 = 282202U;
int32_t x392 = INT32_MAX;
int32_t t77 = -2247089;
int16_t x395 = -1;
volatile int32_t x396 = INT32_MAX;
int8_t x401 = INT8_MIN;
static int16_t x403 = -1;
int16_t x407 = 5335;
static volatile uint64_t x408 = 803543225422LLU;
int16_t x419 = -1;
uint32_t x426 = 84U;
int32_t x427 = INT32_MAX;
volatile uint32_t t84 = 795345U;
volatile uint8_t x432 = 1U;
volatile int32_t x435 = 75132299;
int8_t x440 = 44;
volatile int32_t t90 = -261740667;
uint16_t x469 = 26U;
static uint32_t x472 = UINT32_MAX;
int64_t x474 = -25189899968481LL;
uint32_t x475 = 12U;
volatile int64_t t94 = 388LL;
uint64_t x484 = 168578669278456LLU;
static uint64_t x486 = 3537LLU;
int16_t x487 = -1;
static volatile int16_t x488 = -3;
volatile uint8_t x491 = 0U;
volatile uint16_t x492 = UINT16_MAX;
static volatile int16_t x497 = INT16_MIN;
volatile int32_t t98 = -95143188;
uint8_t x502 = UINT8_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static uint64_t x2 = UINT64_MAX;
	int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 41498407LLU;

	t0 = ((x1/x2)<<(x3<=x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	int8_t x7 = 20;
	volatile uint16_t x8 = 10U;
	static uint32_t t1 = 45U;

	t1 = ((x5/x6)<<(x7<=x8));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int8_t x10 = -1;
	uint16_t x11 = 3227U;
	static volatile uint8_t x12 = 2U;
	volatile int64_t t2 = -26426LL;

	t2 = ((x9/x10)<<(x11<=x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x14 = 300756U;
	int32_t x15 = 12200;
	int16_t x16 = 1151;
	volatile uint32_t t3 = 5098U;

	t3 = ((x13/x14)<<(x15<=x16));

	if (t3 != 7140U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 113LLU;
	int16_t x18 = -222;
	int64_t x19 = INT64_MAX;
	int16_t x20 = INT16_MIN;

	t4 = ((x17/x18)<<(x19<=x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x38 = INT32_MAX;
	volatile int32_t t5 = -349620747;

	t5 = ((x37/x38)<<(x39<=x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x41 = -11457;
	uint32_t x42 = UINT32_MAX;
	uint8_t x43 = 0U;
	int64_t x44 = -56567853510309667LL;
	volatile uint32_t t6 = 106U;

	t6 = ((x41/x42)<<(x43<=x44));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = -1;
	volatile int64_t x46 = INT64_MIN;
	int64_t x47 = -1LL;
	static volatile int64_t t7 = -16633321LL;

	t7 = ((x45/x46)<<(x47<=x48));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x57 = INT16_MIN;
	uint32_t x58 = 30111U;
	int64_t x59 = INT64_MAX;
	int16_t x60 = INT16_MIN;
	uint32_t t8 = 2052824U;

	t8 = ((x57/x58)<<(x59<=x60));

	if (t8 != 142636U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = 497486057LLU;
	static int8_t x62 = -1;
	volatile uint8_t x63 = UINT8_MAX;
	int32_t x64 = INT32_MIN;
	volatile uint64_t t9 = 15LLU;

	t9 = ((x61/x62)<<(x63<=x64));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x67 = INT64_MAX;
	int64_t t10 = 2050398965018680LL;

	t10 = ((x65/x66)<<(x67<=x68));

	if (t10 != 307LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x69 = 60U;
	static uint64_t x70 = UINT64_MAX;
	int32_t x71 = -451;
	static uint64_t t11 = 611LLU;

	t11 = ((x69/x70)<<(x71<=x72));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MIN;
	int32_t x75 = -23;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t12 = -1728;

	t12 = ((x73/x74)<<(x75<=x76));

	if (t12 != 131072) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x77 = INT8_MIN;
	static int64_t x78 = INT64_MIN;
	uint32_t x79 = UINT32_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile int64_t t13 = -476527720727444786LL;

	t13 = ((x77/x78)<<(x79<=x80));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x81 = 99U;
	int32_t x82 = INT32_MIN;
	static int8_t x83 = INT8_MIN;
	uint16_t x84 = 3043U;

	t14 = ((x81/x82)<<(x83<=x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x86 = 22628261LLU;
	volatile int32_t x87 = 29;

	t15 = ((x85/x86)<<(x87<=x88));

	if (t15 != 815208206839LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MIN;
	volatile int32_t x92 = -1;

	t16 = ((x89/x90)<<(x91<=x92));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x94 = INT8_MIN;
	int16_t x96 = INT16_MIN;
	static int32_t t17 = 94218787;

	t17 = ((x93/x94)<<(x95<=x96));

	if (t17 != 46) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x97 = 155930535U;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = -1;
	uint32_t t18 = 21697U;

	t18 = ((x97/x98)<<(x99<=x100));

	if (t18 != 4214338U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = 1;
	int32_t t19 = -27;

	t19 = ((x105/x106)<<(x107<=x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x109 = INT16_MAX;
	int64_t x110 = INT64_MIN;
	static int32_t x111 = 202411;
	uint32_t x112 = 24109348U;
	int64_t t20 = 54616933LL;

	t20 = ((x109/x110)<<(x111<=x112));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MIN;
	static uint64_t x114 = UINT64_MAX;
	uint8_t x115 = 4U;
	int32_t x116 = -249;

	t21 = ((x113/x114)<<(x115<=x116));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -25;
	uint32_t x118 = 24939U;
	int64_t x119 = 1LL;
	int64_t x120 = -1LL;

	t22 = ((x117/x118)<<(x119<=x120));

	if (t22 != 172218U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	static int32_t x122 = INT32_MIN;
	volatile int32_t x123 = INT32_MAX;
	static int8_t x124 = -1;
	int64_t t23 = -2200466639869LL;

	t23 = ((x121/x122)<<(x123<=x124));

	if (t23 != 4294967296LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x126 = 11050;
	volatile int32_t x127 = INT32_MIN;
	static uint64_t x128 = 273757035418LLU;
	static volatile uint64_t t24 = 3960909LLU;

	t24 = ((x125/x126)<<(x127<=x128));

	if (t24 != 51LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = INT32_MIN;
	int64_t x132 = -1LL;
	uint32_t t25 = 1045U;

	t25 = ((x129/x130)<<(x131<=x132));

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	volatile int8_t x135 = -1;
	int16_t x136 = -1;
	volatile int32_t t26 = -22777;

	t26 = ((x133/x134)<<(x135<=x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x137 = UINT8_MAX;
	volatile uint64_t x138 = 5641950044370492LLU;
	int16_t x139 = -1;

	t27 = ((x137/x138)<<(x139<=x140));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x142 = 1;
	int32_t x143 = -287;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t28 = -906;

	t28 = ((x141/x142)<<(x143<=x144));

	if (t28 != 24) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = -1LL;
	volatile int32_t x150 = INT32_MAX;
	int64_t x151 = INT64_MAX;
	static uint64_t x152 = 874965187551025LLU;
	volatile int64_t t29 = 1486434072LL;

	t29 = ((x149/x150)<<(x151<=x152));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = INT64_MAX;
	int64_t t30 = -398854334LL;

	t30 = ((x153/x154)<<(x155<=x156));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MIN;
	volatile uint8_t x159 = 14U;
	volatile int64_t t31 = -10651896LL;

	t31 = ((x157/x158)<<(x159<=x160));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x161 = UINT16_MAX;
	int8_t x162 = INT8_MAX;
	uint64_t x163 = 62500LLU;
	uint32_t x164 = 201U;

	t32 = ((x161/x162)<<(x163<=x164));

	if (t32 != 516) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = 0U;
	static int8_t x166 = INT8_MIN;
	int32_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int32_t t33 = -242080385;

	t33 = ((x165/x166)<<(x167<=x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x169 = INT32_MAX;
	static int32_t x171 = 1257;
	static int32_t x172 = -3538024;
	int32_t t34 = -766370758;

	t34 = ((x169/x170)<<(x171<=x172));

	if (t34 != 715827882) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x173 = INT16_MIN;
	uint64_t x174 = 46457832LLU;
	static uint8_t x175 = 16U;
	volatile int64_t x176 = INT64_MAX;

	t35 = ((x173/x174)<<(x175<=x176));

	if (t35 != 794128493714LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = -1;
	uint16_t x179 = 2823U;
	int8_t x180 = INT8_MAX;
	static int32_t t36 = -19876;

	t36 = ((x177/x178)<<(x179<=x180));

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = -13309;
	uint32_t x186 = 1482U;
	int32_t x187 = -369624090;
	volatile int16_t x188 = -1;

	t37 = ((x185/x186)<<(x187<=x188));

	if (t37 != 5796158U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x189 = -1;
	volatile uint64_t x190 = 217524996LLU;
	int8_t x191 = INT8_MAX;
	uint8_t x192 = 3U;

	t38 = ((x189/x190)<<(x191<=x192));

	if (t38 != 84802870534LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = INT32_MAX;
	uint8_t x194 = 30U;
	int8_t x195 = 1;
	volatile int32_t x196 = INT32_MAX;

	t39 = ((x193/x194)<<(x195<=x196));

	if (t39 != 143165576) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = 0U;
	int64_t x199 = INT64_MAX;
	static int64_t x200 = 12797LL;

	t40 = ((x197/x198)<<(x199<=x200));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x201 = 1898126337547749118LLU;
	uint16_t x202 = 273U;
	uint64_t x203 = 1601274474776325LLU;
	int32_t x204 = -1;
	uint64_t t41 = 1355LLU;

	t41 = ((x201/x202)<<(x203<=x204));

	if (t41 != 13905687454562264LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x205 = -62208;
	uint64_t x206 = 4044879LLU;
	uint8_t x207 = 25U;
	int32_t x208 = 892087;
	volatile uint64_t t42 = 453912904571436043LLU;

	t42 = ((x205/x206)<<(x207<=x208));

	if (t42 != 9121036289940LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x209 = 30U;
	volatile int32_t x210 = INT32_MAX;
	volatile int32_t x211 = -545;
	int16_t x212 = INT16_MAX;
	int32_t t43 = 10164152;

	t43 = ((x209/x210)<<(x211<=x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 599410787U;
	uint16_t x214 = 589U;
	uint8_t x215 = UINT8_MAX;
	volatile int8_t x216 = INT8_MIN;
	uint32_t t44 = 12U;

	t44 = ((x213/x214)<<(x215<=x216));

	if (t44 != 1017675U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 10U;
	static volatile int32_t x220 = INT32_MAX;
	volatile uint64_t t45 = 2LLU;

	t45 = ((x217/x218)<<(x219<=x220));

	if (t45 != 3689348814741910322LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x221 = 2374U;
	volatile uint32_t x222 = 3404845U;
	volatile int16_t x224 = 7804;
	uint32_t t46 = 5142U;

	t46 = ((x221/x222)<<(x223<=x224));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x230 = UINT64_MAX;
	static uint8_t x231 = 1U;
	int64_t x232 = -1LL;
	uint64_t t47 = 987264183216628304LLU;

	t47 = ((x229/x230)<<(x231<=x232));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = INT16_MIN;
	int16_t x239 = 1;
	int32_t x240 = INT32_MIN;
	volatile int32_t t48 = 4;

	t48 = ((x237/x238)<<(x239<=x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = 38915756;
	uint64_t x242 = UINT64_MAX;
	uint32_t x243 = 35943709U;
	int16_t x244 = INT16_MIN;

	t49 = ((x241/x242)<<(x243<=x244));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x245 = UINT32_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile uint16_t x248 = 15U;

	t50 = ((x245/x246)<<(x247<=x248));

	if (t50 != 613566756U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x257 = 1LLU;
	uint16_t x259 = 522U;
	volatile int16_t x260 = INT16_MAX;

	t51 = ((x257/x258)<<(x259<=x260));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x261 = 6277139U;
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = -1;
	static int8_t x264 = 3;
	volatile int64_t t52 = -807LL;

	t52 = ((x261/x262)<<(x263<=x264));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x267 = INT64_MIN;
	int16_t x268 = INT16_MAX;
	int64_t t53 = 14LL;

	t53 = ((x265/x266)<<(x267<=x268));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x273 = INT64_MAX;
	static uint16_t x274 = 7975U;
	volatile uint64_t x276 = 65934734LLU;
	static volatile int64_t t54 = -147428423LL;

	t54 = ((x273/x274)<<(x275<=x276));

	if (t54 != 2313071357204958LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = 1536665826560386LL;
	volatile uint8_t x279 = 75U;
	int16_t x280 = -114;
	volatile int64_t t55 = 49414916869446787LL;

	t55 = ((x277/x278)<<(x279<=x280));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x281 = INT32_MAX;
	int64_t x282 = 6LL;
	static int64_t x283 = INT64_MAX;
	uint8_t x284 = UINT8_MAX;
	int64_t t56 = 7136LL;

	t56 = ((x281/x282)<<(x283<=x284));

	if (t56 != 357913941LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	static int8_t x287 = -1;
	volatile uint16_t x288 = UINT16_MAX;
	int32_t t57 = 1499844;

	t57 = ((x285/x286)<<(x287<=x288));

	if (t57 != 512) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = -1;
	int64_t x290 = 214709669494654LL;
	uint64_t x291 = UINT64_MAX;
	uint16_t x292 = UINT16_MAX;

	t58 = ((x289/x290)<<(x291<=x292));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x293 = 260740037U;
	int64_t x294 = INT64_MIN;
	static int16_t x295 = INT16_MIN;
	int16_t x296 = -1;
	int64_t t59 = -158362183945992LL;

	t59 = ((x293/x294)<<(x295<=x296));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x297 = 89U;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = 8672;
	int16_t x300 = INT16_MIN;
	volatile int32_t t60 = 939101912;

	t60 = ((x297/x298)<<(x299<=x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x303 = UINT64_MAX;
	uint64_t x304 = 1847135844LLU;
	volatile int64_t t61 = 13028LL;

	t61 = ((x301/x302)<<(x303<=x304));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x313 = -217415371381077735LL;
	volatile int64_t x314 = INT64_MAX;
	int8_t x315 = 1;

	t62 = ((x313/x314)<<(x315<=x316));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MAX;
	uint16_t x319 = UINT16_MAX;
	static int32_t t63 = 191;

	t63 = ((x317/x318)<<(x319<=x320));

	if (t63 != 65538) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x321 = UINT32_MAX;
	static volatile uint32_t x323 = UINT32_MAX;
	static uint16_t x324 = 3U;
	volatile int64_t t64 = 1LL;

	t64 = ((x321/x322)<<(x323<=x324));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x325 = 147965U;
	int64_t x327 = -12LL;
	volatile int16_t x328 = -1;
	uint32_t t65 = 3944U;

	t65 = ((x325/x326)<<(x327<=x328));

	if (t65 != 295930U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = INT64_MAX;
	uint64_t x330 = 35801338464812123LLU;
	static int8_t x332 = 1;
	volatile uint64_t t66 = 149350056090116789LLU;

	t66 = ((x329/x330)<<(x331<=x332));

	if (t66 != 257LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x333 = INT32_MAX;
	static int32_t x334 = INT32_MAX;
	uint8_t x335 = 1U;
	static uint16_t x336 = 129U;
	volatile int32_t t67 = -14;

	t67 = ((x333/x334)<<(x335<=x336));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = INT16_MAX;
	uint32_t x338 = UINT32_MAX;
	int8_t x339 = -1;
	uint32_t t68 = 5U;

	t68 = ((x337/x338)<<(x339<=x340));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x341 = -1LL;
	int32_t x342 = -1;
	int16_t x343 = INT16_MIN;
	int32_t x344 = -9;
	int64_t t69 = -234719802497791088LL;

	t69 = ((x341/x342)<<(x343<=x344));

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x349 = 4LL;
	int8_t x350 = INT8_MAX;
	int16_t x352 = INT16_MIN;
	volatile int64_t t70 = -9073066372LL;

	t70 = ((x349/x350)<<(x351<=x352));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x353 = INT16_MAX;
	static int8_t x356 = INT8_MAX;
	uint64_t t71 = 14056423LLU;

	t71 = ((x353/x354)<<(x355<=x356));

	if (t71 != 16382LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = UINT64_MAX;
	int64_t t72 = 656179484LL;

	t72 = ((x365/x366)<<(x367<=x368));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x369 = -1;
	int64_t x371 = 1614126974LL;
	uint16_t x372 = 19U;
	static uint32_t t73 = 67891U;

	t73 = ((x369/x370)<<(x371<=x372));

	if (t73 != 303617U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x377 = INT32_MAX;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = -1;
	int16_t x380 = INT16_MIN;
	static volatile int32_t t74 = 140072799;

	t74 = ((x377/x378)<<(x379<=x380));

	if (t74 != 8421504) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x381 = UINT64_MAX;
	static uint64_t x383 = 203002529276972252LLU;
	uint64_t t75 = 354LLU;

	t75 = ((x381/x382)<<(x383<=x384));

	if (t75 != 207LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = INT16_MIN;
	static uint32_t x386 = 209925571U;
	int8_t x387 = INT8_MAX;
	int32_t x388 = -1;

	t76 = ((x385/x386)<<(x387<=x388));

	if (t76 != 20U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;

	t77 = ((x389/x390)<<(x391<=x392));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x393 = INT16_MIN;
	static int8_t x394 = -15;
	int32_t t78 = -477441134;

	t78 = ((x393/x394)<<(x395<=x396));

	if (t78 != 4368) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x402 = -30382;
	static volatile int8_t x404 = INT8_MAX;
	volatile int32_t t79 = -1176728;

	t79 = ((x401/x402)<<(x403<=x404));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x405 = UINT32_MAX;
	uint32_t x406 = 4260U;
	static uint32_t t80 = 10895U;

	t80 = ((x405/x406)<<(x407<=x408));

	if (t80 != 2016416U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x409 = UINT32_MAX;
	int8_t x410 = -53;
	int32_t x411 = INT32_MIN;
	static uint64_t x412 = UINT64_MAX;
	uint32_t t81 = 845892956U;

	t81 = ((x409/x410)<<(x411<=x412));

	if (t81 != 2U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x417 = 1707724782134954LLU;
	int64_t x418 = INT64_MIN;
	int32_t x420 = INT32_MIN;
	volatile uint64_t t82 = 115384125925654LLU;

	t82 = ((x417/x418)<<(x419<=x420));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = INT32_MAX;
	static volatile uint64_t x422 = 100LLU;
	int8_t x423 = INT8_MIN;
	int16_t x424 = -1;
	uint64_t t83 = 6461987LLU;

	t83 = ((x421/x422)<<(x423<=x424));

	if (t83 != 42949672LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x425 = INT16_MIN;
	int32_t x428 = INT32_MAX;

	t84 = ((x425/x426)<<(x427<=x428));

	if (t84 != 102260344U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x429 = 1;
	volatile int64_t x430 = INT64_MIN;
	uint16_t x431 = UINT16_MAX;
	volatile int64_t t85 = 8059506784678LL;

	t85 = ((x429/x430)<<(x431<=x432));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x433 = 2547424883924LL;
	int64_t x434 = -2385091003976588557LL;
	int64_t x436 = 172947156683957LL;
	volatile int64_t t86 = 3LL;

	t86 = ((x433/x434)<<(x435<=x436));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x437 = INT16_MAX;
	static volatile int64_t x438 = INT64_MIN;
	static int32_t x439 = INT32_MAX;
	int64_t t87 = -727992268974LL;

	t87 = ((x437/x438)<<(x439<=x440));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x441 = 5;
	uint32_t x442 = UINT32_MAX;
	static int64_t x443 = INT64_MIN;
	static volatile uint64_t x444 = UINT64_MAX;
	volatile uint32_t t88 = 1192320U;

	t88 = ((x441/x442)<<(x443<=x444));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x449 = 62;
	uint64_t x450 = 11LLU;
	int64_t x451 = -1LL;
	uint16_t x452 = 499U;
	uint64_t t89 = 13726LLU;

	t89 = ((x449/x450)<<(x451<=x452));

	if (t89 != 10LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x457 = INT8_MIN;
	int8_t x458 = -1;
	static uint32_t x459 = UINT32_MAX;
	static uint16_t x460 = 4383U;

	t90 = ((x457/x458)<<(x459<=x460));

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x461 = -1LL;
	static int8_t x462 = INT8_MIN;
	int32_t x463 = -15481471;
	int16_t x464 = INT16_MAX;
	int64_t t91 = 415974LL;

	t91 = ((x461/x462)<<(x463<=x464));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x465 = INT8_MIN;
	volatile int16_t x466 = INT16_MAX;
	static int16_t x467 = -1;
	int16_t x468 = INT16_MAX;
	static int32_t t92 = -836319;

	t92 = ((x465/x466)<<(x467<=x468));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x470 = INT16_MIN;
	int32_t x471 = -94760077;
	int32_t t93 = 5014278;

	t93 = ((x469/x470)<<(x471<=x472));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x473 = UINT32_MAX;
	volatile uint8_t x476 = 6U;

	t94 = ((x473/x474)<<(x475<=x476));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x481 = UINT32_MAX;
	int64_t x482 = -8915765224951051LL;
	uint8_t x483 = 0U;
	static int64_t t95 = 7317288701926LL;

	t95 = ((x481/x482)<<(x483<=x484));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x485 = UINT16_MAX;
	static volatile uint64_t t96 = 14LLU;

	t96 = ((x485/x486)<<(x487<=x488));

	if (t96 != 18LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x489 = INT8_MIN;
	uint32_t x490 = 691U;
	uint32_t t97 = 298305702U;

	t97 = ((x489/x490)<<(x491<=x492));

	if (t97 != 12431164U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x498 = -1;
	int64_t x499 = 25056157155120090LL;
	int8_t x500 = -44;

	t98 = ((x497/x498)<<(x499<=x500));

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x501 = INT8_MIN;
	int8_t x503 = 9;
	int16_t x504 = 1;
	static volatile int32_t t99 = -274;

	t99 = ((x501/x502)<<(x503<=x504));

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

