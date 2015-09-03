#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = UINT8_MAX;
int32_t t0 = 108;
static uint64_t x6 = 84LLU;
int32_t x7 = -2829983;
static uint64_t x8 = UINT64_MAX;
static uint16_t x16 = 1133U;
uint8_t x22 = 20U;
uint16_t x27 = 3U;
static int8_t x29 = -24;
int32_t x31 = -1806;
uint16_t x34 = 46U;
volatile uint32_t x38 = 127310857U;
volatile int64_t x41 = INT64_MAX;
uint32_t x46 = 155425U;
int32_t x54 = -1;
static int8_t x55 = -1;
int8_t x63 = INT8_MIN;
static uint64_t t16 = 512411778LLU;
int64_t x71 = INT64_MIN;
int32_t x75 = INT32_MIN;
volatile int32_t t19 = -16553631;
volatile uint64_t t21 = 6423LLU;
volatile int64_t x100 = INT64_MAX;
static int16_t x102 = INT16_MIN;
volatile int32_t t27 = -52;
static uint64_t x116 = UINT64_MAX;
uint32_t t28 = UINT32_MAX;
int16_t x117 = -1;
uint16_t x127 = 0U;
int32_t x128 = INT32_MIN;
volatile int64_t t31 = -6LL;
int16_t x129 = -1;
int32_t t33 = 186598818;
volatile uint64_t x143 = 1869489763757LLU;
volatile uint32_t x145 = 4679U;
int32_t x148 = INT32_MIN;
int8_t x151 = INT8_MAX;
int64_t x156 = INT64_MIN;
int64_t t38 = 603776929LL;
int32_t x163 = -3;
int8_t x167 = 23;
int8_t x169 = INT8_MIN;
int16_t x170 = -15207;
volatile uint32_t x177 = 302U;
static int64_t x181 = INT64_MIN;
static uint8_t x185 = 0U;
static uint32_t x194 = 73191938U;
uint16_t x198 = 5893U;
volatile int64_t t49 = -17615777115732774LL;
int8_t x212 = -1;
int64_t t52 = -5861866814LL;
int16_t x218 = -12708;
volatile int32_t x221 = -1;
uint64_t x224 = 23440428667LLU;
static volatile int16_t x227 = -290;
volatile int16_t x229 = 2;
int8_t x233 = -1;
int16_t x236 = -1;
static int32_t x237 = -1;
volatile int64_t t62 = -14271555LL;
uint8_t x254 = 7U;
volatile int32_t t63 = 6;
volatile int32_t x259 = INT32_MIN;
volatile uint32_t x267 = UINT32_MAX;
volatile int32_t t66 = INT32_MAX;
int64_t x269 = -1LL;
uint32_t x270 = 376U;
int8_t x275 = 1;
volatile uint32_t t68 = UINT32_MAX;
volatile int64_t x277 = INT64_MIN;
uint8_t x282 = UINT8_MAX;
int8_t x293 = -1;
int64_t t74 = -531678809266089718LL;
int16_t x302 = 2;
int64_t x305 = INT64_MIN;
static uint32_t x307 = 51U;
uint64_t t76 = 2131456334LLU;
uint32_t x309 = 8139306U;
int8_t x312 = -1;
int64_t t77 = 8LL;
static int32_t x319 = -1;
volatile int64_t x322 = 1967918990675264582LL;
int8_t x324 = -1;
uint32_t x328 = UINT32_MAX;
int8_t x333 = INT8_MAX;
volatile int32_t t84 = -30186;
static int8_t x342 = 1;
int16_t x344 = INT16_MIN;
static volatile int32_t t85 = -3;
static volatile uint64_t x345 = UINT64_MAX;
uint64_t t86 = 43952335538058923LLU;
int8_t x360 = -63;
volatile uint64_t t89 = 32563032517LLU;
int32_t x362 = INT32_MIN;
uint64_t t91 = 130708LLU;
int16_t x369 = 0;
int32_t x371 = -40;
static uint64_t x373 = UINT64_MAX;
int64_t x383 = INT64_MIN;
volatile int32_t x386 = -1;
int32_t t96 = -134572141;
int64_t x400 = INT64_MAX;


