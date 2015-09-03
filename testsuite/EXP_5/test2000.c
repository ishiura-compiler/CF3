#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
volatile uint32_t t0 = 24U;
int16_t x7 = INT16_MAX;
static int64_t x8 = INT64_MAX;
static int64_t x9 = 6LL;
int64_t x17 = INT64_MIN;
static uint16_t x18 = 14U;
static int64_t x20 = INT64_MIN;
int32_t t7 = 1;
uint32_t x41 = 260U;
uint64_t t10 = 1146407289137534032LLU;
uint32_t x47 = 31738712U;
static volatile int64_t t12 = -149898246104116LL;
int16_t x60 = INT16_MIN;
int64_t x61 = -3272036440LL;
int16_t x65 = -505;
int8_t x73 = INT8_MIN;
volatile int8_t x78 = -12;
uint8_t x80 = UINT8_MAX;
uint32_t x82 = UINT32_MAX;
int8_t x88 = -1;
static uint64_t x90 = 30677556084979LLU;
uint64_t t22 = 6515170LLU;
uint64_t t24 = 729943054LLU;
volatile uint32_t x103 = UINT32_MAX;
static uint64_t x108 = 1038915LLU;
static int16_t x112 = INT16_MAX;
uint64_t t27 = 15336183LLU;
volatile uint64_t x119 = 43442922656LLU;
uint64_t t29 = 2LLU;
int16_t x129 = -2;
uint8_t x133 = 5U;
uint64_t t33 = 252LLU;
volatile int64_t x137 = -1LL;
int16_t x139 = 9320;
static volatile int64_t x141 = INT64_MAX;
static volatile int64_t t35 = -2155272666LL;
uint64_t x148 = 3158683220047LLU;
volatile uint64_t t36 = 49850266321343LLU;
int64_t x149 = INT64_MAX;
volatile int16_t x154 = 1;
static int8_t x156 = -1;
int32_t x158 = INT32_MIN;
volatile uint64_t x159 = 1LLU;
volatile int64_t x160 = INT64_MIN;
static volatile uint64_t t39 = 28298741559518LLU;
uint32_t x164 = 1U;
int8_t x166 = -54;
int32_t x178 = INT32_MIN;
int64_t x183 = INT64_MIN;
int64_t t45 = 1546570181242LL;
static int32_t x188 = 1;
volatile int32_t t47 = 5;
volatile int16_t x197 = INT16_MIN;
static int8_t x198 = INT8_MIN;
int16_t x204 = INT16_MIN;
static uint8_t x212 = 45U;
volatile int64_t x219 = -1LL;
static int32_t x224 = INT32_MIN;
volatile int8_t x227 = INT8_MAX;
uint32_t x228 = 7382237U;
uint64_t x229 = UINT64_MAX;
int64_t x232 = 892LL;
int16_t x234 = 3;
uint32_t x236 = 145274U;
int32_t x247 = -1085;
static int64_t t61 = -3379395416189452LL;
volatile uint64_t x258 = 36275893235079LLU;
static uint32_t x262 = 3U;
int16_t x264 = 0;
static int8_t x269 = INT8_MAX;
uint32_t t67 = 395625U;
uint64_t x274 = 474829564810912LLU;
uint64_t t68 = 38393291LLU;
static int32_t t72 = -1;
int16_t x296 = 7166;
volatile uint32_t x299 = 55840U;
volatile uint64_t t74 = 0LLU;
int64_t x301 = INT64_MIN;
int64_t x302 = INT64_MIN;
static uint32_t x315 = UINT32_MAX;
int16_t x316 = INT16_MIN;
int64_t t79 = -4LL;
uint8_t x324 = 43U;
uint8_t x326 = UINT8_MAX;
volatile uint64_t t81 = 3771921LLU;
int16_t x334 = 4258;
int32_t x338 = INT32_MIN;
volatile int64_t x340 = INT64_MIN;
volatile uint64_t t84 = 899987LLU;
int8_t x343 = INT8_MIN;
int64_t t86 = 16357910059623LL;
int16_t x355 = -1;
uint16_t x358 = 1348U;
static volatile int64_t t89 = 0LL;
int8_t x363 = INT8_MIN;
int32_t x372 = INT32_MIN;
volatile uint64_t t93 = 661815265LLU;
volatile int64_t t94 = -1LL;
volatile int32_t x381 = INT32_MIN;
int8_t x383 = -12;
uint32_t x386 = UINT32_MAX;
volatile int64_t t96 = -16551161098LL;
uint32_t x389 = 1560U;


