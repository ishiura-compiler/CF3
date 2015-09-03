#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile uint64_t t0 = 1360737631514612LLU;
int64_t t1 = 21358599LL;
int8_t x11 = INT8_MAX;
volatile uint32_t t2 = 1U;
static int32_t t3 = 20;
int32_t x17 = INT32_MIN;
int64_t t5 = 3943276LL;
int64_t t6 = -63209998LL;
int8_t x35 = 1;
int64_t x41 = -1LL;
volatile int8_t x43 = -1;
static volatile uint8_t x53 = UINT8_MAX;
volatile uint16_t x64 = UINT16_MAX;
volatile int64_t x65 = INT64_MAX;
int64_t t16 = INT64_MAX;
static uint64_t x71 = 1854LLU;
uint16_t x72 = 11366U;
volatile uint64_t x73 = 1164591382553LLU;
uint8_t x74 = 29U;
uint64_t x75 = 349160674LLU;
uint64_t x76 = UINT64_MAX;
static int32_t x82 = -1975;
uint64_t x83 = UINT64_MAX;
int8_t x95 = 2;
int8_t x96 = INT8_MIN;
int32_t t25 = 648980;
volatile int64_t t26 = -238047038LL;
static int64_t x109 = INT64_MIN;
static uint8_t x111 = 26U;
volatile uint64_t x112 = UINT64_MAX;
int32_t x131 = -1;
int16_t x133 = INT16_MAX;
int16_t x135 = INT16_MIN;
static uint8_t x141 = 0U;
int64_t t34 = 49613675LL;
static uint32_t x150 = 1999270710U;
static int64_t x153 = INT64_MIN;
int64_t x158 = INT64_MIN;
static uint8_t x165 = 104U;
int8_t x167 = INT8_MIN;
int32_t x168 = 185;
volatile int32_t x169 = INT32_MIN;
static int8_t x173 = INT8_MAX;
static uint8_t x174 = 5U;
int32_t t41 = 23;
static int32_t x177 = INT32_MIN;
uint64_t x183 = 16728614770LLU;
uint64_t t44 = 7641LLU;
uint64_t x193 = UINT64_MAX;
uint64_t t45 = UINT64_MAX;
uint8_t x197 = 2U;
int8_t x200 = 59;
int16_t x202 = 1794;
int16_t x206 = INT16_MAX;
int8_t x207 = INT8_MIN;
uint32_t x208 = 1U;
uint32_t t48 = 524069298U;
int32_t x212 = INT32_MIN;
volatile uint8_t x213 = 15U;
int32_t x220 = INT32_MAX;
static int64_t t52 = INT64_MIN;
int8_t x229 = INT8_MAX;
static volatile int16_t x249 = INT16_MAX;
int64_t x257 = INT64_MAX;
int16_t x259 = 21;
volatile int8_t x262 = -16;
volatile int8_t x264 = INT8_MIN;
int8_t x269 = 4;
int32_t x271 = INT32_MAX;
static volatile int8_t x277 = INT8_MIN;
volatile int64_t t65 = -16158331896998LL;
uint16_t x286 = 24U;
static int8_t x287 = -1;
int8_t x293 = 3;
static volatile int32_t x294 = INT32_MAX;
int64_t x295 = -1LL;
static uint64_t t73 = 9563677507522LLU;
static int16_t x318 = -1;
int64_t x322 = INT64_MIN;
int8_t x327 = 23;
int32_t t76 = 1600330;
int8_t x330 = INT8_MIN;
uint32_t x336 = UINT32_MAX;
uint16_t x341 = UINT16_MAX;
volatile uint32_t x350 = 1398U;
int8_t x353 = -1;
static uint8_t x360 = 10U;
uint32_t t83 = 28015650U;
static uint32_t x364 = 860947U;
int16_t x374 = 251;
volatile int16_t x375 = INT16_MAX;
int8_t x377 = INT8_MAX;
volatile uint16_t x381 = 26926U;
volatile uint64_t t90 = 646267195851LLU;
static int16_t x399 = -1;
volatile uint64_t t94 = 1230LLU;
uint64_t x415 = 1586656813296796LLU;
int32_t x421 = 333;


