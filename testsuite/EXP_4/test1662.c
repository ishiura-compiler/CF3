#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -11555;
static volatile uint16_t x3 = 92U;
int8_t x4 = INT8_MIN;
int16_t x6 = -2590;
volatile uint8_t x8 = 82U;
uint16_t x9 = 393U;
int32_t t2 = -29019933;
volatile uint64_t x15 = UINT64_MAX;
int32_t x16 = INT32_MIN;
volatile uint16_t x17 = 3U;
uint32_t x21 = UINT32_MAX;
volatile int8_t x28 = -20;
volatile int16_t x29 = -1;
uint32_t t8 = 1838645U;
int32_t t9 = -174409;
int16_t x44 = INT16_MIN;
uint32_t x47 = 154U;
int64_t x53 = INT64_MAX;
int8_t x58 = -9;
static int64_t t16 = -257613LL;
int8_t x73 = -1;
uint64_t x80 = UINT64_MAX;
uint32_t x82 = UINT32_MAX;
volatile int32_t x85 = INT32_MIN;
int8_t x89 = -1;
static int64_t x90 = INT64_MIN;
int32_t x91 = INT32_MAX;
volatile int64_t x97 = 65014025945LL;
static int8_t x114 = 3;
int8_t x116 = 36;
volatile int64_t t28 = -38946389728758460LL;
int8_t x123 = 1;
volatile uint64_t t30 = 9509566070969009LLU;
uint64_t t31 = 257177736LLU;
uint32_t x129 = 919U;
uint32_t x135 = 319U;
volatile int64_t x139 = 1LL;
int8_t x141 = INT8_MIN;
uint32_t x148 = 180266698U;
static int8_t x153 = 3;
int32_t x155 = -1;
static int8_t x162 = -9;
volatile int32_t x163 = 281032;
volatile int64_t x168 = 229077LL;
volatile int32_t x171 = -10332671;
int8_t x173 = 0;
volatile uint64_t x176 = UINT64_MAX;
volatile int32_t t43 = 1010894827;
int16_t x183 = INT16_MIN;
int16_t x189 = INT16_MAX;
int16_t x191 = INT16_MIN;
int16_t x198 = INT16_MAX;
static int64_t x203 = INT64_MAX;
volatile uint32_t t52 = 22U;
volatile uint64_t x215 = 7807362946054218LLU;
static int16_t x218 = INT16_MIN;
int16_t x219 = 218;
uint16_t x221 = UINT16_MAX;
volatile uint16_t x227 = UINT16_MAX;
int32_t t57 = -217238156;
int64_t x234 = INT64_MIN;
uint16_t x235 = 721U;
int32_t x243 = INT32_MIN;
uint8_t x251 = UINT8_MAX;
static int16_t x262 = INT16_MIN;
int64_t x264 = INT64_MAX;
int32_t t65 = 30;
volatile uint32_t x266 = UINT32_MAX;
int32_t x285 = INT32_MAX;
static volatile uint32_t x289 = 309U;
volatile int64_t t72 = 202415960090956785LL;
int32_t x293 = INT32_MIN;
int8_t x296 = INT8_MIN;
int8_t x301 = INT8_MAX;
static uint64_t x303 = 282181714LLU;
uint64_t x307 = 53304486829488483LLU;
int64_t x311 = -1LL;
uint32_t t77 = 2U;
uint8_t x327 = 43U;
uint64_t x329 = 834445LLU;
uint8_t x331 = 95U;
int32_t x332 = -1;
int64_t x336 = -10169289684016592LL;
uint64_t x339 = UINT64_MAX;
volatile uint64_t x358 = 5558LLU;
int64_t x366 = INT64_MAX;
uint8_t x367 = UINT8_MAX;
volatile int64_t t91 = -8964356LL;
uint8_t x381 = 36U;
uint8_t x383 = UINT8_MAX;
int32_t x392 = INT32_MIN;
int64_t x398 = INT64_MIN;
uint32_t x399 = 270577032U;


