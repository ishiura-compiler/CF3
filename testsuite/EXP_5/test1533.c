#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x18 = 235U;
volatile uint16_t x19 = 904U;
uint16_t x27 = 72U;
uint8_t x29 = 9U;
volatile uint16_t x30 = 1U;
volatile int16_t x31 = INT16_MIN;
uint8_t x32 = 12U;
uint32_t x33 = UINT32_MAX;
volatile int32_t t8 = 780220;
volatile uint32_t x43 = 479573213U;
volatile int64_t t9 = -1140114LL;
uint64_t x47 = 31611322LLU;
int8_t x48 = -1;
int32_t t10 = 10088;
uint16_t x49 = UINT16_MAX;
volatile int32_t x50 = INT32_MAX;
int64_t x54 = -212LL;
uint32_t t12 = 8431U;
int32_t x60 = -1;
int32_t t14 = -335247595;
int32_t x67 = -246101;
static int64_t x69 = -577713482153LL;
int64_t x70 = -1LL;
static int8_t x71 = INT8_MIN;
volatile int32_t t17 = 40925247;
uint8_t x85 = 91U;
int64_t x92 = 6LL;
volatile int64_t x94 = INT64_MAX;
uint32_t x95 = UINT32_MAX;
static volatile int64_t t21 = -402617LL;
static int64_t x103 = -17952504LL;
int8_t x106 = -1;
static int64_t x107 = -31187216LL;
int64_t x115 = -5641139LL;
volatile int64_t x117 = INT64_MIN;
uint16_t x120 = UINT16_MAX;
int64_t x123 = INT64_MAX;
static int32_t t28 = 178627;
uint64_t x125 = 344876LLU;
static volatile int64_t x131 = 15406233792LL;
int32_t x135 = INT32_MIN;
int32_t x136 = INT32_MIN;
int8_t x141 = -1;
int32_t x150 = INT32_MIN;
int8_t x154 = INT8_MIN;
int64_t x155 = -1LL;
int16_t x156 = INT16_MIN;
int8_t x160 = INT8_MIN;
volatile int32_t t40 = -21;
int32_t x173 = -24;
static int32_t t42 = 113031;
int32_t x191 = INT32_MIN;
uint32_t x192 = UINT32_MAX;
volatile int8_t x196 = -1;
uint32_t x202 = UINT32_MAX;
int8_t x207 = INT8_MIN;
volatile uint8_t x211 = 10U;
int32_t t49 = -300;
int8_t x215 = INT8_MIN;
int16_t x219 = 1;
int64_t x225 = -4080LL;
volatile int32_t t54 = -45;
int16_t x238 = INT16_MAX;
uint32_t x242 = 97U;
int8_t x246 = INT8_MIN;
uint64_t x247 = 511LLU;
int8_t x254 = INT8_MIN;
volatile uint64_t t61 = UINT64_MAX;
uint32_t x266 = 14820U;
int64_t x267 = 6LL;
volatile int64_t t64 = 68491LL;
uint32_t x274 = 45116U;
int16_t x276 = -219;
uint16_t x278 = 656U;
int16_t x280 = 2;
static int64_t x288 = -1LL;
int16_t x291 = 0;
int64_t x293 = INT64_MIN;
uint16_t x299 = 323U;
volatile int8_t x305 = INT8_MIN;
int32_t t73 = -555223;
volatile int64_t t74 = -2048947667698LL;
int64_t x317 = 105433770389717779LL;
int32_t x324 = -128927;
int16_t x332 = -1;
int32_t t79 = INT32_MIN;
int16_t x342 = INT16_MAX;
int64_t x349 = 2988768LL;
static int64_t x351 = 28301504LL;
uint8_t x366 = 15U;
volatile int16_t x370 = -1;
uint32_t x377 = 12633U;
static volatile uint32_t t90 = 13520897U;
static int16_t x381 = INT16_MAX;
static volatile uint64_t t91 = 1335308LLU;
uint32_t x387 = UINT32_MAX;
volatile int64_t x388 = INT64_MIN;
volatile uint64_t x390 = UINT64_MAX;
static int32_t x394 = 908234;
int32_t x395 = -1;
volatile uint64_t x397 = 1932LLU;
volatile int16_t x399 = INT16_MIN;
uint8_t x400 = UINT8_MAX;
int64_t x407 = 52333369LL;
int64_t x408 = INT64_MIN;
uint64_t x410 = 11273637299LLU;
volatile uint64_t t99 = 58056362461179018LLU;


