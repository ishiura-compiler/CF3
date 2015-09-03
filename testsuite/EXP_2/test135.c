#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 38239LLU;
uint64_t t0 = 2418589358348511LLU;
volatile int16_t x12 = -1;
int8_t x13 = INT8_MAX;
volatile int32_t x25 = INT32_MAX;
int32_t x26 = 144;
uint64_t t5 = 1916150964005LLU;
uint8_t x38 = UINT8_MAX;
uint32_t x40 = 9U;
int64_t x44 = INT64_MAX;
int64_t x50 = -1LL;
uint64_t x52 = UINT64_MAX;
int8_t x56 = INT8_MIN;
uint8_t x60 = 1U;
uint64_t x62 = 640LLU;
volatile uint16_t x64 = 2823U;
uint16_t x72 = 411U;
uint8_t x76 = UINT8_MAX;
uint8_t x78 = 70U;
uint32_t t15 = 6827U;
int32_t x83 = INT32_MAX;
static volatile int8_t x97 = INT8_MAX;
int8_t x108 = -1;
uint64_t x114 = UINT64_MAX;
int64_t x115 = INT64_MIN;
int64_t x116 = -60078LL;
uint64_t t22 = 118085598618LLU;
static volatile int64_t x119 = -1LL;
volatile int32_t t24 = -124265;
volatile int32_t x134 = -1800417;
uint64_t x135 = UINT64_MAX;
static uint32_t x140 = 976U;
static volatile uint32_t t29 = 222U;
int16_t x154 = INT16_MIN;
static int16_t x156 = INT16_MAX;
int8_t x158 = 14;
volatile int16_t x159 = 0;
int8_t x168 = 8;
int8_t x174 = -1;
volatile int64_t t35 = -352LL;
static int16_t x185 = -1;
static int8_t x192 = INT8_MAX;
uint16_t x196 = UINT16_MAX;
int16_t x197 = -9558;
volatile uint16_t x198 = 524U;
uint8_t x217 = UINT8_MAX;
uint32_t x224 = 591531U;
volatile int64_t t43 = -4202690725LL;
static int64_t x226 = -1LL;
int64_t t44 = -47LL;
uint16_t x240 = 9U;
static volatile int64_t t49 = -53113248168LL;
int8_t x251 = INT8_MIN;
int64_t t50 = 150LL;
int16_t x254 = INT16_MIN;
volatile uint64_t x263 = UINT64_MAX;
static int32_t x270 = 22;
int16_t x273 = INT16_MAX;
static volatile uint8_t x278 = 17U;
static uint16_t x283 = 24U;
int16_t x290 = INT16_MIN;
int32_t t59 = -108302434;
int8_t x297 = 51;
volatile int32_t t61 = -487287050;
int64_t x302 = -1980111829243LL;
uint64_t x310 = 33701115625999LLU;
int64_t x313 = INT64_MIN;
int64_t x314 = 3445975394LL;
static uint8_t x318 = UINT8_MAX;
int8_t x319 = INT8_MAX;
uint64_t x320 = 8943933622128526LLU;
static int8_t x323 = INT8_MIN;
static uint16_t x334 = 28672U;
int16_t x335 = INT16_MIN;
uint64_t x338 = UINT64_MAX;
uint64_t t69 = 24018295LLU;
static uint32_t x351 = UINT32_MAX;
int64_t x356 = INT64_MAX;
volatile int16_t x357 = 42;
static uint8_t x358 = UINT8_MAX;
uint8_t x365 = 83U;
uint64_t t75 = 356023040LLU;
int8_t x372 = -27;
static volatile int64_t x376 = INT64_MIN;
uint64_t x386 = 27917704769LLU;
volatile uint8_t x388 = 17U;
static int64_t t80 = -3219880766900LL;
int64_t x393 = INT64_MIN;
uint64_t x395 = 88819808070529292LLU;
volatile uint64_t t81 = 3LLU;
int32_t x398 = -1;
int64_t x399 = -1LL;
uint8_t x400 = 52U;
volatile int64_t t82 = 13317LL;
int64_t x404 = INT64_MIN;
uint32_t x405 = UINT32_MAX;
int16_t x406 = INT16_MAX;
volatile uint64_t t85 = 32454749LLU;
static uint8_t x413 = UINT8_MAX;
int32_t x414 = INT32_MAX;
volatile uint8_t x420 = 3U;
static uint16_t x436 = 219U;
uint32_t t90 = 280U;
static int64_t x438 = -12LL;
int32_t x445 = -863898;
static int32_t x449 = INT32_MIN;
int32_t x456 = INT32_MAX;
volatile int64_t t96 = 48LL;
int32_t x463 = -1;
int64_t x468 = INT64_MAX;
static uint8_t x471 = UINT8_MAX;


