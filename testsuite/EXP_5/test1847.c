#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MAX;
static int64_t x8 = INT64_MAX;
int64_t x13 = INT64_MIN;
int16_t x28 = -22;
static volatile uint64_t t6 = 1LLU;
static int8_t x30 = -1;
volatile uint16_t x40 = UINT16_MAX;
volatile int32_t x42 = INT32_MIN;
int64_t x52 = -23660200316137LL;
uint8_t x56 = 1U;
static volatile int64_t t14 = 478033340776LL;
static int32_t x65 = INT32_MIN;
int32_t x68 = -891220;
int64_t x72 = -1704202LL;
int16_t x81 = INT16_MAX;
uint32_t x86 = 1413349U;
int16_t x92 = 4;
int8_t x94 = INT8_MAX;
uint64_t x95 = 6LLU;
int64_t x97 = INT64_MIN;
int8_t x98 = 18;
static int8_t x106 = INT8_MAX;
static int64_t x109 = -491251297195520193LL;
uint64_t x115 = 2779494190791521LLU;
volatile uint64_t t28 = 5465789866178501LLU;
int32_t x125 = 924;
uint64_t x128 = 256241688385892790LLU;
uint16_t x131 = 1U;
static volatile int16_t x141 = INT16_MIN;
static uint8_t x144 = UINT8_MAX;
int8_t x150 = -1;
int64_t x158 = -1LL;
int64_t x160 = INT64_MIN;
volatile int64_t t36 = 27232LL;
int32_t t39 = 35065687;
int16_t x174 = INT16_MIN;
volatile int64_t t41 = 33654LL;
static volatile uint32_t x183 = UINT32_MAX;
volatile int8_t x188 = 0;
volatile int8_t x194 = -1;
int32_t x196 = INT32_MAX;
static uint8_t x198 = 39U;
int32_t x208 = INT32_MIN;
uint32_t x218 = UINT32_MAX;
uint8_t x220 = 121U;
volatile int8_t x229 = INT8_MAX;
static uint8_t x230 = UINT8_MAX;
uint16_t x234 = 665U;
int8_t x241 = -1;
int64_t x245 = INT64_MAX;
static int64_t x249 = -1LL;
static int8_t x254 = INT8_MIN;
static volatile int8_t x255 = 23;
int16_t x257 = -1;
int32_t x259 = INT32_MAX;
uint16_t x262 = 3U;
int32_t x268 = INT32_MIN;
static int8_t x272 = -51;
uint64_t t64 = 347LLU;
static int64_t t66 = 71484371891802735LL;
uint16_t x294 = 374U;
static uint8_t x298 = 2U;
uint8_t x301 = UINT8_MAX;
static uint64_t x308 = 824453365367111043LLU;
uint64_t t72 = 102292674808117LLU;
static int32_t x315 = -1;
uint32_t t73 = UINT32_MAX;
static uint32_t x339 = 182937U;
int32_t x342 = INT32_MAX;
uint8_t x343 = 58U;
volatile int32_t x344 = INT32_MIN;
volatile int32_t t80 = 380588;
int32_t t81 = -130950161;
static volatile uint8_t x360 = 20U;
volatile uint64_t t82 = 1946188605764873176LLU;
volatile int16_t x364 = INT16_MAX;
static uint64_t t83 = 0LLU;
int32_t x380 = INT32_MIN;
volatile uint8_t x385 = 11U;
int16_t x386 = 53;
static int64_t x390 = -4805801281LL;
volatile int64_t t90 = 13877929450LL;
volatile uint8_t x397 = 0U;
volatile int32_t t92 = 431;
int8_t x402 = INT8_MIN;
int16_t x404 = -141;
uint32_t x420 = UINT32_MAX;


