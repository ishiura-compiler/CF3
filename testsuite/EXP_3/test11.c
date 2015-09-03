#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 4151U;
uint64_t x19 = 20844821870LLU;
uint64_t t2 = 26907466374941618LLU;
int8_t x22 = INT8_MIN;
static int8_t x38 = INT8_MIN;
uint32_t x60 = 748U;
static volatile int32_t t9 = 19;
volatile int16_t x72 = -17;
int64_t x75 = INT64_MIN;
int32_t x77 = INT32_MAX;
uint32_t x79 = 460313958U;
volatile uint32_t x90 = 29U;
volatile uint8_t x91 = 9U;
uint8_t x105 = 45U;
int8_t x114 = -7;
int64_t t19 = -845913550533663899LL;
int16_t x122 = -10256;
int8_t x131 = INT8_MAX;
static uint32_t x132 = 4177064U;
uint8_t x141 = 0U;
volatile int64_t t25 = 109640717033070113LL;
uint64_t x156 = UINT64_MAX;
uint64_t t27 = 43LLU;
volatile int8_t x157 = 1;
static int8_t x174 = INT8_MIN;
static volatile uint16_t x175 = 2419U;
int32_t t31 = -113263;
static volatile int8_t x180 = INT8_MAX;
static int32_t t32 = 666;
int8_t x183 = INT8_MIN;
int32_t x186 = INT32_MIN;
uint64_t x187 = 2LLU;
int16_t x190 = 135;
volatile uint32_t x193 = 3U;
volatile int8_t x195 = -4;
int16_t x203 = 4;
int64_t t37 = 3520910LL;
static uint32_t x208 = 12599U;
int64_t x209 = -1LL;
int32_t x212 = 29;
static int64_t x213 = -58446293327LL;
volatile int32_t x215 = INT32_MIN;
uint64_t x216 = 1554008LLU;
uint64_t t40 = 8081033032330LLU;
int16_t x218 = -1;
int64_t x220 = INT64_MAX;
int8_t x222 = INT8_MIN;
volatile uint32_t x226 = UINT32_MAX;
volatile int8_t x227 = -1;
uint64_t x233 = 140104492LLU;
static int32_t x234 = INT32_MAX;
static uint16_t x241 = UINT16_MAX;
uint32_t x242 = 760177U;
int16_t x249 = 1601;
uint64_t x258 = 284698243LLU;
volatile int8_t x270 = INT8_MIN;
int32_t x272 = -50393352;
static int16_t x277 = INT16_MIN;
static volatile int8_t x278 = INT8_MAX;
static int16_t x281 = -14;
uint16_t x282 = 446U;
int64_t t52 = 5827867LL;
uint16_t x299 = 35U;
int16_t x300 = INT16_MIN;
int64_t x313 = -978854752912LL;
int32_t x314 = INT32_MIN;
int32_t x316 = -441463;
volatile uint64_t t57 = 4066236493118933LLU;
uint8_t x318 = UINT8_MAX;
int16_t x320 = INT16_MAX;
int16_t x328 = INT16_MIN;
uint64_t t62 = 10157449087LLU;
uint32_t x362 = UINT32_MAX;
volatile uint8_t x363 = UINT8_MAX;
int64_t x366 = INT64_MIN;
int16_t x372 = -1;
uint32_t x402 = UINT32_MAX;
uint32_t x406 = 1339416U;
int64_t x416 = INT64_MAX;
volatile uint64_t x417 = 366510LLU;
int8_t x421 = INT8_MIN;
int64_t x435 = INT64_MIN;
static int32_t t78 = -8;
int16_t x452 = -4320;
static int16_t x458 = 0;
int16_t x469 = INT16_MIN;
int16_t x482 = 70;
static volatile int16_t x485 = 5034;
volatile uint32_t x486 = UINT32_MAX;
volatile uint32_t t88 = 44500362U;
volatile uint64_t t89 = 32544LLU;
int8_t x502 = -56;
volatile uint64_t x509 = 31196331861378601LLU;
uint64_t x516 = 4370372084862204LLU;
int8_t x527 = -1;
int32_t x530 = -1;
volatile int8_t x535 = INT8_MAX;
uint8_t x540 = UINT8_MAX;
volatile int64_t x541 = INT64_MAX;
int16_t x543 = -1;
volatile int8_t x544 = -1;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	int16_t x2 = 325;
	static volatile uint32_t x3 = 29238123U;
	int8_t x4 = INT8_MIN;

	t0 = ((x1+x2)&(x3+x4));

	if (t0 != 192U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 53804LL;
	volatile int16_t x10 = -1;
	int64_t x11 = INT64_MAX;
	int8_t x12 = -1;
	int64_t t1 = -347198079292LL;

	t1 = ((x9+x10)&(x11+x12));

	if (t1 != 53802LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -2;
	static int16_t x18 = -1;
	static volatile int8_t x20 = -1;

	t2 = ((x17+x18)&(x19+x20));

	if (t2 != 20844821869LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x21 = 101U;
	static volatile int32_t x23 = -1;
	uint32_t x24 = 7819947U;
	uint32_t t3 = 3216U;

	t3 = ((x21+x22)&(x23+x24));

	if (t3 != 7819936U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 3971904U;
	int8_t x26 = INT8_MIN;
	volatile int64_t x27 = INT64_MIN;
	volatile uint8_t x28 = 31U;
	int64_t t4 = 203423253079LL;

	t4 = ((x25+x26)&(x27+x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x37 = -2529757708LL;
	int16_t x39 = INT16_MAX;
	static volatile int32_t x40 = -1;
	volatile int64_t t5 = 1893737463324282988LL;

	t5 = ((x37+x38)&(x39+x40));

	if (t5 != 30068LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = 12U;
	static uint16_t x46 = 3U;
	volatile int64_t x47 = 127964142871602LL;
	volatile uint64_t x48 = 412211LLU;
	volatile uint64_t t6 = 127612LLU;

	t6 = ((x45+x46)&(x47+x48));

	if (t6 != 5LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = INT32_MAX;
	int32_t x50 = -9717345;
	volatile int64_t x51 = -2944890623299719LL;
	volatile int16_t x52 = 0;
	volatile int64_t t7 = -16630137123LL;

	t7 = ((x49+x50)&(x51+x52));

	if (t7 != 946514200LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x57 = -1;
	volatile int8_t x58 = -1;
	static volatile int16_t x59 = -1;
	volatile uint32_t t8 = 15U;

	t8 = ((x57+x58)&(x59+x60));

	if (t8 != 746U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x61 = 21670U;
	int16_t x62 = -1;
	volatile uint8_t x63 = 86U;
	static uint8_t x64 = 10U;

	t9 = ((x61+x62)&(x63+x64));

	if (t9 != 32) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x65 = INT16_MAX;
	int64_t x66 = 777LL;
	int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MIN;
	int64_t t10 = 29531066112LL;

	t10 = ((x65+x66)&(x67+x68));

	if (t10 != 33544LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x69 = INT64_MIN;
	static uint16_t x70 = UINT16_MAX;
	uint8_t x71 = 6U;
	volatile int64_t t11 = 10LL;

	t11 = ((x69+x70)&(x71+x72));

	if (t11 != -9223372036854710283LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x73 = -894961885;
	uint8_t x74 = 46U;
	uint8_t x76 = 0U;
	int64_t t12 = INT64_MIN;

	t12 = ((x73+x74)&(x75+x76));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x78 = INT16_MIN;
	int64_t x80 = -34475674815689841LL;
	int64_t t13 = -851939064LL;

	t13 = ((x77+x78)&(x79+x80));

	if (t13 != 212295925LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = 1032;
	int8_t x82 = 1;
	int16_t x83 = 100;
	uint8_t x84 = 0U;
	int32_t t14 = -7;

	t14 = ((x81+x82)&(x83+x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = 7U;
	int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t15 = 33710LLU;

	t15 = ((x85+x86)&(x87+x88));

	if (t15 != 9223372036854775687LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MIN;
	static volatile uint64_t x92 = UINT64_MAX;
	volatile uint64_t t16 = 501420111007843LLU;

	t16 = ((x89+x90)&(x91+x92));

	if (t16 != 8LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = 17340U;
	int8_t x94 = INT8_MAX;
	uint64_t x95 = UINT64_MAX;
	static int64_t x96 = INT64_MIN;
	uint64_t t17 = 1101923803662LLU;

	t17 = ((x93+x94)&(x95+x96));

	if (t17 != 17467LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x106 = INT8_MIN;
	int8_t x107 = -28;
	int32_t x108 = 156349;
	int32_t t18 = -2;

	t18 = ((x105+x106)&(x107+x108));

	if (t18 != 156321) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x113 = UINT16_MAX;
	static volatile int16_t x115 = -1;
	int64_t x116 = -1LL;

	t19 = ((x113+x114)&(x115+x116));

	if (t19 != 65528LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x117 = INT16_MIN;
	uint16_t x118 = UINT16_MAX;
	int64_t x119 = -1LL;
	int8_t x120 = INT8_MAX;
	volatile int64_t t20 = 4690070LL;

	t20 = ((x117+x118)&(x119+x120));

	if (t20 != 126LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MIN;
	uint16_t x123 = 84U;
	uint16_t x124 = UINT16_MAX;
	int32_t t21 = 132094170;

	t21 = ((x121+x122)&(x123+x124));

	if (t21 != 65616) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x125 = INT32_MIN;
	volatile int64_t x126 = INT64_MAX;
	static int32_t x127 = -1;
	int8_t x128 = -1;
	int64_t t22 = -499332463220LL;

	t22 = ((x125+x126)&(x127+x128));

	if (t22 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = -1LL;
	uint8_t x130 = 1U;
	volatile int64_t t23 = -355391463LL;

	t23 = ((x129+x130)&(x131+x132));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x133 = INT8_MIN;
	static int16_t x134 = INT16_MIN;
	volatile uint32_t x135 = UINT32_MAX;
	int16_t x136 = -2;
	uint32_t t24 = 99U;

	t24 = ((x133+x134)&(x135+x136));

	if (t24 != 4294934400U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x142 = -5653489;
	int64_t x143 = INT64_MIN;
	int32_t x144 = 410785667;

	t25 = ((x141+x142)&(x143+x144));

	if (t25 != -9223372036449496061LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x145 = 231U;
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	uint64_t t26 = 885257931795LLU;

	t26 = ((x145+x146)&(x147+x148));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	int64_t x155 = -937499379694LL;

	t27 = ((x153+x154)&(x155+x156));

	if (t27 != 16LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x158 = UINT16_MAX;
	uint8_t x159 = 0U;
	int32_t x160 = -1;
	static volatile int32_t t28 = 19829;

	t28 = ((x157+x158)&(x159+x160));

	if (t28 != 65536) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x161 = INT64_MAX;
	int16_t x162 = -1211;
	uint16_t x163 = 1U;
	volatile int64_t x164 = INT64_MIN;
	int64_t t29 = -6207582LL;

	t29 = ((x161+x162)&(x163+x164));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x169 = 8719LLU;
	static volatile int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	static int8_t x172 = INT8_MIN;
	static uint64_t t30 = 195054190722713509LLU;

	t30 = ((x169+x170)&(x171+x172));

	if (t30 != 18446744073709494784LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x173 = UINT16_MAX;
	static uint16_t x176 = 31U;

	t31 = ((x173+x174)&(x175+x176));

	if (t31 != 2322) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x177 = -1698525;
	uint16_t x178 = 0U;
	int8_t x179 = 8;

	t32 = ((x177+x178)&(x179+x180));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = -1075857772580LL;
	uint64_t x184 = 17364132LLU;
	volatile uint64_t t33 = 11663852LLU;

	t33 = ((x181+x182)&(x183+x184));

	if (t33 != 16819204LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = -1LL;
	int32_t x188 = INT32_MIN;
	volatile uint64_t t34 = 6730136995248291LLU;

	t34 = ((x185+x186)&(x187+x188));

	if (t34 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x189 = UINT64_MAX;
	uint64_t x191 = 7805627425262108LLU;
	static uint16_t x192 = 0U;
	volatile uint64_t t35 = 7148606341160LLU;

	t35 = ((x189+x190)&(x191+x192));

	if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x194 = 6U;
	int8_t x196 = -37;
	volatile uint32_t t36 = 245170U;

	t36 = ((x193+x194)&(x195+x196));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x201 = INT8_MAX;
	static int8_t x202 = 51;
	static int64_t x204 = -1LL;

	t37 = ((x201+x202)&(x203+x204));

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x205 = -3;
	int64_t x206 = INT64_MAX;
	volatile uint8_t x207 = 4U;
	volatile int64_t t38 = -13807444387LL;

	t38 = ((x205+x206)&(x207+x208));

	if (t38 != 12600LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x210 = INT16_MIN;
	static uint32_t x211 = 2399U;
	volatile int64_t t39 = -58652111532LL;

	t39 = ((x209+x210)&(x211+x212));

	if (t39 != 2428LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x214 = -1LL;

	t40 = ((x213+x214)&(x215+x216));

	if (t40 != 18446744013581325840LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x217 = 38099U;
	int8_t x219 = -1;
	volatile int64_t t41 = -5408100505758702LL;

	t41 = ((x217+x218)&(x219+x220));

	if (t41 != 38098LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x221 = 49043U;
	uint32_t x223 = 857U;
	static uint32_t x224 = UINT32_MAX;
	volatile uint32_t t42 = 1472734203U;

	t42 = ((x221+x222)&(x223+x224));

	if (t42 != 784U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = INT32_MIN;
	volatile int8_t x228 = -1;
	uint32_t t43 = 6107938U;

	t43 = ((x225+x226)&(x227+x228));

	if (t43 != 2147483646U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MAX;
	uint64_t t44 = 0LLU;

	t44 = ((x233+x234)&(x235+x236));

	if (t44 != 2287588139LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = -1;
	uint32_t x238 = 390U;
	static uint16_t x239 = 1732U;
	volatile int16_t x240 = -1;
	static uint32_t t45 = 1527U;

	t45 = ((x237+x238)&(x239+x240));

	if (t45 != 129U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x243 = INT16_MIN;
	int64_t x244 = 6563LL;
	volatile int64_t t46 = -142946106723LL;

	t46 = ((x241+x242)&(x243+x244));

	if (t46 != 825632LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = INT32_MIN;
	static uint8_t x246 = 1U;
	volatile int16_t x247 = -45;
	uint8_t x248 = 2U;
	int32_t t47 = -6322698;

	t47 = ((x245+x246)&(x247+x248));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x250 = -1;
	int32_t x251 = -12;
	int64_t x252 = 23310LL;
	static int64_t t48 = -8570078247229LL;

	t48 = ((x249+x250)&(x251+x252));

	if (t48 != 512LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = INT64_MIN;
	uint8_t x259 = UINT8_MAX;
	static uint8_t x260 = 3U;
	uint64_t t49 = 42141584916LLU;

	t49 = ((x257+x258)&(x259+x260));

	if (t49 != 2LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = 11594;
	int32_t x271 = -41;
	int32_t t50 = -203666;

	t50 = ((x269+x270)&(x271+x272));

	if (t50 != 3274) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x279 = UINT16_MAX;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int32_t t51 = 1641;

	t51 = ((x277+x278)&(x279+x280));

	if (t51 != 65662) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x283 = 116U;
	int64_t x284 = INT64_MIN;

	t52 = ((x281+x282)&(x283+x284));

	if (t52 != 48LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = 647;
	int16_t x294 = 0;
	static int64_t x295 = -1LL;
	static volatile int8_t x296 = INT8_MIN;
	static int64_t t53 = 988927973917872LL;

	t53 = ((x293+x294)&(x295+x296));

	if (t53 != 519LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x297 = INT16_MAX;
	int64_t x298 = -12LL;
	volatile int64_t t54 = 15487802065286878LL;

	t54 = ((x297+x298)&(x299+x300));

	if (t54 != 35LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x301 = -23;
	uint64_t x302 = 3629984LLU;
	int8_t x303 = 15;
	int16_t x304 = INT16_MAX;
	uint64_t t55 = 39LLU;

	t55 = ((x301+x302)&(x303+x304));

	if (t55 != 8LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x305 = -812351774;
	uint16_t x306 = 11U;
	uint8_t x307 = 1U;
	int16_t x308 = INT16_MAX;
	volatile int32_t t56 = 12207985;

	t56 = ((x305+x306)&(x307+x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x315 = 26749537LLU;

	t57 = ((x313+x314)&(x315+x316));

	if (t57 != 26299744LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x317 = UINT8_MAX;
	uint32_t x319 = 56U;
	volatile uint32_t t58 = 96779341U;

	t58 = ((x317+x318)&(x319+x320));

	if (t58 != 54U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = 1619392;
	int16_t x326 = -19;
	uint64_t x327 = 2030303030919LLU;
	volatile uint64_t t59 = 854351LLU;

	t59 = ((x325+x326)&(x327+x328));

	if (t59 != 1582213LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x329 = INT32_MAX;
	uint64_t x330 = 137952LLU;
	int64_t x331 = INT64_MAX;
	int8_t x332 = INT8_MIN;
	static volatile uint64_t t60 = 3468958678985577LLU;

	t60 = ((x329+x330)&(x331+x332));

	if (t60 != 2147621471LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x337 = 8U;
	uint64_t x338 = 36908375135LLU;
	static int8_t x339 = -1;
	int16_t x340 = INT16_MAX;
	uint64_t t61 = 101059258513901LLU;

	t61 = ((x337+x338)&(x339+x340));

	if (t61 != 7270LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MAX;
	uint64_t x347 = 814403644LLU;
	uint16_t x348 = UINT16_MAX;

	t62 = ((x345+x346)&(x347+x348));

	if (t62 != 814436411LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x357 = UINT32_MAX;
	static int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	volatile int16_t x360 = INT16_MAX;
	uint32_t t63 = 13U;

	t63 = ((x357+x358)&(x359+x360));

	if (t63 != 4294967167U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x361 = 7146;
	static uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t64 = 1243804189U;

	t64 = ((x361+x362)&(x363+x364));

	if (t64 != 232U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x365 = INT32_MAX;
	int8_t x367 = -1;
	int64_t x368 = 29565LL;
	int64_t t65 = 565LL;

	t65 = ((x365+x366)&(x367+x368));

	if (t65 != 29564LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = -25960932LL;
	uint8_t x370 = 3U;
	uint8_t x371 = 2U;
	volatile int64_t t66 = -1757247726LL;

	t66 = ((x369+x370)&(x371+x372));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x377 = 5;
	int8_t x378 = INT8_MIN;
	static uint32_t x379 = 8728U;
	uint16_t x380 = 1115U;
	uint32_t t67 = 163U;

	t67 = ((x377+x378)&(x379+x380));

	if (t67 != 9729U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x385 = UINT64_MAX;
	int64_t x386 = -1LL;
	uint32_t x387 = 398796U;
	static volatile uint64_t x388 = UINT64_MAX;
	volatile uint64_t t68 = 123LLU;

	t68 = ((x385+x386)&(x387+x388));

	if (t68 != 398794LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x397 = -1;
	static uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	uint16_t x400 = 1099U;
	static volatile uint32_t t69 = 13830U;

	t69 = ((x397+x398)&(x399+x400));

	if (t69 != 4294935626U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x401 = 87U;
	uint16_t x403 = 0U;
	static int8_t x404 = 1;
	uint32_t t70 = 13367U;

	t70 = ((x401+x402)&(x403+x404));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = 256772530LL;
	int8_t x407 = 0;
	int32_t x408 = INT32_MIN;
	static int64_t t71 = 11016825687LL;

	t71 = ((x405+x406)&(x407+x408));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	static volatile int8_t x411 = INT8_MIN;
	static int64_t x412 = 0LL;
	volatile int64_t t72 = 2529062177524889972LL;

	t72 = ((x409+x410)&(x411+x412));

	if (t72 != -32896LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x413 = UINT16_MAX;
	uint32_t x414 = 19U;
	static volatile int8_t x415 = INT8_MIN;
	int64_t t73 = 289854979848LL;

	t73 = ((x413+x414)&(x415+x416));

	if (t73 != 65554LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x418 = 1U;
	int8_t x419 = -1;
	int32_t x420 = INT32_MAX;
	static uint64_t t74 = 7883221057LLU;

	t74 = ((x417+x418)&(x419+x420));

	if (t74 != 366510LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x422 = -709;
	uint64_t x423 = 332979781506790LLU;
	uint64_t x424 = 46509194LLU;
	static volatile uint64_t t75 = 122184328LLU;

	t75 = ((x421+x422)&(x423+x424));

	if (t75 != 332979828015152LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x429 = INT16_MAX;
	int8_t x430 = 0;
	int16_t x431 = INT16_MIN;
	int64_t x432 = INT64_MAX;
	int64_t t76 = 28LL;

	t76 = ((x429+x430)&(x431+x432));

	if (t76 != 32767LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x433 = 507602221130714032LL;
	volatile uint8_t x434 = 5U;
	volatile uint32_t x436 = UINT32_MAX;
	int64_t t77 = 18497555190LL;

	t77 = ((x433+x434)&(x435+x436));

	if (t77 != 3719433141LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x437 = 0U;
	int8_t x438 = -4;
	int32_t x439 = -1;
	volatile int8_t x440 = -1;

	t78 = ((x437+x438)&(x439+x440));

	if (t78 != -4) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x445 = 1;
	int8_t x446 = INT8_MIN;
	int64_t x447 = INT64_MAX;
	static int16_t x448 = 0;
	volatile int64_t t79 = 4276463212697174420LL;

	t79 = ((x445+x446)&(x447+x448));

	if (t79 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x449 = 102LLU;
	static int32_t x450 = INT32_MIN;
	int64_t x451 = INT64_MAX;
	volatile uint64_t t80 = 14666LLU;

	t80 = ((x449+x450)&(x451+x452));

	if (t80 != 9223372034707292166LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x457 = INT8_MAX;
	int64_t x459 = INT64_MIN;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t81 = 3884581160709220839LLU;

	t81 = ((x457+x458)&(x459+x460));

	if (t81 != 127LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x461 = INT8_MIN;
	int32_t x462 = -2600298;
	static int32_t x463 = INT32_MAX;
	volatile int64_t x464 = INT64_MIN;
	volatile int64_t t82 = 393LL;

	t82 = ((x461+x462)&(x463+x464));

	if (t82 != -9223372034709892586LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x465 = 58U;
	static uint32_t x466 = 0U;
	int64_t x467 = 191101637201LL;
	int32_t x468 = 326880;
	int64_t t83 = -1LL;

	t83 = ((x465+x466)&(x467+x468));

	if (t83 != 48LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x470 = UINT32_MAX;
	int64_t x471 = 3476905LL;
	static int32_t x472 = -5;
	static volatile int64_t t84 = -10984553057653LL;

	t84 = ((x469+x470)&(x471+x472));

	if (t84 != 3476900LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x473 = -1;
	int16_t x474 = 0;
	int8_t x475 = INT8_MIN;
	int16_t x476 = -1;
	volatile int32_t t85 = -1;

	t85 = ((x473+x474)&(x475+x476));

	if (t85 != -129) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x477 = INT16_MAX;
	int8_t x478 = -58;
	uint16_t x479 = 4U;
	int32_t x480 = -3631689;
	int32_t t86 = -231153082;

	t86 = ((x477+x478)&(x479+x480));

	if (t86 != 5505) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x481 = 209966104LLU;
	int8_t x483 = -1;
	static uint16_t x484 = UINT16_MAX;
	uint64_t t87 = 66166101681338LLU;

	t87 = ((x481+x482)&(x483+x484));

	if (t87 != 54366LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x487 = 55;
	int32_t x488 = -1;

	t88 = ((x485+x486)&(x487+x488));

	if (t88 != 32U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x489 = UINT64_MAX;
	int32_t x490 = 9311;
	int32_t x491 = INT32_MAX;
	uint64_t x492 = 1LLU;

	t89 = ((x489+x490)&(x491+x492));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x501 = INT32_MAX;
	uint32_t x503 = 1926U;
	static int16_t x504 = 4868;
	static volatile uint32_t t90 = 33472772U;

	t90 = ((x501+x502)&(x503+x504));

	if (t90 != 6786U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x505 = INT8_MIN;
	static int16_t x506 = -1;
	int16_t x507 = INT16_MIN;
	static uint16_t x508 = 1759U;
	int32_t t91 = -377392;

	t91 = ((x505+x506)&(x507+x508));

	if (t91 != -31137) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x510 = 42U;
	int64_t x511 = 105879082239528058LL;
	int32_t x512 = -1;
	volatile uint64_t t92 = 122658010LLU;

	t92 = ((x509+x510)&(x511+x512));

	if (t92 != 29273835765236817LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x513 = -1;
	int16_t x514 = -55;
	uint32_t x515 = 41U;
	uint64_t t93 = 816118204LLU;

	t93 = ((x513+x514)&(x515+x516));

	if (t93 != 4370372084862208LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x521 = UINT64_MAX;
	int16_t x522 = INT16_MAX;
	uint32_t x523 = 1491301459U;
	static uint16_t x524 = 6202U;
	volatile uint64_t t94 = 3LLU;

	t94 = ((x521+x522)&(x523+x524));

	if (t94 != 3212LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x525 = INT16_MIN;
	static uint16_t x526 = UINT16_MAX;
	volatile uint16_t x528 = 2965U;
	int32_t t95 = 223;

	t95 = ((x525+x526)&(x527+x528));

	if (t95 != 2964) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x529 = INT8_MAX;
	int32_t x531 = INT32_MIN;
	int8_t x532 = INT8_MAX;
	static int32_t t96 = -402;

	t96 = ((x529+x530)&(x531+x532));

	if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = 7;
	static int16_t x534 = INT16_MAX;
	int16_t x536 = -1;
	int32_t t97 = 8;

	t97 = ((x533+x534)&(x535+x536));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x537 = UINT32_MAX;
	uint64_t x538 = 13LLU;
	uint64_t x539 = 1866003935615LLU;
	static volatile uint64_t t98 = 47377LLU;

	t98 = ((x537+x538)&(x539+x540));

	if (t98 != 12LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x542 = -41LL;
	static volatile int64_t t99 = 73205654125789LL;

	t99 = ((x541+x542)&(x543+x544));

	if (t99 != 9223372036854775766LL) { NG(); } else { ; }
	
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

