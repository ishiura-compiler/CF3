#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = -2141992;
uint8_t x9 = UINT8_MAX;
static int64_t x12 = 1735656287648231LL;
volatile uint32_t x18 = UINT32_MAX;
uint8_t x28 = 0U;
int8_t x34 = INT8_MIN;
volatile int8_t x35 = -3;
int64_t x39 = 119116615434605LL;
int16_t x41 = INT16_MAX;
volatile uint32_t x42 = 52701841U;
static int64_t x66 = INT64_MIN;
volatile uint64_t t17 = 22609190341273LLU;
volatile uint16_t x78 = UINT16_MAX;
int32_t x83 = -1;
uint32_t x88 = 266479U;
int64_t t21 = -19959LL;
volatile int64_t x97 = -7153824228948LL;
volatile uint8_t x99 = 1U;
volatile int32_t t23 = 2083958;
int16_t x107 = INT16_MIN;
volatile int16_t x108 = 0;
int8_t x111 = -1;
static int32_t x120 = 221;
int32_t x122 = -1;
int64_t t29 = -3870116907229160951LL;
static int32_t x131 = 42;
int8_t x132 = INT8_MAX;
int8_t x133 = INT8_MIN;
static volatile int8_t x140 = 12;
volatile uint16_t x141 = 1310U;
int16_t x143 = 1;
uint32_t t35 = 268057007U;
static uint16_t x164 = UINT16_MAX;
volatile int32_t x181 = INT32_MIN;
uint64_t t44 = 23302521277210062LLU;
int8_t x194 = INT8_MIN;
static volatile int64_t t46 = 1242071123853LL;
static int8_t x207 = -1;
int32_t t47 = 100009264;
static int8_t x211 = INT8_MIN;
static int8_t x212 = 1;
static volatile uint32_t x216 = 56689557U;
volatile uint32_t t49 = 71467991U;
volatile int16_t x220 = -83;
int32_t x223 = INT32_MIN;
uint8_t x227 = 4U;
volatile int8_t x229 = -2;
static int16_t x231 = INT16_MAX;
uint32_t x235 = UINT32_MAX;
int16_t x238 = INT16_MIN;
int32_t x243 = INT32_MIN;
static uint16_t x244 = 3U;
static int64_t x258 = -1LL;
int8_t x260 = 3;
int64_t x262 = -1LL;
volatile int64_t x266 = -1LL;
static volatile int32_t t63 = 8706362;
static uint64_t x275 = 198728388671LLU;
volatile int64_t x276 = INT64_MIN;
int64_t t64 = -57002633110644LL;
volatile uint64_t x277 = 148622491729017344LLU;
static uint16_t x279 = 480U;
int32_t x283 = INT32_MAX;
static int8_t x293 = INT8_MIN;
int16_t x295 = INT16_MIN;
uint16_t x302 = UINT16_MAX;
static uint64_t x303 = 1843740084LLU;
int16_t x308 = 1011;
uint64_t x312 = 293LLU;
volatile int8_t x315 = INT8_MIN;
int32_t x316 = -1;
uint8_t x320 = UINT8_MAX;
int32_t x321 = -8;
int16_t x326 = 80;
int64_t x333 = INT64_MIN;
static int64_t x336 = 31472198188942LL;
volatile int64_t t79 = 216998LL;
volatile int32_t x352 = -1;
static int32_t x358 = INT32_MIN;
static int64_t x369 = 321435LL;
int32_t x376 = -1;
int32_t x385 = INT32_MIN;
int32_t x393 = INT32_MIN;
int32_t x402 = -48825840;
static uint8_t x403 = 63U;
uint8_t x408 = 1U;
uint32_t x410 = UINT32_MAX;


