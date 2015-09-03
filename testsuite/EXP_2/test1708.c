#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 870538LLU;
static uint32_t x13 = 6329U;
static volatile int64_t x32 = -1LL;
volatile int64_t x43 = 290946941389530668LL;
int64_t x47 = -1LL;
volatile int8_t x48 = 1;
static volatile int32_t t11 = -371436;
uint8_t x61 = 1U;
int16_t x62 = -1;
static int64_t x64 = INT64_MAX;
static int8_t x69 = INT8_MAX;
volatile uint8_t x73 = 12U;
volatile int64_t x76 = -1686079LL;
volatile int16_t x77 = INT16_MAX;
uint32_t t17 = 3617112U;
volatile int32_t t18 = 636;
static int8_t x86 = 7;
volatile int32_t x91 = -157352;
int64_t t20 = 78087972575878443LL;
int16_t x98 = -12921;
int32_t t23 = -5405;
int8_t x105 = INT8_MIN;
static int32_t x106 = INT32_MIN;
int8_t x108 = INT8_MAX;
volatile int32_t t24 = -67539929;
volatile int16_t x109 = INT16_MIN;
static volatile uint64_t x111 = 7441670LLU;
volatile int8_t x112 = -1;
uint64_t t25 = 210668973232LLU;
int64_t x114 = INT64_MAX;
static int16_t x115 = 364;
static volatile int64_t t27 = -551185916880LL;
uint8_t x125 = UINT8_MAX;
uint32_t x128 = 4U;
static volatile uint32_t t28 = 4U;
volatile int32_t t29 = 383;
static uint64_t x140 = 105537LLU;
static int64_t x142 = 5742659268222LL;
uint64_t x145 = 3920854367265478187LLU;
volatile int16_t x148 = -1411;
int16_t x153 = INT16_MIN;
int64_t x163 = 4345885667487149LL;
static int16_t x172 = INT16_MIN;
volatile int32_t t37 = -5479295;
int32_t x177 = INT32_MAX;
volatile int32_t t40 = -31933619;
int8_t x186 = INT8_MIN;
int16_t x191 = 194;
int64_t x197 = -1LL;
volatile uint64_t x198 = 0LLU;
volatile int64_t t46 = -467193172LL;
volatile int64_t x239 = -1LL;
int64_t x263 = 1529LL;
static uint16_t x264 = 2340U;
int32_t x267 = INT32_MIN;
uint8_t x273 = UINT8_MAX;
int8_t x275 = -1;
int16_t x281 = INT16_MIN;
int16_t x282 = INT16_MIN;
uint8_t x287 = UINT8_MAX;
uint32_t x288 = UINT32_MAX;
uint8_t x293 = 29U;
static int64_t t61 = 1915156LL;
uint64_t x307 = 2147196950927LLU;
static uint64_t x308 = 967521491517008LLU;
int32_t x322 = 3;
int32_t x326 = INT32_MIN;
int32_t x329 = -8198;
volatile int16_t x330 = INT16_MIN;
int16_t x331 = -8352;
int16_t x349 = -1;
volatile int64_t t74 = 159445348442213397LL;
uint8_t x357 = 5U;
volatile uint64_t t76 = 144109559577277401LLU;
uint32_t x363 = UINT32_MAX;
volatile int64_t t77 = 1827LL;
static uint16_t x379 = 3U;
int64_t t80 = 382149793272073LL;
int16_t x383 = INT16_MIN;
int8_t x393 = INT8_MAX;
volatile int8_t x394 = 31;
int8_t x396 = 1;
int64_t t84 = 150600425LL;
int32_t x401 = -1;
int32_t x406 = INT32_MAX;
int8_t x408 = -1;
static uint8_t x417 = 1U;
uint8_t x419 = UINT8_MAX;
uint64_t t89 = 3182666914360063LLU;
static uint8_t x431 = UINT8_MAX;
int32_t x436 = -1;
static int8_t x439 = INT8_MIN;
volatile uint32_t x447 = UINT32_MAX;
uint64_t x451 = 426186864LLU;
uint32_t t98 = 46109212U;
uint16_t x466 = 2417U;
int16_t x467 = INT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint16_t x3 = UINT16_MAX;
	int64_t x4 = INT64_MAX;
	volatile uint64_t t0 = 629959064890LLU;

	t0 = ((x1-(x2&x3))%x4);

	if (t0 != 9223372036854757238LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 13U;
	static volatile int32_t x6 = 639294106;
	int16_t x7 = 31;
	volatile uint8_t x8 = 1U;
	int32_t t1 = 37;

	t1 = ((x5-(x6&x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = -128551426LL;
	int16_t x15 = INT16_MIN;
	int16_t x16 = 92;
	static volatile int64_t t2 = -49557282133303845LL;

	t2 = ((x13-(x14&x15))%x16);

	if (t2 != 21LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MAX;
	volatile int16_t x18 = INT16_MAX;
	uint8_t x19 = 2U;
	uint32_t x20 = 420U;
	volatile int64_t t3 = 19930852LL;

	t3 = ((x17-(x18&x19))%x20);

	if (t3 != 5LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	static uint32_t x22 = 4097828U;
	int32_t x23 = INT32_MIN;
	int64_t x24 = INT64_MAX;
	volatile int64_t t4 = -11LL;

	t4 = ((x21-(x22&x23))%x24);

	if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	int32_t x26 = -1;
	uint64_t x27 = 1117584LLU;
	static int8_t x28 = INT8_MIN;
	uint64_t t5 = 5647727LLU;

	t5 = ((x25-(x26&x27))%x28);

	if (t5 != 9223372036853658224LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 105U;
	volatile int16_t x30 = INT16_MIN;
	volatile int16_t x31 = -1;
	volatile int64_t t6 = 46611593330758LL;

	t6 = ((x29-(x30&x31))%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -11127774;
	int16_t x34 = INT16_MAX;
	static int32_t x35 = INT32_MIN;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t7 = -915210;

	t7 = ((x33-(x34&x35))%x36);

	if (t7 != -11127774) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	int8_t x42 = 4;
	int32_t x44 = 1024898;
	volatile int64_t t8 = -3565242551473LL;

	t8 = ((x41-(x42&x43))%x44);

	if (t8 != -5LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = 115;
	int64_t x46 = 0LL;
	volatile int64_t t9 = -16599733094635647LL;

	t9 = ((x45-(x46&x47))%x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int32_t x50 = 129901473;
	int32_t x51 = -1;
	static int64_t x52 = INT64_MAX;
	int64_t t10 = -1LL;

	t10 = ((x49-(x50&x51))%x52);

	if (t10 != -129901474LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = 1;
	volatile int32_t x54 = -1;
	static int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MIN;

	t11 = ((x53-(x54&x55))%x56);

	if (t11 != -32766) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = INT16_MAX;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MAX;
	int32_t x60 = 240379873;
	uint32_t t12 = 371U;

	t12 = ((x57-(x58&x59))%x60);

	if (t12 != 224477432U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x63 = -7271;
	int64_t t13 = 14091382141LL;

	t13 = ((x61-(x62&x63))%x64);

	if (t13 != 7272LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	volatile int32_t x66 = 691748;
	uint64_t x67 = 1062006698LLU;
	uint64_t x68 = 5132LLU;
	uint64_t t14 = 1097145LLU;

	t14 = ((x65-(x66&x67))%x68);

	if (t14 != 987LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x70 = 0U;
	volatile int64_t x71 = -1LL;
	int32_t x72 = INT32_MAX;
	int64_t t15 = -22LL;

	t15 = ((x69-(x70&x71))%x72);

	if (t15 != 127LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = INT8_MAX;
	volatile uint16_t x75 = 10U;
	int64_t t16 = -1LL;

	t16 = ((x73-(x74&x75))%x76);

	if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x78 = UINT32_MAX;
	int8_t x79 = 0;
	volatile int8_t x80 = -4;

	t17 = ((x77-(x78&x79))%x80);

	if (t17 != 32767U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = -1;
	int32_t x83 = -1;
	int16_t x84 = INT16_MAX;

	t18 = ((x81-(x82&x83))%x84);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 247521LLU;
	uint64_t x87 = 161123723353LLU;
	volatile int16_t x88 = -1;
	volatile uint64_t t19 = 88025LLU;

	t19 = ((x85-(x86&x87))%x88);

	if (t19 != 247520LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	static int64_t x90 = INT64_MIN;
	int64_t x92 = INT64_MIN;

	t20 = ((x89-(x90&x91))%x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	static int8_t x94 = INT8_MAX;
	int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MIN;
	static int64_t t21 = -25141LL;

	t21 = ((x93-(x94&x95))%x96);

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 27;
	int8_t x99 = INT8_MIN;
	static uint16_t x100 = 126U;
	int32_t t22 = 35;

	t22 = ((x97-(x98&x99))%x100);

	if (t22 != 103) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = -1;
	int16_t x103 = 93;
	int32_t x104 = -1;

	t23 = ((x101-(x102&x103))%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x107 = -161396;

	t24 = ((x105-(x106&x107))%x108);

	if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x110 = 510LLU;

	t25 = ((x109-(x110&x111))%x112);

	if (t25 != 18446744073709518586LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = -330158419249112122LL;
	volatile uint32_t x116 = 2U;
	static volatile int64_t t26 = -970095692563653131LL;

	t26 = ((x113-(x114&x115))%x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x121 = 2U;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = 312019LL;
	static volatile uint16_t x124 = UINT16_MAX;

	t27 = ((x121-(x122&x123))%x124);

	if (t27 != -209LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x126 = INT16_MAX;
	volatile int16_t x127 = INT16_MIN;

	t28 = ((x125-(x126&x127))%x128);

	if (t28 != 3U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	volatile int16_t x131 = INT16_MIN;
	volatile uint8_t x132 = 3U;

	t29 = ((x129-(x130&x131))%x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = 129170002048610076LL;
	int32_t x134 = -1;
	volatile uint64_t x135 = 13LLU;
	volatile int64_t x136 = INT64_MIN;
	uint64_t t30 = 1476266694033230LLU;

	t30 = ((x133-(x134&x135))%x136);

	if (t30 != 129170002048610063LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 7568U;
	volatile int8_t x138 = 0;
	int16_t x139 = -2872;
	uint64_t t31 = 433161609261995504LLU;

	t31 = ((x137-(x138&x139))%x140);

	if (t31 != 7568LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MIN;
	volatile uint32_t x143 = 2854397U;
	volatile uint8_t x144 = 1U;
	int64_t t32 = 190064LL;

	t32 = ((x141-(x142&x143))%x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x146 = INT8_MIN;
	uint16_t x147 = UINT16_MAX;
	volatile uint64_t t33 = 156119LLU;

	t33 = ((x145-(x146&x147))%x148);

	if (t33 != 3920854367265412779LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x154 = INT32_MIN;
	static volatile int16_t x155 = 1;
	static int8_t x156 = -18;
	volatile int32_t t34 = -16443;

	t34 = ((x153-(x154&x155))%x156);

	if (t34 != -8) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x162 = 136547244U;
	static int32_t x164 = 7553;
	int64_t t35 = 178LL;

	t35 = ((x161-(x162&x163))%x164);

	if (t35 != -1055LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -2394;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = 2LL;
	uint32_t x168 = 711621756U;
	int64_t t36 = -48LL;

	t36 = ((x165-(x166&x167))%x168);

	if (t36 != -2396LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MAX;
	uint8_t x170 = 0U;
	static int32_t x171 = INT32_MIN;

	t37 = ((x169-(x170&x171))%x172);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = 8;
	int16_t x175 = INT16_MIN;
	static int64_t x176 = INT64_MIN;
	volatile int64_t t38 = 5719288814487068LL;

	t38 = ((x173-(x174&x175))%x176);

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x178 = INT32_MAX;
	uint64_t x179 = 0LLU;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t39 = 113LLU;

	t39 = ((x177-(x178&x179))%x180);

	if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x181 = 1;
	static int16_t x182 = -1;
	uint8_t x183 = 25U;
	int8_t x184 = INT8_MIN;

	t40 = ((x181-(x182&x183))%x184);

	if (t40 != -24) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MIN;
	volatile int64_t x187 = 672422LL;
	uint8_t x188 = 48U;
	volatile int64_t t41 = 442548124026576LL;

	t41 = ((x185-(x186&x187))%x188);

	if (t41 != -32LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = 0;
	volatile uint32_t x190 = 218781U;
	volatile uint8_t x192 = UINT8_MAX;
	uint32_t t42 = 4022U;

	t42 = ((x189-(x190&x191))%x192);

	if (t42 != 128U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x199 = 1LL;
	volatile uint32_t x200 = UINT32_MAX;
	static volatile uint64_t t43 = 27LLU;

	t43 = ((x197-(x198&x199))%x200);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = -1LL;
	uint16_t x211 = 21760U;
	int8_t x212 = INT8_MAX;
	volatile int64_t t44 = -1851LL;

	t44 = ((x209-(x210&x211))%x212);

	if (t44 != -51LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x217 = 29U;
	int64_t x218 = -1LL;
	uint8_t x219 = 2U;
	int32_t x220 = -12293278;
	int64_t t45 = 13226834281813LL;

	t45 = ((x217-(x218&x219))%x220);

	if (t45 != 27LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MAX;
	int64_t x222 = INT64_MIN;
	volatile int32_t x223 = INT32_MAX;
	int8_t x224 = -1;

	t46 = ((x221-(x222&x223))%x224);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -33810;
	static uint16_t x227 = 264U;
	int8_t x228 = INT8_MAX;
	static volatile int32_t t47 = 996;

	t47 = ((x225-(x226&x227))%x228);

	if (t47 != -11) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MAX;
	volatile int32_t x230 = 560546074;
	volatile uint64_t x231 = UINT64_MAX;
	int16_t x232 = 12;
	static uint64_t t48 = 8418198656247LLU;

	t48 = ((x229-(x230&x231))%x232);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = 41874344579781LLU;
	int32_t x234 = 326406557;
	int8_t x235 = INT8_MAX;
	uint16_t x236 = UINT16_MAX;
	uint64_t t49 = 137LLU;

	t49 = ((x233-(x234&x235))%x236);

	if (t49 != 55852LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x237 = 0U;
	int16_t x238 = 13865;
	static int32_t x240 = 1145;
	volatile int64_t t50 = 1LL;

	t50 = ((x237-(x238&x239))%x240);

	if (t50 != -125LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x241 = 2U;
	int64_t x242 = -68195989188782978LL;
	int32_t x243 = INT32_MAX;
	volatile uint8_t x244 = 1U;
	volatile int64_t t51 = -319339124114496LL;

	t51 = ((x241-(x242&x243))%x244);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = INT16_MAX;
	uint16_t x246 = UINT16_MAX;
	static int32_t x247 = INT32_MIN;
	static uint8_t x248 = 2U;
	volatile int32_t t52 = 0;

	t52 = ((x245-(x246&x247))%x248);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x249 = UINT32_MAX;
	volatile int32_t x250 = 135;
	static int16_t x251 = -11753;
	int8_t x252 = -1;
	uint32_t t53 = 12132U;

	t53 = ((x249-(x250&x251))%x252);

	if (t53 != 4294967288U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x253 = -486;
	int64_t x254 = -1LL;
	int16_t x255 = -1;
	int32_t x256 = INT32_MIN;
	volatile int64_t t54 = 38LL;

	t54 = ((x253-(x254&x255))%x256);

	if (t54 != -485LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = UINT8_MAX;
	uint32_t x262 = 4763957U;
	int64_t t55 = 10LL;

	t55 = ((x261-(x262&x263))%x264);

	if (t55 != -50LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = INT8_MIN;
	volatile int8_t x266 = INT8_MIN;
	int16_t x268 = -3365;
	int32_t t56 = 66;

	t56 = ((x265-(x266&x267))%x268);

	if (t56 != 1090) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x269 = INT16_MIN;
	int16_t x270 = 793;
	uint16_t x271 = 440U;
	int8_t x272 = -1;
	int32_t t57 = -14247;

	t57 = ((x269-(x270&x271))%x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x274 = 87U;
	volatile int32_t x276 = INT32_MIN;
	volatile uint32_t t58 = 98642964U;

	t58 = ((x273-(x274&x275))%x276);

	if (t58 != 168U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x283 = INT16_MIN;
	uint8_t x284 = 84U;
	int32_t t59 = 1618363;

	t59 = ((x281-(x282&x283))%x284);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = -22;
	int32_t x286 = INT32_MAX;
	static uint32_t t60 = 5U;

	t60 = ((x285-(x286&x287))%x288);

	if (t60 != 4294967019U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x294 = -264589LL;
	int32_t x295 = INT32_MIN;
	int8_t x296 = -2;

	t61 = ((x293-(x294&x295))%x296);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x297 = INT8_MIN;
	static volatile uint64_t x298 = UINT64_MAX;
	int32_t x299 = -1;
	int64_t x300 = INT64_MIN;
	uint64_t t62 = 464852302LLU;

	t62 = ((x297-(x298&x299))%x300);

	if (t62 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 0U;
	static int8_t x302 = INT8_MIN;
	uint16_t x303 = UINT16_MAX;
	uint8_t x304 = 2U;
	static int32_t t63 = 7;

	t63 = ((x301-(x302&x303))%x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = 1;
	int64_t x306 = INT64_MIN;
	uint64_t t64 = 23888118243628242LLU;

	t64 = ((x305-(x306&x307))%x308);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x309 = UINT8_MAX;
	volatile int32_t x310 = INT32_MIN;
	int64_t x311 = 907193420LL;
	int8_t x312 = -1;
	int64_t t65 = 4678644325718LL;

	t65 = ((x309-(x310&x311))%x312);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x313 = -1;
	static int64_t x314 = INT64_MIN;
	volatile uint64_t x315 = 6LLU;
	int8_t x316 = INT8_MIN;
	uint64_t t66 = 555788506753609LLU;

	t66 = ((x313-(x314&x315))%x316);

	if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x321 = 0U;
	int32_t x323 = -187309;
	static int8_t x324 = -1;
	int32_t t67 = 1043;

	t67 = ((x321-(x322&x323))%x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x325 = 889691657U;
	uint64_t x327 = UINT64_MAX;
	int64_t x328 = INT64_MAX;
	volatile uint64_t t68 = 9461546570LLU;

	t68 = ((x325-(x326&x327))%x328);

	if (t68 != 3037175305LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x332 = 25663U;
	int32_t t69 = -101;

	t69 = ((x329-(x330&x331))%x332);

	if (t69 != 24570) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x333 = UINT8_MAX;
	volatile int8_t x334 = -1;
	int16_t x335 = 2;
	static int64_t x336 = -1LL;
	volatile int64_t t70 = 518384LL;

	t70 = ((x333-(x334&x335))%x336);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = INT8_MAX;
	volatile int32_t x338 = -1;
	static volatile int64_t x339 = INT64_MAX;
	int32_t x340 = -1;
	int64_t t71 = 5885748994823LL;

	t71 = ((x337-(x338&x339))%x340);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x341 = 1953593878523704LLU;
	static int32_t x342 = INT32_MAX;
	int8_t x343 = INT8_MIN;
	static int64_t x344 = INT64_MAX;
	uint64_t t72 = 3LLU;

	t72 = ((x341-(x342&x343))%x344);

	if (t72 != 1953591731040184LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -1611;
	uint32_t x346 = 3U;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 1U;
	uint32_t t73 = 5014214U;

	t73 = ((x345-(x346&x347))%x348);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x350 = INT32_MIN;
	uint32_t x351 = 70U;
	int64_t x352 = INT64_MAX;

	t74 = ((x349-(x350&x351))%x352);

	if (t74 != 4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x353 = UINT8_MAX;
	uint32_t x354 = 85976988U;
	int32_t x355 = INT32_MAX;
	uint32_t x356 = 4172047U;
	volatile uint32_t t75 = 235U;

	t75 = ((x353-(x354&x355))%x356);

	if (t75 != 3567187U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x358 = -5488112949LL;
	uint64_t x359 = 32984830786LLU;
	int64_t x360 = -78739814906LL;

	t76 = ((x357-(x358&x359))%x360);

	if (t76 != 50151438269LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x361 = 3281U;
	volatile int64_t x362 = -1LL;
	volatile uint16_t x364 = UINT16_MAX;

	t77 = ((x361-(x362&x363))%x364);

	if (t77 != -62254LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x365 = 392628287LLU;
	volatile uint16_t x366 = 11U;
	int8_t x367 = INT8_MAX;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t78 = 358063661576LLU;

	t78 = ((x365-(x366&x367))%x368);

	if (t78 != 392628276LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = INT16_MAX;
	static uint32_t x375 = 2762168U;
	static int32_t x376 = INT32_MIN;
	uint32_t t79 = 3480991U;

	t79 = ((x373-(x374&x375))%x376);

	if (t79 != 2147473991U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = 1676618994255LL;
	int8_t x378 = INT8_MIN;
	volatile int16_t x380 = -739;

	t80 = ((x377-(x378&x379))%x380);

	if (t80 != 200LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x381 = INT64_MIN;
	static int8_t x382 = -5;
	int32_t x384 = INT32_MIN;
	static int64_t t81 = -1148674003743779LL;

	t81 = ((x381-(x382&x383))%x384);

	if (t81 != -2147450880LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x385 = 2348381U;
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t82 = 2400045LLU;

	t82 = ((x385-(x386&x387))%x388);

	if (t82 != 9223372036857124317LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x395 = 1;
	static int32_t t83 = -307727;

	t83 = ((x393-(x394&x395))%x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x397 = -7LL;
	int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MAX;
	static uint16_t x400 = 1092U;

	t84 = ((x397-(x398&x399))%x400);

	if (t84 != -979LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x402 = 8991;
	static uint16_t x403 = 135U;
	int8_t x404 = INT8_MAX;
	volatile int32_t t85 = -109;

	t85 = ((x401-(x402&x403))%x404);

	if (t85 != -8) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = 353549634;
	int64_t x407 = -172073152705LL;
	volatile int64_t t86 = -597193873LL;

	t86 = ((x405-(x406&x407))%x408);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x409 = 5U;
	uint16_t x410 = 157U;
	int8_t x411 = -1;
	int8_t x412 = -1;
	static volatile int32_t t87 = -719570345;

	t87 = ((x409-(x410&x411))%x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = 99;
	static int8_t x414 = -10;
	uint8_t x415 = 1U;
	static int8_t x416 = INT8_MAX;
	static int32_t t88 = 128902;

	t88 = ((x413-(x414&x415))%x416);

	if (t88 != 99) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x418 = INT64_MIN;
	uint64_t x420 = UINT64_MAX;

	t89 = ((x417-(x418&x419))%x420);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = INT8_MIN;
	volatile int8_t x422 = INT8_MIN;
	int64_t x423 = INT64_MIN;
	int8_t x424 = -1;
	volatile int64_t t90 = -7730729LL;

	t90 = ((x421-(x422&x423))%x424);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x425 = -1;
	volatile int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MIN;
	int16_t x428 = -18;
	int32_t t91 = -8313897;

	t91 = ((x425-(x426&x427))%x428);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x429 = 0U;
	volatile uint8_t x430 = 0U;
	int16_t x432 = INT16_MIN;
	static volatile int32_t t92 = -17;

	t92 = ((x429-(x430&x431))%x432);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = -112072LL;
	volatile uint8_t x434 = 7U;
	int32_t x435 = -4516423;
	volatile int64_t t93 = -81436LL;

	t93 = ((x433-(x434&x435))%x436);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = INT64_MIN;
	int64_t x438 = -10871089LL;
	int16_t x440 = -13675;
	volatile int64_t t94 = 45679LL;

	t94 = ((x437-(x438&x439))%x440);

	if (t94 != -13615LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x441 = INT16_MIN;
	int16_t x442 = INT16_MIN;
	uint8_t x443 = UINT8_MAX;
	uint64_t x444 = 19578971850521059LLU;
	uint64_t t95 = 26356306072139LLU;

	t95 = ((x441-(x442&x443))%x444);

	if (t95 != 3352590518681270LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x445 = 55;
	static volatile uint16_t x446 = 21U;
	int64_t x448 = -397218300239646LL;
	volatile int64_t t96 = 1070626355LL;

	t96 = ((x445-(x446&x447))%x448);

	if (t96 != 34LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x449 = INT32_MIN;
	uint64_t x450 = UINT64_MAX;
	uint32_t x452 = 16U;
	uint64_t t97 = 121403LLU;

	t97 = ((x449-(x450&x451))%x452);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x461 = -427;
	static volatile uint8_t x462 = 3U;
	uint8_t x463 = UINT8_MAX;
	uint32_t x464 = 5U;

	t98 = ((x461-(x462&x463))%x464);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = INT16_MIN;
	volatile int8_t x468 = 22;
	volatile int32_t t99 = 76;

	t99 = ((x465-(x466&x467))%x468);

	if (t99 != -7) { NG(); } else { ; }
	
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

