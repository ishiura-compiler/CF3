#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint64_t t0 = 80285099997856LLU;
uint64_t x13 = 1737436812446LLU;
int32_t x14 = 266420761;
uint8_t x20 = 2U;
volatile uint64_t t5 = 31324868710226LLU;
int8_t x33 = -1;
uint8_t x37 = 26U;
int64_t x43 = 122656LL;
static int32_t x49 = INT32_MIN;
int16_t x57 = INT16_MAX;
static volatile int32_t x59 = 3659;
int16_t x61 = -1;
int64_t x64 = 7345392369237756LL;
static int64_t t14 = 0LL;
static uint16_t x66 = UINT16_MAX;
static volatile int64_t x71 = INT64_MAX;
volatile int64_t t16 = -673310761587839LL;
int8_t x80 = INT8_MIN;
int32_t x81 = INT32_MAX;
int16_t x84 = INT16_MIN;
uint16_t x90 = UINT16_MAX;
int32_t x92 = INT32_MIN;
uint32_t x93 = 7887U;
volatile uint8_t x95 = 4U;
static int64_t x96 = 98956LL;
uint32_t t23 = 3689320U;
uint16_t x101 = 26U;
int8_t x104 = -28;
volatile int32_t t24 = -10267;
volatile int32_t x106 = -1;
uint64_t x108 = UINT64_MAX;
int64_t t29 = -106086187429LL;
static volatile int64_t x128 = INT64_MAX;
int64_t x129 = -1LL;
int32_t x137 = -1;
static int64_t x138 = 13143175620506LL;
volatile uint64_t t34 = 27797759760016LLU;
uint16_t x149 = 10U;
uint16_t x154 = 278U;
static int8_t x156 = -1;
uint8_t x158 = 38U;
int32_t t40 = INT32_MIN;
int64_t x173 = INT64_MAX;
volatile uint64_t t43 = 30540773855LLU;
int64_t x191 = -5359686562LL;
int32_t x192 = INT32_MIN;
volatile int64_t t46 = 6047LL;
uint32_t x193 = UINT32_MAX;
static int8_t x196 = -1;
volatile uint32_t t49 = 537U;
int8_t x211 = -1;
uint32_t x214 = 3289U;
uint32_t x215 = UINT32_MAX;
uint8_t x216 = UINT8_MAX;
volatile uint64_t x219 = 6169086LLU;
static volatile int16_t x222 = INT16_MAX;
int64_t t53 = INT64_MIN;
volatile int8_t x225 = -1;
static uint16_t x228 = 248U;
int32_t x229 = -529737;
int64_t x231 = INT64_MIN;
uint32_t x233 = 6U;
int32_t x236 = 8059;
static volatile uint32_t t56 = 539U;
uint32_t x245 = UINT32_MAX;
int8_t x251 = INT8_MIN;
uint64_t t60 = 2804079580061538LLU;
int8_t x256 = INT8_MIN;
int32_t t61 = 416583938;
int16_t x263 = INT16_MIN;
int32_t x267 = 3420653;
uint8_t x278 = UINT8_MAX;
uint8_t x279 = 71U;
volatile uint16_t x282 = UINT16_MAX;
static int32_t t68 = -1260694;
int16_t x288 = INT16_MAX;
int8_t x293 = INT8_MIN;
int8_t x295 = INT8_MAX;
uint8_t x301 = UINT8_MAX;
static volatile uint32_t x302 = UINT32_MAX;
int64_t t74 = 127653LL;
static uint32_t x311 = UINT32_MAX;
int8_t x314 = INT8_MIN;
int64_t t76 = -21463203LL;
int32_t x321 = INT32_MIN;
int8_t x344 = -1;
uint32_t x347 = 11U;
int8_t x351 = -8;
volatile int16_t x358 = INT16_MIN;
uint64_t t88 = 146402008482LLU;
int16_t x371 = INT16_MIN;
volatile uint32_t t90 = 227821566U;
int32_t x378 = -4563;
int64_t t92 = 57703LL;
static int8_t x382 = -25;
int16_t x384 = INT16_MIN;
int32_t x385 = -833;
uint64_t x386 = 865287116483807072LLU;
static volatile int8_t x392 = INT8_MAX;
int8_t x397 = -11;
int64_t x399 = 2077364249LL;
volatile uint32_t x400 = UINT32_MAX;
int32_t x408 = 104;
int16_t x412 = INT16_MIN;


