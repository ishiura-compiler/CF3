#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 300U;
static uint8_t x10 = 3U;
volatile int8_t x12 = 20;
static uint16_t x22 = 29U;
uint8_t x41 = 127U;
volatile int16_t x43 = -217;
static uint32_t x45 = UINT32_MAX;
static volatile uint32_t t8 = 15050U;
int8_t x54 = INT8_MIN;
uint64_t x71 = UINT64_MAX;
uint8_t x73 = 72U;
volatile uint16_t x80 = 6U;
uint16_t x86 = 76U;
static volatile int16_t x95 = INT16_MAX;
int64_t x115 = INT64_MIN;
uint32_t x122 = 0U;
static volatile int8_t x126 = -1;
int32_t x128 = INT32_MAX;
int64_t x135 = -28245173087LL;
volatile int64_t t28 = -922723390318575312LL;
uint16_t x151 = UINT16_MAX;
volatile int64_t t30 = 7168312357784368LL;
volatile int32_t x155 = INT32_MIN;
static volatile int64_t t31 = 1600325870LL;
static uint16_t x159 = 308U;
int32_t x162 = 1148;
volatile int32_t t33 = 26389;
int64_t x175 = -1LL;
int8_t x186 = INT8_MIN;
int32_t t37 = 5;
int64_t x192 = -23727698847919631LL;
static int64_t x197 = INT64_MIN;
int64_t x204 = 31711918LL;
uint16_t x218 = 3244U;
volatile int16_t x220 = INT16_MIN;
static volatile int32_t t46 = 6702087;
int16_t x240 = INT16_MIN;
static uint32_t x241 = 130209U;
static uint32_t t50 = 15696052U;
int64_t x245 = INT64_MIN;
uint16_t x246 = 19270U;
volatile uint16_t x277 = UINT16_MAX;
int8_t x278 = 3;
int64_t x285 = INT64_MIN;
int64_t x295 = INT64_MAX;
uint32_t t57 = 1439U;
int64_t x299 = INT64_MIN;
static int32_t t59 = -46101367;
volatile uint16_t x306 = UINT16_MAX;
int64_t t60 = 8479001167LL;
int8_t x312 = -1;
volatile int32_t t63 = -86908334;
int16_t x346 = INT16_MIN;
static int32_t t65 = 20616;
static volatile int64_t x349 = INT64_MAX;
static volatile int64_t x352 = INT64_MIN;
int16_t x357 = INT16_MAX;
uint16_t x382 = UINT16_MAX;
volatile int8_t x412 = 1;
static volatile int32_t t77 = INT32_MAX;
int8_t x418 = INT8_MAX;
int8_t x422 = -50;
static int32_t t79 = -1732039;
uint16_t x429 = 0U;
static volatile int32_t x430 = -1951072;
volatile int64_t x436 = 14690812605227860LL;
static int32_t t82 = -120085404;
int16_t x442 = 5;
int32_t x454 = INT32_MIN;
int32_t t86 = -710999;
int64_t x465 = INT64_MAX;
int8_t x469 = -6;
volatile uint32_t x473 = 6453U;
int8_t x475 = INT8_MIN;
int8_t x478 = -50;
volatile int32_t x483 = INT32_MAX;
int64_t t92 = -1775756518074230855LL;
int8_t x485 = INT8_MIN;
int64_t x491 = -57118LL;
int32_t x498 = -2523622;
volatile int32_t t95 = 7474797;
int32_t t96 = 40836;
uint16_t x514 = 102U;
int16_t x515 = INT16_MAX;


