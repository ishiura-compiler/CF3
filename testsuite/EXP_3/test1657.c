#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MAX;
int64_t t0 = 23LL;
uint16_t x6 = 7U;
volatile int16_t x8 = INT16_MAX;
uint16_t x9 = 12508U;
int16_t x11 = INT16_MIN;
int64_t t6 = -130894308819634249LL;
int32_t x33 = -97660658;
int32_t t7 = 7;
volatile int32_t x38 = -1;
int16_t x39 = INT16_MAX;
volatile int64_t x51 = INT64_MIN;
volatile uint32_t t9 = 423U;
volatile int16_t x55 = INT16_MIN;
int64_t t10 = 60510715915578165LL;
int16_t x65 = -1;
uint32_t x67 = 5789U;
int32_t t12 = -23;
static int16_t x73 = -1;
int16_t x77 = 2;
static volatile int64_t x82 = INT64_MAX;
volatile int64_t t15 = -58356139LL;
int64_t x92 = INT64_MIN;
volatile uint32_t x97 = 791U;
uint64_t x98 = UINT64_MAX;
int64_t x106 = -7775992915375LL;
static uint16_t x109 = 0U;
volatile int32_t x110 = -1;
volatile int16_t x113 = -1;
int16_t x117 = INT16_MIN;
volatile int64_t t23 = 778668538LL;
uint64_t x133 = 14244738634642LLU;
volatile int8_t x135 = -1;
int16_t x136 = INT16_MAX;
uint64_t t26 = 27313088245072904LLU;
int16_t x142 = INT16_MIN;
uint8_t x148 = UINT8_MAX;
static uint32_t t28 = 1U;
static int16_t x151 = INT16_MIN;
volatile int32_t t29 = 731405;
int64_t t30 = -330LL;
int32_t x167 = INT32_MIN;
uint16_t x177 = UINT16_MAX;
volatile int32_t t34 = 245;
static int64_t x182 = -694546290LL;
static uint16_t x212 = 200U;
int64_t t39 = 328548409205257855LL;
int64_t x218 = INT64_MIN;
int16_t x222 = -1;
int8_t x224 = INT8_MAX;
static volatile int32_t t41 = 1709;
static int16_t x231 = INT16_MAX;
static int8_t x241 = -3;
static int64_t t45 = 0LL;
volatile int64_t x252 = -17287714LL;
static int16_t x266 = INT16_MIN;
uint32_t x267 = UINT32_MAX;
static int16_t x278 = INT16_MIN;
int8_t x283 = -1;
uint8_t x284 = 27U;
int8_t x285 = 1;
uint32_t x303 = 21826032U;
volatile int64_t x304 = -43351523721359LL;
static volatile int64_t t57 = -4LL;
uint64_t x305 = UINT64_MAX;
int16_t x307 = 3238;
uint8_t x315 = 0U;
uint64_t t59 = 1108225497LLU;
volatile int32_t x318 = 0;
volatile int32_t t60 = -3;
uint16_t x327 = 3050U;
uint8_t x329 = 29U;
volatile uint32_t t64 = 14U;
static int16_t x350 = INT16_MAX;
volatile uint64_t t66 = 26253219LLU;
volatile int64_t t68 = 243720005278960645LL;
uint8_t x368 = 11U;
uint32_t x377 = 430U;
static uint8_t x382 = UINT8_MAX;
int16_t x383 = INT16_MIN;
int16_t x395 = INT16_MIN;
int16_t x409 = INT16_MAX;
int32_t x412 = 4;
uint8_t x417 = UINT8_MAX;
int16_t x418 = INT16_MIN;
uint8_t x419 = UINT8_MAX;
uint64_t t80 = 429638150LLU;
uint16_t x438 = 15525U;
volatile int32_t t84 = -14;
int16_t x445 = 150;
static volatile int32_t x449 = 711;
static int16_t x450 = INT16_MIN;
volatile uint64_t x451 = 21917878150LLU;
uint8_t x452 = UINT8_MAX;
int8_t x456 = -3;
uint8_t x461 = 5U;
uint16_t x468 = 30U;
volatile uint64_t t92 = 7778LLU;
int64_t x496 = 508436LL;
int8_t x513 = INT8_MAX;
volatile uint32_t t99 = 3068U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int32_t x2 = -627127280;
	uint8_t x4 = UINT8_MAX;

	t0 = ((x1&x2)<<(x3<=x4));

	if (t0 != 9223372036227648528LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x7 = -1;
	int32_t t1 = 2;

	t1 = ((x5&x6)<<(x7<=x8));

	if (t1 != 14) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	int64_t x12 = 1LL;
	volatile int32_t t2 = 2594617;

	t2 = ((x9&x10)<<(x11<=x12));

	if (t2 != 24832) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 3U;
	volatile int64_t x14 = -81LL;
	int32_t x15 = INT32_MIN;
	static uint8_t x16 = 10U;
	volatile int64_t t3 = -3095919135494LL;

	t3 = ((x13&x14)<<(x15<=x16));

	if (t3 != 6LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = 0LL;
	static volatile uint32_t x18 = 100873402U;
	volatile uint16_t x19 = 4945U;
	int8_t x20 = 1;
	volatile int64_t t4 = -823321LL;

	t4 = ((x17&x18)<<(x19<=x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x22 = 8LLU;
	int64_t x23 = INT64_MIN;
	static volatile int64_t x24 = -1LL;
	uint64_t t5 = 113203459LLU;

	t5 = ((x21&x22)<<(x23<=x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	volatile int64_t x26 = -1LL;
	int8_t x27 = INT8_MIN;
	int16_t x28 = -1;

	t6 = ((x25&x26)<<(x27<=x28));

	if (t6 != 254LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = INT16_MAX;
	int16_t x35 = -8;
	int8_t x36 = 39;

	t7 = ((x33&x34)<<(x35<=x36));

	if (t7 != 41500) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	int64_t x40 = -4LL;
	static volatile int32_t t8 = 1;

	t8 = ((x37&x38)<<(x39<=x40));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int16_t x50 = -444;
	int64_t x52 = INT64_MIN;

	t9 = ((x49&x50)<<(x51<=x52));

	if (t9 != 4294966408U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = INT64_MIN;
	uint32_t x54 = 15U;
	static int8_t x56 = 12;

	t10 = ((x53&x54)<<(x55<=x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = INT64_MIN;
	int16_t x58 = INT16_MAX;
	static volatile int8_t x59 = -1;
	static uint32_t x60 = UINT32_MAX;
	volatile int64_t t11 = 235177204LL;

	t11 = ((x57&x58)<<(x59<=x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x66 = 15873U;
	int64_t x68 = -1LL;

	t12 = ((x65&x66)<<(x67<=x68));

	if (t12 != 15873) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x74 = UINT16_MAX;
	volatile int16_t x75 = -17;
	int8_t x76 = -7;
	int32_t t13 = 25221;

	t13 = ((x73&x74)<<(x75<=x76));

	if (t13 != 131070) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x78 = UINT64_MAX;
	volatile int8_t x79 = -1;
	int64_t x80 = -1LL;
	uint64_t t14 = 16037265820LLU;

	t14 = ((x77&x78)<<(x79<=x80));

	if (t14 != 4LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MAX;
	static uint8_t x83 = 2U;
	static int8_t x84 = INT8_MIN;

	t15 = ((x81&x82)<<(x83<=x84));

	if (t15 != 127LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = UINT16_MAX;
	uint64_t x86 = 4655LLU;
	uint64_t x87 = 710461830029441329LLU;
	static int16_t x88 = -1;
	uint64_t t16 = 455LLU;

	t16 = ((x85&x86)<<(x87<=x88));

	if (t16 != 9310LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x89 = -62;
	uint64_t x90 = 407267802LLU;
	int16_t x91 = INT16_MIN;
	static uint64_t t17 = 504LLU;

	t17 = ((x89&x90)<<(x91<=x92));

	if (t17 != 407267778LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x99 = INT64_MAX;
	static int16_t x100 = 194;
	uint64_t t18 = 53622016LLU;

	t18 = ((x97&x98)<<(x99<=x100));

	if (t18 != 791LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = 178410260LLU;
	int8_t x102 = -24;
	uint64_t x103 = UINT64_MAX;
	static uint32_t x104 = 137U;
	uint64_t t19 = 739857221669LLU;

	t19 = ((x101&x102)<<(x103<=x104));

	if (t19 != 178410240LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x105 = 31U;
	int64_t x107 = 290287LL;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t20 = -3504940088LL;

	t20 = ((x105&x106)<<(x107<=x108));

	if (t20 != 17LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x111 = UINT32_MAX;
	static uint8_t x112 = 6U;
	int32_t t21 = -27754;

	t21 = ((x109&x110)<<(x111<=x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x114 = 313797729LL;
	static int64_t x115 = -1LL;
	int32_t x116 = -1;
	volatile int64_t t22 = -1272943534017823LL;

	t22 = ((x113&x114)<<(x115<=x116));

	if (t22 != 627595458LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x118 = INT64_MAX;
	int16_t x119 = 2758;
	static volatile uint8_t x120 = 1U;

	t23 = ((x117&x118)<<(x119<=x120));

	if (t23 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = 0;
	uint8_t x126 = UINT8_MAX;
	int8_t x127 = 27;
	int32_t x128 = INT32_MAX;
	volatile int32_t t24 = -385141;

	t24 = ((x125&x126)<<(x127<=x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x129 = INT64_MIN;
	uint64_t x130 = 27LLU;
	int32_t x131 = INT32_MIN;
	static int64_t x132 = INT64_MIN;
	uint64_t t25 = 320584LLU;

	t25 = ((x129&x130)<<(x131<=x132));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x134 = INT32_MIN;

	t26 = ((x133&x134)<<(x135<=x136));

	if (t26 != 28488518074368LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x141 = 2444682728531193LLU;
	static volatile uint32_t x143 = 224U;
	volatile uint8_t x144 = UINT8_MAX;
	uint64_t t27 = 73090429305547LLU;

	t27 = ((x141&x142)<<(x143<=x144));

	if (t27 != 4889365457010688LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = 111U;
	uint32_t x146 = 126U;
	int64_t x147 = INT64_MIN;

	t28 = ((x145&x146)<<(x147<=x148));

	if (t28 != 220U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = 4;
	int16_t x150 = 2619;
	uint64_t x152 = UINT64_MAX;

	t29 = ((x149&x150)<<(x151<=x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = -1LL;
	int16_t x158 = INT16_MAX;
	volatile uint8_t x159 = 123U;
	uint8_t x160 = 58U;

	t30 = ((x157&x158)<<(x159<=x160));

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x161 = 1422;
	int16_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;
	volatile int32_t t31 = 0;

	t31 = ((x161&x162)<<(x163<=x164));

	if (t31 != 1422) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int32_t x166 = -127;
	int8_t x168 = 46;
	uint32_t t32 = 0U;

	t32 = ((x165&x166)<<(x167<=x168));

	if (t32 != 4294967042U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x169 = INT32_MAX;
	int64_t x170 = -38098443LL;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 0U;
	volatile int64_t t33 = 5002LL;

	t33 = ((x169&x170)<<(x171<=x172));

	if (t33 != 4218770410LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x178 = -1955;
	int64_t x179 = 14698261223076644LL;
	int16_t x180 = 36;

	t34 = ((x177&x178)<<(x179<=x180));

	if (t34 != 63581) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x181 = UINT8_MAX;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = 125507;
	static volatile int64_t t35 = -67904LL;

	t35 = ((x181&x182)<<(x183<=x184));

	if (t35 != 142LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = -1;
	uint8_t x190 = 2U;
	static int16_t x191 = INT16_MIN;
	static int8_t x192 = -1;
	int32_t t36 = 0;

	t36 = ((x189&x190)<<(x191<=x192));

	if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x193 = 1U;
	int64_t x194 = -116699805LL;
	uint64_t x195 = UINT64_MAX;
	int32_t x196 = INT32_MIN;
	volatile int64_t t37 = 64717641LL;

	t37 = ((x193&x194)<<(x195<=x196));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x205 = UINT8_MAX;
	int16_t x206 = -2470;
	uint16_t x207 = 7089U;
	static int16_t x208 = INT16_MIN;
	int32_t t38 = 39;

	t38 = ((x205&x206)<<(x207<=x208));

	if (t38 != 90) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = INT64_MIN;
	uint32_t x210 = UINT32_MAX;
	volatile int16_t x211 = -1;

	t39 = ((x209&x210)<<(x211<=x212));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x217 = 55U;
	static int16_t x219 = INT16_MAX;
	volatile uint64_t x220 = 30780019337172519LLU;
	static int64_t t40 = -26393353LL;

	t40 = ((x217&x218)<<(x219<=x220));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x221 = 0U;
	uint64_t x223 = 13874198996LLU;

	t41 = ((x221&x222)<<(x223<=x224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = INT16_MAX;
	volatile int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	uint32_t x228 = 1U;
	int32_t t42 = 175937305;

	t42 = ((x225&x226)<<(x227<=x228));

	if (t42 != 32640) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x229 = UINT8_MAX;
	uint8_t x230 = 0U;
	volatile uint64_t x232 = UINT64_MAX;
	volatile int32_t t43 = -46390;

	t43 = ((x229&x230)<<(x231<=x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x237 = INT8_MIN;
	volatile uint64_t x238 = 99612301LLU;
	volatile uint32_t x239 = UINT32_MAX;
	uint8_t x240 = 8U;
	uint64_t t44 = 7623197LLU;

	t44 = ((x237&x238)<<(x239<=x240));

	if (t44 != 99612288LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x242 = INT64_MAX;
	volatile int64_t x243 = 468LL;
	int8_t x244 = INT8_MIN;

	t45 = ((x241&x242)<<(x243<=x244));

	if (t45 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x249 = 51610U;
	volatile uint8_t x250 = 1U;
	int8_t x251 = -1;
	uint32_t t46 = 5067U;

	t46 = ((x249&x250)<<(x251<=x252));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x253 = 19U;
	int64_t x254 = INT64_MIN;
	int16_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile int64_t t47 = -218268445280888LL;

	t47 = ((x253&x254)<<(x255<=x256));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x257 = -1;
	uint32_t x258 = 563737942U;
	int32_t x259 = INT32_MAX;
	volatile int64_t x260 = -1LL;
	volatile uint32_t t48 = 4711595U;

	t48 = ((x257&x258)<<(x259<=x260));

	if (t48 != 563737942U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x265 = 222U;
	int8_t x268 = -4;
	static volatile int32_t t49 = -225;

	t49 = ((x265&x266)<<(x267<=x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = INT8_MAX;
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MIN;
	uint8_t x276 = UINT8_MAX;
	uint32_t t50 = 372058U;

	t50 = ((x273&x274)<<(x275<=x276));

	if (t50 != 254U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x277 = 853437966839LLU;
	static int16_t x279 = -1276;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t51 = 3314994266LLU;

	t51 = ((x277&x278)<<(x279<=x280));

	if (t51 != 853437939712LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x281 = INT16_MAX;
	int32_t x282 = 3;
	int32_t t52 = -267162759;

	t52 = ((x281&x282)<<(x283<=x284));

	if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x286 = 90581LLU;
	static int8_t x287 = -27;
	int32_t x288 = 197;
	volatile uint64_t t53 = 36537742LLU;

	t53 = ((x285&x286)<<(x287<=x288));

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x289 = INT8_MAX;
	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	int64_t x292 = -440056500LL;
	volatile int32_t t54 = 2415;

	t54 = ((x289&x290)<<(x291<=x292));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = INT64_MAX;
	uint64_t x294 = 3LLU;
	int64_t x295 = -1LL;
	uint16_t x296 = UINT16_MAX;
	uint64_t t55 = 1704681577LLU;

	t55 = ((x293&x294)<<(x295<=x296));

	if (t55 != 6LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x297 = 64508LLU;
	int64_t x298 = -40808952556781916LL;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	static uint64_t t56 = 37544961LLU;

	t56 = ((x297&x298)<<(x299<=x300));

	if (t56 != 62792LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x301 = INT8_MAX;
	int64_t x302 = INT64_MAX;

	t57 = ((x301&x302)<<(x303<=x304));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x306 = 1U;
	static volatile int16_t x308 = INT16_MIN;
	uint64_t t58 = 5798159824159LLU;

	t58 = ((x305&x306)<<(x307<=x308));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x313 = 104U;
	uint64_t x314 = 270625818899LLU;
	uint32_t x316 = UINT32_MAX;

	t59 = ((x313&x314)<<(x315<=x316));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x317 = INT8_MIN;
	int16_t x319 = INT16_MAX;
	volatile int64_t x320 = -1LL;

	t60 = ((x317&x318)<<(x319<=x320));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x321 = INT8_MAX;
	volatile uint8_t x322 = 39U;
	volatile int64_t x323 = INT64_MIN;
	static int8_t x324 = -1;
	volatile int32_t t61 = 254;

	t61 = ((x321&x322)<<(x323<=x324));

	if (t61 != 78) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x325 = 49U;
	int16_t x326 = -73;
	static uint8_t x328 = 4U;
	volatile int32_t t62 = 34825;

	t62 = ((x325&x326)<<(x327<=x328));

	if (t62 != 49) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	int64_t x332 = -1LL;
	static int32_t t63 = 1;

	t63 = ((x329&x330)<<(x331<=x332));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x341 = 3U;
	uint32_t x342 = 183355U;
	uint16_t x343 = 0U;
	int8_t x344 = -18;

	t64 = ((x341&x342)<<(x343<=x344));

	if (t64 != 3U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x345 = 1868U;
	int16_t x346 = -18;
	int32_t x347 = -222150;
	volatile int64_t x348 = INT64_MIN;
	int32_t t65 = 402996;

	t65 = ((x345&x346)<<(x347<=x348));

	if (t65 != 1868) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int16_t x351 = INT16_MIN;
	volatile int64_t x352 = 25027821605935LL;

	t66 = ((x349&x350)<<(x351<=x352));

	if (t66 != 65534LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x353 = 0U;
	volatile int8_t x354 = -1;
	static int8_t x355 = INT8_MIN;
	uint16_t x356 = 0U;
	volatile int32_t t67 = 42;

	t67 = ((x353&x354)<<(x355<=x356));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x357 = -25574445LL;
	int64_t x358 = 536155465121LL;
	static volatile int64_t x359 = 337668LL;
	int32_t x360 = 17;

	t68 = ((x357&x358)<<(x359<=x360));

	if (t68 != 536138547585LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x361 = 15U;
	volatile uint32_t x362 = 15651516U;
	uint16_t x363 = 830U;
	int32_t x364 = INT32_MIN;
	uint32_t t69 = 99U;

	t69 = ((x361&x362)<<(x363<=x364));

	if (t69 != 12U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x365 = -1LL;
	uint32_t x366 = 438U;
	volatile int64_t x367 = INT64_MAX;
	static volatile int64_t t70 = 4478967339LL;

	t70 = ((x365&x366)<<(x367<=x368));

	if (t70 != 438LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x378 = -1;
	int32_t x379 = INT32_MIN;
	int64_t x380 = INT64_MIN;
	static uint32_t t71 = 389453123U;

	t71 = ((x377&x378)<<(x379<=x380));

	if (t71 != 430U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x381 = 12U;
	int32_t x384 = -3845226;
	static int32_t t72 = 187;

	t72 = ((x381&x382)<<(x383<=x384));

	if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x385 = 1136764211U;
	int32_t x386 = 10;
	static uint32_t x387 = 5775U;
	int64_t x388 = INT64_MIN;
	volatile uint32_t t73 = 151U;

	t73 = ((x385&x386)<<(x387<=x388));

	if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x393 = -1LL;
	int64_t x394 = 39997LL;
	volatile uint8_t x396 = 63U;
	volatile int64_t t74 = 4LL;

	t74 = ((x393&x394)<<(x395<=x396));

	if (t74 != 79994LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x401 = -8082881;
	volatile int32_t x402 = INT32_MAX;
	int8_t x403 = INT8_MAX;
	int64_t x404 = INT64_MIN;
	int32_t t75 = -1581286;

	t75 = ((x401&x402)<<(x403<=x404));

	if (t75 != 2139400767) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x405 = 13U;
	int64_t x406 = -260LL;
	volatile int8_t x407 = INT8_MIN;
	volatile int16_t x408 = -194;
	int64_t t76 = -354LL;

	t76 = ((x405&x406)<<(x407<=x408));

	if (t76 != 12LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x410 = 0U;
	int32_t x411 = INT32_MIN;
	static int32_t t77 = -1001;

	t77 = ((x409&x410)<<(x411<=x412));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x413 = UINT32_MAX;
	int8_t x414 = 0;
	uint32_t x415 = 106089026U;
	volatile int16_t x416 = -1;
	volatile uint32_t t78 = 232579655U;

	t78 = ((x413&x414)<<(x415<=x416));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x420 = 19480670LL;
	static volatile int32_t t79 = 20;

	t79 = ((x417&x418)<<(x419<=x420));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x421 = 59U;
	uint64_t x422 = 22LLU;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = 3656U;

	t80 = ((x421&x422)<<(x423<=x424));

	if (t80 != 18LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x425 = 1U;
	volatile int8_t x426 = 1;
	int64_t x427 = -1LL;
	int8_t x428 = INT8_MAX;
	int32_t t81 = 74899688;

	t81 = ((x425&x426)<<(x427<=x428));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x429 = 556LLU;
	int8_t x430 = 1;
	int64_t x431 = INT64_MAX;
	int16_t x432 = INT16_MIN;
	uint64_t t82 = 3721187389739695LLU;

	t82 = ((x429&x430)<<(x431<=x432));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x433 = 220889;
	int32_t x434 = INT32_MAX;
	volatile int16_t x435 = 15334;
	volatile int64_t x436 = INT64_MAX;
	static int32_t t83 = -1;

	t83 = ((x433&x434)<<(x435<=x436));

	if (t83 != 441778) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x437 = 0;
	int8_t x439 = -1;
	uint32_t x440 = 25U;

	t84 = ((x437&x438)<<(x439<=x440));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x441 = INT32_MAX;
	uint16_t x442 = 2U;
	int8_t x443 = -1;
	int64_t x444 = -1LL;
	static int32_t t85 = 15111;

	t85 = ((x441&x442)<<(x443<=x444));

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x446 = -1;
	static volatile int16_t x447 = INT16_MIN;
	volatile uint8_t x448 = 0U;
	volatile int32_t t86 = 640643;

	t86 = ((x445&x446)<<(x447<=x448));

	if (t86 != 300) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t t87 = 55707;

	t87 = ((x449&x450)<<(x451<=x452));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x453 = INT64_MIN;
	static uint8_t x454 = UINT8_MAX;
	int16_t x455 = INT16_MIN;
	volatile int64_t t88 = -56561LL;

	t88 = ((x453&x454)<<(x455<=x456));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x457 = 2U;
	int8_t x458 = -49;
	int16_t x459 = -218;
	int64_t x460 = -35213076373961LL;
	int32_t t89 = -13;

	t89 = ((x457&x458)<<(x459<=x460));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x462 = INT8_MAX;
	int16_t x463 = INT16_MIN;
	int32_t x464 = -1;
	volatile int32_t t90 = -10444;

	t90 = ((x461&x462)<<(x463<=x464));

	if (t90 != 10) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x465 = INT32_MAX;
	int64_t x466 = INT64_MIN;
	int16_t x467 = -1218;
	volatile int64_t t91 = -357612574LL;

	t91 = ((x465&x466)<<(x467<=x468));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x477 = UINT64_MAX;
	static uint8_t x478 = UINT8_MAX;
	volatile int8_t x479 = 46;
	volatile uint8_t x480 = UINT8_MAX;

	t92 = ((x477&x478)<<(x479<=x480));

	if (t92 != 510LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x481 = INT64_MIN;
	uint16_t x482 = UINT16_MAX;
	volatile uint16_t x483 = 18U;
	int8_t x484 = -13;
	volatile int64_t t93 = 696896569779LL;

	t93 = ((x481&x482)<<(x483<=x484));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x489 = 0U;
	int32_t x490 = INT32_MIN;
	volatile uint64_t x491 = 1LLU;
	int8_t x492 = INT8_MIN;
	int32_t t94 = 107;

	t94 = ((x489&x490)<<(x491<=x492));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x493 = INT8_MIN;
	static uint64_t x494 = 120019834478211LLU;
	uint16_t x495 = UINT16_MAX;
	uint64_t t95 = 117687636LLU;

	t95 = ((x493&x494)<<(x495<=x496));

	if (t95 != 240039668956416LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x501 = 14358U;
	volatile int64_t x502 = INT64_MIN;
	int8_t x503 = INT8_MIN;
	uint32_t x504 = 23682U;
	volatile int64_t t96 = 32262205049234LL;

	t96 = ((x501&x502)<<(x503<=x504));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x505 = INT16_MIN;
	int32_t x506 = 13;
	volatile uint16_t x507 = 87U;
	static int64_t x508 = -4LL;
	int32_t t97 = 53441;

	t97 = ((x505&x506)<<(x507<=x508));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x509 = 2;
	uint64_t x510 = 30694148516938LLU;
	static volatile int16_t x511 = -1;
	int8_t x512 = INT8_MIN;
	volatile uint64_t t98 = 497742430402911LLU;

	t98 = ((x509&x510)<<(x511<=x512));

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x514 = UINT32_MAX;
	volatile int64_t x515 = INT64_MIN;
	static uint8_t x516 = 9U;

	t99 = ((x513&x514)<<(x515<=x516));

	if (t99 != 254U) { NG(); } else { ; }
	
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