void f0(void) {
	static int8_t x1 = -1;
	int32_t x2 = INT32_MIN;
	uint64_t x4 = 229894347615366LLU;

	t0 = (((x1%x2)%x3)+x4);

	if (t0 != 229894347615365LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 18;
	uint16_t x6 = 61U;
	static volatile int32_t x7 = INT32_MAX;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 132729768;

	t1 = (((x5%x6)%x7)+x8);

	if (t1 != -110) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 24581400LLU;
	int64_t x10 = INT64_MAX;
	uint8_t x11 = 2U;
	int32_t x12 = 5036;
	uint64_t t2 = 57035LLU;

	t2 = (((x9%x10)%x11)+x12);

	if (t2 != 5036LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = 3658;
	uint64_t x16 = 767LLU;
	uint64_t t3 = 650300272LLU;

	t3 = (((x13%x14)%x15)+x16);

	if (t3 != 1310LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 19U;
	int8_t x18 = 3;
	uint16_t x19 = 10U;
	int32_t t4 = -1615;

	t4 = (((x17%x18)%x19)+x20);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 4180540811503407LLU;
	static int32_t x22 = -1;
	volatile int64_t x23 = -1LL;
	int64_t x24 = INT64_MIN;

	t5 = (((x21%x22)%x23)+x24);

	if (t5 != 9227552577666279215LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int64_t x26 = INT64_MIN;
	uint64_t x27 = UINT64_MAX;
	volatile uint16_t x28 = 3617U;
	static uint64_t t6 = 2541827098LLU;

	t6 = (((x25%x26)%x27)+x28);

	if (t6 != 2147487264LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	static volatile int64_t x35 = INT64_MIN;
	uint8_t x36 = UINT8_MAX;
	volatile int64_t t7 = 26865360032409121LL;

	t7 = (((x33%x34)%x35)+x36);

	if (t7 != 254LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = -1;
	int32_t x39 = -394;
	int32_t x40 = -1;
	volatile int32_t t8 = 13884764;

	t8 = (((x37%x38)%x39)+x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MAX;
	static int8_t x42 = -1;
	int64_t x44 = -1LL;
	static int64_t t9 = 419069434168731248LL;

	t9 = (((x41%x42)%x43)+x44);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = 0U;
	int8_t x46 = INT8_MAX;
	volatile uint64_t x47 = 8543879392949LLU;
	int8_t x48 = INT8_MIN;
	uint64_t t10 = 33131004082LLU;

	t10 = (((x45%x46)%x47)+x48);

	if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x50 = INT64_MIN;
	int64_t x51 = INT64_MIN;
	static uint8_t x52 = 4U;
	static volatile int64_t t11 = 91265980894004811LL;

	t11 = (((x49%x50)%x51)+x52);

	if (t11 != -2147483644LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MAX;
	int32_t x54 = INT32_MIN;
	int32_t x55 = 493680966;
	static uint32_t x56 = UINT32_MAX;
	uint32_t t12 = 187915U;

	t12 = (((x53%x54)%x55)+x56);

	if (t12 != 32766U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = 494U;
	static volatile uint16_t x60 = UINT16_MAX;
	int32_t t13 = 2514501;

	t13 = (((x57%x58)%x59)+x60);

	if (t13 != 65698) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = INT64_MIN;
	int64_t x63 = -1LL;

	t14 = (((x61%x62)%x63)+x64);

	if (t14 != 7345392369237756LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int32_t x67 = INT32_MAX;
	volatile uint8_t x68 = 48U;
	int32_t t15 = 49;

	t15 = (((x65%x66)%x67)+x68);

	if (t15 != -32720) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = 5U;
	uint32_t x70 = UINT32_MAX;
	volatile uint16_t x72 = UINT16_MAX;

	t16 = (((x69%x70)%x71)+x72);

	if (t16 != 65540LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = -466825722108217LL;
	uint64_t x75 = 204282195922855LLU;
	volatile int16_t x76 = INT16_MAX;
	uint64_t t17 = 108066718025212464LLU;

	t17 = (((x73%x74)%x75)+x76);

	if (t17 != 61781875777755LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	uint8_t x78 = 5U;
	int32_t x79 = INT32_MAX;
	static int32_t t18 = 442198;

	t18 = (((x77%x78)%x79)+x80);

	if (t18 != -131) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = INT16_MAX;
	uint32_t x83 = 18U;
	volatile uint32_t t19 = 83239U;

	t19 = (((x81%x82)%x83)+x84);

	if (t19 != 4294934529U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = -1LL;
	uint64_t x86 = UINT64_MAX;
	volatile int64_t x87 = 37719295340420LL;
	uint32_t x88 = 428773581U;
	volatile uint64_t t20 = 869415517909573413LLU;

	t20 = (((x85%x86)%x87)+x88);

	if (t20 != 428773581LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MAX;
	int64_t x91 = INT64_MIN;
	volatile int64_t t21 = -191782LL;

	t21 = (((x89%x90)%x91)+x92);

	if (t21 != -2147450881LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x94 = 118037927502703458LLU;
	uint64_t t22 = 30616LLU;

	t22 = (((x93%x94)%x95)+x96);

	if (t22 != 98959LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MAX;
	volatile int16_t x99 = INT16_MAX;
	uint32_t x100 = UINT32_MAX;

	t23 = (((x97%x98)%x99)+x100);

	if (t23 != 126U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x102 = UINT16_MAX;
	int32_t x103 = -1;

	t24 = (((x101%x102)%x103)+x104);

	if (t24 != -28) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MAX;
	uint8_t x107 = 43U;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x105%x106)%x107)+x108);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MAX;
	int64_t x110 = INT64_MIN;
	int32_t x111 = 33036;
	static int8_t x112 = 7;
	volatile int64_t t26 = -984019053LL;

	t26 = (((x109%x110)%x111)+x112);

	if (t26 != 134LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = INT16_MIN;
	volatile int64_t x114 = -1518LL;
	int8_t x115 = -1;
	volatile uint8_t x116 = UINT8_MAX;
	int64_t t27 = -261094457797956638LL;

	t27 = (((x113%x114)%x115)+x116);

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = 28;
	int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = 6U;
	int32_t t28 = -3122697;

	t28 = (((x117%x118)%x119)+x120);

	if (t28 != 34) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = 1404LL;
	volatile int8_t x123 = INT8_MAX;
	uint8_t x124 = 18U;

	t29 = (((x121%x122)%x123)+x124);

	if (t29 != -37LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	int16_t x126 = -1;
	uint32_t x127 = 357U;
	volatile int64_t t30 = INT64_MAX;

	t30 = (((x125%x126)%x127)+x128);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = INT64_MIN;
	uint64_t x131 = 3639066052LLU;
	int64_t x132 = -1LL;
	uint64_t t31 = 2004234182894394LLU;

	t31 = (((x129%x130)%x131)+x132);

	if (t31 != 1599973954LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MAX;
	int16_t x134 = INT16_MIN;
	volatile int64_t x135 = INT64_MAX;
	volatile int8_t x136 = INT8_MIN;
	volatile int64_t t32 = 77162LL;

	t32 = (((x133%x134)%x135)+x136);

	if (t32 != 32639LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x139 = INT32_MAX;
	uint32_t x140 = 8838U;
	int64_t t33 = 8166LL;

	t33 = (((x137%x138)%x139)+x140);

	if (t33 != 8837LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = UINT16_MAX;
	uint32_t x142 = 782691949U;
	volatile uint64_t x143 = 45804525373373LLU;
	uint8_t x144 = 16U;

	t34 = (((x141%x142)%x143)+x144);

	if (t34 != 65551LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MAX;
	uint32_t x146 = 3836U;
	uint16_t x147 = 13U;
	volatile int32_t x148 = -244;
	volatile uint32_t t35 = 976680207U;

	t35 = (((x145%x146)%x147)+x148);

	if (t35 != 4294967062U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x150 = INT8_MAX;
	uint8_t x151 = 26U;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t36 = -19853;

	t36 = (((x149%x150)%x151)+x152);

	if (t36 != 65545) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x153 = 0U;
	int16_t x155 = INT16_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (((x153%x154)%x155)+x156);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = UINT64_MAX;
	static int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MAX;
	uint64_t t38 = 898154916240LLU;

	t38 = (((x157%x158)%x159)+x160);

	if (t38 != 2147483682LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	uint32_t x162 = 2667960U;
	int32_t x163 = INT32_MIN;
	uint64_t x164 = 16739785319498179LLU;
	volatile uint64_t t39 = 1193226822LLU;

	t39 = (((x161%x162)%x163)+x164);

	if (t39 != 16739785319563714LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = 3153;
	int16_t x166 = 70;
	uint8_t x167 = 3U;
	int32_t x168 = INT32_MIN;

	t40 = (((x165%x166)%x167)+x168);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = -32;
	volatile uint16_t x170 = 2511U;
	int16_t x171 = INT16_MIN;
	int64_t x172 = -180410LL;
	int64_t t41 = 161225LL;

	t41 = (((x169%x170)%x171)+x172);

	if (t41 != -180442LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x174 = 45;
	int32_t x175 = -6790;
	static int16_t x176 = INT16_MIN;
	volatile int64_t t42 = -21128387147615LL;

	t42 = (((x173%x174)%x175)+x176);

	if (t42 != -32761LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x177 = 7U;
	volatile uint64_t x178 = 6330373741LLU;
	int8_t x179 = -1;
	int8_t x180 = -27;

	t43 = (((x177%x178)%x179)+x180);

	if (t43 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 6401U;
	static int8_t x182 = 1;
	int8_t x183 = -1;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (((x181%x182)%x183)+x184);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = 0;
	int8_t x186 = -14;
	int16_t x187 = -1;
	int32_t x188 = INT32_MIN;
	int32_t t45 = INT32_MIN;

	t45 = (((x185%x186)%x187)+x188);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	int64_t x190 = -1272170LL;

	t46 = (((x189%x190)%x191)+x192);

	if (t46 != -2147544336LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x194 = -1LL;
	uint32_t x195 = 7099U;
	volatile int64_t t47 = 24989859767159LL;

	t47 = (((x193%x194)%x195)+x196);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = 582668;
	int8_t x198 = INT8_MIN;
	uint32_t x199 = 1U;
	uint64_t x200 = 103878LLU;
	volatile uint64_t t48 = 3001870979781419LLU;

	t48 = (((x197%x198)%x199)+x200);

	if (t48 != 103878LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = 1519;
	uint32_t x206 = UINT32_MAX;
	uint16_t x207 = 1U;
	volatile int32_t x208 = -8372328;

	t49 = (((x205%x206)%x207)+x208);

	if (t49 != 4286594968U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x209 = 14836U;
	volatile uint32_t x210 = UINT32_MAX;
	volatile uint16_t x212 = UINT16_MAX;
	uint32_t t50 = 662600576U;

	t50 = (((x209%x210)%x211)+x212);

	if (t50 != 80371U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MIN;
	static int64_t t51 = -163489507LL;

	t51 = (((x213%x214)%x215)+x216);

	if (t51 != -2899LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = 33;
	int32_t x220 = INT32_MIN;
	volatile uint64_t t52 = 3283086LLU;

	t52 = (((x217%x218)%x219)+x220);

	if (t52 != 18446744071566479620LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MAX;
	int32_t x223 = -1;
	volatile int64_t x224 = INT64_MIN;

	t53 = (((x221%x222)%x223)+x224);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x226 = UINT8_MAX;
	int32_t x227 = 56440;
	volatile int32_t t54 = -1;

	t54 = (((x225%x226)%x227)+x228);

	if (t54 != 247) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x230 = -1434;
	uint8_t x232 = UINT8_MAX;
	static int64_t t55 = 19576LL;

	t55 = (((x229%x230)%x231)+x232);

	if (t55 != -336LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x234 = UINT32_MAX;
	volatile int16_t x235 = INT16_MAX;

	t56 = (((x233%x234)%x235)+x236);

	if (t56 != 8065U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -9;
	static int32_t x238 = -1;
	int16_t x239 = INT16_MIN;
	volatile int8_t x240 = INT8_MIN;
	static volatile int32_t t57 = 52;

	t57 = (((x237%x238)%x239)+x240);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	int16_t x242 = -1;
	uint8_t x243 = UINT8_MAX;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t58 = INT32_MIN;

	t58 = (((x241%x242)%x243)+x244);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x246 = 3;
	int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MIN;
	volatile uint32_t t59 = 421133U;

	t59 = (((x245%x246)%x247)+x248);

	if (t59 != 4294967168U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	volatile uint64_t x250 = 227986LLU;
	uint32_t x252 = UINT32_MAX;

	t60 = (((x249%x250)%x251)+x252);

	if (t60 != 4295045717LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = -1;
	int16_t x254 = INT16_MAX;
	static int8_t x255 = INT8_MAX;

	t61 = (((x253%x254)%x255)+x256);

	if (t61 != -129) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -7;
	uint32_t x258 = UINT32_MAX;
	int32_t x259 = 9313765;
	int32_t x260 = -76;
	uint32_t t62 = 10U;

	t62 = (((x257%x258)%x259)+x260);

	if (t62 != 1321548U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = INT16_MIN;
	static volatile uint64_t x262 = UINT64_MAX;
	uint16_t x264 = 82U;
	uint64_t t63 = 6667634472116LLU;

	t63 = (((x261%x262)%x263)+x264);

	if (t63 != 82LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = 1397673301221202879LLU;
	int16_t x266 = -14576;
	uint16_t x268 = 4301U;
	static volatile uint64_t t64 = 174388513LLU;

	t64 = (((x265%x266)%x267)+x268);

	if (t64 != 2996559LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x269 = -1LL;
	int8_t x270 = INT8_MAX;
	int32_t x271 = 66393;
	volatile uint16_t x272 = 1U;
	static int64_t t65 = -4449368476860LL;

	t65 = (((x269%x270)%x271)+x272);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1;
	int32_t x274 = -1;
	volatile int8_t x275 = 11;
	static int64_t x276 = INT64_MIN;
	static int64_t t66 = INT64_MIN;

	t66 = (((x273%x274)%x275)+x276);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = 4842;
	int16_t x280 = INT16_MAX;
	volatile int32_t t67 = 271326;

	t67 = (((x277%x278)%x279)+x280);

	if (t67 != 32806) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -1;
	volatile uint8_t x283 = UINT8_MAX;
	int32_t x284 = -1;

	t68 = (((x281%x282)%x283)+x284);

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x285 = 6;
	volatile int64_t x286 = 23LL;
	int64_t x287 = INT64_MIN;
	int64_t t69 = 144858904014LL;

	t69 = (((x285%x286)%x287)+x288);

	if (t69 != 32773LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MIN;
	int64_t x291 = -2939347483998LL;
	int8_t x292 = -1;
	int64_t t70 = 840390361288LL;

	t70 = (((x289%x290)%x291)+x292);

	if (t70 != -129LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x294 = -1;
	int64_t x296 = INT64_MIN;
	int64_t t71 = INT64_MIN;

	t71 = (((x293%x294)%x295)+x296);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x297 = 357U;
	uint8_t x298 = 4U;
	uint64_t x299 = UINT64_MAX;
	static int8_t x300 = 51;
	volatile uint64_t t72 = 613477799LLU;

	t72 = (((x297%x298)%x299)+x300);

	if (t72 != 52LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x303 = INT32_MIN;
	int8_t x304 = 1;
	volatile uint32_t t73 = 434067U;

	t73 = (((x301%x302)%x303)+x304);

	if (t73 != 256U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MAX;
	int64_t x307 = INT64_MIN;
	int16_t x308 = 304;

	t74 = (((x305%x306)%x307)+x308);

	if (t74 != -2147483344LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = -162;
	volatile int64_t x310 = INT64_MIN;
	static int8_t x312 = INT8_MAX;
	int64_t t75 = -20506LL;

	t75 = (((x309%x310)%x311)+x312);

	if (t75 != -35LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x313 = UINT16_MAX;
	int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MIN;

	t76 = (((x313%x314)%x315)+x316);

	if (t76 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MAX;
	static int32_t x318 = -3;
	volatile uint16_t x319 = 82U;
	int32_t x320 = INT32_MIN;
	int32_t t77 = 7;

	t77 = (((x317%x318)%x319)+x320);

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = 2413883084LL;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = (((x321%x322)%x323)+x324);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = 11983U;
	uint64_t x326 = UINT64_MAX;
	static volatile int16_t x327 = INT16_MIN;
	int32_t x328 = 8344630;
	uint64_t t79 = 15349979481879LLU;

	t79 = (((x325%x326)%x327)+x328);

	if (t79 != 8356613LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = -1;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = 27U;
	int64_t x332 = 2182801925LL;
	int64_t t80 = -10LL;

	t80 = (((x329%x330)%x331)+x332);

	if (t80 != 2182801924LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x333 = INT8_MIN;
	int8_t x334 = INT8_MIN;
	static volatile uint16_t x335 = UINT16_MAX;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t81 = 323501;

	t81 = (((x333%x334)%x335)+x336);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x337 = 119560310779LL;
	uint64_t x338 = UINT64_MAX;
	static int64_t x339 = INT64_MIN;
	volatile int32_t x340 = INT32_MAX;
	uint64_t t82 = 23953901144274LLU;

	t82 = (((x337%x338)%x339)+x340);

	if (t82 != 121707794426LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MAX;
	int8_t x342 = INT8_MIN;
	int32_t x343 = -12641538;
	int64_t t83 = 4564297594038LL;

	t83 = (((x341%x342)%x343)+x344);

	if (t83 != 126LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = INT64_MIN;
	static int64_t x346 = INT64_MAX;
	volatile int32_t x348 = -736837;
	volatile int64_t t84 = 27691958944915LL;

	t84 = (((x345%x346)%x347)+x348);

	if (t84 != -736838LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = 285LL;
	uint16_t x350 = UINT16_MAX;
	int64_t x352 = -1LL;
	int64_t t85 = -21185727801LL;

	t85 = (((x349%x350)%x351)+x352);

	if (t85 != 4LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = INT8_MAX;
	uint8_t x354 = 114U;
	volatile int32_t x355 = 379615;
	uint8_t x356 = 0U;
	volatile int32_t t86 = -25419905;

	t86 = (((x353%x354)%x355)+x356);

	if (t86 != 13) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x357 = -1;
	uint64_t x359 = UINT64_MAX;
	volatile uint8_t x360 = 13U;
	volatile uint64_t t87 = 3LLU;

	t87 = (((x357%x358)%x359)+x360);

	if (t87 != 13LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x361 = 42U;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 263276796083974LLU;
	uint8_t x364 = 5U;

	t88 = (((x361%x362)%x363)+x364);

	if (t88 != 47LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x365 = INT32_MIN;
	volatile int32_t x366 = INT32_MAX;
	int64_t x367 = INT64_MIN;
	int16_t x368 = -1;
	int64_t t89 = 0LL;

	t89 = (((x365%x366)%x367)+x368);

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x369 = INT16_MIN;
	uint32_t x370 = 12266U;
	int32_t x372 = -1;

	t90 = (((x369%x370)%x371)+x372);

	if (t90 != 6893U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x373 = 54;
	static int32_t x374 = INT32_MAX;
	static int64_t x375 = -29462484096LL;
	static uint32_t x376 = 103072145U;
	volatile int64_t t91 = 1229438LL;

	t91 = (((x373%x374)%x375)+x376);

	if (t91 != 103072199LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x379 = INT64_MAX;
	volatile int8_t x380 = INT8_MAX;

	t92 = (((x377%x378)%x379)+x380);

	if (t92 != -700LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = -1444568799546543872LL;
	int16_t x383 = 3987;
	int64_t t93 = -24044907LL;

	t93 = (((x381%x382)%x383)+x384);

	if (t93 != -32790LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x387 = -1;
	static int64_t x388 = -57100292997688858LL;
	volatile uint64_t t94 = 60LLU;

	t94 = (((x385%x386)%x387)+x388);

	if (t94 != 218614334551913413LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = UINT8_MAX;
	static int64_t x390 = INT64_MIN;
	volatile int8_t x391 = INT8_MIN;
	int64_t t95 = 321691LL;

	t95 = (((x389%x390)%x391)+x392);

	if (t95 != 254LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	volatile uint8_t x395 = UINT8_MAX;
	int8_t x396 = INT8_MIN;
	static int32_t t96 = -488493;

	t96 = (((x393%x394)%x395)+x396);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x398 = INT32_MIN;
	volatile int64_t t97 = 1025455169756987940LL;

	t97 = (((x397%x398)%x399)+x400);

	if (t97 != 4294967284LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = INT32_MAX;
	uint16_t x406 = 25492U;
	uint16_t x407 = 117U;
	volatile int32_t t98 = 3;

	t98 = (((x405%x406)%x407)+x408);

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = 58;
	volatile int8_t x410 = 2;
	int8_t x411 = -1;
	volatile int32_t t99 = 26630;

	t99 = (((x409%x410)%x411)+x412);

	if (t99 != -32768) { NG(); } else { ; }
	
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

