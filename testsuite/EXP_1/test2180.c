#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
static uint64_t x9 = 6037738533420851740LLU;
uint8_t x10 = UINT8_MAX;
static uint16_t x12 = 8U;
volatile int32_t t2 = -502866;
static int64_t x15 = -1LL;
int32_t x20 = INT32_MIN;
static volatile int32_t t5 = -57367;
static int32_t x29 = INT32_MAX;
static int16_t x30 = INT16_MIN;
static volatile int32_t t9 = -428;
static uint64_t x46 = 3161LLU;
int64_t x49 = 99868907670092LL;
int64_t x52 = INT64_MIN;
uint64_t x56 = UINT64_MAX;
volatile int32_t t14 = -4307;
static int32_t x62 = INT32_MIN;
volatile int32_t t15 = -897568;
static int32_t x66 = -763;
int16_t x68 = INT16_MIN;
int64_t x81 = 2LL;
int64_t x83 = 87LL;
int64_t x85 = 8150LL;
uint32_t x88 = 4870U;
int32_t x103 = -1;
static int64_t x104 = 10709670LL;
static int16_t x105 = INT16_MIN;
uint32_t x115 = UINT32_MAX;
static volatile int8_t x118 = INT8_MIN;
int8_t x128 = 1;
volatile int32_t t32 = -161967;
int16_t x133 = -1;
static int32_t x134 = INT32_MIN;
volatile int32_t t33 = -1;
int32_t x150 = INT32_MIN;
int8_t x158 = INT8_MAX;
volatile int32_t x159 = INT32_MIN;
int64_t x163 = -1237762LL;
int32_t t40 = 2002487;
int32_t t41 = 0;
static volatile int32_t x169 = 10;
volatile int8_t x170 = INT8_MIN;
int16_t x176 = 8;
volatile int8_t x178 = 1;
int64_t x183 = -4222861850LL;
static uint8_t x185 = 57U;
static uint64_t x186 = UINT64_MAX;
uint32_t x190 = UINT32_MAX;
int8_t x191 = INT8_MIN;
int8_t x193 = 1;
int32_t x198 = INT32_MIN;
static int16_t x205 = -1;
int32_t t51 = -11262;
volatile int32_t t52 = 44571;
int64_t x213 = -60872LL;
volatile int64_t x217 = INT64_MIN;
int64_t x220 = INT64_MIN;
int8_t x222 = INT8_MAX;
volatile int64_t x227 = INT64_MIN;
volatile uint8_t x228 = 0U;
static uint8_t x231 = UINT8_MAX;
int32_t x235 = 136879;
volatile uint32_t x237 = UINT32_MAX;
int8_t x238 = -1;
int32_t x250 = INT32_MAX;
int16_t x254 = INT16_MAX;
int32_t x257 = INT32_MAX;
int32_t x265 = -194260062;
volatile uint64_t x266 = 815527575LLU;
uint32_t x273 = UINT32_MAX;
static int8_t x279 = INT8_MIN;
int64_t x280 = -478194LL;
int16_t x299 = INT16_MIN;
static volatile uint16_t x302 = UINT16_MAX;
volatile int16_t x310 = INT16_MIN;
volatile uint64_t x312 = 458348287723LLU;
int64_t x314 = 59419LL;
int8_t x316 = INT8_MIN;
int32_t t79 = -3295;
int32_t t80 = -394;
static int32_t x327 = INT32_MIN;
uint64_t x331 = 1508689301006LLU;
int64_t x332 = -82546921278LL;
volatile int32_t t83 = -13736;
int8_t x343 = 6;
uint32_t x344 = 1807637462U;
volatile uint32_t x345 = 24U;
volatile int64_t x346 = -1LL;
int16_t x351 = INT16_MIN;
static int32_t t87 = 1;
static int16_t x353 = 424;
volatile int32_t t89 = -1;
int64_t x363 = -8562085389LL;
volatile int8_t x365 = -1;
int8_t x367 = INT8_MAX;
static uint16_t x369 = 4123U;
int16_t x371 = INT16_MAX;
volatile int32_t t92 = -169226861;
uint8_t x375 = 9U;
uint64_t x376 = 1716LLU;
int16_t x377 = 3803;
int8_t x378 = INT8_MIN;
static volatile uint64_t x382 = 514462400718372422LLU;
int32_t t96 = 6249760;
static int16_t x390 = 831;
int8_t x396 = -10;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	volatile int16_t x3 = INT16_MAX;
	static int16_t x4 = -130;
	int32_t t0 = 979;

	t0 = (((x1^x2)|x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = 388794;
	static uint64_t x7 = 5362624LLU;
	volatile int32_t x8 = -1;
	static int32_t t1 = -52;

	t1 = (((x5^x6)|x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = INT64_MAX;

	t2 = (((x9^x10)|x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint64_t x14 = UINT64_MAX;
	volatile uint64_t x16 = 23LLU;
	int32_t t3 = 39494492;

	t3 = (((x13^x14)|x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 3U;
	int8_t x18 = INT8_MIN;
	uint8_t x19 = 89U;
	volatile int32_t t4 = -7461;

	t4 = (((x17^x18)|x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int8_t x22 = INT8_MIN;
	int8_t x23 = 49;
	int8_t x24 = INT8_MIN;

	t5 = (((x21^x22)|x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static uint32_t x26 = UINT32_MAX;
	static uint32_t x27 = 244710U;
	int32_t x28 = INT32_MAX;
	int32_t t6 = -1;

	t6 = (((x25^x26)|x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = -1;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 441;

	t7 = (((x29^x30)|x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 2U;
	uint32_t x34 = 106143U;
	static int16_t x35 = INT16_MIN;
	int64_t x36 = -1LL;
	int32_t t8 = -1700459;

	t8 = (((x33^x34)|x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	static uint8_t x39 = 26U;
	uint8_t x40 = UINT8_MAX;

	t9 = (((x37^x38)|x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 5U;
	volatile int64_t x42 = INT64_MAX;
	static uint32_t x43 = UINT32_MAX;
	int8_t x44 = -1;
	int32_t t10 = 386341;

	t10 = (((x41^x42)|x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -6961;
	uint16_t x47 = UINT16_MAX;
	static int32_t x48 = INT32_MAX;
	int32_t t11 = 1;

	t11 = (((x45^x46)|x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 37990;
	uint8_t x51 = 1U;
	int32_t t12 = -173;

	t12 = (((x49^x50)|x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x53 = 0U;
	int32_t x54 = 1344883;
	static int8_t x55 = INT8_MAX;
	static int32_t t13 = -6380286;

	t13 = (((x53^x54)|x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MIN;
	volatile uint16_t x60 = UINT16_MAX;

	t14 = (((x57^x58)|x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 6654;
	int8_t x63 = -1;
	uint64_t x64 = 6610927LLU;

	t15 = (((x61^x62)|x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	static volatile int32_t t16 = 1999;

	t16 = (((x65^x66)|x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 246819;
	volatile int64_t x70 = INT64_MIN;
	volatile uint8_t x71 = 1U;
	int8_t x72 = INT8_MAX;
	static int32_t t17 = 6946493;

	t17 = (((x69^x70)|x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 195200189LL;
	int8_t x74 = -1;
	static int16_t x75 = 1422;
	uint32_t x76 = 2U;
	volatile int32_t t18 = 5340282;

	t18 = (((x73^x74)|x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 925U;
	int16_t x78 = 12;
	int64_t x79 = 840727445809767624LL;
	int32_t x80 = -1;
	volatile int32_t t19 = -44375516;

	t19 = (((x77^x78)|x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = 76609;
	volatile int64_t x84 = INT64_MAX;
	volatile int32_t t20 = 140387;

	t20 = (((x81^x82)|x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 15U;
	int16_t x87 = INT16_MIN;
	volatile int32_t t21 = 826;

	t21 = (((x85^x86)|x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int8_t x90 = -1;
	int8_t x91 = -43;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = -162;

	t22 = (((x89^x90)|x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 428U;
	int32_t x94 = INT32_MAX;
	static int64_t x95 = INT64_MIN;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 832849887;

	t23 = (((x93^x94)|x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = -1LL;
	uint8_t x99 = 106U;
	static uint16_t x100 = 9268U;
	static int32_t t24 = 15224;

	t24 = (((x97^x98)|x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 80867395LLU;
	static uint32_t x102 = 645351894U;
	static int32_t t25 = -389815;

	t25 = (((x101^x102)|x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = 0;
	int64_t x107 = INT64_MIN;
	static int8_t x108 = -1;
	volatile int32_t t26 = 2638;

	t26 = (((x105^x106)|x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = -1LL;
	int8_t x112 = -1;
	volatile int32_t t27 = -14487;

	t27 = (((x109^x110)|x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	uint16_t x116 = 3535U;
	int32_t t28 = 63;

	t28 = (((x113^x114)|x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	static int16_t x119 = -61;
	int8_t x120 = -1;
	volatile int32_t t29 = 77004;

	t29 = (((x117^x118)|x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 29U;
	int8_t x122 = 9;
	static int64_t x123 = INT64_MIN;
	uint8_t x124 = 0U;
	int32_t t30 = 1;

	t30 = (((x121^x122)|x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = UINT64_MAX;
	int8_t x126 = -1;
	static int16_t x127 = -1;
	int32_t t31 = 490;

	t31 = (((x125^x126)|x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 0;
	volatile int32_t x130 = -1;
	static int64_t x131 = INT64_MIN;
	uint64_t x132 = 255795550175524LLU;

	t32 = (((x129^x130)|x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x135 = INT8_MAX;
	int16_t x136 = INT16_MIN;

	t33 = (((x133^x134)|x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MAX;
	static int16_t x138 = INT16_MIN;
	uint64_t x139 = 1LLU;
	uint16_t x140 = 2U;
	volatile int32_t t34 = 1131;

	t34 = (((x137^x138)|x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = 2;

	t35 = (((x141^x142)|x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int16_t x146 = -10274;
	int8_t x147 = INT8_MAX;
	int64_t x148 = INT64_MIN;
	static int32_t t36 = -23410;

	t36 = (((x145^x146)|x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int16_t x151 = INT16_MAX;
	int64_t x152 = INT64_MAX;
	int32_t t37 = -6;

	t37 = (((x149^x150)|x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x153 = 32U;
	uint32_t x154 = UINT32_MAX;
	uint16_t x155 = UINT16_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t38 = -7081;

	t38 = (((x153^x154)|x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = 102276;

	t39 = (((x157^x158)|x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	int64_t x162 = -1LL;
	uint8_t x164 = 9U;

	t40 = (((x161^x162)|x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	static uint16_t x166 = UINT16_MAX;
	int16_t x167 = INT16_MAX;
	volatile int64_t x168 = -22431326117430665LL;

	t41 = (((x165^x166)|x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	int32_t t42 = 158;

	t42 = (((x169^x170)|x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	uint32_t x174 = 6614122U;
	uint64_t x175 = UINT64_MAX;
	int32_t t43 = 27457;

	t43 = (((x173^x174)|x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = UINT64_MAX;
	int64_t x179 = 1140219750361370LL;
	uint8_t x180 = 1U;
	int32_t t44 = -4065577;

	t44 = (((x177^x178)|x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	static volatile int8_t x182 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	int32_t t45 = -912350;

	t45 = (((x181^x182)|x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 1972;

	t46 = (((x185^x186)|x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	volatile int32_t x192 = INT32_MIN;
	int32_t t47 = -24;

	t47 = (((x189^x190)|x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = -1LL;
	int64_t x196 = -424722930194LL;
	volatile int32_t t48 = -955319;

	t48 = (((x193^x194)|x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 7315U;
	int16_t x199 = -11254;
	uint16_t x200 = 215U;
	int32_t t49 = -202;

	t49 = (((x197^x198)|x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 2U;
	int16_t x202 = INT16_MIN;
	int8_t x203 = -3;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 156049378;

	t50 = (((x201^x202)|x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x206 = -1;
	static int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MAX;

	t51 = (((x205^x206)|x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	volatile int16_t x210 = -1;
	int8_t x211 = INT8_MAX;
	int32_t x212 = INT32_MAX;

	t52 = (((x209^x210)|x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MIN;
	volatile int8_t x215 = -37;
	static uint32_t x216 = UINT32_MAX;
	static int32_t t53 = -5463658;

	t53 = (((x213^x214)|x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	static uint32_t x219 = 76U;
	static volatile int32_t t54 = -11;

	t54 = (((x217^x218)|x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int16_t x223 = -5891;
	uint16_t x224 = UINT16_MAX;
	static volatile int32_t t55 = -397;

	t55 = (((x221^x222)|x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 17383264255131790LLU;
	int8_t x226 = -1;
	int32_t t56 = 362385179;

	t56 = (((x225^x226)|x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 1LL;
	int32_t x230 = 114339;
	volatile int8_t x232 = -2;
	int32_t t57 = 1022367075;

	t57 = (((x229^x230)|x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 1;
	int16_t x234 = 624;
	int32_t x236 = INT32_MAX;
	int32_t t58 = 136177;

	t58 = (((x233^x234)|x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x239 = 30;
	volatile uint32_t x240 = 127U;
	int32_t t59 = -4015;

	t59 = (((x237^x238)|x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 5U;
	int64_t x242 = 3LL;
	int8_t x243 = 1;
	int8_t x244 = INT8_MIN;
	int32_t t60 = 0;

	t60 = (((x241^x242)|x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int8_t x246 = -3;
	uint32_t x247 = 1619658U;
	uint64_t x248 = 19LLU;
	volatile int32_t t61 = 796471;

	t61 = (((x245^x246)|x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 1048919967245943392LL;
	int16_t x251 = 1617;
	int64_t x252 = INT64_MIN;
	volatile int32_t t62 = 210492151;

	t62 = (((x249^x250)|x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 72U;
	volatile uint8_t x255 = 1U;
	volatile int32_t x256 = 1941;
	int32_t t63 = -5447782;

	t63 = (((x253^x254)|x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	static uint8_t x260 = 123U;
	volatile int32_t t64 = 64285461;

	t64 = (((x257^x258)|x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 74U;
	int32_t x262 = 941668565;
	volatile uint8_t x263 = UINT8_MAX;
	uint32_t x264 = 3499U;
	int32_t t65 = 194;

	t65 = (((x261^x262)|x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x267 = 2880715LL;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = -13133;

	t66 = (((x265^x266)|x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 38U;
	volatile int8_t x270 = INT8_MIN;
	uint64_t x271 = 4970848505485150LLU;
	int8_t x272 = 0;
	static volatile int32_t t67 = 216;

	t67 = (((x269^x270)|x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x274 = 1U;
	volatile int64_t x275 = -1LL;
	int16_t x276 = INT16_MIN;
	int32_t t68 = -437;

	t68 = (((x273^x274)|x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	static volatile int64_t x278 = -1LL;
	volatile int32_t t69 = 11;

	t69 = (((x277^x278)|x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 0;
	uint64_t x282 = 15LLU;
	int8_t x283 = -1;
	int16_t x284 = 12;
	int32_t t70 = -141440;

	t70 = (((x281^x282)|x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	int64_t x286 = 687790846319328LL;
	volatile int64_t x287 = INT64_MIN;
	uint8_t x288 = 3U;
	static volatile int32_t t71 = 3;

	t71 = (((x285^x286)|x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 9U;
	int16_t x290 = 0;
	static int16_t x291 = -9;
	volatile uint32_t x292 = 186U;
	int32_t t72 = -12;

	t72 = (((x289^x290)|x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	static uint8_t x294 = UINT8_MAX;
	uint16_t x295 = 404U;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = 22353971;

	t73 = (((x293^x294)|x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = -1LL;
	int64_t x300 = INT64_MAX;
	volatile int32_t t74 = 13;

	t74 = (((x297^x298)|x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	static int32_t t75 = 125686624;

	t75 = (((x301^x302)|x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = 27697LLU;
	int32_t x306 = -94;
	volatile uint8_t x307 = UINT8_MAX;
	int16_t x308 = INT16_MIN;
	static int32_t t76 = -85647853;

	t76 = (((x305^x306)|x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	volatile uint32_t x311 = 2U;
	volatile int32_t t77 = -766;

	t77 = (((x309^x310)|x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int8_t x315 = INT8_MAX;
	volatile int32_t t78 = -513754;

	t78 = (((x313^x314)|x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	volatile int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -22LL;

	t79 = (((x317^x318)|x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	static uint16_t x322 = UINT16_MAX;
	uint64_t x323 = 87LLU;
	int32_t x324 = INT32_MIN;

	t80 = (((x321^x322)|x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = 44950473924332LLU;
	int8_t x326 = INT8_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t81 = 13674937;

	t81 = (((x325^x326)|x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	static int32_t x330 = INT32_MAX;
	volatile int32_t t82 = -586966019;

	t82 = (((x329^x330)|x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -214;
	int16_t x334 = INT16_MIN;
	int16_t x335 = -6;
	int64_t x336 = -3039238426LL;

	t83 = (((x333^x334)|x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	uint8_t x338 = 13U;
	int16_t x339 = INT16_MIN;
	volatile uint32_t x340 = 653605U;
	static int32_t t84 = -48;

	t84 = (((x337^x338)|x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -12615292;
	static volatile uint64_t x342 = 59920LLU;
	int32_t t85 = -15265;

	t85 = (((x341^x342)|x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x347 = INT32_MAX;
	int16_t x348 = -1;
	volatile int32_t t86 = 9301982;

	t86 = (((x345^x346)|x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x349 = INT32_MIN;
	uint64_t x350 = 2866754889LLU;
	volatile int16_t x352 = -173;

	t87 = (((x349^x350)|x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 17U;
	int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	int32_t t88 = -9604;

	t88 = (((x353^x354)|x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint64_t x358 = 615863610443LLU;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;

	t89 = (((x357^x358)|x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	uint32_t x364 = UINT32_MAX;
	int32_t t90 = -917605105;

	t90 = (((x361^x362)|x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x366 = 1U;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -20;

	t91 = (((x365^x366)|x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = 693U;
	int8_t x372 = -1;

	t92 = (((x369^x370)|x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 880380U;
	static int64_t x374 = 4071869LL;
	int32_t t93 = 2382;

	t93 = (((x373^x374)|x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x379 = INT64_MAX;
	int64_t x380 = -14857347LL;
	volatile int32_t t94 = -274;

	t94 = (((x377^x378)|x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 683761420;
	uint16_t x383 = 0U;
	uint16_t x384 = 108U;
	volatile int32_t t95 = 1083;

	t95 = (((x381^x382)|x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 8U;
	int32_t x386 = INT32_MIN;
	int8_t x387 = -1;
	int8_t x388 = -1;

	t96 = (((x385^x386)|x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -782;
	static int8_t x391 = INT8_MAX;
	int16_t x392 = -1;
	int32_t t97 = -13;

	t97 = (((x389^x390)|x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = -1;
	int16_t x394 = INT16_MAX;
	static int16_t x395 = 578;
	static volatile int32_t t98 = -2;

	t98 = (((x393^x394)|x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 6;
	int16_t x398 = -102;
	int32_t x399 = -1;
	int32_t x400 = -42727;
	int32_t t99 = 0;

	t99 = (((x397^x398)|x399)<x400);

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