void f0(void) {
	static int16_t x1 = 12;
	int64_t x3 = -1LL;
	int32_t x4 = 9;

	t0 = ((x1&x2)|(x3<=x4));

	if (t0 != 13) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 2882585188146LL;
	volatile uint64_t t1 = 10006916164889LLU;

	t1 = ((x5&x6)|(x7<=x8));

	if (t1 != 17LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 7;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 113U;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -23;

	t2 = ((x9&x10)|(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	static int8_t x14 = -1;
	int32_t x15 = INT32_MIN;
	int64_t t3 = INT64_MAX;

	t3 = ((x13&x14)|(x15<=x16));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static uint64_t x18 = 8099LLU;
	int32_t x19 = INT32_MIN;
	int64_t x20 = -1LL;
	static uint64_t t4 = 31LLU;

	t4 = ((x17&x18)|(x19<=x20));

	if (t4 != 8065LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	uint32_t x23 = 2U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -2595468;

	t5 = ((x21&x22)|(x23<=x24));

	if (t5 != 21) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	int8_t x26 = 1;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -19020035;

	t6 = ((x25&x26)|(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x30 = 5U;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -753697;

	t7 = ((x29&x30)|(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = 20;
	static volatile int16_t x35 = INT16_MIN;
	uint64_t x36 = 8216112216571231228LLU;
	int32_t t8 = 25;

	t8 = ((x33&x34)|(x35<=x36));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int8_t x39 = 7;
	uint32_t x40 = 9100749U;
	volatile int64_t t9 = 7LL;

	t9 = ((x37&x38)|(x39<=x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	uint16_t x43 = 643U;
	volatile int32_t x44 = INT32_MIN;
	static volatile int64_t t10 = -2LL;

	t10 = ((x41&x42)|(x43<=x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	int8_t x47 = 14;
	int64_t x48 = INT64_MIN;
	uint32_t t11 = 345U;

	t11 = ((x45&x46)|(x47<=x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 0;
	static volatile int32_t x50 = INT32_MIN;
	volatile int16_t x51 = -1;
	static int8_t x52 = INT8_MIN;
	int32_t t12 = -229741888;

	t12 = ((x49&x50)|(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 826U;
	int8_t x56 = 49;
	volatile int32_t t13 = -831717497;

	t13 = ((x53&x54)|(x55<=x56));

	if (t13 != 827) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MIN;
	static uint8_t x59 = UINT8_MAX;
	int8_t x60 = INT8_MAX;
	static int32_t t14 = 385775;

	t14 = ((x57&x58)|(x59<=x60));

	if (t14 != 65408) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 1497;
	volatile int64_t x62 = INT64_MIN;
	int64_t x64 = INT64_MIN;
	static int64_t t15 = -5143079350LL;

	t15 = ((x61&x62)|(x63<=x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static uint64_t x66 = 152150LLU;
	int16_t x67 = -1;
	static int8_t x68 = -6;

	t16 = ((x65&x66)|(x67<=x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 3025608U;
	int8_t x70 = -1;
	int32_t x72 = INT32_MIN;
	static uint32_t t17 = 14172420U;

	t17 = ((x69&x70)|(x71<=x72));

	if (t17 != 3025609U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 191067748U;
	static int32_t x74 = INT32_MIN;
	int8_t x76 = 9;
	uint32_t t18 = 253U;

	t18 = ((x73&x74)|(x75<=x76));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 39U;
	int32_t x78 = 5697953;
	int16_t x79 = INT16_MAX;
	uint64_t x80 = 1046757086379156LLU;

	t19 = ((x77&x78)|(x79<=x80));

	if (t19 != 33) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -1;
	uint8_t x82 = UINT8_MAX;
	volatile int32_t x83 = 15775415;
	uint32_t x84 = 22119506U;
	int32_t t20 = -1;

	t20 = ((x81&x82)|(x83<=x84));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = 19LLU;
	uint8_t x87 = 1U;
	uint16_t x88 = 224U;

	t21 = ((x85&x86)|(x87<=x88));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile int16_t x90 = 2140;
	static int16_t x91 = -476;
	int32_t x92 = INT32_MAX;
	static int32_t t22 = 474;

	t22 = ((x89&x90)|(x91<=x92));

	if (t22 != 2049) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 11U;
	int32_t x94 = -1;
	int32_t x95 = INT32_MIN;
	static volatile uint16_t x96 = UINT16_MAX;
	static volatile int32_t t23 = -6356549;

	t23 = ((x93&x94)|(x95<=x96));

	if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 4LLU;
	int32_t x98 = 58264129;
	int16_t x99 = INT16_MIN;
	volatile uint64_t t24 = 53416903190LLU;

	t24 = ((x97&x98)|(x99<=x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int64_t x103 = INT64_MIN;
	volatile int32_t x104 = 1922;
	volatile int32_t t25 = 3;

	t25 = ((x101&x102)|(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int64_t x106 = 21997153751356881LL;
	int64_t x107 = INT64_MIN;
	volatile int64_t x108 = -1LL;
	int64_t t26 = -23LL;

	t26 = ((x105&x106)|(x107<=x108));

	if (t26 != 21997153751356881LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	int32_t x110 = 112446;
	volatile int32_t x111 = -15893;
	int64_t x112 = -1LL;

	t27 = ((x109&x110)|(x111<=x112));

	if (t27 != 112447) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	uint32_t x114 = UINT32_MAX;
	volatile uint64_t x115 = 27966LLU;

	t28 = ((x113&x114)|(x115<=x116));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = 27U;
	int16_t x119 = INT16_MAX;
	int32_t x120 = -1013490466;
	uint32_t t29 = 175U;

	t29 = ((x117&x118)|(x119<=x120));

	if (t29 != 27U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = 5;
	int64_t x122 = INT64_MIN;
	int64_t x123 = -4612LL;
	volatile int64_t x124 = -1LL;
	static volatile int64_t t30 = -2198LL;

	t30 = ((x121&x122)|(x123<=x124));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint32_t x126 = 456081862U;

	t31 = ((x125&x126)|(x127<=x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -1;
	volatile int32_t x131 = -1;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = 1;

	t32 = ((x129&x130)|(x131<=x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 2U;
	uint16_t x134 = 926U;
	int16_t x135 = INT16_MAX;
	uint64_t x136 = 9098LLU;

	t33 = ((x133&x134)|(x135<=x136));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 381118814514LLU;
	int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	static int32_t x140 = -1;
	uint64_t t34 = 1854364888LLU;

	t34 = ((x137&x138)|(x139<=x140));

	if (t34 != 380104605697LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	int64_t x142 = -1LL;
	static uint32_t x144 = 11350U;
	static int64_t t35 = -241361530LL;

	t35 = ((x141&x142)|(x143<=x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = INT64_MIN;
	static volatile uint32_t t36 = 53U;

	t36 = ((x145&x146)|(x147<=x148));

	if (t36 != 4679U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 290889580U;
	uint16_t x150 = 21U;
	uint16_t x152 = 1U;
	uint32_t t37 = 304504771U;

	t37 = ((x149&x150)|(x151<=x152));

	if (t37 != 4U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 111U;
	int64_t x154 = -1LL;
	int64_t x155 = INT64_MIN;

	t38 = ((x153&x154)|(x155<=x156));

	if (t38 != 111LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	volatile int32_t x158 = -454029;
	int64_t x159 = INT64_MAX;
	int16_t x160 = -1;
	int64_t t39 = -5170991LL;

	t39 = ((x157&x158)|(x159<=x160));

	if (t39 != -454029LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static int16_t x162 = INT16_MAX;
	int8_t x164 = 3;
	volatile int32_t t40 = 569980;

	t40 = ((x161&x162)|(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	int32_t x166 = INT32_MIN;
	static int16_t x168 = INT16_MAX;
	int32_t t41 = 101;

	t41 = ((x165&x166)|(x167<=x168));

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x171 = -1;
	int8_t x172 = 12;
	int32_t t42 = 884370;

	t42 = ((x169&x170)|(x171<=x172));

	if (t42 != -15231) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 1U;
	uint64_t x174 = 2802200687252LLU;
	volatile int8_t x175 = INT8_MIN;
	int16_t x176 = -192;
	volatile uint64_t t43 = 758731032LLU;

	t43 = ((x173&x174)|(x175<=x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x178 = 1;
	static int16_t x179 = 0;
	int16_t x180 = INT16_MIN;
	static volatile uint32_t t44 = 408282052U;

	t44 = ((x177&x178)|(x179<=x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = INT32_MIN;
	volatile uint32_t x183 = 782U;
	int64_t x184 = INT64_MAX;
	int64_t t45 = 555973510350982964LL;

	t45 = ((x181&x182)|(x183<=x184));

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MAX;
	static uint32_t x188 = 0U;
	int32_t t46 = -264689809;

	t46 = ((x185&x186)|(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -9353792787LL;
	int64_t x190 = 346775896195LL;
	int8_t x191 = INT8_MIN;
	volatile int32_t x192 = -1;
	volatile int64_t t47 = 0LL;

	t47 = ((x189&x190)|(x191<=x192));

	if (t47 != 346020659329LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;
	int64_t t48 = 1LL;

	t48 = ((x193&x194)|(x195<=x196));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x197 = 45568407LL;
	volatile uint64_t x199 = UINT64_MAX;
	int64_t x200 = -1LL;

	t49 = ((x197&x198)|(x199<=x200));

	if (t49 != 4357LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	int64_t x202 = INT64_MAX;
	int8_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	volatile int64_t t50 = -534007332797581750LL;

	t50 = ((x201&x202)|(x203<=x204));

	if (t50 != 4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 16834352449558776LLU;
	static volatile uint64_t x206 = 72718452LLU;
	int32_t x207 = INT32_MAX;
	uint8_t x208 = UINT8_MAX;
	static volatile uint64_t t51 = 2761897087542995651LLU;

	t51 = ((x205&x206)|(x207<=x208));

	if (t51 != 71669872LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	int64_t x210 = 1209662181867221773LL;
	uint8_t x211 = UINT8_MAX;

	t52 = ((x209&x210)|(x211<=x212));

	if (t52 != 1751872269LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MAX;
	volatile int16_t x215 = -15;
	int16_t x216 = -1;
	volatile int32_t t53 = -2534;

	t53 = ((x213&x214)|(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	volatile int64_t x219 = -100305LL;
	int64_t x220 = INT64_MIN;
	int32_t t54 = -13577658;

	t54 = ((x217&x218)|(x219<=x220));

	if (t54 != -12800) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x222 = 4818279086LL;
	uint64_t x223 = 327978072LLU;
	volatile int64_t t55 = -424713497648219LL;

	t55 = ((x221&x222)|(x223<=x224));

	if (t55 != 4818279087LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 2242U;
	uint64_t x226 = 453376382603310728LLU;
	int16_t x228 = 384;
	volatile uint64_t t56 = 195LLU;

	t56 = ((x225&x226)|(x227<=x228));

	if (t56 != 129LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 1190U;
	static volatile int32_t x231 = INT32_MAX;
	int32_t x232 = INT32_MAX;
	volatile int32_t t57 = -1219;

	t57 = ((x229&x230)|(x231<=x232));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MAX;
	uint64_t x235 = UINT64_MAX;
	volatile int32_t t58 = -85197;

	t58 = ((x233&x234)|(x235<=x236));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x238 = INT64_MIN;
	static volatile int64_t x239 = INT64_MAX;
	int64_t x240 = INT64_MAX;
	static volatile int64_t t59 = 29711487311331391LL;

	t59 = ((x237&x238)|(x239<=x240));

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int32_t x242 = -1;
	uint8_t x243 = 1U;
	uint8_t x244 = 63U;
	static volatile int64_t t60 = -2248955437004929LL;

	t60 = ((x241&x242)|(x243<=x244));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 2266463U;
	uint8_t x246 = 1U;
	volatile int8_t x247 = -15;
	static volatile int16_t x248 = INT16_MIN;
	volatile uint32_t t61 = 2U;

	t61 = ((x245&x246)|(x247<=x248));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -56;
	int64_t x250 = INT64_MAX;
	uint8_t x251 = 6U;
	volatile int16_t x252 = INT16_MIN;

	t62 = ((x249&x250)|(x251<=x252));

	if (t62 != 9223372036854775752LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = UINT16_MAX;
	volatile int8_t x255 = 0;
	static volatile int32_t x256 = -153630;

	t63 = ((x253&x254)|(x255<=x256));

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	uint32_t x258 = UINT32_MAX;
	static int64_t x260 = 501172LL;
	volatile int64_t t64 = -421212239252LL;

	t64 = ((x257&x258)|(x259<=x260));

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 1686U;
	uint16_t x262 = 156U;
	int8_t x263 = 62;
	uint64_t x264 = 165910143735870LLU;
	volatile uint32_t t65 = 148871U;

	t65 = ((x261&x262)|(x263<=x264));

	if (t65 != 149U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	int32_t x266 = INT32_MAX;
	int32_t x268 = -1;

	t66 = ((x265&x266)|(x267<=x268));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x271 = UINT32_MAX;
	int8_t x272 = 1;
	static volatile int64_t t67 = 8LL;

	t67 = ((x269&x270)|(x271<=x272));

	if (t67 != 376LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -1;
	uint32_t x274 = UINT32_MAX;
	int16_t x276 = -4;

	t68 = ((x273&x274)|(x275<=x276));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MAX;
	int16_t x279 = INT16_MIN;
	static volatile uint8_t x280 = 12U;
	int64_t t69 = -44599229440384LL;

	t69 = ((x277&x278)|(x279<=x280));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MIN;
	uint8_t x283 = 0U;
	int64_t x284 = -2647814986LL;
	volatile int64_t t70 = -225701LL;

	t70 = ((x281&x282)|(x283<=x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -1;
	int16_t x286 = INT16_MIN;
	uint32_t x287 = 1628509U;
	int8_t x288 = INT8_MIN;
	int32_t t71 = -949;

	t71 = ((x285&x286)|(x287<=x288));

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = -188757844;
	volatile int16_t x291 = -1;
	int64_t x292 = -1LL;
	volatile int64_t t72 = -92034270LL;

	t72 = ((x289&x290)|(x291<=x292));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -24;
	int32_t x295 = -1;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -6;

	t73 = ((x293&x294)|(x295<=x296));

	if (t73 != -24) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MAX;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MAX;

	t74 = ((x297&x298)|(x299<=x300));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static uint32_t x303 = UINT32_MAX;
	int8_t x304 = -1;
	static int32_t t75 = -164;

	t75 = ((x301&x302)|(x303<=x304));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = UINT64_MAX;
	uint16_t x308 = 3U;

	t76 = ((x305&x306)|(x307<=x308));

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	volatile int16_t x311 = INT16_MAX;

	t77 = ((x309&x310)|(x311<=x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 192LLU;
	static int32_t x314 = 1;
	uint64_t x315 = 4049246338LLU;
	int64_t x316 = -1LL;
	uint64_t t78 = 195432269733257LLU;

	t78 = ((x313&x314)|(x315<=x316));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	uint64_t x318 = 195LLU;
	volatile int8_t x320 = INT8_MIN;
	uint64_t t79 = 4286935676518226LLU;

	t79 = ((x317&x318)|(x319<=x320));

	if (t79 != 195LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x321 = 2LL;
	int32_t x323 = -1;
	volatile int64_t t80 = 65507672254896LL;

	t80 = ((x321&x322)|(x323<=x324));

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	volatile int16_t x326 = INT16_MIN;
	uint16_t x327 = 1634U;
	volatile int32_t t81 = 1060;

	t81 = ((x325&x326)|(x327<=x328));

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = 4;
	static uint16_t x331 = 9466U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -10818;

	t82 = ((x329&x330)|(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = 112022335245008291LLU;
	static volatile uint64_t x335 = 18488918826860LLU;
	volatile uint32_t x336 = UINT32_MAX;
	uint64_t t83 = 802LLU;

	t83 = ((x333&x334)|(x335<=x336));

	if (t83 != 35LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -17;
	static volatile int32_t x338 = -1;
	int8_t x339 = 35;
	int64_t x340 = -172065352934199210LL;

	t84 = ((x337&x338)|(x339<=x340));

	if (t84 != -17) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MIN;
	uint64_t x343 = 2920378467220843375LLU;

	t85 = ((x341&x342)|(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	static int32_t x347 = INT32_MIN;
	int8_t x348 = -3;

	t86 = ((x345&x346)|(x347<=x348));

	if (t86 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MAX;
	int16_t x350 = INT16_MAX;
	uint32_t x351 = 5428U;
	int64_t x352 = INT64_MIN;
	int32_t t87 = -32197689;

	t87 = ((x349&x350)|(x351<=x352));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 1;
	volatile uint64_t x354 = 31333922737501LLU;
	int16_t x355 = INT16_MAX;
	volatile uint8_t x356 = UINT8_MAX;
	uint64_t t88 = 21077037411LLU;

	t88 = ((x353&x354)|(x355<=x356));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint64_t x358 = 1015LLU;
	int16_t x359 = -1;

	t89 = ((x357&x358)|(x359<=x360));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	volatile uint16_t x363 = 11666U;
	static uint16_t x364 = 9317U;
	volatile int32_t t90 = INT32_MIN;

	t90 = ((x361&x362)|(x363<=x364));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x365 = -1;
	uint64_t x366 = 568LLU;
	int64_t x367 = 3838093LL;
	int64_t x368 = INT64_MIN;

	t91 = ((x365&x366)|(x367<=x368));

	if (t91 != 568LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x370 = 0;
	uint8_t x372 = 52U;
	static volatile int32_t t92 = 468628;

	t92 = ((x369&x370)|(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x374 = UINT16_MAX;
	int8_t x375 = INT8_MAX;
	volatile int64_t x376 = -1544084380997LL;
	volatile uint64_t t93 = 94611LLU;

	t93 = ((x373&x374)|(x375<=x376));

	if (t93 != 65535LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 22227872LLU;
	static uint64_t x378 = UINT64_MAX;
	int64_t x379 = -1LL;
	int64_t x380 = INT64_MAX;
	static volatile uint64_t t94 = 7192983LLU;

	t94 = ((x377&x378)|(x379<=x380));

	if (t94 != 22227873LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -234;
	int32_t x382 = -1;
	uint64_t x384 = 7LLU;
	int32_t t95 = -1;

	t95 = ((x381&x382)|(x383<=x384));

	if (t95 != -234) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int8_t x387 = 13;
	int8_t x388 = INT8_MIN;

	t96 = ((x385&x386)|(x387<=x388));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x389 = -7;
	int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	int64_t x392 = 1954418007071LL;
	int32_t t97 = 3068973;

	t97 = ((x389&x390)|(x391<=x392));

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = -1;
	volatile uint32_t x395 = 1298006033U;
	uint32_t x396 = 818U;
	int64_t t98 = INT64_MIN;

	t98 = ((x393&x394)|(x395<=x396));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	volatile int32_t x398 = -1;
	uint16_t x399 = 0U;
	static volatile int32_t t99 = -4703;

	t99 = ((x397&x398)|(x399<=x400));

	if (t99 != -32767) { NG(); } else { ; }
	
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