void f0(void) {
	int16_t x1 = -2;
	int64_t x2 = -1189382392LL;
	int64_t x3 = -501565203515LL;
	static volatile int32_t t0 = 8030;

	t0 = (((x1/x2)<=x3)+x4);

	if (t0 != -2141992) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = 4LL;
	volatile int16_t x7 = 61;
	static int8_t x8 = -12;
	int32_t t1 = -219531626;

	t1 = (((x5/x6)<=x7)+x8);

	if (t1 != -11) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 1221LLU;
	static int16_t x11 = 178;
	int64_t t2 = 15LL;

	t2 = (((x9/x10)<=x11)+x12);

	if (t2 != 1735656287648232LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MAX;
	volatile int32_t x15 = INT32_MIN;
	static int64_t x16 = 12164237206508LL;
	int64_t t3 = -772970586201984571LL;

	t3 = (((x13/x14)<=x15)+x16);

	if (t3 != 12164237206508LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint32_t x19 = 401U;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -12;

	t4 = (((x17/x18)<=x19)+x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int8_t x26 = -1;
	static volatile uint8_t x27 = 23U;
	volatile int32_t t5 = -35302;

	t5 = (((x25/x26)<=x27)+x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	volatile uint16_t x30 = 154U;
	int32_t x31 = INT32_MIN;
	int16_t x32 = -1;
	volatile int32_t t6 = -9514;

	t6 = (((x29/x30)<=x31)+x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 18415234;
	uint64_t x36 = 1LLU;
	uint64_t t7 = 92684226LLU;

	t7 = (((x33/x34)<=x35)+x36);

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MAX;
	int8_t x38 = INT8_MAX;
	static volatile int8_t x40 = INT8_MIN;
	int32_t t8 = -14696607;

	t8 = (((x37/x38)<=x39)+x40);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x43 = 656907510U;
	static uint64_t x44 = UINT64_MAX;
	uint64_t t9 = 25993LLU;

	t9 = (((x41/x42)<=x43)+x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	static uint32_t x46 = 802U;
	static uint64_t x47 = UINT64_MAX;
	static int64_t x48 = 0LL;
	volatile int64_t t10 = 33LL;

	t10 = (((x45/x46)<=x47)+x48);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	volatile uint8_t x51 = 3U;
	static int64_t x52 = INT64_MAX;
	volatile int64_t t11 = INT64_MAX;

	t11 = (((x49/x50)<=x51)+x52);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	int16_t x54 = INT16_MAX;
	volatile uint64_t x55 = 285LLU;
	int8_t x56 = -1;
	int32_t t12 = 26;

	t12 = (((x53/x54)<=x55)+x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MAX;
	volatile int64_t x59 = INT64_MAX;
	uint16_t x60 = 15874U;
	int32_t t13 = 30703;

	t13 = (((x57/x58)<=x59)+x60);

	if (t13 != 15875) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = INT32_MIN;
	volatile int32_t x62 = -1577261;
	uint32_t x63 = 10968U;
	static volatile uint16_t x64 = 11742U;
	static int32_t t14 = -1476;

	t14 = (((x61/x62)<=x63)+x64);

	if (t14 != 11743) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int16_t x67 = 847;
	static volatile int64_t x68 = INT64_MIN;
	static int64_t t15 = 15728001315487517LL;

	t15 = (((x65/x66)<=x67)+x68);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 0U;
	volatile int64_t x70 = INT64_MIN;
	static uint64_t x71 = 15LLU;
	uint64_t x72 = UINT64_MAX;
	uint64_t t16 = 20207LLU;

	t16 = (((x69/x70)<=x71)+x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 83U;
	uint64_t x74 = 70525829217791LLU;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = 8544006908LLU;

	t17 = (((x73/x74)<=x75)+x76);

	if (t17 != 8544006909LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 13U;
	volatile int32_t x79 = 88465;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t18 = -6405105251LL;

	t18 = (((x77/x78)<=x79)+x80);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	int64_t x82 = 358052562567763LL;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t19 = INT64_MIN;

	t19 = (((x81/x82)<=x83)+x84);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	int8_t x86 = INT8_MAX;
	int16_t x87 = INT16_MIN;
	volatile uint32_t t20 = 1712451704U;

	t20 = (((x85/x86)<=x87)+x88);

	if (t20 != 266479U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 221617756LLU;
	volatile uint8_t x90 = 15U;
	uint8_t x91 = 3U;
	int64_t x92 = 592112LL;

	t21 = (((x89/x90)<=x91)+x92);

	if (t21 != 592112LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -1;
	int8_t x94 = 40;
	int8_t x95 = 10;
	uint8_t x96 = UINT8_MAX;
	int32_t t22 = 0;

	t22 = (((x93/x94)<=x95)+x96);

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = INT8_MAX;
	int16_t x100 = 30;

	t23 = (((x97/x98)<=x99)+x100);

	if (t23 != 31) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	uint16_t x102 = UINT16_MAX;
	volatile int32_t x103 = -1;
	int16_t x104 = INT16_MIN;
	volatile int32_t t24 = 7;

	t24 = (((x101/x102)<=x103)+x104);

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 1461U;
	int32_t x106 = INT32_MIN;
	int32_t t25 = -4187858;

	t25 = (((x105/x106)<=x107)+x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = 1;
	int8_t x110 = 47;
	int32_t x112 = INT32_MIN;
	int32_t t26 = INT32_MIN;

	t26 = (((x109/x110)<=x111)+x112);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	volatile int32_t x114 = -1;
	int32_t x115 = INT32_MIN;
	static int8_t x116 = -1;
	int32_t t27 = -824322;

	t27 = (((x113/x114)<=x115)+x116);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	volatile int64_t x118 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	static int32_t t28 = 221;

	t28 = (((x117/x118)<=x119)+x120);

	if (t28 != 222) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = -37;
	static volatile int32_t x123 = INT32_MIN;
	int64_t x124 = -240326LL;

	t29 = (((x121/x122)<=x123)+x124);

	if (t29 != -240326LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	volatile uint32_t x126 = 25181U;
	uint32_t x127 = 5719061U;
	volatile uint16_t x128 = 17561U;
	volatile int32_t t30 = 35438336;

	t30 = (((x125/x126)<=x127)+x128);

	if (t30 != 17562) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x129 = 5U;
	uint32_t x130 = UINT32_MAX;
	static int32_t t31 = -128770;

	t31 = (((x129/x130)<=x131)+x132);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x134 = 63U;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = 15378LLU;
	static uint64_t t32 = 227206237709LLU;

	t32 = (((x133/x134)<=x135)+x136);

	if (t32 != 15378LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x137 = 0U;
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = 2329548505LL;
	volatile int32_t t33 = -986871;

	t33 = (((x137/x138)<=x139)+x140);

	if (t33 != 13) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x142 = UINT8_MAX;
	int64_t x144 = -1LL;
	volatile int64_t t34 = 3984638LL;

	t34 = (((x141/x142)<=x143)+x144);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -1;
	int8_t x150 = INT8_MAX;
	static int16_t x151 = -1316;
	static volatile uint32_t x152 = 11U;

	t35 = (((x149/x150)<=x151)+x152);

	if (t35 != 11U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x153 = INT32_MIN;
	int32_t x154 = INT32_MIN;
	uint32_t x155 = 797787U;
	int32_t x156 = INT32_MIN;
	int32_t t36 = 130619155;

	t36 = (((x153/x154)<=x155)+x156);

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x157 = UINT16_MAX;
	uint64_t x158 = 17517115940968LLU;
	uint16_t x159 = UINT16_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t37 = 1663354;

	t37 = (((x157/x158)<=x159)+x160);

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x161 = 3011430348320297LLU;
	int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MAX;
	static int32_t t38 = -4020;

	t38 = (((x161/x162)<=x163)+x164);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 2868U;
	int16_t x166 = INT16_MAX;
	int16_t x167 = 0;
	int8_t x168 = 6;
	int32_t t39 = 1109;

	t39 = (((x165/x166)<=x167)+x168);

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x169 = 1U;
	static int64_t x170 = -1243LL;
	int64_t x171 = -1720721319LL;
	int64_t x172 = INT64_MIN;
	int64_t t40 = INT64_MIN;

	t40 = (((x169/x170)<=x171)+x172);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = 147381951028191LL;
	volatile int16_t x174 = INT16_MAX;
	volatile uint64_t x175 = UINT64_MAX;
	int8_t x176 = -5;
	int32_t t41 = 125;

	t41 = (((x173/x174)<=x175)+x176);

	if (t41 != -4) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int8_t x178 = INT8_MIN;
	volatile uint8_t x179 = 7U;
	uint8_t x180 = 4U;
	int32_t t42 = 32;

	t42 = (((x177/x178)<=x179)+x180);

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MAX;
	int32_t x184 = -1;
	int32_t t43 = 5;

	t43 = (((x181/x182)<=x183)+x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = UINT64_MAX;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MIN;
	uint64_t x192 = 3346LLU;

	t44 = (((x189/x190)<=x191)+x192);

	if (t44 != 3347LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x193 = 15LLU;
	int64_t x195 = -120613952628LL;
	uint16_t x196 = 21999U;
	int32_t t45 = 2566;

	t45 = (((x193/x194)<=x195)+x196);

	if (t45 != 22000) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -14431351464984LL;
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = 0;
	int64_t x204 = -19199867740660666LL;

	t46 = (((x201/x202)<=x203)+x204);

	if (t46 != -19199867740660665LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	static int16_t x206 = 20;
	uint16_t x208 = UINT16_MAX;

	t47 = (((x205/x206)<=x207)+x208);

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	int64_t x210 = -1LL;
	volatile int32_t t48 = -2462414;

	t48 = (((x209/x210)<=x211)+x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = 3142U;
	volatile int16_t x214 = INT16_MIN;
	uint8_t x215 = 68U;

	t49 = (((x213/x214)<=x215)+x216);

	if (t49 != 56689558U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = 8LLU;
	int64_t x218 = -1LL;
	static uint16_t x219 = UINT16_MAX;
	volatile int32_t t50 = -1;

	t50 = (((x217/x218)<=x219)+x220);

	if (t50 != -82) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = -22;
	int64_t x224 = 21899929503LL;
	int64_t t51 = -620045LL;

	t51 = (((x221/x222)<=x223)+x224);

	if (t51 != 21899929504LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x225 = 249044U;
	uint32_t x226 = 1908081098U;
	static uint16_t x228 = 0U;
	volatile int32_t t52 = -3;

	t52 = (((x225/x226)<=x227)+x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x230 = 50U;
	int64_t x232 = -137916246637LL;
	int64_t t53 = 1957732198066341131LL;

	t53 = (((x229/x230)<=x231)+x232);

	if (t53 != -137916246636LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = 235U;
	int8_t x234 = INT8_MAX;
	volatile uint16_t x236 = 4269U;
	int32_t t54 = -54;

	t54 = (((x233/x234)<=x235)+x236);

	if (t54 != 4270) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x237 = 5;
	volatile int16_t x239 = -381;
	int32_t x240 = INT32_MAX;
	int32_t t55 = INT32_MAX;

	t55 = (((x237/x238)<=x239)+x240);

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 87U;
	int64_t x242 = INT64_MAX;
	volatile int32_t t56 = -983624;

	t56 = (((x241/x242)<=x243)+x244);

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = 140857924288045102LL;
	int32_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = -34;
	int32_t t57 = 31235504;

	t57 = (((x245/x246)<=x247)+x248);

	if (t57 != -33) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MIN;
	static int8_t x251 = -16;
	static uint8_t x252 = UINT8_MAX;
	int32_t t58 = -3;

	t58 = (((x249/x250)<=x251)+x252);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MAX;
	int8_t x254 = INT8_MIN;
	uint64_t x255 = 284952742369552LLU;
	volatile int32_t x256 = 21;
	static volatile int32_t t59 = 3188234;

	t59 = (((x253/x254)<=x255)+x256);

	if (t59 != 21) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = INT8_MIN;
	uint16_t x259 = UINT16_MAX;
	int32_t t60 = -118751;

	t60 = (((x257/x258)<=x259)+x260);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x261 = INT32_MIN;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MIN;
	static int32_t t61 = -42196799;

	t61 = (((x261/x262)<=x263)+x264);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int16_t x267 = -1;
	int32_t x268 = -35631603;
	volatile int32_t t62 = 41260706;

	t62 = (((x265/x266)<=x267)+x268);

	if (t62 != -35631602) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x269 = 49U;
	uint64_t x270 = UINT64_MAX;
	uint32_t x271 = 14U;
	uint16_t x272 = 717U;

	t63 = (((x269/x270)<=x271)+x272);

	if (t63 != 718) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MIN;
	static int16_t x274 = INT16_MIN;

	t64 = (((x273/x274)<=x275)+x276);

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x278 = 2U;
	int8_t x280 = INT8_MIN;
	int32_t t65 = -408659;

	t65 = (((x277/x278)<=x279)+x280);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = 0U;
	int32_t x282 = INT32_MIN;
	uint8_t x284 = 67U;
	volatile int32_t t66 = 2021274;

	t66 = (((x281/x282)<=x283)+x284);

	if (t66 != 68) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = 82U;
	uint8_t x287 = 62U;
	static int16_t x288 = 0;
	int32_t t67 = 224;

	t67 = (((x285/x286)<=x287)+x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -21854336673659766LL;
	uint32_t x290 = UINT32_MAX;
	volatile int16_t x291 = INT16_MAX;
	static int8_t x292 = -1;
	volatile int32_t t68 = -17;

	t68 = (((x289/x290)<=x291)+x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x294 = INT8_MIN;
	int32_t x296 = -1;
	volatile int32_t t69 = -260712;

	t69 = (((x293/x294)<=x295)+x296);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x298 = INT8_MIN;
	uint16_t x299 = 13164U;
	int16_t x300 = INT16_MAX;
	int32_t t70 = 7345766;

	t70 = (((x297/x298)<=x299)+x300);

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x301 = -16050;
	int16_t x304 = INT16_MAX;
	static int32_t t71 = 6793;

	t71 = (((x301/x302)<=x303)+x304);

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x305 = INT16_MAX;
	int32_t x306 = INT32_MIN;
	uint64_t x307 = UINT64_MAX;
	int32_t t72 = -10450988;

	t72 = (((x305/x306)<=x307)+x308);

	if (t72 != 1012) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 1U;
	static int64_t x310 = -2244322567763666304LL;
	volatile int16_t x311 = INT16_MIN;
	uint64_t t73 = 3151LLU;

	t73 = (((x309/x310)<=x311)+x312);

	if (t73 != 293LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x313 = 500778117657LL;
	uint32_t x314 = 173U;
	volatile int32_t t74 = -27666;

	t74 = (((x313/x314)<=x315)+x316);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = UINT8_MAX;
	int32_t x318 = -1;
	static uint16_t x319 = UINT16_MAX;
	int32_t t75 = -2029743;

	t75 = (((x317/x318)<=x319)+x320);

	if (t75 != 256) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x322 = INT64_MIN;
	volatile uint64_t x323 = 9572663135258546LLU;
	static uint32_t x324 = UINT32_MAX;
	static volatile uint32_t t76 = 0U;

	t76 = (((x321/x322)<=x323)+x324);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x325 = UINT8_MAX;
	uint16_t x327 = UINT16_MAX;
	uint64_t x328 = 1939221683LLU;
	static uint64_t t77 = 10102759193429659LLU;

	t77 = (((x325/x326)<=x327)+x328);

	if (t77 != 1939221684LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = -1;
	int64_t x330 = 5207232LL;
	int8_t x331 = INT8_MIN;
	static int32_t x332 = INT32_MAX;
	static volatile int32_t t78 = INT32_MAX;

	t78 = (((x329/x330)<=x331)+x332);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = INT64_MIN;
	int8_t x335 = -7;

	t79 = (((x333/x334)<=x335)+x336);

	if (t79 != 31472198188942LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MAX;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 5U;
	int32_t x340 = 6965;
	int32_t t80 = -4563511;

	t80 = (((x337/x338)<=x339)+x340);

	if (t80 != 6966) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x341 = 0;
	static int16_t x342 = INT16_MIN;
	volatile uint64_t x343 = 15119616LLU;
	uint8_t x344 = 3U;
	int32_t t81 = -2;

	t81 = (((x341/x342)<=x343)+x344);

	if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MAX;
	uint32_t x346 = 130658U;
	int8_t x347 = -1;
	volatile int32_t x348 = -1;
	int32_t t82 = -58512;

	t82 = (((x345/x346)<=x347)+x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = -1;
	volatile uint64_t x350 = 159293165756226LLU;
	int16_t x351 = INT16_MIN;
	volatile int32_t t83 = 304355599;

	t83 = (((x349/x350)<=x351)+x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = 2U;
	volatile int32_t x354 = INT32_MAX;
	int64_t x355 = 36492599454768492LL;
	int8_t x356 = -23;
	volatile int32_t t84 = 14755;

	t84 = (((x353/x354)<=x355)+x356);

	if (t84 != -22) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x357 = INT8_MIN;
	int32_t x359 = INT32_MIN;
	static int64_t x360 = 5195516LL;
	int64_t t85 = 52477560656LL;

	t85 = (((x357/x358)<=x359)+x360);

	if (t85 != 5195516LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = 17;
	static int16_t x363 = INT16_MIN;
	uint32_t x364 = 417U;
	static uint32_t t86 = 10U;

	t86 = (((x361/x362)<=x363)+x364);

	if (t86 != 418U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = 64;
	int32_t x367 = -1;
	static uint32_t x368 = UINT32_MAX;
	static volatile uint32_t t87 = UINT32_MAX;

	t87 = (((x365/x366)<=x367)+x368);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x370 = UINT32_MAX;
	int8_t x371 = INT8_MIN;
	uint64_t x372 = UINT64_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = (((x369/x370)<=x371)+x372);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -1;
	int64_t x374 = -817376727916879623LL;
	static int16_t x375 = -1;
	int32_t t89 = -78152;

	t89 = (((x373/x374)<=x375)+x376);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x377 = INT8_MAX;
	static int32_t x378 = -1;
	uint64_t x379 = 4730LLU;
	int16_t x380 = 0;
	int32_t t90 = -255698320;

	t90 = (((x377/x378)<=x379)+x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = -1;
	int16_t x383 = INT16_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t91 = INT64_MIN;

	t91 = (((x381/x382)<=x383)+x384);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x386 = INT16_MAX;
	static int16_t x387 = INT16_MIN;
	volatile int8_t x388 = INT8_MIN;
	static int32_t t92 = 64946;

	t92 = (((x385/x386)<=x387)+x388);

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = UINT16_MAX;
	static volatile int64_t x390 = INT64_MIN;
	uint32_t x391 = 38U;
	int32_t x392 = INT32_MIN;
	int32_t t93 = -9170968;

	t93 = (((x389/x390)<=x391)+x392);

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x394 = INT32_MAX;
	uint8_t x395 = 8U;
	volatile int32_t x396 = INT32_MIN;
	static int32_t t94 = -24;

	t94 = (((x393/x394)<=x395)+x396);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x398 = 3U;
	int32_t x399 = 28761705;
	int64_t x400 = -29447788LL;
	volatile int64_t t95 = 137280LL;

	t95 = (((x397/x398)<=x399)+x400);

	if (t95 != -29447787LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x401 = INT8_MIN;
	static volatile int32_t x404 = -1;
	int32_t t96 = 252;

	t96 = (((x401/x402)<=x403)+x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -1;
	static int16_t x406 = 32;
	uint8_t x407 = UINT8_MAX;
	int32_t t97 = -36199;

	t97 = (((x405/x406)<=x407)+x408);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 324U;
	int16_t x411 = INT16_MIN;
	volatile int8_t x412 = INT8_MIN;
	int32_t t98 = -89;

	t98 = (((x409/x410)<=x411)+x412);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = 8;
	static int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MAX;
	uint32_t x416 = 4U;
	static uint32_t t99 = 3924052U;

	t99 = (((x413/x414)<=x415)+x416);

	if (t99 != 5U) { NG(); } else { ; }
	
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

