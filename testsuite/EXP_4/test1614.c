#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = INT32_MIN;
static int32_t x8 = INT32_MIN;
static volatile uint64_t x10 = UINT64_MAX;
static int8_t x14 = -1;
uint64_t x21 = UINT64_MAX;
int32_t x22 = INT32_MIN;
static int32_t x23 = INT32_MAX;
static int64_t x27 = -1LL;
volatile int64_t t6 = INT64_MIN;
int32_t x29 = -1;
int16_t x32 = INT16_MIN;
volatile uint32_t x34 = 137043931U;
uint64_t x39 = 61LLU;
int64_t x40 = 36355713446LL;
int16_t x45 = 59;
static volatile int16_t x47 = INT16_MIN;
static int8_t x49 = INT8_MIN;
int32_t x50 = -114;
int8_t x53 = -4;
volatile int32_t t13 = 47640;
static int32_t t15 = -70441;
int16_t x67 = -1;
volatile int8_t x70 = -1;
volatile uint64_t t17 = UINT64_MAX;
volatile int64_t x74 = INT64_MIN;
volatile int64_t t19 = -15280507985LL;
uint64_t t22 = UINT64_MAX;
uint64_t x99 = 471875LLU;
int32_t t23 = 5;
volatile int16_t x106 = INT16_MIN;
int8_t x107 = -1;
volatile int8_t x108 = -4;
volatile int64_t x109 = INT64_MAX;
volatile int32_t x118 = -2980;
static volatile int32_t t30 = -34;
int8_t x130 = INT8_MAX;
int16_t x133 = 1;
volatile int64_t t34 = INT64_MIN;
uint32_t x145 = UINT32_MAX;
static int32_t x147 = INT32_MAX;
int16_t x154 = INT16_MIN;
int16_t x156 = -1;
static int32_t t37 = INT32_MAX;
volatile int8_t x163 = INT8_MIN;
static int32_t x165 = 3860417;
uint64_t x166 = 2022197526975LLU;
uint16_t x172 = 302U;
volatile uint64_t t42 = UINT64_MAX;
int8_t x182 = INT8_MIN;
int32_t x203 = INT32_MIN;
static int16_t x216 = -3;
uint16_t x218 = UINT16_MAX;
uint64_t x220 = 16992352668205786LLU;
int64_t x221 = -1LL;
uint32_t x224 = 1U;
int16_t x225 = -1;
int16_t x227 = -37;
int64_t x241 = INT64_MAX;
uint64_t x248 = 22233555349857959LLU;
int16_t x250 = -10;
volatile int64_t x252 = -1559751664226845009LL;
static uint32_t x256 = UINT32_MAX;
uint32_t x258 = 27218U;
volatile int8_t x268 = -1;
static volatile int32_t t65 = -27731379;
int64_t x269 = INT64_MIN;
static int32_t x272 = INT32_MIN;
volatile int64_t t69 = 73585531LL;
uint32_t x285 = 475353U;
uint32_t x288 = UINT32_MAX;
int32_t x290 = INT32_MIN;
int64_t x296 = -246352031702052LL;
int8_t x314 = -1;
uint16_t x325 = 17U;
uint64_t x327 = 89747LLU;
volatile int32_t t82 = -201;
int16_t x338 = 12;
uint8_t x340 = 124U;
uint64_t x341 = UINT64_MAX;
int64_t x345 = INT64_MIN;
uint32_t x346 = 918U;
static uint64_t x348 = 7767267135LLU;
int64_t x351 = -1LL;
uint32_t x352 = 3770360U;
volatile int8_t x353 = 1;
int64_t x359 = INT64_MIN;
volatile int8_t x360 = -1;
volatile int32_t t88 = -3795558;
volatile int32_t t89 = -1905;
static int16_t x366 = 4;
static int8_t x368 = -1;
int32_t t92 = -516201199;
int32_t x386 = INT32_MAX;
int64_t x394 = INT64_MIN;
volatile uint64_t x400 = 934LLU;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MIN;
	int64_t x4 = 134379133935LL;

	t0 = (x1-(x2==(x3<=x4)));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 29867204LLU;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = -1;
	static uint64_t t1 = 396795968213044623LLU;

	t1 = (x5-(x6==(x7<=x8)));

	if (t1 != 29867204LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 32U;
	int8_t x11 = 0;
	int16_t x12 = -1;
	int32_t t2 = -1;

	t2 = (x9-(x10==(x11<=x12)));

	if (t2 != 32) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -13;
	volatile int16_t x15 = INT16_MIN;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -3897327;

	t3 = (x13-(x14==(x15<=x16)));

	if (t3 != -13) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t x18 = -204357146019042LL;
	volatile int32_t x19 = 13;
	int64_t x20 = 90LL;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x17-(x18==(x19<=x20)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x24 = 68029962708844534LLU;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x21-(x22==(x23<=x24)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = -1;
	uint64_t x28 = UINT64_MAX;

	t6 = (x25-(x26==(x27<=x28)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MAX;
	volatile int32_t t7 = -64;

	t7 = (x29-(x30==(x31<=x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static int16_t x35 = INT16_MIN;
	static volatile int8_t x36 = INT8_MIN;
	static int64_t t8 = INT64_MIN;

	t8 = (x33-(x34==(x35<=x36)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 51U;
	uint32_t x38 = 237U;
	int32_t t9 = 67877;

	t9 = (x37-(x38==(x39<=x40)));

	if (t9 != 51) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 5U;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	static volatile int16_t x44 = -10196;
	int32_t t10 = 9;

	t10 = (x41-(x42==(x43<=x44)));

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 45801LLU;
	uint16_t x48 = 7002U;
	volatile int32_t t11 = 26391;

	t11 = (x45-(x46==(x47<=x48)));

	if (t11 != 59) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x51 = UINT32_MAX;
	static uint16_t x52 = 89U;
	int32_t t12 = 732112639;

	t12 = (x49-(x50==(x51<=x52)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x54 = UINT8_MAX;
	static int16_t x55 = INT16_MAX;
	int64_t x56 = 35565692050LL;

	t13 = (x53-(x54==(x55<=x56)));

	if (t13 != -4) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -9123;
	static volatile uint8_t x58 = 3U;
	static uint16_t x59 = 13424U;
	uint32_t x60 = 116315716U;
	volatile int32_t t14 = 1045357763;

	t14 = (x57-(x58==(x59<=x60)));

	if (t14 != -9123) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = -192;
	uint32_t x62 = 187U;
	int16_t x63 = 0;
	int16_t x64 = INT16_MAX;

	t15 = (x61-(x62==(x63<=x64)));

	if (t15 != -192) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 242U;
	volatile uint32_t x66 = 18548U;
	static int8_t x68 = -1;
	int32_t t16 = -179;

	t16 = (x65-(x66==(x67<=x68)));

	if (t16 != 242) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = UINT64_MAX;
	uint32_t x71 = 1702U;
	uint64_t x72 = UINT64_MAX;

	t17 = (x69-(x70==(x71<=x72)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	volatile int16_t x75 = INT16_MAX;
	volatile int64_t x76 = 118LL;
	volatile int32_t t18 = 153576;

	t18 = (x73-(x74==(x75<=x76)));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 1030LL;
	volatile int8_t x78 = INT8_MIN;
	int64_t x79 = 3620072471376388LL;
	static int32_t x80 = -1;

	t19 = (x77-(x78==(x79<=x80)));

	if (t19 != 1030LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x85 = 38U;
	int8_t x86 = INT8_MIN;
	static volatile int64_t x87 = -1LL;
	int16_t x88 = INT16_MIN;
	uint32_t t20 = 40178138U;

	t20 = (x85-(x86==(x87<=x88)));

	if (t20 != 38U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x89 = 861206U;
	int8_t x90 = 0;
	int64_t x91 = INT64_MAX;
	volatile int16_t x92 = INT16_MIN;
	uint32_t t21 = 505U;

	t21 = (x89-(x90==(x91<=x92)));

	if (t21 != 861205U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	int8_t x94 = -38;
	volatile int32_t x95 = -1035221;
	int8_t x96 = INT8_MIN;

	t22 = (x93-(x94==(x95<=x96)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = -1;
	int32_t x100 = INT32_MIN;

	t23 = (x97-(x98==(x99<=x100)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 32552U;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	volatile int32_t t24 = -543;

	t24 = (x101-(x102==(x103<=x104)));

	if (t24 != 32552) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x105 = 1LLU;
	volatile uint64_t t25 = 189668LLU;

	t25 = (x105-(x106==(x107<=x108)));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = -1;
	int64_t x111 = -1LL;
	int32_t x112 = INT32_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (x109-(x110==(x111<=x112)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	uint16_t x114 = 7137U;
	volatile uint16_t x115 = UINT16_MAX;
	int64_t x116 = -68367158012195LL;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x113-(x114==(x115<=x116)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = -3503314426180LL;
	int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MIN;
	int64_t t28 = 22856094238016047LL;

	t28 = (x117-(x118==(x119<=x120)));

	if (t28 != -3503314426180LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = 66356U;
	static int64_t x124 = 1471344LL;
	int32_t t29 = 1022364414;

	t29 = (x121-(x122==(x123<=x124)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = INT8_MAX;
	static volatile uint8_t x126 = 1U;
	static uint64_t x127 = 16030LLU;
	int16_t x128 = INT16_MAX;

	t30 = (x125-(x126==(x127<=x128)));

	if (t30 != 126) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = INT8_MIN;
	int64_t x131 = INT64_MAX;
	int64_t x132 = 2353994144LL;
	int32_t t31 = 8578;

	t31 = (x129-(x130==(x131<=x132)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x134 = INT64_MIN;
	volatile uint8_t x135 = 11U;
	int8_t x136 = INT8_MAX;
	int32_t t32 = -30;

	t32 = (x133-(x134==(x135<=x136)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x137 = 82U;
	static volatile uint16_t x138 = UINT16_MAX;
	volatile uint32_t x139 = 26896183U;
	static uint16_t x140 = 6U;
	int32_t t33 = -217701761;

	t33 = (x137-(x138==(x139<=x140)));

	if (t33 != 82) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MIN;
	static uint8_t x143 = UINT8_MAX;
	static volatile uint32_t x144 = 80U;

	t34 = (x141-(x142==(x143<=x144)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x146 = 13641953U;
	int8_t x148 = 8;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (x145-(x146==(x147<=x148)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x149 = 1U;
	volatile uint64_t x150 = 109664062797543LLU;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = 3U;
	int32_t t36 = 0;

	t36 = (x149-(x150==(x151<=x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	uint32_t x155 = 1762365U;

	t37 = (x153-(x154==(x155<=x156)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = INT8_MAX;
	int16_t x158 = 51;
	uint32_t x159 = UINT32_MAX;
	static uint8_t x160 = 102U;
	volatile int32_t t38 = 18;

	t38 = (x157-(x158==(x159<=x160)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = 1875;
	int8_t x162 = -1;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = 235801;

	t39 = (x161-(x162==(x163<=x164)));

	if (t39 != 1875) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x167 = 3U;
	int32_t x168 = INT32_MAX;
	volatile int32_t t40 = 30;

	t40 = (x165-(x166==(x167<=x168)));

	if (t40 != 3860417) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x169 = 17384277886785LLU;
	uint8_t x170 = 6U;
	uint16_t x171 = UINT16_MAX;
	volatile uint64_t t41 = 33592101LLU;

	t41 = (x169-(x170==(x171<=x172)));

	if (t41 != 17384277886785LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MAX;
	static int64_t x175 = INT64_MIN;
	static uint32_t x176 = 0U;

	t42 = (x173-(x174==(x175<=x176)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = 1;
	static int8_t x178 = INT8_MIN;
	volatile int16_t x179 = INT16_MIN;
	uint64_t x180 = 1970070722936316901LLU;
	volatile int32_t t43 = -128;

	t43 = (x177-(x178==(x179<=x180)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MAX;
	int32_t x183 = INT32_MAX;
	uint16_t x184 = UINT16_MAX;
	static int64_t t44 = INT64_MAX;

	t44 = (x181-(x182==(x183<=x184)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = -1;
	volatile uint32_t x187 = 2087U;
	int64_t x188 = INT64_MIN;
	static int64_t t45 = INT64_MIN;

	t45 = (x185-(x186==(x187<=x188)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int32_t x191 = -1;
	volatile int64_t x192 = 29469113942LL;
	static int32_t t46 = 10358;

	t46 = (x189-(x190==(x191<=x192)));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 12U;
	int64_t x194 = INT64_MIN;
	uint8_t x195 = 7U;
	static uint8_t x196 = 7U;
	static volatile int32_t t47 = -834;

	t47 = (x193-(x194==(x195<=x196)));

	if (t47 != 12) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 89U;
	static int64_t x198 = INT64_MAX;
	volatile uint32_t x199 = 9U;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t48 = 11;

	t48 = (x197-(x198==(x199<=x200)));

	if (t48 != 89) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x201 = 94U;
	volatile int64_t x202 = INT64_MAX;
	int8_t x204 = -24;
	volatile int32_t t49 = 1610632;

	t49 = (x201-(x202==(x203<=x204)));

	if (t49 != 94) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -1;
	static int8_t x206 = -1;
	static int64_t x207 = INT64_MAX;
	uint64_t x208 = UINT64_MAX;
	int32_t t50 = 0;

	t50 = (x205-(x206==(x207<=x208)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 8632U;
	uint64_t x210 = 6276030951699920LLU;
	uint16_t x211 = 1735U;
	volatile int16_t x212 = -1;
	int32_t t51 = -727263;

	t51 = (x209-(x210==(x211<=x212)));

	if (t51 != 8632) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -1;
	int32_t x214 = INT32_MIN;
	int8_t x215 = 1;
	int32_t t52 = -798036691;

	t52 = (x213-(x214==(x215<=x216)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x217 = INT64_MIN;
	int32_t x219 = -1;
	volatile int64_t t53 = INT64_MIN;

	t53 = (x217-(x218==(x219<=x220)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x222 = INT64_MIN;
	static volatile int16_t x223 = 21;
	static volatile int64_t t54 = 51543831091312565LL;

	t54 = (x221-(x222==(x223<=x224)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x226 = -48;
	volatile int8_t x228 = -3;
	static volatile int32_t t55 = 43531;

	t55 = (x225-(x226==(x227<=x228)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = UINT8_MAX;
	static int32_t x230 = 63983;
	uint32_t x231 = 520280U;
	volatile int16_t x232 = INT16_MAX;
	int32_t t56 = 73552542;

	t56 = (x229-(x230==(x231<=x232)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x233 = 2102581956974LLU;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = 68U;
	uint64_t t57 = 221767172771515LLU;

	t57 = (x233-(x234==(x235<=x236)));

	if (t57 != 2102581956974LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -1;
	volatile int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	int8_t x240 = -1;
	static int32_t t58 = 25263;

	t58 = (x237-(x238==(x239<=x240)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x242 = 264632125LLU;
	int8_t x243 = INT8_MIN;
	static int16_t x244 = INT16_MAX;
	volatile int64_t t59 = INT64_MAX;

	t59 = (x241-(x242==(x243<=x244)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x245 = 2294270LLU;
	uint16_t x246 = 2U;
	static volatile int16_t x247 = -1255;
	volatile uint64_t t60 = 58415990758990139LLU;

	t60 = (x245-(x246==(x247<=x248)));

	if (t60 != 2294270LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = INT16_MAX;
	int64_t x251 = INT64_MIN;
	int32_t t61 = 98053;

	t61 = (x249-(x250==(x251<=x252)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x253 = -71;
	int64_t x254 = 457232LL;
	int32_t x255 = -266671;
	int32_t t62 = -1;

	t62 = (x253-(x254==(x255<=x256)));

	if (t62 != -71) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	volatile int32_t x260 = -830;
	volatile int32_t t63 = -969558;

	t63 = (x257-(x258==(x259<=x260)));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = 20141U;
	static int16_t x262 = -47;
	volatile int8_t x263 = INT8_MIN;
	int64_t x264 = -1LL;
	volatile int32_t t64 = 54676;

	t64 = (x261-(x262==(x263<=x264)));

	if (t64 != 20141) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 96U;
	static int8_t x266 = -15;
	uint32_t x267 = UINT32_MAX;

	t65 = (x265-(x266==(x267<=x268)));

	if (t65 != 96) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x270 = 599566732U;
	uint16_t x271 = UINT16_MAX;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x269-(x270==(x271<=x272)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -29944276046922LL;
	volatile int8_t x274 = -1;
	static int16_t x275 = INT16_MAX;
	int8_t x276 = -1;
	static volatile int64_t t67 = -827106856055772LL;

	t67 = (x273-(x274==(x275<=x276)));

	if (t67 != -29944276046922LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 27495LLU;
	int64_t x279 = -1LL;
	static int8_t x280 = -1;
	volatile int32_t t68 = -92;

	t68 = (x277-(x278==(x279<=x280)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = 255219031703264852LL;
	uint64_t x282 = 6180649458LLU;
	static int16_t x283 = INT16_MIN;
	int64_t x284 = 105LL;

	t69 = (x281-(x282==(x283<=x284)));

	if (t69 != 255219031703264852LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	uint32_t t70 = 7852883U;

	t70 = (x285-(x286==(x287<=x288)));

	if (t70 != 475353U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = 35;
	static int64_t x291 = INT64_MIN;
	static int8_t x292 = -1;
	int32_t t71 = -264603000;

	t71 = (x289-(x290==(x291<=x292)));

	if (t71 != 35) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MIN;
	static int64_t x294 = 601327240195811250LL;
	int16_t x295 = -731;
	int64_t t72 = INT64_MIN;

	t72 = (x293-(x294==(x295<=x296)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MAX;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = INT8_MAX;
	int32_t x300 = INT32_MIN;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x297-(x298==(x299<=x300)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	uint32_t x302 = 293910551U;
	int16_t x303 = -1;
	int8_t x304 = INT8_MAX;
	static int32_t t74 = -1664268;

	t74 = (x301-(x302==(x303<=x304)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = 24831;
	volatile int8_t x306 = INT8_MAX;
	int64_t x307 = -1LL;
	int64_t x308 = INT64_MIN;
	volatile int32_t t75 = -2559;

	t75 = (x305-(x306==(x307<=x308)));

	if (t75 != 24831) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x309 = INT64_MIN;
	static uint32_t x310 = 6209340U;
	static int8_t x311 = 1;
	int16_t x312 = -1;
	volatile int64_t t76 = INT64_MIN;

	t76 = (x309-(x310==(x311<=x312)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MAX;
	int32_t x315 = INT32_MIN;
	static volatile int64_t x316 = INT64_MAX;
	volatile int32_t t77 = -119992504;

	t77 = (x313-(x314==(x315<=x316)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x317 = INT64_MIN;
	static volatile uint8_t x318 = 0U;
	volatile int32_t x319 = INT32_MIN;
	static int8_t x320 = -28;
	static int64_t t78 = INT64_MIN;

	t78 = (x317-(x318==(x319<=x320)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x321 = 367262LLU;
	uint64_t x322 = 85LLU;
	volatile uint32_t x323 = 0U;
	volatile int64_t x324 = INT64_MAX;
	uint64_t t79 = 942LLU;

	t79 = (x321-(x322==(x323<=x324)));

	if (t79 != 367262LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x326 = -1;
	static uint16_t x328 = UINT16_MAX;
	int32_t t80 = -707210772;

	t80 = (x325-(x326==(x327<=x328)));

	if (t80 != 17) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x329 = INT16_MIN;
	uint8_t x330 = 14U;
	static uint16_t x331 = 336U;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t81 = 15513;

	t81 = (x329-(x330==(x331<=x332)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x333 = 2;
	int64_t x334 = INT64_MAX;
	static volatile int8_t x335 = 0;
	int16_t x336 = 16;

	t82 = (x333-(x334==(x335<=x336)));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = 240128U;
	static int8_t x339 = -1;
	volatile uint32_t t83 = 366U;

	t83 = (x337-(x338==(x339<=x340)));

	if (t83 != 240128U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x342 = UINT64_MAX;
	static int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x341-(x342==(x343<=x344)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x347 = INT8_MIN;
	volatile int64_t t85 = INT64_MIN;

	t85 = (x345-(x346==(x347<=x348)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x349 = 82655LLU;
	static int16_t x350 = INT16_MAX;
	volatile uint64_t t86 = 33442LLU;

	t86 = (x349-(x350==(x351<=x352)));

	if (t86 != 82655LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x354 = 5U;
	uint8_t x355 = UINT8_MAX;
	int8_t x356 = -31;
	int32_t t87 = 175046057;

	t87 = (x353-(x354==(x355<=x356)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = UINT16_MAX;
	int64_t x358 = INT64_MAX;

	t88 = (x357-(x358==(x359<=x360)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = INT16_MIN;
	static int32_t x362 = 95514;
	uint16_t x363 = 329U;
	uint8_t x364 = 3U;

	t89 = (x361-(x362==(x363<=x364)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = 0;
	int32_t x367 = INT32_MIN;
	volatile int32_t t90 = -241629;

	t90 = (x365-(x366==(x367<=x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = INT16_MIN;
	volatile int32_t t91 = 297343933;

	t91 = (x369-(x370==(x371<=x372)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	uint32_t x376 = 359U;

	t92 = (x373-(x374==(x375<=x376)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = -1;
	int16_t x378 = -31;
	uint16_t x379 = 6747U;
	uint32_t x380 = 15965U;
	volatile int32_t t93 = -30163362;

	t93 = (x377-(x378==(x379<=x380)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = -1;
	volatile int32_t x382 = 32172;
	uint64_t x383 = UINT64_MAX;
	static int64_t x384 = INT64_MIN;
	static int32_t t94 = -104187;

	t94 = (x381-(x382==(x383<=x384)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = INT64_MIN;
	int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MAX;
	volatile int64_t t95 = INT64_MIN;

	t95 = (x385-(x386==(x387<=x388)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int16_t x390 = 9912;
	uint8_t x391 = 2U;
	int32_t x392 = INT32_MIN;
	uint32_t t96 = UINT32_MAX;

	t96 = (x389-(x390==(x391<=x392)));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = 1727574;
	int64_t x395 = INT64_MIN;
	static uint64_t x396 = 81731LLU;
	int32_t t97 = 62;

	t97 = (x393-(x394==(x395<=x396)));

	if (t97 != 1727574) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x397 = 51U;
	uint8_t x398 = 0U;
	int32_t x399 = INT32_MIN;
	volatile int32_t t98 = 15;

	t98 = (x397-(x398==(x399<=x400)));

	if (t98 != 50) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = -3LL;
	uint64_t x403 = UINT64_MAX;
	volatile uint16_t x404 = 3804U;
	static int64_t t99 = INT64_MIN;

	t99 = (x401-(x402==(x403<=x404)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

