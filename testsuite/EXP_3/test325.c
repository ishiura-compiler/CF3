#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 0U;
static uint16_t x17 = 6U;
int64_t x18 = 31LL;
volatile int64_t t3 = 892846970351549183LL;
int32_t x30 = INT32_MAX;
uint8_t x34 = 49U;
static uint16_t x37 = 0U;
int32_t x44 = -60387331;
uint64_t t9 = 0LLU;
volatile int64_t x49 = 3672415064LL;
volatile uint8_t x54 = 3U;
int8_t x63 = -1;
static uint64_t x64 = 61435LLU;
int16_t x67 = -1206;
uint8_t x80 = 29U;
uint16_t x83 = UINT16_MAX;
uint64_t x84 = UINT64_MAX;
int64_t x101 = 139502LL;
int64_t t23 = 53755680LL;
int64_t x106 = INT64_MIN;
static uint16_t x108 = UINT16_MAX;
volatile uint32_t x109 = 114U;
int32_t x115 = INT32_MIN;
static int16_t x135 = INT16_MIN;
uint16_t x136 = 711U;
static volatile int32_t t32 = -527271;
int32_t x145 = 2959249;
int32_t x146 = INT32_MAX;
uint32_t x147 = UINT32_MAX;
int32_t x159 = -1;
int16_t x171 = -1780;
uint64_t t37 = 369LLU;
volatile int16_t x174 = 15731;
uint64_t x176 = UINT64_MAX;
static uint64_t t38 = 31232398773987LLU;
int64_t x180 = INT64_MAX;
int64_t x181 = INT64_MIN;
int32_t x183 = INT32_MIN;
static int16_t x191 = -36;
static int8_t x193 = INT8_MIN;
uint8_t x197 = 6U;
int64_t t44 = -14122206417056081LL;
int16_t x205 = INT16_MIN;
volatile uint32_t t47 = 178U;
uint32_t x222 = 2629457U;
static volatile int64_t t49 = -223562463111510LL;
uint32_t x230 = 5436U;
uint8_t x232 = 24U;
uint16_t x240 = UINT16_MAX;
static int64_t x245 = 493424150416210LL;
static int8_t x247 = -24;
volatile uint8_t x257 = 5U;
uint64_t x259 = UINT64_MAX;
int32_t x268 = INT32_MAX;
volatile int32_t x271 = INT32_MIN;
static int8_t x273 = 42;
int16_t x279 = -1;
static int64_t x281 = INT64_MIN;
volatile int64_t t62 = -34394454LL;
static uint16_t x286 = 1610U;
int8_t x289 = INT8_MIN;
static int32_t x291 = INT32_MIN;
volatile int8_t x298 = INT8_MIN;
volatile int64_t t66 = -495309347380762953LL;
int32_t x301 = -212;
static int32_t t67 = -448228868;
static volatile int64_t x311 = -1923483289331195131LL;
static int16_t x314 = INT16_MIN;
uint64_t x318 = 228LLU;
int8_t x324 = INT8_MIN;
volatile int32_t t72 = -4;
uint8_t x326 = 0U;
uint16_t x338 = 2U;
volatile int32_t x345 = INT32_MAX;
volatile int8_t x346 = -1;
uint32_t x348 = 424564U;
int16_t x350 = -45;
uint16_t x352 = UINT16_MAX;
int8_t x353 = INT8_MAX;
uint64_t x365 = 243LLU;
int8_t x366 = INT8_MAX;
uint8_t x375 = 3U;
uint64_t x376 = 973815473848005LLU;
uint64_t x382 = 192LLU;
uint64_t x383 = UINT64_MAX;
uint32_t x386 = 115243218U;
volatile int64_t t87 = -159726264433602687LL;
static volatile uint8_t x398 = 71U;
int8_t x401 = INT8_MIN;
static int16_t x405 = -1;
int16_t x417 = INT16_MIN;
static int64_t t93 = 23521794403245LL;
int32_t x425 = INT32_MAX;
volatile int64_t x428 = -1381240726964193837LL;
int8_t x432 = INT8_MIN;
volatile int32_t x433 = -1;
volatile int64_t t96 = 0LL;
uint64_t x441 = 1033156298LLU;
volatile uint8_t x445 = 51U;