void f0(void) {
	int8_t x5 = -3;
	static int16_t x6 = INT16_MIN;
	static int32_t x7 = 149094419;
	uint16_t x8 = 7U;
	volatile int32_t t0 = 775226;

	t0 = (x5|((x6<=x7)+x8));

	if (t0 != -3) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = 187;
	uint8_t x10 = 7U;
	int16_t x11 = -1;
	volatile uint32_t x12 = 17672252U;
	uint32_t t1 = 1800U;

	t1 = (x9|((x10<=x11)+x12));

	if (t1 != 17672383U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -90345690245159325LL;
	int8_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = 0;
	volatile int64_t t2 = 321044739109157LL;

	t2 = (x13|((x14<=x15)+x16));

	if (t2 != -90345690245159325LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	static int64_t x20 = 1LL;
	int64_t t3 = -25LL;

	t3 = (x17|((x18<=x19)+x20));

	if (t3 != 255LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 1399517416462LLU;
	static uint8_t x22 = 20U;
	int16_t x23 = -1;
	uint32_t x24 = 32695U;
	uint64_t t4 = 291584874769LLU;

	t4 = (x21|((x22<=x23)+x24));

	if (t4 != 1399517446079LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	int16_t x28 = -57;
	volatile int32_t t5 = -550;

	t5 = (x25|((x26<=x27)+x28));

	if (t5 != -56) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t t6 = -380078663;

	t6 = (x29|((x30<=x31)+x32));

	if (t6 != 13) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	int8_t x35 = -1;
	uint16_t x36 = 0U;
	uint32_t t7 = UINT32_MAX;

	t7 = (x33|((x34<=x35)+x36));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -20;
	int64_t x38 = -508905701450838LL;
	int64_t x39 = -1LL;
	int16_t x40 = -13538;

	t8 = (x37|((x38<=x39)+x40));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 539362452LL;
	uint16_t x42 = 1688U;
	uint32_t x44 = UINT32_MAX;

	t9 = (x41|((x42<=x43)+x44));

	if (t9 != 539362452LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	static uint32_t x46 = UINT32_MAX;

	t10 = (x45|((x46<=x47)+x48));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x51 = UINT16_MAX;
	volatile uint8_t x52 = 15U;
	volatile int32_t t11 = 116678;

	t11 = (x49|((x50<=x51)+x52));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = 1889353165U;
	static uint16_t x55 = UINT16_MAX;
	int16_t x56 = INT16_MIN;

	t12 = (x53|((x54<=x55)+x56));

	if (t12 != 4294950349U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MAX;
	volatile int16_t x58 = -1;
	int64_t x59 = -3LL;
	volatile int32_t t13 = 19970704;

	t13 = (x57|((x58<=x59)+x60));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static int64_t x62 = INT64_MIN;
	static uint16_t x63 = 9962U;
	uint16_t x64 = 1U;

	t14 = (x61|((x62<=x63)+x64));

	if (t14 != -32766) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int32_t x66 = 125;
	int8_t x68 = INT8_MAX;
	int64_t t15 = 3872322591726280LL;

	t15 = (x65|((x66<=x67)+x68));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x72 = INT64_MIN;
	volatile int64_t t16 = -2935397065361LL;

	t16 = (x69|((x70<=x71)+x72));

	if (t16 != -577713482153LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = -127;
	int8_t x75 = 1;
	volatile int16_t x76 = INT16_MIN;

	t17 = (x73|((x74<=x75)+x76));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 11U;
	static uint32_t x82 = 18879U;
	static int8_t x83 = -1;
	uint32_t x84 = 62597U;
	uint32_t t18 = 58558258U;

	t18 = (x81|((x82<=x83)+x84));

	if (t18 != 62607U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t19 = 18204;

	t19 = (x85|((x86<=x87)+x88));

	if (t19 != -2147483557) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 2U;
	int16_t x91 = -1;
	int64_t t20 = 2096585457715LL;

	t20 = (x89|((x90<=x91)+x92));

	if (t20 != -122LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = -1LL;
	uint16_t x96 = 10U;

	t21 = (x93|((x94<=x95)+x96));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = -1;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -32333LL;
	uint32_t x100 = 54452348U;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x97|((x98<=x99)+x100));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MIN;
	int8_t x104 = INT8_MIN;
	static int32_t t23 = -3184653;

	t23 = (x101|((x102<=x103)+x104));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MAX;
	volatile uint8_t x108 = 13U;
	volatile int32_t t24 = 15762942;

	t24 = (x105|((x106<=x107)+x108));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x109 = INT16_MIN;
	int32_t x110 = -1;
	volatile int32_t x111 = INT32_MAX;
	static int32_t x112 = INT32_MIN;
	int32_t t25 = 2;

	t25 = (x109|((x110<=x111)+x112));

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x114 = -1;
	int32_t x116 = INT32_MAX;
	int32_t t26 = INT32_MAX;

	t26 = (x113|((x114<=x115)+x116));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x118 = UINT16_MAX;
	int8_t x119 = -1;
	int64_t t27 = -31962612144077159LL;

	t27 = (x117|((x118<=x119)+x120));

	if (t27 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 9U;
	int8_t x122 = INT8_MAX;
	volatile int8_t x124 = INT8_MIN;

	t28 = (x121|((x122<=x123)+x124));

	if (t28 != -119) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = -1LL;
	int32_t x127 = -1;
	int8_t x128 = INT8_MIN;
	uint64_t t29 = 86927161782372054LLU;

	t29 = (x125|((x126<=x127)+x128));

	if (t29 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int64_t x130 = 347295067121LL;
	uint8_t x132 = 44U;
	int32_t t30 = -9;

	t30 = (x129|((x130<=x131)+x132));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = UINT8_MAX;
	static volatile uint64_t x134 = 882LLU;
	int32_t t31 = -124075062;

	t31 = (x133|((x134<=x135)+x136));

	if (t31 != -2147483393) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = -18;
	uint32_t x139 = 611100U;
	int64_t x140 = INT64_MIN;
	volatile int64_t t32 = 75217LL;

	t32 = (x137|((x138<=x139)+x140));

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x142 = INT16_MIN;
	int16_t x143 = -1;
	uint8_t x144 = 0U;
	volatile int32_t t33 = 2;

	t33 = (x141|((x142<=x143)+x144));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x145 = 4U;
	int32_t x146 = INT32_MAX;
	volatile uint8_t x147 = 35U;
	int32_t x148 = 290306;
	int32_t t34 = 167;

	t34 = (x145|((x146<=x147)+x148));

	if (t34 != 290310) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = INT32_MIN;
	static int16_t x151 = 108;
	static int32_t x152 = INT32_MIN;
	static volatile int32_t t35 = -471;

	t35 = (x149|((x150<=x151)+x152));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 6208U;
	volatile int32_t t36 = 5558;

	t36 = (x153|((x154<=x155)+x156));

	if (t36 != -26559) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -18;
	uint8_t x158 = 0U;
	int32_t x159 = INT32_MAX;
	int32_t t37 = -2;

	t37 = (x157|((x158<=x159)+x160));

	if (t37 != -17) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MAX;
	static int32_t x162 = INT32_MIN;
	volatile uint8_t x163 = 6U;
	int16_t x164 = -1;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x161|((x162<=x163)+x164));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = 11824821LL;
	int64_t x166 = 11336186415849327LL;
	uint8_t x167 = 1U;
	int8_t x168 = INT8_MAX;
	int64_t t39 = 259157LL;

	t39 = (x165|((x166<=x167)+x168));

	if (t39 != 11824895LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	volatile int8_t x170 = 10;
	volatile uint8_t x171 = 5U;
	int16_t x172 = 2;

	t40 = (x169|((x170<=x171)+x172));

	if (t40 != -126) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x174 = 0;
	int16_t x175 = -1;
	uint16_t x176 = 3802U;
	static volatile int32_t t41 = -2;

	t41 = (x173|((x174<=x175)+x176));

	if (t41 != -6) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x177 = INT16_MIN;
	int8_t x178 = 10;
	uint8_t x179 = 46U;
	volatile int32_t x180 = -1;

	t42 = (x177|((x178<=x179)+x180));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = 0U;
	int64_t x186 = INT64_MAX;
	uint32_t x187 = 225U;
	int64_t x188 = -88091LL;
	volatile int64_t t43 = 29253643LL;

	t43 = (x185|((x186<=x187)+x188));

	if (t43 != -88091LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 34965123U;
	uint64_t x190 = 176LLU;
	volatile uint32_t t44 = 21589U;

	t44 = (x189|((x190<=x191)+x192));

	if (t44 != 34965123U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	volatile int32_t t45 = 3209;

	t45 = (x193|((x194<=x195)+x196));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x197 = 4U;
	int32_t x198 = 374107;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = -11492LL;
	int64_t t46 = 106415LL;

	t46 = (x197|((x198<=x199)+x200));

	if (t46 != -11492LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	static int8_t x203 = -1;
	static uint16_t x204 = UINT16_MAX;
	static volatile int32_t t47 = -3391;

	t47 = (x201|((x202<=x203)+x204));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x205 = -1;
	static int8_t x206 = -1;
	int8_t x208 = INT8_MIN;
	volatile int32_t t48 = -12;

	t48 = (x205|((x206<=x207)+x208));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -20913597;
	static uint8_t x210 = 1U;
	uint8_t x212 = UINT8_MAX;

	t49 = (x209|((x210<=x211)+x212));

	if (t49 != -20913341) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 31U;
	static uint16_t x214 = 3U;
	volatile int32_t x216 = 270660;
	volatile int32_t t50 = -11613;

	t50 = (x213|((x214<=x215)+x216));

	if (t50 != 270687) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = -1LL;
	int64_t x218 = INT64_MIN;
	int16_t x220 = INT16_MIN;
	static volatile int64_t t51 = 3LL;

	t51 = (x217|((x218<=x219)+x220));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 12590U;
	volatile int32_t x222 = -1;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 167U;
	static int32_t t52 = 851878569;

	t52 = (x221|((x222<=x223)+x224));

	if (t52 != 12719) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x226 = INT16_MAX;
	static volatile uint32_t x227 = 602295473U;
	int8_t x228 = INT8_MIN;
	volatile int64_t t53 = -235369927LL;

	t53 = (x225|((x226<=x227)+x228));

	if (t53 != -111LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 0U;
	volatile int32_t x230 = INT32_MIN;
	int32_t x231 = -396707;
	int32_t x232 = -2486;

	t54 = (x229|((x230<=x231)+x232));

	if (t54 != -2485) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MAX;
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = -1;
	int32_t x236 = -1;
	int32_t t55 = INT32_MAX;

	t55 = (x233|((x234<=x235)+x236));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	static int32_t x239 = INT32_MIN;
	static int8_t x240 = -4;
	volatile int32_t t56 = -39086901;

	t56 = (x237|((x238<=x239)+x240));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x241 = INT64_MIN;
	int64_t x243 = -1LL;
	int32_t x244 = 7534;
	volatile int64_t t57 = -242647427LL;

	t57 = (x241|((x242<=x243)+x244));

	if (t57 != -9223372036854768274LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = -1125LL;
	static int32_t x248 = INT32_MAX;
	volatile int64_t t58 = -4705559004619806LL;

	t58 = (x245|((x246<=x247)+x248));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = 975;
	int64_t x251 = INT64_MAX;
	static uint16_t x252 = 3518U;
	volatile int32_t t59 = 52895477;

	t59 = (x249|((x250<=x251)+x252));

	if (t59 != -65) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = 215672LLU;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;
	static uint64_t t60 = 0LLU;

	t60 = (x253|((x254<=x255)+x256));

	if (t60 != 18446744073709537913LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = 8;
	int16_t x259 = INT16_MIN;
	uint64_t x260 = UINT64_MAX;

	t61 = (x257|((x258<=x259)+x260));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = 11;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t x264 = -1;
	int32_t t62 = 882519749;

	t62 = (x261|((x262<=x263)+x264));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x265 = 12U;
	int8_t x268 = -1;
	static int32_t t63 = -819431428;

	t63 = (x265|((x266<=x267)+x268));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MAX;
	int16_t x270 = INT16_MIN;
	static int32_t x271 = -102;
	int64_t x272 = -1LL;

	t64 = (x269|((x270<=x271)+x272));

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = -562920;
	uint32_t x275 = 176223U;
	int32_t t65 = -27606768;

	t65 = (x273|((x274<=x275)+x276));

	if (t65 != -194) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x277 = 1;
	int8_t x279 = -1;
	int32_t t66 = -1281;

	t66 = (x277|((x278<=x279)+x280));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x281 = UINT64_MAX;
	static int8_t x282 = INT8_MAX;
	static int32_t x283 = 0;
	int64_t x284 = INT64_MIN;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x281|((x282<=x283)+x284));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = 127280814LL;
	static uint8_t x286 = 4U;
	int64_t x287 = INT64_MIN;
	static volatile int64_t t68 = -1LL;

	t68 = (x285|((x286<=x287)+x288));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = 10555;
	int16_t x290 = INT16_MAX;
	volatile int32_t x292 = INT32_MIN;
	volatile int32_t t69 = -1140398;

	t69 = (x289|((x290<=x291)+x292));

	if (t69 != -2147473093) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x294 = 46U;
	volatile int8_t x295 = -3;
	int8_t x296 = 1;
	int64_t t70 = -112834179001992356LL;

	t70 = (x293|((x294<=x295)+x296));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -1;
	volatile int8_t x298 = -4;
	int32_t x300 = INT32_MIN;
	volatile int32_t t71 = -8765594;

	t71 = (x297|((x298<=x299)+x300));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = UINT32_MAX;
	int64_t x302 = 467104208788739271LL;
	volatile uint32_t x303 = UINT32_MAX;
	uint16_t x304 = UINT16_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x301|((x302<=x303)+x304));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x306 = -1;
	volatile int32_t x307 = INT32_MAX;
	volatile int8_t x308 = 1;

	t73 = (x305|((x306<=x307)+x308));

	if (t73 != -126) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MIN;
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = -1;
	uint32_t x312 = UINT32_MAX;

	t74 = (x309|((x310<=x311)+x312));

	if (t74 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = -999692821503LL;
	int16_t x314 = INT16_MAX;
	static int8_t x315 = 40;
	uint32_t x316 = UINT32_MAX;
	volatile int64_t t75 = 19LL;

	t75 = (x313|((x314<=x315)+x316));

	if (t75 != -996432412673LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x318 = 478804514U;
	static uint64_t x319 = 124592632714419975LLU;
	volatile int16_t x320 = INT16_MAX;
	volatile int64_t t76 = 61570564256813LL;

	t76 = (x317|((x318<=x319)+x320));

	if (t76 != 105433770389717779LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = 30LL;
	int8_t x322 = INT8_MIN;
	uint64_t x323 = 71LLU;
	volatile int64_t t77 = 375LL;

	t77 = (x321|((x322<=x323)+x324));

	if (t77 != -128897LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 70529U;
	int64_t x326 = -22297224558574LL;
	uint64_t x327 = 8942899377LLU;
	int32_t x328 = INT32_MAX;
	static volatile uint32_t t78 = 5998297U;

	t78 = (x325|((x326<=x327)+x328));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int32_t x330 = -1;
	static uint64_t x331 = UINT64_MAX;

	t79 = (x329|((x330<=x331)+x332));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MAX;
	volatile int8_t x334 = 0;
	uint8_t x335 = 34U;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t80 = -6693;

	t80 = (x333|((x334<=x335)+x336));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = UINT32_MAX;
	uint8_t x338 = 4U;
	static int16_t x339 = 6;
	int32_t x340 = 0;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x337|((x338<=x339)+x340));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	volatile int8_t x343 = 0;
	int16_t x344 = INT16_MIN;
	static int32_t t82 = -2;

	t82 = (x341|((x342<=x343)+x344));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x350 = INT16_MIN;
	uint16_t x352 = 0U;
	volatile int64_t t83 = -5173352LL;

	t83 = (x349|((x350<=x351)+x352));

	if (t83 != 2988769LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = 125824298222993LL;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = 0U;
	int64_t t84 = -259494LL;

	t84 = (x353|((x354<=x355)+x356));

	if (t84 != 125824298222993LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x357 = 1;
	volatile int16_t x358 = 0;
	volatile int8_t x359 = -1;
	int32_t x360 = -8098899;
	int32_t t85 = -406864830;

	t85 = (x357|((x358<=x359)+x360));

	if (t85 != -8098899) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x361 = 2077U;
	static int32_t x362 = INT32_MAX;
	int8_t x363 = -1;
	int8_t x364 = 4;
	int32_t t86 = -16223491;

	t86 = (x361|((x362<=x363)+x364));

	if (t86 != 2077) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x365 = 2511033LLU;
	uint16_t x367 = UINT16_MAX;
	volatile int16_t x368 = INT16_MIN;
	uint64_t t87 = 5LLU;

	t87 = (x365|((x366<=x367)+x368));

	if (t87 != 18446744073709539513LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = 450212997121LL;
	uint16_t x371 = UINT16_MAX;
	uint32_t x372 = 919U;
	static int64_t t88 = 3198LL;

	t88 = (x369|((x370<=x371)+x372));

	if (t88 != 450212998041LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = -1;
	volatile int16_t x374 = 1;
	static int8_t x375 = -1;
	uint64_t x376 = 36250803LLU;
	static uint64_t t89 = UINT64_MAX;

	t89 = (x373|((x374<=x375)+x376));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x378 = 104U;
	volatile int64_t x379 = -1LL;
	volatile int16_t x380 = INT16_MIN;

	t90 = (x377|((x378<=x379)+x380));

	if (t90 != 4294947161U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x382 = UINT32_MAX;
	static int16_t x383 = -1;
	uint64_t x384 = 7022502874802LLU;

	t91 = (x381|((x382<=x383)+x384));

	if (t91 != 7022502903807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = 1U;
	uint64_t x386 = 357757305LLU;
	int64_t t92 = 17400LL;

	t92 = (x385|((x386<=x387)+x388));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x389 = 0;
	int8_t x391 = -44;
	uint16_t x392 = 3U;
	int32_t t93 = 257;

	t93 = (x389|((x390<=x391)+x392));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x393 = INT64_MIN;
	static uint32_t x396 = UINT32_MAX;
	int64_t t94 = -970313299188797145LL;

	t94 = (x393|((x394<=x395)+x396));

	if (t94 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x398 = -1;
	volatile uint64_t t95 = 6982001561LLU;

	t95 = (x397|((x398<=x399)+x400));

	if (t95 != 2047LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = -84717638872291LL;
	static volatile int8_t x402 = 2;
	volatile int64_t x403 = INT64_MIN;
	int32_t x404 = -1;
	volatile int64_t t96 = 1748352613341877641LL;

	t96 = (x401|((x402<=x403)+x404));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = 1U;
	int8_t x406 = -1;
	static volatile int64_t t97 = -6771582767104LL;

	t97 = (x405|((x406<=x407)+x408));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	uint32_t x411 = 101348U;
	int64_t x412 = -1712145129886LL;
	static volatile int64_t t98 = -31173490LL;

	t98 = (x409|((x410<=x411)+x412));

	if (t98 != -600662430LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x413 = UINT8_MAX;
	uint8_t x414 = 0U;
	uint32_t x415 = 250666U;
	uint64_t x416 = UINT64_MAX;

	t99 = (x413|((x414<=x415)+x416));

	if (t99 != 255LLU) { NG(); } else { ; }
	
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

