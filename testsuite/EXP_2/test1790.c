#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 0U;
int16_t x19 = 381;
int32_t x23 = INT32_MIN;
uint16_t x24 = 50U;
int64_t x34 = -1LL;
volatile int32_t t9 = -59;
static volatile int32_t x42 = INT32_MIN;
volatile uint32_t x49 = 194733U;
volatile int16_t x52 = 0;
volatile int32_t t12 = 1;
uint64_t x54 = UINT64_MAX;
uint64_t x57 = UINT64_MAX;
int8_t x65 = -18;
int64_t x66 = 542895660121751LL;
int16_t x68 = INT16_MIN;
int8_t x69 = -1;
int8_t x76 = -1;
static int32_t x79 = INT32_MIN;
static uint8_t x80 = 17U;
int8_t x85 = -1;
int32_t x88 = -10497;
int64_t x98 = -4093395270021LL;
static volatile int64_t x101 = -20LL;
uint8_t x103 = 0U;
uint32_t x104 = 588737421U;
uint32_t x105 = 22U;
volatile int16_t x119 = INT16_MIN;
uint16_t x120 = UINT16_MAX;
volatile uint64_t x122 = 175967983825LLU;
volatile int32_t t30 = 287;
uint64_t x128 = UINT64_MAX;
uint32_t x130 = 6639689U;
int64_t x140 = INT64_MIN;
volatile int32_t t34 = -1;
volatile int64_t x149 = INT64_MIN;
int8_t x151 = INT8_MAX;
int64_t x155 = -22931587323LL;
volatile int32_t t38 = 7628355;
int32_t t39 = -387;
int16_t x167 = -1990;
int32_t t41 = 17976;
uint8_t x169 = UINT8_MAX;
uint32_t x171 = UINT32_MAX;
int32_t x178 = INT32_MIN;
static volatile int8_t x189 = INT8_MIN;
int64_t x190 = -155854956LL;
uint16_t x192 = 16U;
int64_t x193 = INT64_MIN;
static int32_t x196 = -1;
static int8_t x199 = 0;
int64_t x202 = -1LL;
int64_t x203 = 27960791LL;
volatile int64_t x206 = INT64_MIN;
static uint8_t x211 = UINT8_MAX;
int32_t t52 = -8067;
int64_t x220 = 520127LL;
int32_t t55 = -18699597;
int16_t x229 = INT16_MAX;
int32_t x233 = -8059;
int64_t x238 = INT64_MIN;
uint16_t x244 = UINT16_MAX;
int64_t x247 = 177LL;
volatile int64_t x258 = 3990422142550LL;
int32_t x260 = 5258;
volatile uint8_t x263 = 68U;
int32_t t66 = -97331;
int16_t x270 = INT16_MIN;
int32_t x272 = -1;
int64_t x273 = -1LL;
uint16_t x274 = 2U;
volatile int32_t t68 = -14260;
volatile int8_t x281 = INT8_MIN;
static volatile int32_t t70 = 20;
volatile int16_t x285 = 131;
uint8_t x289 = UINT8_MAX;
int64_t x290 = INT64_MIN;
int64_t x295 = -2799553LL;
int32_t t73 = -587039;
int64_t x300 = 1497676735362LL;
static int8_t x304 = 1;
int32_t t75 = 2819;
uint32_t x307 = 1U;
int16_t x308 = INT16_MAX;
volatile int32_t t76 = 322;
int64_t x309 = INT64_MIN;
volatile int32_t x312 = -64254756;
int16_t x316 = INT16_MIN;
volatile int16_t x322 = INT16_MIN;
int8_t x335 = INT8_MIN;
int8_t x341 = INT8_MIN;
int16_t x343 = 88;
int64_t x347 = INT64_MAX;
int8_t x348 = INT8_MAX;
int32_t x351 = INT32_MIN;
uint16_t x352 = UINT16_MAX;
volatile uint8_t x354 = 28U;
volatile int32_t t90 = -1068192215;
uint64_t x368 = UINT64_MAX;
int64_t x370 = INT64_MAX;
uint16_t x375 = UINT16_MAX;
uint32_t x388 = 16636U;
volatile int32_t t96 = -46;
int32_t x391 = -1059;
uint32_t x393 = UINT32_MAX;
int64_t x399 = -616LL;


