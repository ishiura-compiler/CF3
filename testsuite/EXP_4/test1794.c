#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 1U;
int16_t x13 = INT16_MIN;
int8_t x19 = INT8_MIN;
int16_t x25 = -15;
int8_t x38 = -1;
static int16_t x43 = INT16_MIN;
static int16_t x46 = INT16_MAX;
static volatile uint32_t x48 = 71746181U;
static uint16_t x55 = 41U;
int32_t x57 = INT32_MIN;
int64_t x60 = INT64_MIN;
uint16_t x61 = 109U;
uint64_t x67 = UINT64_MAX;
int64_t x86 = INT64_MAX;
int16_t x90 = INT16_MIN;
volatile int32_t x93 = INT32_MAX;
uint32_t x97 = 15197489U;
int32_t x104 = -1;
int64_t x105 = -1LL;
uint8_t x107 = 13U;
volatile int64_t t26 = 4572881257599LL;
int64_t x109 = -1LL;
int32_t x110 = -40502520;
int64_t x111 = INT64_MAX;
static uint32_t x112 = 17920348U;
int16_t x122 = INT16_MIN;
static int16_t x134 = -1;
static int8_t x136 = -1;
volatile int32_t t33 = INT32_MAX;
static int8_t x138 = INT8_MIN;
static int32_t t34 = INT32_MIN;
static volatile uint32_t t36 = 1U;
int8_t x150 = INT8_MIN;
int16_t x162 = -1;
int16_t x163 = INT16_MIN;
int8_t x164 = -1;
uint8_t x165 = UINT8_MAX;
uint8_t x167 = UINT8_MAX;
static volatile int16_t x171 = -9659;
int64_t x172 = 2926999LL;
volatile int32_t t42 = -121786;
volatile int16_t x176 = INT16_MAX;
int64_t x178 = -110831272988262LL;
uint32_t x187 = 14987983U;
int64_t t46 = INT64_MAX;
int8_t x194 = INT8_MAX;
uint16_t x195 = UINT16_MAX;
volatile uint32_t x207 = 8029U;
static int32_t x209 = INT32_MIN;
uint32_t x225 = 2273U;
int16_t x229 = INT16_MIN;
uint8_t x231 = 86U;
uint8_t x232 = 8U;
int32_t x233 = -368;
int16_t x236 = -170;
volatile int64_t x238 = INT64_MIN;
static volatile int32_t t59 = 391218231;
volatile int32_t t62 = -2;
uint32_t x255 = 1990675U;
int32_t x258 = INT32_MAX;
uint16_t x261 = UINT16_MAX;
volatile int8_t x268 = 1;
int16_t x270 = INT16_MIN;
volatile uint32_t x271 = UINT32_MAX;
static int8_t x287 = INT8_MIN;
int32_t x288 = INT32_MAX;
volatile int32_t t71 = INT32_MIN;
static int64_t x295 = 207707270244638217LL;
static int16_t x296 = INT16_MIN;
int8_t x298 = INT8_MIN;
static int8_t x300 = INT8_MIN;
static int32_t t75 = INT32_MAX;
static uint64_t x307 = UINT64_MAX;
static int32_t t76 = 254;
volatile int8_t x309 = INT8_MIN;
int32_t x316 = INT32_MIN;
static volatile int32_t x320 = INT32_MIN;
int32_t t80 = -522116;
int16_t x327 = INT16_MIN;
static int32_t t81 = -4340;
static uint8_t x331 = 1U;
int64_t x336 = INT64_MIN;
int8_t x349 = -14;
uint8_t x350 = UINT8_MAX;
int64_t x353 = -1LL;
int32_t x355 = INT32_MAX;
int64_t t88 = 7497305814929LL;
int16_t x358 = -3;
int8_t x365 = INT8_MIN;
int16_t x370 = -1;
volatile int32_t t93 = -162546900;
volatile int32_t t94 = 446126;
static int8_t x384 = -1;
int64_t t95 = -24216955587LL;
int8_t x386 = INT8_MAX;
volatile int64_t x388 = INT64_MAX;
int64_t x391 = INT64_MIN;
static volatile uint64_t x392 = UINT64_MAX;
uint16_t x393 = UINT16_MAX;
int32_t x398 = INT32_MIN;
uint8_t x400 = UINT8_MAX;


