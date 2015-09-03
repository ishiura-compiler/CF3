#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x13 = INT64_MIN;
int32_t x14 = INT32_MAX;
volatile int8_t x16 = INT8_MAX;
int8_t x24 = INT8_MIN;
volatile int64_t t6 = INT64_MIN;
volatile int16_t x33 = -1;
int16_t x35 = -1;
int64_t x37 = INT64_MIN;
int32_t x40 = INT32_MIN;
volatile int16_t x45 = INT16_MAX;
uint32_t x47 = 915221U;
static volatile int32_t x51 = -11046;
int64_t x55 = 7826313218398LL;
uint64_t x57 = 57429457LLU;
uint32_t x60 = 341233U;
int8_t x62 = INT8_MAX;
uint8_t x64 = 0U;
uint64_t x71 = 290452066547453827LLU;
volatile uint32_t t19 = 2598915U;
volatile int8_t x82 = INT8_MIN;
uint8_t x84 = 13U;
int16_t x91 = -456;
static int64_t x92 = -1LL;
int64_t x94 = 3LL;
volatile int64_t x105 = INT64_MAX;
uint8_t x116 = 48U;
volatile uint32_t t28 = UINT32_MAX;
int8_t x118 = -1;
int8_t x126 = INT8_MIN;
static int16_t x128 = -1;
int64_t x135 = INT64_MIN;
uint16_t x138 = 2808U;
int32_t t34 = 45779689;
static uint8_t x142 = UINT8_MAX;
int8_t x152 = INT8_MIN;
static int32_t x155 = INT32_MIN;
int8_t x162 = -13;
int16_t x163 = INT16_MAX;
int32_t t41 = 813;
static volatile int32_t t43 = 1566025;
int32_t t45 = -242515186;
static uint64_t x190 = 84479103693412283LLU;
volatile int32_t t48 = -1;
static int16_t x200 = -597;
int64_t x203 = INT64_MIN;
int16_t x206 = INT16_MIN;
volatile int64_t x213 = -5889775LL;
static int32_t x216 = -148;
static uint16_t x217 = 8612U;
volatile uint64_t x219 = 31952931587481LLU;
int32_t x232 = -1023;
int32_t t57 = INT32_MAX;
static int8_t x243 = 1;
int8_t x249 = INT8_MIN;
int16_t x267 = -1;
volatile int16_t x274 = -22;
int32_t x276 = INT32_MAX;
int64_t t68 = -482492360172542LL;
int32_t x283 = INT32_MIN;
int32_t x284 = -1;
int16_t x287 = INT16_MAX;
int32_t x290 = -80747;
uint32_t x292 = UINT32_MAX;
static int16_t x294 = 1;
static int32_t x296 = -543873263;
int64_t x297 = -3234241454108LL;
volatile int64_t x303 = INT64_MAX;
int32_t t75 = -760;
static int64_t x308 = INT64_MAX;
uint8_t x315 = 9U;
static volatile int32_t t78 = 62939221;
static int64_t x317 = INT64_MIN;
static int16_t x320 = -1040;
uint32_t x325 = 162887921U;
uint8_t x327 = 64U;
volatile uint32_t t81 = 2375U;
static int32_t t82 = 105;
static volatile uint8_t x336 = 13U;
volatile int32_t t85 = 1467771;
int16_t x352 = INT16_MIN;
int64_t x353 = -3216959968579634LL;
int8_t x356 = -1;
uint64_t x362 = UINT64_MAX;
int64_t t90 = 1LL;
int16_t x367 = INT16_MAX;
int8_t x368 = INT8_MAX;
volatile int8_t x373 = -1;
int32_t x374 = -107648701;
int8_t x380 = -1;
static int64_t t94 = INT64_MIN;
int16_t x381 = INT16_MAX;
int8_t x385 = INT8_MIN;
uint8_t x387 = 1U;
int32_t t96 = -10;
uint32_t t97 = UINT32_MAX;
int16_t x393 = 150;