void f0(void) {
	uint16_t x1 = 1876U;
	volatile uint32_t x2 = 35511U;
	int64_t x3 = INT64_MIN;
	static uint16_t x4 = 29181U;
	volatile int32_t t0 = -1;

	t0 = ((x1==(x2&x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	int16_t x7 = -1;
	int64_t x8 = INT64_MIN;
	static int32_t t1 = 1;

	t1 = ((x5==(x6&x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = -8101;
	uint16_t x11 = UINT16_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 649484;

	t2 = ((x9==(x10&x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static volatile int64_t x14 = INT64_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	static int32_t x16 = -1;
	volatile int32_t t3 = 181352;

	t3 = ((x13==(x14&x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 7627;
	uint32_t x18 = 3U;
	volatile int8_t x20 = -41;
	int32_t t4 = -5303;

	t4 = ((x17==(x18&x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -44;
	volatile int8_t x22 = INT8_MIN;
	static int32_t t5 = 8;

	t5 = ((x21==(x22&x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static volatile uint16_t x26 = UINT16_MAX;
	static int32_t x27 = 6115911;
	uint8_t x28 = 120U;
	int32_t t6 = 32785132;

	t6 = ((x25==(x26&x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1649676601U;
	int32_t x30 = -1;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -12;

	t7 = ((x29==(x30&x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	static volatile int32_t x35 = -95022;
	int32_t x36 = INT32_MAX;
	static volatile int32_t t8 = -457724745;

	t8 = ((x33==(x34&x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = -24;
	int8_t x39 = -1;
	int32_t x40 = INT32_MIN;

	t9 = ((x37==(x38&x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 214728LL;
	uint16_t x43 = 0U;
	static int32_t x44 = 2083993;
	int32_t t10 = -4934248;

	t10 = ((x41==(x42&x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	uint32_t x46 = UINT32_MAX;
	static int16_t x47 = INT16_MIN;
	static int64_t x48 = 181890965397951LL;
	static volatile int32_t t11 = 1001563;

	t11 = ((x45==(x46&x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	volatile int8_t x51 = 12;

	t12 = ((x49==(x50&x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x55 = INT64_MIN;
	volatile int16_t x56 = -1;
	volatile int32_t t13 = 199;

	t13 = ((x53==(x54&x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 11U;
	int32_t x59 = -114923909;
	volatile uint8_t x60 = UINT8_MAX;
	static volatile int32_t t14 = -1;

	t14 = ((x57==(x58&x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 1774556U;
	volatile int32_t x62 = 31;
	static int16_t x63 = INT16_MIN;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = -1;

	t15 = ((x61==(x62&x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x67 = 1018509851327724LL;
	int32_t t16 = 2416300;

	t16 = ((x65==(x66&x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x70 = 1391623754807344LLU;
	uint32_t x71 = 34970187U;
	static volatile int16_t x72 = -1;
	volatile int32_t t17 = -15021;

	t17 = ((x69==(x70&x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint32_t x74 = 148389510U;
	uint64_t x75 = 169156894281144166LLU;
	int32_t t18 = 2505188;

	t18 = ((x73==(x74&x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = INT16_MIN;
	static int8_t x78 = 23;
	volatile int32_t t19 = 21651;

	t19 = ((x77==(x78&x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint16_t x82 = 1U;
	int16_t x83 = 1553;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -3681;

	t20 = ((x81==(x82&x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x86 = UINT8_MAX;
	uint64_t x87 = UINT64_MAX;
	volatile int32_t t21 = 0;

	t21 = ((x85==(x86&x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	static uint32_t x90 = 1548551284U;
	static volatile int16_t x91 = -7975;
	int64_t x92 = -1LL;
	static volatile int32_t t22 = 1611651;

	t22 = ((x89==(x90&x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -7;
	volatile int32_t x94 = -1;
	static int32_t x95 = -456626;
	int64_t x96 = INT64_MAX;
	int32_t t23 = -35;

	t23 = ((x93==(x94&x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 1U;
	int32_t x99 = INT32_MIN;
	int16_t x100 = 15;
	volatile int32_t t24 = 2612627;

	t24 = ((x97==(x98&x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x102 = 7U;
	volatile int32_t t25 = -2296;

	t25 = ((x101==(x102&x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x106 = 26094604349LLU;
	static int64_t x107 = -17531LL;
	int16_t x108 = INT16_MIN;
	static int32_t t26 = 16356;

	t26 = ((x105==(x106&x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = 0;
	static int8_t x110 = INT8_MAX;
	int32_t x111 = 15;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t27 = -11186524;

	t27 = ((x109==(x110&x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	static int32_t x114 = INT32_MAX;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = 2U;
	volatile int32_t t28 = 10;

	t28 = ((x113==(x114&x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -21744;
	static int32_t x118 = -1;
	volatile int32_t t29 = -28534;

	t29 = ((x117==(x118&x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x123 = 203U;
	int64_t x124 = INT64_MAX;

	t30 = ((x121==(x122&x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 181244LLU;
	uint8_t x126 = 3U;
	uint32_t x127 = UINT32_MAX;
	static volatile int32_t t31 = -249013876;

	t31 = ((x125==(x126&x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x129 = INT32_MAX;
	int32_t x131 = INT32_MAX;
	static int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 5336780;

	t32 = ((x129==(x130&x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 31U;
	volatile uint16_t x134 = 2437U;
	int8_t x135 = -1;
	static int64_t x136 = -4754301389913LL;
	int32_t t33 = 268590919;

	t33 = ((x133==(x134&x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = -1LL;
	volatile int16_t x138 = -1;
	int32_t x139 = INT32_MIN;

	t34 = ((x137==(x138&x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	uint32_t x142 = 27912145U;
	int8_t x143 = -36;
	volatile uint8_t x144 = UINT8_MAX;
	static int32_t t35 = -48814;

	t35 = ((x141==(x142&x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 159U;
	int16_t x146 = -1;
	int32_t x147 = -1;
	int64_t x148 = 0LL;
	volatile int32_t t36 = -7;

	t36 = ((x145==(x146&x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x150 = -1;
	static int32_t x152 = -1;
	int32_t t37 = -26;

	t37 = ((x149==(x150&x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -70351LL;
	int16_t x154 = -68;
	int64_t x156 = INT64_MIN;

	t38 = ((x153==(x154&x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -1;
	uint16_t x158 = 11U;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = UINT64_MAX;

	t39 = ((x157==(x158&x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 10013000599950LL;
	static int16_t x162 = -1;
	volatile int16_t x163 = 1;
	volatile uint32_t x164 = UINT32_MAX;
	int32_t t40 = -6339427;

	t40 = ((x161==(x162&x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	uint32_t x166 = 182843U;
	static volatile uint16_t x168 = UINT16_MAX;

	t41 = ((x165==(x166&x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t42 = -2175654;

	t42 = ((x169==(x170&x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 5;
	volatile int32_t x174 = 5392;
	volatile int64_t x175 = INT64_MIN;
	uint64_t x176 = UINT64_MAX;
	int32_t t43 = 25407;

	t43 = ((x173==(x174&x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int16_t x179 = 7556;
	int32_t x180 = 388842437;
	volatile int32_t t44 = -786;

	t44 = ((x177==(x178&x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	static int32_t x182 = -1;
	static uint8_t x183 = 64U;
	uint64_t x184 = 518219LLU;
	int32_t t45 = -91;

	t45 = ((x181==(x182&x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int8_t x186 = 1;
	uint32_t x187 = 119136363U;
	volatile int16_t x188 = INT16_MAX;
	volatile int32_t t46 = 7;

	t46 = ((x185==(x186&x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x191 = 37303547402959359LLU;
	int32_t t47 = -15;

	t47 = ((x189==(x190&x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x194 = -3407;
	int16_t x195 = INT16_MAX;
	volatile int32_t t48 = 442525580;

	t48 = ((x193==(x194&x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	uint32_t x198 = 164U;
	uint32_t x200 = 153018776U;
	volatile int32_t t49 = 1;

	t49 = ((x197==(x198&x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 40374728774LLU;
	volatile int64_t x204 = INT64_MAX;
	volatile int32_t t50 = 0;

	t50 = ((x201==(x202&x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 13395LL;
	uint32_t x207 = 56507U;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t51 = 394676;

	t51 = ((x205==(x206&x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MAX;
	volatile uint32_t x212 = 424343694U;

	t52 = ((x209==(x210&x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 13725U;
	uint16_t x214 = 1U;
	static int32_t x215 = INT32_MIN;
	int8_t x216 = -1;
	static volatile int32_t t53 = 29;

	t53 = ((x213==(x214&x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 5U;
	volatile int16_t x218 = 3255;
	static int32_t x219 = -2008302;
	int32_t t54 = 125758470;

	t54 = ((x217==(x218&x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = UINT8_MAX;
	uint32_t x222 = 13282453U;
	uint32_t x223 = UINT32_MAX;
	static int16_t x224 = INT16_MIN;

	t55 = ((x221==(x222&x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int16_t x226 = INT16_MAX;
	int16_t x227 = INT16_MAX;
	volatile int16_t x228 = -1;
	int32_t t56 = -1;

	t56 = ((x225==(x226&x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 14U;
	static int32_t x231 = -1;
	uint8_t x232 = UINT8_MAX;
	int32_t t57 = -19;

	t57 = ((x229==(x230&x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x234 = UINT8_MAX;
	int16_t x235 = INT16_MAX;
	uint64_t x236 = UINT64_MAX;
	int32_t t58 = 251;

	t58 = ((x233==(x234&x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	uint8_t x239 = UINT8_MAX;
	uint8_t x240 = 14U;
	volatile int32_t t59 = 1580;

	t59 = ((x237==(x238&x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = -6;
	volatile int32_t t60 = -6;

	t60 = ((x241==(x242&x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -319;
	int8_t x246 = INT8_MIN;
	volatile int16_t x248 = INT16_MAX;
	static int32_t t61 = -1;

	t61 = ((x245==(x246&x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 96860599LLU;
	int64_t x250 = INT64_MAX;
	int32_t x251 = -1;
	volatile int16_t x252 = 2;
	volatile int32_t t62 = -896;

	t62 = ((x249==(x250&x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = 8417;
	volatile int16_t x255 = INT16_MIN;
	int32_t x256 = -1;
	int32_t t63 = 3607;

	t63 = ((x253==(x254&x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile int64_t x259 = -1LL;
	int32_t t64 = 2420;

	t64 = ((x257==(x258&x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int8_t x262 = INT8_MIN;
	int8_t x264 = -10;
	volatile int32_t t65 = 289132029;

	t65 = ((x261==(x262&x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 510547896046LLU;
	volatile uint64_t x266 = UINT64_MAX;
	int64_t x267 = 4780210434LL;
	int32_t x268 = INT32_MAX;

	t66 = ((x265==(x266&x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 0U;
	int16_t x271 = 12;
	int32_t t67 = 0;

	t67 = ((x269==(x270&x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x275 = UINT32_MAX;
	int32_t x276 = INT32_MIN;

	t68 = ((x273==(x274&x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -2;
	uint16_t x278 = 32U;
	int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t69 = 10;

	t69 = ((x277==(x278&x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x282 = 0;
	int32_t x283 = INT32_MAX;
	static int32_t x284 = INT32_MAX;

	t70 = ((x281==(x282&x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = -1;
	int64_t x287 = 239830724310515566LL;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 2100;

	t71 = ((x285==(x286&x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x291 = -808;
	uint64_t x292 = 47641LLU;
	volatile int32_t t72 = -18877454;

	t72 = ((x289==(x290&x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	volatile uint8_t x294 = 17U;
	static uint16_t x296 = 331U;

	t73 = ((x293==(x294&x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	static int8_t x298 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	static volatile int32_t t74 = 9094;

	t74 = ((x297==(x298&x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	uint32_t x302 = 12791111U;
	int32_t x303 = INT32_MIN;

	t75 = ((x301==(x302&x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MIN;

	t76 = ((x305==(x306&x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MAX;
	volatile int8_t x311 = INT8_MIN;
	static int32_t t77 = 56;

	t77 = ((x309==(x310&x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 397098602919LLU;
	int16_t x314 = 3656;
	int8_t x315 = -1;
	static int32_t t78 = -13;

	t78 = ((x313==(x314&x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	volatile uint8_t x318 = UINT8_MAX;
	volatile uint16_t x319 = 3U;
	int64_t x320 = INT64_MIN;
	static int32_t t79 = 0;

	t79 = ((x317==(x318&x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x323 = 90;
	int8_t x324 = -1;
	volatile int32_t t80 = 22801786;

	t80 = ((x321==(x322&x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 3313;
	int64_t x326 = -1LL;
	volatile int32_t x327 = -1;
	static volatile int32_t x328 = 915616075;
	volatile int32_t t81 = -79;

	t81 = ((x325==(x326&x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int32_t x330 = INT32_MIN;
	uint32_t x331 = 816U;
	int8_t x332 = -1;
	static volatile int32_t t82 = 72842412;

	t82 = ((x329==(x330&x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int16_t x334 = -1;
	int64_t x336 = -1LL;
	volatile int32_t t83 = -22107;

	t83 = ((x333==(x334&x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	uint64_t x338 = 675095191960389978LLU;
	int64_t x339 = -10597810688LL;
	int64_t x340 = 4194269581300LL;
	volatile int32_t t84 = 7105;

	t84 = ((x337==(x338&x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x342 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -191243;

	t85 = ((x341==(x342&x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	int16_t x346 = -1;
	int32_t t86 = -351;

	t86 = ((x345==(x346&x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	volatile int32_t t87 = 49662;

	t87 = ((x349==(x350&x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	uint32_t x355 = 5250337U;
	volatile int8_t x356 = 32;
	volatile int32_t t88 = 922;

	t88 = ((x353==(x354&x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = 65;
	int8_t x358 = -2;
	static int32_t x359 = -1;
	uint8_t x360 = UINT8_MAX;
	static volatile int32_t t89 = -86610;

	t89 = ((x357==(x358&x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MAX;
	int16_t x363 = -1;
	static int16_t x364 = 4;

	t90 = ((x361==(x362&x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 1139286U;
	uint64_t x366 = 42661965856LLU;
	volatile int64_t x367 = -1LL;
	static int32_t t91 = 14847;

	t91 = ((x365==(x366&x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	uint32_t x371 = 5U;
	int32_t x372 = -34;
	static int32_t t92 = -45;

	t92 = ((x369==(x370&x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	uint8_t x376 = 62U;
	int32_t t93 = -11;

	t93 = ((x373==(x374&x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = 2483925296546552LLU;
	uint16_t x378 = 0U;
	int64_t x379 = -42763147790881LL;
	int32_t x380 = -19672;
	volatile int32_t t94 = -4711406;

	t94 = ((x377==(x378&x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 2025;
	volatile uint16_t x382 = 0U;
	static int16_t x383 = 39;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = -59731;

	t95 = ((x381==(x382&x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MAX;
	volatile int16_t x386 = INT16_MIN;
	int8_t x387 = -62;

	t96 = ((x385==(x386&x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MIN;
	uint64_t x392 = 2674346153633015286LLU;
	volatile int32_t t97 = 529370794;

	t97 = ((x389==(x390&x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = 27;
	static volatile int64_t x395 = INT64_MIN;
	volatile int16_t x396 = -1;
	volatile int32_t t98 = 678;

	t98 = ((x393==(x394&x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	volatile int8_t x400 = -6;
	int32_t t99 = -84200557;

	t99 = ((x397==(x398&x399))<x400);

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