void f0(void) {
	int8_t x1 = -7;
	static volatile int8_t x2 = -1;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = -16473;

	t0 = (x1^(x2==(x3&x4)));

	if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = -279456030295449LL;
	uint16_t x7 = UINT16_MAX;
	volatile int32_t x8 = -278;
	int64_t t1 = INT64_MIN;

	t1 = (x5^(x6==(x7&x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 168U;
	int8_t x10 = INT8_MIN;
	uint64_t x12 = 39966644LLU;
	int32_t t2 = -1;

	t2 = (x9^(x10==(x11&x12)));

	if (t2 != 168) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x14 = 6;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 7495895;

	t3 = (x13^(x14==(x15&x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static int16_t x18 = INT16_MAX;
	static int16_t x20 = INT16_MAX;
	int32_t t4 = -265283669;

	t4 = (x17^(x18==(x19&x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MAX;
	uint32_t x22 = UINT32_MAX;
	int32_t x23 = 0;
	static uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = -3549;

	t5 = (x21^(x22==(x23&x24)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = 0;
	static int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t6 = 1417;

	t6 = (x25^(x26==(x27&x28)));

	if (t6 != -15) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 313;
	uint8_t x30 = 45U;
	static uint32_t x31 = UINT32_MAX;
	int64_t x32 = INT64_MIN;
	static int32_t t7 = 0;

	t7 = (x29^(x30==(x31&x32)));

	if (t7 != 313) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	int64_t x34 = -282610249352LL;
	int64_t x35 = INT64_MIN;
	static int32_t x36 = -1;
	int64_t t8 = 43436110LL;

	t8 = (x33^(x34==(x35&x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = UINT32_MAX;
	volatile uint8_t x39 = 1U;
	int32_t x40 = 55169711;
	uint32_t t9 = UINT32_MAX;

	t9 = (x37^(x38==(x39&x40)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int32_t x42 = INT32_MIN;
	volatile uint16_t x44 = 3U;
	int32_t t10 = -3445;

	t10 = (x41^(x42==(x43&x44)));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	int32_t t11 = INT32_MIN;

	t11 = (x45^(x46==(x47&x48)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 9U;
	volatile int16_t x50 = 2;
	uint64_t x51 = 13LLU;
	int64_t x52 = -13952734438LL;
	volatile int32_t t12 = 3420;

	t12 = (x49^(x50==(x51&x52)));

	if (t12 != 9) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -15449;
	uint16_t x54 = 7215U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -2;

	t13 = (x53^(x54==(x55&x56)));

	if (t13 != -15449) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 4;
	uint64_t x59 = 3476457LLU;
	int32_t t14 = INT32_MIN;

	t14 = (x57^(x58==(x59&x60)));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	static int16_t x64 = -1;
	int32_t t15 = -2570;

	t15 = (x61^(x62==(x63&x64)));

	if (t15 != 109) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int64_t x66 = INT64_MIN;
	int8_t x68 = INT8_MIN;
	static int64_t t16 = INT64_MAX;

	t16 = (x65^(x66==(x67&x68)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 0U;
	uint16_t x70 = UINT16_MAX;
	int16_t x71 = INT16_MAX;
	static int8_t x72 = -18;
	volatile int32_t t17 = -195253;

	t17 = (x69^(x70==(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	volatile int8_t x74 = INT8_MIN;
	static int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 47;

	t18 = (x73^(x74==(x75&x76)));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 9764U;
	int8_t x78 = -1;
	uint8_t x79 = 4U;
	volatile int32_t x80 = -1;
	static volatile int32_t t19 = -1;

	t19 = (x77^(x78==(x79&x80)));

	if (t19 != 9764) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MIN;
	volatile uint64_t x83 = 117268LLU;
	uint32_t x84 = 2143441923U;
	int32_t t20 = 52344;

	t20 = (x81^(x82==(x83&x84)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 871;
	int32_t x87 = -185931;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -9;

	t21 = (x85^(x86==(x87&x88)));

	if (t21 != 871) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -855901991210667383LL;
	static int32_t x91 = -122816872;
	uint8_t x92 = UINT8_MAX;
	int64_t t22 = 15154050910LL;

	t22 = (x89^(x90==(x91&x92)));

	if (t22 != -855901991210667383LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	static int32_t x95 = 80005;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t23 = INT32_MAX;

	t23 = (x93^(x94==(x95&x96)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -1;
	volatile int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MIN;
	uint32_t t24 = 17949U;

	t24 = (x97^(x98==(x99&x100)));

	if (t24 != 15197489U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 143;
	volatile int64_t x102 = 5887406509680113LL;
	volatile int16_t x103 = -1;
	int32_t t25 = 24483726;

	t25 = (x101^(x102==(x103&x104)));

	if (t25 != 143) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -203;
	volatile int32_t x108 = INT32_MAX;

	t26 = (x105^(x106==(x107&x108)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t t27 = 506624699LL;

	t27 = (x109^(x110==(x111&x112)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	static int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MIN;
	int64_t t28 = 4240382096804363LL;

	t28 = (x113^(x114==(x115&x116)));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = 44459969;
	uint32_t x119 = 4U;
	volatile int8_t x120 = -15;
	volatile int32_t t29 = -203;

	t29 = (x117^(x118==(x119&x120)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 1121294;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = 732U;
	volatile int32_t t30 = -821;

	t30 = (x121^(x122==(x123&x124)));

	if (t30 != 1121294) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	volatile uint16_t x126 = 12U;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MAX;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x125^(x126==(x127&x128)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	static int8_t x130 = -1;
	int16_t x131 = 97;
	int64_t x132 = 482647LL;
	static volatile int32_t t32 = -2916698;

	t32 = (x129^(x130==(x131&x132)));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int64_t x135 = -36131348LL;

	t33 = (x133^(x134==(x135&x136)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile uint8_t x139 = UINT8_MAX;
	static int64_t x140 = -1LL;

	t34 = (x137^(x138==(x139&x140)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 183LLU;
	static uint32_t x142 = UINT32_MAX;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = 4U;
	volatile uint64_t t35 = 27837LLU;

	t35 = (x141^(x142==(x143&x144)));

	if (t35 != 183LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 5U;
	int64_t x146 = 158383142432762818LL;
	static int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MIN;

	t36 = (x145^(x146==(x147&x148)));

	if (t36 != 5U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = 15385U;
	uint64_t x151 = 410614047005LLU;
	volatile int64_t x152 = -563LL;
	uint32_t t37 = 13U;

	t37 = (x149^(x150==(x151&x152)));

	if (t37 != 15385U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -1;
	uint64_t x154 = 0LLU;
	uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 1U;
	int32_t t38 = -377878;

	t38 = (x153^(x154==(x155&x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1340LL;
	uint64_t x158 = 8753329LLU;
	int16_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	volatile int64_t t39 = -1779434034244530511LL;

	t39 = (x157^(x158==(x159&x160)));

	if (t39 != -1340LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 4U;
	volatile int32_t t40 = 3;

	t40 = (x161^(x162==(x163&x164)));

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MIN;
	volatile int8_t x168 = -4;
	int32_t t41 = -2;

	t41 = (x165^(x166==(x167&x168)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int8_t x170 = INT8_MAX;

	t42 = (x169^(x170==(x171&x172)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int8_t x174 = -3;
	volatile int16_t x175 = 8;
	static volatile uint32_t t43 = UINT32_MAX;

	t43 = (x173^(x174==(x175&x176)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 123LLU;
	volatile int16_t x179 = -38;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t44 = 11LLU;

	t44 = (x177^(x178==(x179&x180)));

	if (t44 != 123LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = 7;
	int32_t x182 = 885;
	uint16_t x183 = UINT16_MAX;
	static int64_t x184 = 2LL;
	static volatile int32_t t45 = -7224;

	t45 = (x181^(x182==(x183&x184)));

	if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = 22;
	static uint8_t x188 = UINT8_MAX;

	t46 = (x185^(x186==(x187&x188)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	int32_t x191 = -796718096;
	int16_t x192 = -3;
	volatile int32_t t47 = 4035;

	t47 = (x189^(x190==(x191&x192)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 2U;
	static uint8_t x196 = 43U;
	volatile int32_t t48 = -50968;

	t48 = (x193^(x194==(x195&x196)));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int32_t x198 = -1;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -173;

	t49 = (x197^(x198==(x199&x200)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	volatile int32_t x202 = INT32_MIN;
	int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = (x201^(x202==(x203&x204)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MIN;
	int64_t x208 = -1139691912862788718LL;
	uint32_t t51 = UINT32_MAX;

	t51 = (x205^(x206==(x207&x208)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MAX;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = INT8_MAX;
	volatile int32_t t52 = INT32_MIN;

	t52 = (x209^(x210==(x211&x212)));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = 55218842;
	int32_t x215 = INT32_MIN;
	static uint16_t x216 = 52U;
	int32_t t53 = 1;

	t53 = (x213^(x214==(x215&x216)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 2067U;
	int64_t x218 = -1986363LL;
	int16_t x219 = INT16_MIN;
	int64_t x220 = -166817LL;
	volatile int32_t t54 = 1;

	t54 = (x217^(x218==(x219&x220)));

	if (t54 != 2067) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	int32_t x223 = -1791;
	uint32_t x224 = 210371U;
	volatile int32_t t55 = 7;

	t55 = (x221^(x222==(x223&x224)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = UINT32_MAX;
	uint32_t x227 = 204023U;
	static int32_t x228 = -1;
	uint32_t t56 = 6U;

	t56 = (x225^(x226==(x227&x228)));

	if (t56 != 2273U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x230 = 3U;
	int32_t t57 = 156659071;

	t57 = (x229^(x230==(x231&x232)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 1U;
	int8_t x235 = 52;
	volatile int32_t t58 = -341;

	t58 = (x233^(x234==(x235&x236)));

	if (t58 != -368) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -59878078;
	static int16_t x239 = INT16_MIN;
	uint16_t x240 = 3U;

	t59 = (x237^(x238==(x239&x240)));

	if (t59 != -59878078) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MAX;
	int32_t x242 = 1;
	volatile uint64_t x243 = 21730872401128LLU;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t60 = -5632;

	t60 = (x241^(x242==(x243&x244)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x246 = -1LL;
	uint64_t x247 = 847070941393LLU;
	int64_t x248 = INT64_MIN;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (x245^(x246==(x247&x248)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	uint8_t x250 = 1U;
	int16_t x251 = INT16_MIN;
	int64_t x252 = INT64_MAX;

	t62 = (x249^(x250==(x251&x252)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int8_t x254 = -1;
	volatile int32_t x256 = -1;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x253^(x254==(x255&x256)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 34U;
	int64_t x259 = -469LL;
	int8_t x260 = 18;
	int32_t t64 = 492;

	t64 = (x257^(x258==(x259&x260)));

	if (t64 != 34) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x262 = UINT32_MAX;
	uint32_t x263 = 1098766U;
	int16_t x264 = INT16_MAX;
	int32_t t65 = 3;

	t65 = (x261^(x262==(x263&x264)));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint8_t x266 = 96U;
	int32_t x267 = INT32_MAX;
	int64_t t66 = INT64_MIN;

	t66 = (x265^(x266==(x267&x268)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int32_t x272 = INT32_MIN;
	int64_t t67 = INT64_MIN;

	t67 = (x269^(x270==(x271&x272)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 854748LL;
	uint32_t x274 = 221904738U;
	int8_t x275 = INT8_MIN;
	volatile int16_t x276 = INT16_MAX;
	volatile int64_t t68 = -11LL;

	t68 = (x273^(x274==(x275&x276)));

	if (t68 != 854748LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	int64_t x278 = INT64_MAX;
	volatile int8_t x279 = INT8_MAX;
	uint8_t x280 = 116U;
	volatile int32_t t69 = INT32_MIN;

	t69 = (x277^(x278==(x279&x280)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -3729359097334669LL;
	volatile int8_t x282 = INT8_MAX;
	uint32_t x283 = UINT32_MAX;
	uint16_t x284 = 143U;
	int64_t t70 = -2649997737594472952LL;

	t70 = (x281^(x282==(x283&x284)));

	if (t70 != -3729359097334669LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	uint64_t x286 = 401528LLU;

	t71 = (x285^(x286==(x287&x288)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = 41777548;
	int64_t x290 = INT64_MAX;
	int8_t x291 = -59;
	uint32_t x292 = 9647U;
	static volatile int32_t t72 = 189787789;

	t72 = (x289^(x290==(x291&x292)));

	if (t72 != 41777548) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -1;
	int32_t x294 = -1;
	static volatile int32_t t73 = 88031840;

	t73 = (x293^(x294==(x295&x296)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 3;
	int16_t x299 = INT16_MIN;
	int32_t t74 = 7504;

	t74 = (x297^(x298==(x299&x300)));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MAX;
	volatile int16_t x304 = -1;

	t75 = (x301^(x302==(x303&x304)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -1;
	static uint16_t x306 = 26U;
	uint8_t x308 = 5U;

	t76 = (x305^(x306==(x307&x308)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = -6;
	static int32_t x311 = 46277864;
	static int8_t x312 = INT8_MAX;
	int32_t t77 = 0;

	t77 = (x309^(x310==(x311&x312)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	static int64_t x314 = INT64_MIN;
	volatile uint8_t x315 = 0U;
	uint32_t t78 = UINT32_MAX;

	t78 = (x313^(x314==(x315&x316)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	volatile int32_t x318 = -1596598;
	int32_t x319 = INT32_MAX;
	volatile int32_t t79 = -9;

	t79 = (x317^(x318==(x319&x320)));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 12U;
	int8_t x322 = INT8_MIN;
	int16_t x323 = 8;
	int32_t x324 = 310;

	t80 = (x321^(x322==(x323&x324)));

	if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	uint16_t x326 = 2U;
	volatile int64_t x328 = 31236465374889LL;

	t81 = (x325^(x326==(x327&x328)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 22U;
	static uint32_t x330 = UINT32_MAX;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = 76476036;

	t82 = (x329^(x330==(x331&x332)));

	if (t82 != 22) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = -1;
	volatile uint32_t x335 = 349691U;
	static volatile int64_t t83 = INT64_MIN;

	t83 = (x333^(x334==(x335&x336)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = -1;
	volatile int16_t x338 = -321;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	volatile int32_t t84 = 81970;

	t84 = (x337^(x338==(x339&x340)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 56795LL;
	int32_t x342 = -1;
	uint8_t x343 = 106U;
	static int32_t x344 = -5823354;
	int64_t t85 = 8441LL;

	t85 = (x341^(x342==(x343&x344)));

	if (t85 != 56795LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int16_t x346 = INT16_MIN;
	uint32_t x347 = 10250U;
	static int64_t x348 = -41LL;
	static volatile int32_t t86 = -815324702;

	t86 = (x345^(x346==(x347&x348)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x351 = INT8_MAX;
	int64_t x352 = -1LL;
	volatile int32_t t87 = -7567;

	t87 = (x349^(x350==(x351&x352)));

	if (t87 != -14) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 181926U;
	static uint16_t x356 = UINT16_MAX;

	t88 = (x353^(x354==(x355&x356)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 244U;
	uint16_t x359 = 14559U;
	uint16_t x360 = 58U;
	volatile uint32_t t89 = 105220647U;

	t89 = (x357^(x358==(x359&x360)));

	if (t89 != 244U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = 46U;
	int32_t x362 = -117576532;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 184;

	t90 = (x361^(x362==(x363&x364)));

	if (t90 != 46) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = -502;
	static int16_t x367 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = 23;

	t91 = (x365^(x366==(x367&x368)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 2466;
	int32_t x371 = -1;
	int64_t x372 = -1LL;
	static volatile int32_t t92 = -40;

	t92 = (x369^(x370==(x371&x372)));

	if (t92 != 2467) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	static volatile int16_t x375 = -1;
	uint8_t x376 = UINT8_MAX;

	t93 = (x373^(x374==(x375&x376)));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MIN;
	int16_t x379 = -7002;
	static int8_t x380 = INT8_MIN;

	t94 = (x377^(x378==(x379&x380)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -575081199748857179LL;
	int64_t x382 = INT64_MIN;
	static volatile uint16_t x383 = UINT16_MAX;

	t95 = (x381^(x382==(x383&x384)));

	if (t95 != -575081199748857179LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x387 = 464738090U;
	volatile int32_t t96 = -2111977;

	t96 = (x385^(x386==(x387&x388)));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MIN;
	int32_t t97 = 10591;

	t97 = (x389^(x390==(x391&x392)));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = 27U;
	int16_t x395 = 8;
	int64_t x396 = 390415LL;
	int32_t t98 = 133253969;

	t98 = (x393^(x394==(x395&x396)));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	static volatile uint64_t x399 = 60826912LLU;
	uint64_t t99 = UINT64_MAX;

	t99 = (x397^(x398==(x399&x400)));

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

