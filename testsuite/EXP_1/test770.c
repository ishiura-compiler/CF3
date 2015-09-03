#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = 18U;
static volatile int64_t t1 = -458345565174LL;
int8_t x16 = -1;
int32_t x17 = 20043290;
volatile uint64_t x19 = UINT64_MAX;
uint16_t x20 = 6134U;
static int8_t x21 = INT8_MAX;
uint8_t x22 = 113U;
static uint8_t x23 = UINT8_MAX;
uint64_t x39 = 611276576668780831LLU;
volatile uint32_t x43 = 1U;
static int32_t t11 = 6;
int16_t x49 = -13;
volatile int32_t x53 = INT32_MIN;
static int64_t x61 = -76143709LL;
volatile uint64_t x65 = UINT64_MAX;
int64_t x66 = -602701950071263LL;
uint64_t x69 = 69476069419412825LLU;
int32_t x76 = INT32_MIN;
volatile int32_t t20 = -106;
int64_t x91 = INT64_MIN;
volatile int64_t x92 = -1LL;
uint64_t x98 = 225886963893360844LLU;
uint32_t x100 = UINT32_MAX;
uint64_t x104 = UINT64_MAX;
static int8_t x113 = INT8_MAX;
static uint32_t x124 = UINT32_MAX;
static int64_t x125 = 118149623482LL;
volatile int32_t t31 = 348697999;
volatile uint64_t x131 = UINT64_MAX;
int32_t x134 = -1;
volatile int8_t x144 = INT8_MIN;
int64_t x145 = 0LL;
uint16_t x146 = 4208U;
int32_t t36 = -151361;
int32_t x150 = INT32_MIN;
volatile int32_t t37 = -1894;
int32_t t38 = -380;
int8_t x162 = INT8_MIN;
uint8_t x164 = UINT8_MAX;
int8_t x167 = 6;
uint32_t x175 = 48953U;
int32_t x181 = -1;
static uint8_t x182 = UINT8_MAX;
volatile uint8_t x190 = 78U;
int8_t x193 = -1;
int64_t x197 = -134925502LL;
uint8_t x198 = 1U;
int16_t x201 = 138;
int64_t t49 = -36LL;
int32_t x207 = INT32_MIN;
int32_t t50 = 370;
int64_t x209 = INT64_MAX;
uint64_t x211 = 5654776352959181LLU;
int8_t x212 = -1;
volatile int32_t t51 = -126560168;
uint32_t x218 = 1793481U;
int64_t x223 = 3476LL;
static int64_t x225 = INT64_MAX;
int16_t x226 = INT16_MIN;
volatile int16_t x229 = INT16_MIN;
int16_t x230 = INT16_MAX;
volatile int16_t x237 = INT16_MIN;
volatile int32_t x240 = INT32_MIN;
int64_t x246 = INT64_MIN;
int32_t x255 = INT32_MIN;
int16_t x256 = INT16_MAX;
uint32_t x259 = UINT32_MAX;
int32_t x262 = -1;
volatile int64_t x266 = 82LL;
uint8_t x267 = UINT8_MAX;
static int8_t x270 = INT8_MIN;
int64_t x275 = -105889987131132022LL;
volatile int32_t x277 = -69;
volatile int32_t t67 = -5881;
int32_t x291 = INT32_MIN;
volatile int16_t x302 = INT16_MIN;
uint64_t x303 = 403186402131LLU;
volatile uint32_t t74 = 17U;
int8_t x313 = INT8_MIN;
volatile int16_t x316 = INT16_MIN;
volatile int8_t x320 = INT8_MIN;
int32_t x327 = INT32_MIN;
int32_t t78 = -6859844;
static int8_t x330 = INT8_MAX;
static int64_t x333 = INT64_MAX;
volatile int16_t x342 = -1;
uint16_t x343 = 1696U;
uint64_t x353 = 144LLU;
volatile int16_t x355 = -1;
int64_t x359 = -1LL;
volatile int32_t t86 = -87205;
int64_t x361 = INT64_MIN;
int32_t x368 = INT32_MIN;
volatile int32_t t88 = -7107;
int16_t x369 = -488;
static uint32_t x372 = 28668U;
int64_t x373 = -3893351LL;
int32_t x376 = -1;
static volatile int32_t x384 = -1;
uint64_t x386 = 1LLU;
volatile uint8_t x389 = 108U;
volatile int16_t x392 = -9623;
static int8_t x393 = INT8_MIN;
static volatile int16_t x395 = -45;
static int64_t x408 = INT64_MIN;
static int32_t x413 = INT32_MIN;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	static uint32_t x2 = 29566U;
	int64_t x4 = INT64_MAX;
	int64_t t0 = -2965LL;

	t0 = (((x1%x2)==x3)*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -76484869673411LL;
	int16_t x6 = INT16_MIN;
	volatile int32_t x7 = INT32_MIN;
	int64_t x8 = -736178LL;

	t1 = (((x5%x6)==x7)*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	volatile uint64_t x10 = 1491014887080309LLU;
	static uint16_t x11 = 311U;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = 86;

	t2 = (((x9%x10)==x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 670581LLU;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = 6;
	int32_t t3 = -138695;

	t3 = (((x13%x14)==x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -524363068743240LL;
	volatile int32_t t4 = -1;

	t4 = (((x17%x18)==x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x24 = 1200U;
	volatile int32_t t5 = 3139;

	t5 = (((x21%x22)==x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 1;
	static volatile uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MIN;
	static uint16_t x28 = UINT16_MAX;
	int32_t t6 = -1945664;

	t6 = (((x25%x26)==x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int16_t x30 = -6583;
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = 6547014491LL;
	volatile int64_t t7 = 2193116978147099732LL;

	t7 = (((x29%x30)==x31)*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 86896LLU;
	volatile uint16_t x34 = 29U;
	uint32_t x35 = 25532U;
	volatile uint16_t x36 = 902U;
	int32_t t8 = -3574415;

	t8 = (((x33%x34)==x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 1504U;
	int64_t x38 = INT64_MIN;
	int16_t x40 = 0;
	int32_t t9 = -13995066;

	t9 = (((x37%x38)==x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 198542LL;
	static int64_t x42 = -205LL;
	volatile int16_t x44 = -12419;
	volatile int32_t t10 = -19358;

	t10 = (((x41%x42)==x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = -941LL;
	uint64_t x46 = 126829LLU;
	int16_t x47 = -1;
	uint8_t x48 = 9U;

	t11 = (((x45%x46)==x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	static int8_t x51 = -1;
	int64_t x52 = -1LL;
	volatile int64_t t12 = -11584553606LL;

	t12 = (((x49%x50)==x51)*x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x54 = UINT32_MAX;
	static int32_t x55 = 0;
	int32_t x56 = 18064698;
	int32_t t13 = -5373;

	t13 = (((x53%x54)==x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t14 = -512165;

	t14 = (((x57%x58)==x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = -1LL;
	int32_t x63 = -1;
	volatile int64_t x64 = -638453633LL;
	volatile int64_t t15 = -132937402591869LL;

	t15 = (((x61%x62)==x63)*x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = 104;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 1508;

	t16 = (((x65%x66)==x67)*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -78;
	volatile uint32_t x71 = 12U;
	int32_t x72 = -1;
	int32_t t17 = 3;

	t17 = (((x69%x70)==x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	volatile int16_t x75 = INT16_MAX;
	volatile int32_t t18 = 225;

	t18 = (((x73%x74)==x75)*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 4;
	uint64_t x78 = 9399198471LLU;
	int32_t x79 = INT32_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = 41310;

	t19 = (((x77%x78)==x79)*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	static int32_t x82 = -1;
	int8_t x83 = INT8_MIN;
	volatile int32_t x84 = INT32_MAX;

	t20 = (((x81%x82)==x83)*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 6862903;
	int8_t x86 = -1;
	uint64_t x87 = 12584189823353658LLU;
	int64_t x88 = INT64_MAX;
	volatile int64_t t21 = -1723501810427LL;

	t21 = (((x85%x86)==x87)*x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int32_t x90 = 842431349;
	int64_t t22 = 2LL;

	t22 = (((x89%x90)==x91)*x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = INT8_MAX;
	int64_t x94 = INT64_MAX;
	static uint16_t x95 = 2U;
	int16_t x96 = -1;
	static int32_t t23 = -166450;

	t23 = (((x93%x94)==x95)*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 20;
	volatile int64_t x99 = INT64_MAX;
	uint32_t t24 = 168U;

	t24 = (((x97%x98)==x99)*x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MAX;
	static uint64_t t25 = 1394449753LLU;

	t25 = (((x101%x102)==x103)*x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 397492;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = 236U;
	volatile uint32_t x108 = 0U;
	static uint32_t t26 = 48385915U;

	t26 = (((x105%x106)==x107)*x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MAX;
	static uint64_t x111 = UINT64_MAX;
	static volatile int16_t x112 = INT16_MAX;
	volatile int32_t t27 = -1;

	t27 = (((x109%x110)==x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	uint64_t x115 = 39487852283LLU;
	static int16_t x116 = INT16_MIN;
	int32_t t28 = 176405109;

	t28 = (((x113%x114)==x115)*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 554699494LL;
	volatile int8_t x118 = INT8_MIN;
	static uint64_t x119 = 5099LLU;
	static int64_t x120 = 56790362745LL;
	int64_t t29 = 528504006075113912LL;

	t29 = (((x117%x118)==x119)*x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = 181289LL;
	static int16_t x122 = INT16_MIN;
	uint32_t x123 = 16287U;
	uint32_t t30 = 1529647U;

	t30 = (((x121%x122)==x123)*x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 12U;
	uint64_t x127 = 64044LLU;
	int32_t x128 = INT32_MIN;

	t31 = (((x125%x126)==x127)*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -214177;
	int32_t x130 = -1;
	static uint8_t x132 = 3U;
	volatile int32_t t32 = 135;

	t32 = (((x129%x130)==x131)*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	static volatile int32_t x136 = -1;
	volatile int32_t t33 = 91113790;

	t33 = (((x133%x134)==x135)*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = -9350;
	uint8_t x138 = 2U;
	static volatile int32_t x139 = 9246;
	static uint16_t x140 = 8U;
	int32_t t34 = -932023387;

	t34 = (((x137%x138)==x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x142 = 66458392565500LLU;
	uint16_t x143 = 67U;
	int32_t t35 = -921;

	t35 = (((x141%x142)==x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x147 = 26278;
	static int8_t x148 = INT8_MIN;

	t36 = (((x145%x146)==x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	static volatile int16_t x151 = INT16_MIN;
	uint8_t x152 = UINT8_MAX;

	t37 = (((x149%x150)==x151)*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 22095608U;
	volatile int8_t x154 = -13;
	uint64_t x155 = 412LLU;
	int8_t x156 = INT8_MIN;

	t38 = (((x153%x154)==x155)*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	static int8_t x158 = 15;
	volatile int64_t x159 = INT64_MIN;
	uint16_t x160 = 22U;
	static volatile int32_t t39 = -2011050;

	t39 = (((x157%x158)==x159)*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 4896098050LLU;
	int8_t x163 = -1;
	int32_t t40 = -752983;

	t40 = (((x161%x162)==x163)*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x165 = INT32_MIN;
	volatile int8_t x166 = 5;
	static uint16_t x168 = UINT16_MAX;
	int32_t t41 = 34;

	t41 = (((x165%x166)==x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	uint8_t x174 = 9U;
	static volatile int8_t x176 = 0;
	int32_t t42 = 126;

	t42 = (((x173%x174)==x175)*x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = 11353;
	volatile int16_t x178 = INT16_MAX;
	int64_t x179 = INT64_MIN;
	int8_t x180 = -3;
	int32_t t43 = 146645524;

	t43 = (((x177%x178)==x179)*x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x183 = INT8_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t44 = -128;

	t44 = (((x181%x182)==x183)*x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = UINT64_MAX;
	volatile uint32_t x186 = 6810U;
	int32_t x187 = INT32_MIN;
	int16_t x188 = -1;
	volatile int32_t t45 = 691917;

	t45 = (((x185%x186)==x187)*x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = 29836U;
	uint32_t x191 = 166367U;
	uint16_t x192 = 31U;
	static volatile int32_t t46 = 907;

	t46 = (((x189%x190)==x191)*x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x194 = -1;
	static int32_t x195 = INT32_MIN;
	static int8_t x196 = -50;
	int32_t t47 = 583;

	t47 = (((x193%x194)==x195)*x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x199 = 16;
	int32_t x200 = -126949;
	int32_t t48 = -192552;

	t48 = (((x197%x198)==x199)*x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = INT64_MAX;
	uint16_t x203 = UINT16_MAX;
	int64_t x204 = -145342823LL;

	t49 = (((x201%x202)==x203)*x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -1LL;
	int64_t x206 = -385167LL;
	int32_t x208 = 0;

	t50 = (((x205%x206)==x207)*x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x210 = -6;

	t51 = (((x209%x210)==x211)*x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x213 = 37314U;
	static int16_t x214 = -1;
	volatile uint16_t x215 = UINT16_MAX;
	int8_t x216 = INT8_MAX;
	volatile int32_t t52 = -1;

	t52 = (((x213%x214)==x215)*x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = UINT64_MAX;
	volatile int32_t x219 = -6;
	volatile uint32_t x220 = UINT32_MAX;
	static volatile uint32_t t53 = 62217U;

	t53 = (((x217%x218)==x219)*x220);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MAX;
	static int64_t x222 = INT64_MIN;
	static int32_t x224 = INT32_MAX;
	volatile int32_t t54 = 4966;

	t54 = (((x221%x222)==x223)*x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x227 = INT8_MIN;
	int32_t x228 = 635947;
	int32_t t55 = -447544;

	t55 = (((x225%x226)==x227)*x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x231 = -1;
	int16_t x232 = INT16_MAX;
	volatile int32_t t56 = 2;

	t56 = (((x229%x230)==x231)*x232);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x238 = -1;
	int64_t x239 = -1LL;
	static volatile int32_t t57 = 5;

	t57 = (((x237%x238)==x239)*x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 3084723U;
	int16_t x242 = INT16_MAX;
	uint64_t x243 = UINT64_MAX;
	static int16_t x244 = INT16_MIN;
	int32_t t58 = -200814981;

	t58 = (((x241%x242)==x243)*x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	static uint16_t x247 = 5U;
	int32_t x248 = -17952199;
	int32_t t59 = 7;

	t59 = (((x245%x246)==x247)*x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	static int16_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = -1;
	volatile int32_t t60 = 1750962;

	t60 = (((x249%x250)==x251)*x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x253 = UINT8_MAX;
	uint64_t x254 = 15644809LLU;
	int32_t t61 = -164;

	t61 = (((x253%x254)==x255)*x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = INT64_MIN;
	uint64_t x258 = 5728875991249320LLU;
	static int32_t x260 = -1;
	int32_t t62 = -12376;

	t62 = (((x257%x258)==x259)*x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = -97;
	volatile int64_t x263 = INT64_MIN;
	static uint16_t x264 = UINT16_MAX;
	volatile int32_t t63 = 87848;

	t63 = (((x261%x262)==x263)*x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x265 = -3027;
	static int16_t x268 = -3;
	static int32_t t64 = -27596900;

	t64 = (((x265%x266)==x267)*x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x269 = -1;
	int8_t x271 = INT8_MIN;
	static int8_t x272 = INT8_MIN;
	static int32_t t65 = -60;

	t65 = (((x269%x270)==x271)*x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = -5;
	volatile uint64_t x274 = 98567765LLU;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t66 = -646;

	t66 = (((x273%x274)==x275)*x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x278 = -1;
	int16_t x279 = 445;
	int32_t x280 = -724;

	t67 = (((x277%x278)==x279)*x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = 1365385U;
	int8_t x282 = -1;
	volatile uint64_t x283 = 28LLU;
	volatile int8_t x284 = INT8_MAX;
	volatile int32_t t68 = -215;

	t68 = (((x281%x282)==x283)*x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MIN;
	static int16_t x287 = INT16_MIN;
	volatile uint64_t x288 = 108996131610294526LLU;
	volatile uint64_t t69 = 547LLU;

	t69 = (((x285%x286)==x287)*x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 55;
	static int8_t x290 = INT8_MIN;
	int8_t x292 = INT8_MAX;
	int32_t t70 = 5209270;

	t70 = (((x289%x290)==x291)*x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x297 = UINT64_MAX;
	uint64_t x298 = 145727361852695LLU;
	static int32_t x299 = INT32_MIN;
	uint8_t x300 = UINT8_MAX;
	static int32_t t71 = 1;

	t71 = (((x297%x298)==x299)*x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = -1;
	int16_t x304 = 11;
	int32_t t72 = -203896496;

	t72 = (((x301%x302)==x303)*x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = -1;
	uint64_t x306 = 29193057473LLU;
	int64_t x307 = INT64_MIN;
	int8_t x308 = -5;
	volatile int32_t t73 = 930082089;

	t73 = (((x305%x306)==x307)*x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x309 = UINT32_MAX;
	static uint16_t x310 = UINT16_MAX;
	int16_t x311 = INT16_MAX;
	volatile uint32_t x312 = 10757U;

	t74 = (((x309%x310)==x311)*x312);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x314 = -2643062;
	static int8_t x315 = INT8_MIN;
	volatile int32_t t75 = 55954403;

	t75 = (((x313%x314)==x315)*x316);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x317 = INT64_MAX;
	int16_t x318 = INT16_MAX;
	volatile int64_t x319 = INT64_MIN;
	int32_t t76 = -483955;

	t76 = (((x317%x318)==x319)*x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x321 = UINT32_MAX;
	static volatile int16_t x322 = 30;
	int32_t x323 = -44658516;
	volatile int8_t x324 = 0;
	int32_t t77 = -4340699;

	t77 = (((x321%x322)==x323)*x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MAX;
	int32_t x326 = INT32_MAX;
	volatile int8_t x328 = -2;

	t78 = (((x325%x326)==x327)*x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x329 = -1;
	int16_t x331 = INT16_MAX;
	volatile int16_t x332 = -1;
	volatile int32_t t79 = 3741755;

	t79 = (((x329%x330)==x331)*x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x334 = 11U;
	uint8_t x335 = 60U;
	int8_t x336 = INT8_MAX;
	static int32_t t80 = -97858;

	t80 = (((x333%x334)==x335)*x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MAX;
	static uint8_t x338 = UINT8_MAX;
	int64_t x339 = 28LL;
	uint8_t x340 = 115U;
	volatile int32_t t81 = 53999561;

	t81 = (((x337%x338)==x339)*x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 415507518LLU;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t82 = -1;

	t82 = (((x341%x342)==x343)*x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x346 = 3U;
	volatile int32_t x347 = INT32_MIN;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t83 = -840;

	t83 = (((x345%x346)==x347)*x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = INT64_MAX;
	uint8_t x350 = 71U;
	volatile int16_t x351 = 62;
	static int32_t x352 = INT32_MIN;
	int32_t t84 = -5;

	t84 = (((x349%x350)==x351)*x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x354 = 18U;
	int64_t x356 = INT64_MIN;
	volatile int64_t t85 = -69144398765322LL;

	t85 = (((x353%x354)==x355)*x356);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = INT16_MIN;
	static uint32_t x358 = 5446899U;
	static uint16_t x360 = 8U;

	t86 = (((x357%x358)==x359)*x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = -4079;
	int8_t x364 = -4;
	volatile int32_t t87 = -1;

	t87 = (((x361%x362)==x363)*x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x365 = -1LL;
	volatile int64_t x366 = 483LL;
	int64_t x367 = INT64_MAX;

	t88 = (((x365%x366)==x367)*x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x370 = -2862596;
	int64_t x371 = -85LL;
	uint32_t t89 = 2U;

	t89 = (((x369%x370)==x371)*x372);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x374 = 2864529LLU;
	volatile int8_t x375 = INT8_MIN;
	volatile int32_t t90 = -18;

	t90 = (((x373%x374)==x375)*x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = -2;
	int16_t x379 = INT16_MIN;
	int16_t x380 = -1;
	static int32_t t91 = -8336;

	t91 = (((x377%x378)==x379)*x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MAX;
	volatile int16_t x382 = INT16_MIN;
	uint8_t x383 = 98U;
	volatile int32_t t92 = -423530;

	t92 = (((x381%x382)==x383)*x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = 11U;
	static uint64_t x387 = 112374236864364188LLU;
	uint64_t x388 = 334184051848LLU;
	uint64_t t93 = 2597239865934951LLU;

	t93 = (((x385%x386)==x387)*x388);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x390 = 19U;
	int8_t x391 = INT8_MIN;
	int32_t t94 = 26159;

	t94 = (((x389%x390)==x391)*x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x394 = 20U;
	int64_t x396 = 3LL;
	volatile int64_t t95 = -6LL;

	t95 = (((x393%x394)==x395)*x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = 0U;
	uint32_t x398 = 211U;
	int8_t x399 = -1;
	static uint32_t x400 = UINT32_MAX;
	uint32_t t96 = 13423812U;

	t96 = (((x397%x398)==x399)*x400);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = 386U;
	int16_t x402 = -1;
	static int16_t x403 = INT16_MIN;
	volatile uint8_t x404 = 17U;
	volatile int32_t t97 = 18914;

	t97 = (((x401%x402)==x403)*x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x405 = 8565;
	int16_t x406 = -1;
	uint32_t x407 = 993U;
	int64_t t98 = -1498181426829LL;

	t98 = (((x405%x406)==x407)*x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x414 = -198;
	int8_t x415 = 1;
	uint8_t x416 = 11U;
	int32_t t99 = 2900;

	t99 = (((x413%x414)==x415)*x416);

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

