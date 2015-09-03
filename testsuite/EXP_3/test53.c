#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = 126809791LL;
int32_t x13 = -186;
volatile uint64_t t2 = 27880673223709LLU;
volatile int64_t x20 = -1LL;
int64_t t3 = 68862791029181LL;
uint64_t t4 = 51335LLU;
volatile int16_t x25 = -227;
static int32_t x26 = INT32_MIN;
uint8_t x38 = 2U;
int8_t x48 = INT8_MIN;
volatile int8_t x54 = INT8_MIN;
static int8_t x58 = -1;
int32_t x69 = INT32_MIN;
int32_t x71 = 156;
static int64_t t13 = 11105LL;
static uint32_t x76 = UINT32_MAX;
uint8_t x77 = UINT8_MAX;
volatile int64_t x95 = -1LL;
int8_t x96 = INT8_MIN;
uint32_t x103 = UINT32_MAX;
static volatile int64_t x116 = 133617187086954LL;
uint64_t x117 = 325848980LLU;
int16_t x122 = -1;
static int32_t x141 = INT32_MIN;
int32_t x142 = 1708;
uint64_t x144 = UINT64_MAX;
int32_t x145 = INT32_MIN;
int32_t x153 = -1;
static int8_t x162 = INT8_MIN;
int32_t x163 = 5287;
uint64_t x164 = 91961219977873096LLU;
uint16_t x165 = 506U;
static int8_t x167 = -1;
volatile uint16_t x174 = 1U;
volatile int32_t x181 = INT32_MAX;
uint8_t x183 = 27U;
int8_t x184 = INT8_MIN;
volatile int32_t t39 = -210320717;
static uint8_t x185 = UINT8_MAX;
int32_t x189 = INT32_MIN;
volatile int8_t x197 = 1;
volatile uint32_t t46 = 10109U;
volatile uint64_t t50 = 34664956922583219LLU;
static int64_t t52 = 10545202506197757LL;
int8_t x241 = INT8_MIN;
int8_t x245 = 15;
static int64_t x258 = 5758264631829LL;
uint32_t x259 = UINT32_MAX;
int16_t x260 = -5;
uint32_t x265 = UINT32_MAX;
int64_t x273 = INT64_MIN;
uint16_t x274 = UINT16_MAX;
volatile uint16_t x283 = 2244U;
static int64_t t59 = 528884037717190542LL;
volatile int8_t x292 = INT8_MIN;
static uint64_t x300 = 14568527753380520LLU;
static int32_t x308 = -118;
volatile int32_t t64 = -5;
volatile uint8_t x351 = 0U;
volatile int16_t x356 = -1;
volatile int64_t x359 = 1248991563LL;
uint8_t x360 = UINT8_MAX;
static int32_t x365 = INT32_MAX;
static volatile int16_t x371 = -1;
int16_t x376 = -1;
volatile uint32_t x382 = UINT32_MAX;
uint32_t x385 = 46614451U;
int8_t x389 = -5;
uint16_t x391 = 108U;
static int64_t t80 = -3091672216703971647LL;
volatile int32_t x395 = -1;
uint64_t x399 = 692430595LLU;
int8_t x402 = -1;
static uint64_t x407 = UINT64_MAX;
volatile uint16_t x417 = 48U;
int32_t t88 = 1694;
static volatile int64_t x430 = INT64_MAX;
volatile int64_t x436 = INT64_MAX;
static uint8_t x437 = 3U;
static int16_t x441 = INT16_MAX;
int64_t t92 = -33219253706247288LL;
int16_t x448 = -829;
int32_t x451 = INT32_MIN;
static uint8_t x466 = UINT8_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static uint64_t x2 = 31LLU;
	int64_t x3 = 46483724768729888LL;
	int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 631402652LLU;

	t0 = ((x1%x2)+(x3+x4));

	if (t0 != 46483722621246255LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	static uint16_t x10 = UINT16_MAX;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = -1;

	t1 = ((x9%x10)+(x11+x12));

	if (t1 != -32514LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x14 = UINT64_MAX;
	uint64_t x15 = 1244603LLU;
	volatile int8_t x16 = -1;

	t2 = ((x13%x14)+(x15+x16));

	if (t2 != 1244416LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 14U;
	volatile int32_t x18 = INT32_MIN;
	volatile int8_t x19 = -1;

	t3 = ((x17%x18)+(x19+x20));

	if (t3 != 12LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MIN;
	static volatile uint64_t x23 = 21074389627927LLU;
	uint64_t x24 = 4285LLU;

	t4 = ((x21%x22)+(x23+x24));

	if (t4 != 21074389632212LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = -1LL;
	static volatile int64_t x28 = -1LL;
	volatile int64_t t5 = -60141LL;

	t5 = ((x25%x26)+(x27+x28));

	if (t5 != -229LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = 10;
	volatile int8_t x39 = -1;
	static uint8_t x40 = UINT8_MAX;
	static int32_t t6 = -911343;

	t6 = ((x37%x38)+(x39+x40));

	if (t6 != 254) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	int8_t x42 = 60;
	volatile int16_t x43 = 3390;
	int8_t x44 = INT8_MIN;
	volatile int64_t t7 = 2353351155014261LL;

	t7 = ((x41%x42)+(x43+x44));

	if (t7 != 3261LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x45 = INT16_MAX;
	uint8_t x46 = 80U;
	volatile int8_t x47 = 1;
	volatile int32_t t8 = 2023;

	t8 = ((x45%x46)+(x47+x48));

	if (t8 != -80) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x49 = INT64_MIN;
	int32_t x50 = -3366;
	int8_t x51 = 0;
	static uint8_t x52 = UINT8_MAX;
	volatile int64_t t9 = -126LL;

	t9 = ((x49%x50)+(x51+x52));

	if (t9 != -2525LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 3U;
	int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	int32_t t10 = -1439622;

	t10 = ((x53%x54)+(x55+x56));

	if (t10 != -32766) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 42;
	uint32_t x59 = 25817514U;
	int32_t x60 = 48988;
	uint32_t t11 = 930U;

	t11 = ((x57%x58)+(x59+x60));

	if (t11 != 25866502U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x61 = -1;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	uint64_t x64 = 6482804116729LLU;
	uint64_t t12 = 13143048LLU;

	t12 = ((x61%x62)+(x63+x64));

	if (t12 != 6482804083960LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x70 = INT16_MIN;
	int64_t x72 = INT64_MIN;

	t13 = ((x69%x70)+(x71+x72));

	if (t13 != -9223372036854775652LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	static volatile uint32_t t14 = 50U;

	t14 = ((x73%x74)+(x75+x76));

	if (t14 != 2147483519U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x78 = 2U;
	volatile int32_t x79 = 247968;
	uint8_t x80 = 91U;
	volatile int32_t t15 = 44;

	t15 = ((x77%x78)+(x79+x80));

	if (t15 != 248060) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -1;
	volatile int32_t x82 = INT32_MIN;
	int8_t x83 = INT8_MIN;
	volatile int16_t x84 = -1;
	volatile int32_t t16 = 7904118;

	t16 = ((x81%x82)+(x83+x84));

	if (t16 != -130) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = UINT16_MAX;
	int8_t x86 = INT8_MIN;
	volatile int16_t x87 = INT16_MIN;
	static int16_t x88 = INT16_MAX;
	int32_t t17 = -129157079;

	t17 = ((x85%x86)+(x87+x88));

	if (t17 != 126) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = UINT32_MAX;
	int16_t x90 = INT16_MAX;
	static int16_t x91 = -106;
	int64_t x92 = -1LL;
	int64_t t18 = -2163601923118376LL;

	t18 = ((x89%x90)+(x91+x92));

	if (t18 != -104LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = INT32_MIN;
	static int16_t x94 = 42;
	volatile int64_t t19 = -101048LL;

	t19 = ((x93%x94)+(x95+x96));

	if (t19 != -131LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = -886;
	static uint32_t x102 = UINT32_MAX;
	int64_t x104 = 4855373448682LL;
	static int64_t t20 = -142920LL;

	t20 = ((x101%x102)+(x103+x104));

	if (t20 != 4863963382387LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x105 = 62U;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = 0U;
	static int8_t x108 = INT8_MIN;
	int64_t t21 = -14990469493000LL;

	t21 = ((x105%x106)+(x107+x108));

	if (t21 != 4294967230LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x109 = 535736160U;
	uint8_t x110 = 6U;
	volatile uint16_t x111 = UINT16_MAX;
	int64_t x112 = -1LL;
	int64_t t22 = 27269718006LL;

	t22 = ((x109%x110)+(x111+x112));

	if (t22 != 65534LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x113 = 3405;
	volatile int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	volatile int64_t t23 = 1458799681LL;

	t23 = ((x113%x114)+(x115+x116));

	if (t23 != 133617187057591LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x118 = 836602661U;
	int32_t x119 = -1;
	volatile int8_t x120 = INT8_MIN;
	uint64_t t24 = 406256LLU;

	t24 = ((x117%x118)+(x119+x120));

	if (t24 != 325848851LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	int64_t x124 = 93306221816796880LL;
	volatile int64_t t25 = -6246523180193LL;

	t25 = ((x121%x122)+(x123+x124));

	if (t25 != 93306221816764112LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MAX;
	volatile int64_t x127 = 252098791920857LL;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t26 = 19722LLU;

	t26 = ((x125%x126)+(x127+x128));

	if (t26 != 252098791888088LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = -1;
	uint64_t x130 = 11924959717581LLU;
	volatile int64_t x131 = 973678315LL;
	uint64_t x132 = 1469904521LLU;
	static uint64_t t27 = 4116715383LLU;

	t27 = ((x129%x130)+(x131+x132));

	if (t27 != 39107650389LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1LL;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = -1;
	static volatile int16_t x136 = INT16_MIN;
	static int64_t t28 = -303571LL;

	t28 = ((x133%x134)+(x135+x136));

	if (t28 != -32770LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x143 = INT16_MIN;
	uint64_t t29 = 17394587796375771LLU;

	t29 = ((x141%x142)+(x143+x144));

	if (t29 != 18446744073709517263LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = INT32_MIN;
	uint8_t x147 = 1U;
	int64_t x148 = 131830LL;
	static int64_t t30 = -32622039487LL;

	t30 = ((x145%x146)+(x147+x148));

	if (t30 != 131831LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -1;
	int16_t x150 = INT16_MAX;
	static volatile int8_t x151 = INT8_MIN;
	int32_t x152 = -7917;
	int32_t t31 = -63767;

	t31 = ((x149%x150)+(x151+x152));

	if (t31 != -8046) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x154 = INT8_MAX;
	uint32_t x155 = UINT32_MAX;
	static uint8_t x156 = UINT8_MAX;
	uint32_t t32 = 12189U;

	t32 = ((x153%x154)+(x155+x156));

	if (t32 != 253U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x157 = 1;
	int32_t x158 = -1;
	int16_t x159 = 11;
	static volatile int16_t x160 = INT16_MIN;
	int32_t t33 = 1;

	t33 = ((x157%x158)+(x159+x160));

	if (t33 != -32757) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	uint64_t t34 = 214838229925115LLU;

	t34 = ((x161%x162)+(x163+x164));

	if (t34 != 91961219977878383LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = -1LL;
	int16_t x168 = INT16_MAX;
	int64_t t35 = -8940632LL;

	t35 = ((x165%x166)+(x167+x168));

	if (t35 != 32766LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x169 = 142;
	int32_t x170 = 9188040;
	volatile uint64_t x171 = UINT64_MAX;
	int16_t x172 = 2;
	static uint64_t t36 = 648342LLU;

	t36 = ((x169%x170)+(x171+x172));

	if (t36 != 143LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MAX;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = -1;
	uint32_t t37 = 277021649U;

	t37 = ((x173%x174)+(x175+x176));

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = -61LL;
	volatile int32_t x178 = INT32_MAX;
	int8_t x179 = -1;
	static uint64_t x180 = 46599050786547LLU;
	uint64_t t38 = 14LLU;

	t38 = ((x177%x178)+(x179+x180));

	if (t38 != 46599050786485LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x182 = 58492608;

	t39 = ((x181%x182)+(x183+x184));

	if (t39 != 41749658) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x186 = 963;
	static int64_t x187 = INT64_MIN;
	static volatile uint64_t x188 = 17LLU;
	static volatile uint64_t t40 = 2255812LLU;

	t40 = ((x185%x186)+(x187+x188));

	if (t40 != 9223372036854776080LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x190 = INT64_MIN;
	int16_t x191 = 0;
	int64_t x192 = 29538139475LL;
	int64_t t41 = -99LL;

	t41 = ((x189%x190)+(x191+x192));

	if (t41 != 27390655827LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = UINT32_MAX;
	int8_t x194 = INT8_MAX;
	int16_t x195 = -6319;
	int8_t x196 = INT8_MIN;
	volatile uint32_t t42 = 2U;

	t42 = ((x193%x194)+(x195+x196));

	if (t42 != 4294960864U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x198 = INT8_MAX;
	uint64_t x199 = 106979224LLU;
	int16_t x200 = INT16_MIN;
	static uint64_t t43 = 988934549766873LLU;

	t43 = ((x197%x198)+(x199+x200));

	if (t43 != 106946457LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x201 = INT32_MIN;
	static int64_t x202 = -207075350981LL;
	int32_t x203 = -510293;
	int16_t x204 = INT16_MAX;
	int64_t t44 = -20547288391LL;

	t44 = ((x201%x202)+(x203+x204));

	if (t44 != -2147961174LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x205 = 1629787950224357LLU;
	int64_t x206 = INT64_MAX;
	uint8_t x207 = 2U;
	int64_t x208 = -31839LL;
	uint64_t t45 = 27382261216055LLU;

	t45 = ((x205%x206)+(x207+x208));

	if (t45 != 1629787950192520LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x209 = INT8_MIN;
	static volatile int32_t x210 = -1;
	int8_t x211 = -1;
	uint32_t x212 = 259605U;

	t46 = ((x209%x210)+(x211+x212));

	if (t46 != 259604U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = 120U;
	int16_t x214 = 2;
	uint8_t x215 = 1U;
	int32_t x216 = INT32_MIN;
	int32_t t47 = -32530863;

	t47 = ((x213%x214)+(x215+x216));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	static int64_t x218 = -1861294030LL;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MIN;
	volatile int64_t t48 = -1730740306008211LL;

	t48 = ((x217%x218)+(x219+x220));

	if (t48 != -2147516161LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x225 = INT8_MIN;
	int16_t x226 = -799;
	static uint8_t x227 = UINT8_MAX;
	uint32_t x228 = 352U;
	volatile uint32_t t49 = 963U;

	t49 = ((x225%x226)+(x227+x228));

	if (t49 != 479U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 311957244U;
	uint8_t x230 = UINT8_MAX;
	uint8_t x231 = 8U;
	uint64_t x232 = 1179LLU;

	t50 = ((x229%x230)+(x231+x232));

	if (t50 != 1376LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -1;
	volatile uint32_t x234 = UINT32_MAX;
	static volatile int64_t x235 = -196412764437662665LL;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t51 = 3681120LLU;

	t51 = ((x233%x234)+(x235+x236));

	if (t51 != 18250331309271888950LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x237 = INT64_MIN;
	int8_t x238 = 1;
	int32_t x239 = -586614;
	int8_t x240 = INT8_MIN;

	t52 = ((x237%x238)+(x239+x240));

	if (t52 != -586742LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x242 = INT16_MIN;
	int8_t x243 = INT8_MAX;
	int64_t x244 = 4247390080781892LL;
	static int64_t t53 = 1582706LL;

	t53 = ((x241%x242)+(x243+x244));

	if (t53 != 4247390080781891LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x246 = 1U;
	static int8_t x247 = -1;
	static int32_t x248 = INT32_MAX;
	static volatile uint32_t t54 = 59U;

	t54 = ((x245%x246)+(x247+x248));

	if (t54 != 2147483646U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 513576246343LLU;
	volatile uint64_t t55 = 8497413018LLU;

	t55 = ((x257%x258)+(x259+x260));

	if (t55 != 517871213633LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x266 = INT32_MIN;
	volatile uint16_t x267 = UINT16_MAX;
	volatile int64_t x268 = INT64_MIN;
	volatile int64_t t56 = -247851016824385695LL;

	t56 = ((x265%x266)+(x267+x268));

	if (t56 != -9223372034707226626LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x269 = INT16_MAX;
	static uint64_t x270 = UINT64_MAX;
	volatile int16_t x271 = INT16_MAX;
	static uint32_t x272 = 209287U;
	uint64_t t57 = 4864332910LLU;

	t57 = ((x269%x270)+(x271+x272));

	if (t57 != 274821LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x275 = -5193432LL;
	static int8_t x276 = INT8_MAX;
	volatile int64_t t58 = -59LL;

	t58 = ((x273%x274)+(x275+x276));

	if (t58 != -5226073LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x281 = 984U;
	volatile int64_t x282 = INT64_MIN;
	static uint8_t x284 = 0U;

	t59 = ((x281%x282)+(x283+x284));

	if (t59 != 3228LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = INT32_MIN;
	int8_t x290 = 12;
	int64_t x291 = -1LL;
	int64_t t60 = 0LL;

	t60 = ((x289%x290)+(x291+x292));

	if (t60 != -137LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = 911005LLU;
	int64_t x296 = INT64_MAX;
	static uint64_t t61 = 171723938602624615LLU;

	t61 = ((x293%x294)+(x295+x296));

	if (t61 != 9223372036855654044LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = -210963LL;
	uint8_t x299 = UINT8_MAX;
	static volatile uint64_t t62 = 52928857378LLU;

	t62 = ((x297%x298)+(x299+x300));

	if (t62 != 14568527753289504LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = INT8_MAX;
	int32_t x306 = INT32_MAX;
	uint64_t x307 = 605054LLU;
	uint64_t t63 = 9988518380903LLU;

	t63 = ((x305%x306)+(x307+x308));

	if (t63 != 605063LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x309 = INT32_MIN;
	static int32_t x310 = INT32_MAX;
	int8_t x311 = INT8_MIN;
	volatile uint8_t x312 = UINT8_MAX;

	t64 = ((x309%x310)+(x311+x312));

	if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x313 = INT32_MIN;
	uint16_t x314 = 8007U;
	volatile uint32_t x315 = UINT32_MAX;
	static volatile int16_t x316 = -1;
	volatile uint32_t t65 = 0U;

	t65 = ((x313%x314)+(x315+x316));

	if (t65 != 4294961046U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x317 = 42U;
	uint16_t x318 = 24U;
	uint64_t x319 = 5036213673019LLU;
	int16_t x320 = INT16_MIN;
	uint64_t t66 = 42344982LLU;

	t66 = ((x317%x318)+(x319+x320));

	if (t66 != 5036213640269LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x329 = UINT8_MAX;
	static int64_t x330 = -3352LL;
	static uint8_t x331 = 1U;
	uint8_t x332 = UINT8_MAX;
	volatile int64_t t67 = 508LL;

	t67 = ((x329%x330)+(x331+x332));

	if (t67 != 511LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x337 = 350977471LL;
	int64_t x338 = INT64_MIN;
	static volatile int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	static int64_t t68 = 131924563LL;

	t68 = ((x337%x338)+(x339+x340));

	if (t68 != 350944575LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x341 = INT64_MAX;
	volatile int32_t x342 = -1;
	static int64_t x343 = INT64_MAX;
	volatile int8_t x344 = -1;
	int64_t t69 = -550333111LL;

	t69 = ((x341%x342)+(x343+x344));

	if (t69 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x349 = INT16_MIN;
	volatile int64_t x350 = -28348937LL;
	uint16_t x352 = 404U;
	volatile int64_t t70 = 618919321337206086LL;

	t70 = ((x349%x350)+(x351+x352));

	if (t70 != -32364LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x353 = -92LL;
	uint16_t x354 = 61U;
	uint64_t x355 = UINT64_MAX;
	static volatile uint64_t t71 = 123110372834336530LLU;

	t71 = ((x353%x354)+(x355+x356));

	if (t71 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MIN;
	int64_t t72 = 190652287106175903LL;

	t72 = ((x357%x358)+(x359+x360));

	if (t72 != 1248991945LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x361 = 0;
	int64_t x362 = INT64_MAX;
	int16_t x363 = -145;
	volatile uint64_t x364 = 445528898591LLU;
	uint64_t t73 = 21701657475257LLU;

	t73 = ((x361%x362)+(x363+x364));

	if (t73 != 445528898446LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x366 = -72;
	int8_t x367 = 6;
	int16_t x368 = 1294;
	volatile int32_t t74 = 126916;

	t74 = ((x365%x366)+(x367+x368));

	if (t74 != 1355) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x369 = 11723U;
	uint8_t x370 = 12U;
	uint8_t x372 = UINT8_MAX;
	int32_t t75 = 1818;

	t75 = ((x369%x370)+(x371+x372));

	if (t75 != 265) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x373 = -382;
	static uint32_t x374 = 98U;
	volatile int32_t x375 = 1;
	static volatile uint32_t t76 = 20730U;

	t76 = ((x373%x374)+(x375+x376));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x377 = -21688122;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = -4;
	int16_t x380 = INT16_MAX;
	volatile int32_t t77 = -190338927;

	t77 = ((x377%x378)+(x379+x380));

	if (t77 != 32646) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x381 = INT8_MIN;
	static int16_t x383 = INT16_MIN;
	int32_t x384 = INT32_MAX;
	static volatile uint32_t t78 = 1757351U;

	t78 = ((x381%x382)+(x383+x384));

	if (t78 != 2147450751U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x386 = INT32_MIN;
	uint16_t x387 = 11U;
	uint64_t x388 = 2LLU;
	uint64_t t79 = 12664914LLU;

	t79 = ((x385%x386)+(x387+x388));

	if (t79 != 46614464LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x390 = INT64_MAX;
	volatile uint32_t x392 = 22450794U;

	t80 = ((x389%x390)+(x391+x392));

	if (t80 != 22450897LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x393 = INT8_MIN;
	volatile int32_t x394 = INT32_MAX;
	uint16_t x396 = 0U;
	volatile int32_t t81 = -6;

	t81 = ((x393%x394)+(x395+x396));

	if (t81 != -129) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x397 = 32U;
	int32_t x398 = INT32_MIN;
	volatile int8_t x400 = INT8_MIN;
	volatile uint64_t t82 = 751569060LLU;

	t82 = ((x397%x398)+(x399+x400));

	if (t82 != 692430499LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x401 = -1;
	volatile uint8_t x403 = 12U;
	uint32_t x404 = 15111U;
	volatile uint32_t t83 = 183034824U;

	t83 = ((x401%x402)+(x403+x404));

	if (t83 != 15123U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x405 = 6;
	uint32_t x406 = 121165U;
	uint16_t x408 = UINT16_MAX;
	volatile uint64_t t84 = 3LLU;

	t84 = ((x405%x406)+(x407+x408));

	if (t84 != 65540LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = 13379;
	int32_t x414 = INT32_MAX;
	int32_t x415 = 61292253;
	int16_t x416 = -28;
	int32_t t85 = -14180829;

	t85 = ((x413%x414)+(x415+x416));

	if (t85 != 61305604) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x418 = -1;
	int16_t x419 = INT16_MAX;
	int32_t x420 = -1;
	volatile int32_t t86 = -5796289;

	t86 = ((x417%x418)+(x419+x420));

	if (t86 != 32766) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x421 = INT32_MIN;
	volatile int32_t x422 = -34;
	uint8_t x423 = UINT8_MAX;
	int64_t x424 = -1LL;
	volatile int64_t t87 = -21409943614862134LL;

	t87 = ((x421%x422)+(x423+x424));

	if (t87 != 228LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x425 = -1;
	uint8_t x426 = UINT8_MAX;
	int16_t x427 = -1;
	int8_t x428 = 22;

	t88 = ((x425%x426)+(x427+x428));

	if (t88 != 20) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x429 = UINT8_MAX;
	volatile uint8_t x431 = 39U;
	int8_t x432 = -1;
	static int64_t t89 = 697425588LL;

	t89 = ((x429%x430)+(x431+x432));

	if (t89 != 293LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x433 = UINT8_MAX;
	volatile int8_t x434 = -1;
	int32_t x435 = -1;
	int64_t t90 = -7326263898305977LL;

	t90 = ((x433%x434)+(x435+x436));

	if (t90 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x438 = -1;
	static uint32_t x439 = UINT32_MAX;
	uint32_t x440 = 1851441465U;
	volatile uint32_t t91 = 13378790U;

	t91 = ((x437%x438)+(x439+x440));

	if (t91 != 1851441464U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x442 = 28;
	int8_t x443 = 1;
	int64_t x444 = -54169262674LL;

	t92 = ((x441%x442)+(x443+x444));

	if (t92 != -54169262666LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x445 = 10U;
	volatile int32_t x446 = 3;
	uint16_t x447 = UINT16_MAX;
	volatile int32_t t93 = -1;

	t93 = ((x445%x446)+(x447+x448));

	if (t93 != 64707) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x449 = 193U;
	int8_t x450 = INT8_MIN;
	static int64_t x452 = -1LL;
	int64_t t94 = -47LL;

	t94 = ((x449%x450)+(x451+x452));

	if (t94 != -2147483456LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x453 = 0U;
	int8_t x454 = INT8_MAX;
	int32_t x455 = 610834;
	uint16_t x456 = 7U;
	static int32_t t95 = -1;

	t95 = ((x453%x454)+(x455+x456));

	if (t95 != 610841) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = INT16_MAX;
	int8_t x458 = INT8_MIN;
	volatile int16_t x459 = 32;
	static int16_t x460 = INT16_MIN;
	static volatile int32_t t96 = 11914504;

	t96 = ((x457%x458)+(x459+x460));

	if (t96 != -32609) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x465 = 5U;
	int8_t x467 = 7;
	int16_t x468 = INT16_MIN;
	volatile int32_t t97 = -453641;

	t97 = ((x465%x466)+(x467+x468));

	if (t97 != -32756) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x469 = 3U;
	uint64_t x470 = 123171657932209LLU;
	int8_t x471 = INT8_MIN;
	static uint8_t x472 = UINT8_MAX;
	volatile uint64_t t98 = 293704456952865446LLU;

	t98 = ((x469%x470)+(x471+x472));

	if (t98 != 130LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x473 = 36;
	uint64_t x474 = 373529417408101635LLU;
	static uint32_t x475 = 3272U;
	volatile uint8_t x476 = 51U;
	volatile uint64_t t99 = 28210038371426780LLU;

	t99 = ((x473%x474)+(x475+x476));

	if (t99 != 3359LLU) { NG(); } else { ; }
	
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

