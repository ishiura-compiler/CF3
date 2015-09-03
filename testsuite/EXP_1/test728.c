#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = 41LL;
static uint16_t x6 = 571U;
uint32_t x9 = 13U;
volatile uint8_t x15 = UINT8_MAX;
volatile int64_t t3 = 2985858487998921347LL;
volatile uint64_t t4 = 84LLU;
static uint32_t x28 = 357934665U;
uint32_t t6 = 412506U;
volatile int64_t x34 = INT64_MIN;
int64_t t8 = INT64_MAX;
int64_t t10 = -89301LL;
int32_t t12 = -1968438;
volatile int16_t x57 = INT16_MAX;
int32_t x64 = INT32_MIN;
volatile uint16_t x68 = UINT16_MAX;
int16_t x70 = INT16_MIN;
volatile uint8_t x71 = 2U;
int8_t x79 = INT8_MAX;
int32_t x88 = INT32_MIN;
int32_t x92 = INT32_MAX;
int64_t t20 = 575LL;
int64_t t21 = 35112070566070546LL;
int64_t x98 = INT64_MIN;
int8_t x101 = -27;
int64_t x105 = INT64_MIN;
static int8_t x110 = INT8_MIN;
volatile int32_t x121 = INT32_MIN;
volatile int32_t x123 = INT32_MAX;
static int32_t x124 = INT32_MIN;
int32_t t28 = INT32_MIN;
int16_t x128 = INT16_MIN;
int32_t t29 = -26739;
static volatile uint16_t x134 = UINT16_MAX;
volatile int16_t x136 = INT16_MIN;
int32_t x138 = 14783977;
int64_t t32 = 119189547407456745LL;
int64_t x143 = INT64_MAX;
int64_t x151 = -22763542420300LL;
uint16_t x154 = 81U;
static uint32_t x166 = 390U;
int16_t x170 = -16334;
int8_t x184 = INT8_MAX;
static int32_t x187 = 702658;
int64_t x188 = -1LL;
volatile int64_t t44 = -1357LL;
uint8_t x190 = UINT8_MAX;
static volatile int32_t x195 = INT32_MIN;
static int32_t x198 = INT32_MIN;
int8_t x202 = INT8_MIN;
uint8_t x205 = 1U;
int64_t x206 = -908274933268316LL;
volatile int32_t x212 = INT32_MAX;
int32_t t50 = INT32_MAX;
int32_t x213 = -1;
int8_t x214 = INT8_MIN;
int32_t x222 = -5035899;
int8_t x224 = 14;
uint64_t x226 = 264LLU;
volatile int8_t x228 = -1;
volatile uint64_t t54 = UINT64_MAX;
static volatile int64_t x236 = INT64_MAX;
int64_t x240 = INT64_MIN;
static volatile int16_t x241 = INT16_MAX;
volatile int8_t x243 = INT8_MIN;
volatile uint16_t x249 = 7U;
static int32_t x254 = 3053249;
static int32_t x256 = INT32_MAX;
volatile uint64_t t61 = 30LLU;
static int8_t x267 = 35;
int32_t t63 = 24;
uint32_t t64 = 25U;
int16_t x274 = -1;
int8_t x275 = -1;
int8_t x277 = INT8_MAX;
int8_t x281 = INT8_MIN;
uint16_t x283 = UINT16_MAX;
uint16_t x284 = 26036U;
uint32_t t68 = 2224595U;
int32_t x295 = -1;
int16_t x296 = -10995;
int16_t x303 = -1;
int64_t x308 = INT64_MAX;
int64_t x311 = -1LL;
static uint8_t x312 = UINT8_MAX;
volatile int8_t x313 = INT8_MIN;
volatile uint64_t t77 = 100789701937LLU;
uint16_t x325 = 182U;
uint32_t x331 = 182692889U;
volatile int64_t x333 = -1LL;
static int16_t x336 = -1;
static volatile int64_t t80 = 275557316456LL;
uint64_t x337 = 140828664976LLU;
int32_t x340 = -1;
uint64_t t81 = UINT64_MAX;
static volatile int32_t x357 = INT32_MAX;
static volatile uint64_t x360 = 4LLU;
uint8_t x361 = 18U;
int32_t t87 = -12478638;
int8_t x365 = 40;
volatile int64_t x367 = -1LL;
uint32_t x374 = 3099U;
int64_t x380 = INT64_MIN;
int32_t x382 = INT32_MIN;
int32_t x388 = INT32_MIN;
uint32_t x393 = 110U;
int16_t x395 = INT16_MIN;
int32_t x410 = 13043;
int32_t t99 = 864563586;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MAX;
	static int16_t x3 = -1;
	int64_t t0 = -2853037012487LL;

	t0 = (((x1%x2)/x3)^x4);

	if (t0 != 32809LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint16_t x7 = 2U;
	int8_t x8 = INT8_MAX;
	static int32_t t1 = 5;

	t1 = (((x5%x6)/x7)^x8);

	if (t1 != -19) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	static volatile uint64_t x11 = 1077LLU;
	int32_t x12 = INT32_MAX;
	static volatile uint64_t t2 = 2LLU;

	t2 = (((x9%x10)/x11)^x12);

	if (t2 != 2147483647LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 49U;
	int64_t x14 = -1LL;
	static uint8_t x16 = UINT8_MAX;

	t3 = (((x13%x14)/x15)^x16);

	if (t3 != 255LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	static volatile int32_t x18 = -1;
	int64_t x19 = -1LL;
	static volatile uint64_t x20 = 1546532525LLU;

	t4 = (((x17%x18)/x19)^x20);

	if (t4 != 1546532525LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1700783134721074852LL;
	volatile uint64_t x22 = 2650011LLU;
	static int8_t x23 = INT8_MIN;
	int64_t x24 = -1284999844LL;
	volatile uint64_t t5 = 29865LLU;

	t5 = (((x21%x22)/x23)^x24);

	if (t5 != 18446744072424551772LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int8_t x26 = -1;
	static int8_t x27 = INT8_MAX;

	t6 = (((x25%x26)/x27)^x28);

	if (t6 != 357934665U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1354U;
	static uint32_t x30 = 38U;
	int64_t x31 = -1LL;
	static int16_t x32 = -6740;
	int64_t t7 = -133LL;

	t7 = (((x29%x30)/x31)^x32);

	if (t7 != 6724LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MAX;

	t8 = (((x33%x34)/x35)^x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -62;
	int8_t x38 = INT8_MIN;
	int64_t x39 = 1615564990692LL;
	volatile int16_t x40 = INT16_MAX;
	volatile int64_t t9 = 3486568LL;

	t9 = (((x37%x38)/x39)^x40);

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 21722U;
	int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MIN;
	volatile int64_t x44 = 0LL;

	t10 = (((x41%x42)/x43)^x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	static volatile uint32_t x51 = UINT32_MAX;
	int32_t x52 = -329;
	volatile uint32_t t11 = 357768U;

	t11 = (((x49%x50)/x51)^x52);

	if (t11 != 4294966967U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MAX;
	static int16_t x54 = 1;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MAX;

	t12 = (((x53%x54)/x55)^x56);

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MIN;
	volatile int8_t x60 = INT8_MAX;
	int64_t t13 = -3977552LL;

	t13 = (((x57%x58)/x59)^x60);

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = 623943886761249LL;
	volatile int8_t x62 = 48;
	int32_t x63 = INT32_MIN;
	volatile int64_t t14 = 650362539LL;

	t14 = (((x61%x62)/x63)^x64);

	if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MIN;
	uint32_t x67 = 40U;
	static volatile int64_t t15 = 2317149684396795LL;

	t15 = (((x65%x66)/x67)^x68);

	if (t15 != 65535LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 4095LLU;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t16 = 15724123992323LLU;

	t16 = (((x69%x70)/x71)^x72);

	if (t16 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	volatile int64_t x74 = INT64_MAX;
	int32_t x75 = INT32_MIN;
	uint16_t x76 = 89U;
	volatile int64_t t17 = 751109068LL;

	t17 = (((x73%x74)/x75)^x76);

	if (t17 != 89LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = -82;
	uint32_t x80 = 61321U;
	uint32_t t18 = 3139U;

	t18 = (((x77%x78)/x79)^x80);

	if (t18 != 61321U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x85 = -1;
	volatile uint64_t x86 = 47LLU;
	uint32_t x87 = 789361124U;
	volatile uint64_t t19 = 538LLU;

	t19 = (((x85%x86)/x87)^x88);

	if (t19 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = -1480;

	t20 = (((x89%x90)/x91)^x92);

	if (t20 != 2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = 1283LL;
	uint16_t x94 = 22U;
	static volatile int16_t x95 = -1;
	int16_t x96 = 2;

	t21 = (((x93%x94)/x95)^x96);

	if (t21 != -5LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = 552292203496488567LL;
	uint16_t x99 = 105U;
	int64_t x100 = -1LL;
	volatile int64_t t22 = -118109006223855LL;

	t22 = (((x97%x98)/x99)^x100);

	if (t22 != -5259925747585606LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = -599;
	volatile int64_t x104 = 2172406805149704237LL;
	volatile int64_t t23 = -275333254720LL;

	t23 = (((x101%x102)/x103)^x104);

	if (t23 != 2172406805149704237LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x106 = INT16_MAX;
	uint64_t x107 = 66249044LLU;
	int32_t x108 = -1;
	volatile uint64_t t24 = 29LLU;

	t24 = (((x105%x106)/x107)^x108);

	if (t24 != 18446743795264113615LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x109 = 21LLU;
	int64_t x111 = 1LL;
	int64_t x112 = -27149466338517LL;
	volatile uint64_t t25 = 11702602575016LLU;

	t25 = (((x109%x110)/x111)^x112);

	if (t25 != 18446716924243213118LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	volatile int64_t x115 = INT64_MIN;
	uint8_t x116 = 122U;
	volatile int64_t t26 = -4317207LL;

	t26 = (((x113%x114)/x115)^x116);

	if (t26 != 122LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MAX;
	int16_t x118 = INT16_MIN;
	static uint8_t x119 = UINT8_MAX;
	static int16_t x120 = INT16_MAX;
	static int32_t t27 = 32;

	t27 = (((x117%x118)/x119)^x120);

	if (t27 != 32639) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = INT16_MIN;

	t28 = (((x121%x122)/x123)^x124);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MAX;
	int16_t x126 = -4297;
	int16_t x127 = 9;

	t29 = (((x125%x126)/x127)^x128);

	if (t29 != -32542) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = INT64_MIN;
	int16_t x130 = -78;
	static int32_t x131 = -5233451;
	volatile int8_t x132 = INT8_MIN;
	volatile int64_t t30 = 61807LL;

	t30 = (((x129%x130)/x131)^x132);

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x133 = 13U;
	static uint32_t x135 = UINT32_MAX;
	uint32_t t31 = 4480U;

	t31 = (((x133%x134)/x135)^x136);

	if (t31 != 4294934528U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MAX;
	int64_t x139 = 6491856442LL;
	static int32_t x140 = -1;

	t32 = (((x137%x138)/x139)^x140);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x141 = INT32_MIN;
	volatile int64_t x142 = INT64_MIN;
	uint64_t x144 = 5636512233LLU;
	volatile uint64_t t33 = 1332534LLU;

	t33 = (((x141%x142)/x143)^x144);

	if (t33 != 5636512233LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = -1;
	uint8_t x146 = 14U;
	int32_t x147 = INT32_MAX;
	int16_t x148 = -1;
	volatile int32_t t34 = 81618850;

	t34 = (((x145%x146)/x147)^x148);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = INT8_MAX;
	static int32_t x150 = -7285800;
	volatile int64_t x152 = 4322LL;
	static volatile int64_t t35 = -1416LL;

	t35 = (((x149%x150)/x151)^x152);

	if (t35 != 4322LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = -107;
	uint8_t x155 = 9U;
	uint32_t x156 = UINT32_MAX;
	uint32_t t36 = 2204U;

	t36 = (((x153%x154)/x155)^x156);

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	volatile int64_t x158 = INT64_MAX;
	int8_t x159 = 1;
	static int64_t x160 = -800LL;
	static volatile int64_t t37 = -202LL;

	t37 = (((x157%x158)/x159)^x160);

	if (t37 != 799LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MAX;
	static volatile int64_t x162 = -1LL;
	static uint64_t x163 = UINT64_MAX;
	uint64_t x164 = 1634283LLU;
	volatile uint64_t t38 = 7LLU;

	t38 = (((x161%x162)/x163)^x164);

	if (t38 != 1634283LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x165 = 511;
	static int32_t x167 = 599;
	int16_t x168 = INT16_MAX;
	volatile uint32_t t39 = 45317U;

	t39 = (((x165%x166)/x167)^x168);

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = INT16_MAX;
	volatile uint32_t x171 = 9833U;
	int16_t x172 = INT16_MIN;
	static uint32_t t40 = 55801334U;

	t40 = (((x169%x170)/x171)^x172);

	if (t40 != 4294934528U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1;
	uint32_t x174 = 5024698U;
	int64_t x175 = 1LL;
	int32_t x176 = INT32_MIN;
	volatile int64_t t41 = -23952313LL;

	t41 = (((x173%x174)/x175)^x176);

	if (t41 != -2143608445LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = 39122684464197LLU;
	static int32_t x180 = INT32_MIN;
	volatile uint64_t t42 = 3597867LLU;

	t42 = (((x177%x178)/x179)^x180);

	if (t42 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x181 = 5123U;
	static int32_t x182 = -5668;
	uint8_t x183 = UINT8_MAX;
	uint32_t t43 = 174388U;

	t43 = (((x181%x182)/x183)^x184);

	if (t43 != 107U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x185 = -1;
	static uint8_t x186 = UINT8_MAX;

	t44 = (((x185%x186)/x187)^x188);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x189 = UINT32_MAX;
	int32_t x191 = 1883262;
	int8_t x192 = INT8_MIN;
	volatile uint32_t t45 = 7406460U;

	t45 = (((x189%x190)/x191)^x192);

	if (t45 != 4294967168U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x193 = 26U;
	static int16_t x194 = -47;
	int32_t x196 = INT32_MIN;
	static volatile uint32_t t46 = 19229U;

	t46 = (((x193%x194)/x195)^x196);

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MAX;
	volatile int32_t x199 = INT32_MIN;
	static volatile uint64_t x200 = 6LLU;
	static uint64_t t47 = 1063296455LLU;

	t47 = (((x197%x198)/x199)^x200);

	if (t47 != 6LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	int8_t x203 = -1;
	int8_t x204 = INT8_MIN;
	int32_t t48 = 15;

	t48 = (((x201%x202)/x203)^x204);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x207 = 10293192698263LL;
	int8_t x208 = 22;
	volatile int64_t t49 = 32LL;

	t49 = (((x205%x206)/x207)^x208);

	if (t49 != 22LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 27377U;
	int8_t x210 = 1;
	uint8_t x211 = 1U;

	t50 = (((x209%x210)/x211)^x212);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x215 = 24819094U;
	static volatile uint64_t x216 = 188636019766LLU;
	static volatile uint64_t t51 = 541411892301LLU;

	t51 = (((x213%x214)/x215)^x216);

	if (t51 != 188636019867LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 13165555399LLU;
	int64_t x218 = 17305388800LL;
	uint32_t x219 = 2U;
	volatile uint32_t x220 = UINT32_MAX;
	volatile uint64_t t52 = 409955LLU;

	t52 = (((x217%x218)/x219)^x220);

	if (t52 != 6302124188LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x221 = 4U;
	int64_t x223 = INT64_MIN;
	int64_t t53 = -5LL;

	t53 = (((x221%x222)/x223)^x224);

	if (t53 != 14LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = 1LL;
	int32_t x227 = INT32_MIN;

	t54 = (((x225%x226)/x227)^x228);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x229 = -1LL;
	static volatile uint8_t x230 = UINT8_MAX;
	uint64_t x231 = UINT64_MAX;
	static int32_t x232 = -1260;
	volatile uint64_t t55 = 11LLU;

	t55 = (((x229%x230)/x231)^x232);

	if (t55 != 18446744073709550357LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = UINT32_MAX;
	uint16_t x234 = UINT16_MAX;
	uint32_t x235 = 1902U;
	static int64_t t56 = INT64_MAX;

	t56 = (((x233%x234)/x235)^x236);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MAX;
	uint32_t x239 = 42567U;
	static volatile int64_t t57 = -722LL;

	t57 = (((x237%x238)/x239)^x240);

	if (t57 != 9223372036854725359LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x242 = 1930U;
	int32_t x244 = 939;
	uint32_t t58 = 80716U;

	t58 = (((x241%x242)/x243)^x244);

	if (t58 != 939U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x250 = INT8_MIN;
	volatile int64_t x251 = INT64_MIN;
	int8_t x252 = INT8_MAX;
	int64_t t59 = 18LL;

	t59 = (((x249%x250)/x251)^x252);

	if (t59 != 127LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x253 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	int64_t t60 = 809LL;

	t60 = (((x253%x254)/x255)^x256);

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 6563U;
	static int64_t x258 = INT64_MIN;
	uint64_t x259 = UINT64_MAX;
	volatile uint32_t x260 = 44044249U;

	t61 = (((x257%x258)/x259)^x260);

	if (t61 != 44044249LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x261 = UINT8_MAX;
	static uint32_t x262 = 2U;
	int16_t x263 = -2393;
	volatile uint32_t x264 = UINT32_MAX;
	uint32_t t62 = UINT32_MAX;

	t62 = (((x261%x262)/x263)^x264);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MIN;
	volatile int32_t x266 = INT32_MIN;
	static int16_t x268 = INT16_MAX;

	t63 = (((x265%x266)/x267)^x268);

	if (t63 != -31833) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = -2;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 20023U;
	static volatile uint32_t x272 = 195694U;

	t64 = (((x269%x270)/x271)^x272);

	if (t64 != 113035U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = INT64_MAX;
	volatile int8_t x276 = INT8_MIN;
	int64_t t65 = -22172LL;

	t65 = (((x273%x274)/x275)^x276);

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	static int8_t x280 = INT8_MAX;
	volatile int64_t t66 = 15649991LL;

	t66 = (((x277%x278)/x279)^x280);

	if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x282 = -1;
	static volatile int32_t t67 = -481348;

	t67 = (((x281%x282)/x283)^x284);

	if (t67 != 26036) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = INT32_MAX;
	static uint32_t x286 = 7U;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 0;

	t68 = (((x285%x286)/x287)^x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -361;
	int8_t x290 = INT8_MIN;
	volatile uint8_t x291 = 47U;
	int32_t x292 = -920;
	volatile int32_t t69 = 1209;

	t69 = (((x289%x290)/x291)^x292);

	if (t69 != 918) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x293 = UINT32_MAX;
	uint64_t x294 = UINT64_MAX;
	volatile uint64_t t70 = 23992040LLU;

	t70 = (((x293%x294)/x295)^x296);

	if (t70 != 18446744073709540621LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MAX;
	static uint64_t x299 = 521432663396132LLU;
	static volatile int64_t x300 = INT64_MAX;
	volatile uint64_t t71 = 22399159LLU;

	t71 = (((x297%x298)/x299)^x300);

	if (t71 != 9223372036854740430LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = -1;
	volatile int32_t x302 = 364835;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t72 = 3619688;

	t72 = (((x301%x302)/x303)^x304);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x305 = INT32_MAX;
	int8_t x306 = INT8_MAX;
	volatile int16_t x307 = INT16_MIN;
	int64_t t73 = INT64_MAX;

	t73 = (((x305%x306)/x307)^x308);

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x309 = -14980;
	uint8_t x310 = 54U;
	int64_t t74 = -37219542200718LL;

	t74 = (((x309%x310)/x311)^x312);

	if (t74 != 233LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x314 = 228603115LLU;
	int8_t x315 = INT8_MIN;
	int8_t x316 = 9;
	static uint64_t t75 = 4137784930922LLU;

	t75 = (((x313%x314)/x315)^x316);

	if (t75 != 9LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x317 = INT32_MIN;
	int8_t x318 = -1;
	static int16_t x319 = -1;
	volatile int32_t x320 = INT32_MIN;
	int32_t t76 = INT32_MIN;

	t76 = (((x317%x318)/x319)^x320);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	volatile uint64_t x322 = UINT64_MAX;
	int64_t x323 = 47087LL;
	static int16_t x324 = 868;

	t77 = (((x321%x322)/x323)^x324);

	if (t77 != 195879373008347LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	int64_t x328 = -269210295671739114LL;
	static int64_t t78 = -317414LL;

	t78 = (((x325%x326)/x327)^x328);

	if (t78 != 269210295671739113LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x329 = INT8_MAX;
	volatile uint8_t x330 = UINT8_MAX;
	int8_t x332 = INT8_MAX;
	static volatile uint32_t t79 = 104554089U;

	t79 = (((x329%x330)/x331)^x332);

	if (t79 != 127U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x334 = -1;
	int8_t x335 = 43;

	t80 = (((x333%x334)/x335)^x336);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x338 = INT64_MAX;
	int8_t x339 = -1;

	t81 = (((x337%x338)/x339)^x340);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x341 = 169U;
	uint32_t x342 = UINT32_MAX;
	static int16_t x343 = -21;
	static int8_t x344 = -1;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (((x341%x342)/x343)^x344);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x345 = 28943;
	uint32_t x346 = 4U;
	volatile int16_t x347 = INT16_MAX;
	volatile int32_t x348 = -1;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (((x345%x346)/x347)^x348);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = INT64_MIN;
	volatile int32_t x350 = 954447;
	int32_t x351 = 527518161;
	int64_t x352 = -470216LL;
	static volatile int64_t t84 = 3736338761676LL;

	t84 = (((x349%x350)/x351)^x352);

	if (t84 != -470216LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x353 = UINT32_MAX;
	static int64_t x354 = -3126563246482209242LL;
	uint32_t x355 = UINT32_MAX;
	uint64_t x356 = 3272759647073LLU;
	static volatile uint64_t t85 = 18LLU;

	t85 = (((x353%x354)/x355)^x356);

	if (t85 != 3272759647072LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x358 = -2;
	int16_t x359 = -1;
	static volatile uint64_t t86 = 4556774050485853762LLU;

	t86 = (((x357%x358)/x359)^x360);

	if (t86 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x362 = 58U;
	volatile int16_t x363 = INT16_MAX;
	uint16_t x364 = UINT16_MAX;

	t87 = (((x361%x362)/x363)^x364);

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = INT32_MAX;
	int64_t x368 = -1LL;
	int64_t t88 = 131LL;

	t88 = (((x365%x366)/x367)^x368);

	if (t88 != 39LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -112488095490564021LL;
	int16_t x370 = 2461;
	volatile int8_t x371 = -1;
	uint8_t x372 = 6U;
	int64_t t89 = -8151LL;

	t89 = (((x369%x370)/x371)^x372);

	if (t89 != 211LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = INT8_MAX;
	static int64_t x375 = INT64_MAX;
	uint64_t x376 = 2758783452057885LLU;
	static uint64_t t90 = 9752198642297049LLU;

	t90 = (((x373%x374)/x375)^x376);

	if (t90 != 2758783452057885LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x377 = UINT64_MAX;
	int8_t x378 = 1;
	int64_t x379 = 523LL;
	uint64_t t91 = 249034LLU;

	t91 = (((x377%x378)/x379)^x380);

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = -1;
	uint8_t x383 = UINT8_MAX;
	uint16_t x384 = 1U;
	int32_t t92 = 474570637;

	t92 = (((x381%x382)/x383)^x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x385 = INT8_MIN;
	volatile int32_t x386 = -1655;
	int16_t x387 = INT16_MIN;
	static int32_t t93 = INT32_MIN;

	t93 = (((x385%x386)/x387)^x388);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = -21;
	int32_t x390 = INT32_MIN;
	volatile uint8_t x391 = UINT8_MAX;
	volatile int16_t x392 = -1;
	int32_t t94 = 15752907;

	t94 = (((x389%x390)/x391)^x392);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x394 = 3U;
	int64_t x396 = -627759084390522LL;
	volatile int64_t t95 = 237521843167343LL;

	t95 = (((x393%x394)/x395)^x396);

	if (t95 != -627759084390522LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = -1;
	volatile int8_t x398 = 1;
	int8_t x399 = INT8_MIN;
	int64_t x400 = -3717797157722969LL;
	int64_t t96 = -290658425321456LL;

	t96 = (((x397%x398)/x399)^x400);

	if (t96 != -3717797157722969LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = 22880;
	uint8_t x402 = UINT8_MAX;
	static int16_t x403 = INT16_MIN;
	static int64_t x404 = INT64_MAX;
	static int64_t t97 = INT64_MAX;

	t97 = (((x401%x402)/x403)^x404);

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = 22;
	static int16_t x406 = INT16_MIN;
	static volatile int8_t x407 = INT8_MAX;
	static volatile int32_t x408 = INT32_MAX;
	int32_t t98 = INT32_MAX;

	t98 = (((x405%x406)/x407)^x408);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x409 = 7U;
	static int8_t x411 = INT8_MIN;
	volatile uint16_t x412 = UINT16_MAX;

	t99 = (((x409%x410)/x411)^x412);

	if (t99 != 65535) { NG(); } else { ; }
	
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

