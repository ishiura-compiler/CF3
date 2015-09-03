#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MAX;
uint16_t x13 = 23157U;
volatile int32_t x23 = INT32_MIN;
volatile int64_t t5 = INT64_MAX;
uint8_t x26 = 122U;
uint16_t x31 = 813U;
volatile int8_t x38 = 0;
int16_t x40 = INT16_MAX;
uint32_t x47 = 20200U;
static int32_t x48 = -104;
uint64_t t11 = 26966209368820LLU;
uint32_t x53 = 293874185U;
volatile int32_t x67 = 8;
int16_t x68 = -14;
uint64_t t16 = 87594916LLU;
volatile int8_t x79 = -1;
int8_t x88 = 0;
uint64_t t22 = 1488851LLU;
int8_t x97 = -1;
int32_t x98 = INT32_MIN;
int64_t t25 = 15LL;
int32_t x109 = INT32_MIN;
static uint8_t x120 = 6U;
int16_t x133 = -1;
volatile int64_t t33 = -549477980409153714LL;
int64_t x139 = INT64_MAX;
int32_t x142 = INT32_MIN;
int16_t x143 = -1;
volatile uint64_t t35 = 56215759978024LLU;
int8_t x146 = -1;
static int16_t x154 = INT16_MIN;
volatile int32_t x155 = -1;
static int16_t x159 = INT16_MIN;
int64_t x163 = -1LL;
uint16_t x166 = UINT16_MAX;
static int64_t x167 = INT64_MIN;
static uint32_t x170 = UINT32_MAX;
int8_t x173 = INT8_MAX;
volatile int32_t x175 = INT32_MIN;
static volatile int16_t x178 = 1;
volatile int32_t t46 = 1699;
int32_t x190 = INT32_MAX;
volatile uint32_t t47 = 75123916U;
int16_t x193 = INT16_MAX;
uint16_t x197 = UINT16_MAX;
uint16_t x200 = 1U;
int16_t x201 = INT16_MIN;
volatile int32_t t50 = 1;
static int16_t x220 = -1;
volatile uint8_t x221 = 5U;
int16_t x222 = -1;
volatile int32_t t55 = -28747804;
int64_t t57 = 34409621512396422LL;
static volatile int8_t x235 = INT8_MAX;
volatile int32_t x236 = 157872;
uint32_t x237 = UINT32_MAX;
int64_t x239 = -305691905274212LL;
volatile uint64_t t60 = 3459992907862LLU;
static int64_t x245 = INT64_MAX;
uint16_t x255 = UINT16_MAX;
int64_t x261 = INT64_MIN;
int8_t x265 = INT8_MIN;
volatile int32_t x266 = INT32_MIN;
int16_t x267 = -4647;
volatile int32_t x270 = INT32_MIN;
int64_t x276 = INT64_MIN;
int32_t x279 = -1;
int32_t t69 = -16171488;
int16_t x283 = -2328;
int32_t x286 = 115938;
volatile int32_t t71 = 16563447;
volatile int64_t x291 = -1LL;
uint16_t x292 = UINT16_MAX;
int8_t x296 = 61;
volatile int32_t x300 = INT32_MIN;
int32_t x304 = 103105759;
uint8_t x307 = 0U;
uint32_t x309 = UINT32_MAX;
uint32_t x310 = 0U;
int32_t x312 = 0;
static volatile int8_t x317 = -1;
int8_t x320 = INT8_MIN;
volatile int32_t t79 = -186;
int64_t x321 = 1LL;
volatile int32_t x327 = INT32_MAX;
int16_t x328 = 118;
uint8_t x343 = UINT8_MAX;
uint8_t x344 = 4U;
uint64_t t85 = 958963LLU;
uint32_t x345 = 389351U;
int32_t x349 = -1;
uint32_t x350 = UINT32_MAX;
int64_t t88 = -513283LL;
int16_t x358 = INT16_MIN;
uint64_t x369 = 7LLU;
int8_t x373 = -1;
static int16_t x378 = INT16_MIN;
uint16_t x379 = UINT16_MAX;
int64_t x385 = 15LL;
int32_t x390 = INT32_MIN;
uint64_t t98 = 7780863993LLU;


