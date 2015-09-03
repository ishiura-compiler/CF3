#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x14 = INT32_MIN;
static uint16_t x16 = 5U;
uint8_t x17 = UINT8_MAX;
int16_t x18 = -1;
volatile int16_t x20 = 72;
int32_t t5 = -106414;
volatile int32_t t6 = 350863994;
uint64_t x31 = 155590477496LLU;
int16_t x34 = -1;
static volatile int16_t x40 = -247;
int32_t t9 = -125182;
static uint16_t x41 = 1769U;
uint64_t x42 = 1698558066465358LLU;
int32_t x47 = INT32_MAX;
volatile int8_t x48 = -5;
static int8_t x49 = 1;
int8_t x56 = -1;
int64_t x58 = INT64_MAX;
int64_t x61 = 2954LL;
int16_t x62 = INT16_MIN;
volatile uint32_t x63 = UINT32_MAX;
int64_t x64 = -80718LL;
volatile int32_t t15 = 64676241;
int64_t x67 = -42523891931LL;
static int8_t x70 = INT8_MIN;
int32_t t17 = 1832287;
int32_t t19 = -55985829;
uint64_t x84 = 0LLU;
int64_t x92 = INT64_MIN;
int64_t x95 = -1LL;
int64_t x96 = -1LL;
static int8_t x99 = INT8_MIN;
static int32_t x109 = INT32_MIN;
static uint16_t x110 = 223U;
uint32_t x122 = 222636U;
int64_t x123 = INT64_MAX;
uint64_t x124 = 54368420535324234LLU;
volatile int32_t t30 = 592093147;
volatile int32_t x128 = INT32_MIN;
static uint32_t x137 = 957626250U;
int64_t x140 = INT64_MIN;
int16_t x146 = INT16_MIN;
uint32_t x148 = 5959U;
int8_t x156 = INT8_MAX;
static int16_t x162 = INT16_MAX;
int16_t x166 = 56;
uint32_t x175 = 21153U;
int8_t x182 = INT8_MAX;
int8_t x192 = -1;
int32_t x193 = INT32_MIN;
static int32_t t48 = -1827;
volatile int64_t x202 = -780LL;
uint8_t x208 = UINT8_MAX;
int32_t t51 = -99;
volatile int8_t x211 = 32;
int8_t x214 = INT8_MIN;
volatile int32_t x221 = INT32_MAX;
static int8_t x222 = INT8_MIN;
static int8_t x229 = INT8_MAX;
int16_t x230 = INT16_MIN;
uint8_t x237 = 15U;
static volatile int32_t t59 = 279;
static volatile uint8_t x247 = 1U;
volatile uint8_t x249 = UINT8_MAX;
int8_t x250 = INT8_MIN;
int32_t x251 = -1;
int16_t x262 = INT16_MAX;
uint64_t x264 = 1333239619882749LLU;
uint64_t x266 = 10649966279LLU;
static uint16_t x273 = UINT16_MAX;
static uint64_t x276 = 3918201037502583LLU;
volatile int32_t t70 = -7954935;
int16_t x291 = INT16_MIN;
volatile int32_t t72 = -2;
volatile uint64_t x298 = UINT64_MAX;
volatile int32_t t74 = -12908088;
int32_t x305 = -887016;
int64_t x324 = -181473LL;
static uint64_t x331 = 51574861222348LLU;
uint64_t x336 = 54718712399LLU;
uint64_t x337 = 8766015500678910702LLU;
volatile int32_t t84 = 4721;
static int64_t x341 = -1LL;
static int64_t x342 = 3966392595888827888LL;
uint64_t x347 = 2610LLU;
volatile uint8_t x348 = 10U;
int16_t x358 = INT16_MIN;
int32_t x359 = 410;
static volatile int16_t x362 = 17;
volatile int32_t t90 = -36713989;
int32_t x372 = INT32_MAX;
int32_t t92 = 12569;
uint16_t x376 = UINT16_MAX;
int32_t t94 = 753127;
int32_t t99 = 320;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int16_t x2 = 9978;
	int64_t x3 = -3771568LL;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 339;

	t0 = ((x1^(x2^x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	volatile uint64_t x6 = 616236853LLU;
	uint32_t x7 = UINT32_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -25965;

	t1 = ((x5^(x6^x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 26;
	uint8_t x10 = UINT8_MAX;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = 10283363;
	static volatile int32_t t2 = 1;

	t2 = ((x9^(x10^x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1638502406LLU;
	uint8_t x15 = UINT8_MAX;
	volatile int32_t t3 = -265981637;

	t3 = ((x13^(x14^x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x19 = 11413LLU;
	int32_t t4 = 394;

	t4 = ((x17^(x18^x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x22 = -1281;
	static uint64_t x23 = 9186LLU;
	static uint32_t x24 = 625937530U;

	t5 = ((x21^(x22^x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -31;
	volatile int64_t x26 = -1LL;
	int32_t x27 = -1;
	int32_t x28 = -1;

	t6 = ((x25^(x26^x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	static uint16_t x30 = 2004U;
	int64_t x32 = 28290034LL;
	int32_t t7 = 153;

	t7 = ((x29^(x30^x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int16_t x35 = -1;
	int64_t x36 = INT64_MAX;
	int32_t t8 = -15554699;

	t8 = ((x33^(x34^x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 4U;
	static uint16_t x38 = 1U;
	volatile int32_t x39 = INT32_MIN;

	t9 = ((x37^(x38^x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x43 = -17858175379724LL;
	volatile int64_t x44 = INT64_MAX;
	int32_t t10 = -6;

	t10 = ((x41^(x42^x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 2421314LL;
	uint64_t x46 = 130511721015LLU;
	volatile int32_t t11 = -136210373;

	t11 = ((x45^(x46^x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	int8_t x51 = 30;
	int16_t x52 = -1;
	static int32_t t12 = 101870;

	t12 = ((x49^(x50^x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	static int64_t x54 = INT64_MIN;
	int16_t x55 = -1;
	int32_t t13 = 378;

	t13 = ((x53^(x54^x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -2981;
	int8_t x59 = -1;
	volatile uint8_t x60 = UINT8_MAX;
	static int32_t t14 = -1727;

	t14 = ((x57^(x58^x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {


	t15 = ((x61^(x62^x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 1;
	uint8_t x66 = 94U;
	int8_t x68 = 29;
	int32_t t16 = 16676627;

	t16 = ((x65^(x66^x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 193U;
	int64_t x71 = 75593838936872LL;
	uint16_t x72 = UINT16_MAX;

	t17 = ((x69^(x70^x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	volatile int64_t x74 = INT64_MIN;
	int64_t x75 = -4244020138763926LL;
	volatile uint64_t x76 = UINT64_MAX;
	int32_t t18 = -532661705;

	t18 = ((x73^(x74^x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -53;
	int32_t x78 = INT32_MAX;
	uint32_t x79 = UINT32_MAX;
	volatile int16_t x80 = 251;

	t19 = ((x77^(x78^x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x82 = 709062206U;
	volatile uint16_t x83 = UINT16_MAX;
	volatile int32_t t20 = 40280640;

	t20 = ((x81^(x82^x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 1U;
	uint16_t x86 = 1162U;
	uint8_t x87 = 0U;
	int32_t x88 = -1;
	int32_t t21 = -239;

	t21 = ((x85^(x86^x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -45;
	uint32_t x90 = 2549U;
	int32_t x91 = INT32_MIN;
	static int32_t t22 = -5845066;

	t22 = ((x89^(x90^x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -23911818717257LL;
	uint64_t x94 = 8638248012788996LLU;
	int32_t t23 = -3;

	t23 = ((x93^(x94^x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = -1;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = 236977923;

	t24 = ((x97^(x98^x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MAX;
	uint32_t x102 = 1634962020U;
	volatile uint16_t x103 = 0U;
	int8_t x104 = INT8_MIN;
	int32_t t25 = 93;

	t25 = ((x101^(x102^x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int16_t x106 = -412;
	static int64_t x107 = INT64_MIN;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -45259667;

	t26 = ((x105^(x106^x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = -1;
	int16_t x112 = -1;
	static int32_t t27 = 6596868;

	t27 = ((x109^(x110^x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1424;
	volatile int8_t x114 = INT8_MIN;
	static int8_t x115 = INT8_MAX;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t28 = -15;

	t28 = ((x113^(x114^x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	uint32_t x118 = 5U;
	int64_t x119 = 434818026LL;
	int16_t x120 = -100;
	int32_t t29 = -92;

	t29 = ((x117^(x118^x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 1;

	t30 = ((x121^(x122^x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	int32_t t31 = 2946;

	t31 = ((x125^(x126^x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	static uint64_t x130 = 40LLU;
	int8_t x131 = INT8_MIN;
	int16_t x132 = -13123;
	static volatile int32_t t32 = -14;

	t32 = ((x129^(x130^x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	uint8_t x134 = 15U;
	volatile uint8_t x135 = 0U;
	int8_t x136 = 31;
	volatile int32_t t33 = 1757;

	t33 = ((x133^(x134^x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = -1;
	int8_t x139 = -13;
	volatile int32_t t34 = 17432363;

	t34 = ((x137^(x138^x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	static uint32_t x142 = 1U;
	int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -551;

	t35 = ((x141^(x142^x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x145 = -1LL;
	int32_t x147 = 76;
	volatile int32_t t36 = 2;

	t36 = ((x145^(x146^x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -1;
	int16_t x150 = INT16_MIN;
	int64_t x151 = 1602650LL;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t37 = -3118587;

	t37 = ((x149^(x150^x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 3U;
	uint32_t x154 = UINT32_MAX;
	int8_t x155 = INT8_MAX;
	int32_t t38 = -419876812;

	t38 = ((x153^(x154^x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = 1;
	static uint8_t x158 = 1U;
	int8_t x159 = 63;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 1894;

	t39 = ((x157^(x158^x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	uint8_t x163 = 3U;
	static int64_t x164 = INT64_MAX;
	volatile int32_t t40 = 14894729;

	t40 = ((x161^(x162^x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = -1;
	volatile uint8_t x167 = 100U;
	static int64_t x168 = 9LL;
	volatile int32_t t41 = -1141;

	t41 = ((x165^(x166^x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 4444441U;
	uint8_t x170 = 27U;
	uint8_t x171 = 8U;
	static int32_t x172 = -1;
	int32_t t42 = 62595178;

	t42 = ((x169^(x170^x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int8_t x174 = 0;
	int8_t x176 = INT8_MIN;
	int32_t t43 = -6952;

	t43 = ((x173^(x174^x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	static uint8_t x178 = 8U;
	volatile int16_t x179 = INT16_MIN;
	volatile int8_t x180 = -3;
	int32_t t44 = 25550093;

	t44 = ((x177^(x178^x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	uint16_t x183 = 188U;
	volatile uint64_t x184 = 105LLU;
	int32_t t45 = 1;

	t45 = ((x181^(x182^x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x185 = 5U;
	uint32_t x186 = 1001457737U;
	int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -1;

	t46 = ((x185^(x186^x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 1542572872359LLU;
	uint8_t x190 = 0U;
	int64_t x191 = -846792LL;
	int32_t t47 = -205599;

	t47 = ((x189^(x190^x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -214;
	uint64_t x195 = 46458067657LLU;
	int32_t x196 = -1;

	t48 = ((x193^(x194^x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 1234063U;
	uint16_t x198 = UINT16_MAX;
	volatile int16_t x199 = INT16_MIN;
	uint32_t x200 = 858884081U;
	static volatile int32_t t49 = -401269;

	t49 = ((x197^(x198^x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	volatile int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = -138447795;

	t50 = ((x201^(x202^x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -2079378232122LL;
	int32_t x206 = -1;
	int64_t x207 = -1LL;

	t51 = ((x205^(x206^x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -1;
	int32_t x210 = 33;
	volatile uint32_t x212 = UINT32_MAX;
	static int32_t t52 = 205670;

	t52 = ((x209^(x210^x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int16_t x215 = -11;
	int16_t x216 = INT16_MIN;
	int32_t t53 = 1;

	t53 = ((x213^(x214^x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MAX;
	uint8_t x218 = 0U;
	volatile int32_t x219 = 5;
	uint64_t x220 = 5883816911LLU;
	volatile int32_t t54 = 716;

	t54 = ((x217^(x218^x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x223 = 2229U;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t55 = -173901672;

	t55 = ((x221^(x222^x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 5237200;
	int16_t x226 = INT16_MIN;
	static int64_t x227 = INT64_MIN;
	uint64_t x228 = 114900LLU;
	volatile int32_t t56 = -19459060;

	t56 = ((x225^(x226^x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x231 = INT8_MAX;
	static int32_t x232 = -1;
	int32_t t57 = -4796368;

	t57 = ((x229^(x230^x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 210580LLU;
	int16_t x234 = INT16_MIN;
	int32_t x235 = 2878424;
	int16_t x236 = 3;
	volatile int32_t t58 = -2;

	t58 = ((x233^(x234^x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x238 = UINT8_MAX;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -1;

	t59 = ((x237^(x238^x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = 341509301U;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = 1685;

	t60 = ((x241^(x242^x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	volatile int64_t x246 = INT64_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t61 = -52;

	t61 = ((x245^(x246^x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x252 = INT64_MAX;
	volatile int32_t t62 = -289982354;

	t62 = ((x249^(x250^x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	static int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MIN;
	volatile uint32_t x256 = 682359050U;
	int32_t t63 = -10;

	t63 = ((x253^(x254^x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = 1547930176124LL;
	volatile int32_t x258 = -1;
	int16_t x259 = -14132;
	volatile uint32_t x260 = 113041U;
	volatile int32_t t64 = -295946;

	t64 = ((x257^(x258^x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	volatile int32_t x263 = INT32_MIN;
	int32_t t65 = -103;

	t65 = ((x261^(x262^x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	volatile uint8_t x267 = UINT8_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t66 = -22;

	t66 = ((x265^(x266^x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int64_t x270 = 188457140LL;
	volatile int64_t x271 = INT64_MIN;
	static int32_t x272 = INT32_MIN;
	int32_t t67 = -95;

	t67 = ((x269^(x270^x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x274 = 2U;
	uint64_t x275 = 1934351911039LLU;
	volatile int32_t t68 = 118;

	t68 = ((x273^(x274^x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = -1;
	static int32_t x278 = -14365;
	int64_t x279 = 258268537075LL;
	static int8_t x280 = 1;
	volatile int32_t t69 = 271214;

	t69 = ((x277^(x278^x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	uint64_t x282 = 129773338791085631LLU;
	int16_t x283 = INT16_MIN;
	int16_t x284 = 340;

	t70 = ((x281^(x282^x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 3856U;
	int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MAX;
	volatile int32_t t71 = -8;

	t71 = ((x285^(x286^x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	uint8_t x290 = 34U;
	uint32_t x292 = 0U;

	t72 = ((x289^(x290^x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	volatile uint8_t x294 = UINT8_MAX;
	static int8_t x295 = INT8_MIN;
	uint64_t x296 = 2LLU;
	static int32_t t73 = 1926;

	t73 = ((x293^(x294^x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	static volatile uint16_t x299 = 29087U;
	int8_t x300 = -1;

	t74 = ((x297^(x298^x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 491U;
	volatile int16_t x302 = INT16_MAX;
	static uint8_t x303 = 4U;
	volatile int8_t x304 = INT8_MAX;
	volatile int32_t t75 = -8;

	t75 = ((x301^(x302^x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = UINT64_MAX;
	static uint16_t x307 = 7U;
	int8_t x308 = 7;
	volatile int32_t t76 = 15;

	t76 = ((x305^(x306^x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	static volatile int64_t x310 = INT64_MAX;
	volatile int32_t x311 = INT32_MAX;
	uint8_t x312 = 80U;
	static volatile int32_t t77 = -1;

	t77 = ((x309^(x310^x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 806;
	static int64_t x314 = INT64_MIN;
	uint32_t x315 = 912894968U;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t78 = -351153957;

	t78 = ((x313^(x314^x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int64_t x318 = 9739850066238LL;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MAX;
	volatile int32_t t79 = 227431024;

	t79 = ((x317^(x318^x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -1;
	int64_t x322 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	int32_t t80 = 930183800;

	t80 = ((x321^(x322^x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 1U;
	static int32_t x326 = INT32_MAX;
	static uint16_t x327 = UINT16_MAX;
	static int32_t x328 = 33926382;
	int32_t t81 = -1;

	t81 = ((x325^(x326^x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	volatile uint32_t x330 = UINT32_MAX;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = 92684611;

	t82 = ((x329^(x330^x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = -1820529907680100197LL;
	int32_t x334 = INT32_MAX;
	volatile int8_t x335 = INT8_MIN;
	static volatile int32_t t83 = 84;

	t83 = ((x333^(x334^x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = -239;
	uint32_t x339 = 1237598161U;
	int8_t x340 = -18;

	t84 = ((x337^(x338^x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x343 = UINT16_MAX;
	int32_t x344 = -1;
	int32_t t85 = 0;

	t85 = ((x341^(x342^x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 2U;
	volatile uint16_t x346 = UINT16_MAX;
	int32_t t86 = -2;

	t86 = ((x345^(x346^x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x349 = 73919234U;
	volatile uint64_t x350 = UINT64_MAX;
	volatile int8_t x351 = -17;
	static volatile int64_t x352 = -4LL;
	volatile int32_t t87 = 58221066;

	t87 = ((x349^(x350^x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x353 = -1;
	volatile int32_t x354 = INT32_MIN;
	static uint64_t x355 = 223798843476273LLU;
	int8_t x356 = -57;
	volatile int32_t t88 = 125;

	t88 = ((x353^(x354^x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	volatile uint8_t x360 = 23U;
	int32_t t89 = 5242999;

	t89 = ((x357^(x358^x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 1U;
	int64_t x363 = 109277395222952LL;
	volatile int32_t x364 = INT32_MIN;

	t90 = ((x361^(x362^x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MIN;
	int64_t x366 = -1LL;
	static int8_t x367 = -3;
	uint16_t x368 = 1U;
	volatile int32_t t91 = 7403477;

	t91 = ((x365^(x366^x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MAX;
	int8_t x370 = INT8_MAX;
	int32_t x371 = INT32_MIN;

	t92 = ((x369^(x370^x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -645;
	volatile int64_t x374 = 399086102564847LL;
	volatile uint16_t x375 = 121U;
	int32_t t93 = -1265394;

	t93 = ((x373^(x374^x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	volatile int64_t x379 = INT64_MIN;
	static int32_t x380 = INT32_MAX;

	t94 = ((x377^(x378^x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = 1986558948605LL;
	int16_t x382 = 44;
	volatile int16_t x383 = INT16_MAX;
	int8_t x384 = 1;
	int32_t t95 = 207;

	t95 = ((x381^(x382^x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 97U;
	static uint32_t x386 = UINT32_MAX;
	uint32_t x387 = UINT32_MAX;
	uint32_t x388 = 915U;
	static int32_t t96 = 1;

	t96 = ((x385^(x386^x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	volatile int8_t x390 = INT8_MIN;
	volatile int16_t x391 = -8;
	uint64_t x392 = 1030059580LLU;
	volatile int32_t t97 = 63228;

	t97 = ((x389^(x390^x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 1485LLU;
	uint16_t x394 = 268U;
	uint64_t x395 = 49LLU;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = -10987;

	t98 = ((x393^(x394^x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint8_t x398 = UINT8_MAX;
	volatile int16_t x399 = 2913;
	int8_t x400 = 13;

	t99 = ((x397^(x398^x399))<=x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