void f0(void) {
	int16_t x5 = 0;
	static uint32_t x6 = 3159323U;
	int8_t x7 = 18;
	volatile int32_t x8 = -15806;

	t0 = ((x5&x6)>>(x7==x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	volatile int32_t t1 = -1;

	t1 = ((x9&x10)>>(x11==x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 29499U;
	int32_t x14 = INT32_MIN;
	static uint8_t x15 = UINT8_MAX;
	static uint16_t x16 = 23975U;
	volatile uint32_t t2 = 62485768U;

	t2 = ((x13&x14)>>(x15==x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = 3014LLU;
	static int64_t x18 = INT64_MIN;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = 6;
	uint64_t t3 = 17587578255582690LLU;

	t3 = ((x17&x18)>>(x19==x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = 1U;
	uint32_t x23 = 2U;
	int64_t x24 = INT64_MAX;
	uint32_t t4 = 83666U;

	t4 = ((x21&x22)>>(x23==x24));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MAX;
	volatile int32_t x27 = -13295;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t5 = -30;

	t5 = ((x25&x26)>>(x27==x28));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = 2;
	static int32_t x31 = INT32_MIN;
	static uint8_t x32 = 12U;
	static volatile uint64_t t6 = 2LLU;

	t6 = ((x29&x30)>>(x31==x32));

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x42 = 642U;
	uint16_t x44 = 117U;
	static int32_t t7 = 58;

	t7 = ((x41&x42)>>(x43==x44));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x46 = 54U;
	volatile int16_t x47 = 1;
	uint32_t x48 = UINT32_MAX;

	t8 = ((x45&x46)>>(x47==x48));

	if (t8 != 54U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MAX;
	int32_t x55 = INT32_MAX;
	uint16_t x56 = 2U;
	int64_t t9 = 26546489017LL;

	t9 = ((x53&x54)>>(x55==x56));

	if (t9 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x57 = 97224U;
	int16_t x58 = INT16_MIN;
	int32_t x59 = 334031002;
	static int64_t x60 = INT64_MIN;
	volatile uint32_t t10 = 373U;

	t10 = ((x57&x58)>>(x59==x60));

	if (t10 != 65536U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x61 = 80218860U;
	static volatile int32_t x62 = -1;
	static int16_t x63 = -1;
	volatile uint16_t x64 = UINT16_MAX;
	static volatile uint32_t t11 = 178U;

	t11 = ((x61&x62)>>(x63==x64));

	if (t11 != 80218860U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	uint8_t x66 = 0U;
	int64_t x67 = -176LL;
	volatile int64_t x68 = INT64_MIN;
	volatile int32_t t12 = -629;

	t12 = ((x65&x66)>>(x67==x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x69 = 26992304U;
	static int8_t x70 = 15;
	int64_t x72 = INT64_MIN;
	static volatile uint32_t t13 = 162398056U;

	t13 = ((x69&x70)>>(x71==x72));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x74 = 39U;
	int64_t x75 = 984115LL;
	int8_t x76 = INT8_MIN;
	int32_t t14 = 54962354;

	t14 = ((x73&x74)>>(x75==x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MIN;
	static int32_t x79 = 4;
	volatile int32_t t15 = -221572138;

	t15 = ((x77&x78)>>(x79==x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = 9;
	volatile int32_t x82 = 130711;
	uint8_t x83 = 89U;
	int64_t x84 = INT64_MIN;
	int32_t t16 = 3313;

	t16 = ((x81&x82)>>(x83==x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = 3U;
	volatile int8_t x87 = INT8_MAX;
	volatile uint32_t x88 = 463U;
	static int32_t t17 = 2;

	t17 = ((x85&x86)>>(x87==x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -84;
	volatile uint8_t x94 = 44U;
	static volatile uint16_t x96 = 167U;
	volatile int32_t t18 = 29;

	t18 = ((x93&x94)>>(x95==x96));

	if (t18 != 44) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x97 = 1U;
	volatile uint32_t x98 = 120U;
	uint8_t x99 = 4U;
	uint8_t x100 = 1U;
	static volatile uint32_t t19 = 2U;

	t19 = ((x97&x98)>>(x99==x100));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = INT64_MAX;
	int16_t x104 = -1354;
	volatile int32_t t20 = 1;

	t20 = ((x101&x102)>>(x103==x104));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x109 = UINT32_MAX;
	volatile uint64_t x110 = 386501915LLU;
	int8_t x111 = -1;
	static int16_t x112 = 405;
	volatile uint64_t t21 = 27781564630LLU;

	t21 = ((x109&x110)>>(x111==x112));

	if (t21 != 386501915LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = 27196072LLU;
	uint16_t x114 = 1U;
	volatile uint32_t x116 = 215623U;
	uint64_t t22 = 4156928771LLU;

	t22 = ((x113&x114)>>(x115==x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MIN;
	volatile uint64_t x118 = UINT64_MAX;
	int8_t x119 = INT8_MAX;
	int32_t x120 = INT32_MAX;
	uint64_t t23 = 33199071036437145LLU;

	t23 = ((x117&x118)>>(x119==x120));

	if (t23 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 20653LLU;
	int64_t x123 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t24 = 0LLU;

	t24 = ((x121&x122)>>(x123==x124));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = 8772856558269LL;
	volatile int64_t x127 = -177LL;
	volatile int64_t t25 = 7763800795LL;

	t25 = ((x125&x126)>>(x127==x128));

	if (t25 != 8772856558269LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x129 = UINT32_MAX;
	uint16_t x130 = UINT16_MAX;
	volatile int64_t x131 = -5948570LL;
	static uint8_t x132 = 11U;
	static uint32_t t26 = 25U;

	t26 = ((x129&x130)>>(x131==x132));

	if (t26 != 65535U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	static uint16_t x134 = 17167U;
	uint8_t x136 = 3U;
	volatile int32_t t27 = 5;

	t27 = ((x133&x134)>>(x135==x136));

	if (t27 != 17152) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = UINT32_MAX;
	static int64_t x142 = 154773009518667610LL;
	int16_t x143 = INT16_MAX;
	uint8_t x144 = 3U;

	t28 = ((x141&x142)>>(x143==x144));

	if (t28 != 1831708506LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = 12U;
	static int64_t x146 = INT64_MIN;
	static int64_t x147 = -1LL;
	int64_t x148 = INT64_MAX;
	int64_t t29 = -147255113935815LL;

	t29 = ((x145&x146)>>(x147==x148));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = 12592890U;
	int64_t x150 = INT64_MIN;
	volatile int64_t x152 = 0LL;

	t30 = ((x149&x150)>>(x151==x152));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x153 = 3670U;
	int64_t x154 = -124534413226LL;
	uint8_t x156 = 55U;

	t31 = ((x153&x154)>>(x155==x156));

	if (t31 != 2134LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = 11;
	int64_t x158 = -1LL;
	int32_t x160 = INT32_MIN;
	int64_t t32 = 1514LL;

	t32 = ((x157&x158)>>(x159==x160));

	if (t32 != 11LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x161 = INT16_MAX;
	int32_t x163 = INT32_MAX;
	int16_t x164 = 1498;

	t33 = ((x161&x162)>>(x163==x164));

	if (t33 != 1148) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 88LLU;
	int8_t x166 = 24;
	static uint16_t x167 = 1693U;
	static volatile int8_t x168 = 20;
	uint64_t t34 = 232415216158150LLU;

	t34 = ((x165&x166)>>(x167==x168));

	if (t34 != 24LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x173 = 78U;
	static int16_t x174 = INT16_MIN;
	int64_t x176 = INT64_MAX;
	uint32_t t35 = 236U;

	t35 = ((x173&x174)>>(x175==x176));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x181 = 0U;
	uint8_t x182 = UINT8_MAX;
	int64_t x183 = 0LL;
	uint16_t x184 = 8U;
	int32_t t36 = -1615;

	t36 = ((x181&x182)>>(x183==x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = INT32_MAX;
	volatile uint64_t x187 = 20208463405695LLU;
	uint8_t x188 = UINT8_MAX;

	t37 = ((x185&x186)>>(x187==x188));

	if (t37 != 2147483520) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x189 = 5U;
	uint16_t x190 = 19U;
	volatile int8_t x191 = -1;
	volatile int32_t t38 = 3;

	t38 = ((x189&x190)>>(x191==x192));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x198 = 1341047;
	uint64_t x199 = UINT64_MAX;
	static int16_t x200 = INT16_MIN;
	static int64_t t39 = -291578535LL;

	t39 = ((x197&x198)>>(x199==x200));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int16_t x202 = INT16_MAX;
	int32_t x203 = 125233165;
	volatile int32_t t40 = 7;

	t40 = ((x201&x202)>>(x203==x204));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x205 = INT32_MAX;
	int16_t x206 = 0;
	uint8_t x207 = 4U;
	static volatile int16_t x208 = 2;
	int32_t t41 = 1;

	t41 = ((x205&x206)>>(x207==x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x209 = INT32_MIN;
	volatile uint32_t x210 = UINT32_MAX;
	volatile uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MIN;
	volatile uint32_t t42 = 750142U;

	t42 = ((x209&x210)>>(x211==x212));

	if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x213 = 20946121U;
	uint64_t x214 = 2278751156012367975LLU;
	uint32_t x215 = 0U;
	volatile int64_t x216 = -50884732667635LL;
	uint64_t t43 = 79LLU;

	t43 = ((x213&x214)>>(x215==x216));

	if (t43 != 18907201LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = INT16_MIN;
	uint8_t x219 = 3U;
	int32_t t44 = 40436384;

	t44 = ((x217&x218)>>(x219==x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x221 = INT8_MAX;
	static int64_t x222 = -1LL;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	volatile int64_t t45 = -3LL;

	t45 = ((x221&x222)>>(x223==x224));

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = 1;
	static volatile int16_t x227 = INT16_MIN;
	uint64_t x228 = 1511196727818152208LLU;

	t46 = ((x225&x226)>>(x227==x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = -1049977903574245895LL;
	int64_t x230 = 1105186707654966LL;
	uint64_t x231 = 15079240668797109LLU;
	int32_t x232 = 1009486;
	int64_t t47 = 6798LL;

	t47 = ((x229&x230)>>(x231==x232));

	if (t47 != 466365820602672LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = 14;
	int8_t x234 = -38;
	uint64_t x235 = UINT64_MAX;
	uint16_t x236 = 228U;
	volatile int32_t t48 = -827432;

	t48 = ((x233&x234)>>(x235==x236));

	if (t48 != 10) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = INT16_MIN;
	uint64_t x238 = 45LLU;
	volatile uint16_t x239 = 6470U;
	volatile uint64_t t49 = 6015810LLU;

	t49 = ((x237&x238)>>(x239==x240));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x242 = 985150U;
	int64_t x243 = -39323158LL;
	volatile int32_t x244 = 13747;

	t50 = ((x241&x242)>>(x243==x244));

	if (t50 != 67616U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x247 = UINT64_MAX;
	volatile uint8_t x248 = UINT8_MAX;
	volatile int64_t t51 = 31077582LL;

	t51 = ((x245&x246)>>(x247==x248));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x257 = INT8_MAX;
	static int64_t x258 = INT64_MAX;
	int32_t x259 = -1;
	uint64_t x260 = 37951277LLU;
	volatile int64_t t52 = -15992394LL;

	t52 = ((x257&x258)>>(x259==x260));

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x273 = 6U;
	uint32_t x274 = 199977717U;
	uint8_t x275 = 67U;
	int16_t x276 = 169;
	uint32_t t53 = 559U;

	t53 = ((x273&x274)>>(x275==x276));

	if (t53 != 4U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x279 = -29;
	volatile int8_t x280 = INT8_MIN;
	static int32_t t54 = -253147719;

	t54 = ((x277&x278)>>(x279==x280));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x286 = 0U;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = 18U;
	int64_t t55 = 60935386330LL;

	t55 = ((x285&x286)>>(x287==x288));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x289 = 3LL;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = 2;
	uint16_t x292 = UINT16_MAX;
	int64_t t56 = -1603910308244LL;

	t56 = ((x289&x290)>>(x291==x292));

	if (t56 != 3LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x293 = 1U;
	static uint16_t x294 = 2019U;
	volatile uint8_t x296 = UINT8_MAX;

	t57 = ((x293&x294)>>(x295==x296));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = INT64_MAX;
	uint32_t x298 = 877867363U;
	static uint64_t x300 = 8126248LLU;
	int64_t t58 = 80519697LL;

	t58 = ((x297&x298)>>(x299==x300));

	if (t58 != 877867363LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x301 = INT32_MIN;
	volatile uint8_t x302 = 1U;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = 4U;

	t59 = ((x301&x302)>>(x303==x304));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x305 = -1LL;
	int16_t x307 = -1;
	static int8_t x308 = INT8_MIN;

	t60 = ((x305&x306)>>(x307==x308));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x309 = 22U;
	uint64_t x310 = UINT64_MAX;
	int64_t x311 = -1LL;
	volatile uint64_t t61 = 15885672384LLU;

	t61 = ((x309&x310)>>(x311==x312));

	if (t61 != 11LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x313 = -94295510485LL;
	int32_t x314 = 2571809;
	volatile uint32_t x315 = 143U;
	static uint32_t x316 = 42501475U;
	int64_t t62 = 1825844LL;

	t62 = ((x313&x314)>>(x315==x316));

	if (t62 != 274977LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x317 = INT16_MAX;
	volatile int8_t x318 = INT8_MIN;
	static int8_t x319 = INT8_MAX;
	int16_t x320 = INT16_MAX;

	t63 = ((x317&x318)>>(x319==x320));

	if (t63 != 32640) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x329 = 11;
	int32_t x330 = -1;
	volatile int8_t x331 = 44;
	int16_t x332 = -1;
	volatile int32_t t64 = -15531638;

	t64 = ((x329&x330)>>(x331==x332));

	if (t64 != 11) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x345 = 8U;
	int8_t x347 = -4;
	volatile int8_t x348 = INT8_MIN;

	t65 = ((x345&x346)>>(x347==x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x350 = INT32_MAX;
	volatile int16_t x351 = -1;
	int64_t t66 = 14588337LL;

	t66 = ((x349&x350)>>(x351==x352));

	if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x353 = INT64_MIN;
	volatile int64_t x354 = INT64_MAX;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 2254230618LLU;
	static volatile int64_t t67 = 3846LL;

	t67 = ((x353&x354)>>(x355==x356));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x358 = INT32_MIN;
	static int32_t x359 = 40412;
	int64_t x360 = 3820551802LL;
	static int32_t t68 = -16515;

	t68 = ((x357&x358)>>(x359==x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x361 = INT64_MAX;
	volatile int64_t x362 = INT64_MIN;
	volatile uint32_t x363 = 1345955U;
	int8_t x364 = -52;
	volatile int64_t t69 = -9LL;

	t69 = ((x361&x362)>>(x363==x364));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x365 = INT16_MAX;
	int32_t x366 = INT32_MIN;
	uint16_t x367 = 13021U;
	int8_t x368 = INT8_MIN;
	int32_t t70 = 21958;

	t70 = ((x365&x366)>>(x367==x368));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x369 = 10U;
	uint8_t x370 = UINT8_MAX;
	volatile uint32_t x371 = UINT32_MAX;
	int16_t x372 = 0;
	int32_t t71 = -1025335031;

	t71 = ((x369&x370)>>(x371==x372));

	if (t71 != 10) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x373 = 8U;
	int64_t x374 = INT64_MIN;
	uint16_t x375 = UINT16_MAX;
	int32_t x376 = INT32_MIN;
	static int64_t t72 = -553593206207LL;

	t72 = ((x373&x374)>>(x375==x376));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x377 = 124;
	int16_t x378 = -6712;
	uint64_t x379 = 0LLU;
	uint64_t x380 = UINT64_MAX;
	int32_t t73 = -1605;

	t73 = ((x377&x378)>>(x379==x380));

	if (t73 != 72) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = INT32_MAX;
	uint32_t x383 = 23U;
	uint16_t x384 = UINT16_MAX;
	static int32_t t74 = -11344;

	t74 = ((x381&x382)>>(x383==x384));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x385 = INT8_MIN;
	volatile uint32_t x386 = UINT32_MAX;
	uint64_t x387 = 107567LLU;
	volatile uint16_t x388 = 15U;
	volatile uint32_t t75 = 3U;

	t75 = ((x385&x386)>>(x387==x388));

	if (t75 != 4294967168U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x401 = INT16_MAX;
	volatile int8_t x402 = INT8_MAX;
	uint16_t x403 = 7356U;
	volatile uint64_t x404 = 6131415526LLU;
	volatile int32_t t76 = 641433;

	t76 = ((x401&x402)>>(x403==x404));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x409 = INT32_MAX;
	static int32_t x410 = -1;
	int16_t x411 = -1;

	t77 = ((x409&x410)>>(x411==x412));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x417 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = UINT64_MAX;
	volatile int32_t t78 = -1120;

	t78 = ((x417&x418)>>(x419==x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x421 = 53;
	int8_t x423 = -1;
	int64_t x424 = 2340098712573197LL;

	t79 = ((x421&x422)>>(x423==x424));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x425 = 1LL;
	int32_t x426 = -1;
	int16_t x427 = -191;
	int64_t x428 = 258806118LL;
	volatile int64_t t80 = 27223LL;

	t80 = ((x425&x426)>>(x427==x428));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x431 = 681052616LLU;
	uint32_t x432 = 20975079U;
	int32_t t81 = -18;

	t81 = ((x429&x430)>>(x431==x432));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x433 = INT32_MAX;
	int16_t x434 = -193;
	static uint64_t x435 = 596043215871494179LLU;

	t82 = ((x433&x434)>>(x435==x436));

	if (t82 != 2147483455) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x437 = -1;
	volatile uint8_t x438 = 3U;
	volatile int64_t x439 = -471248LL;
	static uint16_t x440 = 13607U;
	volatile int32_t t83 = -10141;

	t83 = ((x437&x438)>>(x439==x440));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x441 = 1;
	int8_t x443 = 0;
	static int32_t x444 = 138;
	volatile int32_t t84 = 1435656;

	t84 = ((x441&x442)>>(x443==x444));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x449 = 60U;
	static uint32_t x450 = UINT32_MAX;
	int32_t x451 = -1;
	uint16_t x452 = 937U;
	uint32_t t85 = 114539U;

	t85 = ((x449&x450)>>(x451==x452));

	if (t85 != 60U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x453 = INT16_MAX;
	volatile uint32_t x455 = UINT32_MAX;
	volatile int16_t x456 = -1;

	t86 = ((x453&x454)>>(x455==x456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x461 = INT16_MAX;
	uint8_t x462 = 2U;
	uint16_t x463 = 65U;
	int64_t x464 = INT64_MIN;
	int32_t t87 = -1;

	t87 = ((x461&x462)>>(x463==x464));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x466 = 9U;
	int32_t x467 = -1;
	int8_t x468 = 0;
	volatile int64_t t88 = -487721041113258699LL;

	t88 = ((x465&x466)>>(x467==x468));

	if (t88 != 9LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x470 = 3295U;
	int16_t x471 = 15;
	int64_t x472 = -1LL;
	int32_t t89 = -11;

	t89 = ((x469&x470)>>(x471==x472));

	if (t89 != 3290) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x474 = 0;
	int8_t x476 = 1;
	uint32_t t90 = 9564U;

	t90 = ((x473&x474)>>(x475==x476));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x477 = 1;
	int8_t x479 = -1;
	static uint16_t x480 = 33U;
	int32_t t91 = -1;

	t91 = ((x477&x478)>>(x479==x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x481 = INT64_MIN;
	static int32_t x482 = INT32_MAX;
	volatile int64_t x484 = -532LL;

	t92 = ((x481&x482)>>(x483==x484));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x486 = 3875U;
	static int32_t x487 = INT32_MIN;
	static uint32_t x488 = UINT32_MAX;
	volatile uint32_t t93 = 4923U;

	t93 = ((x485&x486)>>(x487==x488));

	if (t93 != 3840U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x489 = INT64_MAX;
	int8_t x490 = INT8_MIN;
	int64_t x492 = INT64_MAX;
	int64_t t94 = -2916LL;

	t94 = ((x489&x490)>>(x491==x492));

	if (t94 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x497 = 478551957;
	uint16_t x499 = 28U;
	int32_t x500 = INT32_MIN;

	t95 = ((x497&x498)>>(x499==x500));

	if (t95 != 478158352) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x501 = 1120;
	static uint8_t x502 = 22U;
	int32_t x503 = INT32_MIN;
	int64_t x504 = INT64_MIN;

	t96 = ((x501&x502)>>(x503==x504));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x505 = 28;
	static uint16_t x506 = 0U;
	static int64_t x507 = INT64_MAX;
	static int8_t x508 = INT8_MIN;
	int32_t t97 = 417366779;

	t97 = ((x505&x506)>>(x507==x508));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x509 = INT64_MAX;
	int16_t x510 = -1;
	static uint64_t x511 = UINT64_MAX;
	static volatile int32_t x512 = 7609;
	int64_t t98 = INT64_MAX;

	t98 = ((x509&x510)>>(x511==x512));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x513 = INT32_MIN;
	static int32_t x516 = INT32_MIN;
	static volatile int32_t t99 = -510;

	t99 = ((x513&x514)>>(x515==x516));

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