void f0(void) {
	int32_t x1 = -16404946;
	volatile int32_t t0 = -834595;

	t0 = (x1&(x2&(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2113U;
	int64_t x7 = INT64_MIN;
	static volatile uint32_t t1 = 59U;

	t1 = (x5&(x6&(x7<=x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = UINT8_MAX;
	uint16_t x11 = 4U;
	int64_t x12 = INT64_MAX;

	t2 = (x9&(x10&(x11<=x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int8_t x14 = 10;
	int32_t t3 = -1;

	t3 = (x13&(x14&(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = -8169;
	int64_t x19 = -1248588809684LL;
	int8_t x20 = 47;
	volatile int32_t t4 = 132;

	t4 = (x17&(x18&(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	uint64_t x23 = 69067640695320LLU;
	int8_t x24 = INT8_MIN;
	uint32_t t5 = 1694U;

	t5 = (x21&(x22&(x23<=x24)));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -307LL;
	int32_t x26 = INT32_MIN;
	int64_t x27 = -310LL;
	int64_t t6 = -4LL;

	t6 = (x25&(x26&(x27<=x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	int16_t x31 = 786;
	int64_t x32 = -1LL;
	int64_t t7 = -26LL;

	t7 = (x29&(x30&(x31<=x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static int16_t x34 = INT16_MIN;
	volatile uint16_t x35 = 115U;
	int8_t x36 = -15;

	t8 = (x33&(x34&(x35<=x36)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	static int32_t x38 = INT32_MAX;
	volatile int8_t x39 = -1;
	int8_t x40 = -48;

	t9 = (x37&(x38&(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	int16_t x43 = 104;
	int32_t t10 = 2081345;

	t10 = (x41&(x42&(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int32_t x46 = INT32_MIN;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 2884932760LLU;

	t11 = (x45&(x46&(x47<=x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	volatile int32_t x50 = INT32_MAX;
	int32_t x51 = INT32_MIN;
	int32_t x52 = -22180632;
	int32_t t12 = 5417;

	t12 = (x49&(x50&(x51<=x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	volatile uint64_t x55 = 442384191432LLU;
	static int16_t x56 = -186;
	volatile int64_t t13 = -118420932170115LL;

	t13 = (x53&(x54&(x55<=x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	uint64_t x59 = UINT64_MAX;
	volatile uint64_t x60 = UINT64_MAX;
	int32_t t14 = -1;

	t14 = (x57&(x58&(x59<=x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -6;
	static int32_t x62 = INT32_MAX;
	static int16_t x63 = INT16_MIN;
	int32_t x64 = -1;
	int32_t t15 = -208115754;

	t15 = (x61&(x62&(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int32_t x66 = INT32_MAX;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = 2;

	t16 = (x65&(x66&(x67<=x68)));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint16_t x70 = 5U;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = INT64_MIN;
	static volatile int32_t t17 = -698;

	t17 = (x69&(x70&(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x74 = -317620013011LL;
	static uint8_t x75 = 6U;
	static volatile uint64_t x76 = 122214LLU;
	volatile int64_t t18 = -1896061LL;

	t18 = (x73&(x74&(x75<=x76)));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	uint16_t x78 = 2594U;
	int16_t x79 = INT16_MAX;
	volatile int32_t t19 = 1;

	t19 = (x77&(x78&(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 906U;
	volatile uint8_t x83 = UINT8_MAX;
	static int16_t x84 = -488;
	static uint32_t t20 = 147U;

	t20 = (x81&(x82&(x83<=x84)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -1;
	static int64_t x87 = INT64_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = -605;

	t21 = (x85&(x86&(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x92 = INT64_MIN;
	static volatile int64_t t22 = -213123738092340860LL;

	t22 = (x89&(x90&(x91<=x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	int16_t x94 = INT16_MIN;
	int64_t x95 = 207352335900LL;
	static uint32_t x96 = 22U;
	volatile uint32_t t23 = 25U;

	t23 = (x93&(x94&(x95<=x96)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	int8_t x99 = 39;
	volatile int16_t x100 = 48;
	volatile int64_t t24 = 723211LL;

	t24 = (x97&(x98&(x99<=x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -19;
	static int64_t x102 = INT64_MIN;
	uint16_t x103 = UINT16_MAX;
	int16_t x104 = INT16_MIN;
	volatile int64_t t25 = -65472008797LL;

	t25 = (x101&(x102&(x103<=x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int8_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -225;

	t26 = (x105&(x106&(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	uint64_t x112 = 3178026594608359565LLU;
	int32_t t27 = 66879;

	t27 = (x109&(x110&(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -46920581787LL;
	int16_t x115 = 0;

	t28 = (x113&(x114&(x115<=x116)));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = 2007U;
	static int16_t x118 = INT16_MAX;
	int8_t x119 = -12;
	int8_t x120 = INT8_MAX;
	int32_t t29 = -920254;

	t29 = (x117&(x118&(x119<=x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 12226449778LLU;
	int32_t x122 = INT32_MAX;
	int16_t x124 = INT16_MIN;

	t30 = (x121&(x122&(x123<=x124)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x125 = UINT64_MAX;
	int16_t x126 = -1;
	uint8_t x127 = 33U;
	uint8_t x128 = UINT8_MAX;

	t31 = (x125&(x126&(x127<=x128)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = 744210062629385LL;
	uint8_t x131 = 53U;
	uint32_t x132 = 29U;
	int64_t t32 = 53810653523LL;

	t32 = (x129&(x130&(x131<=x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x133 = 0U;
	volatile int32_t x134 = -1;
	volatile int64_t x136 = 36220173469LL;
	volatile int32_t t33 = 21;

	t33 = (x133&(x134&(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 7118U;
	volatile int8_t x138 = 2;
	static volatile uint64_t x140 = 9LLU;
	uint32_t t34 = 180699U;

	t34 = (x137&(x138&(x139<=x140)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x142 = 53005828LLU;
	int8_t x143 = INT8_MAX;
	int16_t x144 = -1;
	uint64_t t35 = 671958460LLU;

	t35 = (x141&(x142&(x143<=x144)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	static int32_t x146 = -1;
	uint64_t x147 = 4089565259LLU;
	int32_t t36 = -1;

	t36 = (x145&(x146&(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -20;
	volatile int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MAX;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t37 = 107787464;

	t37 = (x149&(x150&(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x154 = INT32_MIN;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = 249016;

	t38 = (x153&(x154&(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	uint32_t x158 = UINT32_MAX;
	int64_t x159 = INT64_MIN;
	int32_t x160 = -1;
	static volatile uint32_t t39 = 1019762086U;

	t39 = (x157&(x158&(x159<=x160)));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = INT64_MIN;
	volatile int8_t x164 = -1;
	int64_t t40 = 25690725441781782LL;

	t40 = (x161&(x162&(x163<=x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 45830093473366LLU;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = -1;
	uint64_t t41 = 192055584LLU;

	t41 = (x165&(x166&(x167<=x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = INT64_MIN;
	static int64_t x170 = 457LL;
	volatile int16_t x172 = INT16_MIN;
	int64_t t42 = 34924190LL;

	t42 = (x169&(x170&(x171<=x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x174 = UINT16_MAX;
	static int8_t x175 = 0;

	t43 = (x173&(x174&(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -2;
	static uint64_t x178 = 71010493LLU;
	volatile int8_t x179 = -1;
	int32_t x180 = -1;
	volatile uint64_t t44 = 24946794LLU;

	t44 = (x177&(x178&(x179<=x180)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1;
	uint32_t x182 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	volatile uint32_t t45 = 2134U;

	t45 = (x181&(x182&(x183<=x184)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	static volatile int8_t x187 = -1;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 1250488;

	t46 = (x185&(x186&(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x190 = -5569;
	volatile int32_t x192 = -1;
	static int32_t t47 = -736;

	t47 = (x189&(x190&(x191<=x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	int64_t x194 = 32760612925986LL;
	volatile int32_t x195 = INT32_MAX;
	int16_t x196 = INT16_MIN;
	volatile int64_t t48 = -21288923LL;

	t48 = (x193&(x194&(x195<=x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -8625567491251LL;
	int64_t x199 = 2052100656LL;
	static int32_t x200 = INT32_MIN;
	volatile int64_t t49 = 57080241680LL;

	t49 = (x197&(x198&(x199<=x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 22411691701586056LLU;
	static uint16_t x202 = UINT16_MAX;
	volatile uint32_t x204 = 263836871U;
	uint64_t t50 = 267417289454LLU;

	t50 = (x201&(x202&(x203<=x204)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x206 = 41977167U;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	volatile int64_t t51 = 119249LL;

	t51 = (x205&(x206&(x207<=x208)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = UINT8_MAX;
	uint32_t x210 = 2065456276U;
	int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MAX;

	t52 = (x209&(x210&(x211<=x212)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 1547;
	volatile uint32_t x214 = UINT32_MAX;
	volatile uint16_t x216 = 67U;
	volatile uint32_t t53 = 189374U;

	t53 = (x213&(x214&(x215<=x216)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 4U;
	int32_t x220 = 874575;
	volatile int32_t t54 = -195108;

	t54 = (x217&(x218&(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x222 = INT16_MAX;
	int8_t x223 = -1;
	static int16_t x224 = INT16_MIN;
	int32_t t55 = 35;

	t55 = (x221&(x222&(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 2;
	volatile uint8_t x226 = 0U;
	int8_t x228 = 0;
	volatile int32_t t56 = 154426;

	t56 = (x225&(x226&(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -382;
	static volatile int32_t x230 = INT32_MIN;
	static int16_t x231 = -6603;
	static volatile int16_t x232 = -1;

	t57 = (x229&(x230&(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	static uint8_t x236 = UINT8_MAX;
	static volatile int64_t t58 = 1LL;

	t58 = (x233&(x234&(x235<=x236)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = 100;
	uint8_t x238 = 1U;
	uint32_t x239 = UINT32_MAX;
	uint8_t x240 = 0U;
	volatile int32_t t59 = 7123;

	t59 = (x237&(x238&(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile int32_t x242 = INT32_MIN;
	int16_t x244 = INT16_MIN;
	int64_t t60 = 1129LL;

	t60 = (x241&(x242&(x243<=x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = 102U;
	uint64_t x248 = UINT64_MAX;
	int32_t t61 = -422;

	t61 = (x245&(x246&(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -4;
	static int64_t x250 = INT64_MIN;
	volatile uint8_t x252 = 26U;
	int64_t t62 = 41481003691LL;

	t62 = (x249&(x250&(x251<=x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = -1;
	static int64_t x254 = -1LL;
	uint8_t x255 = 0U;
	static int16_t x256 = 1836;
	static int64_t t63 = 15750LL;

	t63 = (x253&(x254&(x255<=x256)));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	int8_t x258 = -1;
	int32_t x259 = INT32_MAX;
	int16_t x260 = -232;
	volatile int32_t t64 = 348150543;

	t64 = (x257&(x258&(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	int64_t x263 = 1538639LL;

	t65 = (x261&(x262&(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -31684522LL;
	int8_t x267 = -1;
	volatile uint16_t x268 = UINT16_MAX;
	int64_t t66 = -2172527053LL;

	t66 = (x265&(x266&(x267<=x268)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -11209;
	static int16_t x270 = INT16_MIN;
	int64_t x271 = -74LL;
	int16_t x272 = -1;
	static volatile int32_t t67 = 1;

	t67 = (x269&(x270&(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = -8150;
	volatile int32_t x274 = 15823227;
	int64_t x275 = -1LL;
	int8_t x276 = INT8_MIN;
	static int32_t t68 = -4780419;

	t68 = (x273&(x274&(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int32_t x278 = -224027194;
	int32_t x279 = -1;
	int8_t x280 = -1;
	volatile int32_t t69 = 4;

	t69 = (x277&(x278&(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	int32_t x282 = INT32_MAX;
	int8_t x283 = -1;
	volatile uint16_t x284 = 0U;
	volatile int32_t t70 = -443818;

	t70 = (x281&(x282&(x283<=x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = 165088949597LLU;
	volatile int8_t x287 = INT8_MAX;
	volatile int16_t x288 = -1;
	uint64_t t71 = 69228269469411LLU;

	t71 = (x285&(x286&(x287<=x288)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = INT64_MIN;
	uint32_t x291 = 195U;
	uint16_t x292 = 13029U;

	t72 = (x289&(x290&(x291<=x292)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = 139464;
	int64_t x295 = INT64_MAX;
	volatile int32_t t73 = -258790;

	t73 = (x293&(x294&(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 544428640706842LL;
	volatile uint32_t x298 = 41673U;
	static uint32_t x299 = UINT32_MAX;
	int8_t x300 = -1;
	volatile int64_t t74 = -2967410552956090367LL;

	t74 = (x297&(x298&(x299<=x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x302 = INT8_MIN;
	static volatile uint16_t x304 = 5572U;
	int32_t t75 = -1791;

	t75 = (x301&(x302&(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint8_t x306 = 15U;
	volatile int16_t x308 = INT16_MAX;
	volatile int32_t t76 = -454846357;

	t76 = (x305&(x306&(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int8_t x310 = INT8_MAX;
	uint8_t x312 = 35U;

	t77 = (x309&(x310&(x311<=x312)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -9079687903796950LL;
	uint16_t x314 = UINT16_MAX;
	volatile uint64_t x315 = 12398189LLU;
	int8_t x316 = INT8_MIN;
	static volatile int64_t t78 = 1633910LL;

	t78 = (x313&(x314&(x315<=x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 224748467301LLU;
	uint64_t x318 = 136361364LLU;
	volatile int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	uint64_t t79 = 824LLU;

	t79 = (x317&(x318&(x319<=x320)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	uint32_t x323 = 2473031U;
	int32_t x324 = 110;
	uint64_t t80 = 604910LLU;

	t80 = (x321&(x322&(x323<=x324)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = 7;
	uint64_t x326 = 50004796LLU;
	uint64_t x328 = 2538LLU;
	volatile uint64_t t81 = 0LLU;

	t81 = (x325&(x326&(x327<=x328)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = -1LL;
	uint64_t t82 = 1444LLU;

	t82 = (x329&(x330&(x331<=x332)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -5;
	static int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	int32_t t83 = 1053634773;

	t83 = (x333&(x334&(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MAX;
	uint16_t x338 = UINT16_MAX;
	int32_t x340 = -1;
	volatile int64_t t84 = -11304183508434LL;

	t84 = (x337&(x338&(x339<=x340)));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = 1;
	int32_t x342 = 11653577;
	int32_t x343 = -1;
	int32_t x344 = 6;
	volatile int32_t t85 = -203;

	t85 = (x341&(x342&(x343<=x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	volatile int16_t x346 = -1;
	static volatile int16_t x347 = -24;
	static int8_t x348 = INT8_MIN;
	volatile int64_t t86 = -529406947707287LL;

	t86 = (x345&(x346&(x347<=x348)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -24;
	static int8_t x350 = INT8_MIN;
	static volatile uint16_t x351 = UINT16_MAX;
	volatile int32_t x352 = -1;
	static volatile int32_t t87 = 4;

	t87 = (x349&(x350&(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x353 = 68U;
	uint64_t x354 = UINT64_MAX;
	static volatile uint64_t x355 = 3578332LLU;
	volatile int16_t x356 = INT16_MIN;
	static uint64_t t88 = 39399LLU;

	t88 = (x353&(x354&(x355<=x356)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile int64_t x359 = INT64_MIN;
	volatile int16_t x360 = 7;
	uint64_t t89 = 934LLU;

	t89 = (x357&(x358&(x359<=x360)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	int64_t x362 = INT64_MIN;
	int64_t x363 = -1703840133016406LL;
	static int16_t x364 = INT16_MIN;
	volatile int64_t t90 = 3920066LL;

	t90 = (x361&(x362&(x363<=x364)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int16_t x368 = INT16_MIN;

	t91 = (x365&(x366&(x367<=x368)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -264535956440430LL;
	uint8_t x370 = 25U;
	int16_t x371 = INT16_MAX;
	volatile int16_t x372 = 0;
	int64_t t92 = -971LL;

	t92 = (x369&(x370&(x371<=x372)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	int8_t x374 = -7;
	uint64_t x375 = 39LLU;
	uint32_t x376 = UINT32_MAX;
	int32_t t93 = 23016;

	t93 = (x373&(x374&(x375<=x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	volatile uint16_t x378 = 26739U;
	int8_t x379 = -1;
	volatile int8_t x380 = INT8_MAX;
	static volatile int32_t t94 = 12737;

	t94 = (x377&(x378&(x379<=x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x382 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t95 = -12956;

	t95 = (x381&(x382&(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int64_t x386 = -1LL;
	int8_t x387 = INT8_MIN;
	volatile int64_t x388 = INT64_MIN;
	volatile int64_t t96 = -2271955092076950628LL;

	t96 = (x385&(x386&(x387<=x388)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = 22;
	int32_t x391 = INT32_MAX;
	volatile int32_t t97 = -130;

	t97 = (x389&(x390&(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 16438658830LLU;
	int32_t x394 = INT32_MIN;
	volatile uint16_t x395 = 11131U;
	volatile int64_t x396 = -1LL;
	static volatile uint64_t t98 = 2527216211209556785LLU;

	t98 = (x393&(x394&(x395<=x396)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MAX;
	int8_t x400 = -3;
	int64_t t99 = -1495LL;

	t99 = (x397&(x398&(x399<=x400)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

