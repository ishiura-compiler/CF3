#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 24778U;
uint32_t x4 = 14353064U;
int8_t x6 = -15;
static uint64_t t1 = 1095206792352323837LLU;
volatile int32_t x22 = INT32_MAX;
static int8_t x25 = INT8_MIN;
static volatile int32_t x34 = -3;
int32_t x36 = INT32_MIN;
int32_t x37 = 875827;
int64_t x38 = INT64_MIN;
int64_t x39 = -1440933943LL;
static volatile int64_t t8 = 962804228LL;
static int32_t x41 = INT32_MIN;
static int8_t x44 = INT8_MIN;
static uint64_t x67 = 2096066421LLU;
volatile int32_t t16 = -29;
uint8_t x80 = 0U;
volatile int64_t t17 = 5LL;
static int8_t x84 = INT8_MIN;
uint16_t x100 = 15525U;
int32_t t21 = -2055906;
int16_t x110 = -1;
int64_t x112 = -1LL;
int8_t x118 = -1;
uint8_t x120 = UINT8_MAX;
static volatile int64_t x126 = INT64_MIN;
uint64_t x142 = 45LLU;
volatile uint64_t t30 = 2702456713LLU;
uint64_t x147 = 365619545179937LLU;
uint64_t x148 = 98073LLU;
static uint64_t x149 = UINT64_MAX;
uint8_t x154 = 7U;
uint8_t x157 = 5U;
int8_t x160 = -1;
int8_t x163 = -1;
static int16_t x165 = 30;
int16_t x182 = 5535;
int64_t t39 = 146327479451596LL;
volatile int64_t t40 = 11819343LL;
uint8_t x198 = 2U;
int8_t x213 = INT8_MAX;
int8_t x218 = INT8_MAX;
volatile uint16_t x221 = 5649U;
int32_t x224 = -112;
uint64_t x229 = 9911149605032553LLU;
static uint64_t x231 = 20358268584LLU;
int8_t x238 = INT8_MIN;
int32_t x240 = INT32_MAX;
volatile uint32_t x252 = 19565U;
static int8_t x255 = INT8_MAX;
volatile int16_t x267 = INT16_MIN;
uint64_t x279 = UINT64_MAX;
int32_t x281 = -1;
uint16_t x290 = 28U;
int32_t t60 = 11473;
uint8_t x311 = UINT8_MAX;
volatile int32_t x312 = -465725;
uint32_t x317 = 14822U;
int32_t x321 = INT32_MAX;
uint64_t x327 = 1191914604970LLU;
uint32_t x328 = 50652U;
int8_t x330 = -1;
static volatile uint32_t x331 = 2U;
uint64_t t66 = 6374220LLU;
int32_t x342 = INT32_MAX;
int64_t x345 = INT64_MIN;
static volatile int64_t t69 = -40357109LL;
int16_t x352 = 1;
uint64_t t70 = 109LLU;
int64_t x354 = -1LL;
volatile int64_t t71 = -114426437276636706LL;
uint8_t x372 = 7U;
volatile int64_t t73 = 52212361970715LL;
int8_t x373 = INT8_MAX;
uint64_t x375 = UINT64_MAX;
static uint64_t x376 = 1172LLU;
static uint32_t x382 = 116510U;
uint64_t x383 = UINT64_MAX;
int32_t x389 = INT32_MAX;
volatile int16_t x391 = INT16_MIN;
static int16_t x393 = -5;
static uint8_t x396 = 111U;
volatile uint32_t t78 = 925U;
int16_t x403 = -297;
int32_t x410 = INT32_MAX;
volatile uint64_t t81 = 38398669901100LLU;
uint32_t x418 = 36584U;
uint32_t t83 = 1691U;
int8_t x448 = INT8_MAX;
int8_t x450 = INT8_MIN;
int8_t x452 = INT8_MIN;
volatile int32_t t89 = 47;
uint16_t x456 = UINT16_MAX;
static int8_t x467 = -1;
volatile int32_t x468 = 94;
uint64_t t91 = 8447521488329LLU;
static int32_t x475 = 57984;
static int16_t x476 = 215;
static uint16_t x483 = 15U;
volatile int16_t x497 = INT16_MIN;
int8_t x498 = -18;
int32_t x500 = INT32_MIN;
int64_t x502 = INT64_MIN;
volatile int64_t t96 = -630287178528302LL;
volatile uint64_t t97 = 15063966455LLU;
volatile int16_t x513 = -1;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	volatile uint32_t t0 = 35U;

	t0 = ((x1/x2)-(x3+x4));

	if (t0 != 4280614360U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x7 = INT32_MIN;
	volatile uint64_t x8 = UINT64_MAX;

	t1 = ((x5/x6)-(x7+x8));

	if (t1 != 614891471271135369LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int64_t x10 = INT64_MAX;
	int32_t x11 = -90915077;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 631309330388920LLU;

	t2 = ((x9/x10)-(x11+x12));

	if (t2 != 90915080LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile uint16_t x14 = 2291U;
	int16_t x15 = INT16_MAX;
	int16_t x16 = INT16_MAX;
	static int32_t t3 = -187845466;

	t3 = ((x13/x14)-(x15+x16));

	if (t3 != -1002890) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -119276;
	int64_t x18 = -1LL;
	uint64_t x19 = 782609109659621LLU;
	int8_t x20 = 3;
	static uint64_t t4 = 40323672927950733LLU;

	t4 = ((x17/x18)-(x19+x20));

	if (t4 != 18445961464600011268LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 703445;
	static int64_t x23 = INT64_MAX;
	int16_t x24 = INT16_MIN;
	int64_t t5 = 179166794LL;

	t5 = ((x21/x22)-(x23+x24));

	if (t5 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	uint64_t x27 = 7034305342642LLU;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 155044540LLU;

	t6 = ((x25/x26)-(x27+x28));

	if (t6 != 18446737039404208975LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	volatile uint64_t x35 = 45780830LLU;
	volatile uint64_t t7 = 2233567014642161735LLU;

	t7 = ((x33/x34)-(x35+x36));

	if (t7 != 2101713740LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x40 = INT16_MIN;

	t8 = ((x37/x38)-(x39+x40));

	if (t8 != 1440966711LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x42 = 28U;
	volatile int16_t x43 = INT16_MIN;
	volatile int32_t t9 = 302088;

	t9 = ((x41/x42)-(x43+x44));

	if (t9 != -76662948) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -897;
	uint8_t x50 = 2U;
	volatile int16_t x51 = INT16_MIN;
	volatile int32_t x52 = 8;
	volatile int32_t t10 = -6;

	t10 = ((x49/x50)-(x51+x52));

	if (t10 != 32312) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 472265134296LLU;
	int64_t x54 = 20578LL;
	int64_t x55 = -1LL;
	int32_t x56 = INT32_MAX;
	volatile uint64_t t11 = 3795974LLU;

	t11 = ((x53/x54)-(x55+x56));

	if (t11 != 18446744071585017971LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	static int64_t x58 = 26721974LL;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t12 = 204701LLU;

	t12 = ((x57/x58)-(x59+x60));

	if (t12 != 289LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = 35;
	int32_t x63 = INT32_MAX;
	uint32_t x64 = UINT32_MAX;
	uint32_t t13 = 1942U;

	t13 = ((x61/x62)-(x63+x64));

	if (t13 != 2147485522U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 56U;
	int32_t x66 = -1;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t14 = 5LLU;

	t14 = ((x65/x66)-(x67+x68));

	if (t14 != 18446744071613517907LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	uint32_t x70 = 329636587U;
	volatile int16_t x71 = INT16_MAX;
	int64_t x72 = -1LL;
	int64_t t15 = 755521495405669285LL;

	t15 = ((x69/x70)-(x71+x72));

	if (t15 != -32753LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 52;
	uint16_t x74 = 1U;
	uint16_t x75 = 2041U;
	int32_t x76 = INT32_MIN;

	t16 = ((x73/x74)-(x75+x76));

	if (t16 != 2147481659) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	volatile int64_t x78 = INT64_MIN;
	static int64_t x79 = INT64_MAX;

	t17 = ((x77/x78)-(x79+x80));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x82 = UINT8_MAX;
	volatile uint64_t x83 = 14155706LLU;
	volatile uint64_t t18 = 356847022770410LLU;

	t18 = ((x81/x82)-(x83+x84));

	if (t18 != 18446744073695396038LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile int16_t x86 = INT16_MIN;
	static int16_t x87 = -4;
	int32_t x88 = INT32_MAX;
	volatile uint64_t t19 = 209184612LLU;

	t19 = ((x85/x86)-(x87+x88));

	if (t19 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -9;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = 1;
	int64_t x96 = -1LL;
	volatile int64_t t20 = 503927384383121LL;

	t20 = ((x93/x94)-(x95+x96));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = UINT16_MAX;
	uint8_t x98 = UINT8_MAX;
	int16_t x99 = INT16_MIN;

	t21 = ((x97/x98)-(x99+x100));

	if (t21 != 17500) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x101 = UINT16_MAX;
	uint16_t x102 = 3U;
	int64_t x103 = INT64_MAX;
	static int32_t x104 = -1;
	static volatile int64_t t22 = -30876964897LL;

	t22 = ((x101/x102)-(x103+x104));

	if (t22 != -9223372036854753961LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MIN;
	uint16_t x107 = UINT16_MAX;
	static int16_t x108 = INT16_MAX;
	volatile int32_t t23 = 323890;

	t23 = ((x105/x106)-(x107+x108));

	if (t23 != 16678914) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x109 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	int64_t t24 = 2055LL;

	t24 = ((x109/x110)-(x111+x112));

	if (t24 != 32770LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x117 = UINT16_MAX;
	volatile uint32_t x119 = UINT32_MAX;
	volatile uint32_t t25 = 68817U;

	t25 = ((x117/x118)-(x119+x120));

	if (t25 != 4294901507U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 5U;
	int16_t x122 = INT16_MIN;
	volatile int32_t x123 = -1;
	volatile int8_t x124 = -1;
	volatile int32_t t26 = -219435;

	t26 = ((x121/x122)-(x123+x124));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = -168;
	int8_t x127 = INT8_MIN;
	static uint64_t x128 = 30127164932LLU;
	static uint64_t t27 = 5098424071212LLU;

	t27 = ((x125/x126)-(x127+x128));

	if (t27 != 18446744043582386812LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MAX;
	int8_t x131 = INT8_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t28 = 10830872197417LLU;

	t28 = ((x129/x130)-(x131+x132));

	if (t28 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = 24U;
	int32_t x138 = INT32_MIN;
	static uint64_t x139 = 59619696760LLU;
	static int8_t x140 = -15;
	volatile uint64_t t29 = 3785LLU;

	t29 = ((x137/x138)-(x139+x140));

	if (t29 != 18446744014089854871LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MIN;
	static uint8_t x143 = 10U;
	uint8_t x144 = UINT8_MAX;

	t30 = ((x141/x142)-(x143+x144));

	if (t30 != 409927646034712356LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	volatile uint8_t x146 = 1U;
	volatile uint64_t t31 = 66037377LLU;

	t31 = ((x145/x146)-(x147+x148));

	if (t31 != 18446378454164273733LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x150 = UINT8_MAX;
	int8_t x151 = INT8_MIN;
	static uint8_t x152 = UINT8_MAX;
	uint64_t t32 = 74911LLU;

	t32 = ((x149/x150)-(x151+x152));

	if (t32 != 72340172838076546LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = 24;
	static int64_t x155 = INT64_MIN;
	uint16_t x156 = 42U;
	static int64_t t33 = 20953917154LL;

	t33 = ((x153/x154)-(x155+x156));

	if (t33 != 9223372036854775769LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x158 = 88308321U;
	uint16_t x159 = 23U;
	uint32_t t34 = 13301705U;

	t34 = ((x157/x158)-(x159+x160));

	if (t34 != 4294967274U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MAX;
	static int8_t x164 = -1;
	int64_t t35 = 1LL;

	t35 = ((x161/x162)-(x163+x164));

	if (t35 != -72624976668147839LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x166 = UINT32_MAX;
	uint8_t x167 = UINT8_MAX;
	static int16_t x168 = INT16_MAX;
	uint32_t t36 = 646U;

	t36 = ((x165/x166)-(x167+x168));

	if (t36 != 4294934274U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = 398;
	int64_t x171 = -6609726138179603LL;
	int32_t x172 = -1;
	int64_t t37 = -471288LL;

	t37 = ((x169/x170)-(x171+x172));

	if (t37 != 6609726138179522LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = 13U;
	volatile int8_t x183 = 1;
	uint8_t x184 = 1U;
	int32_t t38 = 4032871;

	t38 = ((x181/x182)-(x183+x184));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x185 = 1972LL;
	static int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	int64_t x188 = -3828394LL;

	t39 = ((x185/x186)-(x187+x188));

	if (t39 != -9223372036850947413LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x193 = 2U;
	static volatile int32_t x194 = INT32_MIN;
	int64_t x195 = -57150261LL;
	uint8_t x196 = 1U;

	t40 = ((x193/x194)-(x195+x196));

	if (t40 != 57150260LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x197 = INT16_MAX;
	volatile uint8_t x199 = 102U;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t41 = -54;

	t41 = ((x197/x198)-(x199+x200));

	if (t41 != 16409) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MIN;
	static int16_t x211 = INT16_MIN;
	static uint8_t x212 = 1U;
	int32_t t42 = 10477;

	t42 = ((x209/x210)-(x211+x212));

	if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x214 = INT64_MIN;
	volatile int32_t x215 = INT32_MIN;
	static uint8_t x216 = UINT8_MAX;
	volatile int64_t t43 = 2115734411087LL;

	t43 = ((x213/x214)-(x215+x216));

	if (t43 != 2147483393LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x217 = -212;
	int32_t x219 = -1;
	int64_t x220 = -1LL;
	volatile int64_t t44 = 234669409776LL;

	t44 = ((x217/x218)-(x219+x220));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x222 = 71LL;
	volatile int64_t x223 = 427389240709LL;
	volatile int64_t t45 = -22231LL;

	t45 = ((x221/x222)-(x223+x224));

	if (t45 != -427389240518LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MAX;
	uint16_t x227 = UINT16_MAX;
	uint8_t x228 = 15U;
	int32_t t46 = -16726446;

	t46 = ((x225/x226)-(x227+x228));

	if (t46 != -131088) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x230 = -1;
	int32_t x232 = -1;
	volatile uint64_t t47 = 11LLU;

	t47 = ((x229/x230)-(x231+x232));

	if (t47 != 18446744053351283033LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	uint32_t x235 = UINT32_MAX;
	int8_t x236 = INT8_MIN;
	volatile uint32_t t48 = 268804U;

	t48 = ((x233/x234)-(x235+x236));

	if (t48 != 129U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = 27978424036890095LL;
	int64_t x239 = INT64_MIN;
	volatile int64_t t49 = -24LL;

	t49 = ((x237/x238)-(x239+x240));

	if (t49 != 9223153453269503958LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x241 = 64934U;
	volatile uint16_t x242 = 24615U;
	uint32_t x243 = 8U;
	int8_t x244 = INT8_MIN;
	uint32_t t50 = 7U;

	t50 = ((x241/x242)-(x243+x244));

	if (t50 != 122U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = UINT64_MAX;
	uint64_t x247 = UINT64_MAX;
	int64_t x248 = -1740069980394355256LL;
	volatile uint64_t t51 = 13948462010LLU;

	t51 = ((x245/x246)-(x247+x248));

	if (t51 != 1740069980394355257LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x249 = UINT16_MAX;
	uint8_t x250 = UINT8_MAX;
	static int16_t x251 = -1;
	volatile uint32_t t52 = 87029U;

	t52 = ((x249/x250)-(x251+x252));

	if (t52 != 4294947989U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x253 = UINT32_MAX;
	volatile int32_t x254 = 14971;
	int32_t x256 = 6;
	volatile uint32_t t53 = 1726555U;

	t53 = ((x253/x254)-(x255+x256));

	if (t53 != 286752U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MAX;
	int16_t x268 = -5063;
	int64_t t54 = 2874156891236404482LL;

	t54 = ((x265/x266)-(x267+x268));

	if (t54 != 37830LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x269 = INT64_MIN;
	static int32_t x270 = -1463625;
	uint16_t x271 = 26U;
	uint16_t x272 = UINT16_MAX;
	volatile int64_t t55 = -600649249652LL;

	t55 = ((x269/x270)-(x271+x272));

	if (t55 != 6301731619026LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int64_t x278 = INT64_MAX;
	uint16_t x280 = 20U;
	uint64_t t56 = 1786LLU;

	t56 = ((x277/x278)-(x279+x280));

	if (t56 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x282 = 12U;
	static uint64_t x283 = UINT64_MAX;
	int64_t x284 = INT64_MIN;
	static volatile uint64_t t57 = 925480278LLU;

	t57 = ((x281/x282)-(x283+x284));

	if (t57 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x285 = INT64_MAX;
	uint32_t x286 = 14626375U;
	int16_t x287 = -482;
	uint8_t x288 = 0U;
	int64_t t58 = -1109238490413735706LL;

	t58 = ((x285/x286)-(x287+x288));

	if (t58 != 630598630481LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x289 = UINT8_MAX;
	int64_t x291 = -1LL;
	static int32_t x292 = INT32_MIN;
	volatile int64_t t59 = -3022659506551LL;

	t59 = ((x289/x290)-(x291+x292));

	if (t59 != 2147483658LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x297 = UINT8_MAX;
	volatile int8_t x298 = -53;
	int32_t x299 = 980;
	static int8_t x300 = INT8_MIN;

	t60 = ((x297/x298)-(x299+x300));

	if (t60 != -856) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int64_t x306 = -13596404119064424LL;
	static volatile int8_t x307 = INT8_MAX;
	static volatile int64_t x308 = -1LL;
	static volatile int64_t t61 = -914138469LL;

	t61 = ((x305/x306)-(x307+x308));

	if (t61 != 552LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x309 = 9556133120LLU;
	int64_t x310 = 1173272019LL;
	uint64_t t62 = 38784785063486718LLU;

	t62 = ((x309/x310)-(x311+x312));

	if (t62 != 465478LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x318 = -1;
	int16_t x319 = -1;
	static int32_t x320 = -6598473;
	static uint32_t t63 = 41U;

	t63 = ((x317/x318)-(x319+x320));

	if (t63 != 6598474U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x322 = UINT64_MAX;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = UINT16_MAX;
	static volatile uint64_t t64 = 2255LLU;

	t64 = ((x321/x322)-(x323+x324));

	if (t64 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x325 = -1;
	int16_t x326 = INT16_MAX;
	uint64_t t65 = 12LLU;

	t65 = ((x325/x326)-(x327+x328));

	if (t65 != 18446742881794895994LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x329 = 6;
	uint64_t x332 = 9822430164LLU;

	t66 = ((x329/x330)-(x331+x332));

	if (t66 != 18446744063887121444LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x337 = -1;
	uint32_t x338 = 1404278142U;
	uint32_t x339 = 511316835U;
	uint16_t x340 = UINT16_MAX;
	volatile uint32_t t67 = 81996666U;

	t67 = ((x337/x338)-(x339+x340));

	if (t67 != 3783584929U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x341 = INT64_MIN;
	static int8_t x343 = INT8_MIN;
	volatile int16_t x344 = INT16_MAX;
	volatile int64_t t68 = -227906LL;

	t68 = ((x341/x342)-(x343+x344));

	if (t68 != -4294999937LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x346 = 63U;
	uint16_t x347 = 111U;
	uint8_t x348 = 101U;

	t69 = ((x345/x346)-(x347+x348));

	if (t69 != -146402730743726812LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	static volatile int8_t x351 = -1;

	t70 = ((x349/x350)-(x351+x352));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x355 = 14;
	int64_t x356 = -1LL;

	t71 = ((x353/x354)-(x355+x356));

	if (t71 != -268LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x365 = 2413;
	static uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MAX;
	int8_t x368 = -3;
	int32_t t72 = 108032;

	t72 = ((x365/x366)-(x367+x368));

	if (t72 != -32764) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x369 = UINT16_MAX;
	static int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MIN;

	t73 = ((x369/x370)-(x371+x372));

	if (t73 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x374 = 8U;
	volatile uint64_t t74 = 3607943372060LLU;

	t74 = ((x373/x374)-(x375+x376));

	if (t74 != 18446744073709550460LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x377 = -1LL;
	int16_t x378 = -1;
	int16_t x379 = INT16_MAX;
	uint16_t x380 = 11396U;
	volatile int64_t t75 = -3LL;

	t75 = ((x377/x378)-(x379+x380));

	if (t75 != -44162LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = -961;
	static int8_t x384 = -10;
	volatile uint64_t t76 = 0LLU;

	t76 = ((x381/x382)-(x383+x384));

	if (t76 != 36874LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x390 = INT32_MIN;
	uint16_t x392 = 2U;
	int32_t t77 = -240;

	t77 = ((x389/x390)-(x391+x392));

	if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x394 = INT16_MIN;
	uint32_t x395 = 3U;

	t78 = ((x393/x394)-(x395+x396));

	if (t78 != 4294967182U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = INT64_MIN;
	uint16_t x398 = 20U;
	volatile int8_t x399 = 7;
	static int64_t x400 = -1LL;
	volatile int64_t t79 = -16049LL;

	t79 = ((x397/x398)-(x399+x400));

	if (t79 != -461168601842738796LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = -15;
	static int16_t x402 = 710;
	volatile uint64_t x404 = UINT64_MAX;
	uint64_t t80 = 410673LLU;

	t80 = ((x401/x402)-(x403+x404));

	if (t80 != 298LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x409 = INT8_MIN;
	static volatile int32_t x411 = INT32_MIN;
	uint64_t x412 = 746LLU;

	t81 = ((x409/x410)-(x411+x412));

	if (t81 != 2147482902LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = -1;
	int32_t x414 = INT32_MAX;
	static int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t82 = 1;

	t82 = ((x413/x414)-(x415+x416));

	if (t82 != -32639) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x417 = -1;
	int16_t x419 = INT16_MIN;
	volatile int32_t x420 = 95187;

	t83 = ((x417/x418)-(x419+x420));

	if (t83 != 54981U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x421 = UINT8_MAX;
	uint64_t x422 = UINT64_MAX;
	int8_t x423 = INT8_MAX;
	int64_t x424 = INT64_MIN;
	uint64_t t84 = 644555858LLU;

	t84 = ((x421/x422)-(x423+x424));

	if (t84 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x425 = 44;
	int64_t x426 = -1LL;
	volatile int32_t x427 = 89917789;
	uint32_t x428 = UINT32_MAX;
	int64_t t85 = 1LL;

	t85 = ((x425/x426)-(x427+x428));

	if (t85 != -89917832LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x429 = 59;
	uint16_t x430 = UINT16_MAX;
	uint32_t x431 = 22551837U;
	int16_t x432 = INT16_MIN;
	volatile uint32_t t86 = 15U;

	t86 = ((x429/x430)-(x431+x432));

	if (t86 != 4272448227U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x437 = UINT32_MAX;
	int64_t x438 = INT64_MIN;
	volatile int64_t x439 = -60074067LL;
	int32_t x440 = INT32_MAX;
	static int64_t t87 = -560138804373LL;

	t87 = ((x437/x438)-(x439+x440));

	if (t87 != -2087409580LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x445 = -1;
	int16_t x446 = INT16_MAX;
	int16_t x447 = INT16_MIN;
	int32_t t88 = 23789719;

	t88 = ((x445/x446)-(x447+x448));

	if (t88 != 32641) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x449 = INT32_MAX;
	volatile int32_t x451 = 8332465;

	t89 = ((x449/x450)-(x451+x452));

	if (t89 != -25109552) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x453 = 3907164U;
	int64_t x454 = INT64_MIN;
	uint8_t x455 = UINT8_MAX;
	volatile int64_t t90 = -126355LL;

	t90 = ((x453/x454)-(x455+x456));

	if (t90 != -65790LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x465 = INT8_MIN;
	uint64_t x466 = UINT64_MAX;

	t91 = ((x465/x466)-(x467+x468));

	if (t91 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x473 = 103U;
	uint32_t x474 = UINT32_MAX;
	uint32_t t92 = 4173U;

	t92 = ((x473/x474)-(x475+x476));

	if (t92 != 4294909097U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x481 = UINT16_MAX;
	uint16_t x482 = 14688U;
	int8_t x484 = -1;
	int32_t t93 = 21516422;

	t93 = ((x481/x482)-(x483+x484));

	if (t93 != -10) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x493 = 1U;
	static volatile int32_t x494 = 200;
	int16_t x495 = 2384;
	static int32_t x496 = 12286;
	static int32_t t94 = 2;

	t94 = ((x493/x494)-(x495+x496));

	if (t94 != -14670) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x499 = UINT16_MAX;
	int32_t t95 = -208;

	t95 = ((x497/x498)-(x499+x500));

	if (t95 != 2147419933) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x501 = INT64_MAX;
	static uint32_t x503 = 7U;
	uint8_t x504 = UINT8_MAX;

	t96 = ((x501/x502)-(x503+x504));

	if (t96 != -262LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x505 = INT8_MIN;
	int32_t x506 = -1;
	static volatile int8_t x507 = INT8_MAX;
	uint64_t x508 = UINT64_MAX;

	t97 = ((x505/x506)-(x507+x508));

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x509 = INT16_MAX;
	static int64_t x510 = INT64_MIN;
	uint64_t x511 = UINT64_MAX;
	uint16_t x512 = 24U;
	volatile uint64_t t98 = 13399672620LLU;

	t98 = ((x509/x510)-(x511+x512));

	if (t98 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x514 = 6U;
	uint64_t x515 = 9176132401118LLU;
	uint8_t x516 = UINT8_MAX;
	uint64_t t99 = 4LLU;

	t99 = ((x513/x514)-(x515+x516));

	if (t99 != 18446734897577150243LLU) { NG(); } else { ; }
	
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