void f0(void) {
	int64_t x1 = 7335793LL;
	int32_t x2 = 325009;
	uint32_t x3 = UINT32_MAX;
	uint16_t x4 = UINT16_MAX;
	static int64_t t0 = -146LL;

	t0 = (x1|((x2&x3)<x4));

	if (t0 != 7335793LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint8_t x6 = UINT8_MAX;
	volatile int32_t x7 = -1;
	volatile int8_t x8 = INT8_MAX;
	int32_t t1 = 68016;

	t1 = (x5|((x6&x7)<x8));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -27;
	int8_t x10 = -2;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = 3U;
	int32_t t2 = 7052185;

	t2 = (x9|((x10&x11)<x12));

	if (t2 != -27) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x15 = INT8_MAX;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13|((x14&x15)<x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	volatile int64_t x18 = -1LL;
	int32_t x19 = INT32_MIN;
	int16_t x20 = 6901;
	static volatile int32_t t4 = 0;

	t4 = (x17|((x18&x19)<x20));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 940LL;
	int16_t x22 = 83;
	int16_t x23 = INT16_MIN;
	volatile int64_t t5 = 805995701713816115LL;

	t5 = (x21|((x22&x23)<x24));

	if (t5 != 940LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int64_t x26 = INT64_MIN;
	volatile uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MIN;

	t6 = (x25|((x26&x27)<x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 117;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = -1;
	static int16_t x32 = 15;
	static int32_t t7 = 233656554;

	t7 = (x29|((x30&x31)<x32));

	if (t7 != 117) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = -1;
	int16_t x36 = INT16_MAX;
	static int32_t t8 = 78490945;

	t8 = (x33|((x34&x35)<x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MIN;
	volatile int8_t x39 = INT8_MIN;
	int64_t t9 = INT64_MIN;

	t9 = (x37|((x38&x39)<x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static uint16_t x42 = 5188U;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = 92U;
	int64_t t10 = 479LL;

	t10 = (x41|((x42&x43)<x44));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 226447652;

	t11 = (x45|((x46&x47)<x48));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint64_t x50 = 4885465111684770267LLU;
	volatile int16_t x52 = 3;
	static volatile int32_t t12 = -201;

	t12 = (x49|((x50&x51)<x52));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	static int16_t x54 = INT16_MAX;
	uint8_t x56 = 0U;
	static volatile int32_t t13 = -10;

	t13 = (x53|((x54&x55)<x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x58 = 5;
	int8_t x59 = INT8_MAX;
	static volatile uint64_t t14 = 0LLU;

	t14 = (x57|((x58&x59)<x60));

	if (t14 != 57429457LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x63 = 32;
	volatile int32_t t15 = -91435012;

	t15 = (x61|((x62&x63)<x64));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static volatile uint8_t x66 = 6U;
	int64_t x67 = 36973949118LL;
	static volatile int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 0;

	t16 = (x65|((x66&x67)<x68));

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = 0LL;
	static int8_t x70 = 62;
	int32_t x72 = -1;
	int64_t t17 = 15255866LL;

	t17 = (x69|((x70&x71)<x72));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	volatile int16_t x74 = 4;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = 1289679180113085896LL;
	static volatile int32_t t18 = -17563;

	t18 = (x73|((x74&x75)<x76));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x77 = 3911908U;
	uint64_t x78 = 3LLU;
	int16_t x79 = INT16_MIN;
	static uint8_t x80 = 48U;

	t19 = (x77|((x78&x79)<x80));

	if (t19 != 3911909U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = 1;
	static int64_t x83 = INT64_MIN;
	static volatile int32_t t20 = -95;

	t20 = (x81|((x82&x83)<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	static int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = UINT8_MAX;
	static volatile int32_t t21 = 0;

	t21 = (x85|((x86&x87)<x88));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 701748737U;
	static volatile uint64_t t22 = UINT64_MAX;

	t22 = (x89|((x90&x91)<x92));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 230LL;
	volatile uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MAX;
	int64_t t23 = 233582LL;

	t23 = (x93|((x94&x95)<x96));

	if (t23 != 231LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	int16_t x99 = -1;
	static int32_t x100 = -1;
	int32_t t24 = 2470;

	t24 = (x97|((x98&x99)<x100));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	static volatile int64_t x102 = -47040297LL;
	int64_t x103 = INT64_MIN;
	int16_t x104 = -1;
	int32_t t25 = -874537597;

	t25 = (x101|((x102&x103)<x104));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MAX;
	static int64_t x107 = INT64_MAX;
	int16_t x108 = -1;
	int64_t t26 = INT64_MAX;

	t26 = (x105|((x106&x107)<x108));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	static int8_t x110 = 0;
	int8_t x111 = 0;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 7955;

	t27 = (x109|((x110&x111)<x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MAX;
	static volatile uint8_t x115 = 7U;

	t28 = (x113|((x114&x115)<x116));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 1U;
	volatile uint8_t x119 = 29U;
	int8_t x120 = -1;
	volatile uint32_t t29 = 6U;

	t29 = (x117|((x118&x119)<x120));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	int16_t x122 = -1;
	volatile int16_t x123 = -12167;
	volatile int32_t x124 = INT32_MIN;
	static int32_t t30 = 7;

	t30 = (x121|((x122&x123)<x124));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int16_t x127 = -7;
	int32_t t31 = 71309845;

	t31 = (x125|((x126&x127)<x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int8_t x130 = INT8_MIN;
	volatile uint64_t x131 = 492529958640283300LLU;
	int8_t x132 = -39;
	int64_t t32 = -208151094499742LL;

	t32 = (x129|((x130&x131)<x132));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	uint8_t x134 = 73U;
	int64_t x136 = 41946584LL;
	int32_t t33 = 159;

	t33 = (x133|((x134&x135)<x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	volatile uint64_t x139 = 17363104566938648LLU;
	int8_t x140 = INT8_MIN;

	t34 = (x137|((x138&x139)<x140));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x143 = 8167U;
	static uint8_t x144 = UINT8_MAX;
	static volatile int32_t t35 = 104;

	t35 = (x141|((x142&x143)<x144));

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 74U;
	uint16_t x146 = 14676U;
	static uint16_t x147 = 77U;
	uint64_t x148 = 158468210337LLU;
	volatile int32_t t36 = -243;

	t36 = (x145|((x146&x147)<x148));

	if (t36 != 75) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 6545932215453676805LLU;
	uint16_t x150 = 13U;
	int32_t x151 = -1;
	uint64_t t37 = 91LLU;

	t37 = (x149|((x150&x151)<x152));

	if (t37 != 6545932215453676805LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -120;
	int64_t x154 = INT64_MIN;
	int16_t x156 = INT16_MAX;
	int32_t t38 = -382047213;

	t38 = (x153|((x154&x155)<x156));

	if (t38 != -119) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 44U;
	uint64_t x158 = 2968419594349LLU;
	volatile uint16_t x159 = UINT16_MAX;
	static uint16_t x160 = 4U;
	volatile int32_t t39 = 3870;

	t39 = (x157|((x158&x159)<x160));

	if (t39 != 44) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 3543917U;
	static int16_t x164 = INT16_MIN;
	volatile uint32_t t40 = 27U;

	t40 = (x161|((x162&x163)<x164));

	if (t40 != 3543917U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = -1;
	int64_t x166 = -1LL;
	int32_t x167 = INT32_MAX;
	static int32_t x168 = 335625142;

	t41 = (x165|((x166&x167)<x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MAX;
	volatile int16_t x170 = INT16_MIN;
	volatile uint64_t x171 = 1LLU;
	static uint8_t x172 = 35U;
	int32_t t42 = 104267;

	t42 = (x169|((x170&x171)<x172));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 2288;
	int8_t x174 = 5;
	int64_t x175 = INT64_MAX;
	static int8_t x176 = 10;

	t43 = (x173|((x174&x175)<x176));

	if (t43 != 2289) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -95217;
	volatile uint64_t x178 = UINT64_MAX;
	int32_t x179 = INT32_MIN;
	static uint32_t x180 = UINT32_MAX;
	int32_t t44 = -11264360;

	t44 = (x177|((x178&x179)<x180));

	if (t44 != -95217) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 7231U;
	static int8_t x182 = -7;
	volatile int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MIN;

	t45 = (x181|((x182&x183)<x184));

	if (t45 != 7231) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 340U;
	uint32_t x186 = 187058664U;
	int8_t x187 = -17;
	int16_t x188 = INT16_MIN;
	volatile uint32_t t46 = 99180931U;

	t46 = (x185|((x186&x187)<x188));

	if (t46 != 341U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	uint8_t x191 = UINT8_MAX;
	int8_t x192 = 38;
	int32_t t47 = -162;

	t47 = (x189|((x190&x191)<x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 32U;
	volatile uint64_t x194 = 5113305105LLU;
	uint64_t x195 = 16LLU;
	volatile int32_t x196 = INT32_MIN;

	t48 = (x193|((x194&x195)<x196));

	if (t48 != 33) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	uint32_t x198 = 1308U;
	uint64_t x199 = UINT64_MAX;
	int32_t t49 = 11;

	t49 = (x197|((x198&x199)<x200));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	volatile int64_t x204 = -1LL;
	static volatile int32_t t50 = -37079;

	t50 = (x201|((x202&x203)<x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -726;
	volatile int32_t x207 = -3684256;
	int8_t x208 = 56;
	volatile int32_t t51 = -15;

	t51 = (x205|((x206&x207)<x208));

	if (t51 != -725) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	static int16_t x211 = INT16_MIN;
	static int64_t x212 = 50581752931960008LL;
	static volatile int32_t t52 = 278485023;

	t52 = (x209|((x210&x211)<x212));

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MAX;
	volatile uint16_t x215 = 10U;
	int64_t t53 = 40596627LL;

	t53 = (x213|((x214&x215)<x216));

	if (t53 != -5889775LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x218 = -1;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t54 = 0;

	t54 = (x217|((x218&x219)<x220));

	if (t54 != 8612) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 22U;
	int64_t x222 = INT64_MAX;
	int32_t x223 = -2042;
	uint64_t x224 = 1LLU;
	uint32_t t55 = 48797236U;

	t55 = (x221|((x222&x223)<x224));

	if (t55 != 22U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 98U;
	int64_t x226 = -1LL;
	int32_t x227 = 187066804;
	volatile int32_t x228 = INT32_MIN;
	int32_t t56 = -118107;

	t56 = (x225|((x226&x227)<x228));

	if (t56 != 98) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	static int64_t x230 = -123913620LL;
	volatile int32_t x231 = -1;

	t57 = (x229|((x230&x231)<x232));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	volatile int16_t x234 = INT16_MAX;
	uint64_t x235 = 12979LLU;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = -982;

	t58 = (x233|((x234&x235)<x236));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 3U;
	int32_t x238 = INT32_MIN;
	int32_t x239 = -10;
	int64_t x240 = INT64_MAX;
	int32_t t59 = -253275799;

	t59 = (x237|((x238&x239)<x240));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 277U;
	volatile uint32_t x242 = UINT32_MAX;
	uint64_t x244 = 17744529851363536LLU;
	int32_t t60 = -724153030;

	t60 = (x241|((x242&x243)<x244));

	if (t60 != 277) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 159951LLU;
	int8_t x246 = -11;
	static volatile int64_t x247 = INT64_MIN;
	uint32_t x248 = 11U;
	volatile uint64_t t61 = 32449LLU;

	t61 = (x245|((x246&x247)<x248));

	if (t61 != 159951LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x250 = -1;
	uint32_t x251 = 0U;
	uint8_t x252 = 1U;
	volatile int32_t t62 = 31;

	t62 = (x249|((x250&x251)<x252));

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 46924U;
	int32_t x254 = INT32_MIN;
	uint32_t x255 = 2741U;
	volatile int32_t x256 = -1;
	uint32_t t63 = 2063463U;

	t63 = (x253|((x254&x255)<x256));

	if (t63 != 46925U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	volatile int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MAX;
	static uint64_t x260 = UINT64_MAX;
	int32_t t64 = INT32_MAX;

	t64 = (x257|((x258&x259)<x260));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x261 = 7825002493387779LLU;
	static volatile uint64_t x262 = 1058LLU;
	uint64_t x263 = 347690336017402LLU;
	static int32_t x264 = 5;
	static volatile uint64_t t65 = 102LLU;

	t65 = (x261|((x262&x263)<x264));

	if (t65 != 7825002493387779LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	static volatile int16_t x266 = INT16_MIN;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 53;

	t66 = (x265|((x266&x267)<x268));

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	static int32_t x270 = -25666;
	static int16_t x271 = INT16_MIN;
	int8_t x272 = 0;
	volatile int32_t t67 = -723032;

	t67 = (x269|((x270&x271)<x272));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	uint64_t x275 = UINT64_MAX;

	t68 = (x273|((x274&x275)<x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	volatile uint8_t x278 = 0U;
	static int16_t x279 = INT16_MIN;
	uint8_t x280 = 9U;
	static int32_t t69 = 1;

	t69 = (x277|((x278&x279)<x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 32;
	uint16_t x282 = 12U;
	volatile int32_t t70 = 49055236;

	t70 = (x281|((x282&x283)<x284));

	if (t70 != 32) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile int16_t x286 = -1;
	int32_t x288 = INT32_MIN;
	int32_t t71 = -1;

	t71 = (x285|((x286&x287)<x288));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	volatile uint32_t x291 = 32U;
	volatile int32_t t72 = -62636;

	t72 = (x289|((x290&x291)<x292));

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static volatile int32_t x295 = -1;
	int32_t t73 = 29432;

	t73 = (x293|((x294&x295)<x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = 348407550763158881LLU;
	int32_t x299 = -1;
	int16_t x300 = -1;
	int64_t t74 = 19267139045LL;

	t74 = (x297|((x298&x299)<x300));

	if (t74 != -3234241454107LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 46;
	int64_t x302 = 15747189LL;
	int32_t x304 = 11494;

	t75 = (x301|((x302&x303)<x304));

	if (t75 != 46) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -360493494LL;
	static int8_t x306 = -2;
	int32_t x307 = -1;
	static volatile int64_t t76 = 1LL;

	t76 = (x305|((x306&x307)<x308));

	if (t76 != -360493493LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	volatile int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = 1U;
	static volatile int32_t t77 = -6900;

	t77 = (x309|((x310&x311)<x312));

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = 4441331;
	int8_t x314 = INT8_MIN;
	int64_t x316 = INT64_MIN;

	t78 = (x313|((x314&x315)<x316));

	if (t78 != 4441331) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = -2579241;
	volatile uint64_t x319 = 8LLU;
	int64_t t79 = 532568479099174LL;

	t79 = (x317|((x318&x319)<x320));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = UINT64_MAX;
	volatile uint8_t x322 = UINT8_MAX;
	volatile uint64_t x323 = UINT64_MAX;
	volatile int32_t x324 = -1;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x321|((x322&x323)<x324));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = -1;
	int16_t x328 = INT16_MAX;

	t81 = (x325|((x326&x327)<x328));

	if (t81 != 162887921U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	static int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MAX;
	int32_t x332 = -1;

	t82 = (x329|((x330&x331)<x332));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	static int64_t x334 = -1LL;
	uint8_t x335 = UINT8_MAX;
	static volatile int32_t t83 = INT32_MIN;

	t83 = (x333|((x334&x335)<x336));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	uint8_t x338 = 1U;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	int64_t t84 = -34032465980LL;

	t84 = (x337|((x338&x339)<x340));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -2;
	int16_t x342 = INT16_MIN;
	static uint64_t x343 = 0LLU;
	volatile uint32_t x344 = 823552U;

	t85 = (x341|((x342&x343)<x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -1;
	volatile int64_t x346 = INT64_MIN;
	int32_t x347 = 816535343;
	uint64_t x348 = 1928648817796164LLU;
	volatile int32_t t86 = -4957;

	t86 = (x345|((x346&x347)<x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 31U;
	volatile int32_t x350 = 246352888;
	int16_t x351 = -30;
	volatile int32_t t87 = -5;

	t87 = (x349|((x350&x351)<x352));

	if (t87 != 31) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = UINT32_MAX;
	volatile uint8_t x355 = 61U;
	int64_t t88 = 8180LL;

	t88 = (x353|((x354&x355)<x356));

	if (t88 != -3216959968579633LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = -16344908;
	volatile int32_t x359 = 12885587;
	uint32_t x360 = UINT32_MAX;
	static uint64_t t89 = UINT64_MAX;

	t89 = (x357|((x358&x359)<x360));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -2810141166543208LL;
	volatile int32_t x363 = -1;
	int64_t x364 = INT64_MAX;

	t90 = (x361|((x362&x363)<x364));

	if (t90 != -2810141166543208LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = -1;
	static volatile int32_t t91 = INT32_MIN;

	t91 = (x365|((x366&x367)<x368));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 63369359U;
	int8_t x370 = INT8_MAX;
	int16_t x371 = INT16_MAX;
	int8_t x372 = INT8_MAX;
	static volatile uint32_t t92 = 234038U;

	t92 = (x369|((x370&x371)<x372));

	if (t92 != 63369359U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x375 = 22045877;
	int64_t x376 = INT64_MIN;
	int32_t t93 = -1901;

	t93 = (x373|((x374&x375)<x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = -362;
	static uint16_t x379 = 381U;

	t94 = (x377|((x378&x379)<x380));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x382 = 265542555550273LLU;
	int32_t x383 = -1;
	uint16_t x384 = 96U;
	int32_t t95 = -101915850;

	t95 = (x381|((x382&x383)<x384));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x386 = -1;
	int16_t x388 = -5574;

	t96 = (x385|((x386&x387)<x388));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = UINT32_MAX;
	static volatile int16_t x390 = -1;
	volatile int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;

	t97 = (x389|((x390&x391)<x392));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	int16_t x395 = -54;
	static int32_t x396 = -3093780;
	int32_t t98 = -4;

	t98 = (x393|((x394&x395)<x396));

	if (t98 != 150) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	static uint32_t x398 = UINT32_MAX;
	int32_t x399 = -1;
	uint8_t x400 = 2U;
	int64_t t99 = INT64_MAX;

	t99 = (x397|((x398&x399)<x400));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

