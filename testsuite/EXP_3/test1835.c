#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 121206056LLU;
uint32_t t2 = 1223653760U;
uint8_t x30 = 8U;
int32_t x33 = 2433;
int16_t x36 = INT16_MAX;
uint64_t x55 = UINT64_MAX;
static int64_t x56 = -188599681784000692LL;
static uint64_t t12 = 138148878LLU;
int64_t x57 = -1LL;
int64_t x58 = INT64_MIN;
static int32_t x60 = 39;
int64_t t15 = -17103LL;
int16_t x69 = -1;
uint32_t x78 = 50153047U;
int8_t x80 = -1;
static uint32_t x84 = 3828527U;
volatile uint64_t t20 = 39727987046480865LLU;
int8_t x89 = INT8_MIN;
uint8_t x99 = UINT8_MAX;
volatile uint64_t x101 = 34938557947105299LLU;
uint64_t x104 = 124641414714844LLU;
volatile int16_t x112 = INT16_MAX;
uint8_t x114 = 5U;
int32_t t27 = 1;
uint16_t x120 = UINT16_MAX;
int32_t t29 = -11389075;
uint32_t x130 = 0U;
uint64_t x131 = 1046082707214LLU;
volatile int16_t x135 = INT16_MIN;
int32_t x136 = INT32_MAX;
volatile int64_t t32 = -64428387048LL;
static int32_t x138 = -483003291;
volatile uint32_t x141 = 32991592U;
static int8_t x144 = 1;
volatile uint32_t x148 = 498859U;
volatile uint64_t t37 = 141119162LLU;
int64_t x158 = -777499449326LL;
int32_t x163 = INT32_MIN;
volatile int64_t x166 = INT64_MIN;
volatile int64_t t42 = 829197882950653LL;
int16_t x178 = 9442;
static volatile uint64_t t43 = 288319412073683007LLU;
int32_t x182 = -1;
uint32_t x186 = UINT32_MAX;
volatile int32_t x194 = INT32_MAX;
volatile int32_t t47 = 4;
int32_t x200 = INT32_MIN;
int16_t x205 = 802;
static volatile int16_t x208 = INT16_MIN;
static uint64_t t50 = 61400733916415489LLU;
volatile int32_t x212 = INT32_MIN;
static int8_t x219 = 14;
static volatile int16_t x220 = INT16_MIN;
int64_t t53 = 30805790333368LL;
volatile int64_t t54 = -193009630500765LL;
volatile int64_t x225 = INT64_MIN;
int64_t x232 = INT64_MAX;
int32_t t57 = 170815;
int64_t x237 = INT64_MAX;
volatile int8_t x238 = INT8_MIN;
volatile int16_t x246 = INT16_MIN;
int16_t x247 = 391;
volatile int32_t t60 = -2307;
uint16_t x254 = 0U;
uint8_t x260 = UINT8_MAX;
int64_t x273 = INT64_MAX;
int8_t x275 = -1;
int64_t x277 = 3367709LL;
uint8_t x288 = 1U;
volatile int8_t x290 = INT8_MIN;
volatile int8_t x301 = INT8_MAX;
int32_t x302 = INT32_MAX;
int16_t x314 = INT16_MIN;
volatile int64_t x316 = 1115616LL;
int8_t x334 = INT8_MIN;
volatile uint32_t x336 = 4827U;
int32_t x339 = -1;
int32_t x345 = INT32_MAX;
int16_t x347 = 1;
volatile int16_t x354 = 11;
uint16_t x363 = 203U;
int64_t t89 = -5LL;
int32_t x369 = 6249627;
int16_t x372 = INT16_MIN;
uint64_t x380 = 692667269261969LLU;
uint64_t x381 = 163895387030873LLU;
volatile int8_t x387 = -1;
uint64_t x389 = UINT64_MAX;
static int16_t x390 = INT16_MIN;
int64_t x392 = INT64_MIN;
int8_t x400 = INT8_MAX;
int32_t x403 = -1;
uint32_t t99 = 145364U;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	volatile int32_t x2 = INT32_MAX;
	static int8_t x3 = INT8_MIN;
	volatile uint8_t x4 = 1U;
	volatile int64_t t0 = INT64_MAX;

	t0 = ((x1|x2)-(x3&x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int32_t x6 = 1;
	static int16_t x7 = INT16_MIN;
	uint64_t x8 = 4LLU;

	t1 = ((x5|x6)-(x7&x8));

	if (t1 != 2147483647LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 3U;
	uint32_t x10 = 1568U;
	volatile uint8_t x11 = 0U;
	static int16_t x12 = INT16_MAX;

	t2 = ((x9|x10)-(x11&x12));

	if (t2 != 1571U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1232U;
	static int16_t x14 = -18;
	int32_t x15 = 981078;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -7748055;

	t3 = ((x13|x14)-(x15&x16));

	if (t3 != -88) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	int64_t x18 = INT64_MIN;
	static volatile uint32_t x19 = UINT32_MAX;
	uint8_t x20 = UINT8_MAX;
	int64_t t4 = 15788160990648032LL;

	t4 = ((x17|x18)-(x19&x20));

	if (t4 != -256LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 30496U;
	int16_t x22 = INT16_MAX;
	int16_t x23 = INT16_MAX;
	uint8_t x24 = 7U;
	volatile int32_t t5 = 120;

	t5 = ((x21|x22)-(x23&x24));

	if (t5 != 32760) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	int32_t x27 = 10426842;
	static volatile uint64_t x28 = 301637439234452LLU;
	volatile uint64_t t6 = 67786386443LLU;

	t6 = ((x25|x26)-(x27&x28));

	if (t6 != 18446744073708863088LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static uint16_t x31 = UINT16_MAX;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = -14529;

	t7 = ((x29|x30)-(x31&x32));

	if (t7 != -33015) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1;
	int32_t x35 = -10;
	static volatile int32_t t8 = 3;

	t8 = ((x33|x34)-(x35&x36));

	if (t8 != -32759) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint32_t x38 = 11248003U;
	uint16_t x39 = 9U;
	int16_t x40 = -1;
	static uint32_t t9 = 145U;

	t9 = ((x37|x38)-(x39&x40));

	if (t9 != 2158731642U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 6;
	uint64_t x42 = UINT64_MAX;
	static int32_t x43 = INT32_MAX;
	int16_t x44 = -1;
	uint64_t t10 = 6791237970173748LLU;

	t10 = ((x41|x42)-(x43&x44));

	if (t10 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = -1;
	int32_t x47 = 2993;
	int32_t x48 = -1;
	int32_t t11 = -24;

	t11 = ((x45|x46)-(x47&x48));

	if (t11 != -2994) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -59512555407156028LL;
	int64_t x54 = INT64_MAX;

	t12 = ((x53|x54)-(x55&x56));

	if (t12 != 188599681784000691LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x59 = INT16_MAX;
	volatile int64_t t13 = 7630LL;

	t13 = ((x57|x58)-(x59&x60));

	if (t13 != -40LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 8U;
	static uint16_t x62 = 315U;
	static int32_t x63 = -1;
	uint8_t x64 = 106U;
	static uint32_t t14 = 25833711U;

	t14 = ((x61|x62)-(x63&x64));

	if (t14 != 209U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MAX;
	volatile int64_t x67 = 48LL;
	int64_t x68 = INT64_MIN;

	t15 = ((x65|x66)-(x67&x68));

	if (t15 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MAX;
	uint64_t x72 = 196695633LLU;
	static uint64_t t16 = 2LLU;

	t16 = ((x69|x70)-(x71&x72));

	if (t16 != 18446744073709529518LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 41U;
	uint16_t x74 = UINT16_MAX;
	static int64_t x75 = 17940940LL;
	static int64_t x76 = INT64_MAX;
	volatile int64_t t17 = -3087952244539414LL;

	t17 = ((x73|x74)-(x75&x76));

	if (t17 != -17875405LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x77 = UINT8_MAX;
	static int8_t x79 = INT8_MIN;
	volatile uint32_t t18 = 102328U;

	t18 = ((x77|x78)-(x79&x80));

	if (t18 != 50153343U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	int32_t x82 = 3;
	volatile uint32_t x83 = 672089789U;
	static volatile uint32_t t19 = 11600907U;

	t19 = ((x81|x82)-(x83&x84));

	if (t19 != 4294294994U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	int16_t x86 = INT16_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	static int16_t x88 = INT16_MIN;

	t20 = ((x85|x86)-(x87&x88));

	if (t20 != 32767LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x90 = INT16_MIN;
	static volatile uint32_t x91 = 2864U;
	uint16_t x92 = 31572U;
	uint32_t t21 = 35U;

	t21 = ((x89|x90)-(x91&x92));

	if (t21 != 4294964336U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	uint16_t x94 = 13425U;
	int64_t x95 = INT64_MIN;
	uint64_t x96 = 98755946619822LLU;
	volatile uint64_t t22 = 6421569960630205LLU;

	t22 = ((x93|x94)-(x95&x96));

	if (t22 != 65535LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -7;
	int32_t x98 = 641;
	int16_t x100 = -5960;
	volatile int32_t t23 = 196734;

	t23 = ((x97|x98)-(x99&x100));

	if (t23 != -191) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = -3634177420LL;
	int8_t x103 = INT8_MIN;
	uint64_t t24 = 4082116199685LLU;

	t24 = ((x101|x102)-(x103&x104));

	if (t24 != 18446619432016364791LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MAX;
	volatile int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	uint8_t x108 = 60U;
	int64_t t25 = -61022882075178323LL;

	t25 = ((x105|x106)-(x107&x108));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile int32_t x110 = -1;
	static int64_t x111 = 19956431593LL;
	volatile int64_t t26 = -100988LL;

	t26 = ((x109|x110)-(x111&x112));

	if (t26 != -31466LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 0U;
	int16_t x115 = INT16_MIN;
	static volatile int8_t x116 = 0;

	t27 = ((x113|x114)-(x115&x116));

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	uint32_t x118 = 1419U;
	static volatile uint8_t x119 = UINT8_MAX;
	volatile uint32_t t28 = 2003396U;

	t28 = ((x117|x118)-(x119&x120));

	if (t28 != 32512U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	static volatile int8_t x122 = -14;
	static int32_t x123 = INT32_MAX;
	int32_t x124 = INT32_MIN;

	t29 = ((x121|x122)-(x123&x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = 17518;
	uint64_t x126 = UINT64_MAX;
	static volatile int8_t x127 = -1;
	uint64_t x128 = 352224759461966LLU;
	volatile uint64_t t30 = 12LLU;

	t30 = ((x125|x126)-(x127&x128));

	if (t30 != 18446391848950089649LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t31 = 380101LLU;

	t31 = ((x129|x130)-(x131&x132));

	if (t31 != 9223370990772068608LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = 0LL;
	uint8_t x134 = UINT8_MAX;

	t32 = ((x133|x134)-(x135&x136));

	if (t32 != -2147450625LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int16_t x139 = INT16_MIN;
	volatile int8_t x140 = 1;
	static volatile int32_t t33 = -16796;

	t33 = ((x137|x138)-(x139&x140));

	if (t33 != -483003291) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x142 = INT8_MAX;
	static int32_t x143 = -10;
	uint32_t t34 = 523718451U;

	t34 = ((x141|x142)-(x143&x144));

	if (t34 != 32991615U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 34U;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	uint32_t t35 = 407950U;

	t35 = ((x145|x146)-(x147&x148));

	if (t35 != 4294443042U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 11055U;
	int64_t x150 = 116663854065669LL;
	volatile int8_t x151 = 1;
	uint16_t x152 = 24774U;
	static int64_t t36 = 7673537714LL;

	t36 = ((x149|x150)-(x151&x152));

	if (t36 != 116663854066479LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 86833LLU;
	static int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MAX;
	volatile int8_t x156 = 36;

	t37 = ((x153|x154)-(x155&x156));

	if (t37 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -1537133886566LL;
	uint8_t x159 = 53U;
	static volatile int8_t x160 = INT8_MAX;
	static int64_t t38 = 7385LL;

	t38 = ((x157|x158)-(x159&x160));

	if (t38 != -158981952667LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = -1LL;
	uint8_t x162 = 4U;
	int32_t x164 = INT32_MAX;
	int64_t t39 = 1836343626799366494LL;

	t39 = ((x161|x162)-(x163&x164));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = INT64_MAX;
	uint16_t x167 = 257U;
	static uint64_t x168 = UINT64_MAX;
	static uint64_t t40 = 249LLU;

	t40 = ((x165|x166)-(x167&x168));

	if (t40 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = 5;
	uint8_t x170 = 10U;
	uint8_t x171 = UINT8_MAX;
	volatile int64_t x172 = 3562LL;
	volatile int64_t t41 = 1LL;

	t41 = ((x169|x170)-(x171&x172));

	if (t41 != -219LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -5;
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MAX;
	int32_t x176 = 107566932;

	t42 = ((x173|x174)-(x175&x176));

	if (t42 != -107566937LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x177 = UINT8_MAX;
	volatile uint64_t x179 = UINT64_MAX;
	volatile uint16_t x180 = 1U;

	t43 = ((x177|x178)-(x179&x180));

	if (t43 != 9470LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = 491;
	int8_t x183 = 1;
	uint16_t x184 = 15U;
	volatile int32_t t44 = 569298291;

	t44 = ((x181|x182)-(x183&x184));

	if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	int64_t x187 = 214359LL;
	volatile int32_t x188 = INT32_MIN;
	int64_t t45 = 2505528995LL;

	t45 = ((x185|x186)-(x187&x188));

	if (t45 != 4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	volatile int32_t x190 = -14366395;
	int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t46 = INT32_MAX;

	t46 = ((x189|x190)-(x191&x192));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x193 = 78U;
	int8_t x195 = INT8_MIN;
	volatile int16_t x196 = INT16_MAX;

	t47 = ((x193|x194)-(x195&x196));

	if (t47 != 2147451007) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = 363465644512277LL;
	uint16_t x198 = 40U;
	volatile uint32_t x199 = 1588074432U;
	int64_t t48 = -1211875LL;

	t48 = ((x197|x198)-(x199&x200));

	if (t48 != 363465644512317LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x201 = UINT64_MAX;
	uint8_t x202 = 44U;
	volatile uint8_t x203 = 21U;
	volatile int16_t x204 = -1;
	volatile uint64_t t49 = 22271481991442011LLU;

	t49 = ((x201|x202)-(x203&x204));

	if (t49 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x206 = UINT8_MAX;
	uint64_t x207 = 7034LLU;

	t50 = ((x205|x206)-(x207&x208));

	if (t50 != 1023LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MIN;
	static int16_t x210 = -1;
	static int8_t x211 = INT8_MAX;
	volatile int32_t t51 = 455;

	t51 = ((x209|x210)-(x211&x212));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -6876;
	int64_t x214 = INT64_MIN;
	volatile int16_t x215 = -1;
	static volatile int32_t x216 = INT32_MAX;
	volatile int64_t t52 = -75201724436768065LL;

	t52 = ((x213|x214)-(x215&x216));

	if (t52 != -2147490523LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x217 = -1LL;
	uint8_t x218 = UINT8_MAX;

	t53 = ((x217|x218)-(x219&x220));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x221 = 1199517159U;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = 359153U;
	volatile int64_t x224 = INT64_MIN;

	t54 = ((x221|x222)-(x223&x224));

	if (t54 != 4294967271LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x226 = UINT64_MAX;
	static volatile uint16_t x227 = 18U;
	int16_t x228 = INT16_MAX;
	volatile uint64_t t55 = 26493144073311874LLU;

	t55 = ((x225|x226)-(x227&x228));

	if (t55 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	static int16_t x231 = INT16_MAX;
	int64_t t56 = 4LL;

	t56 = ((x229|x230)-(x231&x232));

	if (t56 != -32895LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -7;
	static int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;

	t57 = ((x233|x234)-(x235&x236));

	if (t57 != 32761) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x239 = 478154;
	int64_t x240 = -1LL;
	volatile int64_t t58 = 456867208177613840LL;

	t58 = ((x237|x238)-(x239&x240));

	if (t58 != -478155LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = 2;
	static uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MAX;
	volatile int32_t t59 = -201682259;

	t59 = ((x241|x242)-(x243&x244));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -1;
	int16_t x248 = INT16_MIN;

	t60 = ((x245|x246)-(x247&x248));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x249 = -1;
	int64_t x250 = INT64_MIN;
	static int16_t x251 = 8888;
	static int8_t x252 = -1;
	volatile int64_t t61 = -2432LL;

	t61 = ((x249|x250)-(x251&x252));

	if (t61 != -8889LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x253 = INT8_MAX;
	static uint8_t x255 = 4U;
	uint64_t x256 = UINT64_MAX;
	uint64_t t62 = 234LLU;

	t62 = ((x253|x254)-(x255&x256));

	if (t62 != 123LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = -1LL;
	volatile int32_t x258 = -13;
	int16_t x259 = INT16_MIN;
	static volatile int64_t t63 = 46886443403LL;

	t63 = ((x257|x258)-(x259&x260));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x261 = -154415;
	int32_t x262 = INT32_MAX;
	int32_t x263 = 21116296;
	volatile int16_t x264 = INT16_MAX;
	int32_t t64 = 0;

	t64 = ((x261|x262)-(x263&x264));

	if (t64 != -13705) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 14LLU;
	int8_t x266 = INT8_MIN;
	volatile int32_t x267 = 5643879;
	uint16_t x268 = UINT16_MAX;
	uint64_t t65 = 2519664055999LLU;

	t65 = ((x265|x266)-(x267&x268));

	if (t65 != 18446744073709543719LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	volatile uint64_t x270 = 13446335025978LLU;
	static int32_t x271 = 1;
	static volatile int32_t x272 = -981;
	uint64_t t66 = 27LLU;

	t66 = ((x269|x270)-(x271&x272));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x274 = INT32_MIN;
	int8_t x276 = INT8_MAX;
	int64_t t67 = 102800LL;

	t67 = ((x273|x274)-(x275&x276));

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x278 = UINT16_MAX;
	uint8_t x279 = 94U;
	static int64_t x280 = INT64_MAX;
	volatile int64_t t68 = 148230134369256506LL;

	t68 = ((x277|x278)-(x279&x280));

	if (t68 != 3407777LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = -1;
	int8_t x282 = -7;
	uint32_t x283 = 5U;
	static int16_t x284 = INT16_MAX;
	volatile uint32_t t69 = 11365U;

	t69 = ((x281|x282)-(x283&x284));

	if (t69 != 4294967290U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = 16;
	volatile uint16_t x286 = 4U;
	static int8_t x287 = INT8_MIN;
	volatile int32_t t70 = 80965627;

	t70 = ((x285|x286)-(x287&x288));

	if (t70 != 20) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MAX;
	int64_t x291 = -64813601LL;
	volatile int32_t x292 = -1;
	int64_t t71 = -19151796334LL;

	t71 = ((x289|x290)-(x291&x292));

	if (t71 != 64813600LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x293 = INT16_MIN;
	volatile int8_t x294 = INT8_MAX;
	volatile int16_t x295 = INT16_MIN;
	static volatile int64_t x296 = INT64_MIN;
	int64_t t72 = 0LL;

	t72 = ((x293|x294)-(x295&x296));

	if (t72 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 11435U;
	int16_t x298 = -1;
	static volatile int16_t x299 = INT16_MIN;
	static int32_t x300 = -1;
	int32_t t73 = 747;

	t73 = ((x297|x298)-(x299&x300));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = INT32_MIN;
	volatile uint64_t t74 = 0LLU;

	t74 = ((x301|x302)-(x303&x304));

	if (t74 != 4294967295LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = 0U;
	int8_t x306 = INT8_MIN;
	uint8_t x307 = 49U;
	int64_t x308 = -16LL;
	int64_t t75 = -128287971329LL;

	t75 = ((x305|x306)-(x307&x308));

	if (t75 != -176LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x309 = 172U;
	int64_t x310 = -1LL;
	static int16_t x311 = 45;
	int16_t x312 = -1;
	int64_t t76 = 20170964876757LL;

	t76 = ((x309|x310)-(x311&x312));

	if (t76 != -46LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 5U;
	int32_t x315 = -1;
	volatile int64_t t77 = -8362207LL;

	t77 = ((x313|x314)-(x315&x316));

	if (t77 != -1148379LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MAX;
	int64_t x319 = -213485068LL;
	int32_t x320 = -1;
	int64_t t78 = -62097961130558574LL;

	t78 = ((x317|x318)-(x319&x320));

	if (t78 != 213485195LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x321 = 1;
	int32_t x322 = -1041126312;
	int16_t x323 = -17;
	int8_t x324 = INT8_MAX;
	volatile int32_t t79 = -10827;

	t79 = ((x321|x322)-(x323&x324));

	if (t79 != -1041126422) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = 116;
	uint16_t x326 = 2U;
	uint32_t x327 = 11970U;
	int16_t x328 = INT16_MIN;
	uint32_t t80 = 197U;

	t80 = ((x325|x326)-(x327&x328));

	if (t80 != 118U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x329 = 44603969789320LL;
	uint64_t x330 = 434835LLU;
	static uint16_t x331 = 14U;
	int64_t x332 = INT64_MIN;
	uint64_t t81 = 12491976198732LLU;

	t81 = ((x329|x330)-(x331&x332));

	if (t81 != 44603969830811LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x333 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	uint32_t t82 = 16U;

	t82 = ((x333|x334)-(x335&x336));

	if (t82 != 4294967168U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 0U;
	uint8_t x338 = 1U;
	int64_t x340 = 1LL;
	volatile int64_t t83 = -30353713002678884LL;

	t83 = ((x337|x338)-(x339&x340));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = INT16_MIN;
	static int16_t x342 = INT16_MIN;
	static int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t84 = 453;

	t84 = ((x341|x342)-(x343&x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x346 = 113U;
	static int16_t x348 = INT16_MIN;
	static volatile int32_t t85 = INT32_MAX;

	t85 = ((x345|x346)-(x347&x348));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x349 = 0U;
	volatile int8_t x350 = -39;
	int32_t x351 = 483427;
	static int8_t x352 = -1;
	int32_t t86 = 32314794;

	t86 = ((x349|x350)-(x351&x352));

	if (t86 != -483466) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -30;
	int8_t x355 = 27;
	static volatile uint8_t x356 = 2U;
	int32_t t87 = 0;

	t87 = ((x353|x354)-(x355&x356));

	if (t87 != -23) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x357 = INT32_MIN;
	uint64_t x358 = 2059903903637956LLU;
	static int16_t x359 = INT16_MIN;
	uint8_t x360 = 0U;
	uint64_t t88 = 818644509986LLU;

	t88 = ((x357|x358)-(x359&x360));

	if (t88 != 18446744072643322308LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = -1LL;
	static int8_t x362 = -1;
	volatile int64_t x364 = INT64_MIN;

	t89 = ((x361|x362)-(x363&x364));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x365 = 1U;
	volatile uint64_t x366 = UINT64_MAX;
	volatile int8_t x367 = INT8_MIN;
	static int64_t x368 = INT64_MIN;
	volatile uint64_t t90 = 249842379LLU;

	t90 = ((x365|x366)-(x367&x368));

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	volatile int32_t t91 = -271132;

	t91 = ((x369|x370)-(x371&x372));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MAX;
	uint8_t x374 = 72U;
	volatile int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;
	int64_t t92 = 1006LL;

	t92 = ((x373|x374)-(x375&x376));

	if (t92 != 2147516415LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 2124285LLU;
	uint64_t x378 = 21980708472142565LLU;
	int8_t x379 = INT8_MIN;
	uint64_t t93 = 30537085LLU;

	t93 = ((x377|x378)-(x379&x380));

	if (t93 != 21288041202897277LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x382 = -1;
	int8_t x383 = INT8_MIN;
	static uint64_t x384 = 865619LLU;
	uint64_t t94 = 29LLU;

	t94 = ((x381|x382)-(x383&x384));

	if (t94 != 18446744073708686079LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x385 = INT32_MIN;
	uint64_t x386 = UINT64_MAX;
	uint64_t x388 = 496270614893753638LLU;
	static volatile uint64_t t95 = 0LLU;

	t95 = ((x385|x386)-(x387&x388));

	if (t95 != 17950473458815797977LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x391 = -936721LL;
	uint64_t t96 = 4083939183863LLU;

	t96 = ((x389|x390)-(x391&x392));

	if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x393 = INT8_MIN;
	int64_t x394 = -1LL;
	uint8_t x395 = 82U;
	static int64_t x396 = INT64_MIN;
	volatile int64_t t97 = 41146565LL;

	t97 = ((x393|x394)-(x395&x396));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MAX;
	volatile int64_t x399 = -1LL;
	int64_t t98 = -114013LL;

	t98 = ((x397|x398)-(x399&x400));

	if (t98 != 4294967168LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MIN;
	uint32_t x402 = 54236U;
	int16_t x404 = INT16_MIN;

	t99 = ((x401|x402)-(x403&x404));

	if (t99 != 2147570652U) { NG(); } else { ; }
	
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

