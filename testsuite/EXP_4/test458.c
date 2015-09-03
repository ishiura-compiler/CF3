#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 3453032197LLU;
volatile uint64_t x3 = 1937296503654LLU;
uint64_t t0 = 3845829691583806129LLU;
int32_t t1 = 1;
uint8_t x18 = UINT8_MAX;
volatile uint32_t t3 = 1949547267U;
volatile int32_t x21 = INT32_MIN;
static volatile int32_t t4 = INT32_MIN;
int16_t x26 = -1;
volatile int8_t x27 = 24;
int16_t x29 = INT16_MIN;
int32_t x32 = -1399;
uint16_t x40 = 27U;
uint64_t x44 = UINT64_MAX;
uint64_t x45 = 1980004144404LLU;
volatile int32_t t10 = 12542;
int32_t x53 = INT32_MIN;
int32_t t11 = 0;
int16_t x60 = INT16_MIN;
uint64_t x63 = UINT64_MAX;
int64_t x74 = INT64_MIN;
int16_t x89 = 56;
uint32_t x94 = 21174U;
int64_t t17 = -8324874LL;
int64_t x97 = INT64_MAX;
static uint8_t x111 = UINT8_MAX;
uint64_t x117 = UINT64_MAX;
int8_t x118 = -1;
volatile int32_t t24 = 14665;
volatile int32_t x140 = -1;
volatile int64_t x141 = INT64_MIN;
int16_t x147 = 1;
int8_t x153 = INT8_MAX;
int32_t t30 = -948431;
int16_t x160 = INT16_MIN;
uint64_t x168 = UINT64_MAX;
volatile int32_t t33 = -91114;
int8_t x183 = INT8_MAX;
volatile uint8_t x198 = UINT8_MAX;
int8_t x227 = INT8_MIN;
int8_t x233 = INT8_MIN;
int8_t x237 = INT8_MAX;
static int64_t x240 = 339813935578968LL;
uint16_t x244 = UINT16_MAX;
uint8_t x249 = 5U;
volatile uint16_t x253 = UINT16_MAX;
static int64_t x264 = -25677920LL;
static int16_t x267 = INT16_MAX;
volatile int32_t t48 = -48343096;
int64_t x269 = -1LL;
int16_t x273 = INT16_MIN;
int16_t x280 = 2;
static volatile int32_t t51 = 314608;
volatile int8_t x286 = INT8_MAX;
int8_t x296 = 1;
int16_t x298 = INT16_MAX;
static uint64_t x315 = 80712566032155248LLU;
int64_t x325 = 781LL;
int8_t x330 = -1;
static volatile int64_t x346 = 7121958303037LL;
uint32_t x351 = 10U;
int16_t x360 = INT16_MIN;
volatile uint16_t x366 = UINT16_MAX;
uint16_t x371 = 490U;
int32_t x372 = 6;
volatile int32_t t67 = 1;
int16_t x376 = INT16_MIN;
volatile int32_t t68 = -48626;
int64_t x377 = INT64_MIN;
uint16_t x380 = UINT16_MAX;
uint32_t x381 = 304484261U;
static int32_t x390 = INT32_MIN;
static uint16_t x393 = 119U;
int8_t x394 = INT8_MIN;
uint64_t x409 = 650LLU;
int64_t x415 = -1LL;
static int16_t x416 = -54;
volatile int32_t x418 = -1;
static int16_t x419 = INT16_MAX;
volatile int32_t x421 = INT32_MIN;
static volatile int16_t x422 = INT16_MIN;
static uint8_t x428 = 71U;
volatile int16_t x431 = INT16_MIN;
volatile int32_t t80 = 122693;
int32_t x446 = -5670;
int8_t x449 = INT8_MIN;
int32_t t82 = -57764;
uint8_t x454 = UINT8_MAX;
uint16_t x456 = 3U;
int16_t x467 = -1;
uint64_t x473 = 194669LLU;
volatile int16_t x474 = INT16_MAX;
uint8_t x476 = 72U;
uint64_t t87 = 5853918LLU;
uint8_t x486 = 10U;
int16_t x487 = -3;
static int8_t x498 = -1;
uint8_t x499 = UINT8_MAX;
int32_t t92 = 464;
volatile int32_t t95 = -48497;
static int16_t x514 = INT16_MAX;
volatile int64_t t97 = -5111323254957LL;
int32_t x523 = -266549;
int8_t x532 = INT8_MIN;


