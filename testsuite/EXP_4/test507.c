#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
volatile uint64_t t0 = 10693LLU;
int8_t x6 = -1;
int64_t x9 = INT64_MIN;
static int32_t x17 = -1;
static int32_t x28 = INT32_MAX;
static volatile uint64_t t5 = 20LLU;
uint64_t x33 = 55LLU;
uint16_t x36 = 253U;
volatile uint64_t x38 = 1277698LLU;
uint32_t t8 = 136U;
int16_t x49 = INT16_MIN;
static int32_t x53 = -1;
int8_t x56 = 3;
volatile uint16_t x72 = UINT16_MAX;
volatile uint8_t x75 = 0U;
volatile int8_t x92 = INT8_MAX;
static uint64_t t18 = 23500642085LLU;
static volatile uint16_t x107 = 378U;
volatile uint8_t x116 = UINT8_MAX;
uint64_t t22 = 2078588495005LLU;
volatile int32_t x119 = 117569179;
int8_t x123 = 18;
uint64_t t25 = 3774517LLU;
volatile int16_t x137 = INT16_MIN;
uint8_t x139 = UINT8_MAX;
int64_t t27 = -4222111113063147949LL;
uint64_t x148 = UINT64_MAX;
uint8_t x156 = 4U;
int32_t t30 = 39;
uint64_t x163 = UINT64_MAX;
int16_t x164 = INT16_MIN;
uint64_t x165 = 14270742428LLU;
int32_t x166 = -130;
int16_t x167 = INT16_MAX;
uint64_t x171 = 72013764754303246LLU;
uint8_t x172 = 1U;
uint32_t x183 = UINT32_MAX;
int8_t x194 = -5;
int8_t x197 = INT8_MIN;
volatile int64_t x201 = INT64_MAX;
int32_t x202 = INT32_MIN;
volatile uint32_t t43 = 6U;
volatile int32_t x225 = INT32_MIN;
int32_t t44 = 637267689;
uint64_t t47 = 305332049910LLU;
static int8_t x259 = -50;
static int64_t t50 = 3321541866147997491LL;
int32_t t54 = 42;
static int8_t x282 = INT8_MIN;
uint32_t x289 = UINT32_MAX;
int64_t x296 = 34LL;
static volatile int64_t t58 = -55467497222716LL;
uint32_t x299 = 5626U;
uint8_t x300 = UINT8_MAX;
volatile uint64_t t59 = 370508424116845LLU;
int16_t x301 = 10;
static int32_t x306 = 14179;
uint8_t x307 = 0U;
int16_t x313 = 98;
uint64_t x314 = 1LLU;
uint64_t x315 = 905101782LLU;
static int64_t x333 = -36184383LL;
int32_t x341 = 510;
int8_t x351 = 3;
volatile int16_t x361 = -2;
volatile uint64_t x364 = UINT64_MAX;
uint64_t x366 = 12548040664LLU;
uint8_t x371 = 2U;
int32_t x376 = -1;
int64_t t73 = 163685180348831LL;
static int32_t t74 = 302730;
int8_t x392 = INT8_MIN;
uint32_t x395 = 28U;
int8_t x396 = INT8_MIN;
static int64_t x398 = -1LL;
int8_t x405 = 7;
int64_t x408 = -1LL;
volatile int64_t x412 = 16458538083LL;
int32_t x418 = -143715;
static volatile uint8_t x419 = 12U;
int8_t x420 = INT8_MAX;
volatile int32_t t82 = 29;
int8_t x422 = -1;
int8_t x424 = INT8_MIN;
static uint64_t t83 = 110281541771775407LLU;
int8_t x428 = INT8_MIN;
static int32_t t84 = -423;
int8_t x433 = -1;
uint32_t x437 = 40U;
static int64_t x440 = INT64_MAX;
int64_t x442 = INT64_MAX;
uint64_t t87 = 67823691369063LLU;
int64_t x445 = INT64_MAX;
static int32_t x450 = 0;
uint8_t x451 = UINT8_MAX;
uint32_t x452 = UINT32_MAX;
int64_t x457 = -1LL;
int8_t x463 = -7;
volatile int16_t x467 = 1;
int64_t x482 = INT64_MAX;
uint64_t x484 = UINT64_MAX;
static uint16_t x487 = UINT16_MAX;
volatile uint8_t x494 = UINT8_MAX;


