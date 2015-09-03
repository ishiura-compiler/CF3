#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 0;
static uint32_t x47 = 82U;
static volatile uint64_t t6 = UINT64_MAX;
int8_t x53 = 6;
static uint8_t x57 = 77U;
int64_t x59 = -8642517448594LL;
int32_t x62 = INT32_MAX;
volatile int16_t x64 = INT16_MIN;
volatile uint32_t t10 = UINT32_MAX;
static int16_t x72 = INT16_MIN;
static int32_t x81 = -19681;
uint64_t x84 = 184196LLU;
int64_t x96 = INT64_MIN;
int64_t x108 = 5815999947LL;
static uint32_t x118 = 3044778U;
int8_t x121 = INT8_MIN;
int64_t x127 = -1LL;
int16_t x133 = INT16_MIN;
volatile int32_t x136 = INT32_MIN;
static int8_t x138 = INT8_MAX;
int64_t x141 = -9598070267672LL;
static int64_t t26 = 11255849320328706LL;
volatile int8_t x154 = -3;
static int32_t t28 = -489;
static uint16_t x159 = UINT16_MAX;
uint64_t x167 = 5011915288136764LLU;
uint16_t x179 = 485U;
int8_t x188 = -1;
int16_t x189 = INT16_MIN;
static volatile uint16_t x203 = 1U;
int64_t x214 = 8249268937536LL;
static volatile int16_t x230 = -1;
int16_t x237 = INT16_MAX;
static uint8_t x243 = UINT8_MAX;
volatile int64_t x252 = -76652158LL;
int8_t x257 = INT8_MAX;
static uint32_t t48 = 110358U;
uint8_t x272 = UINT8_MAX;
static int16_t x283 = INT16_MAX;
int32_t x285 = INT32_MIN;
volatile int64_t t54 = 81690622LL;
volatile int64_t x301 = 1737695336906LL;
uint64_t t56 = 1LLU;
int64_t x308 = -1LL;
int8_t x313 = -1;
int16_t x319 = -1;
int32_t x320 = -1;
uint16_t x331 = UINT16_MAX;
uint8_t x332 = 78U;
uint64_t x343 = 13LLU;
volatile uint64_t t62 = 331635780104933LLU;
uint32_t t63 = 21827U;
uint64_t x354 = 65614582178723606LLU;
volatile int8_t x356 = INT8_MIN;
int32_t x358 = 191;
static uint32_t x359 = 39416U;
int64_t x360 = INT64_MIN;
int64_t t65 = INT64_MIN;
uint32_t x365 = 39803U;
int8_t x368 = -1;
volatile int64_t x370 = 4LL;
static int16_t x371 = INT16_MAX;
static volatile int64_t t67 = 78LL;
int16_t x378 = INT16_MAX;
uint32_t x379 = 14U;
uint16_t x382 = 21U;
uint64_t x394 = 4323LLU;
int16_t x398 = INT16_MIN;
volatile uint64_t x412 = 19824524LLU;
volatile uint64_t t73 = 162832034959LLU;
int8_t x419 = -1;
uint64_t t74 = 43178LLU;
int64_t x424 = -14LL;
int32_t x440 = INT32_MAX;
int16_t x445 = -1;
static uint32_t x448 = 2U;
static volatile uint32_t x454 = 138U;
static uint32_t x459 = 230924U;
uint64_t t82 = UINT64_MAX;
int16_t x467 = -1;
uint16_t x469 = UINT16_MAX;
static uint32_t x474 = 3940U;
volatile uint64_t x476 = 64878396864LLU;
volatile uint8_t x499 = UINT8_MAX;
uint32_t x500 = 3930U;
volatile uint64_t t88 = 634607LLU;
volatile int32_t x504 = -1;
volatile uint64_t t89 = 143919788562LLU;
volatile uint32_t x508 = UINT32_MAX;
volatile uint64_t t90 = 1LLU;
static uint16_t x511 = 9076U;
volatile uint32_t t91 = 8778U;
int8_t x517 = -1;
static int8_t x518 = INT8_MIN;
int8_t x526 = -1;
volatile uint64_t t93 = UINT64_MAX;
uint16_t x534 = 8U;
static volatile int64_t t95 = -3479424464504LL;
volatile int32_t t96 = 46446;
int8_t x561 = INT8_MIN;
volatile uint8_t x562 = 15U;
int8_t x565 = -1;
volatile uint16_t x566 = 1U;
uint32_t x568 = 826545226U;
static uint64_t x571 = 17LLU;


