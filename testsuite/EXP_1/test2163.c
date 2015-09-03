#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = INT16_MIN;
volatile int32_t t2 = -42938;
static int8_t x13 = -1;
volatile int8_t x14 = -1;
volatile int64_t x18 = INT64_MAX;
uint64_t x23 = UINT64_MAX;
int8_t x24 = INT8_MIN;
static volatile uint64_t x26 = 1733898824195LLU;
volatile uint64_t t8 = 6701327890LLU;
int64_t t10 = 0LL;
static int8_t x50 = INT8_MIN;
volatile int64_t x52 = -97590LL;
volatile int32_t x55 = INT32_MIN;
uint8_t x59 = 3U;
int32_t t13 = -441992;
int64_t x62 = INT64_MIN;
static int8_t x65 = 7;
int64_t x68 = INT64_MIN;
static uint16_t x79 = 20842U;
volatile int16_t x80 = INT16_MIN;
uint64_t t19 = 28625742LLU;
int64_t x90 = -1LL;
uint64_t t22 = 388421953878LLU;
uint32_t x100 = 1U;
int64_t x104 = -1LL;
static uint64_t t25 = 1LLU;
int16_t x110 = -34;
uint16_t x111 = 12406U;
int32_t x112 = 2820484;
static volatile int8_t x113 = 9;
static int8_t x117 = INT8_MIN;
volatile int8_t x118 = -1;
volatile int64_t t28 = 2026022041110LL;
volatile uint8_t x122 = 2U;
int64_t x123 = -1LL;
uint64_t t30 = 8472898942529LLU;
static int64_t x130 = INT64_MAX;
volatile int64_t x132 = INT64_MIN;
static volatile uint64_t t32 = 3114594362183697LLU;
int32_t x138 = INT32_MIN;
volatile uint64_t x141 = UINT64_MAX;
uint8_t x144 = 1U;
int16_t x147 = -5;
static uint64_t x154 = 16LLU;
uint64_t t36 = 3660LLU;
int64_t x167 = -1254654784654782949LL;
int16_t x182 = 6561;
int32_t t45 = 6;
uint8_t x193 = 0U;
uint32_t x195 = UINT32_MAX;
int16_t x199 = -1;
uint8_t x209 = UINT8_MAX;
int64_t t50 = -1041417701LL;
int32_t x214 = INT32_MIN;
int64_t x222 = INT64_MIN;
volatile int16_t x226 = INT16_MIN;
uint16_t x229 = 14751U;
int64_t x230 = INT64_MIN;
int8_t x231 = INT8_MIN;
int32_t x233 = -17;
uint64_t x235 = 6691LLU;
uint32_t x243 = UINT32_MAX;
static uint32_t x245 = UINT32_MAX;
uint32_t x247 = 107U;
static int64_t t59 = -40438878125227LL;
int8_t x249 = -1;
int8_t x253 = -1;
volatile int32_t t62 = -972165644;
static uint64_t x262 = 254551658805274LLU;
int64_t x263 = INT64_MIN;
volatile uint64_t t63 = 2122163LLU;
volatile int8_t x269 = 0;
static int8_t x270 = INT8_MIN;
int32_t x271 = INT32_MIN;
int32_t t67 = -1133;
int8_t x288 = -1;
int32_t x292 = INT32_MIN;
static uint16_t x304 = 1U;
uint64_t x309 = UINT64_MAX;
static volatile int8_t x323 = -59;
static int64_t x326 = 24LL;
uint16_t x330 = 2270U;
int8_t x336 = INT8_MIN;
uint64_t x338 = 5097LLU;
static uint64_t t83 = 25711033LLU;
volatile uint16_t x352 = 204U;
volatile uint32_t x355 = UINT32_MAX;
int16_t x357 = -31;
uint64_t x365 = UINT64_MAX;
int64_t x369 = -1LL;
int32_t x371 = INT32_MIN;
int16_t x372 = INT16_MIN;
uint16_t x374 = 1877U;
volatile uint8_t x382 = UINT8_MAX;
int32_t x389 = INT32_MIN;
uint32_t t94 = 65839U;
int64_t x395 = INT64_MAX;
int32_t x400 = 65469107;
static uint32_t x401 = 129561925U;
static uint16_t x403 = 2U;
volatile uint8_t x406 = UINT8_MAX;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	volatile int8_t x2 = -1;
	int32_t x3 = -6;
	uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 1;

	t0 = (((x1^x2)&x3)%x4);

	if (t0 != -256) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int64_t x6 = INT64_MIN;
	int32_t x7 = INT32_MAX;
	int16_t x8 = 7;
	volatile int64_t t1 = 70079548304519270LL;

	t1 = (((x5^x6)&x7)%x8);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	uint16_t x11 = 216U;
	uint8_t x12 = 3U;

	t2 = (((x9^x10)&x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x15 = 22996442U;
	int8_t x16 = INT8_MAX;
	volatile uint32_t t3 = 0U;

	t3 = (((x13^x14)&x15)%x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int32_t x19 = -1;
	int16_t x20 = 1;
	volatile int64_t t4 = 2907469LL;

	t4 = (((x17^x18)&x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	int64_t x22 = -246380787LL;
	uint64_t t5 = 838LLU;

	t5 = (((x21^x22)&x23)%x24);

	if (t5 != 246380786LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -220489411LL;
	volatile int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 8951301508LLU;

	t6 = (((x25^x26)&x27)%x28);

	if (t6 != 62LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x33 = INT8_MIN;
	static int64_t x34 = -15823883306092883LL;
	uint32_t x35 = UINT32_MAX;
	static uint64_t x36 = 871766056LLU;
	static volatile uint64_t t7 = 3941965886784082LLU;

	t7 = (((x33^x34)&x35)%x36);

	if (t7 != 529852557LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	uint64_t x38 = UINT64_MAX;
	uint16_t x39 = UINT16_MAX;
	volatile uint8_t x40 = UINT8_MAX;

	t8 = (((x37^x38)&x39)%x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 8;
	int32_t x42 = -1;
	volatile int8_t x43 = INT8_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t9 = -1863724;

	t9 = (((x41^x42)&x43)%x44);

	if (t9 != 119) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 1LL;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = 247U;
	int8_t x48 = -2;

	t10 = (((x45^x46)&x47)%x48);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -663113LL;
	int8_t x51 = -10;
	volatile int64_t t11 = -65518539LL;

	t11 = (((x49^x50)&x51)%x52);

	if (t11 != 77554LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 1U;
	int8_t x54 = 1;
	static uint16_t x56 = 23934U;
	static volatile uint32_t t12 = 6U;

	t12 = (((x53^x54)&x55)%x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	static uint16_t x58 = 684U;
	int8_t x60 = 6;

	t13 = (((x57^x58)&x59)%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -107;
	static uint8_t x63 = 1U;
	int64_t x64 = -7LL;
	int64_t t14 = 153442320LL;

	t14 = (((x61^x62)&x63)%x64);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x66 = -8;
	static int16_t x67 = -1;
	int64_t t15 = -18843997LL;

	t15 = (((x65^x66)&x67)%x68);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = UINT8_MAX;
	static volatile int64_t x72 = -124415657250711149LL;
	int64_t t16 = 198LL;

	t16 = (((x69^x70)&x71)%x72);

	if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = -1;
	uint8_t x75 = 116U;
	volatile int8_t x76 = INT8_MIN;
	int32_t t17 = 1;

	t17 = (((x73^x74)&x75)%x76);

	if (t17 != 116) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	static uint8_t x78 = UINT8_MAX;
	volatile int32_t t18 = -104671538;

	t18 = (((x77^x78)&x79)%x80);

	if (t18 != 106) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x81 = 539191367;
	int64_t x82 = -1LL;
	uint64_t x83 = 7211LLU;
	static uint16_t x84 = 13U;

	t19 = (((x81^x82)&x83)%x84);

	if (t19 != 12LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int32_t x86 = -1829957;
	volatile int32_t x87 = 55;
	int16_t x88 = INT16_MIN;
	uint32_t t20 = 7U;

	t20 = (((x85^x86)&x87)%x88);

	if (t20 != 4U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	static uint16_t x91 = 659U;
	uint64_t x92 = 8542LLU;
	static volatile uint64_t t21 = 18LLU;

	t21 = (((x89^x90)&x91)%x92);

	if (t21 != 19LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 290500U;
	uint64_t x94 = UINT64_MAX;
	uint64_t x95 = 476LLU;
	static int32_t x96 = -1;

	t22 = (((x93^x94)&x95)%x96);

	if (t22 != 280LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MIN;
	volatile int32_t x98 = INT32_MIN;
	static int16_t x99 = INT16_MIN;
	uint32_t t23 = 51577U;

	t23 = (((x97^x98)&x99)%x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -14344;
	int8_t x102 = -1;
	uint64_t x103 = 961289575273682LLU;
	volatile uint64_t t24 = 156188LLU;

	t24 = (((x101^x102)&x103)%x104);

	if (t24 != 4098LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 1U;
	int8_t x106 = 46;
	uint64_t x107 = UINT64_MAX;
	volatile int32_t x108 = -1411;

	t25 = (((x105^x106)&x107)%x108);

	if (t25 != 47LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	int64_t t26 = -33028104441565LL;

	t26 = (((x109^x110)&x111)%x112);

	if (t26 != 32LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x114 = 497623LLU;
	int64_t x115 = -19028192347447LL;
	volatile int32_t x116 = 5;
	volatile uint64_t t27 = 271LLU;

	t27 = (((x113^x114)&x115)%x116);

	if (t27 != 3LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x119 = 104U;
	int64_t x120 = INT64_MAX;

	t28 = (((x117^x118)&x119)%x120);

	if (t28 != 104LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	int64_t x124 = 1190LL;
	volatile int64_t t29 = -120LL;

	t29 = (((x121^x122)&x123)%x124);

	if (t29 != -126LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 606682774072281210LLU;
	int16_t x126 = INT16_MIN;
	static uint16_t x127 = 4540U;
	uint32_t x128 = UINT32_MAX;

	t30 = (((x125^x126)&x127)%x128);

	if (t30 != 56LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	int8_t x131 = INT8_MIN;
	int64_t t31 = -201956973LL;

	t31 = (((x129^x130)&x131)%x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	uint64_t x134 = 1056154215423626LLU;
	static int32_t x135 = INT32_MIN;
	volatile int8_t x136 = INT8_MIN;

	t32 = (((x133^x134)&x135)%x136);

	if (t32 != 1056153932922880LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	static int64_t x139 = INT64_MIN;
	int16_t x140 = 51;
	static int64_t t33 = -77982812963LL;

	t33 = (((x137^x138)&x139)%x140);

	if (t33 != -26LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = INT64_MIN;
	int16_t x143 = 8;
	volatile uint64_t t34 = 547315094681951952LLU;

	t34 = (((x141^x142)&x143)%x144);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	static int8_t x146 = INT8_MAX;
	int16_t x148 = 379;
	volatile int32_t t35 = -175728910;

	t35 = (((x145^x146)&x147)%x148);

	if (t35 != -5) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x153 = -1;
	uint16_t x155 = 23873U;
	int32_t x156 = INT32_MAX;

	t36 = (((x153^x154)&x155)%x156);

	if (t36 != 23873LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 498591U;
	int16_t x158 = INT16_MIN;
	int16_t x159 = -1;
	int32_t x160 = -157732099;
	uint32_t t37 = 16U;

	t37 = (((x157^x158)&x159)%x160);

	if (t37 != 157214882U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x161 = UINT16_MAX;
	int16_t x162 = -1;
	uint64_t x163 = UINT64_MAX;
	static int32_t x164 = INT32_MIN;
	uint64_t t38 = 92426141LLU;

	t38 = (((x161^x162)&x163)%x164);

	if (t38 != 2147418112LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x165 = UINT16_MAX;
	int64_t x166 = 119740547LL;
	int16_t x168 = -1;
	volatile int64_t t39 = 703457385LL;

	t39 = (((x165^x166)&x167)%x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = INT8_MIN;
	uint64_t x170 = 24267520264LLU;
	int16_t x171 = -1;
	static uint16_t x172 = 1U;
	volatile uint64_t t40 = 343706640856472LLU;

	t40 = (((x169^x170)&x171)%x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x173 = 6;
	static uint32_t x174 = 1496938U;
	uint16_t x175 = 13541U;
	int64_t x176 = -86LL;
	static volatile int64_t t41 = 2738959555384LL;

	t41 = (((x173^x174)&x175)%x176);

	if (t41 != 60LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 537795168549928393LLU;
	uint32_t x178 = 571U;
	int16_t x179 = 18;
	volatile int64_t x180 = INT64_MIN;
	volatile uint64_t t42 = 7LLU;

	t42 = (((x177^x178)&x179)%x180);

	if (t42 != 18LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = -1LL;
	int16_t x183 = 1;
	static volatile int64_t x184 = INT64_MIN;
	int64_t t43 = 107519LL;

	t43 = (((x181^x182)&x183)%x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = INT32_MIN;
	static int32_t x187 = 509093;
	volatile uint8_t x188 = UINT8_MAX;
	int64_t t44 = 63282628111885LL;

	t44 = (((x185^x186)&x187)%x188);

	if (t44 != 113LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x189 = INT8_MIN;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = 1;
	uint16_t x192 = UINT16_MAX;

	t45 = (((x189^x190)&x191)%x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x194 = 28806616U;
	volatile uint16_t x196 = 4089U;
	uint32_t t46 = 11615U;

	t46 = (((x193^x194)&x195)%x196);

	if (t46 != 3700U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MAX;
	volatile int64_t x198 = INT64_MAX;
	static int32_t x200 = INT32_MIN;
	static volatile int64_t t47 = 270849389831467122LL;

	t47 = (((x197^x198)&x199)%x200);

	if (t47 != 2147450880LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -11;
	static int64_t x202 = INT64_MAX;
	int64_t x203 = INT64_MIN;
	int8_t x204 = 1;
	volatile int64_t t48 = 64562856950054460LL;

	t48 = (((x201^x202)&x203)%x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = 677;
	uint32_t x206 = 220U;
	static uint8_t x207 = 5U;
	int64_t x208 = -1LL;
	int64_t t49 = 4567341LL;

	t49 = (((x205^x206)&x207)%x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = 97U;

	t50 = (((x209^x210)&x211)%x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 29024044185115743LLU;
	int32_t x215 = 1173478;
	uint64_t x216 = 710LLU;
	uint64_t t51 = 245050280LLU;

	t51 = (((x213^x214)&x215)%x216);

	if (t51 != 560LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x217 = 18719U;
	int64_t x218 = INT64_MIN;
	static uint8_t x219 = 2U;
	uint32_t x220 = 116U;
	int64_t t52 = 788520LL;

	t52 = (((x217^x218)&x219)%x220);

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = -1;
	int8_t x223 = INT8_MIN;
	int32_t x224 = -83;
	volatile int64_t t53 = 1510247088865LL;

	t53 = (((x221^x222)&x223)%x224);

	if (t53 != 56LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x225 = 6310702648950087LLU;
	int32_t x227 = -1;
	static volatile int32_t x228 = INT32_MIN;
	volatile uint64_t t54 = 1036286226LLU;

	t54 = (((x225^x226)&x227)%x228);

	if (t54 != 18440433371060632903LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x232 = -29900069;
	int64_t t55 = 1286755440075293LL;

	t55 = (((x229^x230)&x231)%x232);

	if (t55 != -9579112LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = -18719863723LL;
	static int16_t x236 = INT16_MAX;
	static volatile uint64_t t56 = 3591LLU;

	t56 = (((x233^x234)&x235)%x236);

	if (t56 != 4642LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = INT8_MIN;
	int32_t x238 = -1;
	static int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MAX;
	volatile int64_t t57 = -22LL;

	t57 = (((x237^x238)&x239)%x240);

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = -35977;
	uint64_t x242 = 5140075LLU;
	int8_t x244 = INT8_MIN;
	volatile uint64_t t58 = 0LLU;

	t58 = (((x241^x242)&x243)%x244);

	if (t58 != 4289797404LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x246 = UINT8_MAX;
	int64_t x248 = -10663084485LL;

	t59 = (((x245^x246)&x247)%x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x250 = UINT8_MAX;
	volatile int16_t x251 = 3888;
	volatile uint8_t x252 = 16U;
	int32_t t60 = -1;

	t60 = (((x249^x250)&x251)%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x254 = 1234863818421293428LLU;
	static int32_t x255 = INT32_MIN;
	int64_t x256 = -3945547540735055780LL;
	volatile uint64_t t61 = 17LLU;

	t61 = (((x253^x254)&x255)%x256);

	if (t61 != 2710683720887424932LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -92;
	static uint8_t x258 = UINT8_MAX;
	int16_t x259 = INT16_MAX;
	volatile uint16_t x260 = 1189U;

	t62 = (((x257^x258)&x259)%x260);

	if (t62 != 500) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x261 = UINT64_MAX;
	int16_t x264 = 62;

	t63 = (((x261^x262)&x263)%x264);

	if (t63 != 8LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = INT64_MAX;
	int32_t x266 = -1;
	uint64_t x267 = UINT64_MAX;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t64 = 3LLU;

	t64 = (((x265^x266)&x267)%x268);

	if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x272 = INT64_MAX;
	volatile int64_t t65 = -14819429390LL;

	t65 = (((x269^x270)&x271)%x272);

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x277 = INT64_MIN;
	static uint64_t x278 = 798159801889212LLU;
	int64_t x279 = -1LL;
	volatile int64_t x280 = -1LL;
	static uint64_t t66 = 883LLU;

	t66 = (((x277^x278)&x279)%x280);

	if (t66 != 9224170196656665020LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = 203;
	volatile int32_t x282 = -1;
	static int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;

	t67 = (((x281^x282)&x283)%x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MAX;
	int32_t x287 = 5;
	volatile int64_t t68 = -16LL;

	t68 = (((x285^x286)&x287)%x288);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = 6556;
	uint64_t x290 = UINT64_MAX;
	static uint32_t x291 = UINT32_MAX;
	static volatile uint64_t t69 = 35545132536542LLU;

	t69 = (((x289^x290)&x291)%x292);

	if (t69 != 4294960739LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x293 = UINT16_MAX;
	int16_t x294 = 3308;
	static int32_t x295 = -480;
	int64_t x296 = 433074103371820LL;
	static int64_t t70 = -1LL;

	t70 = (((x293^x294)&x295)%x296);

	if (t70 != 61952LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	volatile int8_t x298 = -1;
	uint8_t x299 = UINT8_MAX;
	volatile uint8_t x300 = UINT8_MAX;
	int32_t t71 = 400;

	t71 = (((x297^x298)&x299)%x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x302 = 2LLU;
	int8_t x303 = INT8_MAX;
	uint64_t t72 = 3993445487475LLU;

	t72 = (((x301^x302)&x303)%x304);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = 29652U;
	volatile int8_t x308 = INT8_MAX;
	static volatile uint32_t t73 = 421546976U;

	t73 = (((x305^x306)&x307)%x308);

	if (t73 != 61U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x310 = -447;
	int32_t x311 = INT32_MIN;
	int32_t x312 = -166;
	uint64_t t74 = 24017125LLU;

	t74 = (((x309^x310)&x311)%x312);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -471520214;
	uint64_t x314 = UINT64_MAX;
	uint64_t x315 = 1994843845LLU;
	uint8_t x316 = 2U;
	volatile uint64_t t75 = 47342240032454191LLU;

	t75 = (((x313^x314)&x315)%x316);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	volatile int16_t x318 = INT16_MIN;
	int64_t x319 = -1LL;
	static uint8_t x320 = 90U;
	int64_t t76 = -1895952544025LL;

	t76 = (((x317^x318)&x319)%x320);

	if (t76 != 30LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x321 = -1LL;
	volatile int8_t x322 = INT8_MIN;
	int8_t x324 = INT8_MIN;
	volatile int64_t t77 = -238035999LL;

	t77 = (((x321^x322)&x323)%x324);

	if (t77 != 69LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 0U;
	volatile uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MIN;
	int64_t t78 = 24LL;

	t78 = (((x325^x326)&x327)%x328);

	if (t78 != 24LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 1U;
	int32_t x331 = 3144;
	int16_t x332 = -1;
	static volatile int32_t t79 = 999118;

	t79 = (((x329^x330)&x331)%x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	int16_t x334 = -106;
	int8_t x335 = -1;
	volatile int64_t t80 = -3217586LL;

	t80 = (((x333^x334)&x335)%x336);

	if (t80 != 105LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x337 = -1;
	volatile int8_t x339 = -1;
	int8_t x340 = INT8_MIN;
	static volatile uint64_t t81 = 153947058877LLU;

	t81 = (((x337^x338)&x339)%x340);

	if (t81 != 18446744073709546518LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -1;
	int32_t x342 = -1;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = UINT8_MAX;
	uint32_t t82 = 772669U;

	t82 = (((x341^x342)&x343)%x344);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x345 = INT16_MAX;
	static uint32_t x346 = 13107020U;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = 309;

	t83 = (((x345^x346)&x347)%x348);

	if (t83 != 203LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x349 = -42;
	uint16_t x350 = 1915U;
	int64_t x351 = -7699796656LL;
	volatile int64_t t84 = 1861LL;

	t84 = (((x349^x350)&x351)%x352);

	if (t84 != -188LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = 98330;
	uint8_t x354 = 69U;
	uint8_t x356 = UINT8_MAX;
	volatile uint32_t t85 = 1126937U;

	t85 = (((x353^x354)&x355)%x356);

	if (t85 != 224U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x358 = 1983638LLU;
	uint16_t x359 = 6U;
	int8_t x360 = INT8_MAX;
	static volatile uint64_t t86 = 4633133040LLU;

	t86 = (((x357^x358)&x359)%x360);

	if (t86 != 6LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 2333216LLU;
	int8_t x362 = 6;
	int32_t x363 = INT32_MAX;
	static int8_t x364 = INT8_MIN;
	uint64_t t87 = 317214177LLU;

	t87 = (((x361^x362)&x363)%x364);

	if (t87 != 2333222LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = -3;
	int64_t x367 = INT64_MAX;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t88 = 2082387LLU;

	t88 = (((x365^x366)&x367)%x368);

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x370 = UINT64_MAX;
	static uint64_t t89 = 36767284181LLU;

	t89 = (((x369^x370)&x371)%x372);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	uint32_t x375 = 6403705U;
	static int16_t x376 = -6131;
	static volatile uint32_t t90 = 2313U;

	t90 = (((x373^x374)&x375)%x376);

	if (t90 != 6391377U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MIN;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = -1;
	static volatile uint64_t t91 = 262448362LLU;

	t91 = (((x377^x378)&x379)%x380);

	if (t91 != 32640LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MIN;
	int8_t x383 = INT8_MAX;
	int8_t x384 = -1;
	int32_t t92 = 78169;

	t92 = (((x381^x382)&x383)%x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MAX;
	int16_t x387 = INT16_MIN;
	static int16_t x388 = -1;
	static int64_t t93 = -4400894907LL;

	t93 = (((x385^x386)&x387)%x388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x390 = INT16_MIN;
	uint16_t x391 = UINT16_MAX;
	uint32_t x392 = 131140U;

	t94 = (((x389^x390)&x391)%x392);

	if (t94 != 32768U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = -1LL;
	uint8_t x394 = 50U;
	int8_t x396 = INT8_MAX;
	static int64_t t95 = -21561728783323370LL;

	t95 = (((x393^x394)&x395)%x396);

	if (t95 != 77LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x398 = INT32_MIN;
	volatile int64_t x399 = 801876543093791LL;
	int64_t t96 = -472749605065111862LL;

	t96 = (((x397^x398)&x399)%x400);

	if (t96 != 20812908LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x402 = -121;
	int64_t x404 = INT64_MIN;
	volatile int64_t t97 = 4487240172LL;

	t97 = (((x401^x402)&x403)%x404);

	if (t97 != 2LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x405 = INT32_MIN;
	int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;
	int64_t t98 = 979398365222403067LL;

	t98 = (((x405^x406)&x407)%x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = -2;
	int8_t x410 = -1;
	volatile int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MAX;
	volatile int32_t t99 = -44956185;

	t99 = (((x409^x410)&x411)%x412);

	if (t99 != 0) { NG(); } else { ; }
	
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

