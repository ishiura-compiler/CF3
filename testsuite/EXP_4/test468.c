#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x9 = 2984320U;
volatile uint16_t x11 = UINT16_MAX;
int16_t x13 = -1;
int32_t x16 = INT32_MAX;
static int32_t t2 = -469872;
static uint16_t x19 = 1U;
int16_t x42 = INT16_MAX;
volatile int8_t x47 = -1;
volatile uint64_t t6 = 368727405154LLU;
int8_t x53 = INT8_MIN;
int8_t x56 = INT8_MIN;
int16_t x61 = INT16_MAX;
static volatile int32_t t10 = 1639542;
int64_t x69 = INT64_MAX;
uint64_t x72 = UINT64_MAX;
static uint32_t x73 = 32284U;
static int8_t x80 = -1;
uint16_t x89 = 2700U;
volatile int64_t x92 = INT64_MIN;
int8_t x105 = 14;
uint8_t x112 = 6U;
static uint16_t x113 = 822U;
volatile int32_t t20 = -839100;
int64_t x117 = INT64_MIN;
uint8_t x119 = 50U;
int16_t x120 = -6;
int64_t x121 = INT64_MIN;
int16_t x122 = INT16_MIN;
volatile int64_t t22 = INT64_MIN;
static int64_t x125 = 388686222783LL;
volatile int16_t x128 = 295;
static int16_t x140 = 0;
int64_t x149 = INT64_MIN;
int64_t x151 = 11500093987LL;
static int32_t x157 = 1;
int8_t x159 = -1;
volatile int32_t t28 = -6904;
int16_t x162 = -2176;
int32_t t30 = -455911164;
static uint32_t x174 = UINT32_MAX;
volatile uint16_t x177 = UINT16_MAX;
int32_t t32 = 22;
int64_t t34 = -28244409LL;
int16_t x200 = 12;
int32_t t36 = 26;
int8_t x210 = INT8_MIN;
volatile int16_t x228 = INT16_MAX;
static int32_t t39 = -28680406;
int16_t x251 = 630;
volatile int32_t t42 = -11888;
int16_t x269 = 994;
static volatile uint8_t x273 = 7U;
int16_t x275 = 7821;
int16_t x276 = -111;
int8_t x280 = -1;
static int8_t x284 = INT8_MIN;
volatile int32_t t48 = 587;
static uint16_t x289 = 2U;
int16_t x293 = INT16_MIN;
int16_t x295 = INT16_MIN;
uint16_t x299 = UINT16_MAX;
uint16_t x303 = 51U;
uint8_t x305 = 6U;
uint32_t x308 = 552908363U;
static volatile int32_t t55 = -3509205;
int8_t x328 = 0;
volatile uint32_t x329 = UINT32_MAX;
static uint32_t x331 = UINT32_MAX;
volatile uint16_t x332 = 7U;
uint16_t x335 = 3U;
volatile int64_t x340 = -7652437915596LL;
int32_t t60 = -2407;
int64_t x355 = INT64_MAX;
int32_t x358 = 955324;
volatile int32_t x369 = INT32_MIN;
uint16_t x379 = 6350U;
int16_t x381 = -4711;
volatile int32_t t70 = -1;
int64_t t72 = INT64_MAX;
int64_t x406 = INT64_MIN;
int32_t x409 = -147;
static int8_t x418 = -1;
int64_t x428 = -1LL;
uint16_t x436 = 109U;
uint16_t x438 = UINT16_MAX;
uint8_t x439 = 18U;
static int32_t x452 = INT32_MAX;
uint64_t x453 = UINT64_MAX;
static int64_t x456 = 17LL;
uint16_t x457 = UINT16_MAX;
volatile uint16_t x460 = 6922U;
int32_t x461 = INT32_MIN;
int16_t x472 = INT16_MIN;
int32_t t86 = 711;
uint8_t x473 = 41U;
int32_t x474 = INT32_MIN;
int16_t x475 = INT16_MIN;
int32_t x477 = INT32_MIN;
int16_t x491 = INT16_MAX;
int8_t x492 = INT8_MIN;
int32_t x496 = INT32_MIN;
static int32_t t90 = -41;
static int16_t x507 = INT16_MIN;
int32_t t91 = 0;
static uint64_t x510 = 16654144604986LLU;
int8_t x511 = 0;
uint16_t x516 = 94U;
static int16_t x525 = INT16_MIN;
volatile int32_t t96 = 213;
uint64_t x538 = 181632021LLU;


