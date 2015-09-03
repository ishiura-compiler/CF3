#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x8 = 8269418LL;
int8_t x19 = 31;
static volatile int64_t t3 = 2947871LL;
static int32_t x21 = 1861;
int32_t t5 = -11828;
int16_t x37 = INT16_MIN;
uint32_t x40 = 8330U;
int8_t x41 = -1;
int8_t x46 = -3;
static uint8_t x53 = UINT8_MAX;
uint8_t x55 = 124U;
int32_t t12 = -2;
static volatile int16_t x64 = INT16_MIN;
int32_t x66 = INT32_MIN;
volatile int16_t x67 = 1;
volatile int32_t t14 = -236282;
int16_t x69 = INT16_MIN;
volatile int32_t x71 = INT32_MIN;
static volatile uint64_t t16 = 907696561LLU;
int8_t x81 = 1;
volatile int32_t x83 = INT32_MIN;
static uint32_t x85 = UINT32_MAX;
int16_t x96 = INT16_MIN;
int16_t x100 = 15420;
int16_t x108 = -1;
volatile int64_t t24 = 6828586LL;
static volatile int64_t x109 = -1LL;
static volatile uint32_t t27 = 53625U;
static uint16_t x122 = 13U;
int16_t x126 = INT16_MIN;
int16_t x128 = -1;
int64_t t29 = 886173350157176052LL;
uint32_t x138 = 3922178U;
int64_t t31 = -18977822LL;
static int8_t x142 = INT8_MIN;
volatile int64_t t32 = -911361855253758LL;
volatile int8_t x147 = INT8_MIN;
volatile int64_t x149 = INT64_MAX;
int32_t x150 = -1;
int16_t x151 = -9;
static volatile int64_t x152 = INT64_MAX;
int8_t x155 = 7;
volatile int64_t t36 = 550193114LL;
static int32_t x163 = -1;
uint32_t x170 = 69926320U;
int32_t t42 = -104;
uint64_t x185 = 1030396623LLU;
int16_t x190 = 26;
uint32_t t44 = 15015185U;
int16_t x193 = INT16_MIN;
static int32_t x198 = INT32_MIN;
int16_t x200 = INT16_MIN;
uint8_t x208 = 3U;
volatile int64_t t48 = -7566108LL;
int32_t x222 = 636336;
static volatile int64_t x223 = -72LL;
static int64_t x225 = INT64_MIN;
int64_t t51 = -6017114LL;
volatile int32_t x230 = INT32_MIN;
int64_t t52 = -326025532255216LL;
int32_t x233 = INT32_MAX;
uint64_t x236 = UINT64_MAX;
static volatile int64_t x241 = 4313408995975756829LL;
int8_t x248 = -30;
volatile int64_t t56 = 2069089147285588LL;
uint64_t x250 = UINT64_MAX;
int64_t x251 = INT64_MAX;
uint16_t x256 = 14U;
uint64_t t59 = 212291LLU;
volatile uint16_t x264 = 0U;
volatile int64_t t60 = -2935812049583179LL;
volatile uint16_t x268 = 1285U;
int8_t x275 = INT8_MIN;
int32_t x278 = -40;
static int8_t x282 = -1;
static int32_t x288 = 39;
static uint16_t x289 = UINT16_MAX;
int8_t x290 = INT8_MIN;
int8_t x297 = INT8_MIN;
static volatile uint64_t t70 = 484702877LLU;
uint32_t x305 = 27394U;
int32_t x306 = 2;
static uint32_t x308 = 5052799U;
static int64_t x311 = INT64_MAX;
int64_t x317 = INT64_MIN;
int64_t x327 = -1379622057856405393LL;
uint32_t x328 = 2346832U;
uint32_t t78 = 10364U;
uint16_t x340 = UINT16_MAX;
uint16_t x346 = UINT16_MAX;
int8_t x347 = INT8_MIN;
int8_t x348 = INT8_MIN;
static uint16_t x350 = 1015U;
static volatile uint32_t x354 = 23054U;
int64_t x356 = -1LL;
int64_t x357 = -1LL;
int32_t x358 = INT32_MIN;
volatile int16_t x359 = INT16_MIN;
int16_t x360 = -1;
int64_t x364 = -13LL;
volatile int64_t t87 = -114571517707LL;
static volatile int16_t x381 = INT16_MAX;
int8_t x383 = INT8_MIN;
int16_t x386 = 120;
static volatile uint64_t t90 = 3LLU;
volatile uint16_t x389 = 109U;
int16_t x395 = INT16_MAX;
volatile int64_t t92 = INT64_MIN;
static uint64_t x399 = UINT64_MAX;
int64_t x405 = INT64_MIN;
uint32_t x419 = UINT32_MAX;
int8_t x422 = -1;
int32_t x423 = -258;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = -2836592095221333LL;
	volatile int64_t x3 = -1LL;
	int8_t x4 = 0;
	volatile int64_t t0 = -62943821941019LL;

	t0 = (((x1%x2)&x3)+x4);

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 15715979U;
	static int8_t x6 = 7;
	int16_t x7 = INT16_MIN;
	volatile int64_t t1 = 4LL;

	t1 = (((x5%x6)&x7)+x8);

	if (t1 != 8269418LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	static volatile uint8_t x14 = UINT8_MAX;
	int16_t x15 = -430;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t2 = 795191LLU;

	t2 = (((x13%x14)&x15)+x16);

	if (t2 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 2LL;
	volatile int32_t x18 = INT32_MIN;
	int32_t x20 = INT32_MAX;

	t3 = (((x17%x18)&x19)+x20);

	if (t3 != 2147483649LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x22 = INT64_MIN;
	static int32_t x23 = INT32_MIN;
	volatile uint64_t x24 = UINT64_MAX;
	uint64_t t4 = UINT64_MAX;

	t4 = (((x21%x22)&x23)+x24);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 741U;
	int32_t x26 = INT32_MIN;
	static volatile int16_t x27 = INT16_MIN;
	uint16_t x28 = 3U;

	t5 = (((x25%x26)&x27)+x28);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = 14;
	int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = (((x29%x30)&x31)+x32);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -30;
	int32_t x34 = -1;
	static int64_t x35 = INT64_MAX;
	uint16_t x36 = 383U;
	volatile int64_t t7 = -574LL;

	t7 = (((x33%x34)&x35)+x36);

	if (t7 != 383LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MAX;
	volatile int64_t x39 = -73265LL;
	volatile int64_t t8 = -1716688694LL;

	t8 = (((x37%x38)&x39)+x40);

	if (t8 != -64936LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = INT16_MAX;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = 1;
	uint64_t t9 = 0LLU;

	t9 = (((x41%x42)&x43)+x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	uint8_t x47 = 43U;
	int64_t x48 = 2097009410LL;
	volatile int64_t t10 = -28818953233455338LL;

	t10 = (((x45%x46)&x47)+x48);

	if (t10 != 2097009452LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = 16105982LLU;
	int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	int64_t x52 = 5LL;
	volatile uint64_t t11 = 1940049LLU;

	t11 = (((x49%x50)&x51)+x52);

	if (t11 != 5LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = 12;
	int16_t x56 = -1;

	t12 = (((x53%x54)&x55)+x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x61 = UINT64_MAX;
	uint16_t x62 = 1U;
	static int8_t x63 = 3;
	uint64_t t13 = 52005LLU;

	t13 = (((x61%x62)&x63)+x64);

	if (t13 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	int32_t x68 = -1;

	t14 = (((x65%x66)&x67)+x68);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = -1;
	static uint8_t x72 = UINT8_MAX;
	int32_t t15 = 141697261;

	t15 = (((x69%x70)&x71)+x72);

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = INT32_MAX;
	uint64_t x74 = 274019935685267713LLU;
	static volatile int16_t x75 = -1;
	volatile int16_t x76 = 27;

	t16 = (((x73%x74)&x75)+x76);

	if (t16 != 2147483674LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x78 = UINT16_MAX;
	volatile int16_t x79 = -1671;
	int64_t x80 = INT64_MAX;
	volatile int64_t t17 = 1569976LL;

	t17 = (((x77%x78)&x79)+x80);

	if (t17 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x82 = -2;
	int16_t x84 = -2764;
	static volatile int32_t t18 = 217557588;

	t18 = (((x81%x82)&x83)+x84);

	if (t18 != -2764) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MIN;
	int16_t x87 = 7181;
	volatile int32_t x88 = INT32_MIN;
	volatile uint32_t t19 = 708U;

	t19 = (((x85%x86)&x87)+x88);

	if (t19 != 2147490829U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	uint64_t x90 = 217LLU;
	static int8_t x91 = -1;
	uint32_t x92 = UINT32_MAX;
	uint64_t t20 = 2674147121932LLU;

	t20 = (((x89%x90)&x91)+x92);

	if (t20 != 4294967400LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 276165LLU;
	volatile int16_t x94 = -1;
	static int32_t x95 = INT32_MIN;
	uint64_t t21 = 606114627343342LLU;

	t21 = (((x93%x94)&x95)+x96);

	if (t21 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x97 = 712480U;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	uint32_t t22 = 107689U;

	t22 = (((x97%x98)&x99)+x100);

	if (t22 != 703548U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = INT64_MIN;
	static int64_t x102 = INT64_MAX;
	int16_t x103 = 0;
	uint8_t x104 = 5U;
	int64_t t23 = -7110607LL;

	t23 = (((x101%x102)&x103)+x104);

	if (t23 != 5LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = 85804678LL;
	uint16_t x106 = 9U;
	uint16_t x107 = 5276U;

	t24 = (((x105%x106)&x107)+x108);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x110 = -2;
	int16_t x111 = INT16_MAX;
	int64_t x112 = -7082242605025LL;
	static int64_t t25 = 534635856056LL;

	t25 = (((x109%x110)&x111)+x112);

	if (t25 != -7082242572258LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 2U;
	volatile int8_t x114 = INT8_MIN;
	int64_t x115 = 4673630LL;
	int32_t x116 = INT32_MAX;
	volatile int64_t t26 = 239485045091047LL;

	t26 = (((x113%x114)&x115)+x116);

	if (t26 != 2147483649LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x117 = 52U;
	volatile int16_t x118 = 473;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = -1;

	t27 = (((x117%x118)&x119)+x120);

	if (t27 != 51U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x121 = 3999U;
	uint8_t x123 = 3U;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t28 = -31;

	t28 = (((x121%x122)&x123)+x124);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x127 = 5686U;

	t29 = (((x125%x126)&x127)+x128);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = -1LL;
	uint16_t x134 = 2047U;
	int32_t x135 = INT32_MIN;
	static int16_t x136 = -591;
	volatile int64_t t30 = -11345723317875405LL;

	t30 = (((x133%x134)&x135)+x136);

	if (t30 != -2147484239LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x137 = 172U;
	static int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;

	t31 = (((x137%x138)&x139)+x140);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -521462014324464LL;
	uint16_t x143 = 361U;
	static int8_t x144 = INT8_MAX;

	t32 = (((x141%x142)&x143)+x144);

	if (t32 != 383LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 10402U;
	int8_t x146 = INT8_MAX;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t33 = -132521;

	t33 = (((x145%x146)&x147)+x148);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t t34 = INT64_MAX;

	t34 = (((x149%x150)&x151)+x152);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	uint64_t x154 = UINT64_MAX;
	volatile uint8_t x156 = 1U;
	uint64_t t35 = 80902992866359772LLU;

	t35 = (((x153%x154)&x155)+x156);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x157 = INT32_MAX;
	static int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MAX;
	int16_t x160 = INT16_MIN;

	t36 = (((x157%x158)&x159)+x160);

	if (t36 != 2147450879LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x161 = 829U;
	int16_t x162 = -1;
	volatile int32_t x164 = -1;
	int32_t t37 = 1620;

	t37 = (((x161%x162)&x163)+x164);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = -246792;
	static uint16_t x166 = UINT16_MAX;
	uint16_t x167 = 14698U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t38 = 112280866773988700LL;

	t38 = (((x165%x166)&x167)+x168);

	if (t38 != -9223372036854761120LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = 23;
	uint64_t x171 = UINT64_MAX;
	static uint8_t x172 = UINT8_MAX;
	static volatile uint64_t t39 = 7989LLU;

	t39 = (((x169%x170)&x171)+x172);

	if (t39 != 278LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = -72;
	uint8_t x174 = 8U;
	uint64_t x175 = UINT64_MAX;
	volatile uint16_t x176 = 0U;
	volatile uint64_t t40 = 22063881343LLU;

	t40 = (((x173%x174)&x175)+x176);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MIN;
	uint16_t x179 = 55U;
	volatile uint32_t x180 = UINT32_MAX;
	volatile uint64_t t41 = 6622896293LLU;

	t41 = (((x177%x178)&x179)+x180);

	if (t41 != 4294967350LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x182 = INT8_MIN;
	int8_t x183 = -11;
	static int8_t x184 = INT8_MIN;

	t42 = (((x181%x182)&x183)+x184);

	if (t42 != -11) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MIN;
	static uint64_t x188 = 179756330726033933LLU;
	static volatile uint64_t t43 = 1LLU;

	t43 = (((x185%x186)&x187)+x188);

	if (t43 != 179756330726033933LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x189 = 59440U;
	uint16_t x191 = 0U;
	uint8_t x192 = 52U;

	t44 = (((x189%x190)&x191)+x192);

	if (t44 != 52U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x194 = INT64_MIN;
	uint8_t x195 = UINT8_MAX;
	static int8_t x196 = INT8_MAX;
	volatile int64_t t45 = 15942164302141102LL;

	t45 = (((x193%x194)&x195)+x196);

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x197 = 1617U;
	static int8_t x199 = -1;
	static volatile int32_t t46 = 3;

	t46 = (((x197%x198)&x199)+x200);

	if (t46 != -31151) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 244768942U;
	uint8_t x202 = 1U;
	volatile int8_t x203 = 17;
	static volatile uint64_t x204 = 10862139908LLU;
	uint64_t t47 = 896LLU;

	t47 = (((x201%x202)&x203)+x204);

	if (t47 != 10862139908LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -1;
	volatile int64_t x206 = -1LL;
	volatile int64_t x207 = INT64_MAX;

	t48 = (((x205%x206)&x207)+x208);

	if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = 11009;
	volatile int16_t x210 = -28;
	static int8_t x211 = INT8_MIN;
	volatile uint8_t x212 = 31U;
	volatile int32_t t49 = -227834524;

	t49 = (((x209%x210)&x211)+x212);

	if (t49 != 31) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x221 = INT32_MIN;
	uint64_t x224 = 6185LLU;
	uint64_t t50 = 808442976LLU;

	t50 = (((x221%x222)&x223)+x224);

	if (t50 != 18446744073709071817LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x226 = 14;
	uint32_t x227 = 762U;
	int16_t x228 = INT16_MIN;

	t51 = (((x225%x226)&x227)+x228);

	if (t51 != -32008LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = INT8_MIN;
	int64_t x231 = INT64_MAX;
	int8_t x232 = INT8_MIN;

	t52 = (((x229%x230)&x231)+x232);

	if (t52 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x234 = INT64_MAX;
	static uint32_t x235 = UINT32_MAX;
	volatile uint64_t t53 = 8172LLU;

	t53 = (((x233%x234)&x235)+x236);

	if (t53 != 2147483646LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = 744163LLU;
	volatile int64_t x238 = -1LL;
	int64_t x239 = 250430875087LL;
	static int8_t x240 = INT8_MIN;
	static uint64_t t54 = 30714LLU;

	t54 = (((x237%x238)&x239)+x240);

	if (t54 != 213059LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x242 = 1;
	uint8_t x243 = 14U;
	uint8_t x244 = 0U;
	int64_t t55 = -605144650020164247LL;

	t55 = (((x241%x242)&x243)+x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x245 = INT64_MIN;
	uint32_t x246 = 1U;
	uint16_t x247 = 5U;

	t56 = (((x245%x246)&x247)+x248);

	if (t56 != -30LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = 97U;
	uint8_t x252 = 36U;
	volatile uint64_t t57 = 1610669LLU;

	t57 = (((x249%x250)&x251)+x252);

	if (t57 != 133LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = 3365;
	volatile int64_t x254 = -1LL;
	int16_t x255 = 2986;
	static int64_t t58 = -24LL;

	t58 = (((x253%x254)&x255)+x256);

	if (t58 != 14LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MAX;
	uint64_t x259 = 421098456LLU;
	int16_t x260 = -1;

	t59 = (((x257%x258)&x259)+x260);

	if (t59 != 215LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = 0;
	int64_t x262 = -1LL;
	int16_t x263 = INT16_MAX;

	t60 = (((x261%x262)&x263)+x264);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MAX;
	uint64_t x266 = UINT64_MAX;
	static int64_t x267 = -1LL;
	uint64_t t61 = 2618LLU;

	t61 = (((x265%x266)&x267)+x268);

	if (t61 != 1412LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x269 = 17U;
	volatile int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	int8_t x272 = -1;
	volatile int32_t t62 = -8400;

	t62 = (((x269%x270)&x271)+x272);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 1431U;
	int16_t x274 = -1;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t63 = -4260350LL;

	t63 = (((x273%x274)&x275)+x276);

	if (t63 != -9223372036854774400LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MIN;
	uint16_t x279 = 6U;
	volatile int8_t x280 = INT8_MAX;
	int64_t t64 = 384388807LL;

	t64 = (((x277%x278)&x279)+x280);

	if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x281 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 22883778LLU;
	static volatile uint64_t t65 = 481755670746LLU;

	t65 = (((x281%x282)&x283)+x284);

	if (t65 != 22883778LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = 2484168LLU;
	int32_t x286 = -1318;
	static uint8_t x287 = 13U;
	volatile uint64_t t66 = 102809261422LLU;

	t66 = (((x285%x286)&x287)+x288);

	if (t66 != 47LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x291 = 6208293U;
	int64_t x292 = 10975LL;
	volatile int64_t t67 = 40481468315507597LL;

	t67 = (((x289%x290)&x291)+x292);

	if (t67 != 11012LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	static int32_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t68 = -1;

	t68 = (((x293%x294)&x295)+x296);

	if (t68 != -32896) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x298 = INT16_MIN;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = 15891;
	uint64_t t69 = 4037479391751015LLU;

	t69 = (((x297%x298)&x299)+x300);

	if (t69 != 15763LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = UINT8_MAX;
	static int16_t x302 = INT16_MAX;
	uint64_t x303 = 51118246LLU;
	volatile uint64_t x304 = UINT64_MAX;

	t70 = (((x301%x302)&x303)+x304);

	if (t70 != 165LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x307 = 2125150085496948139LL;
	static int64_t t71 = 122689774163261LL;

	t71 = (((x305%x306)&x307)+x308);

	if (t71 != 5052799LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = 74U;
	uint16_t x310 = 145U;
	static volatile int16_t x312 = 1;
	volatile int64_t t72 = -2152791231LL;

	t72 = (((x309%x310)&x311)+x312);

	if (t72 != 75LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = UINT16_MAX;
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = -112;
	int8_t x316 = -1;
	volatile int32_t t73 = 6;

	t73 = (((x313%x314)&x315)+x316);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x318 = INT16_MIN;
	volatile int8_t x319 = -1;
	uint8_t x320 = 1U;
	int64_t t74 = -1601248LL;

	t74 = (((x317%x318)&x319)+x320);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x321 = 1U;
	uint32_t x322 = 1354U;
	volatile int64_t x323 = INT64_MAX;
	uint16_t x324 = 3U;
	static int64_t t75 = 248148970450812947LL;

	t75 = (((x321%x322)&x323)+x324);

	if (t75 != 4LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x325 = INT64_MIN;
	int32_t x326 = 74;
	int64_t t76 = 1631996LL;

	t76 = (((x325%x326)&x327)+x328);

	if (t76 != -1379622057854058566LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = UINT64_MAX;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t77 = 10620816628922LLU;

	t77 = (((x329%x330)&x331)+x332);

	if (t77 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x333 = INT8_MIN;
	uint8_t x334 = 9U;
	volatile uint32_t x335 = 222U;
	int8_t x336 = -14;

	t78 = (((x333%x334)&x335)+x336);

	if (t78 != 208U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x337 = -284;
	volatile int32_t x338 = -1;
	int16_t x339 = 403;
	volatile int32_t t79 = -2452426;

	t79 = (((x337%x338)&x339)+x340);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MAX;
	int32_t x342 = 137311555;
	volatile int8_t x343 = -1;
	volatile int64_t x344 = INT64_MIN;
	int64_t t80 = -436643225LL;

	t80 = (((x341%x342)&x343)+x344);

	if (t80 != -9223372036784040001LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = 16338255467874LLU;
	uint64_t t81 = 177LLU;

	t81 = (((x345%x346)&x347)+x348);

	if (t81 != 61312LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = 3U;
	static uint64_t x351 = 152670364567LLU;
	static uint8_t x352 = 3U;
	volatile uint64_t t82 = 2LLU;

	t82 = (((x349%x350)&x351)+x352);

	if (t82 != 6LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x353 = 36248055U;
	static uint64_t x355 = UINT64_MAX;
	volatile uint64_t t83 = 235590774946733295LLU;

	t83 = (((x353%x354)&x355)+x356);

	if (t83 != 7166LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t t84 = 317LL;

	t84 = (((x357%x358)&x359)+x360);

	if (t84 != -32769LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = -1;
	uint64_t x362 = 21679LLU;
	static uint32_t x363 = UINT32_MAX;
	static uint64_t t85 = 13062773345LLU;

	t85 = (((x361%x362)&x363)+x364);

	if (t85 != 13246LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = 0;
	volatile uint32_t x366 = 5630U;
	static uint64_t x367 = 268911197917584LLU;
	int32_t x368 = 100;
	uint64_t t86 = 434997060LLU;

	t86 = (((x365%x366)&x367)+x368);

	if (t86 != 100LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x369 = UINT16_MAX;
	int8_t x370 = INT8_MIN;
	int32_t x371 = 3;
	static volatile int64_t x372 = -1LL;

	t87 = (((x369%x370)&x371)+x372);

	if (t87 != 2LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x377 = 3081733448076LLU;
	volatile int32_t x378 = INT32_MIN;
	uint64_t x379 = 759528064565540LLU;
	int64_t x380 = INT64_MAX;
	uint64_t t88 = 1709118LLU;

	t88 = (((x377%x378)&x379)+x380);

	if (t88 != 9223375099168555267LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x382 = INT8_MIN;
	int32_t x384 = -15;
	volatile int32_t t89 = -862228911;

	t89 = (((x381%x382)&x383)+x384);

	if (t89 != -15) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int16_t x387 = -1;
	uint64_t x388 = 1582825380972323LLU;

	t90 = (((x385%x386)&x387)+x388);

	if (t90 != 1582825380972338LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x390 = INT8_MIN;
	volatile int16_t x391 = 16329;
	uint8_t x392 = UINT8_MAX;
	int32_t t91 = 4;

	t91 = (((x389%x390)&x391)+x392);

	if (t91 != 328) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	int64_t x396 = INT64_MIN;

	t92 = (((x393%x394)&x395)+x396);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x397 = 11183426U;
	int32_t x398 = INT32_MAX;
	static volatile uint8_t x400 = 3U;
	uint64_t t93 = 817LLU;

	t93 = (((x397%x398)&x399)+x400);

	if (t93 != 11183429LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x401 = UINT16_MAX;
	int32_t x402 = INT32_MIN;
	uint16_t x403 = UINT16_MAX;
	static int32_t x404 = INT32_MIN;
	int32_t t94 = 71;

	t94 = (((x401%x402)&x403)+x404);

	if (t94 != -2147418113) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x406 = 21055LL;
	uint8_t x407 = 1U;
	volatile int16_t x408 = INT16_MAX;
	static volatile int64_t t95 = -28686455LL;

	t95 = (((x405%x406)&x407)+x408);

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	uint8_t x411 = 0U;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t96 = -35852669;

	t96 = (((x409%x410)&x411)+x412);

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MAX;
	int32_t x414 = INT32_MAX;
	int16_t x415 = 458;
	uint32_t x416 = 2130U;
	volatile int64_t t97 = -18635423LL;

	t97 = (((x413%x414)&x415)+x416);

	if (t97 != 2130LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x417 = INT64_MIN;
	uint16_t x418 = 113U;
	int8_t x420 = INT8_MIN;
	static volatile int64_t t98 = -419029244775LL;

	t98 = (((x417%x418)&x419)+x420);

	if (t98 != 4294967153LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x421 = 0U;
	int8_t x424 = 43;
	int32_t t99 = -182274455;

	t99 = (((x421%x422)&x423)+x424);

	if (t99 != 43) { NG(); } else { ; }
	
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