void f0(void) {
	volatile uint16_t x2 = 7U;
	uint32_t x3 = 2860U;
	volatile int32_t x4 = 592042;

	t0 = (x1&((x2|x3)&x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MAX;
	volatile int64_t t1 = -39149322LL;

	t1 = (x5&((x6|x7)&x8));

	if (t1 != 2147450880LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -4406LL;
	uint8_t x11 = 13U;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 19454579391614LLU;

	t2 = (x9&((x10|x11)&x12));

	if (t2 != 6LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	int32_t x15 = -1;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13&((x14|x15)&x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = INT8_MIN;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x17&((x18|x19)&x20));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = 0;
	static uint64_t x23 = 119780321767566LLU;
	int16_t x24 = -1;
	uint64_t t5 = 1453263540811LLU;

	t5 = (x21&((x22|x23)&x24));

	if (t5 != 119780321767566LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	static volatile int16_t x28 = -1;
	int64_t t6 = INT64_MIN;

	t6 = (x25&((x26|x27)&x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MAX;
	volatile uint8_t x32 = UINT8_MAX;

	t7 = (x29&((x30|x31)&x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = -7;
	int16_t x36 = INT16_MAX;
	int32_t t8 = -26;

	t8 = (x33&((x34|x35)&x36));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static uint8_t x38 = 7U;
	int64_t x39 = -13346LL;
	int64_t x40 = INT64_MAX;
	static int64_t t9 = 6533495009LL;

	t9 = (x37&((x38|x39)&x40));

	if (t9 != 9223372036854762368LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x42 = 117298LLU;
	static volatile uint16_t x43 = 1U;
	volatile uint8_t x44 = 3U;

	t10 = (x41&((x42|x43)&x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static uint16_t x46 = UINT16_MAX;
	static int16_t x48 = INT16_MAX;
	int64_t t11 = -312811LL;

	t11 = (x45&((x46|x47)&x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	volatile int32_t x50 = INT32_MIN;
	uint32_t x51 = 2398U;
	int64_t x52 = 25891LL;

	t12 = (x49&((x50|x51)&x52));

	if (t12 != 258LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = INT8_MIN;
	static uint32_t x54 = 0U;
	static int32_t x55 = -1;
	uint64_t x56 = 35881683027818220LLU;
	volatile uint64_t t13 = 17623770186989406LLU;

	t13 = (x53&((x54|x55)&x56));

	if (t13 != 1523644032LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	volatile int32_t x59 = INT32_MIN;
	uint32_t t14 = 0U;

	t14 = (x57&((x58|x59)&x60));

	if (t14 != 4294934528U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -1824440904411904724LL;
	int16_t x63 = 18;
	volatile int64_t x64 = INT64_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (x61&((x62|x63)&x64));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = INT16_MIN;
	uint16_t x67 = 4U;
	volatile int32_t x68 = 0;
	int32_t t16 = 691;

	t16 = (x65&((x66|x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -10;
	volatile int32_t x70 = 1446;
	static uint32_t x71 = 31U;
	int16_t x72 = INT16_MAX;
	static uint32_t t17 = 132130519U;

	t17 = (x69&((x70|x71)&x72));

	if (t17 != 1462U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 111U;
	volatile int64_t x75 = INT64_MIN;
	volatile uint8_t x76 = 0U;
	int64_t t18 = 61LL;

	t18 = (x73&((x74|x75)&x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MAX;
	uint16_t x79 = UINT16_MAX;
	int32_t t19 = -46;

	t19 = (x77&((x78|x79)&x80));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int16_t x83 = -769;
	int64_t x84 = INT64_MAX;
	volatile int64_t t20 = 6262006397871LL;

	t20 = (x81&((x82|x83)&x84));

	if (t20 != 2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 3U;
	static uint8_t x86 = 0U;
	static int8_t x87 = 1;
	static volatile int32_t t21 = 242;

	t21 = (x85&((x86|x87)&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = -1906;
	int8_t x91 = 0;
	static int64_t x92 = 15232780020654793LL;

	t22 = (x89&((x90|x91)&x92));

	if (t22 != 28727560896640LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = 62791622;
	int8_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	static volatile uint64_t t23 = 27787274LLU;

	t23 = (x93&((x94|x95)&x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -3;
	uint64_t x98 = 23887LLU;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 6LLU;

	t24 = (x97&((x98|x99)&x100));

	if (t24 != 4LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 14;
	static int32_t x102 = INT32_MIN;
	int32_t x104 = INT32_MIN;
	volatile uint32_t t25 = 25292985U;

	t25 = (x101&((x102|x103)&x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 0LL;
	static volatile uint64_t x106 = 24709LLU;
	int16_t x107 = INT16_MAX;
	volatile uint64_t t26 = 62LLU;

	t26 = (x105&((x106|x107)&x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 3U;
	static volatile uint64_t x110 = UINT64_MAX;
	volatile int8_t x111 = INT8_MAX;

	t27 = (x109&((x110|x111)&x112));

	if (t27 != 3LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 22202427;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = -1LL;
	uint16_t x116 = 391U;
	volatile uint64_t t28 = 148122613LLU;

	t28 = (x113&((x114|x115)&x116));

	if (t28 != 3LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = INT8_MAX;
	int32_t x120 = INT32_MIN;

	t29 = (x117&((x118|x119)&x120));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MAX;
	volatile uint16_t x122 = 3U;
	volatile int16_t x123 = -1;
	uint16_t x124 = UINT16_MAX;
	int64_t t30 = -774938220LL;

	t30 = (x121&((x122|x123)&x124));

	if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 78U;
	int64_t x126 = 612205521LL;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	volatile int64_t t31 = -3992867LL;

	t31 = (x125&((x126|x127)&x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = 1385523;
	uint32_t x131 = 218242U;
	int64_t x132 = INT64_MAX;
	static int64_t t32 = 18574124905450027LL;

	t32 = (x129&((x130|x131)&x132));

	if (t32 != 1537202LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x134 = 604LLU;
	int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;

	t33 = (x133&((x134|x135)&x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x138 = 2966U;
	int8_t x140 = INT8_MAX;
	volatile int64_t t34 = -246026850643LL;

	t34 = (x137&((x138|x139)&x140));

	if (t34 != 126LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MAX;

	t35 = (x141&((x142|x143)&x144));

	if (t35 != 2147483520LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	volatile int8_t x146 = -11;
	uint64_t x147 = 16617LLU;

	t36 = (x145&((x146|x147)&x148));

	if (t36 != 3158683220045LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t37 = 42624LLU;

	t37 = (x149&((x150|x151)&x152));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = 20047994LL;
	static int64_t x155 = INT64_MIN;
	volatile int64_t t38 = -7493219112978740LL;

	t38 = (x153&((x154|x155)&x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;

	t39 = (x157&((x158|x159)&x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -1LL;
	int64_t x162 = -1LL;
	static int8_t x163 = INT8_MAX;
	static volatile int64_t t40 = -115LL;

	t40 = (x161&((x162|x163)&x164));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = 3757121550LL;
	uint32_t x167 = 3496185U;
	uint64_t x168 = 127925925213LLU;
	uint64_t t41 = 927036455LLU;

	t41 = (x165&((x166|x167)&x168));

	if (t41 != 3371180040LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	int16_t x172 = 46;
	volatile int64_t t42 = 2049LL;

	t42 = (x169&((x170|x171)&x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int32_t x174 = 9;
	int32_t x175 = -1;
	uint64_t x176 = 157472495564788LLU;
	static volatile uint64_t t43 = 61670397LLU;

	t43 = (x173&((x174|x175)&x176));

	if (t43 != 157472495564788LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	volatile uint16_t x179 = 15165U;
	int16_t x180 = 0;
	volatile int32_t t44 = 1044230;

	t44 = (x177&((x178|x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x181 = INT64_MIN;
	uint16_t x182 = 1U;
	uint32_t x184 = UINT32_MAX;

	t45 = (x181&((x182|x183)&x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -25;
	volatile int64_t x186 = -2062717LL;
	int16_t x187 = -1;
	volatile int64_t t46 = -51556012646LL;

	t46 = (x185&((x186|x187)&x188));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = -1;
	int16_t x190 = INT16_MIN;
	volatile int16_t x191 = INT16_MIN;
	uint16_t x192 = 17900U;

	t47 = (x189&((x190|x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 193585U;
	int64_t x194 = INT64_MAX;
	uint32_t x195 = 5045U;
	int16_t x196 = -2366;
	int64_t t48 = -2289LL;

	t48 = (x193&((x194|x195)&x196));

	if (t48 != 193536LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x199 = 3001375LLU;
	uint8_t x200 = 106U;
	static volatile uint64_t t49 = 33411164395LLU;

	t49 = (x197&((x198|x199)&x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	int32_t x202 = -1;
	static int64_t x203 = INT64_MIN;
	static int64_t t50 = -1LL;

	t50 = (x201&((x202|x203)&x204));

	if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static int64_t x206 = 16LL;
	uint32_t x207 = 405655804U;
	volatile int64_t x208 = -40LL;
	static int64_t t51 = 1LL;

	t51 = (x205&((x206|x207)&x208));

	if (t51 != 405635072LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	volatile int8_t x210 = INT8_MIN;
	uint64_t x211 = 2680447LLU;
	uint64_t t52 = 2898435LLU;

	t52 = (x209&((x210|x211)&x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 17643U;
	volatile uint16_t x214 = 5U;
	static int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	int64_t t53 = -970439475LL;

	t53 = (x213&((x214|x215)&x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = -243;
	int16_t x218 = 481;
	int16_t x220 = 223;
	static volatile int64_t t54 = 366385329058LL;

	t54 = (x217&((x218|x219)&x220));

	if (t54 != 13LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MIN;
	static int16_t x223 = 1;
	static uint32_t t55 = 4597U;

	t55 = (x221&((x222|x223)&x224));

	if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 5019097007281191647LLU;
	int32_t x226 = -1;
	uint64_t t56 = 49506492LLU;

	t56 = (x225&((x226|x227)&x228));

	if (t56 != 3186909LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MAX;
	uint8_t x231 = UINT8_MAX;
	volatile uint64_t t57 = 44599492603295LLU;

	t57 = (x229&((x230|x231)&x232));

	if (t57 != 892LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 18925601286693LLU;
	int32_t x235 = 22718369;
	uint64_t t58 = 12984872385969752LLU;

	t58 = (x233&((x234|x235)&x236));

	if (t58 != 8736LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = 10U;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	static int16_t x240 = INT16_MIN;
	int64_t t59 = -76137766051LL;

	t59 = (x237&((x238|x239)&x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 5U;
	int8_t x242 = INT8_MIN;
	uint32_t x243 = 23U;
	uint16_t x244 = 22U;
	volatile uint32_t t60 = 59183572U;

	t60 = (x241&((x242|x243)&x244));

	if (t60 != 4U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	int32_t x246 = 119661;
	volatile int32_t x248 = INT32_MIN;

	t61 = (x245&((x246|x247)&x248));

	if (t61 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	uint8_t x250 = 72U;
	int16_t x251 = INT16_MIN;
	static volatile uint16_t x252 = UINT16_MAX;
	volatile uint32_t t62 = 7051U;

	t62 = (x249&((x250|x251)&x252));

	if (t62 != 32840U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x254 = UINT64_MAX;
	int32_t x255 = 0;
	uint32_t x256 = 2U;
	static uint64_t t63 = 3800538945403LLU;

	t63 = (x253&((x254|x255)&x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int16_t x259 = 92;
	uint32_t x260 = UINT32_MAX;
	volatile uint64_t t64 = 193LLU;

	t64 = (x257&((x258|x259)&x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 19U;
	static int16_t x263 = 1;
	uint32_t t65 = 4U;

	t65 = (x261&((x262|x263)&x264));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = -1030681393LL;
	static volatile uint32_t x266 = 7110975U;
	uint16_t x267 = 63U;
	volatile int16_t x268 = INT16_MAX;
	volatile int64_t t66 = 354LL;

	t66 = (x265&((x266|x267)&x268));

	if (t66 != 15LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = 102U;
	uint32_t x271 = 570U;
	volatile int16_t x272 = -144;

	t67 = (x269&((x270|x271)&x272));

	if (t67 != 112U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 1;
	uint8_t x275 = 2U;
	int32_t x276 = INT32_MIN;

	t68 = (x273&((x274|x275)&x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = -64104173;
	uint16_t x279 = 639U;
	int32_t x280 = INT32_MAX;
	volatile uint32_t t69 = 3U;

	t69 = (x277&((x278|x279)&x280));

	if (t69 != 2083380095U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 63;
	uint32_t x282 = UINT32_MAX;
	volatile int32_t x283 = INT32_MAX;
	static int8_t x284 = INT8_MAX;
	volatile uint32_t t70 = 23U;

	t70 = (x281&((x282|x283)&x284));

	if (t70 != 63U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	volatile int32_t x286 = INT32_MAX;
	int64_t x287 = -1LL;
	int8_t x288 = INT8_MAX;
	volatile int64_t t71 = -5542501036925LL;

	t71 = (x285&((x286|x287)&x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	static volatile uint8_t x290 = 0U;
	volatile int8_t x291 = INT8_MIN;
	static uint16_t x292 = 159U;

	t72 = (x289&((x290|x291)&x292));

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	volatile uint16_t x294 = 31U;
	int64_t x295 = -1LL;
	int64_t t73 = 236852623604900LL;

	t73 = (x293&((x294|x295)&x296));

	if (t73 != 7166LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MIN;
	static uint64_t x298 = 97490642822LLU;
	static volatile uint8_t x300 = 46U;

	t74 = (x297&((x298|x299)&x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x301&((x302|x303)&x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 220711096;
	static uint8_t x306 = 6U;
	int32_t x307 = 4775210;
	volatile int32_t x308 = 460471950;
	volatile int32_t t76 = 40735516;

	t76 = (x305&((x306|x307)&x308));

	if (t76 != 2056) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x309 = UINT32_MAX;
	volatile int8_t x310 = INT8_MAX;
	volatile int64_t x311 = 9828157439730LL;
	static int32_t x312 = INT32_MAX;
	static volatile int64_t t77 = 315980413LL;

	t77 = (x309&((x310|x311)&x312));

	if (t77 != 1272266495LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int64_t x314 = -1LL;
	int64_t t78 = 122645292744680534LL;

	t78 = (x313&((x314|x315)&x316));

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -116131LL;
	int16_t x318 = INT16_MAX;
	uint16_t x319 = UINT16_MAX;
	static volatile uint8_t x320 = 1U;

	t79 = (x317&((x318|x319)&x320));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x321 = INT64_MAX;
	int8_t x322 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	volatile uint64_t t80 = 2LLU;

	t80 = (x321&((x322|x323)&x324));

	if (t80 != 43LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 662360034416581LLU;
	static int64_t x327 = INT64_MIN;
	int8_t x328 = 0;

	t81 = (x325&((x326|x327)&x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 262220969388904LLU;
	uint32_t x330 = 7324U;
	int8_t x331 = INT8_MIN;
	static int32_t x332 = INT32_MIN;
	static uint64_t t82 = 1101LLU;

	t82 = (x329&((x330|x331)&x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 3U;
	uint16_t x335 = 3U;
	uint16_t x336 = UINT16_MAX;
	uint32_t t83 = 5U;

	t83 = (x333&((x334|x335)&x336));

	if (t83 != 3U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 407734LLU;
	uint64_t x339 = UINT64_MAX;

	t84 = (x337&((x338|x339)&x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -1;
	static volatile uint8_t x342 = UINT8_MAX;
	int32_t x344 = INT32_MAX;
	static volatile int32_t t85 = INT32_MAX;

	t85 = (x341&((x342|x343)&x344));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 387U;
	int64_t x346 = INT64_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	volatile int8_t x348 = INT8_MIN;

	t86 = (x345&((x346|x347)&x348));

	if (t86 != 384LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = 858738256098LL;
	int32_t x350 = 1361088;
	int16_t x351 = INT16_MIN;
	int64_t x352 = -1LL;
	volatile int64_t t87 = 12LL;

	t87 = (x349&((x350|x351)&x352));

	if (t87 != 858738245824LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -20319;
	int8_t x354 = -5;
	uint16_t x356 = 5582U;
	volatile int32_t t88 = -15;

	t88 = (x353&((x354|x355)&x356));

	if (t88 != 4224) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = 1;
	static uint16_t x359 = 0U;
	int64_t x360 = -1LL;

	t89 = (x357&((x358|x359)&x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x361 = INT32_MIN;
	static int16_t x362 = INT16_MAX;
	int32_t x364 = 2698;
	int32_t t90 = -5023295;

	t90 = (x361&((x362|x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = UINT32_MAX;
	int16_t x366 = -4772;
	int64_t x367 = INT64_MAX;
	int32_t x368 = -34354240;
	int64_t t91 = -387948784058149489LL;

	t91 = (x365&((x366|x367)&x368));

	if (t91 != 4260613056LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = 1;
	volatile uint8_t x370 = 31U;
	static volatile int64_t x371 = INT64_MAX;
	static int64_t t92 = 113312692294LL;

	t92 = (x369&((x370|x371)&x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	uint64_t x374 = UINT64_MAX;
	volatile int16_t x375 = INT16_MIN;
	int32_t x376 = -9336;

	t93 = (x373&((x374|x375)&x376));

	if (t93 != 2147474312LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MAX;
	static int16_t x380 = 12;

	t94 = (x377&((x378|x379)&x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -1;
	volatile int8_t x384 = INT8_MIN;
	int32_t t95 = INT32_MIN;

	t95 = (x381&((x382|x383)&x384));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -259482192472100300LL;
	int16_t x387 = -519;
	int8_t x388 = -7;

	t96 = (x385&((x386|x387)&x388));

	if (t96 != 472461872LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = 5;
	int32_t x391 = INT32_MAX;
	volatile int64_t x392 = -1LL;
	volatile int64_t t97 = -41058365LL;

	t97 = (x389&((x390|x391)&x392));

	if (t97 != 1560LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = -1;
	int32_t x394 = 162;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = -631766LL;
	static volatile int64_t t98 = -21490207535699049LL;

	t98 = (x393&((x394|x395)&x396));

	if (t98 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = -1;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -1;

	t99 = (x397&((x398|x399)&x400));

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