void f0(void) {
	uint64_t x2 = 6341923LLU;
	int16_t x3 = -1;
	int32_t x4 = -71;
	volatile uint64_t t0 = 521582LLU;

	t0 = ((x1|x2)^(x3-x4));

	if (t0 != 6341989LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x6 = -1;
	static int8_t x7 = -1;
	static int64_t x8 = -1LL;
	static int64_t t1 = -2030726524LL;

	t1 = ((x5|x6)^(x7-x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 8LLU;
	int16_t x14 = -8697;
	int16_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	volatile uint64_t t2 = 14579290928990LLU;

	t2 = ((x13|x14)^(x15-x16));

	if (t2 != 18446744073709542927LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x19 = -10370;
	volatile int64_t x20 = INT64_MIN;

	t3 = ((x17|x18)^(x19-x20));

	if (t3 != 9223372036854765409LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	static uint64_t x22 = 17670LLU;
	int8_t x23 = INT8_MIN;
	uint64_t x24 = 655801LLU;
	uint64_t t4 = 16268444094LLU;

	t4 = ((x21|x22)^(x23-x24));

	if (t4 != 655937LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int8_t x31 = -1;
	int8_t x32 = INT8_MAX;
	volatile int32_t t5 = -933325169;

	t5 = ((x29|x30)^(x31-x32));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = INT8_MIN;
	int16_t x35 = -127;
	uint64_t x36 = 5734124575824LLU;
	uint64_t t6 = 1628025293566064LLU;

	t6 = ((x33|x34)^(x35-x36));

	if (t6 != 5734124575872LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = -1;
	int16_t x39 = INT16_MIN;
	static int16_t x40 = 1222;
	static int32_t t7 = 588195354;

	t7 = ((x37|x38)^(x39-x40));

	if (t7 != 33989) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 166U;
	volatile uint64_t x42 = 165838658LLU;
	uint32_t x43 = 6U;
	uint64_t t8 = 3042895328503LLU;

	t8 = ((x41|x42)^(x43-x44));

	if (t8 != 175837167LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -74804101534750608LL;
	uint64_t x46 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	int8_t x48 = -1;

	t9 = ((x45|x46)^(x47-x48));

	if (t9 != 32766LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = -1;
	static int8_t x51 = 1;
	int16_t x52 = INT16_MAX;
	int64_t t10 = -6217462939LL;

	t10 = ((x49|x50)^(x51-x52));

	if (t10 != 32765LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	int16_t x55 = -1;
	volatile int8_t x56 = INT8_MIN;
	int64_t t11 = 759939962826164LL;

	t11 = ((x53|x54)^(x55-x56));

	if (t11 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 16681015;
	int32_t x58 = INT32_MIN;
	uint16_t x59 = 4226U;
	volatile int16_t x60 = INT16_MAX;
	int32_t t12 = -163;

	t12 = ((x57|x58)^(x59-x60));

	if (t12 != 2130778292) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 7U;
	uint16_t x62 = 10U;
	static uint64_t t13 = 243414845690795745LLU;

	t13 = ((x61|x62)^(x63-x64));

	if (t13 != 18446744073709490187LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x65 = UINT8_MAX;
	uint32_t x66 = UINT32_MAX;
	uint8_t x68 = 40U;
	volatile uint32_t t14 = 20U;

	t14 = ((x65|x66)^(x67-x68));

	if (t14 != 1245U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = INT8_MIN;
	volatile int8_t x70 = -42;
	int32_t x71 = INT32_MIN;
	int8_t x72 = -1;
	static volatile int32_t t15 = 14372260;

	t15 = ((x69|x70)^(x71-x72));

	if (t15 != 2147483607) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -60;
	uint32_t x74 = 1842U;
	uint64_t x75 = 42709265082LLU;
	int32_t x76 = 2387;
	volatile uint64_t t16 = 998256048646551624LLU;

	t16 = ((x73|x74)^(x75-x76));

	if (t16 != 38895115921LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MIN;
	volatile int32_t t17 = 0;

	t17 = ((x77|x78)^(x79-x80));

	if (t17 != 32796) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	volatile uint16_t x82 = 3U;
	volatile uint64_t t18 = 5LLU;

	t18 = ((x81|x82)^(x83-x84));

	if (t18 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 2042;
	static volatile int8_t x86 = -1;
	static int16_t x87 = -4;
	int32_t x88 = INT32_MIN;
	int32_t t19 = 1150418;

	t19 = ((x85|x86)^(x87-x88));

	if (t19 != -2147483645) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MIN;
	volatile int8_t x91 = 2;
	int8_t x92 = INT8_MAX;
	int64_t t20 = -108LL;

	t20 = ((x89|x90)^(x91-x92));

	if (t20 != 2147483523LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	uint8_t x94 = 22U;
	static int8_t x95 = 1;
	int32_t x96 = -1104317;
	volatile int32_t t21 = 314747985;

	t21 = ((x93|x94)^(x95-x96));

	if (t21 != -1104319) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 833997575;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MAX;
	static uint32_t x100 = UINT32_MAX;
	volatile int64_t t22 = INT64_MAX;

	t22 = ((x97|x98)^(x99-x100));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x102 = INT16_MIN;
	uint32_t x103 = 2U;
	static uint16_t x104 = UINT16_MAX;

	t23 = ((x101|x102)^(x103-x104));

	if (t23 != -4294926099LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	uint64_t x107 = 60590261LLU;
	volatile uint64_t t24 = 2LLU;

	t24 = ((x105|x106)^(x107-x108));

	if (t24 != 18446744073649026889LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x110 = INT64_MAX;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 1321944LLU;
	uint64_t t25 = 158LLU;

	t25 = ((x109|x110)^(x111-x112));

	if (t25 != 9223372036856097879LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MIN;
	volatile int8_t x114 = INT8_MIN;
	static uint32_t x116 = 29443362U;
	uint32_t t26 = 1965U;

	t26 = ((x113|x114)^(x115-x116));

	if (t26 != 2176927070U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = -1;
	int8_t x119 = INT8_MAX;
	int8_t x120 = -1;
	volatile int64_t t27 = -552697253LL;

	t27 = ((x117|x118)^(x119-x120));

	if (t27 != -129LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -2002739646591LL;
	uint64_t x122 = 29826366354569853LLU;
	uint16_t x123 = 1U;
	int8_t x124 = INT8_MAX;
	uint64_t t28 = 101994881693303260LLU;

	t28 = ((x121|x122)^(x123-x124));

	if (t28 != 1178097467519LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -1;
	uint8_t x126 = UINT8_MAX;
	uint16_t x127 = UINT16_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t29 = 4423509LLU;

	t29 = ((x125|x126)^(x127-x128));

	if (t29 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = INT32_MAX;
	volatile int16_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	volatile int8_t x132 = 1;
	static uint64_t t30 = 520237212524502798LLU;

	t30 = ((x129|x130)^(x131-x132));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = UINT8_MAX;
	static int32_t x134 = -1;
	volatile int32_t t31 = -14288;

	t31 = ((x133|x134)^(x135-x136));

	if (t31 != 33478) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x141 = 11;
	static uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MIN;

	t32 = ((x141|x142)^(x143-x144));

	if (t32 != -32897) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x148 = 576U;
	uint32_t t33 = 9U;

	t33 = ((x145|x146)^(x147-x148));

	if (t33 != 2147484224U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MAX;
	volatile int32_t x158 = INT32_MIN;
	static uint32_t x160 = UINT32_MAX;
	int64_t t34 = -1477590462LL;

	t34 = ((x157|x158)^(x159-x160));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x161 = 5U;
	static volatile uint16_t x162 = 879U;
	static volatile int32_t x163 = -219129;
	volatile uint8_t x164 = 0U;
	int32_t t35 = 2700413;

	t35 = ((x161|x162)^(x163-x164));

	if (t35 != -218264) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = -5922;
	int32_t x166 = 1976;
	int16_t x167 = 50;
	int32_t x168 = -155303776;
	volatile int32_t t36 = 139;

	t36 = ((x165|x166)^(x167-x168));

	if (t36 != -155299732) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int8_t x170 = INT8_MIN;
	static volatile uint64_t x172 = 1899415120LLU;

	t37 = ((x169|x170)^(x171-x172));

	if (t37 != 1899416899LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MAX;
	volatile uint16_t x175 = 0U;

	t38 = ((x173|x174)^(x175-x176));

	if (t38 != 15742LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x177 = 232319767LLU;
	int8_t x178 = -1;
	int64_t x179 = -1LL;
	static uint64_t t39 = 449872298700LLU;

	t39 = ((x177|x178)^(x179-x180));

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x182 = UINT8_MAX;
	int32_t x184 = -1;
	int64_t t40 = 116778112610LL;

	t40 = ((x181|x182)^(x183-x184));

	if (t40 != 9223372034707292414LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = -162;
	uint32_t x186 = 1928318781U;
	static uint32_t x187 = UINT32_MAX;
	uint32_t x188 = 37207337U;
	volatile uint32_t t41 = 530U;

	t41 = ((x185|x186)^(x187-x188));

	if (t41 != 37207465U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = 0;
	uint32_t x190 = 218490014U;
	static volatile int16_t x192 = INT16_MIN;
	volatile uint32_t t42 = 39476U;

	t42 = ((x189|x190)^(x191-x192));

	if (t42 != 218471234U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x194 = -12;
	static uint8_t x195 = 1U;
	static volatile uint8_t x196 = 2U;
	volatile int32_t t43 = 129503475;

	t43 = ((x193|x194)^(x195-x196));

	if (t43 != 11) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x198 = 7378U;
	int64_t x199 = 2546208LL;
	volatile uint8_t x200 = 94U;

	t44 = ((x197|x198)^(x199-x200));

	if (t44 != 2540820LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MIN;
	static int32_t x203 = -373241081;
	volatile uint8_t x204 = UINT8_MAX;
	volatile int32_t t45 = -25;

	t45 = ((x201|x202)^(x203-x204));

	if (t45 != 373241224) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = -10;
	int64_t x207 = INT64_MAX;
	uint16_t x208 = 150U;
	volatile int64_t t46 = -47607LL;

	t46 = ((x205|x206)^(x207-x208));

	if (t46 != -9223372036854775649LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x209 = 7U;
	volatile int32_t x210 = -1;
	int16_t x211 = INT16_MIN;
	static uint32_t x212 = 677128520U;

	t47 = ((x209|x210)^(x211-x212));

	if (t47 != 677161287U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x221 = 2233949U;
	static uint64_t x223 = 1885LLU;
	int32_t x224 = INT32_MIN;
	uint64_t t48 = 180347682LLU;

	t48 = ((x221|x222)^(x223-x224));

	if (t48 != 2150242304LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MIN;
	static int16_t x226 = INT16_MIN;
	volatile int32_t x227 = INT32_MAX;
	static volatile uint16_t x228 = 50U;

	t49 = ((x225|x226)^(x227-x228));

	if (t49 != -2147450931LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = 28146U;
	int8_t x231 = INT8_MIN;
	uint32_t t50 = 61583U;

	t50 = ((x229|x230)^(x231-x232));

	if (t50 != 4294935190U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = INT64_MIN;
	int64_t x234 = -1LL;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = INT32_MIN;
	volatile int64_t t51 = 51495768860LL;

	t51 = ((x233|x234)^(x235-x236));

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = 704340167;
	static uint16_t x238 = 2U;
	uint32_t x239 = 0U;
	volatile uint32_t t52 = 1923469520U;

	t52 = ((x237|x238)^(x239-x240));

	if (t52 != 3590611142U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MAX;
	volatile uint8_t x242 = UINT8_MAX;
	volatile uint64_t x243 = UINT64_MAX;
	int32_t x244 = INT32_MIN;
	volatile uint64_t t53 = 5628805423447250738LLU;

	t53 = ((x241|x242)^(x243-x244));

	if (t53 != 2147483392LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x246 = INT16_MIN;
	int16_t x248 = -14;
	int64_t t54 = 120LL;

	t54 = ((x245|x246)^(x247-x248));

	if (t54 != 29860LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -2922;
	volatile int16_t x250 = -9;
	int8_t x251 = INT8_MIN;
	volatile uint16_t x252 = 1U;
	int32_t t55 = -727;

	t55 = ((x249|x250)^(x251-x252));

	if (t55 != 136) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x258 = 63739U;
	volatile int16_t x260 = INT16_MIN;
	uint64_t t56 = 8464373935LLU;

	t56 = ((x257|x258)^(x259-x260));

	if (t56 != 34560LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x261 = INT32_MIN;
	static uint8_t x262 = 88U;
	int64_t x263 = -1LL;
	uint32_t x264 = 222U;
	volatile int64_t t57 = -170LL;

	t57 = ((x261|x262)^(x263-x264));

	if (t57 != 2147483513LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = -1;
	int16_t x266 = INT16_MAX;
	int32_t x267 = 11;
	volatile int32_t t58 = 1;

	t58 = ((x265|x266)^(x267-x268));

	if (t58 != 2147483635) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = -1;
	int16_t x270 = -1;
	int64_t x272 = INT64_MIN;
	int64_t t59 = -283088645484747800LL;

	t59 = ((x269|x270)^(x271-x272));

	if (t59 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x274 = -1093595854LL;
	volatile uint16_t x275 = UINT16_MAX;
	uint8_t x276 = 1U;
	int64_t t60 = -263481907191382LL;

	t60 = ((x273|x274)^(x275-x276));

	if (t60 != -1093537084LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = -1;
	static int8_t x278 = INT8_MAX;
	int16_t x280 = 1;
	volatile int32_t t61 = 5598;

	t61 = ((x277|x278)^(x279-x280));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x282 = INT32_MIN;
	volatile int16_t x283 = -1;
	volatile int16_t x284 = 15268;

	t62 = ((x281|x282)^(x283-x284));

	if (t62 != 2147468379LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = 9296161580434053LLU;
	static uint64_t x287 = 106LLU;
	int16_t x288 = INT16_MIN;
	uint64_t t63 = 3736963062441444LLU;

	t63 = ((x285|x286)^(x287-x288));

	if (t63 != 9296161580402341LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x290 = -1;
	volatile uint64_t x292 = 7146LLU;
	volatile uint64_t t64 = 5058419586219LLU;

	t64 = ((x289|x290)^(x291-x292));

	if (t64 != 2147490793LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t x294 = -1;
	volatile uint16_t x295 = 17U;
	uint8_t x296 = 1U;
	int32_t t65 = 8625;

	t65 = ((x293|x294)^(x295-x296));

	if (t65 != -17) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;

	t66 = ((x297|x298)^(x299-x300));

	if (t66 != 9223372034707292032LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x302 = UINT8_MAX;
	uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = -125;

	t67 = ((x301|x302)^(x303-x304));

	if (t67 != -381) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x306 = 61LLU;
	int8_t x307 = -1;
	volatile uint16_t x308 = 0U;
	static volatile uint64_t t68 = 151813267264002124LLU;

	t68 = ((x305|x306)^(x307-x308));

	if (t68 != 32706LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x309 = -1;
	static uint16_t x310 = 45U;
	int8_t x312 = 1;
	int64_t t69 = 240762934LL;

	t69 = ((x309|x310)^(x311-x312));

	if (t69 != 1923483289331195131LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x313 = INT8_MAX;
	int32_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t70 = 10U;

	t70 = ((x313|x314)^(x315-x316));

	if (t70 != 4294934655U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int16_t x319 = INT16_MAX;
	static volatile int64_t x320 = INT64_MAX;
	volatile uint64_t t71 = 1312LLU;

	t71 = ((x317|x318)^(x319-x320));

	if (t71 != 9223372036854743012LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x321 = -1;
	int32_t x322 = -15795035;
	static int8_t x323 = INT8_MAX;

	t72 = ((x321|x322)^(x323-x324));

	if (t72 != -256) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = INT16_MIN;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = 1;
	uint32_t t73 = 297510701U;

	t73 = ((x325|x326)^(x327-x328));

	if (t73 != 32766U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = INT8_MIN;
	static int8_t x330 = INT8_MAX;
	static int16_t x331 = INT16_MAX;
	uint32_t x332 = 4U;
	uint32_t t74 = 0U;

	t74 = ((x329|x330)^(x331-x332));

	if (t74 != 4294934532U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = 243;
	int16_t x336 = INT16_MIN;
	uint64_t t75 = 122553300LLU;

	t75 = ((x333|x334)^(x335-x336));

	if (t75 != 18446744073709518604LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = 28;
	int64_t x339 = INT64_MAX;
	int16_t x340 = 1;
	int64_t t76 = 246060590676076291LL;

	t76 = ((x337|x338)^(x339-x340));

	if (t76 != 9223372036854775776LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x347 = 2U;
	volatile uint32_t t77 = 441U;

	t77 = ((x345|x346)^(x347-x348));

	if (t77 != 424561U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x349 = INT8_MIN;
	int8_t x351 = INT8_MAX;
	static int32_t t78 = 93;

	t78 = ((x349|x350)^(x351-x352));

	if (t78 != 65363) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x354 = 1LL;
	static uint64_t x355 = 24735143LLU;
	int32_t x356 = -934538569;
	volatile uint64_t t79 = 1850439495873982LLU;

	t79 = ((x353|x354)^(x355-x356));

	if (t79 != 959273615LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MAX;
	static volatile int8_t x359 = INT8_MIN;
	uint32_t x360 = 258169596U;
	static int64_t t80 = -19704628983388388LL;

	t80 = ((x357|x358)^(x359-x360));

	if (t80 != -9223372032817964165LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = 14;
	int32_t x362 = -183061953;
	static uint64_t x363 = 2LLU;
	int16_t x364 = 229;
	static volatile uint64_t t81 = 2850709627385668771LLU;

	t81 = ((x361|x362)^(x363-x364));

	if (t81 != 183061794LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x367 = -1;
	volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t82 = 132981228863122LLU;

	t82 = ((x365|x366)^(x367-x368));

	if (t82 != 128LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = -1;
	int64_t x370 = INT64_MIN;
	int16_t x371 = 4981;
	int8_t x372 = INT8_MIN;
	int64_t t83 = 142668349894686LL;

	t83 = ((x369|x370)^(x371-x372));

	if (t83 != -5110LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = -1;
	uint64_t t84 = 775LLU;

	t84 = ((x373|x374)^(x375-x376));

	if (t84 != 973815473848001LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = -1;
	int16_t x384 = INT16_MIN;
	uint64_t t85 = 11215767LLU;

	t85 = ((x381|x382)^(x383-x384));

	if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x385 = 3U;
	volatile int8_t x387 = INT8_MIN;
	uint8_t x388 = 7U;
	volatile uint32_t t86 = 942U;

	t86 = ((x385|x386)^(x387-x388));

	if (t86 != 4179724202U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x389 = INT16_MAX;
	int64_t x390 = INT64_MAX;
	static int8_t x391 = INT8_MAX;
	static uint16_t x392 = UINT16_MAX;

	t87 = ((x389|x390)^(x391-x392));

	if (t87 != -9223372036854710401LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x393 = -1;
	uint8_t x394 = 2U;
	static int16_t x395 = -1;
	uint64_t x396 = UINT64_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = ((x393|x394)^(x395-x396));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = INT8_MIN;
	volatile int8_t x399 = INT8_MIN;
	int16_t x400 = -5032;
	int32_t t89 = -2248;

	t89 = ((x397|x398)^(x399-x400));

	if (t89 != -4881) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x402 = INT32_MAX;
	int16_t x403 = INT16_MAX;
	int64_t x404 = -1041900LL;
	int64_t t90 = 2467757LL;

	t90 = ((x401|x402)^(x403-x404));

	if (t90 != -1074668LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x406 = -459545869LL;
	static uint8_t x407 = UINT8_MAX;
	volatile int32_t x408 = -1;
	volatile int64_t t91 = 25LL;

	t91 = ((x405|x406)^(x407-x408));

	if (t91 != -257LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MIN;
	static int32_t x420 = -1;
	static volatile int32_t t92 = -1740;

	t92 = ((x417|x418)^(x419-x420));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x421 = 1515084LL;
	uint8_t x422 = UINT8_MAX;
	uint16_t x423 = 27U;
	static int64_t x424 = 74LL;

	t93 = ((x421|x422)^(x423-x424));

	if (t93 != -1515218LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MAX;
	static volatile int64_t t94 = -20198746272LL;

	t94 = ((x425|x426)^(x427-x428));

	if (t94 != -1381240726964226605LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = INT8_MAX;
	volatile int32_t x430 = INT32_MAX;
	int32_t x431 = 25759;
	int32_t t95 = -244096321;

	t95 = ((x429|x430)^(x431-x432));

	if (t95 != 2147457760) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x434 = INT64_MAX;
	int16_t x435 = 1262;
	int8_t x436 = -10;

	t96 = ((x433|x434)^(x435-x436));

	if (t96 != -1273LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x437 = -1LL;
	int64_t x438 = INT64_MIN;
	static volatile int64_t x439 = 72436LL;
	int8_t x440 = -28;
	int64_t t97 = 6263295736LL;

	t97 = ((x437|x438)^(x439-x440));

	if (t97 != -72465LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x442 = -1;
	int64_t x443 = 1LL;
	uint64_t x444 = UINT64_MAX;
	static volatile uint64_t t98 = 969571027354LLU;

	t98 = ((x441|x442)^(x443-x444));

	if (t98 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x446 = -28283311551714918LL;
	volatile int8_t x447 = -1;
	int64_t x448 = -75180LL;
	volatile int64_t t99 = 9189572249691048LL;

	t99 = ((x445|x446)^(x447-x448));

	if (t99 != -28283311551788016LL) { NG(); } else { ; }
	
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