void f0(void) {
	volatile int8_t x5 = INT8_MAX;
	int32_t x7 = INT32_MAX;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t0 = 55627699;

	t0 = (x5|((x6*x7)/x8));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x17 = 2984904092420669435LL;
	int64_t x18 = -26LL;
	int8_t x19 = -1;
	static volatile uint32_t x20 = 2574342U;
	int64_t t1 = -881219016629411378LL;

	t1 = (x17|((x18*x19)/x20));

	if (t1 != 2984904092420669435LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = 223298763289666LL;
	uint32_t x22 = 18U;
	int8_t x23 = -23;
	int16_t x24 = INT16_MAX;
	volatile int64_t t2 = -12328177LL;

	t2 = (x21|((x22*x23)/x24));

	if (t2 != 223298763289667LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x33 = INT16_MAX;
	static int16_t x34 = -217;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = 2225;
	static int32_t t3 = -62;

	t3 = (x33|((x34*x35)/x36));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = 2;
	int32_t x38 = 1116039;
	uint64_t x39 = UINT64_MAX;
	int32_t x40 = -1;
	volatile uint64_t t4 = 319847619LLU;

	t4 = (x37|((x38*x39)/x40));

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x45 = 0U;
	int8_t x46 = INT8_MIN;
	uint64_t x48 = UINT64_MAX;
	uint64_t t5 = 869LLU;

	t5 = (x45|((x46*x47)/x48));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = UINT64_MAX;
	volatile uint16_t x50 = 5569U;
	uint16_t x51 = 21U;
	static volatile int64_t x52 = INT64_MIN;

	t6 = (x49|((x50*x51)/x52));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x54 = 32180LLU;
	int64_t x55 = 3905LL;
	static int8_t x56 = 1;
	volatile uint64_t t7 = 39278689LLU;

	t7 = (x53|((x54*x55)/x56));

	if (t7 != 125662902LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x58 = 7;
	uint64_t x60 = 235077669933084563LLU;
	uint64_t t8 = 67810022196LLU;

	t8 = (x57|((x58*x59)/x60));

	if (t8 != 79LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = INT8_MIN;
	int8_t x63 = -1;
	int32_t t9 = 4;

	t9 = (x61|((x62*x63)/x64));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x65 = -1;
	uint32_t x66 = 147649U;
	volatile uint8_t x67 = 15U;
	static int16_t x68 = -58;

	t10 = (x65|((x66*x67)/x68));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x69 = -1;
	int16_t x70 = INT16_MAX;
	int8_t x71 = INT8_MIN;
	int32_t t11 = -58;

	t11 = (x69|((x70*x71)/x72));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x77 = UINT16_MAX;
	uint8_t x78 = 1U;
	static int32_t x79 = -1;
	uint32_t x80 = UINT32_MAX;
	uint32_t t12 = 408465U;

	t12 = (x77|((x78*x79)/x80));

	if (t12 != 65535U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x82 = -1LL;
	int64_t x83 = -5574989021LL;
	volatile uint64_t t13 = 2383LLU;

	t13 = (x81|((x82*x83)/x84));

	if (t13 != 18446744073709549375LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x85 = UINT32_MAX;
	int64_t x86 = -1LL;
	int64_t x87 = INT64_MAX;
	uint32_t x88 = UINT32_MAX;
	static int64_t t14 = 0LL;

	t14 = (x85|((x86*x87)/x88));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = -1LL;
	static uint32_t x90 = 22U;
	int16_t x91 = 3557;
	int16_t x92 = INT16_MIN;
	static volatile int64_t t15 = -1801173574435487LL;

	t15 = (x89|((x90*x91)/x92));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = 746248U;
	int16_t x94 = -1010;
	int8_t x95 = INT8_MAX;
	volatile int64_t t16 = 1LL;

	t16 = (x93|((x94*x95)/x96));

	if (t16 != 746248LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = INT8_MAX;
	static volatile int8_t x98 = 1;
	static int8_t x99 = INT8_MAX;
	volatile int64_t x100 = -302706617198LL;
	volatile int64_t t17 = 3590674442LL;

	t17 = (x97|((x98*x99)/x100));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = -7LL;
	volatile uint64_t x103 = 12340768605207054LLU;
	int16_t x104 = INT16_MIN;
	uint64_t t18 = 1848371386363400LLU;

	t18 = (x101|((x102*x103)/x104));

	if (t18 != 65535LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = -1LL;
	int32_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	int64_t t19 = 1243LL;

	t19 = (x105|((x106*x107)/x108));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x117 = 1;
	uint8_t x119 = UINT8_MAX;
	volatile int64_t x120 = INT64_MIN;
	volatile int64_t t20 = 1LL;

	t20 = (x117|((x118*x119)/x120));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x122 = -3283LL;
	static int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MAX;
	static int64_t t21 = -7128LL;

	t21 = (x121|((x122*x123)/x124));

	if (t21 != -83LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x125 = 6U;
	int32_t x126 = 101;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t22 = 141547570LLU;

	t22 = (x125|((x126*x127)/x128));

	if (t22 != 6LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = -1;
	uint8_t x130 = UINT8_MAX;
	volatile uint32_t x131 = 48023U;
	int8_t x132 = -1;
	uint32_t t23 = UINT32_MAX;

	t23 = (x129|((x130*x131)/x132));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x134 = INT32_MAX;
	int16_t x135 = 1;
	int32_t t24 = 26903966;

	t24 = (x133|((x134*x135)/x136));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MIN;
	uint32_t x139 = 1U;
	volatile int64_t x140 = -19816057719970LL;
	volatile int64_t t25 = INT64_MIN;

	t25 = (x137|((x138*x139)/x140));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x142 = INT32_MIN;
	uint8_t x143 = 0U;
	static int32_t x144 = -1;

	t26 = (x141|((x142*x143)/x144));

	if (t26 != -9598070267672LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = 9434301LL;
	int16_t x146 = INT16_MIN;
	int64_t x147 = 50209700030LL;
	int64_t x148 = 12371187LL;
	volatile int64_t t27 = 21490860883392301LL;

	t27 = (x145|((x146*x147)/x148));

	if (t27 != -123734081LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = INT16_MIN;
	int8_t x155 = 0;
	int32_t x156 = INT32_MIN;

	t28 = (x153|((x154*x155)/x156));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = 13412;
	uint32_t x158 = 4076U;
	volatile uint8_t x160 = 72U;
	uint32_t t29 = 20U;

	t29 = (x157|((x158*x159)/x160));

	if (t29 != 3718269U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = -30703925LL;
	int8_t x163 = -8;
	uint32_t x164 = UINT32_MAX;
	volatile int64_t t30 = -7438233737518LL;

	t30 = (x161|((x162*x163)/x164));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x165 = 15U;
	int16_t x166 = INT16_MIN;
	int32_t x168 = INT32_MIN;
	uint64_t t31 = 7691582250329488LLU;

	t31 = (x165|((x166*x167)/x168));

	if (t31 != 15LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = -3;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 690487391914416572LLU;
	static int64_t x172 = -976387968650548676LL;
	uint64_t t32 = 708057LLU;

	t32 = (x169|((x170*x171)/x172));

	if (t32 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = -9LL;
	uint64_t x174 = 144LLU;
	uint64_t x175 = 2158784393127343614LLU;
	uint8_t x176 = 7U;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x173|((x174*x175)/x176));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x177 = 445841U;
	int16_t x178 = INT16_MIN;
	uint8_t x180 = UINT8_MAX;
	static uint32_t t34 = 584855319U;

	t34 = (x177|((x178*x179)/x180));

	if (t34 != 4294954397U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x185 = INT32_MAX;
	uint32_t x186 = 56760U;
	uint16_t x187 = 7785U;
	uint32_t t35 = 22U;

	t35 = (x185|((x186*x187)/x188));

	if (t35 != 2147483647U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x190 = 325584377180LL;
	int16_t x191 = -13;
	int16_t x192 = INT16_MAX;
	volatile int64_t t36 = 137269LL;

	t36 = (x189|((x190*x191)/x192));

	if (t36 != -1092LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x197 = INT16_MIN;
	static volatile int8_t x198 = INT8_MIN;
	volatile uint8_t x199 = 7U;
	static int16_t x200 = INT16_MAX;
	static int32_t t37 = -343216;

	t37 = (x197|((x198*x199)/x200));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = -44813289561243LL;
	int16_t x202 = 14054;
	static int32_t x204 = -156;
	int64_t t38 = -429LL;

	t38 = (x201|((x202*x203)/x204));

	if (t38 != -25LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x213 = INT64_MIN;
	int16_t x215 = 7356;
	static int64_t x216 = INT64_MAX;
	volatile int64_t t39 = INT64_MIN;

	t39 = (x213|((x214*x215)/x216));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x217 = -117LL;
	uint64_t x218 = 1LLU;
	volatile int32_t x219 = INT32_MIN;
	static volatile int32_t x220 = INT32_MIN;
	uint64_t t40 = 16261LLU;

	t40 = (x217|((x218*x219)/x220));

	if (t40 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x221 = UINT16_MAX;
	uint32_t x222 = 30U;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	volatile uint32_t t41 = 0U;

	t41 = (x221|((x222*x223)/x224));

	if (t41 != 65535U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = INT16_MIN;
	int64_t x231 = -1LL;
	uint16_t x232 = 433U;
	volatile int64_t t42 = 864903396LL;

	t42 = (x229|((x230*x231)/x232));

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x233 = UINT32_MAX;
	static volatile int32_t x234 = -1;
	int64_t x235 = -456021207331776LL;
	volatile int64_t x236 = INT64_MAX;
	int64_t t43 = -11LL;

	t43 = (x233|((x234*x235)/x236));

	if (t43 != 4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x238 = UINT8_MAX;
	static uint64_t x239 = UINT64_MAX;
	uint16_t x240 = 46U;
	uint64_t t44 = 170543354384493271LLU;

	t44 = (x237|((x238*x239)/x240));

	if (t44 != 401016175515435007LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x241 = 647196659918LLU;
	int64_t x242 = 13974385LL;
	uint16_t x244 = UINT16_MAX;
	volatile uint64_t t45 = 27328711849521303LLU;

	t45 = (x241|((x242*x243)/x244));

	if (t45 != 647196693743LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x245 = 801U;
	int64_t x246 = 45147LL;
	uint32_t x247 = 100069554U;
	uint32_t x248 = UINT32_MAX;
	volatile int64_t t46 = 47054831747638845LL;

	t46 = (x245|((x246*x247)/x248));

	if (t46 != 1851LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = INT64_MAX;
	int32_t x250 = INT32_MAX;
	int8_t x251 = -1;
	volatile int64_t t47 = INT64_MAX;

	t47 = (x249|((x250*x251)/x252));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x258 = -345;
	int16_t x259 = INT16_MAX;
	volatile uint32_t x260 = UINT32_MAX;

	t48 = (x257|((x258*x259)/x260));

	if (t48 != 127U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x269 = 5U;
	static volatile int16_t x270 = -45;
	static volatile int8_t x271 = 5;
	uint32_t t49 = 439U;

	t49 = (x269|((x270*x271)/x272));

	if (t49 != 5U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x277 = 0;
	int16_t x278 = -64;
	static uint8_t x279 = UINT8_MAX;
	int64_t x280 = 1LL;
	int64_t t50 = -403844954841LL;

	t50 = (x277|((x278*x279)/x280));

	if (t50 != -16320LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x281 = 122U;
	int16_t x282 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	uint64_t t51 = 237308339LLU;

	t51 = (x281|((x282*x283)/x284));

	if (t51 != 122LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x286 = INT32_MAX;
	volatile int32_t x287 = -1;
	int8_t x288 = -1;
	volatile int32_t t52 = 3153014;

	t52 = (x285|((x286*x287)/x288));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x289 = 99855LL;
	int8_t x290 = INT8_MIN;
	static uint32_t x291 = 11408098U;
	int32_t x292 = -724;
	volatile int64_t t53 = -592434826855421614LL;

	t53 = (x289|((x290*x291)/x292));

	if (t53 != 99855LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x293 = INT16_MAX;
	static int8_t x294 = 1;
	volatile int64_t x295 = 6582831LL;
	int16_t x296 = INT16_MIN;

	t54 = (x293|((x294*x295)/x296));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x297 = INT8_MAX;
	static int8_t x298 = -1;
	uint32_t x299 = 16201059U;
	int32_t x300 = INT32_MIN;
	volatile uint32_t t55 = 4380052U;

	t55 = (x297|((x298*x299)/x300));

	if (t55 != 127U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x302 = -535116455647078073LL;
	static uint64_t x303 = 17763440LLU;
	int16_t x304 = 6;

	t56 = (x301|((x302*x303)/x304));

	if (t56 != 989093857989737455LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 1068U;
	int8_t x307 = -1;
	int64_t t57 = -12LL;

	t57 = (x305|((x306*x307)/x308));

	if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x314 = 118U;
	uint16_t x315 = 28663U;
	static uint16_t x316 = UINT16_MAX;
	int32_t t58 = -918148;

	t58 = (x313|((x314*x315)/x316));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MAX;
	volatile int64_t t59 = -4551022676088212LL;

	t59 = (x317|((x318*x319)/x320));

	if (t59 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MIN;
	static uint64_t t60 = UINT64_MAX;

	t60 = (x329|((x330*x331)/x332));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x333 = 429U;
	static volatile int16_t x334 = INT16_MIN;
	static int8_t x335 = 18;
	volatile int8_t x336 = INT8_MIN;
	volatile uint32_t t61 = 476U;

	t61 = (x333|((x334*x335)/x336));

	if (t61 != 5037U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x341 = 137LLU;
	volatile int16_t x342 = -1;
	volatile uint8_t x344 = 13U;

	t62 = (x341|((x342*x343)/x344));

	if (t62 != 1418980313362273209LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x345 = 1196706U;
	int16_t x346 = -1;
	int16_t x347 = INT16_MIN;
	static uint16_t x348 = 75U;

	t63 = (x345|((x346*x347)/x348));

	if (t63 != 1196982U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x353 = 113U;
	volatile uint32_t x355 = UINT32_MAX;
	static volatile uint64_t t64 = 37215215228156LLU;

	t64 = (x353|((x354*x355)/x356));

	if (t64 != 113LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x357 = INT64_MIN;

	t65 = (x357|((x358*x359)/x360));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x366 = INT16_MIN;
	static volatile int64_t x367 = 52105LL;
	static volatile int64_t t66 = 11744568861LL;

	t66 = (x365|((x366*x367)/x368));

	if (t66 != 1707383675LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x369 = 6456943U;
	int8_t x372 = INT8_MIN;

	t67 = (x369|((x370*x371)/x372));

	if (t67 != -401LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x377 = UINT32_MAX;
	static volatile int64_t x380 = -1LL;
	int64_t t68 = -661187504540678LL;

	t68 = (x377|((x378*x379)/x380));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x381 = 49091834929LL;
	static volatile uint8_t x383 = 3U;
	uint32_t x384 = 155365770U;
	int64_t t69 = -14303555667551538LL;

	t69 = (x381|((x382*x383)/x384));

	if (t69 != 49091834929LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x389 = -1;
	volatile int16_t x390 = -469;
	uint32_t x391 = 3890U;
	volatile uint16_t x392 = 1U;
	static uint32_t t70 = UINT32_MAX;

	t70 = (x389|((x390*x391)/x392));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x393 = UINT16_MAX;
	volatile uint8_t x395 = 29U;
	static uint32_t x396 = UINT32_MAX;
	volatile uint64_t t71 = 5678LLU;

	t71 = (x393|((x394*x395)/x396));

	if (t71 != 65535LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x397 = INT32_MIN;
	volatile int32_t x399 = -1;
	int64_t x400 = INT64_MAX;
	volatile int64_t t72 = 169785LL;

	t72 = (x397|((x398*x399)/x400));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x409 = 34;
	int16_t x410 = INT16_MAX;
	uint16_t x411 = 24571U;

	t73 = (x409|((x410*x411)/x412));

	if (t73 != 42LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x417 = INT16_MAX;
	volatile uint64_t x418 = UINT64_MAX;
	volatile int64_t x420 = 78025179LL;

	t74 = (x417|((x418*x419)/x420));

	if (t74 != 32767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x421 = 0U;
	int16_t x422 = -1;
	static int8_t x423 = -1;
	volatile int64_t t75 = -16013090980LL;

	t75 = (x421|((x422*x423)/x424));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x433 = INT32_MIN;
	static uint16_t x434 = 7U;
	uint16_t x435 = 1U;
	static uint32_t x436 = 768105832U;
	volatile uint32_t t76 = 849469144U;

	t76 = (x433|((x434*x435)/x436));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x437 = 107176838047LL;
	int8_t x438 = INT8_MAX;
	uint8_t x439 = 10U;
	volatile int64_t t77 = -1LL;

	t77 = (x437|((x438*x439)/x440));

	if (t77 != 107176838047LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x446 = -9;
	volatile int16_t x447 = INT16_MIN;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (x445|((x446*x447)/x448));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x449 = INT16_MAX;
	uint32_t x450 = 198669U;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = 11;
	volatile uint32_t t79 = 17466U;

	t79 = (x449|((x450*x451)/x452));

	if (t79 != 390463487U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x453 = -1;
	volatile int8_t x455 = 3;
	static int8_t x456 = INT8_MAX;
	static uint32_t t80 = UINT32_MAX;

	t80 = (x453|((x454*x455)/x456));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x457 = UINT16_MAX;
	int32_t x458 = INT32_MIN;
	uint16_t x460 = 117U;
	volatile uint32_t t81 = 5U;

	t81 = (x457|((x458*x459)/x460));

	if (t81 != 65535U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x461 = UINT64_MAX;
	int16_t x462 = -1;
	volatile uint16_t x463 = 10U;
	static uint16_t x464 = 3627U;

	t82 = (x461|((x462*x463)/x464));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x465 = 5879822LLU;
	uint64_t x466 = 613LLU;
	int64_t x468 = INT64_MAX;
	volatile uint64_t t83 = 5902LLU;

	t83 = (x465|((x466*x467)/x468));

	if (t83 != 5879823LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x470 = UINT64_MAX;
	volatile int16_t x471 = INT16_MIN;
	static volatile int8_t x472 = 29;
	uint64_t t84 = 63384759589969672LLU;

	t84 = (x469|((x470*x471)/x472));

	if (t84 != 65535LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x473 = INT32_MAX;
	static uint64_t x475 = 178263855500LLU;
	uint64_t t85 = 1572LLU;

	t85 = (x473|((x474*x475)/x476));

	if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x489 = 38948661077LLU;
	uint16_t x490 = 27735U;
	uint64_t x491 = UINT64_MAX;
	volatile int16_t x492 = 3405;
	uint64_t t86 = 775431002755006676LLU;

	t86 = (x489|((x490*x491)/x492));

	if (t86 != 5417550278518613LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x493 = 15U;
	int16_t x494 = -1;
	static int64_t x495 = 448996200319LL;
	int64_t x496 = INT64_MIN;
	int64_t t87 = 2884204565036169265LL;

	t87 = (x493|((x494*x495)/x496));

	if (t87 != 15LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x497 = 2916699840168LLU;
	int16_t x498 = INT16_MIN;

	t88 = (x497|((x498*x499)/x500));

	if (t88 != 2916699848380LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x501 = 7636563232LLU;
	int8_t x502 = INT8_MIN;
	int16_t x503 = INT16_MIN;

	t89 = (x501|((x502*x503)/x504));

	if (t89 != 18446744073708287264LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x505 = 3U;
	uint64_t x506 = 30875072827LLU;
	static uint64_t x507 = UINT64_MAX;

	t90 = (x505|((x506*x507)/x508));

	if (t90 != 4294967291LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x509 = UINT8_MAX;
	int8_t x510 = -7;
	uint32_t x512 = UINT32_MAX;

	t91 = (x509|((x510*x511)/x512));

	if (t91 != 255U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x519 = 34;
	int64_t x520 = -1LL;
	volatile int64_t t92 = 210875096668LL;

	t92 = (x517|((x518*x519)/x520));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x525 = UINT64_MAX;
	int8_t x527 = INT8_MAX;
	uint64_t x528 = UINT64_MAX;

	t93 = (x525|((x526*x527)/x528));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	int64_t x531 = 1470LL;
	int32_t x532 = INT32_MIN;
	int64_t t94 = 1878465446522743926LL;

	t94 = (x529|((x530*x531)/x532));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x533 = INT64_MIN;
	int16_t x535 = INT16_MIN;
	static volatile uint32_t x536 = 3893U;

	t95 = (x533|((x534*x535)/x536));

	if (t95 != -9223372036853672622LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x537 = INT16_MIN;
	int8_t x538 = 4;
	static int8_t x539 = INT8_MIN;
	int8_t x540 = INT8_MIN;

	t96 = (x537|((x538*x539)/x540));

	if (t96 != -32764) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x563 = 1;
	int32_t x564 = INT32_MIN;
	volatile int32_t t97 = 82944036;

	t97 = (x561|((x562*x563)/x564));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x567 = 9252LLU;
	static uint64_t t98 = UINT64_MAX;

	t98 = (x565|((x566*x567)/x568));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x569 = -1;
	static uint8_t x570 = 39U;
	int64_t x572 = INT64_MIN;
	uint64_t t99 = UINT64_MAX;

	t99 = (x569|((x570*x571)/x572));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