void f0(void) {
	static int64_t x1 = -28824550LL;
	uint32_t x3 = 52U;
	int64_t x4 = 14LL;
	volatile int64_t t0 = -18526305411LL;

	t0 = ((x1&(x2|x3))^x4);

	if (t0 != 11284LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int8_t x6 = -1;
	int32_t x7 = -88182417;
	uint32_t x8 = UINT32_MAX;
	static volatile uint32_t t1 = 32184028U;

	t1 = ((x5&(x6|x7))^x8);

	if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1371847LLU;
	static volatile uint64_t x10 = UINT64_MAX;
	static volatile int32_t x11 = INT32_MIN;
	int32_t x12 = 488833;
	uint64_t t2 = 408442858306LLU;

	t2 = ((x9&(x10|x11))^x12);

	if (t2 != 1284934LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = INT32_MIN;
	static int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = INT32_MIN;

	t3 = ((x13&(x14|x15))^x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x17 = UINT64_MAX;
	static int64_t x18 = INT64_MIN;
	uint16_t x19 = 233U;
	static int32_t x20 = -12;
	static uint64_t t4 = 2932079377799LLU;

	t4 = ((x17&(x18|x19))^x20);

	if (t4 != 9223372036854775581LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int8_t x22 = -1;
	int64_t x24 = INT64_MIN;

	t5 = ((x21&(x22|x23))^x24);

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	static uint64_t x27 = 89512423895LLU;
	int8_t x28 = -1;
	uint64_t t6 = UINT64_MAX;

	t6 = ((x25&(x26|x27))^x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = 1U;
	static int64_t x30 = -1LL;
	int16_t x32 = -1;
	int64_t t7 = -6034LL;

	t7 = ((x29&(x30|x31))^x32);

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int16_t x34 = INT16_MIN;
	int64_t x35 = INT64_MIN;
	int64_t x36 = -159LL;
	volatile int64_t t8 = -3682042508LL;

	t8 = ((x33&(x34|x35))^x36);

	if (t8 != 32609LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 216U;
	int8_t x39 = -1;
	volatile int32_t t9 = 539489;

	t9 = ((x37&(x38|x39))^x40);

	if (t9 != 32551) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 1496U;
	int16_t x42 = 3544;
	uint8_t x43 = 9U;
	uint64_t x44 = 136767095322580203LLU;
	uint64_t t10 = 2075002352321090LLU;

	t10 = ((x41&(x42|x43))^x44);

	if (t10 != 136767095322579251LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 4028010184396616847LLU;
	int8_t x46 = INT8_MIN;

	t11 = ((x45&(x46|x47))^x48);

	if (t11 != 18446744069941119760LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 4134U;
	static uint16_t x50 = 2U;
	uint16_t x51 = UINT16_MAX;
	int16_t x52 = 11937;
	uint32_t t12 = 2701U;

	t12 = ((x49&(x50|x51))^x52);

	if (t12 != 16007U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = 51;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MAX;
	volatile uint32_t t13 = 3U;

	t13 = ((x53&(x54|x55))^x56);

	if (t13 != 1853620222U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	int64_t x58 = INT64_MIN;
	volatile int16_t x59 = -1;
	int8_t x60 = -52;
	int64_t t14 = -829062212394780LL;

	t14 = ((x57&(x58|x59))^x60);

	if (t14 != -32717LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = UINT64_MAX;
	volatile int32_t x62 = -258;
	int8_t x63 = 0;
	uint64_t x64 = 184305LLU;
	volatile uint64_t t15 = 1827131133818108LLU;

	t15 = ((x61&(x62|x63))^x64);

	if (t15 != 18446744073709367567LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 96673682406635510LLU;
	volatile uint8_t x66 = 15U;

	t16 = ((x65&(x66|x67))^x68);

	if (t16 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = 8U;
	int32_t t17 = 109;

	t17 = ((x69&(x70|x71))^x72);

	if (t17 != -32760) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -14989;
	int64_t x74 = 274551856031336243LL;
	volatile uint8_t x75 = UINT8_MAX;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 1189334383126360793LLU;

	t18 = ((x73&(x74|x75))^x76);

	if (t18 != 18172192217678215820LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	volatile int8_t x78 = INT8_MIN;
	volatile int32_t x80 = INT32_MAX;
	int32_t t19 = 28167424;

	t19 = ((x77&(x78|x79))^x80);

	if (t19 != -2147483521) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	volatile int64_t x82 = INT64_MAX;
	int32_t x83 = INT32_MAX;
	volatile int16_t x84 = -1811;
	int64_t t20 = 575333740248LL;

	t20 = ((x81&(x82|x83))^x84);

	if (t20 != -9223372036854773998LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MAX;
	static int8_t x87 = INT8_MAX;
	int32_t t21 = 1;

	t21 = ((x85&(x86|x87))^x88);

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = 0U;
	volatile uint64_t x90 = 2994016750603720339LLU;
	uint16_t x91 = 1U;
	int16_t x92 = INT16_MIN;

	t22 = ((x89&(x90|x91))^x92);

	if (t22 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -90885320;
	uint32_t x94 = 3U;
	int64_t x95 = INT64_MIN;
	static int32_t x96 = INT32_MAX;
	static int64_t t23 = 545273468631052542LL;

	t23 = ((x93&(x94|x95))^x96);

	if (t23 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x99 = INT32_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -5319;

	t24 = ((x97&(x98|x99))^x100);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -5859681166025LL;
	int8_t x102 = 0;
	volatile int8_t x103 = 1;
	int8_t x104 = -1;

	t25 = ((x101&(x102|x103))^x104);

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 454060LL;
	int64_t x106 = -1LL;
	volatile int8_t x107 = 8;
	uint8_t x108 = UINT8_MAX;
	static int64_t t26 = -540LL;

	t26 = ((x105&(x106|x107))^x108);

	if (t26 != 453971LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = INT64_MIN;
	static int8_t x111 = -1;
	volatile int32_t x112 = -1;
	volatile int64_t t27 = -361275004LL;

	t27 = ((x109&(x110|x111))^x112);

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int64_t x114 = INT64_MIN;
	int64_t x115 = 813897LL;
	static volatile int32_t x116 = -783836;
	int64_t t28 = 258963LL;

	t28 = ((x113&(x114|x115))^x116);

	if (t28 != -761491LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MAX;
	int64_t x119 = 265725676887535LL;
	volatile int64_t t29 = 237LL;

	t29 = ((x117&(x118|x119))^x120);

	if (t29 != 265727479119750LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 25589LL;
	int32_t x122 = -1;
	int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MAX;
	volatile int64_t t30 = -19068203534294LL;

	t30 = ((x121&(x122|x123))^x124);

	if (t30 != 25482LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	int8_t x127 = 40;
	static volatile uint32_t x128 = 54U;
	uint32_t t31 = 1714U;

	t31 = ((x125&(x126|x127))^x128);

	if (t31 != 4294967222U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -1;
	static uint8_t x130 = UINT8_MAX;
	int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t32 = -108982805;

	t32 = ((x129&(x130|x131))^x132);

	if (t32 != -2147483520) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = UINT32_MAX;
	volatile int64_t x135 = INT64_MIN;
	static int8_t x136 = -1;

	t33 = ((x133&(x134|x135))^x136);

	if (t33 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = 57;
	int16_t x138 = -1;
	int8_t x140 = 0;
	static volatile int64_t t34 = 2012376LL;

	t34 = ((x137&(x138|x139))^x140);

	if (t34 != 57LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	uint64_t x144 = UINT64_MAX;

	t35 = ((x141&(x142|x143))^x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 27168060;
	int64_t x147 = -66321846705239LL;
	volatile uint16_t x148 = UINT16_MAX;
	int64_t t36 = -18883121840LL;

	t36 = ((x145&(x146|x147))^x148);

	if (t36 != 27161283LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	volatile int64_t x150 = -1LL;
	static volatile int64_t x151 = -1LL;
	static uint32_t x152 = 21U;
	static volatile int64_t t37 = 429LL;

	t37 = ((x149&(x150|x151))^x152);

	if (t37 != -2147483627LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	uint64_t x156 = 1528933LLU;
	static uint64_t t38 = 456285LLU;

	t38 = ((x153&(x154|x155))^x156);

	if (t38 != 18446744073708022757LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MAX;
	uint16_t x160 = 102U;
	volatile int64_t t39 = -50LL;

	t39 = ((x157&(x158|x159))^x160);

	if (t39 != -9223372036854775706LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 1006607U;
	static int32_t x162 = INT32_MIN;
	static int8_t x164 = -1;
	volatile int64_t t40 = 1077600LL;

	t40 = ((x161&(x162|x163))^x164);

	if (t40 != -1006608LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int64_t x168 = -1LL;
	volatile int64_t t41 = INT64_MAX;

	t41 = ((x165&(x166|x167))^x168);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MAX;
	int32_t x171 = INT32_MAX;
	uint8_t x172 = UINT8_MAX;
	volatile uint32_t t42 = 955633480U;

	t42 = ((x169&(x170|x171))^x172);

	if (t42 != 2147483392U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -3037610614LL;
	uint64_t x176 = 14389516LLU;
	static uint64_t t43 = 6LLU;

	t43 = ((x173&(x174|x175))^x176);

	if (t43 != 14389510LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MAX;
	volatile int32_t t44 = 7132515;

	t44 = ((x177&(x178|x179))^x180);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	static int8_t x182 = INT8_MIN;
	int64_t x183 = 11LL;
	uint16_t x184 = 660U;
	int64_t t45 = -59832545597787067LL;

	t45 = ((x181&(x182|x183))^x184);

	if (t45 != -2147482988LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 6;
	int16_t x186 = 9080;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MAX;

	t46 = ((x185&(x186|x187))^x188);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 0U;
	int32_t x191 = -1;
	int8_t x192 = INT8_MAX;

	t47 = ((x189&(x190|x191))^x192);

	if (t47 != 127U) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = -1LL;
	int16_t x195 = INT16_MIN;
	int32_t x196 = -1;
	int64_t t48 = 1944637172LL;

	t48 = ((x193&(x194|x195))^x196);

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = 6U;
	volatile int64_t x199 = -1LL;
	int64_t t49 = 405LL;

	t49 = ((x197&(x198|x199))^x200);

	if (t49 != 65534LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x202 = INT16_MIN;
	uint16_t x203 = 1091U;
	int8_t x204 = INT8_MIN;

	t50 = ((x201&(x202|x203))^x204);

	if (t50 != 32640) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 2U;
	int32_t x206 = INT32_MIN;
	static volatile uint16_t x207 = UINT16_MAX;
	int16_t x208 = -1;
	int32_t t51 = 4402;

	t51 = ((x205&(x206|x207))^x208);

	if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 144541815;
	static int64_t x210 = -2LL;
	int32_t x211 = INT32_MIN;
	static int16_t x212 = 30;
	int64_t t52 = -6LL;

	t52 = ((x209&(x210|x211))^x212);

	if (t52 != 144541800LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	uint8_t x214 = 31U;
	volatile int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = -12317668697LL;

	t53 = ((x213&(x214|x215))^x216);

	if (t53 != 9223372036854775711LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 20930U;
	int16_t x218 = 13;
	uint64_t x219 = 12332LLU;
	volatile uint64_t t54 = 171749995266LLU;

	t54 = ((x217&(x218|x219))^x220);

	if (t54 != 18446744073709547519LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x223 = 39273;
	int8_t x224 = -1;

	t55 = ((x221&(x222|x223))^x224);

	if (t55 != -6) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int64_t x226 = INT64_MAX;
	int16_t x227 = -1;
	uint64_t x228 = 68496037550215LLU;
	volatile uint64_t t56 = 7317468586LLU;

	t56 = ((x225&(x226|x227))^x228);

	if (t56 != 9223303540817225592LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	static int8_t x230 = 0;
	int16_t x231 = -1;
	int32_t x232 = INT32_MIN;

	t57 = ((x229&(x230|x231))^x232);

	if (t57 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 9010780;
	uint64_t x234 = UINT64_MAX;
	volatile uint64_t t58 = 717842426LLU;

	t58 = ((x233&(x234|x235))^x236);

	if (t58 != 9115372LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x238 = INT8_MIN;
	int64_t x240 = 489LL;
	volatile int64_t t59 = -506165769655811487LL;

	t59 = ((x237&(x238|x239))^x240);

	if (t59 != 4294966901LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 63U;
	uint64_t x242 = 898LLU;
	uint64_t x243 = 2018189LLU;
	int16_t x244 = 750;

	t60 = ((x241&(x242|x243))^x244);

	if (t60 != 737LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = UINT16_MAX;
	int8_t x247 = 14;
	int32_t x248 = 4012785;
	int64_t t61 = -31186230LL;

	t61 = ((x245&(x246|x247))^x248);

	if (t61 != 4048142LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 1U;
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = 218562LLU;
	int16_t x252 = -1;
	volatile uint64_t t62 = 0LLU;

	t62 = ((x249&(x250|x251))^x252);

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 0;
	int8_t x254 = INT8_MAX;
	static int16_t x256 = 592;
	int32_t t63 = 201323722;

	t63 = ((x253&(x254|x255))^x256);

	if (t63 != 592) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 97237LL;
	static uint64_t x258 = 9994744143326LLU;
	int32_t x259 = -7883;
	int32_t x260 = -1;
	volatile uint64_t t64 = 28177LLU;

	t64 = ((x257&(x258|x259))^x260);

	if (t64 != 18446744073709454890LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = -1;
	int16_t x263 = -1;
	volatile int64_t x264 = INT64_MAX;
	int64_t t65 = -2347934230294767186LL;

	t65 = ((x261&(x262|x263))^x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x268 = -1LL;
	static int64_t t66 = 776291LL;

	t66 = ((x265&(x266|x267))^x268);

	if (t66 != 4735LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x271 = -2;
	uint32_t x272 = 411726U;
	static volatile int64_t t67 = -17456938353017365LL;

	t67 = ((x269&(x270|x271))^x272);

	if (t67 != -9223372036854364082LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 34U;
	int8_t x274 = -1;
	int8_t x275 = 1;
	int64_t t68 = -89406733715170LL;

	t68 = ((x273&(x274|x275))^x276);

	if (t68 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 9;
	volatile uint16_t x278 = 599U;
	volatile int8_t x280 = 2;

	t69 = ((x277&(x278|x279))^x280);

	if (t69 != 11) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	static uint8_t x282 = UINT8_MAX;
	int8_t x284 = INT8_MIN;
	static volatile int64_t t70 = 14105071012LL;

	t70 = ((x281&(x282|x283))^x284);

	if (t70 != -9223372036854773377LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 1;
	static int16_t x287 = INT16_MIN;
	int32_t x288 = 640;

	t71 = ((x285&(x286|x287))^x288);

	if (t71 != 640) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MAX;
	int64_t t72 = 13462438428904624LL;

	t72 = ((x289&(x290|x291))^x292);

	if (t72 != -65409LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MAX;
	static int16_t x294 = INT16_MIN;
	uint64_t x295 = 128933LLU;
	uint64_t t73 = 1011475447437033979LLU;

	t73 = ((x293&(x294|x295))^x296);

	if (t73 != 24LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	int32_t x298 = -1;
	static volatile uint32_t x299 = 1617U;
	static uint32_t t74 = 3U;

	t74 = ((x297&(x298|x299))^x300);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile uint8_t x302 = 8U;
	static uint8_t x303 = UINT8_MAX;
	int32_t t75 = -234;

	t75 = ((x301&(x302|x303))^x304);

	if (t75 != 103105631) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	static int32_t x306 = INT32_MIN;
	int16_t x308 = INT16_MAX;
	static int64_t t76 = -5280477LL;

	t76 = ((x305&(x306|x307))^x308);

	if (t76 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x311 = 38U;
	volatile uint32_t t77 = 959493965U;

	t77 = ((x309&(x310|x311))^x312);

	if (t77 != 38U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MIN;
	static volatile uint8_t x315 = 63U;
	static uint32_t x316 = UINT32_MAX;
	volatile int64_t t78 = 7690357LL;

	t78 = ((x313&(x314|x315))^x316);

	if (t78 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = 16123813;
	int16_t x319 = -1;

	t79 = ((x317&(x318|x319))^x320);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MAX;
	uint32_t x324 = 91U;
	uint64_t t80 = 16550295670727LLU;

	t80 = ((x321&(x322|x323))^x324);

	if (t80 != 90LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = UINT16_MAX;
	int32_t t81 = -4;

	t81 = ((x325&(x326|x327))^x328);

	if (t81 != 118) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x330 = -1;
	volatile uint32_t x331 = 27U;
	static volatile uint32_t x332 = 121202U;
	volatile uint32_t t82 = 1121U;

	t82 = ((x329&(x330|x331))^x332);

	if (t82 != 75405U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	int8_t x334 = INT8_MAX;
	int8_t x335 = 60;
	static volatile uint32_t x336 = UINT32_MAX;
	int64_t t83 = 4120402891LL;

	t83 = ((x333&(x334|x335))^x336);

	if (t83 != 4294967168LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MAX;
	uint64_t t84 = 91309944287326LLU;

	t84 = ((x337&(x338|x339))^x340);

	if (t84 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = 401U;
	volatile uint64_t x342 = 30558LLU;

	t85 = ((x341&(x342|x343))^x344);

	if (t85 != 405LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x346 = INT16_MIN;
	int32_t x347 = -1;
	int16_t x348 = -1;
	static volatile uint32_t t86 = 1338366U;

	t86 = ((x345&(x346|x347))^x348);

	if (t86 != 4294577944U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MIN;
	volatile uint32_t t87 = 51853U;

	t87 = ((x349&(x350|x351))^x352);

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 468842270260LL;
	int8_t x354 = INT8_MIN;
	static uint16_t x355 = UINT16_MAX;
	static int8_t x356 = -1;

	t88 = ((x353&(x354|x355))^x356);

	if (t88 != -468842270261LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 14562;
	static int32_t x359 = INT32_MIN;
	static volatile int8_t x360 = 3;
	volatile int32_t t89 = 1215;

	t89 = ((x357&(x358|x359))^x360);

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MIN;
	static int64_t x362 = INT64_MAX;
	static uint8_t x363 = UINT8_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile int64_t t90 = -8566417573627389LL;

	t90 = ((x361&(x362|x363))^x364);

	if (t90 != 9223372034707292415LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 2078831;
	static int8_t x366 = INT8_MIN;
	uint64_t x367 = 1112054785LLU;
	int64_t x368 = -1LL;
	static uint64_t t91 = 30390LLU;

	t91 = ((x365&(x366|x367))^x368);

	if (t91 != 18446744073707472894LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MIN;
	static uint16_t x371 = 6U;
	volatile int8_t x372 = 14;
	volatile uint64_t t92 = 49576LLU;

	t92 = ((x369&(x370|x371))^x372);

	if (t92 != 8LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x374 = 5U;
	int8_t x375 = -1;
	int64_t x376 = INT64_MAX;
	volatile int64_t t93 = INT64_MIN;

	t93 = ((x373&(x374|x375))^x376);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 2524740U;
	static uint64_t x380 = 16185616543887LLU;
	volatile uint64_t t94 = 490462701690LLU;

	t94 = ((x377&(x378|x379))^x380);

	if (t94 != 16185614284491LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = 0;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 17U;
	int16_t x384 = 1;
	volatile uint32_t t95 = 129844U;

	t95 = ((x381&(x382|x383))^x384);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = INT16_MIN;
	int64_t x387 = -411442532442LL;
	int64_t x388 = 29570627196180612LL;
	volatile int64_t t96 = 0LL;

	t96 = ((x385&(x386|x387))^x388);

	if (t96 != 29570627196180610LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 0U;
	static int16_t x391 = -252;
	int8_t x392 = -1;
	int32_t t97 = -980;

	t97 = ((x389&(x390|x391))^x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 2571643LLU;
	int32_t x394 = INT32_MIN;
	int16_t x395 = -1;
	int16_t x396 = 0;

	t98 = ((x393&(x394|x395))^x396);

	if (t98 != 2571643LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint64_t x398 = 61LLU;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t99 = 4685435LLU;

	t99 = ((x397&(x398|x399))^x400);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

