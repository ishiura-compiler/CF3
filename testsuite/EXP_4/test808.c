#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
static int64_t x14 = -1176857405926LL;
volatile int32_t x28 = INT32_MIN;
static volatile int64_t t6 = -70577813369LL;
uint32_t x32 = 49584U;
volatile int64_t t7 = 276654150685LL;
static uint8_t x38 = 74U;
int64_t t11 = 17LL;
int32_t x49 = 6947291;
int64_t x53 = -44392LL;
static int16_t x56 = INT16_MIN;
int64_t x59 = -1LL;
uint64_t t14 = 799957188LLU;
int32_t x62 = INT32_MIN;
static int8_t x63 = INT8_MIN;
int16_t x64 = INT16_MIN;
int32_t x68 = -1;
int32_t x73 = -3564038;
static int64_t t18 = -947LL;
int8_t x81 = 13;
static uint32_t x82 = 320931U;
uint8_t x86 = 17U;
uint16_t x87 = 22U;
uint64_t x96 = UINT64_MAX;
int64_t x103 = -369832702LL;
static int32_t x108 = 193274255;
volatile int32_t t27 = 12275;
int64_t x114 = INT64_MIN;
int64_t t29 = INT64_MAX;
volatile uint32_t x122 = UINT32_MAX;
volatile uint16_t x128 = UINT16_MAX;
static uint64_t x133 = 1349675945206235371LLU;
volatile uint32_t t34 = 166U;
uint8_t x141 = 9U;
int8_t x148 = -1;
int16_t x154 = 10014;
uint16_t x156 = 5U;
volatile int32_t t38 = -1000783;
static int32_t x160 = INT32_MAX;
static uint64_t t39 = 230436987938901LLU;
int8_t x163 = -1;
static uint32_t t40 = 124111U;
static volatile uint64_t x167 = UINT64_MAX;
uint64_t x168 = 18106666022699LLU;
uint64_t t42 = 185305581631LLU;
int32_t x178 = -7599692;
volatile uint64_t x188 = UINT64_MAX;
int16_t x191 = INT16_MIN;
volatile int64_t t46 = -12891LL;
uint16_t x194 = 2U;
uint16_t x195 = 492U;
int8_t x198 = INT8_MIN;
uint16_t x207 = 0U;
volatile int64_t t49 = 3315119079080449841LL;
uint8_t x214 = 7U;
static int8_t x223 = -9;
static int64_t x240 = INT64_MIN;
uint32_t x242 = 60196U;
int8_t x244 = INT8_MIN;
static volatile uint32_t t58 = 113814991U;
int8_t x256 = 2;
volatile int16_t x258 = INT16_MAX;
int64_t x264 = 379642414LL;
int16_t x266 = INT16_MAX;
int8_t x269 = INT8_MAX;
uint16_t x270 = 5258U;
static int64_t x278 = -1LL;
uint32_t x282 = UINT32_MAX;
static int32_t x290 = INT32_MIN;
static int16_t x294 = -1;
volatile int32_t t70 = 165147;
int8_t x301 = -1;
uint64_t x307 = 359154LLU;
uint64_t t73 = 0LLU;
uint64_t x309 = 15416600145422498LLU;
int64_t x311 = -1LL;
static int32_t x312 = -189401;
volatile int8_t x314 = 1;
int64_t x317 = INT64_MAX;
int64_t x318 = INT64_MIN;
volatile uint64_t t76 = 875529683432LLU;
int64_t x323 = INT64_MIN;
volatile uint64_t t77 = 5LLU;
volatile int64_t t78 = -3114818LL;
int64_t t80 = 172243073979662366LL;
int64_t x339 = -1LL;
int64_t t81 = -462113313LL;
int32_t x343 = INT32_MIN;
volatile int32_t x345 = -1;
int16_t x353 = INT16_MAX;
uint8_t x368 = 4U;
static volatile int64_t x371 = INT64_MAX;
int32_t x372 = -392603123;
volatile int64_t t88 = -200497487396160LL;
int8_t x374 = INT8_MIN;
volatile uint16_t x376 = 114U;
volatile uint32_t x377 = 2080442U;
int64_t x388 = -1LL;
volatile int8_t x390 = 0;
int32_t x400 = INT32_MIN;
uint16_t x402 = UINT16_MAX;
static uint32_t x404 = 8774246U;
uint32_t t96 = 238923U;
volatile int64_t t97 = 2328784567708795360LL;
static volatile int8_t x410 = -1;
int64_t x416 = -1LL;