void f0(void) {
	int16_t x1 = -1;
	int32_t x2 = -230611899;
	uint32_t x3 = 25928975U;
	volatile int8_t x4 = 4;
	int32_t t0 = 863;

	t0 = (x1^(x2<=(x3*x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x10 = 1;
	int8_t x12 = INT8_MAX;
	static volatile uint32_t t1 = 1U;

	t1 = (x9^(x10<=(x11*x12)));

	if (t1 != 2984321U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = INT32_MIN;
	int32_t x15 = -1;

	t2 = (x13^(x14<=(x15*x16)));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 12U;
	volatile int64_t x18 = INT64_MIN;
	uint32_t x20 = 40500916U;
	static volatile uint32_t t3 = 62864U;

	t3 = (x17^(x18<=(x19*x20)));

	if (t3 != 13U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	static int8_t x39 = INT8_MAX;
	volatile int8_t x40 = INT8_MIN;
	static volatile int32_t t4 = 5;

	t4 = (x37^(x38<=(x39*x40)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MIN;
	volatile uint64_t x43 = UINT64_MAX;
	static int16_t x44 = -1;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x41^(x42<=(x43*x44)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 5771LLU;
	int8_t x46 = 1;
	static uint64_t x48 = 0LLU;

	t6 = (x45^(x46<=(x47*x48)));

	if (t6 != 5771LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x49 = 73498121U;
	int32_t x50 = INT32_MAX;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = 320;
	uint32_t t7 = 361127U;

	t7 = (x49^(x50<=(x51*x52)));

	if (t7 != 73498120U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x54 = UINT32_MAX;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t8 = -19311;

	t8 = (x53^(x54<=(x55*x56)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = -3;
	int32_t x58 = -1;
	uint8_t x59 = 9U;
	volatile int64_t x60 = 17043943409LL;
	int32_t t9 = 4671;

	t9 = (x57^(x58<=(x59*x60)));

	if (t9 != -4) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 1U;
	static uint64_t x64 = 43827461993966044LLU;

	t10 = (x61^(x62<=(x63*x64)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = -1LL;
	volatile int32_t x66 = 1;
	uint32_t x67 = UINT32_MAX;
	uint8_t x68 = 0U;
	volatile int64_t t11 = -15383330LL;

	t11 = (x65^(x66<=(x67*x68)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x70 = INT8_MAX;
	uint16_t x71 = 30U;
	static volatile int64_t t12 = -3444984085492984080LL;

	t12 = (x69^(x70<=(x71*x72)));

	if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x74 = INT8_MIN;
	static uint64_t x75 = 66287193718388127LLU;
	volatile int8_t x76 = INT8_MIN;
	static uint32_t t13 = 4971U;

	t13 = (x73^(x74<=(x75*x76)));

	if (t13 != 32284U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MIN;
	static int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MIN;
	volatile int32_t t14 = 805;

	t14 = (x77^(x78<=(x79*x80)));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = UINT64_MAX;
	int32_t x82 = -38;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MAX;
	uint64_t t15 = UINT64_MAX;

	t15 = (x81^(x82<=(x83*x84)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x90 = UINT64_MAX;
	static volatile uint64_t x91 = 694122520LLU;
	static volatile int32_t t16 = -2905514;

	t16 = (x89^(x90<=(x91*x92)));

	if (t16 != 2700) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x93 = -12799148;
	int64_t x94 = 1486341LL;
	uint64_t x95 = 7688570799097425162LLU;
	volatile int8_t x96 = 0;
	static int32_t t17 = -4;

	t17 = (x93^(x94<=(x95*x96)));

	if (t17 != -12799148) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x106 = INT8_MAX;
	static int16_t x107 = -1;
	int16_t x108 = INT16_MAX;
	int32_t t18 = 33081576;

	t18 = (x105^(x106<=(x107*x108)));

	if (t18 != 14) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = -1;
	volatile uint32_t x111 = 119U;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x109^(x110<=(x111*x112)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x114 = UINT16_MAX;
	static int64_t x115 = INT64_MIN;
	int8_t x116 = 1;

	t20 = (x113^(x114<=(x115*x116)));

	if (t20 != 822) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x118 = INT8_MIN;
	static volatile int64_t t21 = INT64_MIN;

	t21 = (x117^(x118<=(x119*x120)));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x123 = 1293351459LLU;
	volatile int8_t x124 = 1;

	t22 = (x121^(x122<=(x123*x124)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x126 = INT64_MAX;
	volatile uint32_t x127 = 29716U;
	int64_t t23 = -82046231LL;

	t23 = (x125^(x126<=(x127*x128)));

	if (t23 != 388686222783LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MIN;
	static uint64_t x130 = 4182LLU;
	volatile uint8_t x131 = 7U;
	static int8_t x132 = -1;
	int32_t t24 = 44876090;

	t24 = (x129^(x130<=(x131*x132)));

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x137 = 103U;
	static uint64_t x138 = UINT64_MAX;
	uint64_t x139 = 7800432097852LLU;
	volatile int32_t t25 = -202443;

	t25 = (x137^(x138<=(x139*x140)));

	if (t25 != 103) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	int64_t x143 = 1LL;
	volatile int16_t x144 = -1;
	volatile int32_t t26 = 54611;

	t26 = (x141^(x142<=(x143*x144)));

	if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x150 = 1;
	static volatile int16_t x152 = -149;
	static int64_t t27 = INT64_MIN;

	t27 = (x149^(x150<=(x151*x152)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x158 = 0;
	uint32_t x160 = 1433084U;

	t28 = (x157^(x158<=(x159*x160)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x161 = INT32_MIN;
	volatile uint8_t x163 = 0U;
	static uint32_t x164 = 411091800U;
	volatile int32_t t29 = INT32_MIN;

	t29 = (x161^(x162<=(x163*x164)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x169 = -1;
	uint32_t x170 = 21U;
	uint16_t x171 = 20U;
	volatile int16_t x172 = 0;

	t30 = (x169^(x170<=(x171*x172)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x173 = UINT32_MAX;
	int16_t x175 = 36;
	uint32_t x176 = 193883545U;
	uint32_t t31 = UINT32_MAX;

	t31 = (x173^(x174<=(x175*x176)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x178 = -3750596768LL;
	int16_t x179 = 25;
	static int16_t x180 = INT16_MAX;

	t32 = (x177^(x178<=(x179*x180)));

	if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x185 = 1U;
	static int32_t x186 = -1;
	int16_t x187 = -1;
	static int64_t x188 = -1LL;
	static volatile uint32_t t33 = 12U;

	t33 = (x185^(x186<=(x187*x188)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x189 = INT64_MIN;
	static uint16_t x190 = 0U;
	uint16_t x191 = 3U;
	volatile uint16_t x192 = 1U;

	t34 = (x189^(x190<=(x191*x192)));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x193 = INT64_MAX;
	uint32_t x194 = 21U;
	int8_t x195 = 1;
	int16_t x196 = INT16_MAX;
	volatile int64_t t35 = 3845LL;

	t35 = (x193^(x194<=(x195*x196)));

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = 0;
	int8_t x198 = INT8_MAX;
	volatile int8_t x199 = -1;

	t36 = (x197^(x198<=(x199*x200)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int64_t x211 = 3688270446438LL;
	static int16_t x212 = 26;
	int32_t t37 = -52227;

	t37 = (x209^(x210<=(x211*x212)));

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = INT64_MAX;
	static int8_t x214 = -23;
	volatile int8_t x215 = 0;
	static int32_t x216 = -1;
	int64_t t38 = 71161080160747LL;

	t38 = (x213^(x214<=(x215*x216)));

	if (t38 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x225 = 14985U;
	int8_t x226 = INT8_MIN;
	uint32_t x227 = UINT32_MAX;

	t39 = (x225^(x226<=(x227*x228)));

	if (t39 != 14985) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x229 = 4042599U;
	static int64_t x230 = INT64_MIN;
	volatile int16_t x231 = -120;
	int8_t x232 = -1;
	static uint32_t t40 = 150865519U;

	t40 = (x229^(x230<=(x231*x232)));

	if (t40 != 4042598U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x249 = INT32_MIN;
	int16_t x250 = -1;
	uint8_t x252 = 26U;
	int32_t t41 = 0;

	t41 = (x249^(x250<=(x251*x252)));

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x257 = INT16_MIN;
	static uint32_t x258 = 340617U;
	uint16_t x259 = 2185U;
	uint16_t x260 = 52U;

	t42 = (x257^(x258<=(x259*x260)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x265 = INT32_MAX;
	volatile int32_t x266 = INT32_MIN;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = 24435LLU;
	int32_t t43 = INT32_MAX;

	t43 = (x265^(x266<=(x267*x268)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x270 = 59;
	int64_t x271 = -21017LL;
	int8_t x272 = 47;
	static volatile int32_t t44 = 102670;

	t44 = (x269^(x270<=(x271*x272)));

	if (t44 != 994) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x274 = 24982495U;
	volatile int32_t t45 = -58086078;

	t45 = (x273^(x274<=(x275*x276)));

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = 1;
	int8_t x279 = INT8_MIN;
	volatile int32_t t46 = 0;

	t46 = (x277^(x278<=(x279*x280)));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x281 = INT32_MIN;
	uint8_t x282 = 7U;
	static int64_t x283 = -1LL;
	volatile int32_t t47 = -741472045;

	t47 = (x281^(x282<=(x283*x284)));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	static volatile int32_t x288 = 1259604;

	t48 = (x285^(x286<=(x287*x288)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x290 = UINT32_MAX;
	static int64_t x291 = INT64_MIN;
	uint64_t x292 = 6640436809199LLU;
	volatile int32_t t49 = 2048537;

	t49 = (x289^(x290<=(x291*x292)));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x294 = 9963823161312661LLU;
	uint16_t x296 = UINT16_MAX;
	int32_t t50 = 1;

	t50 = (x293^(x294<=(x295*x296)));

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x297 = 5U;
	int16_t x298 = INT16_MIN;
	volatile uint32_t x300 = 7724U;
	int32_t t51 = 188129680;

	t51 = (x297^(x298<=(x299*x300)));

	if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = -23;
	int32_t x304 = 28322164;
	int32_t t52 = 63;

	t52 = (x301^(x302<=(x303*x304)));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x306 = INT16_MAX;
	volatile uint64_t x307 = 24701LLU;
	volatile int32_t t53 = 39341;

	t53 = (x305^(x306<=(x307*x308)));

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x309 = 42747840;
	static uint8_t x310 = 23U;
	volatile int64_t x311 = -1LL;
	uint32_t x312 = UINT32_MAX;
	int32_t t54 = 0;

	t54 = (x309^(x310<=(x311*x312)));

	if (t54 != 42747840) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x313 = -727;
	int16_t x314 = INT16_MIN;
	static uint64_t x315 = 176LLU;
	volatile int64_t x316 = INT64_MIN;

	t55 = (x313^(x314<=(x315*x316)));

	if (t55 != -727) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x321 = 27U;
	static uint16_t x322 = UINT16_MAX;
	volatile uint64_t x323 = 2255206018521597271LLU;
	int64_t x324 = INT64_MIN;
	int32_t t56 = 56;

	t56 = (x321^(x322<=(x323*x324)));

	if (t56 != 26) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x325 = INT8_MAX;
	static int32_t x326 = -1;
	int64_t x327 = -120043LL;
	int32_t t57 = 1830;

	t57 = (x325^(x326<=(x327*x328)));

	if (t57 != 126) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x330 = INT8_MAX;
	uint32_t t58 = 9726834U;

	t58 = (x329^(x330<=(x331*x332)));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x333 = -1;
	int8_t x334 = INT8_MAX;
	uint8_t x336 = 2U;
	int32_t t59 = -206755059;

	t59 = (x333^(x334<=(x335*x336)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x337 = 1491U;
	int32_t x338 = INT32_MIN;
	volatile uint16_t x339 = UINT16_MAX;

	t60 = (x337^(x338<=(x339*x340)));

	if (t60 != 1491) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x342 = 55189717432341LLU;
	volatile uint64_t x343 = 33351879718202LLU;
	volatile uint32_t x344 = 454U;
	volatile int32_t t61 = -170417207;

	t61 = (x341^(x342<=(x343*x344)));

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MAX;
	int8_t x347 = 3;
	volatile uint8_t x348 = 7U;
	static int32_t t62 = -11019449;

	t62 = (x345^(x346<=(x347*x348)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x349 = 119U;
	uint8_t x350 = UINT8_MAX;
	uint64_t x351 = 27891479LLU;
	int64_t x352 = INT64_MIN;
	int32_t t63 = -209;

	t63 = (x349^(x350<=(x351*x352)));

	if (t63 != 118) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x353 = INT8_MAX;
	int32_t x354 = INT32_MIN;
	int8_t x356 = -1;
	int32_t t64 = 24;

	t64 = (x353^(x354<=(x355*x356)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x357 = INT8_MAX;
	int32_t x359 = -16447966;
	int64_t x360 = -1LL;
	volatile int32_t t65 = -1;

	t65 = (x357^(x358<=(x359*x360)));

	if (t65 != 126) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x361 = UINT32_MAX;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	uint64_t x364 = UINT64_MAX;
	uint32_t t66 = UINT32_MAX;

	t66 = (x361^(x362<=(x363*x364)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x370 = INT32_MIN;
	static volatile int32_t x371 = -11795;
	uint16_t x372 = 61U;
	int32_t t67 = 7592;

	t67 = (x369^(x370<=(x371*x372)));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x373 = -1LL;
	uint16_t x374 = 1U;
	uint8_t x375 = UINT8_MAX;
	static volatile int16_t x376 = -1;
	int64_t t68 = 1919922960704950LL;

	t68 = (x373^(x374<=(x375*x376)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = -850;
	int64_t x378 = -1LL;
	static uint64_t x380 = UINT64_MAX;
	int32_t t69 = -5;

	t69 = (x377^(x378<=(x379*x380)));

	if (t69 != -850) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x382 = INT16_MIN;
	uint32_t x383 = 30867U;
	uint32_t x384 = 42430U;

	t70 = (x381^(x382<=(x383*x384)));

	if (t70 != -4711) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 0U;
	static int16_t x392 = INT16_MIN;
	int64_t t71 = -12LL;

	t71 = (x389^(x390<=(x391*x392)));

	if (t71 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x393 = INT64_MAX;
	static int32_t x394 = -138;
	static uint32_t x395 = UINT32_MAX;
	int16_t x396 = -1;

	t72 = (x393^(x394<=(x395*x396)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x397 = 118U;
	int64_t x398 = -1LL;
	int64_t x399 = 355065LL;
	static volatile int16_t x400 = -1;
	volatile int32_t t73 = 1;

	t73 = (x397^(x398<=(x399*x400)));

	if (t73 != 118) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x405 = INT64_MIN;
	int16_t x407 = 0;
	volatile int32_t x408 = INT32_MIN;
	volatile int64_t t74 = -66LL;

	t74 = (x405^(x406<=(x407*x408)));

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x410 = INT16_MIN;
	int64_t x411 = -1LL;
	uint8_t x412 = 44U;
	static int32_t t75 = -12568;

	t75 = (x409^(x410<=(x411*x412)));

	if (t75 != -148) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x413 = INT16_MIN;
	int64_t x414 = INT64_MIN;
	volatile int8_t x415 = INT8_MIN;
	static int64_t x416 = 4427211450392297LL;
	volatile int32_t t76 = 1;

	t76 = (x413^(x414<=(x415*x416)));

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x417 = -1;
	volatile int8_t x419 = INT8_MIN;
	uint16_t x420 = 1972U;
	volatile int32_t t77 = 289394361;

	t77 = (x417^(x418<=(x419*x420)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x425 = INT32_MIN;
	volatile int16_t x426 = -375;
	uint8_t x427 = 2U;
	static int32_t t78 = 0;

	t78 = (x425^(x426<=(x427*x428)));

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x429 = 3U;
	int8_t x430 = INT8_MIN;
	volatile uint64_t x431 = UINT64_MAX;
	int64_t x432 = INT64_MIN;
	static volatile int32_t t79 = 3;

	t79 = (x429^(x430<=(x431*x432)));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x433 = 85U;
	static int16_t x434 = INT16_MIN;
	int8_t x435 = -29;
	int32_t t80 = 114;

	t80 = (x433^(x434<=(x435*x436)));

	if (t80 != 84) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x437 = INT16_MIN;
	static uint16_t x440 = UINT16_MAX;
	static int32_t t81 = 10;

	t81 = (x437^(x438<=(x439*x440)));

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x449 = 0U;
	volatile int16_t x450 = 92;
	int16_t x451 = -1;
	volatile int32_t t82 = -1;

	t82 = (x449^(x450<=(x451*x452)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x454 = 1784;
	volatile int8_t x455 = -1;
	uint64_t t83 = UINT64_MAX;

	t83 = (x453^(x454<=(x455*x456)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x458 = INT64_MIN;
	uint32_t x459 = 3674991U;
	volatile int32_t t84 = -41594;

	t84 = (x457^(x458<=(x459*x460)));

	if (t84 != 65534) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x462 = -13;
	int64_t x463 = -1LL;
	volatile uint16_t x464 = 52U;
	static volatile int32_t t85 = INT32_MIN;

	t85 = (x461^(x462<=(x463*x464)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x469 = INT16_MIN;
	static uint32_t x470 = UINT32_MAX;
	static uint16_t x471 = UINT16_MAX;

	t86 = (x469^(x470<=(x471*x472)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x476 = 0U;
	static volatile int32_t t87 = 32;

	t87 = (x473^(x474<=(x475*x476)));

	if (t87 != 41) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x478 = INT32_MAX;
	int64_t x479 = -1LL;
	uint16_t x480 = UINT16_MAX;
	int32_t t88 = INT32_MIN;

	t88 = (x477^(x478<=(x479*x480)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x489 = 0;
	uint32_t x490 = 3U;
	volatile int32_t t89 = 5604;

	t89 = (x489^(x490<=(x491*x492)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x493 = INT16_MIN;
	int8_t x494 = -1;
	uint64_t x495 = UINT64_MAX;

	t90 = (x493^(x494<=(x495*x496)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x505 = -122893;
	int8_t x506 = INT8_MIN;
	static volatile int64_t x508 = -2292435787528LL;

	t91 = (x505^(x506<=(x507*x508)));

	if (t91 != -122894) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x509 = 10LL;
	volatile uint8_t x512 = 42U;
	int64_t t92 = -1102517885LL;

	t92 = (x509^(x510<=(x511*x512)));

	if (t92 != 10LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x513 = -31834514LL;
	int8_t x514 = -13;
	uint16_t x515 = 26197U;
	volatile int64_t t93 = -540LL;

	t93 = (x513^(x514<=(x515*x516)));

	if (t93 != -31834513LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x517 = -27;
	static int64_t x518 = 10569737664401087LL;
	int8_t x519 = 16;
	int16_t x520 = 4;
	static volatile int32_t t94 = 0;

	t94 = (x517^(x518<=(x519*x520)));

	if (t94 != -27) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x526 = 898163945796646LL;
	int64_t x527 = INT64_MAX;
	static uint64_t x528 = UINT64_MAX;
	volatile int32_t t95 = 503695359;

	t95 = (x525^(x526<=(x527*x528)));

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x529 = INT16_MAX;
	static volatile uint64_t x530 = 21010306057630603LLU;
	volatile uint8_t x531 = 41U;
	volatile int8_t x532 = -1;

	t96 = (x529^(x530<=(x531*x532)));

	if (t96 != 32766) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = -1;
	volatile uint64_t x534 = 1LLU;
	static int8_t x535 = INT8_MIN;
	volatile int16_t x536 = -1;
	int32_t t97 = -2057821;

	t97 = (x533^(x534<=(x535*x536)));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x537 = 2876536240LLU;
	int8_t x539 = -1;
	int16_t x540 = -1;
	volatile uint64_t t98 = 2LLU;

	t98 = (x537^(x538<=(x539*x540)));

	if (t98 != 2876536240LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x541 = -16777561177611LL;
	static uint64_t x542 = 10390664LLU;
	int32_t x543 = -116432;
	int16_t x544 = -1;
	volatile int64_t t99 = -17919762007067LL;

	t99 = (x541^(x542<=(x543*x544)));

	if (t99 != -16777561177611LL) { NG(); } else { ; }
	
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

