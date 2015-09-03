#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MAX;
static int16_t x20 = INT16_MIN;
int16_t x29 = 2276;
int8_t x35 = -1;
volatile uint64_t t5 = 1304950LLU;
uint8_t x42 = UINT8_MAX;
int8_t x52 = -1;
static volatile uint32_t t10 = 4939U;
volatile int64_t x60 = -8547691323268LL;
uint32_t x66 = UINT32_MAX;
static int8_t x74 = -1;
static int64_t x75 = INT64_MAX;
volatile uint64_t x88 = 1953977773379LLU;
uint64_t t16 = 1LLU;
volatile int32_t x89 = INT32_MAX;
volatile int32_t x90 = INT32_MIN;
int64_t t17 = -2050LL;
int64_t x94 = INT64_MIN;
uint32_t x101 = UINT32_MAX;
volatile int32_t x102 = INT32_MIN;
static int16_t x105 = INT16_MAX;
static uint32_t t21 = 1294216932U;
int32_t x110 = INT32_MIN;
int64_t x112 = -1LL;
int64_t x113 = INT64_MIN;
int16_t x122 = -142;
int16_t x130 = INT16_MIN;
volatile int64_t t26 = -16726143778612246LL;
int16_t x139 = -1;
volatile uint64_t x140 = 1009089620LLU;
volatile uint8_t x144 = 0U;
static volatile int32_t t28 = 1068;
uint32_t x146 = 42U;
volatile uint16_t x156 = 25167U;
volatile int32_t t31 = 1;
int16_t x165 = INT16_MIN;
static volatile uint32_t x167 = 0U;
int32_t x169 = 0;
volatile int64_t x170 = -209914273179441021LL;
static volatile int16_t x176 = INT16_MIN;
volatile int32_t t38 = -174;
volatile int16_t x188 = -7;
int32_t x189 = INT32_MIN;
uint64_t x192 = UINT64_MAX;
int32_t x195 = INT32_MAX;
volatile int32_t t41 = -520;
static int64_t x198 = -1LL;
int16_t x208 = 890;
uint32_t t45 = 364861U;
static int16_t x215 = -15;
static volatile int32_t t46 = 1177;
volatile int8_t x218 = INT8_MAX;
static uint64_t x219 = UINT64_MAX;
uint64_t x220 = 17LLU;
volatile int64_t x221 = 160819666807LL;
volatile uint8_t x226 = 0U;
static int32_t x230 = INT32_MIN;
volatile uint32_t t50 = 2822U;
volatile uint8_t x235 = UINT8_MAX;
static volatile int32_t t53 = 1123;
static uint64_t t56 = 374350089075568LLU;
int64_t x272 = INT64_MAX;
int64_t x287 = INT64_MAX;
volatile uint16_t x289 = UINT16_MAX;
volatile int32_t x297 = INT32_MAX;
volatile int32_t x303 = INT32_MIN;
int32_t x306 = INT32_MIN;
uint16_t x308 = UINT16_MAX;
int32_t x314 = -1;
int8_t x319 = INT8_MAX;
int32_t t69 = -488708468;
uint32_t x322 = UINT32_MAX;
int64_t x323 = -29210803303685LL;
int16_t x327 = INT16_MIN;
volatile uint32_t x331 = UINT32_MAX;
volatile int16_t x340 = INT16_MAX;
uint16_t x341 = 5U;
int8_t x343 = 24;
volatile int16_t x344 = -7995;
volatile int64_t x346 = -7874484801LL;
uint8_t x351 = 111U;
int8_t x352 = -1;
int16_t x354 = INT16_MIN;
int32_t t79 = 31589925;
uint16_t x367 = 0U;
uint64_t x368 = 24587LLU;
int16_t x370 = -1;
static uint64_t x383 = UINT64_MAX;
int32_t x384 = -1;
int32_t x395 = 0;
uint8_t x400 = 33U;
int16_t x407 = -1;
int32_t t90 = 131287280;
int8_t x415 = INT8_MIN;
int64_t x416 = 1701078754359064LL;
int16_t x417 = 6;
int8_t x420 = INT8_MAX;
volatile uint32_t t93 = 3U;
int32_t x425 = INT32_MIN;
static int64_t x428 = -25017768762226892LL;
int32_t x433 = -11;
int8_t x434 = -1;
volatile int64_t x443 = -1LL;
volatile int16_t x448 = -387;
int32_t t99 = 744671;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int64_t x2 = -242152589683086LL;
	int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	int32_t t0 = -1;

	t0 = (((x1<=x2)&x3)-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	uint64_t x11 = 103411603353561074LLU;
	uint32_t x12 = UINT32_MAX;
	volatile uint64_t t1 = 22077134751522LLU;

	t1 = (((x9<=x10)&x11)-x12);

	if (t1 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	uint32_t x18 = UINT32_MAX;
	volatile uint8_t x19 = 0U;
	volatile int32_t t2 = 227441;

	t2 = (((x17<=x18)&x19)-x20);

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x25 = -24;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = 76LLU;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t3 = 3292506652LLU;

	t3 = (((x25<=x26)&x27)-x28);

	if (t3 != 128LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x30 = UINT32_MAX;
	volatile int16_t x31 = -61;
	volatile int16_t x32 = 0;
	volatile int32_t t4 = -9;

	t4 = (((x29<=x30)&x31)-x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -1557;
	int8_t x34 = INT8_MIN;
	volatile uint64_t x36 = 51698179057740776LLU;

	t5 = (((x33<=x34)&x35)-x36);

	if (t5 != 18395045894651810841LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x37 = -3;
	static volatile int64_t x38 = 61932LL;
	uint8_t x39 = 18U;
	volatile uint32_t x40 = 1717763208U;
	static uint32_t t6 = 66517962U;

	t6 = (((x37<=x38)&x39)-x40);

	if (t6 != 2577204088U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x41 = 310U;
	int64_t x43 = INT64_MIN;
	uint64_t x44 = UINT64_MAX;
	static uint64_t t7 = 822LLU;

	t7 = (((x41<=x42)&x43)-x44);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 4U;
	int8_t x46 = INT8_MIN;
	int64_t x47 = INT64_MAX;
	static volatile uint8_t x48 = UINT8_MAX;
	volatile int64_t t8 = 11812506150015890LL;

	t8 = (((x45<=x46)&x47)-x48);

	if (t8 != -255LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x49 = INT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = INT16_MIN;
	int32_t t9 = 370;

	t9 = (((x49<=x50)&x51)-x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x53 = UINT64_MAX;
	volatile int32_t x54 = INT32_MAX;
	int32_t x55 = INT32_MAX;
	static uint32_t x56 = UINT32_MAX;

	t10 = (((x53<=x54)&x55)-x56);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x57 = 2254U;
	int16_t x58 = INT16_MAX;
	static volatile uint8_t x59 = 74U;
	volatile int64_t t11 = -6782775155LL;

	t11 = (((x57<=x58)&x59)-x60);

	if (t11 != 8547691323268LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 7U;
	static int8_t x67 = 3;
	uint16_t x68 = 2U;
	volatile int32_t t12 = 971802;

	t12 = (((x65<=x66)&x67)-x68);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = 1;
	int32_t x76 = -31;
	int64_t t13 = 123897101872117163LL;

	t13 = (((x73<=x74)&x75)-x76);

	if (t13 != 31LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x77 = INT16_MAX;
	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	int16_t x80 = -1;
	volatile int32_t t14 = -215;

	t14 = (((x77<=x78)&x79)-x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 14U;
	static int16_t x82 = 0;
	int16_t x83 = -740;
	uint16_t x84 = 54U;
	volatile int32_t t15 = -1934805;

	t15 = (((x81<=x82)&x83)-x84);

	if (t15 != -54) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = 0;
	static uint8_t x86 = UINT8_MAX;
	int32_t x87 = INT32_MAX;

	t16 = (((x85<=x86)&x87)-x88);

	if (t16 != 18446742119731778238LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x91 = 226U;
	volatile int64_t x92 = INT64_MAX;

	t17 = (((x89<=x90)&x91)-x92);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = INT64_MIN;
	int64_t x95 = INT64_MIN;
	volatile int32_t x96 = -1;
	volatile int64_t t18 = 935031516029136LL;

	t18 = (((x93<=x94)&x95)-x96);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x97 = -33;
	static int16_t x98 = INT16_MIN;
	volatile int64_t x99 = 2000629407904191862LL;
	int16_t x100 = -1;
	static volatile int64_t t19 = -27322LL;

	t19 = (((x97<=x98)&x99)-x100);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x103 = INT32_MIN;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t20 = -168702677;

	t20 = (((x101<=x102)&x103)-x104);

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x106 = -1;
	uint32_t x107 = 3508811U;
	volatile uint16_t x108 = UINT16_MAX;

	t21 = (((x105<=x106)&x107)-x108);

	if (t21 != 4294901761U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 0;
	volatile int8_t x111 = INT8_MIN;
	int64_t t22 = -8729457290363904LL;

	t22 = (((x109<=x110)&x111)-x112);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x114 = UINT16_MAX;
	static uint64_t x115 = 717626492730953693LLU;
	static volatile int64_t x116 = -1LL;
	uint64_t t23 = 1LLU;

	t23 = (((x113<=x114)&x115)-x116);

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	volatile uint16_t x118 = 3U;
	uint32_t x119 = 121695557U;
	volatile int8_t x120 = -1;
	volatile uint32_t t24 = 3728U;

	t24 = (((x117<=x118)&x119)-x120);

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x121 = INT16_MIN;
	static uint32_t x123 = 5231949U;
	int32_t x124 = -1;
	uint32_t t25 = 12056757U;

	t25 = (((x121<=x122)&x123)-x124);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = 7U;
	int64_t x131 = -1LL;
	static uint16_t x132 = UINT16_MAX;

	t26 = (((x129<=x130)&x131)-x132);

	if (t26 != -65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MAX;
	int32_t x138 = INT32_MAX;
	uint64_t t27 = 17583718091452LLU;

	t27 = (((x137<=x138)&x139)-x140);

	if (t27 != 18446744072700461997LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x141 = INT32_MIN;
	static uint8_t x142 = 0U;
	uint8_t x143 = 87U;

	t28 = (((x141<=x142)&x143)-x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	static int64_t x147 = -25270155599LL;
	int64_t x148 = INT64_MAX;
	int64_t t29 = -1213LL;

	t29 = (((x145<=x146)&x147)-x148);

	if (t29 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x149 = INT32_MIN;
	uint32_t x150 = 12U;
	volatile uint8_t x151 = 3U;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t30 = 58272U;

	t30 = (((x149<=x150)&x151)-x152);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = 208U;
	static int16_t x155 = INT16_MIN;

	t31 = (((x153<=x154)&x155)-x156);

	if (t31 != -25167) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = 67319320U;
	volatile uint8_t x158 = 5U;
	static int8_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t32 = 1419477LLU;

	t32 = (((x157<=x158)&x159)-x160);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = -2504096;
	static int32_t x162 = 0;
	int8_t x163 = INT8_MIN;
	int8_t x164 = 0;
	static volatile int32_t t33 = -648872;

	t33 = (((x161<=x162)&x163)-x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x166 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	uint32_t t34 = 147444125U;

	t34 = (((x165<=x166)&x167)-x168);

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x171 = INT8_MAX;
	uint8_t x172 = 12U;
	int32_t t35 = 11;

	t35 = (((x169<=x170)&x171)-x172);

	if (t35 != -12) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	static int16_t x174 = -1;
	int32_t x175 = INT32_MIN;
	volatile int32_t t36 = 198725049;

	t36 = (((x173<=x174)&x175)-x176);

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MAX;
	int8_t x178 = -26;
	volatile int64_t x179 = -1LL;
	volatile uint8_t x180 = 3U;
	static int64_t t37 = 46219641083517LL;

	t37 = (((x177<=x178)&x179)-x180);

	if (t37 != -3LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = 656378668;
	int32_t x182 = -1;
	int8_t x183 = -1;
	int32_t x184 = -109771;

	t38 = (((x181<=x182)&x183)-x184);

	if (t38 != 109771) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x186 = 620U;
	int16_t x187 = 357;
	static volatile int32_t t39 = 55465;

	t39 = (((x185<=x186)&x187)-x188);

	if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x190 = -70429007004LL;
	uint32_t x191 = UINT32_MAX;
	volatile uint64_t t40 = 409064994LLU;

	t40 = (((x189<=x190)&x191)-x192);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = UINT64_MAX;
	uint64_t x194 = 35633349532989LLU;
	int16_t x196 = INT16_MAX;

	t41 = (((x193<=x194)&x195)-x196);

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MIN;
	volatile int32_t x199 = INT32_MIN;
	static int64_t x200 = INT64_MAX;
	static int64_t t42 = -455451038348LL;

	t42 = (((x197<=x198)&x199)-x200);

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = UINT32_MAX;
	int16_t x202 = -1;
	volatile int8_t x203 = INT8_MIN;
	static volatile int8_t x204 = 8;
	static volatile int32_t t43 = 218524235;

	t43 = (((x201<=x202)&x203)-x204);

	if (t43 != -8) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x205 = 1;
	uint64_t x206 = 2051LLU;
	volatile int8_t x207 = INT8_MIN;
	int32_t t44 = 4;

	t44 = (((x205<=x206)&x207)-x208);

	if (t44 != -890) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x209 = 2U;
	int32_t x210 = -120;
	static uint32_t x211 = 31340U;
	int16_t x212 = INT16_MIN;

	t45 = (((x209<=x210)&x211)-x212);

	if (t45 != 32768U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x213 = INT16_MIN;
	int64_t x214 = 77LL;
	uint16_t x216 = UINT16_MAX;

	t46 = (((x213<=x214)&x215)-x216);

	if (t46 != -65534) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	volatile uint64_t t47 = 10491LLU;

	t47 = (((x217<=x218)&x219)-x220);

	if (t47 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x222 = INT64_MIN;
	uint16_t x223 = UINT16_MAX;
	uint64_t x224 = 0LLU;
	uint64_t t48 = 37881465LLU;

	t48 = (((x221<=x222)&x223)-x224);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = UINT32_MAX;
	static uint32_t x227 = 637U;
	volatile int32_t x228 = INT32_MIN;
	volatile uint32_t t49 = 384541840U;

	t49 = (((x225<=x226)&x227)-x228);

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x229 = UINT8_MAX;
	uint32_t x231 = 70142828U;
	static int8_t x232 = INT8_MAX;

	t50 = (((x229<=x230)&x231)-x232);

	if (t50 != 4294967169U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x234 = 13640046;
	int8_t x236 = INT8_MIN;
	int32_t t51 = 7369373;

	t51 = (((x233<=x234)&x235)-x236);

	if (t51 != 129) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int32_t x242 = 48;
	static int8_t x243 = INT8_MIN;
	int8_t x244 = 1;
	int32_t t52 = 4491614;

	t52 = (((x241<=x242)&x243)-x244);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = -1LL;
	volatile int64_t x246 = INT64_MAX;
	int32_t x247 = INT32_MIN;
	int16_t x248 = 1;

	t53 = (((x245<=x246)&x247)-x248);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 1U;
	uint64_t x250 = 28LLU;
	uint8_t x251 = 4U;
	int32_t x252 = -46723;
	int32_t t54 = 922506805;

	t54 = (((x249<=x250)&x251)-x252);

	if (t54 != 46723) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x254 = INT32_MAX;
	uint32_t x255 = 1175U;
	volatile int16_t x256 = -1;
	volatile uint32_t t55 = 285U;

	t55 = (((x253<=x254)&x255)-x256);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MAX;
	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	volatile uint64_t x260 = 98656994214517551LLU;

	t56 = (((x257<=x258)&x259)-x260);

	if (t56 != 18348087079495034065LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = -1;
	static int8_t x266 = 3;
	int32_t x267 = INT32_MIN;
	volatile uint32_t x268 = 248643U;
	volatile uint32_t t57 = 0U;

	t57 = (((x265<=x266)&x267)-x268);

	if (t57 != 4294718653U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x269 = INT16_MIN;
	static uint8_t x270 = 20U;
	uint64_t x271 = UINT64_MAX;
	uint64_t t58 = 1336196925LLU;

	t58 = (((x269<=x270)&x271)-x272);

	if (t58 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = -43834;
	static uint32_t x278 = UINT32_MAX;
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 551U;
	static volatile int32_t t59 = -118976982;

	t59 = (((x277<=x278)&x279)-x280);

	if (t59 != -550) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x281 = -2;
	uint8_t x282 = UINT8_MAX;
	int64_t x283 = 97139287529676LL;
	int8_t x284 = -1;
	int64_t t60 = -222767LL;

	t60 = (((x281<=x282)&x283)-x284);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MIN;
	uint8_t x288 = UINT8_MAX;
	static int64_t t61 = -4657LL;

	t61 = (((x285<=x286)&x287)-x288);

	if (t61 != -254LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	volatile int32_t x292 = -1;
	static int32_t t62 = -282042083;

	t62 = (((x289<=x290)&x291)-x292);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = 0;
	volatile uint16_t x294 = 17371U;
	static int64_t x295 = 1011826668862LL;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t63 = 852LLU;

	t63 = (((x293<=x294)&x295)-x296);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x298 = 48815LLU;
	int8_t x299 = -1;
	static uint8_t x300 = 33U;
	volatile int32_t t64 = 5;

	t64 = (((x297<=x298)&x299)-x300);

	if (t64 != -33) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x301 = -1LL;
	volatile int16_t x302 = INT16_MIN;
	uint16_t x304 = UINT16_MAX;
	int32_t t65 = -56552100;

	t65 = (((x301<=x302)&x303)-x304);

	if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = -20;
	static int8_t x307 = 0;
	volatile int32_t t66 = -4;

	t66 = (((x305<=x306)&x307)-x308);

	if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x309 = UINT16_MAX;
	int8_t x310 = INT8_MAX;
	uint64_t x311 = 2712623LLU;
	uint32_t x312 = UINT32_MAX;
	static uint64_t t67 = 33140653LLU;

	t67 = (((x309<=x310)&x311)-x312);

	if (t67 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x313 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	int8_t x316 = -6;
	volatile int32_t t68 = -403;

	t68 = (((x313<=x314)&x315)-x316);

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = 21;
	uint64_t x318 = 357245018LLU;
	int32_t x320 = -1;

	t69 = (((x317<=x318)&x319)-x320);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = 0U;
	uint64_t x324 = 124245459800LLU;
	uint64_t t70 = 4986954411113LLU;

	t70 = (((x321<=x322)&x323)-x324);

	if (t70 != 18446743949464091817LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x325 = -60405;
	int8_t x326 = INT8_MIN;
	static int16_t x328 = INT16_MAX;
	static volatile int32_t t71 = 7864782;

	t71 = (((x325<=x326)&x327)-x328);

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = UINT16_MAX;
	int32_t x330 = INT32_MIN;
	int64_t x332 = 3661LL;
	volatile int64_t t72 = -1197016267LL;

	t72 = (((x329<=x330)&x331)-x332);

	if (t72 != -3661LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = INT32_MAX;
	static uint32_t x334 = UINT32_MAX;
	int64_t x335 = INT64_MIN;
	static volatile int8_t x336 = INT8_MAX;
	int64_t t73 = 3899918LL;

	t73 = (((x333<=x334)&x335)-x336);

	if (t73 != -127LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x337 = 46727U;
	int64_t x338 = -1LL;
	int16_t x339 = -1;
	volatile int32_t t74 = -6094;

	t74 = (((x337<=x338)&x339)-x340);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x342 = 25U;
	volatile int32_t t75 = -3566188;

	t75 = (((x341<=x342)&x343)-x344);

	if (t75 != 7995) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MAX;
	volatile int32_t t76 = 1657304;

	t76 = (((x345<=x346)&x347)-x348);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = -17;
	uint8_t x350 = 6U;
	volatile int32_t t77 = -1;

	t77 = (((x349<=x350)&x351)-x352);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = INT64_MAX;
	uint16_t x355 = UINT16_MAX;
	volatile uint8_t x356 = 34U;
	static int32_t t78 = -28002834;

	t78 = (((x353<=x354)&x355)-x356);

	if (t78 != -34) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = -15;
	int32_t x358 = INT32_MAX;
	static volatile int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MAX;

	t79 = (((x357<=x358)&x359)-x360);

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x361 = 112LLU;
	static int16_t x362 = INT16_MIN;
	uint64_t x363 = 88037083143968LLU;
	uint64_t x364 = UINT64_MAX;
	uint64_t t80 = 15157931907LLU;

	t80 = (((x361<=x362)&x363)-x364);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = -11942085;
	uint16_t x366 = 15U;
	static uint64_t t81 = 854789081LLU;

	t81 = (((x365<=x366)&x367)-x368);

	if (t81 != 18446744073709527029LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = -1;
	int8_t x371 = -16;
	uint16_t x372 = 2U;
	static volatile int32_t t82 = -1;

	t82 = (((x369<=x370)&x371)-x372);

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x373 = INT16_MIN;
	uint64_t x374 = UINT64_MAX;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = INT8_MIN;
	static uint32_t t83 = 11U;

	t83 = (((x373<=x374)&x375)-x376);

	if (t83 != 129U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x377 = -739;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = -2937;
	volatile uint32_t x380 = 241968U;
	uint32_t t84 = 3U;

	t84 = (((x377<=x378)&x379)-x380);

	if (t84 != 4294725329U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x381 = -1;
	static int8_t x382 = -1;
	volatile uint64_t t85 = 6272065718682109528LLU;

	t85 = (((x381<=x382)&x383)-x384);

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x389 = 3U;
	int8_t x390 = 1;
	static int8_t x391 = INT8_MIN;
	int64_t x392 = -485LL;
	int64_t t86 = -254462396831290LL;

	t86 = (((x389<=x390)&x391)-x392);

	if (t86 != 485LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x393 = -692;
	uint64_t x394 = 1LLU;
	int64_t x396 = 2LL;
	volatile int64_t t87 = 617245036LL;

	t87 = (((x393<=x394)&x395)-x396);

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = -1LL;
	int16_t x398 = 3466;
	int8_t x399 = INT8_MAX;
	volatile int32_t t88 = 2;

	t88 = (((x397<=x398)&x399)-x400);

	if (t88 != -32) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x401 = 354501U;
	int64_t x402 = 14664LL;
	int8_t x403 = 1;
	uint64_t x404 = UINT64_MAX;
	uint64_t t89 = 2216910591LLU;

	t89 = (((x401<=x402)&x403)-x404);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x405 = 3U;
	static uint16_t x406 = 3311U;
	volatile uint8_t x408 = UINT8_MAX;

	t90 = (((x405<=x406)&x407)-x408);

	if (t90 != -254) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x413 = INT32_MIN;
	int32_t x414 = -46917;
	static int64_t t91 = -2154006543234LL;

	t91 = (((x413<=x414)&x415)-x416);

	if (t91 != -1701078754359064LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x418 = INT16_MIN;
	int8_t x419 = INT8_MIN;
	int32_t t92 = 2502;

	t92 = (((x417<=x418)&x419)-x420);

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = 879519;
	int64_t x422 = INT64_MIN;
	int16_t x423 = -87;
	uint32_t x424 = 1439102486U;

	t93 = (((x421<=x422)&x423)-x424);

	if (t93 != 2855864810U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x426 = -1;
	static volatile int8_t x427 = -1;
	volatile int64_t t94 = -22766576439LL;

	t94 = (((x425<=x426)&x427)-x428);

	if (t94 != 25017768762226893LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x429 = INT16_MAX;
	volatile uint16_t x430 = 2U;
	int64_t x431 = INT64_MIN;
	uint32_t x432 = 116665U;
	int64_t t95 = 16454180021498LL;

	t95 = (((x429<=x430)&x431)-x432);

	if (t95 != -116665LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x435 = INT32_MAX;
	int8_t x436 = 4;
	int32_t t96 = -16;

	t96 = (((x433<=x434)&x435)-x436);

	if (t96 != -3) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x437 = -1;
	uint64_t x438 = 291147361919LLU;
	uint16_t x439 = 218U;
	static volatile uint64_t x440 = 42275881139LLU;
	static volatile uint64_t t97 = 437487941904976LLU;

	t97 = (((x437<=x438)&x439)-x440);

	if (t97 != 18446744031433670477LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x441 = UINT16_MAX;
	int16_t x442 = INT16_MAX;
	int64_t x444 = -4783043LL;
	volatile int64_t t98 = -40656054LL;

	t98 = (((x441<=x442)&x443)-x444);

	if (t98 != 4783043LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x445 = 3U;
	static volatile uint16_t x446 = 8342U;
	volatile int16_t x447 = -1;

	t99 = (((x445<=x446)&x447)-x448);

	if (t99 != 388) { NG(); } else { ; }
	
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

