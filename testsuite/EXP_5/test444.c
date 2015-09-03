#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x17 = 1371309;
int16_t x19 = -46;
int8_t x29 = 3;
volatile uint32_t x60 = 18489U;
volatile int32_t t5 = -30;
int16_t x66 = INT16_MIN;
int8_t x70 = -1;
uint8_t x72 = UINT8_MAX;
int32_t t7 = 19516072;
static int16_t x76 = INT16_MIN;
int8_t x97 = INT8_MIN;
int8_t x104 = -1;
static int8_t x107 = INT8_MAX;
static uint16_t x110 = UINT16_MAX;
uint64_t x113 = UINT64_MAX;
uint64_t t16 = 28848323771340176LLU;
int32_t x117 = INT32_MAX;
int64_t x124 = INT64_MIN;
static int16_t x125 = INT16_MIN;
static int32_t x128 = -1;
int64_t x130 = INT64_MAX;
static int32_t t20 = -960080;
volatile uint64_t x136 = UINT64_MAX;
static uint64_t x138 = 496114764LLU;
uint16_t x151 = UINT16_MAX;
int8_t x154 = INT8_MIN;
int32_t x160 = -1;
static int32_t x170 = -1;
uint16_t x171 = UINT16_MAX;
int16_t x176 = 36;
static int64_t x182 = 1110453099LL;
int8_t x209 = -2;
volatile int32_t t36 = 39431861;
volatile int32_t t38 = -940;
uint32_t x248 = UINT32_MAX;
volatile int32_t t43 = 2573494;
int16_t x252 = INT16_MIN;
int16_t x259 = INT16_MIN;
int16_t x262 = INT16_MIN;
static int8_t x263 = -17;
int32_t t48 = -24172727;
static uint64_t x269 = 303LLU;
volatile int32_t x273 = -4284;
uint16_t x282 = 2609U;
volatile int64_t t54 = -973LL;
static int64_t x309 = -9817LL;
int64_t t55 = -53662LL;
int16_t x319 = INT16_MAX;
int16_t x321 = INT16_MIN;
int32_t x331 = 1;
volatile int32_t x341 = 376024;
static int16_t x342 = INT16_MIN;
int8_t x343 = INT8_MIN;
volatile int32_t t63 = 27157782;
int16_t x364 = -1;
static int32_t x368 = INT32_MAX;
int8_t x379 = INT8_MIN;
int32_t x381 = INT32_MAX;
volatile int32_t x388 = -211701;
uint64_t x389 = 400536LLU;
int8_t x402 = -9;
int8_t x408 = INT8_MIN;
uint16_t x412 = 56U;
volatile int8_t x419 = 2;
int64_t t77 = INT64_MIN;
int16_t x431 = INT16_MIN;
static uint32_t x437 = 1U;
static int32_t x439 = 691;
volatile uint32_t t81 = 76488U;
int64_t x445 = 481313165987LL;
int16_t x452 = 0;
static uint64_t x455 = 131175015323918LLU;
int16_t x456 = -1;
static uint16_t x472 = 23333U;
static volatile int16_t x474 = INT16_MAX;
volatile int8_t x485 = -47;
int64_t x486 = -1LL;
int32_t x490 = -7643153;
int32_t x492 = -66059625;
volatile uint32_t t89 = 342805U;
static volatile int8_t x525 = 4;
volatile int8_t x527 = INT8_MIN;
int64_t x528 = 246346929LL;
volatile uint64_t x530 = 125346LLU;
int32_t t96 = -2164505;
volatile uint64_t x545 = 714285LLU;
int16_t x550 = -320;
int16_t x551 = INT16_MIN;