void f0(void) {
	int8_t x5 = INT8_MIN;
	int32_t x7 = -9;
	int16_t x8 = -1;

	t0 = ((x5&(x6+x7))%x8);

	if (t0 != 38144LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = 2;
	int8_t x10 = 0;
	int8_t x11 = INT8_MAX;
	int32_t t1 = 375572586;

	t1 = ((x9&(x10+x11))%x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x14 = -107449762;
	int32_t x15 = 12698080;
	int64_t x16 = -141900718490LL;
	volatile int64_t t2 = -671614181199LL;

	t2 = ((x13&(x14+x15))%x16);

	if (t2 != 62LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 1;
	int8_t x22 = -2;
	int32_t x23 = INT32_MAX;
	volatile int8_t x24 = 1;
	volatile int32_t t3 = 1;

	t3 = ((x21&(x22+x23))%x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x27 = INT32_MIN;
	static uint32_t x28 = 889U;
	static uint32_t t4 = 660U;

	t4 = ((x25&(x26+x27))%x28);

	if (t4 != 144U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -927;
	volatile int32_t x30 = -135241366;
	uint64_t x31 = 16LLU;
	volatile int64_t x32 = -1LL;

	t5 = ((x29&(x30+x31))%x32);

	if (t5 != 18446744073574309984LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x37 = INT64_MIN;
	int16_t x39 = INT16_MIN;
	volatile int64_t t6 = -1LL;

	t6 = ((x37&(x38+x39))%x40);

	if (t6 != -8LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = -887;
	int32_t x42 = -1;
	int32_t x43 = -1;
	volatile int64_t t7 = 221543099011274419LL;

	t7 = ((x41&(x42+x43))%x44);

	if (t7 != -888LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x49 = -172963;
	static int8_t x51 = -1;
	volatile uint64_t t8 = 3LLU;

	t8 = ((x49&(x50+x51))%x52);

	if (t8 != 18446744073709378652LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = -1;
	uint16_t x54 = 167U;
	int16_t x55 = 21;
	int32_t t9 = 1374941;

	t9 = ((x53&(x54+x55))%x56);

	if (t9 != 60) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x57 = 113U;
	static volatile int64_t x58 = -10535LL;
	int32_t x59 = INT32_MAX;
	volatile int64_t t10 = 11LL;

	t10 = ((x57&(x58+x59))%x60);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = 13729310766434778LL;
	static volatile int64_t x63 = -1LL;
	uint64_t t11 = 166892LLU;

	t11 = ((x61&(x62+x63))%x64);

	if (t11 != 90LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -1;
	static int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = 437U;
	static int64_t x68 = 24349333845LL;
	int64_t t12 = 102849506612173LL;

	t12 = ((x65&(x66+x67))%x68);

	if (t12 != -17310712611LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 9628790541655LLU;
	volatile int32_t x70 = 1;
	int16_t x71 = INT16_MIN;
	volatile uint64_t t13 = 1582958LLU;

	t13 = ((x69&(x70+x71))%x72);

	if (t13 != 42LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = 574583204262876152LL;
	uint32_t x74 = 118991U;
	int16_t x75 = INT16_MAX;
	int64_t t14 = -783LL;

	t14 = ((x73&(x74+x75))%x76);

	if (t14 != 218LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 28021U;
	volatile uint8_t x79 = 6U;
	volatile uint32_t x80 = 809803624U;

	t15 = ((x77&(x78+x79))%x80);

	if (t15 != 68U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 112217U;
	int16_t x82 = -1;
	int16_t x84 = 61;
	uint32_t t16 = 688885U;

	t16 = ((x81&(x82+x83))%x84);

	if (t16 != 37U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = UINT32_MAX;
	static volatile uint64_t x87 = 4387839455064LLU;
	int32_t x88 = INT32_MIN;
	volatile uint64_t t17 = 165326635657853427LLU;

	t17 = ((x85&(x86+x87))%x88);

	if (t17 != 4392134410240LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MAX;
	int8_t x91 = 1;
	int32_t x92 = 48;
	int32_t t18 = 16904;

	t18 = ((x89&(x90+x91))%x92);

	if (t18 != 32) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x98 = 0;
	int8_t x99 = 0;
	int8_t x100 = -1;
	volatile int32_t t19 = 3009;

	t19 = ((x97&(x98+x99))%x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = -2164154;
	int32_t x102 = -1;
	static int64_t x103 = -1LL;
	volatile uint16_t x104 = 463U;
	int64_t t20 = -8410320124843102LL;

	t20 = ((x101&(x102+x103))%x104);

	if (t20 != -92LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MAX;
	int32_t x106 = INT32_MIN;
	static int16_t x107 = INT16_MAX;
	volatile int32_t t21 = -4879146;

	t21 = ((x105&(x106+x107))%x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = 11;

	t22 = ((x113&(x114+x115))%x116);

	if (t22 != 11LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = -182024;
	int32_t x118 = -6030;
	static int16_t x120 = -2;
	int64_t t23 = 385569380840208LL;

	t23 = ((x117&(x118+x119))%x120);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = 24;
	static int16_t x130 = INT16_MAX;
	static int8_t x131 = INT8_MIN;
	int32_t x132 = -1;

	t24 = ((x129&(x130+x131))%x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x133 = 739U;
	int32_t x136 = -1;
	static uint64_t t25 = 303013011747LLU;

	t25 = ((x133&(x134+x135))%x136);

	if (t25 != 514LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = -6823731LL;
	int16_t x138 = 7047;
	uint32_t x139 = 0U;
	int64_t t26 = -7294192147LL;

	t26 = ((x137&(x138+x139))%x140);

	if (t26 != 133LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = -755612238;
	volatile uint32_t x142 = 5U;
	uint8_t x143 = 49U;
	uint32_t x144 = 20672154U;
	static volatile uint32_t t27 = 5U;

	t27 = ((x141&(x142+x143))%x144);

	if (t27 != 50U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MIN;
	int8_t x147 = -29;
	int8_t x148 = 1;
	volatile uint64_t t28 = 2937352925530276929LLU;

	t28 = ((x145&(x146+x147))%x148);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = -1;
	int8_t x150 = INT8_MIN;
	volatile int16_t x151 = -96;
	volatile uint32_t x152 = 2U;

	t29 = ((x149&(x150+x151))%x152);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = 0;
	static volatile int8_t x155 = INT8_MIN;
	volatile int32_t t30 = 400663;

	t30 = ((x153&(x154+x155))%x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t31 = 0;

	t31 = ((x157&(x158+x159))%x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = INT64_MIN;
	static int16_t x162 = 39;
	int8_t x163 = INT8_MAX;
	uint64_t x164 = UINT64_MAX;
	uint64_t t32 = 75LLU;

	t32 = ((x161&(x162+x163))%x164);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x165 = 14845651U;
	uint64_t x166 = 1773524470281953LLU;
	int8_t x167 = INT8_MAX;
	uint64_t t33 = 416095512168655482LLU;

	t33 = ((x165&(x166+x167))%x168);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x173 = UINT8_MAX;
	static volatile uint16_t x175 = 3U;
	uint32_t x176 = 1197780U;
	volatile uint32_t t34 = 21420297U;

	t34 = ((x173&(x174+x175))%x176);

	if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x177 = 5686036LL;
	volatile int8_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	static uint32_t x180 = 86916U;

	t35 = ((x177&(x178+x179))%x180);

	if (t35 != 20LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x186 = 62;
	static int8_t x187 = 1;
	int16_t x188 = -1;
	int32_t t36 = -8;

	t36 = ((x185&(x186+x187))%x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x189 = UINT8_MAX;
	uint64_t x190 = 266103922971LLU;
	static volatile int32_t x191 = -24482;
	volatile uint64_t t37 = 112490062LLU;

	t37 = ((x189&(x190+x191))%x192);

	if (t37 != 121LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x193 = 266438285016626202LLU;
	int64_t x194 = INT64_MAX;
	volatile int16_t x195 = -816;
	volatile uint64_t t38 = 15950121439LLU;

	t38 = ((x193&(x194+x195))%x196);

	if (t38 != 61676LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x199 = 9U;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t39 = -419447059;

	t39 = ((x197&(x198+x199))%x200);

	if (t39 != 512) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = INT8_MAX;
	static uint16_t x202 = 5796U;
	volatile int64_t x203 = INT64_MIN;
	uint16_t x204 = 13U;
	int64_t t40 = -2349458634LL;

	t40 = ((x201&(x202+x203))%x204);

	if (t40 != 10LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = INT8_MAX;
	volatile int32_t x206 = INT32_MIN;
	uint16_t x207 = 0U;
	int32_t x208 = -1376079;
	int32_t t41 = -18;

	t41 = ((x205&(x206+x207))%x208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x218 = UINT64_MAX;
	volatile int64_t x219 = -5334LL;
	volatile uint32_t x220 = 370689U;
	static volatile uint64_t t42 = 3764791642420051LLU;

	t42 = ((x217&(x218+x219))%x220);

	if (t42 != 41LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x221 = UINT16_MAX;
	static int64_t x222 = -1LL;
	static uint16_t x223 = 16300U;

	t43 = ((x221&(x222+x223))%x224);

	if (t43 != 16299LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x225 = 26847U;
	uint32_t x227 = UINT32_MAX;
	volatile int64_t x228 = INT64_MIN;

	t44 = ((x225&(x226+x227))%x228);

	if (t44 != 26846LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = INT32_MAX;
	uint16_t x230 = 19263U;
	uint8_t x231 = UINT8_MAX;
	uint64_t x232 = 8706284382487410LLU;
	static volatile uint64_t t45 = 176322033943982LLU;

	t45 = ((x229&(x230+x231))%x232);

	if (t45 != 19518LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x233 = 8542803516373848440LLU;
	int64_t x234 = INT64_MAX;
	uint64_t x235 = 2716985316751416LLU;
	int16_t x236 = -1;
	static volatile uint64_t t46 = 15564247633LLU;

	t46 = ((x233&(x234+x235))%x236);

	if (t46 != 2289188848930864LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MIN;
	static volatile int32_t x238 = INT32_MAX;
	static int8_t x239 = -1;
	volatile int64_t t47 = 6008166578413LL;

	t47 = ((x237&(x238+x239))%x240);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = INT64_MAX;
	uint16_t x242 = 3U;
	int64_t x243 = -230111109098738LL;
	uint32_t x244 = 2985U;
	volatile int64_t t48 = 1LL;

	t48 = ((x241&(x242+x243))%x244);

	if (t48 != 1668LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x245 = 452U;
	static volatile int64_t x246 = -508LL;
	static int32_t x247 = -1;
	int8_t x248 = -6;

	t49 = ((x245&(x246+x247))%x248);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MIN;
	static int64_t x250 = -943LL;
	int64_t x252 = -3895760740LL;

	t50 = ((x249&(x250+x251))%x252);

	if (t50 != -1152LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x253 = 30380319065878LLU;
	uint32_t x255 = 4592405U;
	static volatile int16_t x256 = 1;
	volatile uint64_t t51 = 19170812127152966LLU;

	t51 = ((x253&(x254+x255))%x256);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x257 = UINT32_MAX;
	uint8_t x258 = 8U;
	static int8_t x259 = -1;
	static int8_t x260 = INT8_MIN;
	volatile uint32_t t52 = 3570466U;

	t52 = ((x257&(x258+x259))%x260);

	if (t52 != 7U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	volatile int16_t x264 = -1;
	static uint64_t t53 = 1067148839150LLU;

	t53 = ((x261&(x262+x263))%x264);

	if (t53 != 254LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x269 = INT64_MIN;
	static int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MIN;
	volatile int64_t t54 = 125LL;

	t54 = ((x269&(x270+x271))%x272);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x274 = INT8_MAX;
	volatile int16_t x275 = 13;
	uint16_t x276 = UINT16_MAX;
	int32_t t55 = 134;

	t55 = ((x273&(x274+x275))%x276);

	if (t55 != 140) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = INT16_MIN;
	static uint16_t x279 = UINT16_MAX;
	volatile int16_t x280 = INT16_MAX;
	int32_t t56 = -133706;

	t56 = ((x277&(x278+x279))%x280);

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x281 = -1;
	uint64_t x282 = 347LLU;
	volatile int8_t x284 = -62;
	volatile uint64_t t57 = 118113556892182LLU;

	t57 = ((x281&(x282+x283))%x284);

	if (t57 != 371LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MIN;
	volatile int32_t x288 = -5880;
	volatile int32_t t58 = -16606299;

	t58 = ((x285&(x286+x287))%x288);

	if (t58 != -256) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = 15;
	uint8_t x291 = 1U;
	volatile int16_t x292 = INT16_MAX;

	t59 = ((x289&(x290+x291))%x292);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x293 = INT32_MIN;
	static uint16_t x294 = 21116U;
	int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MIN;
	int64_t t60 = -52045174797564LL;

	t60 = ((x293&(x294+x295))%x296);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x298 = 1U;
	int32_t x299 = -1;
	int32_t x300 = -2;

	t61 = ((x297&(x298+x299))%x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x301 = -1;
	static uint8_t x303 = 13U;
	int64_t x304 = -99050LL;
	volatile int64_t t62 = 1978814LL;

	t62 = ((x301&(x302+x303))%x304);

	if (t62 != -10580LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x309 = INT32_MIN;
	int64_t x311 = 903LL;
	static int64_t x312 = INT64_MAX;
	static uint64_t t63 = 10LLU;

	t63 = ((x309&(x310+x311))%x312);

	if (t63 != 33700460888064LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x315 = INT32_MAX;
	uint8_t x316 = UINT8_MAX;
	volatile int64_t t64 = -67525506196LL;

	t64 = ((x313&(x314+x315))%x316);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x317 = UINT64_MAX;
	static uint64_t t65 = 2992911LLU;

	t65 = ((x317&(x318+x319))%x320);

	if (t65 != 382LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MAX;
	int64_t x324 = -227LL;
	int64_t t66 = -27743LL;

	t66 = ((x321&(x322+x323))%x324);

	if (t66 != 159LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x325 = 557689;
	uint16_t x326 = 65U;
	int16_t x327 = 0;
	volatile int8_t x328 = INT8_MIN;
	static int32_t t67 = 22;

	t67 = ((x325&(x326+x327))%x328);

	if (t67 != 65) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x333 = -486;
	int8_t x336 = 26;
	volatile int32_t t68 = -503;

	t68 = ((x333&(x334+x335))%x336);

	if (t68 != -14) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x337 = 739839505U;
	int8_t x339 = 1;
	int16_t x340 = INT16_MIN;

	t69 = ((x337&(x338+x339))%x340);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x345 = 1573;
	int16_t x346 = INT16_MIN;
	uint16_t x347 = UINT16_MAX;
	static int32_t x348 = INT32_MIN;
	int32_t t70 = -13779;

	t70 = ((x345&(x346+x347))%x348);

	if (t70 != 1573) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x349 = INT32_MIN;
	volatile uint8_t x350 = 48U;
	uint8_t x352 = 72U;
	uint32_t t71 = 297731245U;

	t71 = ((x349&(x350+x351))%x352);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x353 = -12;
	uint16_t x354 = 0U;
	uint16_t x355 = UINT16_MAX;
	int64_t t72 = 1688777265982LL;

	t72 = ((x353&(x354+x355))%x356);

	if (t72 != 65524LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x359 = -1;
	int32_t x360 = -155749770;
	volatile int32_t t73 = -31160817;

	t73 = ((x357&(x358+x359))%x360);

	if (t73 != 42) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x361 = INT16_MIN;
	static int8_t x362 = -2;
	int64_t x363 = -1LL;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t74 = 18330712LLU;

	t74 = ((x361&(x362+x363))%x364);

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x366 = UINT32_MAX;
	int8_t x367 = -19;
	uint64_t x368 = 30652066693369560LLU;

	t75 = ((x365&(x366+x367))%x368);

	if (t75 != 64LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x369 = -1;
	int8_t x370 = -1;
	volatile uint8_t x371 = UINT8_MAX;
	int32_t t76 = 2362351;

	t76 = ((x369&(x370+x371))%x372);

	if (t76 != 11) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int16_t x374 = -1;
	static uint64_t x375 = 3LLU;
	uint64_t t77 = 35831505958LLU;

	t77 = ((x373&(x374+x375))%x376);

	if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x377 = UINT64_MAX;
	int64_t x378 = INT64_MIN;
	static uint64_t x379 = UINT64_MAX;
	int32_t x380 = 97042;
	uint64_t t78 = 5LLU;

	t78 = ((x377&(x378+x379))%x380);

	if (t78 != 56371LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = INT8_MAX;
	static int32_t x387 = INT32_MIN;
	uint64_t t79 = 15723691LLU;

	t79 = ((x385&(x386+x387))%x388);

	if (t79 != 14LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = INT32_MAX;
	int64_t x390 = 10LL;
	static uint16_t x391 = 0U;
	uint16_t x392 = UINT16_MAX;

	t80 = ((x389&(x390+x391))%x392);

	if (t80 != 10LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x394 = -9;
	int64_t x396 = INT64_MAX;

	t81 = ((x393&(x394+x395))%x396);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x397 = INT16_MAX;

	t82 = ((x397&(x398+x399))%x400);

	if (t82 != 6LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x401 = INT8_MIN;
	volatile int32_t x402 = INT32_MIN;
	static volatile uint8_t x403 = 25U;
	int64_t t83 = -10356341765334220LL;

	t83 = ((x401&(x402+x403))%x404);

	if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x407 = 1591056479U;
	static volatile int32_t x408 = INT32_MAX;
	volatile uint32_t t84 = 249473494U;

	t84 = ((x405&(x406+x407))%x408);

	if (t84 != 1591089246U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x409 = -5849;
	static int8_t x410 = -1;
	static int16_t x411 = INT16_MAX;
	static uint64_t x412 = 802963LLU;

	t85 = ((x409&(x410+x411))%x412);

	if (t85 != 26918LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x415 = -1;
	volatile int64_t x416 = INT64_MIN;
	volatile int64_t t86 = -1726383164925LL;

	t86 = ((x413&(x414+x415))%x416);

	if (t86 != 254LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x417 = -1;
	int32_t x418 = 3;
	int8_t x419 = -1;
	int32_t t87 = 1408;

	t87 = ((x417&(x418+x419))%x420);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x421 = 89U;
	static volatile uint8_t x422 = UINT8_MAX;
	volatile uint64_t x423 = 14106008252587480LLU;
	int64_t x424 = INT64_MAX;
	volatile uint64_t t88 = 140233998LLU;

	t88 = ((x421&(x422+x423))%x424);

	if (t88 != 81LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = -893699;
	uint8_t x426 = UINT8_MAX;
	int16_t x427 = INT16_MIN;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t89 = 2U;

	t89 = ((x425&(x426+x427))%x428);

	if (t89 != 4294050045U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x433 = 8U;
	int16_t x434 = INT16_MAX;
	volatile uint32_t x435 = 193948057U;

	t90 = ((x433&(x434+x435))%x436);

	if (t90 != 8U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x437 = 28753189973LL;
	volatile uint64_t x439 = 722LLU;
	static int16_t x440 = INT16_MIN;
	volatile uint64_t t91 = 5271055LLU;

	t91 = ((x437&(x438+x439))%x440);

	if (t91 != 68LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x441 = UINT64_MAX;
	static int32_t x442 = INT32_MIN;
	int16_t x443 = INT16_MAX;
	int16_t x444 = -1;
	volatile uint64_t t92 = 13387645LLU;

	t92 = ((x441&(x442+x443))%x444);

	if (t92 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x446 = 11964U;
	static int32_t x447 = INT32_MIN;
	static int64_t x448 = INT64_MIN;
	volatile int64_t t93 = 134LL;

	t93 = ((x445&(x446+x447))%x448);

	if (t93 != 2147483684LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x450 = -49;
	uint64_t x451 = UINT64_MAX;
	static volatile int16_t x452 = -1;
	volatile uint64_t t94 = 334627792392LLU;

	t94 = ((x449&(x450+x451))%x452);

	if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x453 = INT32_MIN;
	int16_t x454 = INT16_MAX;
	int16_t x455 = INT16_MIN;
	volatile int32_t t95 = 857801;

	t95 = ((x453&(x454+x455))%x456);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = INT64_MIN;
	int32_t x458 = -1;
	int8_t x459 = INT8_MIN;
	static volatile int64_t x460 = -3518469273469489343LL;

	t96 = ((x457&(x458+x459))%x460);

	if (t96 != -2186433489915797122LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = INT8_MIN;
	int16_t x462 = 925;
	volatile int32_t x464 = INT32_MIN;
	volatile int32_t t97 = 47;

	t97 = ((x461&(x462+x463))%x464);

	if (t97 != 896) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x465 = UINT32_MAX;
	static int16_t x466 = -1;
	int32_t x467 = 475368;
	int64_t t98 = -154782LL;

	t98 = ((x465&(x466+x467))%x468);

	if (t98 != 475367LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x469 = 1476LLU;
	int8_t x470 = INT8_MIN;
	uint8_t x472 = 25U;
	volatile uint64_t t99 = 0LLU;

	t99 = ((x469&(x470+x471))%x472);

	if (t99 != 18LLU) { NG(); } else { ; }
	
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