void f0(void) {
	int32_t x1 = -1;
	int16_t x2 = -1;
	static uint8_t x3 = 13U;
	static uint8_t x4 = 72U;
	int32_t t0 = -1;

	t0 = (x1-(x2&(x3%x4)));

	if (t0 != -14) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -4;
	volatile int32_t x7 = INT32_MAX;
	int32_t x8 = -1;
	int32_t t1 = 41228;

	t1 = (x5-(x6&(x7%x8)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int32_t x10 = 2;
	int16_t x11 = -1;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = 32306900LL;

	t2 = (x9-(x10&(x11%x12)));

	if (t2 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 2U;
	uint32_t x15 = UINT32_MAX;
	volatile int8_t x16 = -1;
	int64_t t3 = -42883LL;

	t3 = (x13-(x14&(x15%x16)));

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static int64_t x18 = INT64_MIN;
	static uint32_t x19 = 2U;
	uint16_t x20 = 22719U;
	int64_t t4 = INT64_MAX;

	t4 = (x17-(x18&(x19%x20)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static int64_t x22 = -309285LL;
	uint8_t x23 = UINT8_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile int64_t t5 = -7941151298105LL;

	t5 = (x21-(x22&(x23%x24)));

	if (t5 != 2147483428LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	int64_t x27 = 43888LL;

	t6 = (x25-(x26&(x27%x28)));

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -2383;
	int16_t x30 = INT16_MAX;
	int64_t x31 = 1206277LL;

	t7 = (x29-(x30&(x31%x32)));

	if (t7 != -18644LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	static uint64_t x34 = 296940319LLU;
	volatile int32_t x35 = -1;
	static int64_t x36 = 7LL;
	static volatile uint64_t t8 = 33784624116936913LLU;

	t8 = (x33-(x34&(x35%x36)));

	if (t8 != 18446744073412578529LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int32_t x39 = INT32_MIN;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = INT32_MIN;

	t9 = (x37-(x38&(x39%x40)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 7U;
	uint64_t x42 = UINT64_MAX;
	static int8_t x43 = INT8_MIN;
	volatile int64_t x44 = 404805888284336784LL;
	uint64_t t10 = 431LLU;

	t10 = (x41-(x42&(x43%x44)));

	if (t10 != 135LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int16_t x46 = INT16_MIN;
	volatile uint32_t x47 = 66675616U;
	int16_t x48 = INT16_MIN;

	t11 = (x45-(x46&(x47%x48)));

	if (t11 != -66650113LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = INT16_MIN;
	int32_t x51 = -1;
	uint8_t x52 = 23U;
	volatile int32_t t12 = 4460;

	t12 = (x49-(x50&(x51%x52)));

	if (t12 != 6980059) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x54 = 13U;
	uint32_t x55 = UINT32_MAX;
	volatile int64_t t13 = -5468669LL;

	t13 = (x53-(x54&(x55%x56)));

	if (t13 != -44405LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	volatile uint64_t x58 = 14935602LLU;
	static uint16_t x60 = 34U;

	t14 = (x57-(x58&(x59%x60)));

	if (t14 != 2132548045LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	volatile int32_t t15 = 0;

	t15 = (x61-(x62&(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int8_t x66 = INT8_MIN;
	int32_t x67 = -743949165;
	int64_t t16 = INT64_MAX;

	t16 = (x65-(x66&(x67%x68)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = 0;
	int32_t x70 = -1;
	static int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MAX;
	int64_t t17 = -117692042451LL;

	t17 = (x69-(x70&(x71%x72)));

	if (t17 != 32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x74 = -1;
	int64_t x75 = 946820LL;
	int8_t x76 = INT8_MIN;

	t18 = (x73-(x74&(x75%x76)));

	if (t18 != -3564042LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = -1;
	int32_t x79 = -4522;
	volatile int32_t x80 = -1;
	int32_t t19 = 320173;

	t19 = (x77-(x78&(x79%x80)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x83 = UINT32_MAX;
	uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 19968870LLU;

	t20 = (x81-(x82&(x83%x84)));

	if (t20 != 18446744073709230698LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int8_t x88 = 14;
	static int32_t t21 = 353887818;

	t21 = (x85-(x86&(x87%x88)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -2;
	int64_t x90 = INT64_MAX;
	int32_t x91 = 14;
	int32_t x92 = INT32_MIN;
	static int64_t t22 = -30029949LL;

	t22 = (x89-(x90&(x91%x92)));

	if (t22 != -16LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	static int32_t x94 = INT32_MAX;
	int8_t x95 = INT8_MAX;
	volatile uint64_t t23 = 19124646482975LLU;

	t23 = (x93-(x94&(x95%x96)));

	if (t23 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static int32_t x98 = INT32_MIN;
	uint32_t x99 = 25780988U;
	static uint8_t x100 = UINT8_MAX;
	volatile uint32_t t24 = 10412U;

	t24 = (x97-(x98&(x99%x100)));

	if (t24 != 2147483648U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	static int64_t x102 = 27685550267LL;
	int16_t x104 = INT16_MIN;
	volatile int64_t t25 = -447256346222LL;

	t25 = (x101-(x102&(x103%x104)));

	if (t25 != -27685537667LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 13;
	int64_t x106 = -30265484560LL;
	static volatile int8_t x107 = -4;
	int64_t t26 = 42251010127950667LL;

	t26 = (x105-(x106&(x107%x108)));

	if (t26 != 30265484573LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -2;
	static int16_t x110 = -1;
	int16_t x111 = -19;
	uint16_t x112 = UINT16_MAX;

	t27 = (x109-(x110&(x111%x112)));

	if (t27 != 17) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 3894851U;
	int32_t x115 = INT32_MAX;
	int16_t x116 = INT16_MIN;
	volatile int64_t t28 = -3LL;

	t28 = (x113-(x114&(x115%x116)));

	if (t28 != 3894851LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 16317652U;
	static volatile uint32_t x120 = 273749U;

	t29 = (x117-(x118&(x119%x120)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -1;
	uint8_t x123 = 62U;
	int16_t x124 = -1;
	uint32_t t30 = UINT32_MAX;

	t30 = (x121-(x122&(x123%x124)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 126U;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 992U;
	volatile uint32_t t31 = 9693903U;

	t31 = (x125-(x126&(x127%x128)));

	if (t31 != 4294966526U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	uint64_t x130 = 1575085611LLU;
	static int64_t x131 = -12987LL;
	int64_t x132 = -1LL;
	uint64_t t32 = 66902138754LLU;

	t32 = (x129-(x130&(x131%x132)));

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -38327597;
	int32_t x135 = INT32_MAX;
	volatile uint32_t x136 = 805U;
	uint64_t t33 = 317430796236093LLU;

	t33 = (x133-(x134&(x135%x136)));

	if (t33 != 1349675945206235225LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 2U;
	uint32_t x138 = 1U;
	uint8_t x139 = UINT8_MAX;
	static int32_t x140 = INT32_MIN;

	t34 = (x137-(x138&(x139%x140)));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = UINT64_MAX;
	static uint64_t t35 = 6LLU;

	t35 = (x141-(x142&(x143%x144)));

	if (t35 != 32777LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 2531096U;
	volatile int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	static int64_t t36 = -1915961LL;

	t36 = (x145-(x146&(x147%x148)));

	if (t36 != 2531096LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 0U;
	uint32_t x150 = 367098U;
	int16_t x151 = INT16_MAX;
	int32_t x152 = 1064;
	static volatile uint32_t t37 = 273723204U;

	t37 = (x149-(x150&(x151%x152)));

	if (t37 != 4294966966U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = 0;
	volatile int16_t x155 = 119;

	t38 = (x153-(x154&(x155%x156)));

	if (t38 != -4) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 2180854292680969LLU;
	uint32_t x158 = 77U;
	volatile uint8_t x159 = 3U;

	t39 = (x157-(x158&(x159%x160)));

	if (t39 != 2180854292680968LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 374U;
	volatile int8_t x162 = INT8_MIN;
	uint32_t x164 = UINT32_MAX;

	t40 = (x161-(x162&(x163%x164)));

	if (t40 != 374U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	volatile uint64_t t41 = 321032450817LLU;

	t41 = (x165-(x166&(x167%x168)));

	if (t41 != 18446727317271309824LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 105384126871910LL;
	static uint64_t x170 = 84415239765534LLU;
	int32_t x171 = -1;
	uint32_t x172 = UINT32_MAX;

	t42 = (x169-(x170&(x171%x172)));

	if (t42 != 105384126871910LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = 41;
	volatile int8_t x179 = -2;
	int32_t x180 = -1;
	static int32_t t43 = 126;

	t43 = (x177-(x178&(x179%x180)));

	if (t43 != 41) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = 98;
	uint32_t x182 = 5387U;
	static uint8_t x183 = UINT8_MAX;
	int16_t x184 = 115;
	uint32_t t44 = 6U;

	t44 = (x181-(x182&(x183%x184)));

	if (t44 != 89U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	uint16_t x186 = UINT16_MAX;
	uint8_t x187 = 1U;
	static volatile uint64_t t45 = 303026LLU;

	t45 = (x185-(x186&(x187%x188)));

	if (t45 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MIN;
	int64_t x192 = INT64_MAX;

	t46 = (x189-(x190&(x191%x192)));

	if (t46 != 6442450943LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x193 = 237621167853387LLU;
	static uint32_t x196 = UINT32_MAX;
	volatile uint64_t t47 = 35163903700890LLU;

	t47 = (x193-(x194&(x195%x196)));

	if (t47 != 237621167853387LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = 255798613335515LL;
	uint64_t x199 = 69627LLU;
	static uint16_t x200 = 429U;
	volatile uint64_t t48 = 252983LLU;

	t48 = (x197-(x198&(x199%x200)));

	if (t48 != 255798613335387LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = 0U;
	int8_t x206 = 55;
	int64_t x208 = INT64_MAX;

	t49 = (x205-(x206&(x207%x208)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = UINT32_MAX;
	static volatile int16_t x215 = -30;
	volatile int64_t x216 = 825808550777743LL;
	volatile int64_t t50 = -56LL;

	t50 = (x213-(x214&(x215%x216)));

	if (t50 != 4294967293LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	static uint8_t x219 = 127U;
	int16_t x220 = -7;
	volatile int32_t t51 = 1223;

	t51 = (x217-(x218&(x219%x220)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -1LL;
	int64_t x222 = INT64_MAX;
	static int8_t x224 = INT8_MIN;
	static volatile int64_t t52 = -113206LL;

	t52 = (x221-(x222&(x223%x224)));

	if (t52 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = 146596U;
	int32_t x226 = INT32_MIN;
	static uint64_t x227 = UINT64_MAX;
	uint8_t x228 = 52U;
	volatile uint64_t t53 = 472400LLU;

	t53 = (x225-(x226&(x227%x228)));

	if (t53 != 146596LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	static int8_t x230 = -1;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t54 = -1550LL;

	t54 = (x229-(x230&(x231%x232)));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = 740787LL;
	static volatile uint8_t x234 = 51U;
	volatile uint64_t x235 = 2149002796613LLU;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t55 = 1LLU;

	t55 = (x233-(x234&(x235%x236)));

	if (t55 != 740786LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	volatile int32_t x238 = -1;
	uint16_t x239 = 41U;
	volatile int64_t t56 = -10684LL;

	t56 = (x237-(x238&(x239%x240)));

	if (t56 != -2147483689LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MIN;
	int8_t x243 = 43;
	uint32_t t57 = 117U;

	t57 = (x241-(x242&(x243%x244)));

	if (t57 != 4294967136U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x245 = 2408U;
	static uint32_t x246 = 0U;
	uint8_t x247 = 80U;
	volatile int32_t x248 = 854853;

	t58 = (x245-(x246&(x247%x248)));

	if (t58 != 2408U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;
	static int64_t t59 = -1LL;

	t59 = (x249-(x250&(x251%x252)));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	static volatile uint16_t x254 = 391U;
	int16_t x255 = -1;
	int32_t t60 = 742;

	t60 = (x253-(x254&(x255%x256)));

	if (t60 != -33159) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 14895994LLU;
	uint64_t x259 = 8176LLU;
	volatile int16_t x260 = -1;
	uint64_t t61 = 8172LLU;

	t61 = (x257-(x258&(x259%x260)));

	if (t61 != 14887818LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = -197671;
	static int8_t x263 = -1;
	volatile int64_t t62 = -401503078LL;

	t62 = (x261-(x262&(x263%x264)));

	if (t62 != -9223372036854578137LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x265 = -14;
	int32_t x267 = 161555;
	static uint64_t x268 = 2LLU;
	static uint64_t t63 = 2139610LLU;

	t63 = (x265-(x266&(x267%x268)));

	if (t63 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x271 = 1U;
	uint32_t x272 = UINT32_MAX;
	static volatile uint32_t t64 = 68595U;

	t64 = (x269-(x270&(x271%x272)));

	if (t64 != 127U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x273 = 5854U;
	static volatile uint8_t x274 = 115U;
	int16_t x275 = -1;
	static uint64_t x276 = 38628511622057221LLU;
	uint64_t t65 = 15LLU;

	t65 = (x273-(x274&(x275%x276)));

	if (t65 != 5820LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 6620U;
	int8_t x279 = INT8_MAX;
	uint64_t x280 = 238LLU;
	volatile uint64_t t66 = 670518945581029516LLU;

	t66 = (x277-(x278&(x279%x280)));

	if (t66 != 6493LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x281 = INT64_MIN;
	static uint64_t x283 = UINT64_MAX;
	static uint16_t x284 = 57U;
	uint64_t t67 = 2810021466LLU;

	t67 = (x281-(x282&(x283%x284)));

	if (t67 != 9223372036854775754LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = -1;
	volatile uint8_t x286 = 1U;
	int64_t x287 = -235885964726LL;
	int8_t x288 = -1;
	int64_t t68 = 6950053669611LL;

	t68 = (x285-(x286&(x287%x288)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = 2044;
	static volatile uint8_t x291 = 7U;
	int8_t x292 = -1;
	int32_t t69 = -78538;

	t69 = (x289-(x290&(x291%x292)));

	if (t69 != 2044) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = 13;
	volatile uint16_t x295 = 22605U;
	static uint8_t x296 = UINT8_MAX;

	t70 = (x293-(x294&(x295%x296)));

	if (t70 != -152) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = INT32_MAX;
	volatile int16_t x298 = -117;
	uint64_t x299 = 1082320824030230LLU;
	static int8_t x300 = INT8_MIN;
	volatile uint64_t t71 = 15LLU;

	t71 = (x297-(x298&(x299%x300)));

	if (t71 != 18445661755033005053LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x302 = 5LLU;
	uint8_t x303 = 13U;
	static int64_t x304 = -122LL;
	volatile uint64_t t72 = 13632963LLU;

	t72 = (x301-(x302&(x303%x304)));

	if (t72 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = -1;
	uint64_t x306 = UINT64_MAX;
	static int16_t x308 = INT16_MIN;

	t73 = (x305-(x306&(x307%x308)));

	if (t73 != 18446744073709192461LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x310 = INT8_MAX;
	uint64_t t74 = 41449LLU;

	t74 = (x309-(x310&(x311%x312)));

	if (t74 != 15416600145422371LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x313 = UINT64_MAX;
	static int16_t x315 = 1;
	static uint8_t x316 = 6U;
	volatile uint64_t t75 = 50799525670LLU;

	t75 = (x313-(x314&(x315%x316)));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x319 = UINT64_MAX;
	static int32_t x320 = 6;

	t76 = (x317-(x318&(x319%x320)));

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = INT32_MIN;
	int16_t x324 = 7;

	t77 = (x321-(x322&(x323%x324)));

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = INT64_MAX;
	volatile int32_t x327 = 144;
	static int32_t x328 = -16;

	t78 = (x325-(x326&(x327%x328)));

	if (t78 != 255LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = -1;
	static int32_t x330 = -1;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = 74U;
	static int32_t t79 = -3;

	t79 = (x329-(x330&(x331%x332)));

	if (t79 != 53) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = 0LL;
	uint32_t x334 = 3416U;
	int32_t x335 = INT32_MIN;
	int8_t x336 = -1;

	t80 = (x333-(x334&(x335%x336)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MAX;
	int32_t x340 = INT32_MIN;

	t81 = (x337-(x338&(x339%x340)));

	if (t81 != -2147516415LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = 89824696649299528LL;
	static int32_t x342 = -1;
	int64_t x344 = INT64_MIN;
	int64_t t82 = 280365470LL;

	t82 = (x341-(x342&(x343%x344)));

	if (t82 != 89824698796783176LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x346 = 121U;
	int8_t x347 = -5;
	int8_t x348 = 1;
	int32_t t83 = 0;

	t83 = (x345-(x346&(x347%x348)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x354 = INT64_MIN;
	uint8_t x355 = 2U;
	int64_t x356 = INT64_MAX;
	int64_t t84 = -4278274833828434094LL;

	t84 = (x353-(x354&(x355%x356)));

	if (t84 != 32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = 27308U;
	int16_t x358 = -2;
	volatile uint8_t x359 = UINT8_MAX;
	volatile int32_t x360 = -1;
	int32_t t85 = -21822;

	t85 = (x357-(x358&(x359%x360)));

	if (t85 != 27308) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 1163127669LLU;
	uint8_t x363 = 24U;
	int32_t x364 = INT32_MAX;
	uint64_t t86 = 678596372152830472LLU;

	t86 = (x361-(x362&(x363%x364)));

	if (t86 != 65519LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = INT8_MIN;
	static int8_t x366 = 5;
	static int32_t x367 = INT32_MIN;
	volatile int32_t t87 = 6;

	t87 = (x365-(x366&(x367%x368)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = 0;
	volatile uint32_t x370 = 48U;

	t88 = (x369-(x370&(x371%x372)));

	if (t88 != -16LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	static volatile int16_t x375 = -12;
	int32_t t89 = -6159085;

	t89 = (x373-(x374&(x375%x376)));

	if (t89 != -32640) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x378 = 1U;
	static int64_t x379 = 29001645354266679LL;
	int8_t x380 = INT8_MIN;
	volatile int64_t t90 = 20210044371LL;

	t90 = (x377-(x378&(x379%x380)));

	if (t90 != 2080441LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x381 = INT16_MIN;
	uint8_t x382 = 39U;
	uint16_t x383 = 5U;
	int64_t x384 = -1LL;
	int64_t t91 = -159792195482714132LL;

	t91 = (x381-(x382&(x383%x384)));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x385 = 132332067;
	volatile int64_t x386 = -17909443531979LL;
	int8_t x387 = INT8_MIN;
	int64_t t92 = 2373LL;

	t92 = (x385-(x386&(x387%x388)));

	if (t92 != 132332067LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = UINT32_MAX;
	static int32_t x391 = INT32_MAX;
	volatile uint32_t x392 = 132496U;
	uint32_t t93 = UINT32_MAX;

	t93 = (x389-(x390&(x391%x392)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = 4091U;
	int16_t x394 = INT16_MAX;
	uint32_t x395 = UINT32_MAX;
	static int8_t x396 = INT8_MIN;
	uint32_t t94 = 165U;

	t94 = (x393-(x394&(x395%x396)));

	if (t94 != 3964U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MAX;
	static int8_t x398 = INT8_MIN;
	int32_t x399 = INT32_MIN;
	int32_t t95 = -16;

	t95 = (x397-(x398&(x399%x400)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x401 = INT32_MIN;
	volatile int32_t x403 = -1;

	t96 = (x401-(x402&(x403%x404)));

	if (t96 != 2147448023U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = 14U;
	int16_t x406 = -42;
	volatile int16_t x407 = -9;
	int64_t x408 = INT64_MIN;

	t97 = (x405-(x406&(x407%x408)));

	if (t97 != 56LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 2907U;
	int16_t x411 = INT16_MIN;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t98 = 175801LLU;

	t98 = (x409-(x410&(x411%x412)));

	if (t98 != 35675LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x413 = INT16_MAX;
	int64_t x414 = INT64_MAX;
	uint32_t x415 = UINT32_MAX;
	volatile int64_t t99 = -11LL;

	t99 = (x413-(x414&(x415%x416)));

	if (t99 != 32767LL) { NG(); } else { ; }
	
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

