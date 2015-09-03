#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -1;
uint64_t x13 = 1645622170219LLU;
int32_t x16 = INT32_MAX;
int8_t x25 = -40;
uint8_t x40 = 0U;
uint64_t x43 = 215619416405LLU;
int8_t x48 = INT8_MAX;
uint16_t x53 = 0U;
uint64_t x56 = UINT64_MAX;
int32_t t10 = -3532;
int32_t x75 = INT32_MAX;
static uint64_t x76 = 333667601LLU;
static int16_t x79 = INT16_MIN;
uint8_t x85 = 70U;
static int32_t x86 = -1;
volatile int32_t x112 = 923240789;
static int8_t x114 = INT8_MAX;
int32_t t18 = -3;
int64_t x118 = INT64_MAX;
static int8_t x127 = 1;
volatile int32_t x137 = 19;
int32_t x153 = INT32_MAX;
uint8_t x154 = 15U;
static uint8_t x206 = UINT8_MAX;
static int16_t x209 = -1;
int32_t t36 = 2835;
volatile uint16_t x213 = 0U;
volatile int32_t t37 = 0;
volatile uint64_t t40 = UINT64_MAX;
static int8_t x232 = INT8_MIN;
uint16_t x239 = UINT16_MAX;
int64_t x257 = -264171268LL;
uint32_t x263 = 523877988U;
volatile int64_t t48 = INT64_MIN;
uint16_t x269 = UINT16_MAX;
int32_t t51 = -1;
int32_t t54 = -1997;
uint64_t x303 = 7227585940365818184LLU;
volatile int32_t t56 = 17043955;
volatile int16_t x310 = INT16_MAX;
volatile uint16_t x311 = 2U;
uint32_t x314 = UINT32_MAX;
int8_t x315 = -7;
int64_t t59 = 24614284632292LL;
int64_t x320 = -111908LL;
static volatile int64_t t60 = -23LL;
volatile int16_t x334 = 2;
static int64_t x335 = -263282LL;
int16_t x338 = 8;
static int64_t t68 = INT64_MAX;
volatile int32_t x376 = INT32_MAX;
uint32_t x377 = UINT32_MAX;
uint16_t x378 = UINT16_MAX;
static uint64_t x379 = UINT64_MAX;
volatile int16_t x382 = 765;
int64_t x385 = -1LL;
int64_t x388 = INT64_MIN;
int32_t x393 = INT32_MIN;
int32_t t76 = -4;
int64_t x397 = -1LL;
static int64_t x398 = 0LL;
int16_t x410 = 7134;
uint16_t x412 = 1U;
int8_t x426 = INT8_MIN;
int8_t x433 = INT8_MIN;
volatile int16_t x436 = 16217;
int16_t x447 = INT16_MIN;
int64_t t86 = 6LL;
static uint64_t x450 = 86LLU;
int32_t x451 = INT32_MIN;
static int64_t x464 = INT64_MAX;
volatile int32_t t90 = 31173;
volatile int16_t x473 = INT16_MIN;
int32_t t91 = -129950;
int32_t x479 = INT32_MIN;
int8_t x486 = INT8_MIN;
static volatile int32_t t94 = -211;
static int8_t x503 = INT8_MAX;
static volatile int16_t x509 = INT16_MIN;
int64_t x514 = -603634923907557LL;
uint64_t x516 = UINT64_MAX;
volatile int32_t t98 = 20575315;
int64_t x522 = INT64_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static uint8_t x2 = UINT8_MAX;
	int32_t x3 = -1;
	int16_t x4 = INT16_MIN;
	static volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2*x3)<x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 4995450LLU;
	static int8_t x6 = INT8_MAX;
	int8_t x8 = -1;
	volatile uint64_t t1 = 51122302978690992LLU;

	t1 = (x5|((x6*x7)<x8));

	if (t1 != 4995451LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	int16_t x10 = 131;
	volatile uint16_t x11 = UINT16_MAX;
	int8_t x12 = -1;
	static volatile int32_t t2 = INT32_MAX;

	t2 = (x9|((x10*x11)<x12));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	int32_t x15 = 30585;
	uint64_t t3 = 2601145363076197980LLU;

	t3 = (x13|((x14*x15)<x16));

	if (t3 != 1645622170219LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	int16_t x18 = INT16_MIN;
	static int16_t x19 = 4832;
	static uint16_t x20 = 3U;
	int32_t t4 = 378324;

	t4 = (x17|((x18*x19)<x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 29U;
	int32_t x22 = 7914;
	volatile int64_t x23 = -1LL;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = -381;

	t5 = (x21|((x22*x23)<x24));

	if (t5 != 29) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 1;
	uint8_t x27 = UINT8_MAX;
	uint64_t x28 = 200522000528775LLU;
	volatile int32_t t6 = -75852589;

	t6 = (x25|((x26*x27)<x28));

	if (t6 != -39) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -3872370;
	int64_t x38 = -22709LL;
	int8_t x39 = INT8_MIN;
	int32_t t7 = 30313522;

	t7 = (x37|((x38*x39)<x40));

	if (t7 != -3872370) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = -1;
	int8_t x44 = -5;
	int32_t t8 = -1;

	t8 = (x41|((x42*x43)<x44));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = UINT64_MAX;
	uint32_t x47 = UINT32_MAX;
	int64_t t9 = INT64_MIN;

	t9 = (x45|((x46*x47)<x48));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = -1LL;

	t10 = (x53|((x54*x55)<x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x61 = -8949;
	int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MIN;
	static volatile int8_t x64 = INT8_MIN;
	volatile int32_t t11 = -2119;

	t11 = (x61|((x62*x63)<x64));

	if (t11 != -8949) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MAX;
	uint64_t x74 = 13LLU;
	int32_t t12 = -1679;

	t12 = (x73|((x74*x75)<x76));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x77 = UINT16_MAX;
	uint32_t x78 = UINT32_MAX;
	static int64_t x80 = INT64_MIN;
	volatile int32_t t13 = 1002;

	t13 = (x77|((x78*x79)<x80));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x87 = 621583557;
	static volatile uint16_t x88 = 2244U;
	int32_t t14 = 25480810;

	t14 = (x85|((x86*x87)<x88));

	if (t14 != 71) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = INT64_MIN;
	static volatile uint16_t x90 = 48U;
	volatile int32_t x91 = -140702;
	int32_t x92 = -1;
	volatile int64_t t15 = -168LL;

	t15 = (x89|((x90*x91)<x92));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x105 = 7;
	int32_t x106 = -1;
	uint8_t x107 = UINT8_MAX;
	uint32_t x108 = 3U;
	volatile int32_t t16 = 1;

	t16 = (x105|((x106*x107)<x108));

	if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x109 = 0U;
	uint32_t x110 = 23685U;
	uint32_t x111 = UINT32_MAX;
	volatile int32_t t17 = 0;

	t17 = (x109|((x110*x111)<x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = INT32_MIN;
	uint8_t x115 = 2U;
	static uint64_t x116 = UINT64_MAX;

	t18 = (x113|((x114*x115)<x116));

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int32_t x119 = -1;
	static int16_t x120 = -1;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (x117|((x118*x119)<x120));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x121 = UINT16_MAX;
	int8_t x122 = INT8_MIN;
	volatile int16_t x123 = INT16_MAX;
	volatile int8_t x124 = -1;
	int32_t t20 = -1;

	t20 = (x121|((x122*x123)<x124));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x125 = INT8_MIN;
	volatile uint8_t x126 = 58U;
	static int8_t x128 = INT8_MIN;
	int32_t t21 = 817458424;

	t21 = (x125|((x126*x127)<x128));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x129 = UINT16_MAX;
	uint16_t x130 = 8757U;
	int16_t x131 = INT16_MIN;
	volatile int16_t x132 = -1;
	volatile int32_t t22 = -4233;

	t22 = (x129|((x130*x131)<x132));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x138 = 13U;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = 413244531LLU;
	int32_t t23 = -1;

	t23 = (x137|((x138*x139)<x140));

	if (t23 != 19) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x155 = 57307;
	uint16_t x156 = 25U;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x153|((x154*x155)<x156));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x157 = 1U;
	int16_t x158 = INT16_MIN;
	int8_t x159 = -50;
	int32_t x160 = -1;
	volatile int32_t t25 = -15117980;

	t25 = (x157|((x158*x159)<x160));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x161 = 3;
	int8_t x162 = INT8_MAX;
	static volatile uint64_t x163 = 6760LLU;
	static uint8_t x164 = 16U;
	int32_t t26 = 2770647;

	t26 = (x161|((x162*x163)<x164));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x166 = 89U;
	uint8_t x167 = UINT8_MAX;
	static int8_t x168 = INT8_MIN;
	int32_t t27 = INT32_MIN;

	t27 = (x165|((x166*x167)<x168));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile uint16_t x170 = UINT16_MAX;
	uint32_t x171 = 194911661U;
	int64_t x172 = -130227421878LL;
	static volatile int32_t t28 = 15;

	t28 = (x169|((x170*x171)<x172));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x173 = 2U;
	uint8_t x174 = 0U;
	uint16_t x175 = 45U;
	uint16_t x176 = 22U;
	static volatile uint32_t t29 = 350U;

	t29 = (x173|((x174*x175)<x176));

	if (t29 != 3U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x177 = INT16_MAX;
	uint16_t x178 = UINT16_MAX;
	static uint64_t x179 = 22477981205431LLU;
	uint64_t x180 = 2691491200LLU;
	int32_t t30 = -1;

	t30 = (x177|((x178*x179)<x180));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x185 = 607LLU;
	int64_t x186 = 1677033029LL;
	static int32_t x187 = INT32_MIN;
	int8_t x188 = -7;
	uint64_t t31 = 2236409LLU;

	t31 = (x185|((x186*x187)<x188));

	if (t31 != 607LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x189 = 683LL;
	static uint8_t x190 = 6U;
	volatile int32_t x191 = -1;
	int8_t x192 = INT8_MIN;
	volatile int64_t t32 = 0LL;

	t32 = (x189|((x190*x191)<x192));

	if (t32 != 683LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x193 = INT32_MAX;
	uint32_t x194 = 1498408715U;
	static int32_t x195 = 7;
	int32_t x196 = 191418452;
	static volatile int32_t t33 = INT32_MAX;

	t33 = (x193|((x194*x195)<x196));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = -1;
	int16_t x202 = INT16_MIN;
	static int16_t x203 = -1;
	static int32_t x204 = INT32_MIN;
	int32_t t34 = 185;

	t34 = (x201|((x202*x203)<x204));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x205 = 13876U;
	int8_t x207 = INT8_MIN;
	int64_t x208 = 212407336669976LL;
	volatile uint32_t t35 = 2576720U;

	t35 = (x205|((x206*x207)<x208));

	if (t35 != 13877U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x210 = UINT16_MAX;
	uint64_t x211 = 532LLU;
	int16_t x212 = 28;

	t36 = (x209|((x210*x211)<x212));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = -1;
	int16_t x216 = INT16_MIN;

	t37 = (x213|((x214*x215)<x216));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	uint32_t x219 = 14U;
	static int16_t x220 = INT16_MIN;
	int32_t t38 = 169707552;

	t38 = (x217|((x218*x219)<x220));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x221 = UINT64_MAX;
	int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MAX;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x221|((x222*x223)<x224));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = 3590U;
	static uint64_t x227 = 792995384820904787LLU;
	static uint32_t x228 = 114076816U;

	t40 = (x225|((x226*x227)<x228));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x229 = 3U;
	uint64_t x230 = 2086977775LLU;
	volatile int32_t x231 = -1;
	static volatile int32_t t41 = 717642215;

	t41 = (x229|((x230*x231)<x232));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = -184204274313LL;
	static volatile int16_t x234 = -1;
	volatile int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	int64_t t42 = -95639336LL;

	t42 = (x233|((x234*x235)<x236));

	if (t42 != -184204274313LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x237 = 0;
	uint32_t x238 = UINT32_MAX;
	uint8_t x240 = 8U;
	int32_t t43 = -67732;

	t43 = (x237|((x238*x239)<x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x241 = 7U;
	uint64_t x242 = 33001446055LLU;
	static int8_t x243 = INT8_MIN;
	int32_t x244 = -12088260;
	uint32_t t44 = 32004928U;

	t44 = (x241|((x242*x243)<x244));

	if (t44 != 7U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x245 = UINT64_MAX;
	int16_t x246 = INT16_MIN;
	volatile int64_t x247 = -13296494381LL;
	uint8_t x248 = UINT8_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = (x245|((x246*x247)<x248));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = -33LL;
	uint64_t x254 = 3338399428LLU;
	static int8_t x255 = INT8_MAX;
	uint32_t x256 = UINT32_MAX;
	volatile int64_t t46 = 1984394LL;

	t46 = (x253|((x254*x255)<x256));

	if (t46 != -33LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x258 = 0;
	int8_t x259 = 30;
	int64_t x260 = INT64_MIN;
	int64_t t47 = -1253274LL;

	t47 = (x257|((x258*x259)<x260));

	if (t47 != -264171268LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = INT64_MIN;
	int16_t x262 = INT16_MIN;
	volatile int16_t x264 = 8081;

	t48 = (x261|((x262*x263)<x264));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x265 = INT16_MAX;
	uint8_t x266 = 40U;
	static int16_t x267 = INT16_MIN;
	static int8_t x268 = -38;
	int32_t t49 = 19911758;

	t49 = (x265|((x266*x267)<x268));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x270 = UINT64_MAX;
	uint32_t x271 = 0U;
	int16_t x272 = -1804;
	int32_t t50 = 3879894;

	t50 = (x269|((x270*x271)<x272));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x273 = 1630U;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = INT8_MIN;
	static volatile int8_t x276 = INT8_MAX;

	t51 = (x273|((x274*x275)<x276));

	if (t51 != 1630) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x281 = 1;
	int32_t x282 = -127;
	uint64_t x283 = 149669LLU;
	int8_t x284 = -38;
	int32_t t52 = -6;

	t52 = (x281|((x282*x283)<x284));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x285 = 891467855650703LL;
	uint16_t x286 = 0U;
	int32_t x287 = INT32_MIN;
	volatile int16_t x288 = -1;
	int64_t t53 = 483209LL;

	t53 = (x285|((x286*x287)<x288));

	if (t53 != 891467855650703LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x289 = 399U;
	uint64_t x290 = 0LLU;
	uint64_t x291 = 517777601051LLU;
	static int64_t x292 = INT64_MIN;

	t54 = (x289|((x290*x291)<x292));

	if (t54 != 399) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x293 = 31027LLU;
	uint16_t x294 = 21U;
	volatile uint8_t x295 = 24U;
	int32_t x296 = -1;
	volatile uint64_t t55 = 611437504146561LLU;

	t55 = (x293|((x294*x295)<x296));

	if (t55 != 31027LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x301 = INT8_MAX;
	uint8_t x302 = 0U;
	int16_t x304 = -1;

	t56 = (x301|((x302*x303)<x304));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x305 = INT16_MIN;
	volatile int8_t x306 = 1;
	int64_t x307 = 53376470061LL;
	int16_t x308 = 0;
	int32_t t57 = -675;

	t57 = (x305|((x306*x307)<x308));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = 1;
	volatile int8_t x312 = -10;
	static volatile int32_t t58 = -282;

	t58 = (x309|((x310*x311)<x312));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x313 = 312507LL;
	uint8_t x316 = UINT8_MAX;

	t59 = (x313|((x314*x315)<x316));

	if (t59 != 312507LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x317 = 1LL;
	uint16_t x318 = 0U;
	volatile uint8_t x319 = 2U;

	t60 = (x317|((x318*x319)<x320));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x321 = 357162887;
	volatile uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MIN;
	int16_t x324 = 7181;
	int32_t t61 = 29;

	t61 = (x321|((x322*x323)<x324));

	if (t61 != 357162887) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x325 = -133;
	int64_t x326 = -1LL;
	uint8_t x327 = 13U;
	static int32_t x328 = -294;
	static int32_t t62 = 2303317;

	t62 = (x325|((x326*x327)<x328));

	if (t62 != -133) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x329 = 2793U;
	int32_t x330 = -1;
	int32_t x331 = -1;
	static int16_t x332 = -1;
	int32_t t63 = -481932;

	t63 = (x329|((x330*x331)<x332));

	if (t63 != 2793) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x333 = UINT32_MAX;
	int8_t x336 = INT8_MIN;
	uint32_t t64 = UINT32_MAX;

	t64 = (x333|((x334*x335)<x336));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x337 = INT32_MIN;
	uint64_t x339 = UINT64_MAX;
	static int16_t x340 = 1830;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x337|((x338*x339)<x340));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = 1874;
	uint64_t x343 = UINT64_MAX;
	volatile uint8_t x344 = 4U;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x341|((x342*x343)<x344));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x353 = -125375;
	static volatile int8_t x354 = -1;
	volatile uint16_t x355 = 15532U;
	volatile int8_t x356 = 1;
	volatile int32_t t67 = 22877;

	t67 = (x353|((x354*x355)<x356));

	if (t67 != -125375) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x357 = INT64_MAX;
	uint64_t x358 = 247LLU;
	uint8_t x359 = 0U;
	static int64_t x360 = -54169255658796LL;

	t68 = (x357|((x358*x359)<x360));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x361 = INT32_MIN;
	int32_t x362 = -557;
	static int32_t x363 = 1;
	int32_t x364 = INT32_MIN;
	int32_t t69 = INT32_MIN;

	t69 = (x361|((x362*x363)<x364));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x365 = 5618040LL;
	static int32_t x366 = -1;
	static int32_t x367 = 25343254;
	static int8_t x368 = INT8_MIN;
	volatile int64_t t70 = 283082204060317LL;

	t70 = (x365|((x366*x367)<x368));

	if (t70 != 5618041LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x373 = -1;
	int16_t x374 = INT16_MAX;
	static volatile int16_t x375 = -234;
	static volatile int32_t t71 = -1;

	t71 = (x373|((x374*x375)<x376));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x380 = 5U;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x377|((x378*x379)<x380));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x381 = -1;
	static int16_t x383 = 15;
	int16_t x384 = 1;
	int32_t t73 = 174577;

	t73 = (x381|((x382*x383)<x384));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x386 = -1LL;
	volatile int16_t x387 = INT16_MIN;
	volatile int64_t t74 = 23416040792379LL;

	t74 = (x385|((x386*x387)<x388));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x389 = 1LL;
	volatile int8_t x390 = INT8_MIN;
	static volatile int16_t x391 = INT16_MIN;
	static volatile int8_t x392 = INT8_MIN;
	volatile int64_t t75 = 299096663426520LL;

	t75 = (x389|((x390*x391)<x392));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x394 = 1;
	uint16_t x395 = 21517U;
	int32_t x396 = INT32_MAX;

	t76 = (x393|((x394*x395)<x396));

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x399 = INT64_MIN;
	int64_t x400 = -65590166LL;
	int64_t t77 = -142577773265713749LL;

	t77 = (x397|((x398*x399)<x400));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x405 = INT8_MIN;
	uint8_t x406 = 109U;
	int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	int32_t t78 = -2;

	t78 = (x405|((x406*x407)<x408));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x409 = 17U;
	static uint8_t x411 = UINT8_MAX;
	int32_t t79 = 1292160;

	t79 = (x409|((x410*x411)<x412));

	if (t79 != 17) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x413 = 988LLU;
	int64_t x414 = -1LL;
	static uint16_t x415 = UINT16_MAX;
	uint8_t x416 = 7U;
	volatile uint64_t t80 = 69LLU;

	t80 = (x413|((x414*x415)<x416));

	if (t80 != 989LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;
	uint8_t x423 = UINT8_MAX;
	uint8_t x424 = 29U;
	int32_t t81 = -7;

	t81 = (x421|((x422*x423)<x424));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x425 = INT16_MIN;
	int8_t x427 = -1;
	volatile int64_t x428 = -1LL;
	static volatile int32_t t82 = 7;

	t82 = (x425|((x426*x427)<x428));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x434 = UINT32_MAX;
	volatile int64_t x435 = -15437LL;
	static volatile int32_t t83 = -56911;

	t83 = (x433|((x434*x435)<x436));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x437 = -157;
	volatile int32_t x438 = -1;
	int16_t x439 = -5;
	volatile uint64_t x440 = 3086298082489795LLU;
	volatile int32_t t84 = -246361869;

	t84 = (x437|((x438*x439)<x440));

	if (t84 != -157) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x441 = UINT32_MAX;
	uint8_t x442 = UINT8_MAX;
	uint64_t x443 = UINT64_MAX;
	uint16_t x444 = 11U;
	uint32_t t85 = UINT32_MAX;

	t85 = (x441|((x442*x443)<x444));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x445 = 381019208563LL;
	static int16_t x446 = INT16_MIN;
	uint16_t x448 = 2U;

	t86 = (x445|((x446*x447)<x448));

	if (t86 != 381019208563LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x449 = 2U;
	static int16_t x452 = INT16_MIN;
	uint32_t t87 = 3920U;

	t87 = (x449|((x450*x451)<x452));

	if (t87 != 3U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = INT8_MIN;
	uint8_t x454 = 10U;
	volatile int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MIN;
	volatile int32_t t88 = -60376;

	t88 = (x453|((x454*x455)<x456));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = -6;
	uint32_t x462 = 4U;
	static volatile uint8_t x463 = UINT8_MAX;
	volatile int32_t t89 = -8181802;

	t89 = (x461|((x462*x463)<x464));

	if (t89 != -5) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x465 = UINT16_MAX;
	int32_t x466 = INT32_MAX;
	uint64_t x467 = 6LLU;
	uint32_t x468 = UINT32_MAX;

	t90 = (x465|((x466*x467)<x468));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x474 = 31U;
	uint16_t x475 = 27797U;
	static int64_t x476 = INT64_MAX;

	t91 = (x473|((x474*x475)<x476));

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x477 = -1;
	uint32_t x478 = 5U;
	volatile int64_t x480 = -45LL;
	static volatile int32_t t92 = 6697529;

	t92 = (x477|((x478*x479)<x480));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x485 = INT64_MIN;
	uint32_t x487 = 2425U;
	static int8_t x488 = INT8_MIN;
	int64_t t93 = -8846857479960979LL;

	t93 = (x485|((x486*x487)<x488));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x493 = 1;
	int8_t x494 = -59;
	int64_t x495 = -1LL;
	int16_t x496 = INT16_MAX;

	t94 = (x493|((x494*x495)<x496));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x501 = 107;
	int64_t x502 = -16467190LL;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t95 = -57828183;

	t95 = (x501|((x502*x503)<x504));

	if (t95 != 107) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x510 = -1;
	uint64_t x511 = 9302596863678LLU;
	static uint16_t x512 = UINT16_MAX;
	int32_t t96 = 2168;

	t96 = (x509|((x510*x511)<x512));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x513 = INT32_MAX;
	static int8_t x515 = INT8_MAX;
	int32_t t97 = INT32_MAX;

	t97 = (x513|((x514*x515)<x516));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x517 = UINT8_MAX;
	uint16_t x518 = UINT16_MAX;
	uint64_t x519 = 204569644LLU;
	int8_t x520 = INT8_MIN;

	t98 = (x517|((x518*x519)<x520));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x521 = INT64_MIN;
	static volatile uint64_t x523 = UINT64_MAX;
	uint8_t x524 = 19U;
	int64_t t99 = INT64_MIN;

	t99 = (x521|((x522*x523)<x524));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