void f0(void) {
	volatile int8_t x9 = 1;
	int16_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t0 = -32723223;

	t0 = (x9-((x10*x11)<x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x18 = -1;
	int32_t x20 = 6869307;
	static int32_t t1 = 30841;

	t1 = (x17-((x18*x19)<x20));

	if (t1 != 1371308) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x30 = -7433;
	static uint64_t x31 = 23907748LLU;
	uint64_t x32 = 121613378447743LLU;
	int32_t t2 = -850;

	t2 = (x29-((x30*x31)<x32));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = INT8_MAX;
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MAX;
	int32_t t3 = -1573;

	t3 = (x37-((x38*x39)<x40));

	if (t3 != 126) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x53 = 30624313U;
	int16_t x54 = 2;
	int8_t x55 = -1;
	static int16_t x56 = -221;
	volatile uint32_t t4 = 2U;

	t4 = (x53-((x54*x55)<x56));

	if (t4 != 30624313U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x57 = 1U;
	volatile int64_t x58 = INT64_MAX;
	int64_t x59 = -1LL;

	t5 = (x57-((x58*x59)<x60));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x65 = UINT64_MAX;
	static uint16_t x67 = 11U;
	int32_t x68 = 93177082;
	uint64_t t6 = 91921686LLU;

	t6 = (x65-((x66*x67)<x68));

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x69 = INT16_MAX;
	uint32_t x71 = 1446U;

	t7 = (x69-((x70*x71)<x72));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x73 = 30U;
	static uint16_t x74 = 32323U;
	static int64_t x75 = -1LL;
	volatile int32_t t8 = -15;

	t8 = (x73-((x74*x75)<x76));

	if (t8 != 30) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x77 = 10492U;
	uint16_t x78 = 6971U;
	int32_t x79 = -260;
	static int32_t x80 = 1095;
	volatile int32_t t9 = 2;

	t9 = (x77-((x78*x79)<x80));

	if (t9 != 10491) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x85 = INT64_MAX;
	int32_t x86 = 47;
	uint64_t x87 = UINT64_MAX;
	int32_t x88 = INT32_MIN;
	static int64_t t10 = INT64_MAX;

	t10 = (x85-((x86*x87)<x88));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = 2;
	static uint64_t x95 = 230052686330431686LLU;
	static volatile int64_t x96 = INT64_MIN;
	int32_t t11 = 306;

	t11 = (x93-((x94*x95)<x96));

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x98 = UINT8_MAX;
	volatile int32_t x99 = -1;
	int32_t x100 = INT32_MIN;
	int32_t t12 = 14;

	t12 = (x97-((x98*x99)<x100));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x101 = INT32_MAX;
	static int16_t x102 = -1;
	volatile uint8_t x103 = UINT8_MAX;
	int32_t t13 = -503;

	t13 = (x101-((x102*x103)<x104));

	if (t13 != 2147483646) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x105 = -14608;
	static uint16_t x106 = 14948U;
	int8_t x108 = 0;
	int32_t t14 = 1;

	t14 = (x105-((x106*x107)<x108));

	if (t14 != -14608) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x109 = 1U;
	volatile int16_t x111 = INT16_MIN;
	int64_t x112 = INT64_MIN;
	volatile int32_t t15 = 25623901;

	t15 = (x109-((x110*x111)<x112));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x114 = 301377341484629452LLU;
	static volatile uint64_t x115 = 65496947767LLU;
	int64_t x116 = -6LL;

	t16 = (x113-((x114*x115)<x116));

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x118 = 3787U;
	int8_t x119 = -5;
	int32_t x120 = -3;
	static int32_t t17 = 126744;

	t17 = (x117-((x118*x119)<x120));

	if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x121 = -1LL;
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = -1;
	volatile int64_t t18 = -2184839598031902LL;

	t18 = (x121-((x122*x123)<x124));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 93389461U;
	volatile int32_t t19 = -86324250;

	t19 = (x125-((x126*x127)<x128));

	if (t19 != -32769) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x129 = 3U;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = -2814LL;

	t20 = (x129-((x130*x131)<x132));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x133 = -11;
	int8_t x134 = INT8_MAX;
	int32_t x135 = 46912;
	volatile int32_t t21 = 11831164;

	t21 = (x133-((x134*x135)<x136));

	if (t21 != -12) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x137 = 2U;
	static uint16_t x139 = 822U;
	uint32_t x140 = 1188U;
	volatile uint32_t t22 = 1444153467U;

	t22 = (x137-((x138*x139)<x140));

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x145 = 0;
	volatile uint32_t x146 = 2428U;
	uint8_t x147 = 0U;
	int16_t x148 = INT16_MIN;
	int32_t t23 = -11882107;

	t23 = (x145-((x146*x147)<x148));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x149 = 21761584463550LL;
	int16_t x150 = -30;
	static int16_t x152 = INT16_MIN;
	volatile int64_t t24 = 514680098LL;

	t24 = (x149-((x150*x151)<x152));

	if (t24 != 21761584463549LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x153 = -967;
	int64_t x155 = -1LL;
	volatile int16_t x156 = -59;
	volatile int32_t t25 = 81474488;

	t25 = (x153-((x154*x155)<x156));

	if (t25 != -967) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = 374U;
	volatile int64_t x158 = -1LL;
	volatile uint8_t x159 = 13U;
	static int32_t t26 = -553727074;

	t26 = (x157-((x158*x159)<x160));

	if (t26 != 373) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x161 = 236085628758574LLU;
	int16_t x162 = INT16_MIN;
	int64_t x163 = -1LL;
	static uint8_t x164 = UINT8_MAX;
	volatile uint64_t t27 = 863LLU;

	t27 = (x161-((x162*x163)<x164));

	if (t27 != 236085628758574LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x165 = UINT64_MAX;
	int16_t x166 = -16;
	static int8_t x167 = INT8_MAX;
	int16_t x168 = -1;
	uint64_t t28 = 7193677416LLU;

	t28 = (x165-((x166*x167)<x168));

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x169 = 28;
	static uint8_t x172 = UINT8_MAX;
	static volatile int32_t t29 = -3637;

	t29 = (x169-((x170*x171)<x172));

	if (t29 != 27) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x173 = INT16_MAX;
	static uint32_t x174 = 52633815U;
	volatile int32_t x175 = INT32_MIN;
	volatile int32_t t30 = 2;

	t30 = (x173-((x174*x175)<x176));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = -399;
	static uint8_t x183 = UINT8_MAX;
	uint8_t x184 = 4U;
	volatile int32_t t31 = -60;

	t31 = (x181-((x182*x183)<x184));

	if (t31 != -399) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x185 = 3U;
	static volatile int8_t x186 = -1;
	volatile int64_t x187 = -1LL;
	int32_t x188 = -1;
	static int32_t t32 = -43;

	t32 = (x185-((x186*x187)<x188));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x201 = -1LL;
	uint8_t x202 = 1U;
	volatile int8_t x203 = 39;
	uint8_t x204 = 123U;
	static volatile int64_t t33 = 1LL;

	t33 = (x201-((x202*x203)<x204));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x205 = 21546;
	uint64_t x206 = UINT64_MAX;
	volatile uint32_t x207 = UINT32_MAX;
	int8_t x208 = INT8_MIN;
	static int32_t t34 = 212;

	t34 = (x205-((x206*x207)<x208));

	if (t34 != 21545) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x210 = -1LL;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = INT8_MIN;
	int32_t t35 = -8969568;

	t35 = (x209-((x210*x211)<x212));

	if (t35 != -3) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = -604644;
	static uint16_t x219 = 140U;
	int16_t x220 = 2;

	t36 = (x217-((x218*x219)<x220));

	if (t36 != -32769) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = -1LL;
	int8_t x222 = -2;
	volatile int16_t x223 = INT16_MIN;
	int64_t x224 = -1LL;
	volatile int64_t t37 = -96377203LL;

	t37 = (x221-((x222*x223)<x224));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = 0;
	volatile uint8_t x227 = UINT8_MAX;
	static int64_t x228 = -187041LL;

	t38 = (x225-((x226*x227)<x228));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x229 = 98;
	uint64_t x230 = 16169448896410251LLU;
	volatile int8_t x231 = 0;
	volatile uint8_t x232 = 2U;
	int32_t t39 = -485038043;

	t39 = (x229-((x230*x231)<x232));

	if (t39 != 97) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = -55;
	volatile int8_t x235 = INT8_MAX;
	static int64_t x236 = INT64_MIN;
	int32_t t40 = -1;

	t40 = (x233-((x234*x235)<x236));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x237 = -1;
	int16_t x238 = INT16_MIN;
	int8_t x239 = -1;
	int16_t x240 = -13478;
	volatile int32_t t41 = -12;

	t41 = (x237-((x238*x239)<x240));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = 3;
	volatile int32_t x242 = -1;
	static int16_t x243 = -477;
	volatile int8_t x244 = INT8_MAX;
	static volatile int32_t t42 = 361802;

	t42 = (x241-((x242*x243)<x244));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x245 = INT16_MAX;
	int16_t x246 = -1;
	uint8_t x247 = UINT8_MAX;

	t43 = (x245-((x246*x247)<x248));

	if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x249 = 9;
	static int8_t x250 = -1;
	volatile uint16_t x251 = UINT16_MAX;
	int32_t t44 = 6321;

	t44 = (x249-((x250*x251)<x252));

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x253 = 2;
	uint32_t x254 = UINT32_MAX;
	volatile uint16_t x255 = 23U;
	volatile int16_t x256 = -9007;
	int32_t t45 = -10933;

	t45 = (x253-((x254*x255)<x256));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = -15;
	static volatile int32_t x260 = -1;
	volatile int32_t t46 = 69;

	t46 = (x257-((x258*x259)<x260));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x261 = -1;
	int64_t x264 = -1LL;
	int32_t t47 = 1973650;

	t47 = (x261-((x262*x263)<x264));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x265 = INT16_MIN;
	uint32_t x266 = 22U;
	static int64_t x267 = -1LL;
	uint8_t x268 = UINT8_MAX;

	t48 = (x265-((x266*x267)<x268));

	if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x270 = -58;
	volatile int8_t x271 = INT8_MIN;
	int64_t x272 = -1LL;
	volatile uint64_t t49 = 1055440833924238LLU;

	t49 = (x269-((x270*x271)<x272));

	if (t49 != 303LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x274 = INT8_MAX;
	volatile uint64_t x275 = 3248116226942606865LLU;
	int64_t x276 = INT64_MAX;
	static int32_t t50 = 292;

	t50 = (x273-((x274*x275)<x276));

	if (t50 != -4285) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x281 = 180873614U;
	static int8_t x283 = INT8_MAX;
	int64_t x284 = -315LL;
	static volatile uint32_t t51 = 60949066U;

	t51 = (x281-((x282*x283)<x284));

	if (t51 != 180873614U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x285 = 57620860083009LLU;
	int32_t x286 = 57672;
	volatile int32_t x287 = -1;
	int16_t x288 = 1;
	volatile uint64_t t52 = 135202892029LLU;

	t52 = (x285-((x286*x287)<x288));

	if (t52 != 57620860083008LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = INT64_MAX;
	uint16_t x294 = 1039U;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MIN;
	int64_t t53 = INT64_MAX;

	t53 = (x293-((x294*x295)<x296));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x297 = -1LL;
	static uint16_t x298 = 0U;
	int16_t x299 = INT16_MIN;
	static uint8_t x300 = UINT8_MAX;

	t54 = (x297-((x298*x299)<x300));

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x310 = INT16_MIN;
	int32_t x311 = -8311;
	volatile int64_t x312 = INT64_MIN;

	t55 = (x309-((x310*x311)<x312));

	if (t55 != -9817LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = UINT64_MAX;
	uint32_t x316 = 112103U;
	int32_t t56 = -110;

	t56 = (x313-((x314*x315)<x316));

	if (t56 != -129) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x317 = 599U;
	int64_t x318 = 25761858LL;
	volatile int32_t x320 = INT32_MAX;
	static volatile int32_t t57 = -3160;

	t57 = (x317-((x318*x319)<x320));

	if (t57 != 599) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x322 = 263727143769503164LLU;
	uint8_t x323 = 106U;
	volatile int8_t x324 = INT8_MIN;
	static int32_t t58 = -88;

	t58 = (x321-((x322*x323)<x324));

	if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x325 = INT16_MAX;
	uint16_t x326 = 3111U;
	uint16_t x327 = UINT16_MAX;
	volatile uint32_t x328 = UINT32_MAX;
	int32_t t59 = 6;

	t59 = (x325-((x326*x327)<x328));

	if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int32_t x330 = -1;
	uint16_t x332 = 4U;
	static int32_t t60 = -7621;

	t60 = (x329-((x330*x331)<x332));

	if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x333 = 54LL;
	volatile int32_t x334 = -1;
	static int32_t x335 = 2784;
	volatile int32_t x336 = INT32_MIN;
	volatile int64_t t61 = 1033515072043072LL;

	t61 = (x333-((x334*x335)<x336));

	if (t61 != 54LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = 367;
	static volatile int8_t x339 = 1;
	uint8_t x340 = 51U;
	volatile int32_t t62 = 15651141;

	t62 = (x337-((x338*x339)<x340));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x344 = 0U;

	t63 = (x341-((x342*x343)<x344));

	if (t63 != 376024) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x353 = 11421600U;
	volatile int16_t x354 = INT16_MIN;
	int64_t x355 = -1LL;
	static volatile int32_t x356 = INT32_MIN;
	volatile uint32_t t64 = 96401432U;

	t64 = (x353-((x354*x355)<x356));

	if (t64 != 11421600U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x361 = 19;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = -772;
	volatile int32_t t65 = 15081946;

	t65 = (x361-((x362*x363)<x364));

	if (t65 != 18) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x365 = UINT16_MAX;
	uint8_t x366 = 10U;
	int64_t x367 = 207422466010LL;
	int32_t t66 = -8076;

	t66 = (x365-((x366*x367)<x368));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x377 = 1;
	int8_t x378 = 1;
	static int16_t x380 = -1;
	static int32_t t67 = 1538;

	t67 = (x377-((x378*x379)<x380));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x382 = UINT32_MAX;
	volatile uint16_t x383 = 5U;
	int64_t x384 = -2017381LL;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x381-((x382*x383)<x384));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x385 = 269875536355LL;
	uint32_t x386 = 66683U;
	static int32_t x387 = INT32_MAX;
	static volatile int64_t t69 = -6518202588395LL;

	t69 = (x385-((x386*x387)<x388));

	if (t69 != 269875536354LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x390 = UINT32_MAX;
	volatile uint32_t x391 = UINT32_MAX;
	volatile int64_t x392 = INT64_MAX;
	uint64_t t70 = 3925908761411249557LLU;

	t70 = (x389-((x390*x391)<x392));

	if (t70 != 400535LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x393 = -1059779892;
	static int8_t x394 = -4;
	int16_t x395 = INT16_MAX;
	static volatile uint64_t x396 = 21279635160LLU;
	volatile int32_t t71 = 2307853;

	t71 = (x393-((x394*x395)<x396));

	if (t71 != -1059779892) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x397 = INT8_MAX;
	static volatile uint64_t x398 = UINT64_MAX;
	int8_t x399 = INT8_MAX;
	int8_t x400 = INT8_MIN;
	int32_t t72 = -397;

	t72 = (x397-((x398*x399)<x400));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x401 = 956;
	volatile uint64_t x403 = 421LLU;
	volatile int32_t x404 = -126119;
	volatile int32_t t73 = -225;

	t73 = (x401-((x402*x403)<x404));

	if (t73 != 956) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x405 = 12328U;
	static uint8_t x406 = UINT8_MAX;
	static int64_t x407 = -495659409239561LL;
	volatile int32_t t74 = 299;

	t74 = (x405-((x406*x407)<x408));

	if (t74 != 12327) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x409 = -163433372LL;
	static volatile uint8_t x410 = 0U;
	static volatile int16_t x411 = -4;
	volatile int64_t t75 = -3308148175LL;

	t75 = (x409-((x410*x411)<x412));

	if (t75 != -163433373LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x413 = 639095;
	uint16_t x414 = 102U;
	int8_t x415 = 1;
	int32_t x416 = -150530;
	static int32_t t76 = 283339;

	t76 = (x413-((x414*x415)<x416));

	if (t76 != 639095) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x417 = INT64_MIN;
	static uint16_t x418 = UINT16_MAX;
	static int16_t x420 = -19;

	t77 = (x417-((x418*x419)<x420));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x421 = 5U;
	int32_t x422 = INT32_MAX;
	uint32_t x423 = UINT32_MAX;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t78 = -1180096;

	t78 = (x421-((x422*x423)<x424));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x429 = -61;
	uint32_t x430 = UINT32_MAX;
	static volatile int8_t x432 = -4;
	volatile int32_t t79 = 4;

	t79 = (x429-((x430*x431)<x432));

	if (t79 != -62) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x433 = -1LL;
	int64_t x434 = -1LL;
	volatile uint64_t x435 = 502LLU;
	uint16_t x436 = UINT16_MAX;
	static int64_t t80 = 1787705129896914LL;

	t80 = (x433-((x434*x435)<x436));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x438 = 430U;
	static int32_t x440 = INT32_MIN;

	t81 = (x437-((x438*x439)<x440));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x441 = INT16_MIN;
	int16_t x442 = 1291;
	static int64_t x443 = -24604LL;
	int8_t x444 = -49;
	int32_t t82 = 2;

	t82 = (x441-((x442*x443)<x444));

	if (t82 != -32769) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x446 = 4044U;
	uint64_t x447 = 19825413399LLU;
	static volatile int8_t x448 = INT8_MIN;
	int64_t t83 = -13404190203660LL;

	t83 = (x445-((x446*x447)<x448));

	if (t83 != 481313165986LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x449 = -54;
	int8_t x450 = INT8_MIN;
	int8_t x451 = 0;
	int32_t t84 = -7698221;

	t84 = (x449-((x450*x451)<x452));

	if (t84 != -54) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x453 = 5U;
	static int16_t x454 = INT16_MAX;
	static volatile int32_t t85 = 79906;

	t85 = (x453-((x454*x455)<x456));

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x469 = UINT8_MAX;
	volatile uint32_t x470 = 18102U;
	volatile int32_t x471 = -1;
	static volatile int32_t t86 = 120018818;

	t86 = (x469-((x470*x471)<x472));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x473 = -1;
	uint8_t x475 = UINT8_MAX;
	uint16_t x476 = 28U;
	volatile int32_t t87 = -91347891;

	t87 = (x473-((x474*x475)<x476));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x487 = INT8_MIN;
	static volatile int16_t x488 = 18;
	int32_t t88 = 78932;

	t88 = (x485-((x486*x487)<x488));

	if (t88 != -47) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x489 = 16377449U;
	int64_t x491 = 14LL;

	t89 = (x489-((x490*x491)<x492));

	if (t89 != 16377448U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x493 = 813190381027LL;
	uint16_t x494 = 3U;
	static uint16_t x495 = UINT16_MAX;
	int32_t x496 = -1;
	static int64_t t90 = -47596653591LL;

	t90 = (x493-((x494*x495)<x496));

	if (t90 != 813190381027LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x497 = 3346544605292438221LL;
	volatile uint8_t x498 = 18U;
	volatile int64_t x499 = -1LL;
	int16_t x500 = -13300;
	int64_t t91 = 151128844184210690LL;

	t91 = (x497-((x498*x499)<x500));

	if (t91 != 3346544605292438221LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x509 = -1;
	int64_t x510 = -1LL;
	int8_t x511 = 1;
	static int16_t x512 = -111;
	volatile int32_t t92 = -14826143;

	t92 = (x509-((x510*x511)<x512));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x513 = INT8_MAX;
	uint32_t x514 = 596088948U;
	uint64_t x515 = 133LLU;
	uint32_t x516 = 0U;
	int32_t t93 = -21723;

	t93 = (x513-((x514*x515)<x516));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x521 = INT32_MIN;
	volatile uint32_t x522 = UINT32_MAX;
	volatile uint16_t x523 = 26U;
	int16_t x524 = INT16_MAX;
	int32_t t94 = INT32_MIN;

	t94 = (x521-((x522*x523)<x524));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x526 = 286818604LLU;
	volatile int32_t t95 = -236942;

	t95 = (x525-((x526*x527)<x528));

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x529 = -1;
	int64_t x531 = -1LL;
	int32_t x532 = 0;

	t96 = (x529-((x530*x531)<x532));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x537 = 1702808LL;
	volatile uint8_t x538 = UINT8_MAX;
	int8_t x539 = -10;
	volatile uint64_t x540 = 4516551828575042476LLU;
	int64_t t97 = -32LL;

	t97 = (x537-((x538*x539)<x540));

	if (t97 != 1702808LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x546 = 763954948LLU;
	uint8_t x547 = 108U;
	static int16_t x548 = INT16_MIN;
	volatile uint64_t t98 = 29997636LLU;

	t98 = (x545-((x546*x547)<x548));

	if (t98 != 714284LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x549 = 183;
	volatile uint64_t x552 = 206552323526570506LLU;
	volatile int32_t t99 = -919057139;

	t99 = (x549-((x550*x551)<x552));

	if (t99 != 182) { NG(); } else { ; }
	
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