void f0(void) {
	volatile uint64_t x1 = 26233704LLU;
	int8_t x2 = 9;
	volatile int16_t x4 = INT16_MIN;

	t0 = (x1+((x2%x3)%x4));

	if (t0 != 26233713LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int8_t x6 = -2;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = 2016635709LL;

	t1 = (x5+((x6%x7)%x8));

	if (t1 != -130LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -26;
	uint32_t x10 = 163927U;
	int8_t x12 = 1;

	t2 = (x9+((x10%x11)%x12));

	if (t2 != 4294967270U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	int16_t x15 = 185;
	volatile int16_t x16 = -116;

	t3 = (x13+((x14%x15)%x16));

	if (t3 != -140) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 106U;
	static uint32_t t4 = 717214U;

	t4 = (x17+((x18%x19)%x20));

	if (t4 != 2147483661U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -333813970039LL;
	int16_t x22 = INT16_MAX;
	int64_t x23 = 1820535936526666LL;
	int64_t x24 = INT64_MAX;

	t5 = (x21+((x22%x23)%x24));

	if (t5 != -333813937272LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = -208825777761363119LL;
	int32_t x26 = INT32_MIN;
	volatile int32_t x27 = -97589387;
	uint32_t x28 = 171141U;

	t6 = (x25+((x26%x27)%x28));

	if (t6 != -208825777761354070LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 32113U;
	volatile int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MAX;
	int16_t x32 = INT16_MAX;
	volatile int64_t t7 = 773031612LL;

	t7 = (x29+((x30%x31)%x32));

	if (t7 != 32113LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = 1LL;
	static int16_t x36 = INT16_MAX;
	volatile int64_t t8 = -85033067LL;

	t8 = (x33+((x34%x35)%x36));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = INT16_MIN;
	static int16_t x38 = 14253;
	int32_t x39 = -1;
	int8_t x40 = -1;
	int32_t t9 = 301966871;

	t9 = (x37+((x38%x39)%x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x42 = 3525019U;
	static int64_t x44 = INT64_MAX;
	static volatile int64_t t10 = -435409600141908LL;

	t10 = (x41+((x42%x43)%x44));

	if (t10 != 3525018LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 1U;
	static int16_t x46 = 6;
	int32_t x47 = 59514266;
	int32_t x48 = 11815;
	int32_t t11 = -54043;

	t11 = (x45+((x46%x47)%x48));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile uint32_t x50 = 116U;
	int64_t x51 = -613654312099593LL;
	volatile int32_t x52 = INT32_MIN;
	int64_t t12 = 9LL;

	t12 = (x49+((x50%x51)%x52));

	if (t12 != -12LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MIN;
	int64_t x55 = -1LL;
	static int64_t x56 = 1108LL;
	static volatile int64_t t13 = -6910920023392078LL;

	t13 = (x53+((x54%x55)%x56));

	if (t13 != 255LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 16U;
	static int16_t x58 = INT16_MAX;
	volatile int64_t x59 = INT64_MIN;
	int16_t x60 = -28;
	int64_t t14 = -10466842296438LL;

	t14 = (x57+((x58%x59)%x60));

	if (t14 != 23LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = -53;
	int32_t x62 = -1;
	int64_t x63 = -1LL;
	static int64_t t15 = 98478LL;

	t15 = (x61+((x62%x63)%x64));

	if (t15 != -53LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = -196;
	int8_t x67 = -1;
	int8_t x68 = INT8_MAX;

	t16 = (x65+((x66%x67)%x68));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 12504753752778233LLU;
	int32_t x70 = -134;
	static uint64_t t17 = 30485030413198LLU;

	t17 = (x69+((x70%x71)%x72));

	if (t17 != 12504753752779699LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t t18 = 2162349539741324103LLU;

	t18 = (x73+((x74%x75)%x76));

	if (t18 != 1164591382582LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = UINT16_MAX;
	uint32_t x78 = 22851U;
	int8_t x79 = 11;
	volatile uint8_t x80 = 31U;
	volatile uint32_t t19 = 31366276U;

	t19 = (x77+((x78%x79)%x80));

	if (t19 != 65539U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -1;
	uint64_t x84 = 751335903368496LLU;
	volatile uint64_t t20 = 112LLU;

	t20 = (x81+((x82%x83)%x84));

	if (t20 != 696310109604344LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = 0U;
	int16_t x87 = 11;
	uint64_t x88 = 8581019980046LLU;
	static volatile uint64_t t21 = 10468466886LLU;

	t21 = (x85+((x86%x87)%x88));

	if (t21 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 2081U;
	uint16_t x90 = 3U;
	uint16_t x91 = UINT16_MAX;
	volatile int8_t x92 = 1;
	int32_t t22 = 592265389;

	t22 = (x89+((x90%x91)%x92));

	if (t22 != 2081) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 2381U;
	volatile uint16_t x94 = UINT16_MAX;
	volatile int32_t t23 = -1597356;

	t23 = (x93+((x94%x95)%x96));

	if (t23 != 2382) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = 94U;
	int32_t x98 = 22086;
	int16_t x99 = -1;
	volatile uint8_t x100 = 2U;
	int32_t t24 = 0;

	t24 = (x97+((x98%x99)%x100));

	if (t24 != 94) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	volatile int16_t x102 = 1;
	int8_t x103 = 17;
	int8_t x104 = -36;

	t25 = (x101+((x102%x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	uint8_t x106 = 35U;
	int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MAX;

	t26 = (x105+((x106%x107)%x108));

	if (t26 != 34LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = 24;
	uint64_t t27 = 40LLU;

	t27 = (x109+((x110%x111)%x112));

	if (t27 != 9223372036854775832LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int8_t x114 = INT8_MAX;
	int16_t x115 = INT16_MIN;
	volatile int64_t x116 = -3170387496LL;
	int64_t t28 = -8713955471918LL;

	t28 = (x113+((x114%x115)%x116));

	if (t28 != 126LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 2U;
	volatile int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MAX;
	int64_t t29 = 76LL;

	t29 = (x117+((x118%x119)%x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -1;
	volatile int64_t x127 = INT64_MIN;
	int32_t x128 = 4420;
	int64_t t30 = -11LL;

	t30 = (x125+((x126%x127)%x128));

	if (t30 != -129LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -406;
	uint32_t x130 = UINT32_MAX;
	volatile uint32_t x132 = 299606U;
	static volatile uint32_t t31 = 224693U;

	t31 = (x129+((x130%x131)%x132));

	if (t31 != 4294966890U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x134 = 25159U;
	int8_t x136 = INT8_MIN;
	volatile uint32_t t32 = 7710U;

	t32 = (x133+((x134%x135)%x136));

	if (t32 != 57926U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x142 = INT16_MAX;
	int32_t x143 = -1;
	int64_t x144 = INT64_MIN;
	int64_t t33 = -16953894LL;

	t33 = (x141+((x142%x143)%x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MIN;
	int64_t x147 = -6710341915124048LL;
	volatile int64_t x148 = INT64_MIN;

	t34 = (x145+((x146%x147)%x148));

	if (t34 != 4294967167LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -306;
	uint8_t x151 = 1U;
	int16_t x152 = 449;
	volatile uint32_t t35 = 271417754U;

	t35 = (x149+((x150%x151)%x152));

	if (t35 != 4294966990U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 958507228U;
	int16_t x156 = 14801;
	volatile int64_t t36 = 1599119028694272152LL;

	t36 = (x153+((x154%x155)%x156));

	if (t36 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MIN;
	int32_t x159 = -1;
	static int16_t x160 = INT16_MIN;
	int64_t t37 = 6927LL;

	t37 = (x157+((x158%x159)%x160));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MIN;
	uint16_t x162 = 19966U;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MAX;
	volatile int64_t t38 = -9623676LL;

	t38 = (x161+((x162%x163)%x164));

	if (t38 != 19838LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x166 = -1;
	int32_t t39 = 7521;

	t39 = (x165+((x166%x167)%x168));

	if (t39 != 103) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x170 = UINT32_MAX;
	int32_t x171 = -5;
	int32_t x172 = 218;
	uint32_t t40 = 1661340U;

	t40 = (x169+((x170%x171)%x172));

	if (t40 != 2147483652U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x175 = -24748990;
	int16_t x176 = -1;

	t41 = (x173+((x174%x175)%x176));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = INT64_MIN;
	int32_t x179 = INT32_MIN;
	int64_t x180 = INT64_MIN;
	volatile int64_t t42 = -15361983903558LL;

	t42 = (x177+((x178%x179)%x180));

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x182 = 438U;
	int64_t x184 = INT64_MIN;
	uint64_t t43 = 498850611801622LLU;

	t43 = (x181+((x182%x183)%x184));

	if (t43 != 9223372036854776246LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 93748176528580LLU;
	volatile uint32_t x190 = 127404828U;
	int64_t x191 = -486125375003031770LL;
	int8_t x192 = -31;

	t44 = (x189+((x190%x191)%x192));

	if (t44 != 93748176528585LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x194 = 23;
	static uint8_t x195 = 3U;
	int8_t x196 = -1;

	t45 = (x193+((x194%x195)%x196));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = -15310;
	static volatile int32_t t46 = 1;

	t46 = (x197+((x198%x199)%x200));

	if (t46 != 49) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MAX;
	volatile uint8_t x203 = UINT8_MAX;
	int32_t x204 = -112197973;
	static volatile int32_t t47 = -57;

	t47 = (x201+((x202%x203)%x204));

	if (t47 != 136) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = INT16_MAX;

	t48 = (x205+((x206%x207)%x208));

	if (t48 != 32767U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x209 = 1;
	uint16_t x210 = 140U;
	volatile uint16_t x211 = 53U;
	volatile int32_t t49 = -687127;

	t49 = (x209+((x210%x211)%x212));

	if (t49 != 35) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x214 = INT32_MIN;
	volatile int8_t x215 = INT8_MIN;
	static volatile int32_t x216 = 25557608;
	int32_t t50 = 15036;

	t50 = (x213+((x214%x215)%x216));

	if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x217 = -1LL;
	int8_t x218 = INT8_MAX;
	volatile int32_t x219 = -1;
	volatile int64_t t51 = 372LL;

	t51 = (x217+((x218%x219)%x220));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	int16_t x223 = -1;
	int64_t x224 = -1LL;

	t52 = (x221+((x222%x223)%x224));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 1U;
	int64_t x226 = -159085845694833LL;
	volatile int16_t x227 = INT16_MIN;
	uint16_t x228 = 17U;
	static int64_t t53 = -3437LL;

	t53 = (x225+((x226%x227)%x228));

	if (t53 != -15LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = -1LL;
	volatile int32_t x231 = 84708161;
	volatile int8_t x232 = INT8_MAX;
	volatile int64_t t54 = -52405724797308158LL;

	t54 = (x229+((x230%x231)%x232));

	if (t54 != 126LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = 0U;
	static int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MAX;
	volatile int64_t t55 = 1LL;

	t55 = (x237+((x238%x239)%x240));

	if (t55 != -8LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = 12596593418587LLU;
	int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MAX;
	uint8_t x244 = UINT8_MAX;
	volatile uint64_t t56 = 636555LLU;

	t56 = (x241+((x242%x243)%x244));

	if (t56 != 12596593418579LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -82;
	int8_t x246 = 1;
	int32_t x247 = INT32_MAX;
	int16_t x248 = INT16_MAX;
	int32_t t57 = 1;

	t57 = (x245+((x246%x247)%x248));

	if (t57 != -81) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x250 = -1LL;
	volatile uint32_t x251 = 1724334U;
	int8_t x252 = 7;
	static int64_t t58 = -8910549190142291LL;

	t58 = (x249+((x250%x251)%x252));

	if (t58 != 32766LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x253 = UINT32_MAX;
	volatile int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = UINT8_MAX;
	volatile int64_t t59 = 404661LL;

	t59 = (x253+((x254%x255)%x256));

	if (t59 != 4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x258 = 13314U;
	int8_t x260 = -3;
	int64_t t60 = INT64_MAX;

	t60 = (x257+((x258%x259)%x260));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 190LLU;
	static int32_t x263 = INT32_MIN;
	uint64_t t61 = 19476827619LLU;

	t61 = (x261+((x262%x263)%x264));

	if (t61 != 174LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = -13;
	int8_t x266 = INT8_MIN;
	static uint64_t x267 = 2926LLU;
	int16_t x268 = INT16_MAX;
	volatile uint64_t t62 = 41931LLU;

	t62 = (x265+((x266%x267)%x268));

	if (t62 != 1415LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x270 = UINT8_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t63 = -518597;

	t63 = (x269+((x270%x271)%x272));

	if (t63 != 131) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MAX;
	uint8_t x274 = 1U;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = 2964LLU;
	volatile uint64_t t64 = 134137322340923031LLU;

	t64 = (x273+((x274%x275)%x276));

	if (t64 != 128LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x278 = -1;
	int16_t x279 = INT16_MAX;
	volatile int64_t x280 = -1LL;

	t65 = (x277+((x278%x279)%x280));

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MIN;
	volatile uint64_t x283 = 137488394267LLU;
	uint32_t x284 = 2737U;
	static uint64_t t66 = 2466863461656LLU;

	t66 = (x281+((x282%x283)%x284));

	if (t66 != 9223372036854777426LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = INT64_MIN;
	static int16_t x288 = -1;
	static volatile int64_t t67 = INT64_MIN;

	t67 = (x285+((x286%x287)%x288));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x289 = 3U;
	volatile int16_t x290 = 1;
	static volatile int64_t x291 = 146075983754LL;
	volatile int8_t x292 = -1;
	int64_t t68 = 1316219700LL;

	t68 = (x289+((x290%x291)%x292));

	if (t68 != 3LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x296 = INT64_MIN;
	static int64_t t69 = 12247828052429LL;

	t69 = (x293+((x294%x295)%x296));

	if (t69 != 3LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = -1LL;
	int16_t x299 = -1;
	int64_t x300 = INT64_MAX;
	static int64_t t70 = -31656266612448269LL;

	t70 = (x297+((x298%x299)%x300));

	if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x301 = 415U;
	int8_t x302 = -7;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t71 = 27;

	t71 = (x301+((x302%x303)%x304));

	if (t71 != 408) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 9312860LLU;
	int32_t x306 = INT32_MIN;
	int32_t x307 = -73077375;
	volatile int16_t x308 = INT16_MAX;
	volatile uint64_t t72 = 1169683364333LLU;

	t72 = (x305+((x306%x307)%x308));

	if (t72 != 9285474LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x309 = INT16_MIN;
	int32_t x310 = 1925092;
	int32_t x311 = 1;
	uint64_t x312 = UINT64_MAX;

	t73 = (x309+((x310%x311)%x312));

	if (t73 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x317 = -1;
	int32_t x319 = -316;
	int32_t x320 = INT32_MIN;
	volatile int32_t t74 = 27849338;

	t74 = (x317+((x318%x319)%x320));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x321 = 84U;
	volatile uint64_t x323 = 38022072010944069LLU;
	static uint16_t x324 = 19U;
	volatile uint64_t t75 = 1258LLU;

	t75 = (x321+((x322%x323)%x324));

	if (t75 != 97LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = INT16_MAX;
	uint8_t x326 = UINT8_MAX;
	uint16_t x328 = 25U;

	t76 = (x325+((x326%x327)%x328));

	if (t76 != 32769) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = -1370LL;
	static uint32_t x331 = 34813U;
	static int8_t x332 = INT8_MAX;
	int64_t t77 = 2877LL;

	t77 = (x329+((x330%x331)%x332));

	if (t77 != -1291LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x333 = 5;
	int8_t x334 = INT8_MIN;
	int32_t x335 = -1;
	uint32_t t78 = 677U;

	t78 = (x333+((x334%x335)%x336));

	if (t78 != 5U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x342 = INT64_MIN;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = -1;
	uint64_t t79 = 20655251236871LLU;

	t79 = (x341+((x342%x343)%x344));

	if (t79 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MIN;
	int8_t x347 = 1;
	uint8_t x348 = UINT8_MAX;
	int32_t t80 = INT32_MIN;

	t80 = (x345+((x346%x347)%x348));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x349 = 112351LL;
	int8_t x351 = 8;
	int16_t x352 = INT16_MAX;
	int64_t t81 = 1451558054782095157LL;

	t81 = (x349+((x350%x351)%x352));

	if (t81 != 112357LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x354 = INT8_MAX;
	volatile int8_t x355 = -1;
	int64_t x356 = -1072010624258373853LL;
	volatile int64_t t82 = -626476744LL;

	t82 = (x353+((x354%x355)%x356));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = 5U;
	int16_t x358 = INT16_MIN;
	static int16_t x359 = -1893;

	t83 = (x357+((x358%x359)%x360));

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = -1;
	int32_t x362 = INT32_MIN;
	volatile int16_t x363 = INT16_MIN;
	uint32_t t84 = UINT32_MAX;

	t84 = (x361+((x362%x363)%x364));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = 53226576635646LL;
	volatile uint16_t x366 = UINT16_MAX;
	volatile int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MAX;
	volatile int64_t t85 = -1611023288435LL;

	t85 = (x365+((x366%x367)%x368));

	if (t85 != 53226576635773LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = -7;
	uint32_t x370 = 307U;
	int8_t x371 = -6;
	uint32_t x372 = 1U;
	uint32_t t86 = 2862700U;

	t86 = (x369+((x370%x371)%x372));

	if (t86 != 4294967289U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x373 = UINT32_MAX;
	static int16_t x376 = INT16_MAX;
	volatile uint32_t t87 = 13876446U;

	t87 = (x373+((x374%x375)%x376));

	if (t87 != 250U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x378 = UINT8_MAX;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MAX;
	volatile uint64_t t88 = 41009205585526622LLU;

	t88 = (x377+((x378%x379)%x380));

	if (t88 != 382LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x382 = -1;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 29311012U;
	int64_t t89 = -5759079113486LL;

	t89 = (x381+((x382%x383)%x384));

	if (t89 != 26925LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x385 = INT8_MAX;
	volatile int64_t x386 = 117277LL;
	int16_t x387 = 17;
	uint64_t x388 = 4143039188LLU;

	t90 = (x385+((x386%x387)%x388));

	if (t90 != 138LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x389 = 870748U;
	int32_t x390 = 704558202;
	uint8_t x391 = 86U;
	uint16_t x392 = UINT16_MAX;
	uint32_t t91 = 7U;

	t91 = (x389+((x390%x391)%x392));

	if (t91 != 870768U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x393 = 711990305U;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MAX;
	static uint32_t t92 = 146729U;

	t92 = (x393+((x394%x395)%x396));

	if (t92 != 711990560U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = 3367476011248519791LLU;
	volatile int64_t x398 = INT64_MIN;
	int8_t x400 = 6;
	uint64_t t93 = 154979LLU;

	t93 = (x397+((x398%x399)%x400));

	if (t93 != 3367476011248519791LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x401 = UINT64_MAX;
	uint64_t x402 = 292445084594LLU;
	int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MIN;

	t94 = (x401+((x402%x403)%x404));

	if (t94 != 292445084593LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x405 = UINT8_MAX;
	static volatile uint16_t x406 = 11347U;
	volatile int32_t x407 = -130;
	static int16_t x408 = INT16_MAX;
	volatile int32_t t95 = -2;

	t95 = (x405+((x406%x407)%x408));

	if (t95 != 292) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x409 = UINT64_MAX;
	static int32_t x410 = INT32_MIN;
	int64_t x411 = 307797781803189677LL;
	int32_t x412 = INT32_MIN;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x409+((x410%x411)%x412));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MIN;
	uint32_t x414 = 152U;
	int8_t x416 = INT8_MIN;
	uint64_t t97 = 34484225366423165LLU;

	t97 = (x413+((x414%x415)%x416));

	if (t97 != 24LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = -1;
	volatile int16_t x418 = -89;
	static int8_t x419 = -1;
	volatile int32_t x420 = INT32_MIN;
	static int32_t t98 = 11631;

	t98 = (x417+((x418%x419)%x420));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x422 = UINT16_MAX;
	uint8_t x423 = 15U;
	static int32_t x424 = INT32_MIN;
	volatile int32_t t99 = 2636;

	t99 = (x421+((x422%x423)%x424));

	if (t99 != 333) { NG(); } else { ; }
	
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

