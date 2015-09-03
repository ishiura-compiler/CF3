#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x17 = 182455064185518LLU;
uint32_t x18 = 1U;
int8_t x21 = INT8_MAX;
static uint32_t x22 = 1980U;
uint64_t x23 = UINT64_MAX;
volatile uint64_t t4 = 44331144038LLU;
int16_t x25 = INT16_MAX;
uint64_t x27 = 5909455066102LLU;
int16_t x34 = INT16_MIN;
static volatile uint16_t x41 = 549U;
static int16_t x48 = INT16_MIN;
int8_t x60 = -1;
int64_t x63 = -1LL;
static int32_t x66 = -790676969;
volatile int32_t t14 = -232922007;
volatile int8_t x69 = INT8_MIN;
uint32_t x70 = 2297U;
int32_t x74 = INT32_MIN;
int64_t t16 = -10LL;
static int64_t t17 = 77LL;
volatile int64_t x83 = -1LL;
volatile int16_t x90 = -11223;
volatile uint64_t t19 = 7545LLU;
volatile int8_t x100 = -1;
int8_t x106 = 0;
uint64_t t24 = 23821809199LLU;
int8_t x151 = INT8_MIN;
static int16_t x152 = 27;
uint64_t t25 = 19958084207791855LLU;
uint64_t t28 = 3534LLU;
volatile int64_t x165 = -1LL;
uint16_t x171 = 38U;
static volatile uint64_t x178 = 64938861LLU;
int32_t t33 = 119;
int32_t x189 = -1;
int8_t x199 = -1;
volatile int32_t t35 = 609;
uint32_t x208 = 47992378U;
uint64_t t38 = 1029LLU;
volatile int16_t x216 = INT16_MIN;
static uint8_t x221 = 12U;
int64_t x224 = -104144706421LL;
uint8_t x238 = 0U;
uint8_t x239 = 1U;
static int32_t t43 = -3265161;
uint64_t x264 = UINT64_MAX;
int32_t x266 = INT32_MIN;
volatile int16_t x284 = INT16_MIN;
uint32_t x292 = UINT32_MAX;
volatile int32_t t51 = -12613934;
int32_t t53 = -7662;
static int8_t x316 = -1;
static uint8_t x327 = 10U;
uint8_t x335 = UINT8_MAX;
int8_t x338 = INT8_MIN;
static int16_t x341 = INT16_MIN;
static int16_t x343 = -509;
int8_t x344 = 59;
uint64_t x353 = UINT64_MAX;
uint32_t x354 = 1267882U;
static volatile int16_t x356 = INT16_MIN;
int64_t x370 = INT64_MIN;
int16_t x373 = -20;
volatile int64_t t68 = -2LL;
uint16_t x378 = UINT16_MAX;
int8_t x392 = -1;
uint64_t x394 = 250LLU;
static uint8_t x415 = UINT8_MAX;
volatile uint8_t x416 = 1U;
uint8_t x418 = UINT8_MAX;
int16_t x426 = -1;
volatile uint32_t x428 = UINT32_MAX;
volatile uint16_t x433 = 21904U;
uint8_t x445 = UINT8_MAX;
int8_t x448 = INT8_MIN;
volatile uint16_t x459 = 13388U;
volatile int64_t t78 = 143LL;
uint16_t x479 = UINT16_MAX;
uint64_t x482 = 0LLU;
int16_t x484 = INT16_MAX;
uint8_t x492 = 39U;
static int32_t t84 = -5;
static int16_t x500 = 221;
uint64_t x506 = 106LLU;
static int64_t x514 = 1323LL;
uint16_t x516 = 44U;
uint64_t t90 = 150LLU;
int64_t x531 = 32LL;
int8_t x532 = INT8_MAX;
int8_t x542 = INT8_MAX;
uint64_t x544 = 3786790LLU;
static uint16_t x555 = 16U;
int32_t x573 = INT32_MAX;
static uint16_t x576 = UINT16_MAX;
static int32_t x577 = 615;
int16_t x581 = INT16_MIN;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = -1;
	static uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 4623643627416488354LLU;

	t0 = ((x1|x2)%(x3*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 183978895LLU;
	int32_t x6 = -1;
	uint32_t x7 = 1U;
	static int64_t x8 = -1LL;
	volatile uint64_t t1 = 6LLU;

	t1 = ((x5|x6)%(x7*x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	volatile uint32_t x10 = 826U;
	int16_t x11 = INT16_MIN;
	static uint8_t x12 = UINT8_MAX;
	static volatile uint32_t t2 = 6694942U;

	t2 = ((x9|x10)%(x11*x12));

	if (t2 != 8355839U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x19 = -174554;
	uint32_t x20 = UINT32_MAX;
	volatile uint64_t t3 = 1942LLU;

	t3 = ((x17|x18)%(x19*x20));

	if (t3 != 86981LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x24 = 1;

	t4 = ((x21|x22)%(x23*x24));

	if (t4 != 2047LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x26 = 65333315295331LLU;
	static int16_t x28 = INT16_MAX;
	volatile uint64_t t5 = 258895870605739266LLU;

	t5 = ((x25|x26)%(x27*x28));

	if (t5 != 65333315305471LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = 0U;
	volatile uint64_t x30 = 24374761552594LLU;
	int8_t x31 = 1;
	static uint32_t x32 = UINT32_MAX;
	uint64_t t6 = 499808744347401101LLU;

	t6 = ((x29|x30)%(x31*x32));

	if (t6 != 822153469LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MAX;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = 40183506397652LLU;
	volatile uint64_t t7 = 25LLU;

	t7 = ((x33|x34)%(x35*x36));

	if (t7 != 1316733137638228095LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	static int16_t x38 = INT16_MIN;
	int32_t x39 = -15812110;
	int16_t x40 = -98;
	uint64_t t8 = 7694223701543392077LLU;

	t8 = ((x37|x38)%(x39*x40));

	if (t8 != 167125575LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	static int8_t x44 = -1;
	static volatile int32_t t9 = 906051;

	t9 = ((x41|x42)%(x43*x44));

	if (t9 != -32219) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -27LL;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = INT16_MAX;
	volatile int64_t t10 = 4342LL;

	t10 = ((x45|x46)%(x47*x48));

	if (t10 != -27LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = UINT32_MAX;
	static int8_t x50 = 0;
	static volatile int8_t x51 = INT8_MIN;
	uint16_t x52 = 495U;
	uint32_t t11 = 450700214U;

	t11 = ((x49|x50)%(x51*x52));

	if (t11 != 63359U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = UINT8_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x59 = 6;
	static volatile int32_t t12 = 25850;

	t12 = ((x57|x58)%(x59*x60));

	if (t12 != -5) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 0;
	uint8_t x62 = 3U;
	static volatile int16_t x64 = INT16_MIN;
	static int64_t t13 = 109148793581528916LL;

	t13 = ((x61|x62)%(x63*x64));

	if (t13 != 3LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = 506985770;
	int8_t x67 = 2;
	uint8_t x68 = 15U;

	t14 = ((x65|x66)%(x67*x68));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x71 = -185357959;
	int32_t x72 = -1;
	volatile uint32_t t15 = 12858U;

	t15 = ((x69|x70)%(x71*x72));

	if (t15 != 31734232U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	uint32_t x75 = 65183U;
	static int16_t x76 = INT16_MIN;

	t16 = ((x73|x74)%(x75*x76));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = -1LL;
	int32_t x78 = -133990373;
	int8_t x79 = INT8_MAX;
	int16_t x80 = -70;

	t17 = ((x77|x78)%(x79*x80));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x81 = 16886U;
	int16_t x82 = INT16_MIN;
	static int64_t x84 = -1LL;
	static int64_t t18 = 66417009527958336LL;

	t18 = ((x81|x82)%(x83*x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	uint8_t x91 = 3U;
	int64_t x92 = -1LL;

	t19 = ((x89|x90)%(x91*x92));

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x97 = INT32_MAX;
	volatile int16_t x98 = INT16_MIN;
	uint32_t x99 = 12034U;
	volatile uint32_t t20 = 754058U;

	t20 = ((x97|x98)%(x99*x100));

	if (t20 != 12033U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x105 = INT8_MIN;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 19896831627275LLU;
	uint64_t t21 = 5647LLU;

	t21 = ((x105|x106)%(x107*x108));

	if (t21 != 5461291870971756416LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x109 = 1;
	static int8_t x110 = INT8_MAX;
	int16_t x111 = -2273;
	uint8_t x112 = UINT8_MAX;
	int32_t t22 = -248;

	t22 = ((x109|x110)%(x111*x112));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = 116;
	volatile int16_t x118 = INT16_MIN;
	volatile int8_t x119 = INT8_MIN;
	int16_t x120 = -1;
	int32_t t23 = 7;

	t23 = ((x117|x118)%(x119*x120));

	if (t23 != -12) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = -3778;
	int64_t x126 = INT64_MIN;
	volatile uint16_t x127 = 3485U;
	uint64_t x128 = UINT64_MAX;

	t24 = ((x125|x126)%(x127*x128));

	if (t24 != 18446744073709547838LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x149 = UINT64_MAX;
	int8_t x150 = -10;

	t25 = ((x149|x150)%(x151*x152));

	if (t25 != 3455LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x153 = 51LLU;
	int8_t x154 = -1;
	uint64_t x155 = 941150LLU;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t26 = 15271083487LLU;

	t26 = ((x153|x154)%(x155*x156));

	if (t26 != 941149LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x157 = INT32_MIN;
	volatile int32_t x158 = -3955187;
	static uint8_t x159 = 1U;
	volatile int64_t x160 = -23243884105227LL;
	int64_t t27 = -3035737775LL;

	t27 = ((x157|x158)%(x159*x160));

	if (t27 != -3955187LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x162 = 40695065U;
	uint64_t x163 = 11749731283LLU;
	static int64_t x164 = -1LL;

	t28 = ((x161|x162)%(x163*x164));

	if (t28 != 40697855LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x166 = 2U;
	static int16_t x167 = INT16_MAX;
	int64_t x168 = 1043LL;
	static volatile int64_t t29 = -11LL;

	t29 = ((x165|x166)%(x167*x168));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x169 = 0U;
	uint8_t x170 = 1U;
	int8_t x172 = INT8_MAX;
	volatile int32_t t30 = 28507;

	t30 = ((x169|x170)%(x171*x172));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = -1;
	uint32_t x174 = 1077U;
	static volatile int32_t x175 = 7953;
	uint64_t x176 = 3LLU;
	volatile uint64_t t31 = 120820677809LLU;

	t31 = ((x173|x174)%(x175*x176));

	if (t31 != 13269LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x177 = INT8_MIN;
	int8_t x179 = INT8_MAX;
	int8_t x180 = 3;
	volatile uint64_t t32 = 242LLU;

	t32 = ((x177|x178)%(x179*x180));

	if (t32 != 237LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x185 = -9;
	int32_t x186 = -341487678;
	volatile int16_t x187 = 98;
	uint8_t x188 = UINT8_MAX;

	t33 = ((x185|x186)%(x187*x188));

	if (t33 != -9) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x190 = 373LLU;
	int16_t x191 = INT16_MIN;
	static int16_t x192 = INT16_MIN;
	volatile uint64_t t34 = 5119983LLU;

	t34 = ((x189|x190)%(x191*x192));

	if (t34 != 1073741823LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	volatile int32_t x200 = -1;

	t35 = ((x197|x198)%(x199*x200));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x201 = 250U;
	int64_t x202 = INT64_MAX;
	int16_t x203 = -1;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t36 = 673LL;

	t36 = ((x201|x202)%(x203*x204));

	if (t36 != 127LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x205 = 999;
	volatile int32_t x206 = INT32_MAX;
	volatile int16_t x207 = 40;
	uint32_t t37 = 4U;

	t37 = ((x205|x206)%(x207*x208));

	if (t37 != 227788527U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x209 = 2442324313963581833LLU;
	int64_t x210 = INT64_MAX;
	volatile uint64_t x211 = 40771068763321LLU;
	static volatile int64_t x212 = -1LL;

	t38 = ((x209|x210)%(x211*x212));

	if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x213 = INT64_MIN;
	int64_t x214 = 264692943LL;
	volatile int32_t x215 = -2;
	static int64_t t39 = 412027LL;

	t39 = ((x213|x214)%(x215*x216));

	if (t39 != -6961LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x217 = 7U;
	int64_t x218 = INT64_MIN;
	volatile int8_t x219 = 17;
	volatile int8_t x220 = -1;
	int64_t t40 = -2402346240007674LL;

	t40 = ((x217|x218)%(x219*x220));

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x222 = 1810591352U;
	uint16_t x223 = UINT16_MAX;
	int64_t t41 = 247987625816886LL;

	t41 = ((x221|x222)%(x223*x224));

	if (t41 != 1810591356LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x225 = INT64_MIN;
	uint32_t x226 = 0U;
	static int8_t x227 = -38;
	int16_t x228 = INT16_MIN;
	static volatile int64_t t42 = -66LL;

	t42 = ((x225|x226)%(x227*x228));

	if (t42 != -983040LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x237 = INT16_MIN;
	int8_t x240 = -1;

	t43 = ((x237|x238)%(x239*x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x249 = INT32_MAX;
	static int32_t x250 = -1;
	int64_t x251 = 4166584113432LL;
	static int8_t x252 = 7;
	int64_t t44 = 55895849335LL;

	t44 = ((x249|x250)%(x251*x252));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x261 = UINT32_MAX;
	uint8_t x262 = 0U;
	static int32_t x263 = INT32_MIN;
	uint64_t t45 = 13282382LLU;

	t45 = ((x261|x262)%(x263*x264));

	if (t45 != 2147483647LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x265 = INT64_MIN;
	int16_t x267 = -1;
	int16_t x268 = INT16_MIN;
	volatile int64_t t46 = 964546816150LL;

	t46 = ((x265|x266)%(x267*x268));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = 3U;
	int8_t x279 = 3;
	int64_t x280 = 82728662369LL;
	uint64_t t47 = 50582LLU;

	t47 = ((x277|x278)%(x279*x280));

	if (t47 != 173872421478LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x281 = 10U;
	int16_t x282 = INT16_MIN;
	static uint32_t x283 = 1036U;
	uint32_t t48 = 10785U;

	t48 = ((x281|x282)%(x283*x284));

	if (t48 != 33914890U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x285 = 118U;
	uint16_t x286 = 3U;
	uint32_t x287 = 1U;
	static uint8_t x288 = 38U;
	volatile uint32_t t49 = 20756U;

	t49 = ((x285|x286)%(x287*x288));

	if (t49 != 5U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x290 = 299U;
	int32_t x291 = 12;
	uint32_t t50 = 42765U;

	t50 = ((x289|x290)%(x291*x292));

	if (t50 != 2147483947U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x297 = INT32_MAX;
	volatile int32_t x298 = -593731;
	int32_t x299 = -6208260;
	int32_t x300 = -1;

	t51 = ((x297|x298)%(x299*x300));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x301 = -1;
	int64_t x302 = -1LL;
	uint16_t x303 = UINT16_MAX;
	static int8_t x304 = INT8_MIN;
	int64_t t52 = 740LL;

	t52 = ((x301|x302)%(x303*x304));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x305 = INT8_MIN;
	int16_t x306 = 986;
	static volatile int16_t x307 = INT16_MIN;
	volatile int16_t x308 = -1;

	t53 = ((x305|x306)%(x307*x308));

	if (t53 != -38) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x309 = 23604;
	static uint8_t x310 = 42U;
	volatile uint8_t x311 = UINT8_MAX;
	volatile int16_t x312 = INT16_MAX;
	int32_t t54 = 183;

	t54 = ((x309|x310)%(x311*x312));

	if (t54 != 23614) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x313 = INT8_MIN;
	volatile int64_t x314 = 12478814046558312LL;
	static volatile int16_t x315 = 3;
	volatile int64_t t55 = -548177253158769LL;

	t55 = ((x313|x314)%(x315*x316));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = -1;
	volatile uint32_t x319 = 950172733U;
	uint32_t x320 = UINT32_MAX;
	uint32_t t56 = 483175446U;

	t56 = ((x317|x318)%(x319*x320));

	if (t56 != 950172732U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x325 = 440U;
	volatile int8_t x326 = -15;
	uint64_t x328 = 2845LLU;
	uint64_t t57 = 546449520202LLU;

	t57 = ((x325|x326)%(x327*x328));

	if (t57 != 10209LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x329 = INT8_MAX;
	static int32_t x330 = -4886960;
	uint16_t x331 = UINT16_MAX;
	static volatile int16_t x332 = INT16_MIN;
	int32_t t58 = -3087;

	t58 = ((x329|x330)%(x331*x332));

	if (t58 != -4886913) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x333 = INT8_MIN;
	uint64_t x334 = UINT64_MAX;
	uint64_t x336 = 808749LLU;
	volatile uint64_t t59 = 879015LLU;

	t59 = ((x333|x334)%(x335*x336));

	if (t59 != 175109010LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x337 = UINT16_MAX;
	volatile uint16_t x339 = 464U;
	int64_t x340 = 4060437LL;
	int64_t t60 = -1159667LL;

	t60 = ((x337|x338)%(x339*x340));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x342 = INT16_MAX;
	int32_t t61 = 61852;

	t61 = ((x341|x342)%(x343*x344));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MAX;
	static int16_t x347 = 1;
	uint32_t x348 = 104U;
	volatile uint32_t t62 = 15U;

	t62 = ((x345|x346)%(x347*x348));

	if (t62 != 47U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x349 = INT64_MAX;
	uint32_t x350 = 75748U;
	volatile uint8_t x351 = 115U;
	uint32_t x352 = UINT32_MAX;
	int64_t t63 = 2797638LL;

	t63 = ((x349|x350)%(x351*x352));

	if (t63 != 2147490202LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x355 = -1;
	uint64_t t64 = 95862581114LLU;

	t64 = ((x353|x354)%(x355*x356));

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x361 = INT16_MIN;
	static volatile int32_t x362 = INT32_MAX;
	volatile uint8_t x363 = UINT8_MAX;
	static int32_t x364 = -141;
	static int32_t t65 = -2;

	t65 = ((x361|x362)%(x363*x364));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x365 = INT16_MAX;
	static volatile int16_t x366 = 2020;
	int16_t x367 = -225;
	int32_t x368 = -1;
	static int32_t t66 = -1;

	t66 = ((x365|x366)%(x367*x368));

	if (t66 != 142) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x369 = 2854U;
	int32_t x371 = -1;
	int32_t x372 = -62644336;
	int64_t t67 = 1215352478LL;

	t67 = ((x369|x370)%(x371*x372));

	if (t67 != -58623754LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x374 = 143310070783671054LL;
	int32_t x375 = -1;
	volatile int16_t x376 = 22;

	t68 = ((x373|x374)%(x375*x376));

	if (t68 != -18LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = 1LL;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = 8799340409010926254LLU;
	volatile uint64_t t69 = 15901162656LLU;

	t69 = ((x377|x378)%(x379*x380));

	if (t69 != 65535LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x385 = 1194U;
	static int8_t x386 = INT8_MIN;
	volatile int8_t x387 = INT8_MIN;
	volatile uint32_t x388 = UINT32_MAX;
	uint32_t t70 = 458U;

	t70 = ((x385|x386)%(x387*x388));

	if (t70 != 42U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x389 = UINT16_MAX;
	static int16_t x390 = INT16_MIN;
	static int16_t x391 = INT16_MIN;
	static int32_t t71 = 345;

	t71 = ((x389|x390)%(x391*x392));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x393 = 3;
	static volatile int8_t x395 = INT8_MAX;
	int16_t x396 = 319;
	uint64_t t72 = 4258334LLU;

	t72 = ((x393|x394)%(x395*x396));

	if (t72 != 251LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x413 = 9U;
	int16_t x414 = INT16_MAX;
	uint32_t t73 = 1098U;

	t73 = ((x413|x414)%(x415*x416));

	if (t73 != 127U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x417 = INT16_MAX;
	static int32_t x419 = -310853;
	static uint64_t x420 = UINT64_MAX;
	uint64_t t74 = 34917722179892258LLU;

	t74 = ((x417|x418)%(x419*x420));

	if (t74 != 32767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x425 = 2U;
	int8_t x427 = INT8_MAX;
	volatile uint32_t t75 = 4871621U;

	t75 = ((x425|x426)%(x427*x428));

	if (t75 != 126U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x434 = UINT8_MAX;
	int16_t x435 = 965;
	int16_t x436 = -1;
	int32_t t76 = -253;

	t76 = ((x433|x434)%(x435*x436));

	if (t76 != 785) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x446 = 27U;
	int64_t x447 = -1LL;
	int64_t t77 = -16289612403349831LL;

	t77 = ((x445|x446)%(x447*x448));

	if (t77 != 127LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x457 = -1;
	volatile int64_t x458 = INT64_MIN;
	volatile int64_t x460 = 3355897127885LL;

	t78 = ((x457|x458)%(x459*x460));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x465 = UINT64_MAX;
	int32_t x466 = INT32_MIN;
	int16_t x467 = 1968;
	volatile int8_t x468 = INT8_MIN;
	volatile uint64_t t79 = 90046767189111518LLU;

	t79 = ((x465|x466)%(x467*x468));

	if (t79 != 251903LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x469 = UINT16_MAX;
	static volatile int32_t x470 = INT32_MIN;
	uint16_t x471 = UINT16_MAX;
	static int16_t x472 = INT16_MIN;
	int32_t t80 = 1;

	t80 = ((x469|x470)%(x471*x472));

	if (t80 != -2147418113) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x477 = INT32_MIN;
	static int8_t x478 = INT8_MAX;
	uint64_t x480 = 38579967033036933LLU;
	uint64_t t81 = 3697401633884LLU;

	t81 = ((x477|x478)%(x479*x480));

	if (t81 != 299521481692743887LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x481 = 1;
	int64_t x483 = 47708401439LL;
	uint64_t t82 = 28132673106314LLU;

	t82 = ((x481|x482)%(x483*x484));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x485 = 22U;
	int8_t x486 = INT8_MIN;
	uint16_t x487 = UINT16_MAX;
	int64_t x488 = -1LL;
	int64_t t83 = 21305117009701LL;

	t83 = ((x485|x486)%(x487*x488));

	if (t83 != 65430LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x489 = -1;
	int8_t x490 = INT8_MAX;
	volatile int8_t x491 = INT8_MIN;

	t84 = ((x489|x490)%(x491*x492));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x497 = 7521999275712LL;
	int64_t x498 = -1692LL;
	volatile uint32_t x499 = UINT32_MAX;
	static volatile int64_t t85 = -16277LL;

	t85 = ((x497|x498)%(x499*x500));

	if (t85 != -28LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x501 = 6;
	int32_t x502 = INT32_MAX;
	static uint8_t x503 = 1U;
	volatile int16_t x504 = INT16_MIN;
	volatile int32_t t86 = 3145938;

	t86 = ((x501|x502)%(x503*x504));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x505 = INT32_MIN;
	static uint16_t x507 = 3U;
	volatile uint8_t x508 = 6U;
	uint64_t t87 = 5416217668696570597LLU;

	t87 = ((x505|x506)%(x507*x508));

	if (t87 != 12LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x509 = 1103LLU;
	int8_t x510 = INT8_MAX;
	static int16_t x511 = INT16_MIN;
	int64_t x512 = 63087419231081LL;
	static uint64_t t88 = 5LLU;

	t88 = ((x509|x510)%(x511*x512));

	if (t88 != 1151LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x513 = 17U;
	volatile uint64_t x515 = 14163191936783LLU;
	volatile uint64_t t89 = 13727LLU;

	t89 = ((x513|x514)%(x515*x516));

	if (t89 != 1339LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x521 = INT16_MIN;
	static uint64_t x522 = UINT64_MAX;
	uint64_t x523 = 3735338897921318LLU;
	int32_t x524 = -1;

	t90 = ((x521|x522)%(x523*x524));

	if (t90 != 3735338897921317LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x529 = -2;
	int64_t x530 = -1LL;
	volatile int64_t t91 = -16411LL;

	t91 = ((x529|x530)%(x531*x532));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x537 = 5;
	int16_t x538 = INT16_MIN;
	uint16_t x539 = 3796U;
	static int64_t x540 = 21143207688LL;
	int64_t t92 = 0LL;

	t92 = ((x537|x538)%(x539*x540));

	if (t92 != -32763LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x541 = 1U;
	volatile int8_t x543 = INT8_MIN;
	static uint64_t t93 = 504124748LLU;

	t93 = ((x541|x542)%(x543*x544));

	if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x549 = INT16_MAX;
	volatile uint32_t x550 = 462898212U;
	uint64_t x551 = UINT64_MAX;
	int16_t x552 = -2447;
	volatile uint64_t t94 = 975440LLU;

	t94 = ((x549|x550)%(x551*x552));

	if (t94 != 2310LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x553 = -780890512;
	int64_t x554 = -1LL;
	int32_t x556 = -1;
	volatile int64_t t95 = 572021689606908LL;

	t95 = ((x553|x554)%(x555*x556));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x574 = 220;
	uint64_t x575 = UINT64_MAX;
	volatile uint64_t t96 = 1686LLU;

	t96 = ((x573|x574)%(x575*x576));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x578 = 30U;
	volatile uint64_t x579 = 2734151598LLU;
	uint32_t x580 = 39503865U;
	uint64_t t97 = 297956846347LLU;

	t97 = ((x577|x578)%(x579*x580));

	if (t97 != 639LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x582 = 2U;
	int32_t x583 = 400;
	uint8_t x584 = 52U;
	volatile int32_t t98 = 30101;

	t98 = ((x581|x582)%(x583*x584));

	if (t98 != -11966) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x589 = INT8_MAX;
	uint64_t x590 = 85133LLU;
	uint64_t x591 = UINT64_MAX;
	int8_t x592 = INT8_MAX;
	uint64_t t99 = 81601LLU;

	t99 = ((x589|x590)%(x591*x592));

	if (t99 != 85247LLU) { NG(); } else { ; }
	
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