void f0(void) {
	volatile int64_t x2 = -1LL;
	int32_t x4 = INT32_MIN;

	t0 = (x1*(x2<=(x3*x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -13235;
	volatile int32_t x10 = -3376;
	int16_t x11 = INT16_MIN;
	int16_t x12 = -1;

	t1 = (x9*(x10<=(x11*x12)));

	if (t1 != -13235) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	static int32_t x15 = 604627523;
	uint32_t x16 = 13U;
	static volatile uint32_t t2 = UINT32_MAX;

	t2 = (x13*(x14<=(x15*x16)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 3U;
	int8_t x19 = 7;
	static int8_t x20 = 15;

	t3 = (x17*(x18<=(x19*x20)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x22 = 1U;
	int8_t x23 = -1;
	int64_t x24 = -1LL;

	t4 = (x21*(x22<=(x23*x24)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = 27313LLU;
	uint64_t x28 = UINT64_MAX;
	uint64_t t5 = 1354447447331488LLU;

	t5 = (x25*(x26<=(x27*x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x30 = INT16_MIN;
	volatile uint16_t x31 = 97U;
	volatile int32_t t6 = 29590;

	t6 = (x29*(x30<=(x31*x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = -1;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = INT8_MIN;
	int32_t t7 = -10535;

	t7 = (x37*(x38<=(x39*x40)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MIN;
	volatile int32_t t8 = -28;

	t8 = (x41*(x42<=(x43*x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x46 = INT8_MAX;
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MIN;
	uint64_t t9 = 1054577474536828LLU;

	t9 = (x45*(x46<=(x47*x48)));

	if (t9 != 1980004144404LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	static int16_t x50 = INT16_MIN;
	static int32_t x51 = -17550568;
	static int8_t x52 = 6;

	t10 = (x49*(x50<=(x51*x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = 21;
	int8_t x55 = INT8_MIN;
	static int8_t x56 = 3;

	t11 = (x53*(x54<=(x55*x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	volatile uint64_t x58 = 3LLU;
	uint16_t x59 = 432U;
	volatile int32_t t12 = 400086;

	t12 = (x57*(x58<=(x59*x60)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 1;
	int64_t x62 = -1LL;
	volatile int8_t x64 = INT8_MIN;
	int32_t t13 = -255;

	t13 = (x61*(x62<=(x63*x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x73 = INT8_MAX;
	volatile int32_t x75 = 334688;
	int8_t x76 = 19;
	volatile int32_t t14 = 10194595;

	t14 = (x73*(x74<=(x75*x76)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 1968775856U;
	uint64_t x86 = UINT64_MAX;
	int8_t x87 = 6;
	static int8_t x88 = INT8_MIN;
	uint32_t t15 = 247U;

	t15 = (x85*(x86<=(x87*x88)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x90 = INT32_MIN;
	volatile uint16_t x91 = 11U;
	int8_t x92 = -8;
	int32_t t16 = -1174;

	t16 = (x89*(x90<=(x91*x92)));

	if (t16 != 56) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -1LL;
	int16_t x95 = INT16_MIN;
	static volatile int32_t x96 = -1;

	t17 = (x93*(x94<=(x95*x96)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x98 = -1LL;
	static uint16_t x99 = 3U;
	int64_t x100 = -1LL;
	int64_t t18 = 4515665548395284LL;

	t18 = (x97*(x98<=(x99*x100)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x101 = INT64_MIN;
	static int8_t x102 = INT8_MIN;
	static uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 44U;
	int64_t t19 = INT64_MIN;

	t19 = (x101*(x102<=(x103*x104)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = UINT16_MAX;
	int16_t x106 = INT16_MAX;
	volatile uint8_t x107 = 106U;
	int16_t x108 = INT16_MAX;
	int32_t t20 = -36314;

	t20 = (x105*(x106<=(x107*x108)));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x109 = 6016;
	static int8_t x110 = -1;
	static int32_t x112 = 4475;
	int32_t t21 = 12782133;

	t21 = (x109*(x110<=(x111*x112)));

	if (t21 != 6016) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x119 = 1U;
	int32_t x120 = INT32_MIN;
	uint64_t t22 = 106611324219LLU;

	t22 = (x117*(x118<=(x119*x120)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = INT32_MIN;
	static volatile uint16_t x122 = 27863U;
	int16_t x123 = -1;
	int8_t x124 = -1;
	volatile int32_t t23 = -261804;

	t23 = (x121*(x122<=(x123*x124)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MAX;
	volatile uint16_t x126 = 15U;
	int8_t x127 = 38;
	int16_t x128 = 572;

	t24 = (x125*(x126<=(x127*x128)));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MAX;
	uint32_t x132 = 86U;
	volatile int32_t t25 = 486971;

	t25 = (x129*(x130<=(x131*x132)));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = 69;
	uint8_t x138 = 2U;
	int8_t x139 = -3;
	int32_t t26 = 648;

	t26 = (x137*(x138<=(x139*x140)));

	if (t26 != 69) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x142 = 1U;
	int16_t x143 = 861;
	int32_t x144 = -11979;
	int64_t t27 = 622531145535317542LL;

	t27 = (x141*(x142<=(x143*x144)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MIN;
	volatile uint64_t x148 = UINT64_MAX;
	static volatile int32_t t28 = 0;

	t28 = (x145*(x146<=(x147*x148)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MAX;
	volatile uint32_t x151 = 2134U;
	int8_t x152 = INT8_MIN;
	volatile int32_t t29 = -851;

	t29 = (x149*(x150<=(x151*x152)));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x154 = 59;
	uint8_t x155 = 6U;
	static volatile int64_t x156 = -1LL;

	t30 = (x153*(x154<=(x155*x156)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = -57079836;
	static uint8_t x158 = 25U;
	volatile int64_t x159 = -33535130674LL;
	volatile int32_t t31 = -333222;

	t31 = (x157*(x158<=(x159*x160)));

	if (t31 != -57079836) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = -1;
	volatile int8_t x162 = 6;
	uint64_t x163 = 29566586922LLU;
	uint16_t x164 = 1U;
	int32_t t32 = -636235646;

	t32 = (x161*(x162<=(x163*x164)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x165 = 55U;
	static int32_t x166 = 42;
	int64_t x167 = INT64_MIN;

	t33 = (x165*(x166<=(x167*x168)));

	if (t33 != 55) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x169 = -1LL;
	int32_t x170 = -1;
	int64_t x171 = 1657224LL;
	int32_t x172 = -1;
	volatile int64_t t34 = -5217879875LL;

	t34 = (x169*(x170<=(x171*x172)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x181 = INT8_MAX;
	int64_t x182 = 745436LL;
	int16_t x184 = -15;
	volatile int32_t t35 = 839403;

	t35 = (x181*(x182<=(x183*x184)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	int32_t x187 = -76;
	int64_t x188 = -1LL;
	int32_t t36 = 1466;

	t36 = (x185*(x186<=(x187*x188)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x199 = -1;
	int64_t x200 = -2722714272189406289LL;
	static uint64_t t37 = UINT64_MAX;

	t37 = (x197*(x198<=(x199*x200)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = 5;
	int8_t x203 = INT8_MIN;
	uint32_t x204 = UINT32_MAX;
	static volatile int32_t t38 = -2642;

	t38 = (x201*(x202<=(x203*x204)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x217 = INT16_MIN;
	uint8_t x218 = 111U;
	volatile int8_t x219 = INT8_MAX;
	volatile int32_t x220 = -1;
	volatile int32_t t39 = -1732064;

	t39 = (x217*(x218<=(x219*x220)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x225 = 78530720806715LLU;
	static int16_t x226 = -1;
	uint16_t x228 = 1U;
	static uint64_t t40 = 57618263LLU;

	t40 = (x225*(x226<=(x227*x228)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x234 = 1LL;
	int32_t x235 = 7421387;
	int16_t x236 = 1;
	int32_t t41 = 455215063;

	t41 = (x233*(x234<=(x235*x236)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x238 = -1LL;
	uint64_t x239 = 1237776582387476035LLU;
	static int32_t t42 = 76266;

	t42 = (x237*(x238<=(x239*x240)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = -1;
	volatile uint32_t x243 = 450851U;
	int32_t t43 = 21;

	t43 = (x241*(x242<=(x243*x244)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = INT16_MIN;
	uint8_t x246 = UINT8_MAX;
	static uint8_t x247 = UINT8_MAX;
	uint64_t x248 = UINT64_MAX;
	int32_t t44 = 862950945;

	t44 = (x245*(x246<=(x247*x248)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x250 = INT32_MIN;
	volatile int16_t x251 = 1;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t45 = 48535489;

	t45 = (x249*(x250<=(x251*x252)));

	if (t45 != 5) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x254 = 521708LLU;
	static int32_t x255 = 2533010;
	int64_t x256 = -1LL;
	volatile int32_t t46 = 14;

	t46 = (x253*(x254<=(x255*x256)));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = INT32_MIN;
	uint32_t x262 = 1022415U;
	static volatile int8_t x263 = INT8_MAX;
	int32_t t47 = -1212018;

	t47 = (x261*(x262<=(x263*x264)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x265 = INT32_MAX;
	volatile uint16_t x266 = 29U;
	int64_t x268 = -1LL;

	t48 = (x265*(x266<=(x267*x268)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x270 = INT64_MIN;
	uint64_t x271 = 86343LLU;
	uint64_t x272 = 9827465086042400LLU;
	int64_t t49 = -95LL;

	t49 = (x269*(x270<=(x271*x272)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x274 = -1;
	volatile uint8_t x275 = 19U;
	static uint16_t x276 = 6140U;
	volatile int32_t t50 = -414;

	t50 = (x273*(x274<=(x275*x276)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x277 = 3;
	int8_t x278 = INT8_MIN;
	uint64_t x279 = 3921148811209636LLU;

	t51 = (x277*(x278<=(x279*x280)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x285 = 20U;
	static int8_t x287 = INT8_MIN;
	static int16_t x288 = -5;
	int32_t t52 = 2613583;

	t52 = (x285*(x286<=(x287*x288)));

	if (t52 != 20) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int64_t x294 = INT64_MAX;
	static uint32_t x295 = UINT32_MAX;
	static volatile int32_t t53 = -987435785;

	t53 = (x293*(x294<=(x295*x296)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x297 = 224483057588998424LLU;
	volatile uint32_t x299 = UINT32_MAX;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t54 = 212240473302LLU;

	t54 = (x297*(x298<=(x299*x300)));

	if (t54 != 224483057588998424LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x305 = 2177591748902210LLU;
	uint32_t x306 = 14639429U;
	volatile int8_t x307 = -1;
	static int8_t x308 = INT8_MAX;
	uint64_t t55 = 8123979LLU;

	t55 = (x305*(x306<=(x307*x308)));

	if (t55 != 2177591748902210LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x309 = -19;
	static int32_t x310 = INT32_MAX;
	uint32_t x311 = 1050861942U;
	int32_t x312 = 3003416;
	volatile int32_t t56 = -27664;

	t56 = (x309*(x310<=(x311*x312)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	volatile int16_t x316 = INT16_MAX;
	volatile int32_t t57 = -3;

	t57 = (x313*(x314<=(x315*x316)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x317 = -1;
	int64_t x318 = INT64_MIN;
	int64_t x319 = -326660363945LL;
	int16_t x320 = 9;
	volatile int32_t t58 = -13402350;

	t58 = (x317*(x318<=(x319*x320)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x321 = INT64_MAX;
	static int64_t x322 = -1LL;
	uint64_t x323 = 225892520746LLU;
	int16_t x324 = 2;
	volatile int64_t t59 = 338930120890954935LL;

	t59 = (x321*(x322<=(x323*x324)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x326 = INT8_MIN;
	uint16_t x327 = 49U;
	uint32_t x328 = UINT32_MAX;
	int64_t t60 = -98992476LL;

	t60 = (x325*(x326<=(x327*x328)));

	if (t60 != 781LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x329 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	int64_t x332 = -1LL;
	int32_t t61 = INT32_MIN;

	t61 = (x329*(x330<=(x331*x332)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x341 = 3U;
	uint64_t x342 = UINT64_MAX;
	int32_t x343 = 0;
	int16_t x344 = INT16_MIN;
	volatile int32_t t62 = 1;

	t62 = (x341*(x342<=(x343*x344)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x345 = 21LLU;
	static int8_t x347 = INT8_MAX;
	int16_t x348 = -1;
	static volatile uint64_t t63 = 421846LLU;

	t63 = (x345*(x346<=(x347*x348)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x349 = 3434;
	uint16_t x350 = 103U;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t64 = -1566616;

	t64 = (x349*(x350<=(x351*x352)));

	if (t64 != 3434) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x357 = 0;
	uint16_t x358 = 758U;
	static int16_t x359 = INT16_MIN;
	volatile int32_t t65 = 143920;

	t65 = (x357*(x358<=(x359*x360)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x365 = 527;
	int16_t x367 = INT16_MIN;
	static int8_t x368 = -8;
	static int32_t t66 = -95;

	t66 = (x365*(x366<=(x367*x368)));

	if (t66 != 527) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x369 = -1;
	static int32_t x370 = 642845959;

	t67 = (x369*(x370<=(x371*x372)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x373 = 1393;
	int16_t x374 = -136;
	uint8_t x375 = UINT8_MAX;

	t68 = (x373*(x374<=(x375*x376)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x378 = 14177;
	int8_t x379 = INT8_MIN;
	volatile int64_t t69 = -391706LL;

	t69 = (x377*(x378<=(x379*x380)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x382 = 12U;
	uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = INT16_MIN;
	static volatile uint32_t t70 = 15981503U;

	t70 = (x381*(x382<=(x383*x384)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x389 = -4115718LL;
	int64_t x391 = -1LL;
	static volatile int64_t x392 = INT64_MAX;
	int64_t t71 = 3968LL;

	t71 = (x389*(x390<=(x391*x392)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x395 = INT16_MAX;
	volatile uint16_t x396 = 16354U;
	int32_t t72 = 179485365;

	t72 = (x393*(x394<=(x395*x396)));

	if (t72 != 119) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x410 = INT32_MIN;
	static volatile int64_t x411 = -205605281067935LL;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t73 = 162041548723666LLU;

	t73 = (x409*(x410<=(x411*x412)));

	if (t73 != 650LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x413 = 0U;
	int64_t x414 = -1LL;
	int32_t t74 = 414228282;

	t74 = (x413*(x414<=(x415*x416)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x417 = INT32_MIN;
	uint16_t x420 = 0U;
	volatile int32_t t75 = INT32_MIN;

	t75 = (x417*(x418<=(x419*x420)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x423 = 24U;
	uint32_t x424 = 175U;
	volatile int32_t t76 = -1764;

	t76 = (x421*(x422<=(x423*x424)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = -23;
	int8_t x426 = INT8_MIN;
	int64_t x427 = 20293055LL;
	volatile int32_t t77 = -398582765;

	t77 = (x425*(x426<=(x427*x428)));

	if (t77 != -23) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x429 = 28;
	int16_t x430 = INT16_MAX;
	int16_t x432 = -1;
	static int32_t t78 = -696150;

	t78 = (x429*(x430<=(x431*x432)));

	if (t78 != 28) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x437 = INT32_MIN;
	static uint32_t x438 = UINT32_MAX;
	static int8_t x439 = 3;
	int8_t x440 = INT8_MIN;
	static volatile int32_t t79 = 2939825;

	t79 = (x437*(x438<=(x439*x440)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x441 = 0U;
	int64_t x442 = -1LL;
	uint32_t x443 = 416376762U;
	static uint8_t x444 = 3U;

	t80 = (x441*(x442<=(x443*x444)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = INT64_MIN;
	volatile int64_t x447 = -497LL;
	static int16_t x448 = INT16_MIN;
	int64_t t81 = INT64_MIN;

	t81 = (x445*(x446<=(x447*x448)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x450 = -1;
	static uint64_t x451 = UINT64_MAX;
	static int64_t x452 = 1124871922LL;

	t82 = (x449*(x450<=(x451*x452)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x453 = -75723547;
	uint64_t x455 = 584093463801955615LLU;
	int32_t t83 = 71;

	t83 = (x453*(x454<=(x455*x456)));

	if (t83 != -75723547) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x457 = 2U;
	uint8_t x458 = 39U;
	volatile uint8_t x459 = 24U;
	volatile uint32_t x460 = 115U;
	volatile int32_t t84 = 3498328;

	t84 = (x457*(x458<=(x459*x460)));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x461 = -5801577;
	int8_t x462 = INT8_MIN;
	static volatile uint64_t x463 = UINT64_MAX;
	int8_t x464 = INT8_MIN;
	int32_t t85 = 22;

	t85 = (x461*(x462<=(x463*x464)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x465 = 7221;
	int64_t x466 = INT64_MIN;
	volatile uint8_t x468 = 38U;
	volatile int32_t t86 = 47;

	t86 = (x465*(x466<=(x467*x468)));

	if (t86 != 7221) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x475 = INT8_MAX;

	t87 = (x473*(x474<=(x475*x476)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x477 = UINT8_MAX;
	static int8_t x478 = 3;
	int32_t x479 = -1;
	int8_t x480 = INT8_MAX;
	static volatile int32_t t88 = -211236043;

	t88 = (x477*(x478<=(x479*x480)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x481 = 253U;
	int64_t x482 = INT64_MIN;
	int16_t x483 = 1;
	volatile uint8_t x484 = 1U;
	static volatile int32_t t89 = -875613712;

	t89 = (x481*(x482<=(x483*x484)));

	if (t89 != 253) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x485 = 56U;
	int8_t x488 = INT8_MIN;
	int32_t t90 = 2;

	t90 = (x485*(x486<=(x487*x488)));

	if (t90 != 56) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x489 = INT16_MIN;
	static uint8_t x490 = UINT8_MAX;
	int8_t x491 = -1;
	volatile int64_t x492 = -1LL;
	volatile int32_t t91 = -5257526;

	t91 = (x489*(x490<=(x491*x492)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x497 = -1;
	uint16_t x500 = 21683U;

	t92 = (x497*(x498<=(x499*x500)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x501 = INT32_MIN;
	uint8_t x502 = 63U;
	static int16_t x503 = -1;
	uint16_t x504 = 2615U;
	volatile int32_t t93 = -12758;

	t93 = (x501*(x502<=(x503*x504)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x505 = UINT16_MAX;
	int64_t x506 = -3LL;
	int64_t x507 = 11051205138474355LL;
	uint64_t x508 = UINT64_MAX;
	int32_t t94 = 1;

	t94 = (x505*(x506<=(x507*x508)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x509 = -1;
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = 2482433;
	int32_t x512 = -1;

	t95 = (x509*(x510<=(x511*x512)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x513 = 0U;
	int8_t x515 = 0;
	int64_t x516 = INT64_MAX;
	static volatile int32_t t96 = 17343;

	t96 = (x513*(x514<=(x515*x516)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x517 = -1LL;
	volatile uint64_t x518 = 3449596244911997388LLU;
	volatile int16_t x519 = -1;
	volatile int8_t x520 = -23;

	t97 = (x517*(x518<=(x519*x520)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x521 = 393148977384LL;
	int64_t x522 = -20515356253LL;
	int16_t x524 = -1;
	volatile int64_t t98 = -1LL;

	t98 = (x521*(x522<=(x523*x524)));

	if (t98 != 393148977384LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x529 = UINT8_MAX;
	uint8_t x530 = UINT8_MAX;
	static int8_t x531 = INT8_MIN;
	volatile int32_t t99 = -495346485;

	t99 = (x529*(x530<=(x531*x532)));

	if (t99 != 255) { NG(); } else { ; }
	
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