void f0(void) {
	uint64_t x2 = 888191661023LLU;
	uint8_t x3 = 22U;
	volatile int64_t x4 = 0LL;

	t0 = (x1^(x2^(x3*x4)));

	if (t0 != 9223372925046436831LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int64_t x7 = -1LL;
	volatile int8_t x8 = -1;
	volatile int64_t t1 = -2877597449843409986LL;

	t1 = (x5^(x6^(x7*x8)));

	if (t1 != -4294967295LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	volatile int64_t x11 = 127858471165LL;
	volatile int32_t x12 = -1;
	volatile int64_t t2 = -4705820540313LL;

	t2 = (x9^(x10^(x11*x12)));

	if (t2 != -9223371908996304765LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x18 = -9LL;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t x20 = -5;
	volatile uint64_t t3 = 4588949LLU;

	t3 = (x17^(x18^(x19*x20)));

	if (t3 != 13LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x25 = 111799144376LLU;
	int8_t x26 = -37;
	uint64_t x27 = UINT64_MAX;
	uint64_t t4 = 3868845LLU;

	t4 = (x25^(x26^(x27*x28)));

	if (t4 != 113686638690LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = UINT16_MAX;
	int16_t x30 = -7;
	volatile uint64_t x31 = UINT64_MAX;
	int16_t x32 = 12;

	t5 = (x29^(x30^(x31*x32)));

	if (t5 != 65522LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = INT8_MIN;
	int32_t x35 = -1;
	uint64_t t6 = 86635680744LLU;

	t6 = (x33^(x34^(x35*x36)));

	if (t6 != 180LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	volatile int8_t x39 = 2;
	uint8_t x40 = 40U;
	uint64_t t7 = 772339813LLU;

	t7 = (x37^(x38^(x39*x40)));

	if (t7 != 4293689517LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x41 = UINT32_MAX;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MAX;
	int16_t x44 = INT16_MAX;

	t8 = (x41^(x42^(x43*x44)));

	if (t8 != 1073807358U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x50 = INT8_MIN;
	int32_t x51 = -1015;
	static uint8_t x52 = 0U;
	volatile int32_t t9 = 1567558;

	t9 = (x49^(x50^(x51*x52)));

	if (t9 != 32640) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x54 = INT16_MIN;
	int32_t x55 = -4;
	static volatile int32_t t10 = 6196;

	t10 = (x53^(x54^(x55*x56)));

	if (t10 != -32757) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x57 = INT32_MAX;
	uint64_t x58 = UINT64_MAX;
	static int16_t x59 = -1;
	int64_t x60 = -1LL;
	volatile uint64_t t11 = 6245007345LLU;

	t11 = (x57^(x58^(x59*x60)));

	if (t11 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x61 = UINT16_MAX;
	int8_t x62 = -1;
	int8_t x63 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t12 = 6165459U;

	t12 = (x61^(x62^(x63*x64)));

	if (t12 != 4294901888U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	volatile uint8_t x67 = 85U;
	int8_t x68 = INT8_MIN;
	int32_t t13 = 43708105;

	t13 = (x65^(x66^(x67*x68)));

	if (t13 != 43647) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 987289;
	static int64_t x70 = INT64_MIN;
	volatile int16_t x71 = INT16_MIN;
	volatile int64_t t14 = -3038463494902LL;

	t14 = (x69^(x70^(x71*x72)));

	if (t14 != 9223372034708312217LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = -1;
	uint64_t x74 = 620283188480160206LLU;
	static uint8_t x76 = 56U;
	volatile uint64_t t15 = 3721400274531LLU;

	t15 = (x73^(x74^(x75*x76)));

	if (t15 != 17826460885229391409LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = 771;
	uint32_t x78 = 39884638U;
	int16_t x79 = INT16_MAX;
	int64_t x80 = 95681LL;
	int64_t t16 = -846LL;

	t16 = (x77^(x78^(x79*x80)));

	if (t16 != 3099565666LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x89 = INT16_MAX;
	int64_t x90 = INT64_MIN;
	static int16_t x91 = INT16_MIN;
	int64_t t17 = -1478LL;

	t17 = (x89^(x90^(x91*x92)));

	if (t17 != 9223372036850647039LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = UINT64_MAX;
	uint16_t x94 = 12U;
	int8_t x95 = INT8_MIN;
	static int32_t x96 = -1;

	t18 = (x93^(x94^(x95*x96)));

	if (t18 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x101 = INT32_MIN;
	int64_t x102 = INT64_MAX;
	uint32_t x103 = UINT32_MAX;
	volatile uint64_t x104 = 56834518589047LLU;
	static uint64_t t19 = 809350818682010371LLU;

	t19 = (x101^(x102^(x103*x104)));

	if (t19 != 5857611665348664950LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = INT16_MIN;
	static volatile uint32_t x106 = UINT32_MAX;
	int8_t x108 = -15;
	uint32_t t20 = 154U;

	t20 = (x105^(x106^(x107*x108)));

	if (t20 != 4294940197U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x109 = 29U;
	int16_t x110 = -1;
	uint64_t x111 = 15353875545804LLU;
	volatile uint16_t x112 = UINT16_MAX;
	uint64_t t21 = 33532620490LLU;

	t21 = (x109^(x110^(x111*x112)));

	if (t21 != 17440527839815286486LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = 21U;
	uint64_t x115 = 200345323991LLU;

	t22 = (x113^(x114^(x115*x116)));

	if (t22 != 18446692985651933884LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x117 = 4U;
	volatile int32_t x118 = -1;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t23 = 15175673U;

	t23 = (x117^(x118^(x119*x120)));

	if (t23 != 117569182U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t24 = 78;

	t24 = (x121^(x122^(x123*x124)));

	if (t24 != 589568) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;
	uint64_t x128 = 49474LLU;

	t25 = (x125^(x126^(x127*x128)));

	if (t25 != 18446744073709502145LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x138 = 418900764U;
	static uint32_t x140 = UINT32_MAX;
	volatile uint32_t t26 = 179793U;

	t26 = (x137^(x138^(x139*x140)));

	if (t26 != 418878493U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = -115954800LL;
	int64_t x142 = -1LL;
	int64_t x143 = INT64_MAX;
	volatile int64_t x144 = -1LL;

	t27 = (x141^(x142^(x143*x144)));

	if (t27 != -9223372036738821010LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x145 = -1;
	volatile uint32_t x146 = 1390421U;
	uint32_t x147 = 286113945U;
	volatile uint64_t t28 = 12886496459467917LLU;

	t28 = (x145^(x146^(x147*x148)));

	if (t28 != 286848973LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = 826U;
	int8_t x152 = INT8_MIN;
	volatile uint32_t t29 = 52816127U;

	t29 = (x149^(x150^(x151*x152)));

	if (t29 != 4294843647U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = -1;
	int32_t x155 = -3598851;

	t30 = (x153^(x154^(x155*x156)));

	if (t30 != -14395509) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = UINT16_MAX;
	int16_t x158 = INT16_MIN;
	static int64_t x159 = 24083187294LL;
	int8_t x160 = 0;
	int64_t t31 = -27404LL;

	t31 = (x157^(x158^(x159*x160)));

	if (t31 != -32769LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x161 = INT64_MIN;
	int8_t x162 = -1;
	volatile uint64_t t32 = 7901534684694647LLU;

	t32 = (x161^(x162^(x163*x164)));

	if (t32 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x168 = 4;
	uint64_t t33 = 18996441LLU;

	t33 = (x165^(x166^(x167*x168)));

	if (t33 != 18446744059438710558LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x169 = 20337998295970LLU;
	int8_t x170 = INT8_MIN;
	uint64_t t34 = 92192LLU;

	t34 = (x169^(x170^(x171*x172)));

	if (t34 != 18374745456078513452LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x173 = 1;
	static volatile int64_t x174 = INT64_MAX;
	static int8_t x175 = -1;
	volatile uint16_t x176 = 7U;
	static int64_t t35 = 2173152613711031515LL;

	t35 = (x173^(x174^(x175*x176)));

	if (t35 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x181 = UINT32_MAX;
	volatile int64_t x182 = 622LL;
	static int16_t x184 = INT16_MAX;
	static int64_t t36 = 128323926972LL;

	t36 = (x181^(x182^(x183*x184)));

	if (t36 != 32144LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MIN;
	static uint64_t x186 = 319LLU;
	uint8_t x187 = 34U;
	uint8_t x188 = 72U;
	uint64_t t37 = 8582214901LLU;

	t37 = (x185^(x186^(x187*x188)));

	if (t37 != 18446744073709521071LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = 930123804490267LL;
	int16_t x190 = INT16_MAX;
	uint32_t x191 = 6U;
	uint16_t x192 = UINT16_MAX;
	static int64_t t38 = -21852884669378LL;

	t38 = (x189^(x190^(x191*x192)));

	if (t38 != 930123804260894LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x193 = -1;
	uint8_t x195 = UINT8_MAX;
	volatile int16_t x196 = -7;
	int32_t t39 = 644;

	t39 = (x193^(x194^(x195*x196)));

	if (t39 != -1789) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x198 = INT32_MIN;
	volatile uint16_t x199 = UINT16_MAX;
	int16_t x200 = INT16_MIN;
	int32_t t40 = -2899;

	t40 = (x197^(x198^(x199*x200)));

	if (t40 != -32896) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x203 = 312U;
	int16_t x204 = INT16_MIN;
	static int64_t t41 = 16869368214LL;

	t41 = (x201^(x202^(x203*x204)));

	if (t41 != 9223372034717515775LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x213 = 849676866002283228LLU;
	static uint8_t x214 = UINT8_MAX;
	int16_t x215 = INT16_MAX;
	volatile uint16_t x216 = 7U;
	volatile uint64_t t42 = 171LLU;

	t42 = (x213^(x214^(x215*x216)));

	if (t42 != 849676866002195930LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x217 = UINT32_MAX;
	static volatile uint32_t x218 = UINT32_MAX;
	static uint8_t x219 = UINT8_MAX;
	uint8_t x220 = UINT8_MAX;

	t43 = (x217^(x218^(x219*x220)));

	if (t43 != 65025U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x226 = INT32_MIN;
	volatile uint8_t x227 = 23U;
	int32_t x228 = 25421301;

	t44 = (x225^(x226^(x227*x228)));

	if (t44 != 584689923) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MAX;
	uint8_t x230 = 8U;
	volatile int32_t x231 = -1;
	volatile uint16_t x232 = UINT16_MAX;
	int32_t t45 = 61084;

	t45 = (x229^(x230^(x231*x232)));

	if (t45 != -32778) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x241 = 32735207626872591LL;
	static int32_t x242 = -1;
	uint16_t x243 = 6501U;
	static int16_t x244 = 4722;
	volatile int64_t t46 = -217548088880456258LL;

	t46 = (x241^(x242^(x243*x244)));

	if (t46 != -32735207654948854LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x245 = INT16_MAX;
	uint16_t x246 = 1716U;
	static uint64_t x247 = 807522655LLU;
	static int32_t x248 = INT32_MIN;

	t47 = (x245^(x246^(x247*x248)));

	if (t47 != 16712602376707537227LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x249 = INT64_MAX;
	int64_t x250 = -1224916389636328849LL;
	uint8_t x251 = 2U;
	static uint64_t x252 = 19150086LLU;
	volatile uint64_t t48 = 96LLU;

	t48 = (x249^(x250^(x251*x252)));

	if (t48 != 10448288426453870492LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x253 = -1;
	volatile uint16_t x254 = 237U;
	int64_t x255 = 276514259660535LL;
	volatile int16_t x256 = -1;
	int64_t t49 = 3660297LL;

	t49 = (x253^(x254^(x255*x256)));

	if (t49 != 276514259660315LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = INT64_MIN;
	volatile int32_t x258 = INT32_MAX;
	int16_t x260 = INT16_MIN;

	t50 = (x257^(x258^(x259*x260)));

	if (t50 != -9223372034708930561LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x261 = 1U;
	uint64_t x262 = 197919402LLU;
	volatile uint8_t x263 = 7U;
	int32_t x264 = 0;
	volatile uint64_t t51 = 141402803064932620LLU;

	t51 = (x261^(x262^(x263*x264)));

	if (t51 != 197919403LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x270 = 873137452472LLU;
	static uint8_t x271 = UINT8_MAX;
	int8_t x272 = INT8_MAX;
	static volatile uint64_t t52 = 3453766396011395316LLU;

	t52 = (x269^(x270^(x271*x272)));

	if (t52 != 873137457990LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x273 = 56U;
	int16_t x274 = INT16_MAX;
	volatile int32_t x275 = -1;
	int8_t x276 = INT8_MIN;
	volatile int32_t t53 = -14905;

	t53 = (x273^(x274^(x275*x276)));

	if (t53 != 32583) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x277 = 0;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = -1;
	int8_t x280 = INT8_MAX;

	t54 = (x277^(x278^(x279*x280)));

	if (t54 != -130) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = INT8_MIN;
	volatile int16_t x283 = 35;
	int8_t x284 = INT8_MIN;
	static int32_t t55 = -1;

	t55 = (x281^(x282^(x283*x284)));

	if (t55 != -4480) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x285 = 5;
	uint8_t x286 = 14U;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MIN;
	static int32_t t56 = -9110;

	t56 = (x285^(x286^(x287*x288)));

	if (t56 != -8355829) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x290 = 178838U;
	static int64_t x291 = -18686386373750561LL;
	volatile int16_t x292 = 0;
	int64_t t57 = -8813662113815567LL;

	t57 = (x289^(x290^(x291*x292)));

	if (t57 != 4294788457LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x293 = 1U;
	uint32_t x294 = UINT32_MAX;
	static int64_t x295 = -790019LL;

	t58 = (x293^(x294^(x295*x296)));

	if (t58 != -4268106652LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x297 = 14952LLU;
	int32_t x298 = -1;

	t59 = (x297^(x298^(x299*x300)));

	if (t59 != 4293534097LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 2U;
	volatile int16_t x304 = INT16_MIN;
	int32_t t60 = 49;

	t60 = (x301^(x302^(x303*x304)));

	if (t60 != 32778) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x305 = UINT64_MAX;
	static int64_t x308 = INT64_MIN;
	volatile uint64_t t61 = 2896LLU;

	t61 = (x305^(x306^(x307*x308)));

	if (t61 != 18446744073709537436LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x309 = 2888587066900457LLU;
	static uint16_t x310 = 5396U;
	uint32_t x311 = UINT32_MAX;
	uint32_t x312 = UINT32_MAX;
	uint64_t t62 = 656794LLU;

	t62 = (x309^(x310^(x311*x312)));

	if (t62 != 2888587066895100LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x316 = INT8_MIN;
	uint64_t t63 = 12LLU;

	t63 = (x313^(x314^(x315*x316)));

	if (t63 != 18446743957856523619LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x329 = 29471U;
	uint16_t x330 = 4U;
	int32_t x331 = -3;
	uint32_t x332 = 1832406U;
	uint32_t t64 = 186725U;

	t64 = (x329^(x330^(x331*x332)));

	if (t64 != 4289490277U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x334 = UINT8_MAX;
	static volatile int16_t x335 = INT16_MIN;
	volatile int16_t x336 = INT16_MAX;
	int64_t t65 = 566049054712LL;

	t65 = (x333^(x334^(x335*x336)));

	if (t65 != 1037524542LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = -34;
	static volatile uint64_t x338 = 7089729LLU;
	int32_t x339 = INT32_MAX;
	int64_t x340 = -1LL;
	static uint64_t t66 = 3632939170LLU;

	t66 = (x337^(x338^(x339*x340)));

	if (t66 != 2140393886LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x342 = -1LL;
	static uint16_t x343 = 975U;
	uint32_t x344 = 1U;
	volatile int64_t t67 = 1420LL;

	t67 = (x341^(x342^(x343*x344)));

	if (t67 != -562LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x349 = -1;
	static int64_t x350 = INT64_MAX;
	static int32_t x352 = 1963;
	int64_t t68 = -5608486924LL;

	t68 = (x349^(x350^(x351*x352)));

	if (t68 != -9223372036854769919LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x357 = 95U;
	int8_t x358 = -1;
	uint64_t x359 = 46354963480LLU;
	static int8_t x360 = -1;
	static uint64_t t69 = 629LLU;

	t69 = (x357^(x358^(x359*x360)));

	if (t69 != 46354963528LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x362 = -1;
	int16_t x363 = INT16_MAX;
	uint64_t t70 = 6983LLU;

	t70 = (x361^(x362^(x363*x364)));

	if (t70 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x365 = 0;
	int8_t x367 = -1;
	uint16_t x368 = 22U;
	volatile uint64_t t71 = 436401146778252317LLU;

	t71 = (x365^(x366^(x367*x368)));

	if (t71 != 18446744061161510962LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x369 = 13959U;
	uint8_t x370 = 14U;
	int8_t x372 = 0;
	static int32_t t72 = 46447293;

	t72 = (x369^(x370^(x371*x372)));

	if (t72 != 13961) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x373 = -1;
	int8_t x374 = -1;
	int64_t x375 = INT64_MAX;

	t73 = (x373^(x374^(x375*x376)));

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x377 = 58U;
	volatile int8_t x378 = 1;
	static volatile int32_t x379 = -10;
	static volatile int8_t x380 = INT8_MIN;

	t74 = (x377^(x378^(x379*x380)));

	if (t74 != 1339) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x385 = 2;
	uint64_t x386 = UINT64_MAX;
	uint32_t x387 = 1830U;
	int16_t x388 = INT16_MAX;
	uint64_t t75 = 42874850261801LLU;

	t75 = (x385^(x386^(x387*x388)));

	if (t75 != 18446744073649588007LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	volatile int32_t t76 = 188279;

	t76 = (x389^(x390^(x391*x392)));

	if (t76 != 2147451008) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x393 = INT32_MIN;
	int32_t x394 = -1;
	uint32_t t77 = 28U;

	t77 = (x393^(x394^(x395*x396)));

	if (t77 != 2147487231U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x397 = -1;
	int16_t x399 = -1;
	static int64_t x400 = INT64_MAX;
	int64_t t78 = 3313569795352LL;

	t78 = (x397^(x398^(x399*x400)));

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x401 = UINT16_MAX;
	int32_t x402 = -1;
	int16_t x403 = INT16_MAX;
	uint16_t x404 = 1828U;
	volatile int32_t t79 = 15978;

	t79 = (x401^(x402^(x403*x404)));

	if (t79 != -59836196) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x406 = -1;
	uint16_t x407 = 4U;
	volatile int64_t t80 = 864316LL;

	t80 = (x405^(x406^(x407*x408)));

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x409 = INT32_MAX;
	uint32_t x410 = 131U;
	uint16_t x411 = 0U;
	volatile int64_t t81 = -4LL;

	t81 = (x409^(x410^(x411*x412)));

	if (t81 != 2147483516LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x417 = 59;

	t82 = (x417^(x418^(x419*x420)));

	if (t82 != -144558) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x421 = INT8_MAX;
	volatile uint64_t x423 = 1073228414342LLU;

	t83 = (x421^(x422^(x423*x424)));

	if (t83 != 137373237035648LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x425 = INT16_MAX;
	static int32_t x426 = INT32_MIN;
	static int16_t x427 = -1;

	t84 = (x425^(x426^(x427*x428)));

	if (t84 != -2147451009) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x434 = 57U;
	volatile uint8_t x435 = 1U;
	uint16_t x436 = UINT16_MAX;
	volatile uint32_t t85 = 29660U;

	t85 = (x433^(x434^(x435*x436)));

	if (t85 != 4294901817U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x438 = -1;
	int16_t x439 = -1;
	static int64_t t86 = -42LL;

	t86 = (x437^(x438^(x439*x440)));

	if (t86 != 9223372036854775766LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x441 = UINT64_MAX;
	int16_t x443 = 0;
	static int32_t x444 = -210084;

	t87 = (x441^(x442^(x443*x444)));

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = -2392117470LL;
	int32_t x448 = INT32_MIN;
	volatile int64_t t88 = 12549531613173219LL;

	t88 = (x445^(x446^(x447*x448)));

	if (t88 != 4086338885934579712LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x449 = 7919U;
	static uint32_t t89 = 32179U;

	t89 = (x449^(x450^(x451*x452)));

	if (t89 != 4294959598U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x458 = -1LL;
	uint8_t x459 = UINT8_MAX;
	static int32_t x460 = 10376;
	int64_t t90 = 243529357LL;

	t90 = (x457^(x458^(x459*x460)));

	if (t90 != 2645880LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x461 = 824561LLU;
	volatile int8_t x462 = 0;
	int64_t x464 = -1LL;
	uint64_t t91 = 5769640LLU;

	t91 = (x461^(x462^(x463*x464)));

	if (t91 != 824566LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x465 = 9U;
	int32_t x466 = -250;
	int8_t x468 = 34;
	static volatile int32_t t92 = 434664;

	t92 = (x465^(x466^(x467*x468)));

	if (t92 != -211) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x477 = UINT64_MAX;
	static uint8_t x478 = UINT8_MAX;
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = -1;
	volatile uint64_t t93 = 4535696LLU;

	t93 = (x477^(x478^(x479*x480)));

	if (t93 != 65281LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x481 = 396U;
	int16_t x483 = -84;
	static volatile uint64_t t94 = 66623067534923344LLU;

	t94 = (x481^(x482^(x483*x484)));

	if (t94 != 9223372036854775335LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x485 = INT64_MAX;
	uint64_t x486 = 261986456726458LLU;
	int8_t x488 = -8;
	volatile uint64_t t95 = 8001986917917LLU;

	t95 = (x485^(x486^(x487*x488)));

	if (t95 != 9223634023311971405LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x489 = 989U;
	volatile int8_t x490 = 10;
	volatile int8_t x491 = INT8_MIN;
	volatile uint64_t x492 = UINT64_MAX;
	uint64_t t96 = 1768340784708LLU;

	t96 = (x489^(x490^(x491*x492)));

	if (t96 != 855LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x493 = 3;
	int8_t x495 = -15;
	static uint32_t x496 = 41931U;
	volatile uint32_t t97 = 9578557U;

	t97 = (x493^(x494^(x495*x496)));

	if (t97 != 4294338535U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x497 = INT32_MAX;
	int64_t x498 = INT64_MIN;
	int64_t x499 = 244782053LL;
	int16_t x500 = INT16_MIN;
	static int64_t t98 = 224120777LL;

	t98 = (x497^(x498^(x499*x500)));

	if (t98 != 9223364014022754303LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x505 = 22685U;
	int32_t x506 = -1;
	uint16_t x507 = 1U;
	uint8_t x508 = 3U;
	volatile int32_t t99 = 4;

	t99 = (x505^(x506^(x507*x508)));

	if (t99 != -22687) { NG(); } else { ; }
	
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

