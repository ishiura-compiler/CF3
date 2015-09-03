#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 169549380660885LLU;
volatile int64_t t0 = -3986LL;
int32_t x6 = 19373;
static uint64_t x8 = UINT64_MAX;
volatile uint64_t t1 = 198453014959LLU;
volatile uint8_t x10 = 12U;
uint32_t x13 = 1900U;
uint8_t x14 = 68U;
volatile int16_t x16 = INT16_MAX;
int16_t x18 = INT16_MIN;
int64_t x22 = -1LL;
volatile uint64_t t6 = 48161757755LLU;
int8_t x30 = INT8_MIN;
int32_t x33 = -1;
int64_t x43 = INT64_MIN;
int32_t x46 = INT32_MIN;
int16_t x52 = 29;
volatile int16_t x61 = 60;
volatile int64_t x64 = INT64_MIN;
int32_t x65 = -1;
uint16_t x67 = UINT16_MAX;
volatile int32_t x69 = -1454617;
static int64_t x76 = -277LL;
volatile uint64_t t19 = 52343LLU;
static int16_t x84 = -135;
static volatile int64_t t21 = -3996562716045LL;
int16_t x89 = -897;
static uint16_t x94 = UINT16_MAX;
int8_t x99 = -1;
static int16_t x111 = -18;
int8_t x112 = INT8_MIN;
int64_t t30 = -129299279600758LL;
volatile uint32_t t34 = 7618U;
int64_t x141 = INT64_MIN;
uint32_t x147 = UINT32_MAX;
int64_t x148 = INT64_MAX;
uint32_t x149 = UINT32_MAX;
uint64_t t39 = 453187455982736LLU;
volatile int64_t x162 = INT64_MIN;
volatile int16_t x164 = -1;
static volatile uint8_t x165 = 3U;
volatile int32_t x178 = INT32_MIN;
int16_t x179 = INT16_MIN;
static int64_t x186 = INT64_MIN;
int8_t x192 = 7;
int16_t x193 = -2;
static volatile uint32_t x204 = UINT32_MAX;
static volatile int16_t x216 = -1;
volatile int32_t t53 = 29251310;
volatile int32_t x217 = INT32_MAX;
static int8_t x220 = -1;
int16_t x222 = INT16_MIN;
volatile int16_t x226 = 2;
int32_t t57 = 996275855;
uint8_t x246 = UINT8_MAX;
uint64_t x249 = 12493LLU;
static volatile int16_t x258 = -1;
int16_t x278 = -1;
uint32_t t70 = 950844593U;
volatile int64_t x286 = INT64_MAX;
volatile int16_t x298 = -92;
static int16_t x301 = -222;
uint64_t x306 = 4255055095243476625LLU;
static int32_t x307 = -238391043;
volatile int16_t x310 = -20;
uint32_t t77 = 3U;
int64_t x319 = -1LL;
int16_t x323 = INT16_MIN;
volatile uint32_t x330 = UINT32_MAX;
uint32_t x344 = 827256U;
static int16_t x348 = INT16_MAX;
uint32_t x353 = 1901446845U;
uint32_t t88 = 272373U;
volatile int16_t x358 = INT16_MIN;
static volatile uint8_t x361 = 6U;
uint8_t x371 = 92U;
uint16_t x378 = UINT16_MAX;
uint64_t x392 = UINT64_MAX;
int64_t x396 = INT64_MIN;
static int64_t t98 = -31607LL;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = INT64_MAX;
	volatile int32_t x4 = 1;

	t0 = ((x1<=x2)^(x3&x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -13416419794LL;
	int16_t x7 = -7;

	t1 = ((x5<=x6)^(x7&x8));

	if (t1 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile int16_t x11 = 105;
	volatile int64_t x12 = -1LL;
	volatile int64_t t2 = -504220603930198924LL;

	t2 = ((x9<=x10)^(x11&x12));

	if (t2 != 104LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = 955678279364308253LL;
	int64_t t3 = -1816845LL;

	t3 = ((x13<=x14)^(x15&x16));

	if (t3 != 27933LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	volatile uint32_t x19 = 29070U;
	int64_t x20 = 2LL;
	int64_t t4 = -104591105645253972LL;

	t4 = ((x17<=x18)^(x19&x20));

	if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 1;
	volatile int64_t x23 = INT64_MAX;
	int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 42446234292138LL;

	t5 = ((x21<=x22)^(x23&x24));

	if (t5 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	volatile int16_t x27 = 0;
	volatile uint64_t x28 = 6755LLU;

	t6 = ((x25<=x26)^(x27&x28));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -18735916;

	t7 = ((x29<=x30)^(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = 0;
	int32_t x35 = -426120623;
	uint32_t x36 = 34159U;
	uint32_t t8 = 294782640U;

	t8 = ((x33<=x34)^(x35&x36));

	if (t8 != 32832U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	int16_t x38 = -2075;
	static volatile uint64_t x39 = 259032042480960465LLU;
	static int8_t x40 = INT8_MAX;
	static volatile uint64_t t9 = 46354050LLU;

	t9 = ((x37<=x38)^(x39&x40));

	if (t9 != 81LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 62840LLU;
	int8_t x44 = -1;
	int64_t t10 = -468797812810LL;

	t10 = ((x41<=x42)^(x43&x44));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 20592LL;
	uint8_t x47 = UINT8_MAX;
	int8_t x48 = -1;
	int32_t t11 = 429;

	t11 = ((x45<=x46)^(x47&x48));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int8_t x50 = INT8_MIN;
	static uint32_t x51 = 12U;
	uint32_t t12 = 4018925U;

	t12 = ((x49<=x50)^(x51&x52));

	if (t12 != 12U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 3U;
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 8U;
	uint8_t x56 = 21U;
	int32_t t13 = 52689515;

	t13 = ((x53<=x54)^(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	volatile int64_t x58 = INT64_MIN;
	volatile int64_t x59 = 1LL;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t14 = -237LL;

	t14 = ((x57<=x58)^(x59&x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x62 = INT16_MIN;
	uint64_t x63 = UINT64_MAX;
	static volatile uint64_t t15 = 897936866LLU;

	t15 = ((x61<=x62)^(x63&x64));

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 0U;
	uint16_t x68 = 15335U;
	int32_t t16 = 6;

	t16 = ((x65<=x66)^(x67&x68));

	if (t16 != 15334) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x70 = -28;
	static uint32_t x71 = 58035U;
	int16_t x72 = -1915;
	uint32_t t17 = 1U;

	t17 = ((x69<=x70)^(x71&x72));

	if (t17 != 57472U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -5788;
	int32_t x74 = INT32_MIN;
	uint64_t x75 = 8045921109887LLU;
	uint64_t t18 = 56214702LLU;

	t18 = ((x73<=x74)^(x75&x76));

	if (t18 != 8045921109611LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = -1;
	uint64_t x80 = 31533409810LLU;

	t19 = ((x77<=x78)^(x79&x80));

	if (t19 != 31533409811LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = -3094;
	static int64_t x82 = 0LL;
	uint16_t x83 = UINT16_MAX;
	volatile int32_t t20 = -28;

	t20 = ((x81<=x82)^(x83&x84));

	if (t20 != 65400) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 151285570U;
	int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MIN;

	t21 = ((x85<=x86)^(x87&x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 83LLU;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = -723;
	volatile int32_t t22 = 0;

	t22 = ((x89<=x90)^(x91&x92));

	if (t22 != 64813) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int16_t x95 = 0;
	volatile int32_t x96 = -79;
	int32_t t23 = -5;

	t23 = ((x93<=x94)^(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 86U;
	int8_t x98 = INT8_MIN;
	int8_t x100 = -26;
	volatile int32_t t24 = 59;

	t24 = ((x97<=x98)^(x99&x100));

	if (t24 != -26) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	static int32_t x102 = INT32_MIN;
	static int32_t x103 = INT32_MIN;
	static int64_t x104 = INT64_MIN;
	int64_t t25 = -950799LL;

	t25 = ((x101<=x102)^(x103&x104));

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	uint32_t x106 = 3807U;
	static int8_t x107 = -1;
	uint16_t x108 = 7U;
	volatile int32_t t26 = 94398604;

	t26 = ((x105<=x106)^(x107&x108));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	uint32_t x110 = UINT32_MAX;
	int32_t t27 = 803395;

	t27 = ((x109<=x110)^(x111&x112));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 1207U;
	uint32_t x114 = 23U;
	volatile int16_t x115 = 876;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 557189177;

	t28 = ((x113<=x114)^(x115&x116));

	if (t28 != 108) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile uint32_t x118 = UINT32_MAX;
	static int16_t x119 = 909;
	static int64_t x120 = -1LL;
	volatile int64_t t29 = -207619534784LL;

	t29 = ((x117<=x118)^(x119&x120));

	if (t29 != 908LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	uint64_t x122 = 3824966090004LLU;
	uint32_t x123 = 4999U;
	static int64_t x124 = INT64_MIN;

	t30 = ((x121<=x122)^(x123&x124));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	static int32_t x126 = 382238178;
	int32_t x127 = INT32_MIN;
	volatile int8_t x128 = INT8_MIN;
	int32_t t31 = INT32_MIN;

	t31 = ((x125<=x126)^(x127&x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1119070595446891685LL;
	int8_t x130 = INT8_MIN;
	uint8_t x131 = 3U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 433810;

	t32 = ((x129<=x130)^(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = 14;
	static int64_t x134 = INT64_MIN;
	uint16_t x135 = 179U;
	volatile uint8_t x136 = 10U;
	int32_t t33 = -3274;

	t33 = ((x133<=x134)^(x135&x136));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MIN;
	uint32_t x138 = 2825834U;
	uint32_t x139 = 60238U;
	int8_t x140 = 1;

	t34 = ((x137<=x138)^(x139&x140));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x142 = INT32_MAX;
	uint16_t x143 = UINT16_MAX;
	static uint8_t x144 = 31U;
	static volatile int32_t t35 = 178;

	t35 = ((x141<=x142)^(x143&x144));

	if (t35 != 30) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 8411740U;
	uint16_t x146 = 67U;
	static int64_t t36 = -137673LL;

	t36 = ((x145<=x146)^(x147&x148));

	if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x150 = 0;
	int16_t x151 = 41;
	volatile uint32_t x152 = 66885006U;
	static uint32_t t37 = 19832736U;

	t37 = ((x149<=x150)^(x151&x152));

	if (t37 != 8U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 664265935642LLU;
	static volatile int32_t x154 = INT32_MAX;
	static volatile int16_t x155 = -54;
	int32_t x156 = 167;
	int32_t t38 = -979142;

	t38 = ((x153<=x154)^(x155&x156));

	if (t38 != 130) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 22LLU;
	int32_t x158 = INT32_MAX;
	int8_t x159 = 13;
	uint64_t x160 = 1630262863149LLU;

	t39 = ((x157<=x158)^(x159&x160));

	if (t39 != 12LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	volatile int64_t t40 = INT64_MIN;

	t40 = ((x161<=x162)^(x163&x164));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x166 = 535336759292817834LLU;
	static int32_t x167 = INT32_MIN;
	static volatile int64_t x168 = -1LL;
	volatile int64_t t41 = 7430759634LL;

	t41 = ((x165<=x166)^(x167&x168));

	if (t41 != -2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 0U;
	int8_t x170 = -1;
	uint16_t x171 = 336U;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 422137;

	t42 = ((x169<=x170)^(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	static int64_t x175 = -1LL;
	uint16_t x176 = UINT16_MAX;
	int64_t t43 = 170425332613032731LL;

	t43 = ((x173<=x174)^(x175&x176));

	if (t43 != 65534LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 57;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = 16U;

	t44 = ((x177<=x178)^(x179&x180));

	if (t44 != 4294934528U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MAX;
	int64_t x183 = -1LL;
	uint32_t x184 = 26U;
	static volatile int64_t t45 = -16275617LL;

	t45 = ((x181<=x182)^(x183&x184));

	if (t45 != 27LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = 46;
	static uint64_t x187 = UINT64_MAX;
	volatile int16_t x188 = -1;
	uint64_t t46 = UINT64_MAX;

	t46 = ((x185<=x186)^(x187&x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 3936U;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MAX;
	static int32_t t47 = -5167;

	t47 = ((x189<=x190)^(x191&x192));

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x194 = 14;
	int64_t x195 = INT64_MIN;
	static int8_t x196 = -1;
	int64_t t48 = -16296535130691677LL;

	t48 = ((x193<=x194)^(x195&x196));

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	static volatile uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MIN;
	static int64_t t49 = 2155523055653523440LL;

	t49 = ((x197<=x198)^(x199&x200));

	if (t49 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 35578609420003431LLU;
	uint32_t x202 = 365285192U;
	static int32_t x203 = 43198848;
	uint32_t t50 = 611U;

	t50 = ((x201<=x202)^(x203&x204));

	if (t50 != 43198848U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = -1;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 284044503850675922LLU;
	uint64_t t51 = 106097LLU;

	t51 = ((x205<=x206)^(x207&x208));

	if (t51 != 284044503850675841LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	volatile int64_t x210 = INT64_MIN;
	uint16_t x211 = 558U;
	static int16_t x212 = 26;
	volatile int32_t t52 = 198789;

	t52 = ((x209<=x210)^(x211&x212));

	if (t52 != 10) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = UINT32_MAX;
	volatile int16_t x214 = INT16_MAX;
	int16_t x215 = -77;

	t53 = ((x213<=x214)^(x215&x216));

	if (t53 != -77) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x218 = INT64_MIN;
	volatile int64_t x219 = INT64_MIN;
	static volatile int64_t t54 = INT64_MIN;

	t54 = ((x217<=x218)^(x219&x220));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	uint16_t x223 = 2336U;
	volatile int64_t x224 = INT64_MAX;
	volatile int64_t t55 = 293427505328993LL;

	t55 = ((x221<=x222)^(x223&x224));

	if (t55 != 2336LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 0U;
	uint8_t x227 = 26U;
	int32_t x228 = -1;
	int32_t t56 = 12;

	t56 = ((x225<=x226)^(x227&x228));

	if (t56 != 27) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MAX;
	int16_t x231 = 2672;
	int32_t x232 = -1;

	t57 = ((x229<=x230)^(x231&x232));

	if (t57 != 2673) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 5900066U;
	int32_t x234 = INT32_MIN;
	volatile uint32_t x235 = 191U;
	static uint16_t x236 = 183U;
	volatile uint32_t t58 = 250512U;

	t58 = ((x233<=x234)^(x235&x236));

	if (t58 != 182U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 12764703871LLU;
	uint16_t x238 = 1U;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = -1;
	static volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x237<=x238)^(x239&x240));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 4087LLU;
	int16_t x242 = INT16_MIN;
	volatile uint8_t x243 = 2U;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t60 = 301261LLU;

	t60 = ((x241<=x242)^(x243&x244));

	if (t60 != 3LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 1893930;
	int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = ((x245<=x246)^(x247&x248));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x250 = UINT16_MAX;
	int8_t x251 = INT8_MIN;
	int8_t x252 = 27;
	volatile int32_t t62 = -23598;

	t62 = ((x249<=x250)^(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MAX;
	int8_t x254 = 1;
	int64_t x255 = -6009611752699LL;
	uint8_t x256 = 43U;
	volatile int64_t t63 = 105729LL;

	t63 = ((x253<=x254)^(x255&x256));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	uint32_t x260 = 470U;
	volatile uint32_t t64 = 468172266U;

	t64 = ((x257<=x258)^(x259&x260));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 15199915LL;
	static int16_t x262 = INT16_MAX;
	int64_t x263 = INT64_MAX;
	int32_t x264 = INT32_MIN;
	volatile int64_t t65 = -102275328LL;

	t65 = ((x261<=x262)^(x263&x264));

	if (t65 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = -1;
	int8_t x266 = INT8_MIN;
	int8_t x267 = 4;
	int64_t x268 = INT64_MIN;
	int64_t t66 = 47LL;

	t66 = ((x265<=x266)^(x267&x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 145;

	t67 = ((x269<=x270)^(x271&x272));

	if (t67 != 2147483520) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 1743U;
	int8_t x274 = INT8_MIN;
	volatile uint64_t x275 = UINT64_MAX;
	int32_t x276 = INT32_MIN;
	uint64_t t68 = 133LLU;

	t68 = ((x273<=x274)^(x275&x276));

	if (t68 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int16_t x279 = INT16_MAX;
	uint32_t x280 = 137U;
	static volatile uint32_t t69 = 367237522U;

	t69 = ((x277<=x278)^(x279&x280));

	if (t69 != 136U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -20561928;
	int16_t x282 = 52;
	int16_t x283 = INT16_MIN;
	uint32_t x284 = UINT32_MAX;

	t70 = ((x281<=x282)^(x283&x284));

	if (t70 != 4294934529U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	volatile int64_t x287 = -22488LL;
	int64_t x288 = -1LL;
	static volatile int64_t t71 = 845LL;

	t71 = ((x285<=x286)^(x287&x288));

	if (t71 != -22487LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -15;
	static volatile int32_t x290 = -1;
	static int8_t x291 = 31;
	uint8_t x292 = 0U;
	int32_t t72 = 16905;

	t72 = ((x289<=x290)^(x291&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 1U;
	int32_t x294 = 9087;
	volatile uint64_t x295 = UINT64_MAX;
	volatile int64_t x296 = -1LL;
	static uint64_t t73 = 23402LLU;

	t73 = ((x293<=x294)^(x295&x296));

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = 0;
	volatile int32_t t74 = 5263;

	t74 = ((x297<=x298)^(x299&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x302 = 359949LLU;
	uint8_t x303 = UINT8_MAX;
	volatile uint8_t x304 = 0U;
	volatile int32_t t75 = -47618;

	t75 = ((x301<=x302)^(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	static uint16_t x308 = UINT16_MAX;
	static int32_t t76 = -96;

	t76 = ((x305<=x306)^(x307&x308));

	if (t76 != 28925) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 3U;
	uint32_t x311 = 1623U;
	int32_t x312 = INT32_MIN;

	t77 = ((x309<=x310)^(x311&x312));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = UINT64_MAX;
	int32_t x314 = 6063;
	volatile uint32_t x315 = 16196191U;
	static uint16_t x316 = 3405U;
	static uint32_t t78 = 5U;

	t78 = ((x313<=x314)^(x315&x316));

	if (t78 != 77U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	int64_t x320 = -1LL;
	int64_t t79 = 1563334LL;

	t79 = ((x317<=x318)^(x319&x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -1;
	static uint8_t x322 = UINT8_MAX;
	uint32_t x324 = 21768U;
	uint32_t t80 = 891U;

	t80 = ((x321<=x322)^(x323&x324));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 30U;
	volatile uint8_t x326 = 0U;
	int8_t x327 = INT8_MIN;
	static volatile int32_t x328 = 977560048;
	int32_t t81 = 13355604;

	t81 = ((x325<=x326)^(x327&x328));

	if (t81 != 977559936) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 3588LLU;
	volatile uint32_t x331 = 1U;
	int32_t x332 = -1;
	uint32_t t82 = 193074U;

	t82 = ((x329<=x330)^(x331&x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = UINT8_MAX;
	static volatile int8_t x334 = INT8_MAX;
	int64_t x335 = 10LL;
	int32_t x336 = -13606;
	volatile int64_t t83 = -378105959298660677LL;

	t83 = ((x333<=x334)^(x335&x336));

	if (t83 != 10LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static uint32_t x338 = 6U;
	int8_t x339 = -1;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 576;

	t84 = ((x337<=x338)^(x339&x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 0U;
	uint64_t x342 = 1330209974495065930LLU;
	uint32_t x343 = 813511U;
	uint32_t t85 = 386U;

	t85 = ((x341<=x342)^(x343&x344));

	if (t85 != 788801U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 398964044711141023LLU;
	uint64_t x346 = 1075094952779083656LLU;
	int32_t x347 = INT32_MAX;
	volatile int32_t t86 = 128590444;

	t86 = ((x345<=x346)^(x347&x348));

	if (t86 != 32766) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x349 = UINT8_MAX;
	static uint8_t x350 = 1U;
	static uint16_t x351 = 0U;
	static int32_t x352 = INT32_MAX;
	int32_t t87 = -26382379;

	t87 = ((x349<=x350)^(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x354 = 443233LLU;
	int16_t x355 = INT16_MAX;
	uint32_t x356 = 964768341U;

	t88 = ((x353<=x354)^(x355&x356));

	if (t88 != 12885U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	static uint32_t x359 = UINT32_MAX;
	int16_t x360 = 56;
	volatile uint32_t t89 = 1217512U;

	t89 = ((x357<=x358)^(x359&x360));

	if (t89 != 56U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	uint32_t t90 = 9425817U;

	t90 = ((x361<=x362)^(x363&x364));

	if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = -31;
	int8_t x367 = INT8_MIN;
	int16_t x368 = -1;
	volatile int32_t t91 = 20385;

	t91 = ((x365<=x366)^(x367&x368));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint64_t x370 = 42765176812LLU;
	int32_t x372 = 130004419;
	int32_t t92 = 192;

	t92 = ((x369<=x370)^(x371&x372));

	if (t92 != 64) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	volatile uint8_t x374 = 18U;
	int32_t x375 = INT32_MAX;
	volatile uint64_t x376 = UINT64_MAX;
	volatile uint64_t t93 = 8LLU;

	t93 = ((x373<=x374)^(x375&x376));

	if (t93 != 2147483647LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 511;
	volatile int16_t x379 = INT16_MIN;
	static int8_t x380 = INT8_MIN;
	int32_t t94 = -15;

	t94 = ((x377<=x378)^(x379&x380));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MIN;
	volatile int8_t x383 = INT8_MAX;
	uint8_t x384 = 13U;
	volatile int32_t t95 = 0;

	t95 = ((x381<=x382)^(x383&x384));

	if (t95 != 12) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 3U;
	int16_t x386 = 7096;
	int32_t x387 = -535978046;
	volatile int16_t x388 = INT16_MIN;
	int32_t t96 = -696137200;

	t96 = ((x385<=x386)^(x387&x388));

	if (t96 != -535986175) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	uint32_t x390 = UINT32_MAX;
	volatile uint32_t x391 = UINT32_MAX;
	static volatile uint64_t t97 = 57286LLU;

	t97 = ((x389<=x390)^(x391&x392));

	if (t97 != 4294967294LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -1LL;
	static int8_t x394 = INT8_MAX;
	uint8_t x395 = 30U;

	t98 = ((x393<=x394)^(x395&x396));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	static volatile uint64_t x398 = UINT64_MAX;
	int16_t x399 = -1;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 596;

	t99 = ((x397<=x398)^(x399&x400));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

