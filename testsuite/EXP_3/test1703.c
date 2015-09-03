#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
volatile int8_t x11 = 6;
static int16_t x15 = -3007;
int64_t x17 = -55963679447079354LL;
volatile int32_t x19 = -1;
volatile uint32_t x28 = UINT32_MAX;
uint64_t x36 = 1063048878395456944LLU;
static uint64_t t7 = 2111813861874240506LLU;
static int64_t x37 = -283067LL;
static volatile uint8_t x42 = 30U;
int16_t x49 = INT16_MIN;
int64_t x67 = 406LL;
static volatile int64_t t14 = -53834190403337710LL;
uint64_t x71 = 399LLU;
int8_t x72 = INT8_MAX;
uint64_t t15 = 1744568303592LLU;
int32_t x74 = -943;
int8_t x85 = -5;
int16_t x90 = INT16_MAX;
uint32_t x92 = UINT32_MAX;
int32_t x93 = -216;
int8_t x95 = INT8_MIN;
int16_t x96 = -1;
int32_t x108 = -5534376;
static uint8_t x110 = 36U;
uint16_t x111 = 23125U;
volatile int32_t x114 = -1;
static volatile int8_t x119 = -34;
uint32_t x120 = UINT32_MAX;
static uint32_t t27 = 33463U;
volatile int64_t t28 = 130993371714LL;
volatile int8_t x129 = 20;
int16_t x142 = INT16_MIN;
int64_t t35 = 11LL;
int64_t x154 = INT64_MAX;
volatile int32_t t37 = -1;
volatile int64_t t39 = 18039890908662578LL;
uint32_t x178 = 26U;
static volatile int32_t x180 = INT32_MAX;
volatile uint32_t t40 = 1543483U;
static volatile uint32_t t42 = 1397444383U;
int8_t x192 = INT8_MIN;
static int8_t x195 = INT8_MAX;
uint64_t x198 = UINT64_MAX;
static uint64_t t45 = 46LLU;
uint32_t x202 = 533689242U;
volatile uint64_t t46 = 6782579538940LLU;
int64_t x210 = INT64_MIN;
uint64_t t47 = 3147642420LLU;
int32_t x213 = -43612;
volatile int64_t x215 = INT64_MAX;
volatile int64_t t48 = 11LL;
int8_t x228 = -1;
int64_t x239 = 42001454396LL;
int16_t x240 = INT16_MIN;
volatile int64_t t56 = 1996927LL;
int32_t x257 = INT32_MIN;
volatile int32_t x261 = INT32_MAX;
int8_t x262 = -1;
volatile int32_t t58 = 6;
volatile uint32_t x269 = UINT32_MAX;
int64_t x272 = INT64_MIN;
static int8_t x274 = INT8_MAX;
int32_t x283 = INT32_MIN;
static int16_t x292 = INT16_MIN;
int32_t t65 = -12;
int16_t x298 = -64;
static int16_t x304 = -1;
volatile int32_t t67 = 11724618;
int16_t x306 = INT16_MAX;
int32_t x308 = INT32_MIN;
uint64_t x309 = UINT64_MAX;
int8_t x310 = 59;
int16_t x333 = 2;
int64_t x334 = INT64_MIN;
static uint64_t t75 = 343565919365LLU;
static uint16_t x340 = 323U;
static uint32_t x341 = 42U;
uint32_t t77 = 3829187U;
int16_t x348 = INT16_MIN;
uint16_t x351 = 94U;
volatile uint16_t x359 = UINT16_MAX;
volatile int64_t x360 = -6LL;
volatile int64_t t81 = -155363LL;
uint64_t x362 = 3183537LLU;
static uint64_t x365 = UINT64_MAX;
uint16_t x366 = 13U;
volatile uint32_t x370 = UINT32_MAX;
int64_t t84 = -939LL;
uint16_t x377 = UINT16_MAX;
int64_t x378 = -12750LL;
volatile uint64_t t86 = 77791214LLU;
static int64_t x381 = INT64_MIN;
static uint8_t x382 = 110U;
int16_t x384 = 1909;
int32_t x392 = INT32_MIN;
int64_t t90 = -1272962090954110850LL;
int64_t x397 = -39169262364425LL;
int32_t x402 = 1;
static uint64_t x414 = 6660332940954072653LLU;
int16_t x422 = INT16_MIN;
int64_t x433 = INT64_MIN;
uint32_t x434 = 7943174U;
volatile uint16_t x437 = UINT16_MAX;
static int16_t x443 = INT16_MIN;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int32_t x3 = 11;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 55382;

	t0 = ((x1+x2)^(x3&x4));

	if (t0 != -140) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	static uint64_t x6 = 216023LLU;
	static uint32_t x7 = 198668U;
	static int16_t x8 = -1;
	uint64_t t1 = 2LLU;

	t1 = ((x5+x6)^(x7&x8));

	if (t1 != 9223372036854793179LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int32_t x10 = -15;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -14494440LL;

	t2 = ((x9+x10)^(x11&x12));

	if (t2 != -10LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 60269492876056LL;
	volatile int8_t x14 = 44;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = 44432793LL;

	t3 = ((x13+x14)^(x15&x16));

	if (t3 != -60269492882620LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 0;
	uint32_t x20 = 242U;
	volatile int64_t t4 = -1982983700611889LL;

	t4 = ((x17+x18)^(x19&x20));

	if (t4 != -55963679447079244LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 14035U;
	static volatile int32_t x26 = INT32_MIN;
	volatile int32_t x27 = INT32_MIN;
	static uint32_t t5 = 124992U;

	t5 = ((x25+x26)^(x27&x28));

	if (t5 != 14035U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MIN;
	volatile int64_t x30 = INT64_MAX;
	uint64_t x31 = 110096632072LLU;
	volatile int64_t x32 = INT64_MIN;
	static uint64_t t6 = 117924666991LLU;

	t6 = ((x29+x30)^(x31&x32));

	if (t6 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 3940U;
	volatile int16_t x34 = INT16_MIN;
	static int64_t x35 = INT64_MIN;

	t7 = ((x33+x34)^(x35&x36));

	if (t7 != 18446744073709522788LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = INT32_MIN;
	static volatile int16_t x39 = INT16_MIN;
	uint32_t x40 = 3043714U;
	volatile int64_t t8 = 26096LL;

	t8 = ((x37+x38)^(x39&x40));

	if (t8 != -2150257083LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 2;
	uint8_t x43 = 1U;
	uint64_t x44 = 578630480988832256LLU;
	volatile uint64_t t9 = 41136085LLU;

	t9 = ((x41+x42)^(x43&x44));

	if (t9 != 32LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = 3U;
	int16_t x46 = INT16_MIN;
	static uint8_t x47 = 65U;
	uint16_t x48 = 0U;
	volatile int32_t t10 = 26060;

	t10 = ((x45+x46)^(x47&x48));

	if (t10 != -32765) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MAX;
	static int16_t x51 = 91;
	uint64_t x52 = 2276126668491537716LLU;
	uint64_t t11 = 1320529541LLU;

	t11 = ((x49+x50)^(x51&x52));

	if (t11 != 18446744073709518959LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	int64_t x54 = INT64_MAX;
	uint32_t x55 = 495U;
	int8_t x56 = -1;
	volatile int64_t t12 = 220110LL;

	t12 = ((x53+x54)^(x55&x56));

	if (t12 != 9223372036854775313LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MAX;
	int32_t x58 = -3;
	uint16_t x59 = 191U;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t13 = -4842881;

	t13 = ((x57+x58)^(x59&x60));

	if (t13 != 67) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = -1LL;
	volatile int8_t x66 = INT8_MAX;
	uint16_t x68 = UINT16_MAX;

	t14 = ((x65+x66)^(x67&x68));

	if (t14 != 488LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x69 = 224160U;
	static volatile int16_t x70 = -1;

	t15 = ((x69+x70)^(x71&x72));

	if (t15 != 224144LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 11562U;
	volatile int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	uint32_t t16 = 503811695U;

	t16 = ((x73+x74)^(x75&x76));

	if (t16 != 4294945147U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	volatile int16_t x80 = -2;
	static volatile uint32_t t17 = 47114057U;

	t17 = ((x77+x78)^(x79&x80));

	if (t17 != 2147483775U) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x81 = INT64_MIN;
	static volatile int8_t x82 = INT8_MAX;
	int32_t x83 = INT32_MIN;
	static int8_t x84 = -1;
	static volatile int64_t t18 = 70314376520364LL;

	t18 = ((x81+x82)^(x83&x84));

	if (t18 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = -68091;
	int32_t x87 = 873;
	uint32_t x88 = 6U;
	uint32_t t19 = 0U;

	t19 = ((x85+x86)^(x87&x88));

	if (t19 != 4294899200U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 2U;
	static int16_t x91 = INT16_MAX;
	uint32_t t20 = 7136188U;

	t20 = ((x89+x90)^(x91&x92));

	if (t20 != 65534U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = 34669259LL;
	volatile int64_t t21 = -1400070883228833LL;

	t21 = ((x93+x94)^(x95&x96));

	if (t21 != -34668941LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = -2;
	uint8_t x98 = 1U;
	uint64_t x99 = UINT64_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t22 = 64047633721004824LLU;

	t22 = ((x97+x98)^(x99&x100));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = UINT16_MAX;
	static volatile int16_t x102 = INT16_MAX;
	uint16_t x103 = 26U;
	static volatile int32_t x104 = INT32_MAX;
	volatile int32_t t23 = -55;

	t23 = ((x101+x102)^(x103&x104));

	if (t23 != 98276) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MAX;
	uint32_t x106 = 182U;
	static volatile uint64_t x107 = 4295765227163239454LLU;
	volatile uint64_t t24 = 14218976661LLU;

	t24 = ((x105+x106)^(x107&x108));

	if (t24 != 4295765225015739565LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 19U;
	volatile int16_t x112 = -4;
	volatile int32_t t25 = -364;

	t25 = ((x109+x110)^(x111&x112));

	if (t25 != 23139) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x113 = 79U;
	static int8_t x115 = -1;
	static uint64_t x116 = UINT64_MAX;
	volatile uint64_t t26 = 4820114695LLU;

	t26 = ((x113+x114)^(x115&x116));

	if (t26 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -9289;
	int16_t x118 = 10;

	t27 = ((x117+x118)^(x119&x120));

	if (t27 != 9247U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = UINT32_MAX;
	volatile uint16_t x122 = 5U;
	static int64_t x123 = INT64_MIN;
	uint16_t x124 = UINT16_MAX;

	t28 = ((x121+x122)^(x123&x124));

	if (t28 != 4LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 16307U;
	uint16_t x126 = 20U;
	static uint64_t x127 = 29835LLU;
	static int64_t x128 = INT64_MIN;
	volatile uint64_t t29 = 1LLU;

	t29 = ((x125+x126)^(x127&x128));

	if (t29 != 16327LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = -223;
	static volatile int32_t x131 = 112373529;
	uint32_t x132 = 1084U;
	volatile uint32_t t30 = 773450417U;

	t30 = ((x129+x130)^(x131&x132));

	if (t30 != 4294966061U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = 0;
	int8_t x134 = INT8_MIN;
	volatile uint32_t x135 = 3513480U;
	int8_t x136 = -1;
	volatile uint32_t t31 = 113U;

	t31 = ((x133+x134)^(x135&x136));

	if (t31 != 4291453704U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 5U;
	int64_t x138 = -1LL;
	int64_t x139 = -7LL;
	int8_t x140 = INT8_MAX;
	volatile int64_t t32 = -9LL;

	t32 = ((x137+x138)^(x139&x140));

	if (t32 != 125LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 5U;
	static uint16_t x143 = 7U;
	int32_t x144 = 1328;
	int32_t t33 = -54469783;

	t33 = ((x141+x142)^(x143&x144));

	if (t33 != -32763) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x145 = 15996U;
	static int8_t x146 = INT8_MAX;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = UINT32_MAX;
	int64_t t34 = -1039390LL;

	t34 = ((x145+x146)^(x147&x148));

	if (t34 != 16123LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MAX;
	int8_t x151 = 0;
	int32_t x152 = INT32_MIN;

	t35 = ((x149+x150)^(x151&x152));

	if (t35 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	uint64_t x155 = 24992507835783LLU;
	int32_t x156 = 29078;
	uint64_t t36 = 4020LLU;

	t36 = ((x153+x154)^(x155&x156));

	if (t36 != 9223372036854763257LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -62;
	volatile int16_t x158 = -1;
	static int32_t x159 = INT32_MIN;
	volatile int8_t x160 = INT8_MAX;

	t37 = ((x157+x158)^(x159&x160));

	if (t37 != -63) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = 0U;
	static int32_t x162 = -101308462;
	uint8_t x163 = 15U;
	volatile int16_t x164 = INT16_MAX;
	static int32_t t38 = -1;

	t38 = ((x161+x162)^(x163&x164));

	if (t38 != -101308451) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	uint16_t x170 = 2944U;
	int16_t x171 = INT16_MIN;
	uint32_t x172 = 14992154U;

	t39 = ((x169+x170)^(x171&x172));

	if (t39 != -9223372036839797888LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MIN;
	volatile int8_t x179 = INT8_MIN;

	t40 = ((x177+x178)^(x179&x180));

	if (t40 != 2147483674U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MAX;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MAX;
	int64_t t41 = 1511272185927LL;

	t41 = ((x181+x182)^(x183&x184));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = 7;
	int8_t x187 = -32;
	uint8_t x188 = 3U;

	t42 = ((x185+x186)^(x187&x188));

	if (t42 != 6U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = 1;
	static int8_t x191 = 25;
	volatile int64_t t43 = 3LL;

	t43 = ((x189+x190)^(x191&x192));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = INT32_MIN;
	uint8_t x194 = 27U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t44 = 6223;

	t44 = ((x193+x194)^(x195&x196));

	if (t44 != -2147483621) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x197 = 1;
	int16_t x199 = INT16_MAX;
	static uint8_t x200 = 35U;

	t45 = ((x197+x198)^(x199&x200));

	if (t45 != 35LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x201 = -1;
	volatile uint64_t x203 = 1013852122044317633LLU;
	uint16_t x204 = 42U;

	t46 = ((x201+x202)^(x203&x204));

	if (t46 != 533689241LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x209 = 35365820550LLU;
	int32_t x211 = -240677141;
	int32_t x212 = INT32_MIN;

	t47 = ((x209+x210)^(x211&x212));

	if (t47 != 9223372001353635974LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x214 = UINT16_MAX;
	uint32_t x216 = 1589628914U;

	t48 = ((x213+x214)^(x215&x216));

	if (t48 != 1589615185LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -1;
	volatile int32_t x218 = 4;
	int32_t x219 = INT32_MIN;
	int64_t x220 = 4375058LL;
	volatile int64_t t49 = -6264811139769LL;

	t49 = ((x217+x218)^(x219&x220));

	if (t49 != 3LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = UINT64_MAX;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	volatile int8_t x224 = INT8_MAX;
	volatile uint64_t t50 = 349178LLU;

	t50 = ((x221+x222)^(x223&x224));

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x225 = -206;
	static int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	static volatile int32_t t51 = 8544011;

	t51 = ((x225+x226)^(x227&x228));

	if (t51 != 2147483314) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = 273732909LLU;
	int64_t x234 = INT64_MIN;
	static int64_t x235 = INT64_MIN;
	static uint8_t x236 = UINT8_MAX;
	uint64_t t52 = 13LLU;

	t52 = ((x233+x234)^(x235&x236));

	if (t52 != 9223372037128508717LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -3;
	static int16_t x238 = INT16_MIN;
	int64_t t53 = 189195LL;

	t53 = ((x237+x238)^(x239&x240));

	if (t53 != -42001465347LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = UINT64_MAX;
	int32_t x242 = -1;
	volatile uint32_t x243 = UINT32_MAX;
	static int64_t x244 = INT64_MIN;
	uint64_t t54 = 57850749329LLU;

	t54 = ((x241+x242)^(x243&x244));

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x249 = 69U;
	uint16_t x250 = 1U;
	int16_t x251 = INT16_MAX;
	volatile int16_t x252 = INT16_MIN;
	int32_t t55 = -1;

	t55 = ((x249+x250)^(x251&x252));

	if (t55 != 70) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = 4559U;
	int64_t x254 = -1844288530309034178LL;
	int8_t x255 = 7;
	volatile int64_t x256 = 169401LL;

	t56 = ((x253+x254)^(x255&x256));

	if (t56 != -1844288530309029620LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x258 = 1U;
	int8_t x259 = 1;
	int64_t x260 = INT64_MIN;
	static int64_t t57 = -389655LL;

	t57 = ((x257+x258)^(x259&x260));

	if (t57 != -2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x263 = -1;
	static int8_t x264 = 25;

	t58 = ((x261+x262)^(x263&x264));

	if (t58 != 2147483623) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x265 = INT32_MIN;
	volatile int32_t x266 = INT32_MAX;
	static int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MAX;
	int64_t t59 = -678LL;

	t59 = ((x265+x266)^(x267&x268));

	if (t59 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x270 = -101943LL;
	volatile int8_t x271 = -1;
	int64_t t60 = 68452183LL;

	t60 = ((x269+x270)^(x271&x272));

	if (t60 != -9223372032559910456LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = UINT8_MAX;
	uint64_t x275 = UINT64_MAX;
	uint64_t x276 = UINT64_MAX;
	uint64_t t61 = 1362LLU;

	t61 = ((x273+x274)^(x275&x276));

	if (t61 != 18446744073709551233LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	uint16_t x278 = 4676U;
	int32_t x279 = -1;
	volatile int32_t x280 = INT32_MAX;
	volatile int32_t t62 = -24850970;

	t62 = ((x277+x278)^(x279&x280));

	if (t62 != 2147478972) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x281 = 273U;
	int32_t x282 = INT32_MIN;
	static int32_t x284 = INT32_MIN;
	static volatile int32_t t63 = 2221823;

	t63 = ((x281+x282)^(x283&x284));

	if (t63 != 273) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 2075U;
	volatile int16_t x287 = -1;
	int16_t x288 = -1;
	volatile int32_t t64 = -54;

	t64 = ((x285+x286)^(x287&x288));

	if (t64 != 30692) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MIN;
	volatile uint8_t x290 = 0U;
	int16_t x291 = -1;

	t65 = ((x289+x290)^(x291&x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x297 = INT16_MAX;
	int8_t x299 = 42;
	volatile int16_t x300 = -1;
	volatile int32_t t66 = 73108068;

	t66 = ((x297+x298)^(x299&x300));

	if (t66 != 32661) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x301 = UINT8_MAX;
	uint8_t x302 = UINT8_MAX;
	int32_t x303 = -7909;

	t67 = ((x301+x302)^(x303&x304));

	if (t67 != -7963) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x305 = 39474321U;
	uint32_t x307 = UINT32_MAX;
	static uint32_t t68 = 21U;

	t68 = ((x305+x306)^(x307&x308));

	if (t68 != 2186990736U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x311 = INT64_MIN;
	int8_t x312 = -1;
	static volatile uint64_t t69 = 4652800022035LLU;

	t69 = ((x309+x310)^(x311&x312));

	if (t69 != 9223372036854775866LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x313 = INT16_MIN;
	uint16_t x314 = UINT16_MAX;
	int32_t x315 = INT32_MAX;
	int16_t x316 = INT16_MAX;
	int32_t t70 = 0;

	t70 = ((x313+x314)^(x315&x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = -2;
	int16_t x318 = 2;
	static volatile int16_t x319 = INT16_MIN;
	static volatile int32_t x320 = -5;
	static int32_t t71 = 31800092;

	t71 = ((x317+x318)^(x319&x320));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	uint64_t x323 = UINT64_MAX;
	int64_t x324 = -27482LL;
	uint64_t t72 = 188195211653LLU;

	t72 = ((x321+x322)^(x323&x324));

	if (t72 != 18446744069414644569LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x325 = 49U;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 361840U;
	int8_t x328 = INT8_MIN;
	uint32_t t73 = 51U;

	t73 = ((x325+x326)^(x327&x328));

	if (t73 != 4294575409U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x329 = 188270744LLU;
	int8_t x330 = 9;
	int64_t x331 = -7012253015998LL;
	static uint64_t x332 = 4641746252106097LLU;
	volatile uint64_t t74 = 5113514135837724LLU;

	t74 = ((x329+x330)^(x331&x332));

	if (t74 != 4637208797432033LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x335 = 3406877592LLU;
	volatile uint64_t x336 = 1739573590LLU;

	t75 = ((x333+x334)^(x335&x336));

	if (t75 != 9223372037978898706LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = -1LL;
	int16_t x338 = -1;
	int64_t x339 = INT64_MAX;
	volatile int64_t t76 = 1LL;

	t76 = ((x337+x338)^(x339&x340));

	if (t76 != -323LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x342 = -1;
	int8_t x343 = INT8_MIN;
	int32_t x344 = -1;

	t77 = ((x341+x342)^(x343&x344));

	if (t77 != 4294967209U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MIN;
	uint64_t x346 = 511211LLU;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t t78 = 288288529241241147LLU;

	t78 = ((x345+x346)^(x347&x348));

	if (t78 != 18446744073709079787LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = UINT8_MAX;
	static volatile int16_t x350 = INT16_MIN;
	static int8_t x352 = INT8_MIN;
	static int32_t t79 = -34;

	t79 = ((x349+x350)^(x351&x352));

	if (t79 != -32513) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MAX;
	static uint16_t x355 = UINT16_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t80 = 2828850472848119398LL;

	t80 = ((x353+x354)^(x355&x356));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = 3554;
	int32_t x358 = 0;

	t81 = ((x357+x358)^(x359&x360));

	if (t81 != 61976LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int64_t x363 = -1LL;
	static int32_t x364 = -1;
	uint64_t t82 = 62645042637134358LLU;

	t82 = ((x361+x362)^(x363&x364));

	if (t82 != 18446744073706302543LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x367 = 130370751LLU;
	uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t83 = 2866LLU;

	t83 = ((x365+x366)^(x367&x368));

	if (t83 != 130370739LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x369 = -1;
	static int64_t x371 = -1LL;
	int8_t x372 = 2;

	t84 = ((x369+x370)^(x371&x372));

	if (t84 != 4294967292LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = -1;
	int8_t x374 = 1;
	static uint64_t x375 = UINT64_MAX;
	int64_t x376 = INT64_MIN;
	volatile uint64_t t85 = 1932641493026957407LLU;

	t85 = ((x373+x374)^(x375&x376));

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x379 = UINT32_MAX;
	uint64_t x380 = UINT64_MAX;

	t86 = ((x377+x378)^(x379&x380));

	if (t86 != 4294914510LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x383 = UINT64_MAX;
	volatile uint64_t t87 = 103726773LLU;

	t87 = ((x381+x382)^(x383&x384));

	if (t87 != 9223372036854777627LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = -1;
	uint16_t x386 = 711U;
	int64_t x387 = -1513517683LL;
	static volatile uint8_t x388 = UINT8_MAX;
	static int64_t t88 = 12970841874LL;

	t88 = ((x385+x386)^(x387&x388));

	if (t88 != 587LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MAX;
	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = UINT32_MAX;
	volatile uint64_t t89 = 248LLU;

	t89 = ((x389+x390)^(x391&x392));

	if (t89 != 9223372034707292158LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = INT64_MAX;
	int8_t x394 = -3;
	int64_t x395 = INT64_MIN;
	int8_t x396 = 11;

	t90 = ((x393+x394)^(x395&x396));

	if (t90 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x398 = -9;
	volatile int32_t x399 = 540;
	int32_t x400 = 870338;
	static volatile int64_t t91 = 1LL;

	t91 = ((x397+x398)^(x399&x400));

	if (t91 != -39169262363922LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 1786109079LLU;
	uint8_t x403 = 0U;
	uint64_t x404 = 64248388LLU;
	static volatile uint64_t t92 = 143322475828LLU;

	t92 = ((x401+x402)^(x403&x404));

	if (t92 != 1786109080LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = 759;
	volatile int16_t x415 = -1;
	volatile uint64_t x416 = 65258197860119LLU;
	uint64_t t93 = 60531262372401474LLU;

	t93 = ((x413+x414)^(x415&x416));

	if (t93 != 6660395999486658131LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x417 = 15291691925338LLU;
	volatile int64_t x418 = 4309098585556848766LL;
	int8_t x419 = INT8_MAX;
	int32_t x420 = -24;
	volatile uint64_t t94 = 119268144788LLU;

	t94 = ((x417+x418)^(x419&x420));

	if (t94 != 4309113877248774064LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = INT64_MAX;
	int64_t x423 = INT64_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t95 = 55LLU;

	t95 = ((x421+x422)^(x423&x424));

	if (t95 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x429 = 324934U;
	static uint16_t x430 = 231U;
	volatile uint64_t x431 = UINT64_MAX;
	int8_t x432 = 0;
	uint64_t t96 = 14751761607407200LLU;

	t96 = ((x429+x430)^(x431&x432));

	if (t96 != 325165LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x435 = -1;
	uint8_t x436 = 121U;
	volatile int64_t t97 = 7272332LL;

	t97 = ((x433+x434)^(x435&x436));

	if (t97 != -9223372036846832513LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x438 = 6;
	int8_t x439 = INT8_MIN;
	uint8_t x440 = 9U;
	int32_t t98 = -84;

	t98 = ((x437+x438)^(x439&x440));

	if (t98 != 65541) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x441 = -1LL;
	int32_t x442 = 62;
	int8_t x444 = INT8_MAX;
	int64_t t99 = 1LL;

	t99 = ((x441+x442)^(x443&x444));

	if (t99 != 61LL) { NG(); } else { ; }
	
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