void f0(void) {
	int64_t x1 = 5212304878825895LL;
	uint16_t x2 = 25624U;
	uint8_t x3 = UINT8_MAX;
	int16_t x4 = INT16_MAX;
	volatile int64_t t0 = -15306929800724274LL;

	t0 = (x1+((x2&x3)^x4));

	if (t0 != 5212304878858638LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -22169;
	int16_t x6 = INT16_MIN;
	int64_t t1 = -9383326842691137LL;

	t1 = (x5+((x6&x7)^x8));

	if (t1 != 9223372036854753638LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int8_t x10 = -36;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = INT16_MIN;
	int64_t t2 = 74095594439253682LL;

	t2 = (x9+((x10&x11)^x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = 1236U;
	static int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MAX;
	volatile int64_t t3 = 974453051333373531LL;

	t3 = (x13+((x14&x15)^x16));

	if (t3 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 792LLU;
	volatile uint32_t x18 = 279779U;
	volatile int32_t x19 = 3;
	int64_t x20 = INT64_MIN;
	uint64_t t4 = 6LLU;

	t4 = (x17+((x18&x19)^x20));

	if (t4 != 9223372036854776603LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 16U;
	uint16_t x22 = 13U;
	static uint8_t x23 = 23U;
	static int8_t x24 = INT8_MAX;
	static int32_t t5 = -35037;

	t5 = (x21+((x22&x23)^x24));

	if (t5 != 138) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -9;
	int16_t x26 = 5727;
	uint64_t x27 = 4LLU;

	t6 = (x25+((x26&x27)^x28));

	if (t6 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int8_t x31 = -1;
	volatile int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 31270421882LL;

	t7 = (x29+((x30&x31)^x32));

	if (t7 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int64_t x34 = -1LL;
	static uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 39U;
	uint64_t t8 = 101130396LLU;

	t8 = (x33+((x34&x35)^x36));

	if (t8 != 2147483607LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 7;
	uint8_t x38 = 75U;
	volatile int8_t x39 = -47;
	static int32_t t9 = -62887062;

	t9 = (x37+((x38&x39)^x40));

	if (t9 != 65477) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	volatile uint32_t x43 = 6U;
	uint32_t x44 = 28351U;
	volatile uint32_t t10 = 208376442U;

	t10 = (x41+((x42&x43)^x44));

	if (t10 != 2147511999U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 91;
	uint64_t x46 = 3185378749586965LLU;
	static int64_t x47 = 199999403974425LL;
	int32_t x48 = INT32_MAX;
	static uint64_t t11 = 841926468LLU;

	t11 = (x45+((x46&x47)^x48));

	if (t11 != 18716254790217LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 46U;
	static uint8_t x50 = UINT8_MAX;
	volatile int16_t x51 = 6;
	int64_t t12 = 7290959223317LL;

	t12 = (x49+((x50&x51)^x52));

	if (t12 != -23660200316097LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	volatile uint8_t x54 = UINT8_MAX;
	static int64_t x55 = -1LL;
	volatile int64_t t13 = -3527LL;

	t13 = (x53+((x54&x55)^x56));

	if (t13 != -32514LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	int64_t x58 = INT64_MAX;
	int16_t x59 = -1;
	static int64_t x60 = INT64_MIN;

	t14 = (x57+((x58&x59)^x60));

	if (t14 != 2147483646LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x66 = 0LLU;
	int32_t x67 = -8655;
	static volatile uint64_t t15 = 181430540619547LLU;

	t15 = (x65+((x66&x67)^x68));

	if (t15 != 18446744071561176748LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -788;
	static volatile uint16_t x70 = 47U;
	static uint64_t x71 = 7145021165LLU;
	volatile uint64_t t16 = 91084809LLU;

	t16 = (x69+((x70&x71)^x72));

	if (t16 != 18446744073707846599LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 7636;
	uint8_t x74 = 2U;
	int16_t x75 = INT16_MAX;
	volatile int16_t x76 = -1330;
	static int32_t t17 = 15722465;

	t17 = (x73+((x74&x75)^x76));

	if (t17 != 6304) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = -214;
	static int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	uint64_t x80 = UINT64_MAX;
	uint64_t t18 = 3909292212027LLU;

	t18 = (x77+((x78&x79)^x80));

	if (t18 != 9223372036854775593LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MAX;
	volatile uint32_t x84 = 125988512U;
	volatile int64_t t19 = -3929064LL;

	t19 = (x81+((x82&x83)^x84));

	if (t19 != 126021279LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 121LLU;
	static int16_t x87 = INT16_MAX;
	volatile uint32_t x88 = 166U;
	uint64_t t20 = 155LLU;

	t20 = (x85+((x86&x87)^x88));

	if (t20 != 4284LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	volatile int64_t x90 = -11LL;
	volatile int16_t x91 = INT16_MIN;
	static volatile int64_t t21 = -989LL;

	t21 = (x89+((x90&x91)^x92));

	if (t21 != -32765LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 40;
	int32_t x96 = -1;
	static uint64_t t22 = 109LLU;

	t22 = (x93+((x94&x95)^x96));

	if (t22 != 33LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x99 = INT32_MIN;
	volatile int64_t x100 = 96736498395587LL;
	int64_t t23 = -2756342683787764159LL;

	t23 = (x97+((x98&x99)^x100));

	if (t23 != -9223275300356380221LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 7;
	volatile int8_t x102 = INT8_MIN;
	volatile int32_t x103 = INT32_MIN;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t24 = -1;

	t24 = (x101+((x102&x103)^x104));

	if (t24 != -2147483386) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -1515882402862LL;
	uint64_t x107 = UINT64_MAX;
	volatile int8_t x108 = 0;
	uint64_t t25 = 801992239072955LLU;

	t25 = (x105+((x106&x107)^x108));

	if (t25 != 18446742557827148881LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x110 = -1;
	int32_t x111 = INT32_MAX;
	int64_t x112 = -1LL;
	volatile int64_t t26 = 953LL;

	t26 = (x109+((x110&x111)^x112));

	if (t26 != -491251299343003841LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 224U;
	static int8_t x114 = INT8_MIN;
	static uint64_t x116 = 21741714LLU;
	static uint64_t t27 = 3249499LLU;

	t27 = (x113+((x114&x115)^x116));

	if (t27 != 2779494170393714LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x121 = 473669LLU;
	int64_t x122 = INT64_MAX;
	int64_t x123 = -1LL;
	static int64_t x124 = -1LL;

	t28 = (x121+((x122&x123)^x124));

	if (t28 != 9223372036855249477LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x126 = 56240809580421556LLU;
	static int8_t x127 = INT8_MAX;
	volatile uint64_t t29 = 942471099475439683LLU;

	t29 = (x125+((x126&x127)^x128));

	if (t29 != 256241688385893662LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x129 = UINT8_MAX;
	static int64_t x130 = 1412674406319509212LL;
	static int8_t x132 = -1;
	volatile int64_t t30 = 411LL;

	t30 = (x129+((x130&x131)^x132));

	if (t30 != 254LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 1U;
	uint64_t x134 = UINT64_MAX;
	volatile int16_t x135 = INT16_MAX;
	int64_t x136 = INT64_MIN;
	volatile uint64_t t31 = 184752405669758LLU;

	t31 = (x133+((x134&x135)^x136));

	if (t31 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x142 = 56U;
	int32_t x143 = INT32_MIN;
	int32_t t32 = -657864;

	t32 = (x141+((x142&x143)^x144));

	if (t32 != -32513) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = 12368;
	static volatile uint64_t x146 = UINT64_MAX;
	int16_t x147 = 1336;
	uint16_t x148 = UINT16_MAX;
	volatile uint64_t t33 = 261430274587LLU;

	t33 = (x145+((x146&x147)^x148));

	if (t33 != 76567LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 2796U;
	static int8_t x151 = -1;
	static uint64_t x152 = 105018771LLU;
	volatile uint64_t t34 = 145758289LLU;

	t34 = (x149+((x150&x151)^x152));

	if (t34 != 18446744073604535640LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = 60632111U;
	int16_t x155 = -1;
	int64_t x156 = INT64_MAX;
	volatile int64_t t35 = 2LL;

	t35 = (x153+((x154&x155)^x156));

	if (t35 != 9223372034646660048LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = -1570;
	int32_t x159 = INT32_MIN;

	t36 = (x157+((x158&x159)^x160));

	if (t36 != 9223372034707290590LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x161 = INT8_MIN;
	int32_t x162 = -11215;
	static uint16_t x163 = 817U;
	int64_t x164 = INT64_MAX;
	volatile int64_t t37 = -250439625LL;

	t37 = (x161+((x162&x163)^x164));

	if (t37 != 9223372036854775630LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x165 = 764;
	uint16_t x166 = 294U;
	int8_t x167 = -1;
	int64_t x168 = 31673845260LL;
	volatile int64_t t38 = 30147853789901807LL;

	t38 = (x165+((x166&x167)^x168));

	if (t38 != 31673846310LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x169 = 3;
	static volatile int32_t x170 = 3757;
	volatile int16_t x171 = INT16_MAX;
	int32_t x172 = INT32_MIN;

	t39 = (x169+((x170&x171)^x172));

	if (t39 != -2147479888) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MAX;
	int32_t x175 = -1;
	volatile uint32_t x176 = UINT32_MAX;
	uint32_t t40 = 1481126067U;

	t40 = (x173+((x174&x175)^x176));

	if (t40 != 32894U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -1;
	volatile int32_t x178 = -1;
	int64_t x179 = INT64_MAX;
	uint16_t x180 = 7U;

	t41 = (x177+((x178&x179)^x180));

	if (t41 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = -1;
	static int64_t x182 = 3264LL;
	uint64_t x184 = 97500071LLU;
	volatile uint64_t t42 = 12621778947LLU;

	t42 = (x181+((x182&x183)^x184));

	if (t42 != 97498982LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	static volatile uint16_t x186 = 27U;
	uint64_t x187 = UINT64_MAX;
	uint64_t t43 = 3800710641029LLU;

	t43 = (x185+((x186&x187)^x188));

	if (t43 != 26LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x189 = 1996886048973871378LLU;
	int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = UINT16_MAX;
	volatile uint64_t t44 = 796294609361LLU;

	t44 = (x189+((x190&x191)^x192));

	if (t44 != 11220258085828712721LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = 61;
	volatile int16_t x195 = INT16_MAX;
	volatile int32_t t45 = -1;

	t45 = (x193+((x194&x195)^x196));

	if (t45 != 2147450941) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 205LLU;
	int64_t x199 = -1LL;
	static int64_t x200 = INT64_MAX;
	static volatile uint64_t t46 = 10321383LLU;

	t46 = (x197+((x198&x199)^x200));

	if (t46 != 9223372036854775973LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x201 = INT64_MAX;
	static int8_t x202 = INT8_MIN;
	uint8_t x203 = 39U;
	static volatile int8_t x204 = INT8_MIN;
	int64_t t47 = 26078LL;

	t47 = (x201+((x202&x203)^x204));

	if (t47 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = 2;
	uint16_t x207 = 0U;
	static volatile uint32_t t48 = 5703397U;

	t48 = (x205+((x206&x207)^x208));

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = UINT64_MAX;
	uint16_t x210 = 81U;
	static uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MIN;
	uint64_t t49 = 1033559484912655LLU;

	t49 = (x209+((x210&x211)^x212));

	if (t49 != 9223372036854775888LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	int16_t x219 = -1;
	volatile uint32_t t50 = 1U;

	t50 = (x217+((x218&x219)^x220));

	if (t50 != 4294967046U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 0U;
	int8_t x222 = -1;
	volatile int16_t x223 = INT16_MIN;
	uint16_t x224 = 56U;
	uint32_t t51 = 451164U;

	t51 = (x221+((x222&x223)^x224));

	if (t51 != 4294934584U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	volatile int32_t x227 = INT32_MIN;
	uint16_t x228 = UINT16_MAX;
	static volatile int32_t t52 = -7310;

	t52 = (x225+((x226&x227)^x228));

	if (t52 != -2147450881) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x231 = 1;
	int16_t x232 = -1;
	int32_t t53 = -63760166;

	t53 = (x229+((x230&x231)^x232));

	if (t53 != 125) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x235 = 5827915982470317470LLU;
	static int16_t x236 = -1;
	volatile uint64_t t54 = 50LLU;

	t54 = (x233+((x234&x235)^x236));

	if (t54 != 18446744073709518695LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x242 = 8U;
	int32_t x243 = -1;
	volatile int64_t x244 = INT64_MAX;
	int64_t t55 = 24334061869LL;

	t55 = (x241+((x242&x243)^x244));

	if (t55 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x246 = INT64_MIN;
	static int16_t x247 = -1;
	volatile int32_t x248 = INT32_MAX;
	static volatile int64_t t56 = -1LL;

	t56 = (x245+((x246&x247)^x248));

	if (t56 != 2147483646LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x250 = UINT8_MAX;
	int16_t x251 = INT16_MIN;
	uint64_t x252 = 6793474930797LLU;
	static volatile uint64_t t57 = 16555574LLU;

	t57 = (x249+((x250&x251)^x252));

	if (t57 != 6793474930796LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = INT8_MIN;
	static int32_t x256 = -1797;
	int32_t t58 = 95;

	t58 = (x253+((x254&x255)^x256));

	if (t58 != -1925) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x258 = 226990190U;
	uint64_t x260 = UINT64_MAX;
	uint64_t t59 = 238421LLU;

	t59 = (x257+((x258&x259)^x260));

	if (t59 != 18446744073482561424LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = 13;
	volatile uint64_t x263 = UINT64_MAX;
	static volatile int8_t x264 = INT8_MAX;
	volatile uint64_t t60 = 4125540888LLU;

	t60 = (x261+((x262&x263)^x264));

	if (t60 != 137LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	static int64_t x267 = -1LL;
	volatile int64_t t61 = -29866727LL;

	t61 = (x265+((x266&x267)^x268));

	if (t61 != 2147483392LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x269 = 1918301879763681324LLU;
	int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	uint64_t t62 = 1LLU;

	t62 = (x269+((x270&x271)^x272));

	if (t62 != 11141673916618489849LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = -1LL;
	int8_t x274 = 5;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = -1;
	volatile int64_t t63 = 0LL;

	t63 = (x273+((x274&x275)^x276));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = 0LLU;
	uint16_t x278 = 2U;
	int32_t x279 = -1;
	int32_t x280 = -1;

	t64 = (x277+((x278&x279)^x280));

	if (t64 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = 1;
	static int16_t x282 = -1;
	uint16_t x283 = 914U;
	int32_t x284 = -1;
	static int32_t t65 = -69080;

	t65 = (x281+((x282&x283)^x284));

	if (t65 != -914) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x285 = INT64_MIN;
	uint8_t x286 = 38U;
	int16_t x287 = 34;
	volatile uint8_t x288 = 77U;

	t66 = (x285+((x286&x287)^x288));

	if (t66 != -9223372036854775697LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x289 = 5984254;
	int8_t x290 = 1;
	uint16_t x291 = 32517U;
	uint32_t x292 = 53153U;
	uint32_t t67 = 422173U;

	t67 = (x289+((x290&x291)^x292));

	if (t67 != 6037406U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x293 = -1;
	uint16_t x295 = 17616U;
	volatile int8_t x296 = INT8_MAX;
	int32_t t68 = 516294725;

	t68 = (x293+((x294&x295)^x296));

	if (t68 != 46) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = INT16_MAX;
	volatile int64_t x299 = INT64_MIN;
	uint8_t x300 = 33U;
	int64_t t69 = -1LL;

	t69 = (x297+((x298&x299)^x300));

	if (t69 != 32800LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MAX;
	int8_t x304 = -47;
	int32_t t70 = -6974429;

	t70 = (x301+((x302&x303)^x304));

	if (t70 != 208) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MIN;
	static int8_t x307 = -1;
	uint64_t t71 = 14815401231679565LLU;

	t71 = (x305+((x306&x307)^x308));

	if (t71 != 17622290712637407746LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 37465127LLU;
	int64_t x310 = INT64_MAX;
	int32_t x311 = INT32_MIN;
	static int64_t x312 = -27018220LL;

	t72 = (x309+((x310&x311)^x312));

	if (t72 != 9223372039012706363LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	int32_t x316 = INT32_MIN;

	t73 = (x313+((x314&x315)^x316));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x317 = -1;
	int32_t x318 = 62944860;
	volatile uint8_t x319 = UINT8_MAX;
	static int32_t x320 = INT32_MAX;
	int32_t t74 = 115006;

	t74 = (x317+((x318&x319)^x320));

	if (t74 != 2147483554) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x321 = -1;
	static int32_t x322 = INT32_MAX;
	volatile int32_t x323 = -1;
	int32_t x324 = INT32_MIN;
	int32_t t75 = -937;

	t75 = (x321+((x322&x323)^x324));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	static int16_t x326 = 1;
	int32_t x327 = INT32_MIN;
	static int8_t x328 = -1;
	static int32_t t76 = 2845;

	t76 = (x325+((x326&x327)^x328));

	if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = -1;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t77 = -11128756;

	t77 = (x333+((x334&x335)^x336));

	if (t77 != -32770) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x337 = -1;
	volatile int8_t x338 = 1;
	int16_t x340 = -1;
	volatile uint32_t t78 = 42512952U;

	t78 = (x337+((x338&x339)^x340));

	if (t78 != 4294967293U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = -1;
	static int32_t t79 = -521630525;

	t79 = (x341+((x342&x343)^x344));

	if (t79 != -2147483591) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x345 = INT16_MAX;
	uint8_t x346 = UINT8_MAX;
	static int16_t x347 = INT16_MIN;
	volatile uint16_t x348 = UINT16_MAX;

	t80 = (x345+((x346&x347)^x348));

	if (t80 != 98302) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	static int8_t x355 = INT8_MIN;
	int32_t x356 = -78;

	t81 = (x353+((x354&x355)^x356));

	if (t81 != -2147450958) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x357 = INT16_MIN;
	uint64_t x358 = 1185337748748508LLU;
	static int64_t x359 = 396608439174LL;

	t82 = (x357+((x358&x359)^x360));

	if (t82 != 52935262352LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = INT64_MIN;
	uint64_t x362 = UINT64_MAX;
	static int8_t x363 = INT8_MIN;

	t83 = (x361+((x362&x363)^x364));

	if (t83 != 9223372036854743167LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x365 = 1LLU;
	int32_t x366 = 16241891;
	static uint64_t x367 = UINT64_MAX;
	uint16_t x368 = UINT16_MAX;
	static volatile uint64_t t84 = 76LLU;

	t84 = (x365+((x366&x367)^x368));

	if (t84 != 16198429LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x369 = 1302U;
	volatile uint8_t x370 = UINT8_MAX;
	int16_t x371 = INT16_MIN;
	static int32_t x372 = INT32_MIN;
	int32_t t85 = 9;

	t85 = (x369+((x370&x371)^x372));

	if (t85 != -2147482346) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x373 = 5580U;
	int8_t x374 = 0;
	volatile uint32_t x375 = 11391396U;
	int8_t x376 = INT8_MIN;
	static uint32_t t86 = 92624693U;

	t86 = (x373+((x374&x375)^x376));

	if (t86 != 5452U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = 8;
	static uint32_t x378 = 6U;
	volatile int8_t x379 = -1;
	uint32_t t87 = 420794U;

	t87 = (x377+((x378&x379)^x380));

	if (t87 != 2147483662U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x381 = INT32_MIN;
	int16_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	uint32_t x384 = 1564657U;
	static volatile uint64_t t88 = 1915514LLU;

	t88 = (x381+((x382&x383)^x384));

	if (t88 != 18446744071560503310LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x387 = 0U;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t89 = 14;

	t89 = (x385+((x386&x387)^x388));

	if (t89 != 266) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = 1LL;
	uint16_t x391 = 3164U;
	static int16_t x392 = INT16_MIN;

	t90 = (x389+((x390&x391)^x392));

	if (t90 != -30691LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MIN;
	int16_t x395 = -1;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t91 = -1393LL;

	t91 = (x393+((x394&x395)^x396));

	if (t91 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x398 = UINT16_MAX;
	int32_t x399 = 118123884;
	int32_t x400 = -1;

	t92 = (x397+((x398&x399)^x400));

	if (t92 != -28013) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = -1084410448536LL;
	static int8_t x403 = INT8_MAX;
	volatile int64_t t93 = -3247515LL;

	t93 = (x401+((x402&x403)^x404));

	if (t93 != -1084410448677LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x405 = INT32_MIN;
	volatile int8_t x406 = -1;
	int64_t x407 = -1LL;
	volatile uint64_t x408 = 27862896LLU;
	uint64_t t94 = 2763909206872225147LLU;

	t94 = (x405+((x406&x407)^x408));

	if (t94 != 18446744071534205071LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = 3;
	uint8_t x410 = UINT8_MAX;
	uint64_t x411 = 62546LLU;
	int8_t x412 = -1;
	uint64_t t95 = 29071870228344LLU;

	t95 = (x409+((x410&x411)^x412));

	if (t95 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = -7098710860LL;
	volatile int64_t x414 = 10LL;
	uint16_t x415 = 4387U;
	int32_t x416 = -1;
	volatile int64_t t96 = -324662420797439LL;

	t96 = (x413+((x414&x415)^x416));

	if (t96 != -7098710863LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = -1;
	static uint64_t x418 = UINT64_MAX;
	int32_t x419 = -301375241;
	volatile uint64_t t97 = 923246124829LLU;

	t97 = (x417+((x418&x419)^x420));

	if (t97 != 18446744069715959559LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MIN;
	uint8_t x422 = UINT8_MAX;
	int32_t x423 = INT32_MIN;
	int32_t x424 = INT32_MAX;
	int32_t t98 = -2083411;

	t98 = (x421+((x422&x423)^x424));

	if (t98 != 2147483519) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MIN;
	int32_t x427 = -1;
	uint16_t x428 = 1U;
	int32_t t99 = -14742068;

	t99 = (x425+((x426&x427)^x428));

	if (t99 != -65535) { NG(); } else { ; }
	
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

