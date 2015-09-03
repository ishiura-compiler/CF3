#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MAX;
int8_t x8 = INT8_MIN;
volatile int64_t x9 = -1LL;
volatile int64_t t2 = -4721557756430682LL;
uint32_t x16 = 153170U;
int64_t t3 = -16508211098920LL;
volatile int16_t x17 = INT16_MAX;
volatile uint32_t x19 = 200035974U;
int32_t x23 = -1;
int64_t x25 = -347773933850049LL;
int16_t x26 = INT16_MAX;
volatile uint32_t x30 = UINT32_MAX;
int16_t x54 = -9;
int16_t x55 = -1;
static uint64_t x56 = 541651305503648854LLU;
uint16_t x57 = 7154U;
int32_t t14 = -74892;
uint32_t x65 = 427U;
uint32_t x69 = 31971U;
static volatile int16_t x72 = -1;
uint32_t t17 = 1046046895U;
static int32_t x76 = INT32_MAX;
int64_t x81 = -2894212286LL;
int16_t x84 = INT16_MIN;
volatile int32_t t22 = -1;
volatile int16_t x99 = 312;
int32_t x101 = INT32_MIN;
int16_t x112 = INT16_MAX;
volatile int8_t x115 = -1;
volatile int32_t t28 = 7773;
volatile int8_t x119 = INT8_MIN;
int32_t x128 = INT32_MAX;
int32_t x137 = INT32_MAX;
uint8_t x139 = UINT8_MAX;
int64_t x143 = 4814LL;
static uint32_t x145 = UINT32_MAX;
uint32_t t36 = 6401U;
volatile int64_t x149 = INT64_MIN;
int32_t t38 = 357626806;
volatile uint64_t x157 = UINT64_MAX;
int64_t x159 = INT64_MAX;
volatile uint32_t x162 = UINT32_MAX;
uint32_t x164 = 10U;
volatile int32_t t40 = 6163866;
static volatile int64_t x168 = INT64_MIN;
int16_t x169 = INT16_MAX;
int32_t x173 = -2314;
int16_t x186 = -1;
uint16_t x188 = UINT16_MAX;
static uint32_t x191 = UINT32_MAX;
uint32_t t47 = 8171U;
static int16_t x194 = INT16_MIN;
static int16_t x200 = 1;
int32_t t49 = 1562701;
uint32_t x206 = 2104121U;
int8_t x217 = INT8_MIN;
int16_t x223 = INT16_MAX;
int8_t x225 = INT8_MAX;
volatile uint16_t x227 = 2U;
int16_t x228 = INT16_MIN;
int32_t x231 = -1;
volatile uint32_t x234 = UINT32_MAX;
static uint16_t x237 = 36U;
volatile int32_t x239 = -1;
volatile int32_t t58 = 3829;
int64_t x241 = INT64_MIN;
volatile int16_t x244 = INT16_MAX;
static int64_t x249 = INT64_MIN;
static int64_t x250 = -19LL;
volatile int8_t x252 = INT8_MIN;
volatile int32_t x260 = INT32_MAX;
static volatile int32_t t62 = -23;
int64_t x263 = INT64_MIN;
int32_t x265 = INT32_MAX;
int64_t x266 = 608638511LL;
uint16_t x267 = UINT16_MAX;
volatile int8_t x273 = INT8_MIN;
int8_t x275 = 2;
int8_t x276 = INT8_MIN;
static int16_t x281 = 1682;
int16_t x283 = -11;
int16_t x286 = 1834;
uint64_t x287 = 1342LLU;
int16_t x289 = INT16_MIN;
static volatile int16_t x292 = -3770;
volatile uint32_t x293 = UINT32_MAX;
uint32_t x301 = 218U;
int16_t x306 = -1;
static int8_t x312 = INT8_MIN;
int64_t x314 = INT64_MIN;
static volatile uint32_t x315 = UINT32_MAX;
uint32_t x321 = UINT32_MAX;
int8_t x337 = -1;
static int32_t t83 = -1;
volatile int32_t t84 = -2412;
volatile uint64_t x349 = 10345017393824549LLU;
volatile int16_t x353 = -1008;
volatile uint32_t x360 = 12663U;
static int16_t x362 = -1;
int32_t x365 = INT32_MIN;
int64_t x368 = -1LL;
int64_t x372 = 2078888667887LL;
volatile int32_t t90 = -150772;
volatile int32_t t93 = 12132821;
volatile uint16_t x387 = 19U;
uint16_t x396 = 320U;
volatile int32_t t96 = 5035072;
volatile int8_t x404 = -1;
static int32_t t98 = 71398;
static int16_t x405 = 37;
volatile int64_t x406 = INT64_MIN;


void f0(void) {
	int16_t x1 = -1;
	volatile uint64_t x2 = 446678357LLU;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 107;

	t0 = (x1&((x2%x3)<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = 35U;
	int32_t x7 = -28;
	static volatile int64_t t1 = 7446085LL;

	t1 = (x5&((x6%x7)<x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 1U;
	int16_t x11 = -1;
	static int8_t x12 = INT8_MIN;

	t2 = (x9&((x10%x11)<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -814327LL;
	volatile int64_t x14 = -1LL;
	int16_t x15 = INT16_MAX;

	t3 = (x13&((x14%x15)<x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 224836296U;
	static uint16_t x20 = UINT16_MAX;
	int32_t t4 = 373974033;

	t4 = (x17&((x18%x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 61115LL;
	int64_t x22 = -956042205503797159LL;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 141341108LL;

	t5 = (x21&((x22%x23)<x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = 1;
	uint8_t x28 = 29U;
	volatile int64_t t6 = -106LL;

	t6 = (x25&((x26%x27)<x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 100076U;
	int64_t x31 = 663LL;
	int16_t x32 = -42;
	volatile uint32_t t7 = 667008U;

	t7 = (x29&((x30%x31)<x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint64_t x34 = 4605497380550369746LLU;
	static int16_t x35 = 7851;
	uint8_t x36 = 8U;
	volatile int32_t t8 = -3;

	t8 = (x33&((x34%x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -12;
	int64_t x38 = -41707LL;
	volatile int16_t x39 = -1;
	volatile uint32_t x40 = 3906412U;
	int32_t t9 = 8;

	t9 = (x37&((x38%x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = UINT64_MAX;
	uint8_t x43 = 28U;
	int32_t x44 = -1;
	int32_t t10 = -50327;

	t10 = (x41&((x42%x43)<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint64_t x46 = 64962LLU;
	int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MIN;
	uint32_t t11 = 2808668U;

	t11 = (x45&((x46%x47)<x48));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 48;
	int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = 44575U;
	int32_t t12 = 234107094;

	t12 = (x49&((x50%x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int32_t t13 = -1;

	t13 = (x53&((x54%x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = 7835311LLU;
	uint64_t x59 = UINT64_MAX;
	static volatile uint8_t x60 = 17U;

	t14 = (x57&((x58%x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MIN;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 385878882;

	t15 = (x61&((x62%x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = 28378U;
	static int8_t x68 = INT8_MIN;
	volatile uint32_t t16 = 9U;

	t16 = (x65&((x66%x67)<x68));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 8107282LL;
	int32_t x71 = -223;

	t17 = (x69&((x70%x71)<x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MAX;
	static uint64_t x75 = 21LLU;
	int32_t t18 = 248390962;

	t18 = (x73&((x74%x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	volatile int8_t x78 = -1;
	uint32_t x79 = 1926U;
	uint16_t x80 = 21350U;
	volatile int32_t t19 = -1033554899;

	t19 = (x77&((x78%x79)<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -61;
	int8_t x83 = -1;
	volatile int64_t t20 = 11782265LL;

	t20 = (x81&((x82%x83)<x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	uint64_t x86 = 165521535993150LLU;
	int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 4836;

	t21 = (x85&((x86%x87)<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 52U;
	int32_t x90 = -1;
	uint32_t x91 = 96717U;
	uint16_t x92 = UINT16_MAX;

	t22 = (x89&((x90%x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	static int32_t x94 = INT32_MIN;
	static int8_t x95 = INT8_MIN;
	static int32_t x96 = -1;
	static int64_t t23 = 1919697LL;

	t23 = (x93&((x94%x95)<x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -246957525LL;
	uint16_t x98 = UINT16_MAX;
	int32_t x100 = -613272;
	volatile int64_t t24 = 918845826569LL;

	t24 = (x97&((x98%x99)<x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = -1;
	int32_t x103 = -1;
	int32_t x104 = -3;
	volatile int32_t t25 = 25211144;

	t25 = (x101&((x102%x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 241145236549477LLU;
	int16_t x106 = -1;
	static int32_t x107 = INT32_MIN;
	static uint8_t x108 = 5U;
	volatile uint64_t t26 = 979395994950LLU;

	t26 = (x105&((x106%x107)<x108));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 3U;
	uint32_t x110 = UINT32_MAX;
	static volatile uint8_t x111 = 17U;
	volatile int32_t t27 = -3401;

	t27 = (x109&((x110%x111)<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	uint16_t x114 = UINT16_MAX;
	int64_t x116 = INT64_MIN;

	t28 = (x113&((x114%x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	static int8_t x118 = INT8_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 39105324;

	t29 = (x117&((x118%x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -2930;
	int64_t x123 = INT64_MIN;
	int64_t x124 = 7LL;
	int32_t t30 = -2;

	t30 = (x121&((x122%x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 232194337U;
	int64_t x126 = -1LL;
	uint16_t x127 = 7U;
	static volatile uint32_t t31 = 7807U;

	t31 = (x125&((x126%x127)<x128));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	int64_t x130 = -159227LL;
	int8_t x131 = INT8_MAX;
	uint64_t x132 = 111LLU;
	volatile int32_t t32 = -4;

	t32 = (x129&((x130%x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	uint64_t x134 = 1LLU;
	static uint16_t x135 = UINT16_MAX;
	int64_t x136 = INT64_MAX;
	volatile int32_t t33 = 1181;

	t33 = (x133&((x134%x135)<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 3U;
	volatile int64_t x140 = 1LL;
	volatile int32_t t34 = -1;

	t34 = (x137&((x138%x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MAX;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -8045;

	t35 = (x141&((x142%x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MIN;
	int64_t x148 = 9189632269931LL;

	t36 = (x145&((x146%x147)<x148));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x150 = UINT16_MAX;
	int64_t x151 = -1LL;
	static uint32_t x152 = 27075563U;
	int64_t t37 = -2729698903346974LL;

	t37 = (x149&((x150%x151)<x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	volatile int8_t x154 = INT8_MIN;
	int16_t x155 = 4;
	int16_t x156 = INT16_MIN;

	t38 = (x153&((x154%x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	volatile int64_t x160 = INT64_MIN;
	static uint64_t t39 = 16224035669LLU;

	t39 = (x157&((x158%x159)<x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	uint32_t x163 = UINT32_MAX;

	t40 = (x161&((x162%x163)<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 15U;
	int32_t x166 = INT32_MIN;
	static volatile uint16_t x167 = UINT16_MAX;
	int32_t t41 = -28;

	t41 = (x165&((x166%x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x170 = 57U;
	volatile int64_t x171 = 1292828479LL;
	uint16_t x172 = 14U;
	static volatile int32_t t42 = 14;

	t42 = (x169&((x170%x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x174 = UINT64_MAX;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = 38623489;
	volatile int32_t t43 = -25;

	t43 = (x173&((x174%x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int64_t x178 = INT64_MIN;
	int64_t x179 = 1024650668LL;
	volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 10938269;

	t44 = (x177&((x178%x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	uint8_t x182 = 18U;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = 7367;

	t45 = (x181&((x182%x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int16_t x187 = INT16_MAX;
	volatile int32_t t46 = 215;

	t46 = (x185&((x186%x187)<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	uint32_t x190 = UINT32_MAX;
	int64_t x192 = 57075LL;

	t47 = (x189&((x190%x191)<x192));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int8_t x195 = -1;
	int8_t x196 = -31;
	int32_t t48 = -526150731;

	t48 = (x193&((x194%x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 422U;
	static int64_t x198 = INT64_MIN;
	static uint64_t x199 = UINT64_MAX;

	t49 = (x197&((x198%x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 22684467U;
	static int8_t x202 = 0;
	static int16_t x203 = INT16_MIN;
	static volatile uint64_t x204 = 1343468667940166LLU;
	uint32_t t50 = 262942103U;

	t50 = (x201&((x202%x203)<x204));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 5U;
	volatile int32_t x207 = INT32_MIN;
	int64_t x208 = -1LL;
	volatile int32_t t51 = -16143681;

	t51 = (x205&((x206%x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = 241433U;
	volatile int8_t x210 = -4;
	volatile int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	volatile uint32_t t52 = 704U;

	t52 = (x209&((x210%x211)<x212));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x218 = 12198;
	volatile int16_t x219 = -8130;
	int32_t x220 = INT32_MAX;
	volatile int32_t t53 = 10;

	t53 = (x217&((x218%x219)<x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x221 = INT32_MAX;
	uint8_t x222 = UINT8_MAX;
	int8_t x224 = INT8_MIN;
	static int32_t t54 = -49283;

	t54 = (x221&((x222%x223)<x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x226 = -12248;
	static volatile int32_t t55 = -2789736;

	t55 = (x225&((x226%x227)<x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = INT16_MIN;
	static int64_t x230 = INT64_MAX;
	uint64_t x232 = 2809513593265LLU;
	volatile int32_t t56 = -22;

	t56 = (x229&((x230%x231)<x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x233 = 1U;
	volatile int8_t x235 = INT8_MAX;
	static volatile int16_t x236 = INT16_MAX;
	int32_t t57 = -727466;

	t57 = (x233&((x234%x235)<x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x238 = INT8_MAX;
	static volatile int32_t x240 = 9031;

	t58 = (x237&((x238%x239)<x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	int64_t t59 = 0LL;

	t59 = (x241&((x242%x243)<x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x251 = -1;
	volatile int64_t t60 = 2760LL;

	t60 = (x249&((x250%x251)<x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MAX;
	int8_t x254 = INT8_MIN;
	static uint16_t x255 = 32U;
	int32_t x256 = 1324;
	int32_t t61 = -1;

	t61 = (x253&((x254%x255)<x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x257 = -60750;
	static uint64_t x258 = 769LLU;
	int32_t x259 = 120669787;

	t62 = (x257&((x258%x259)<x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MAX;
	uint8_t x262 = 0U;
	int64_t x264 = 773005023443478LL;
	static volatile int32_t t63 = -91688421;

	t63 = (x261&((x262%x263)<x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x268 = INT8_MAX;
	volatile int32_t t64 = 2705870;

	t64 = (x265&((x266%x267)<x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = 169;
	int32_t x270 = -15144;
	static int64_t x271 = INT64_MIN;
	uint16_t x272 = 867U;
	volatile int32_t t65 = -425371;

	t65 = (x269&((x270%x271)<x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = -33;
	volatile int32_t t66 = 58678;

	t66 = (x273&((x274%x275)<x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = -1;
	int64_t x278 = -4179843411142099LL;
	uint64_t x279 = 196016186371721825LLU;
	static int16_t x280 = INT16_MIN;
	int32_t t67 = 397399;

	t67 = (x277&((x278%x279)<x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x282 = -1;
	volatile uint64_t x284 = 28LLU;
	int32_t t68 = 23;

	t68 = (x281&((x282%x283)<x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = 12;
	int64_t x288 = -2377225128LL;
	volatile int32_t t69 = 1;

	t69 = (x285&((x286%x287)<x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = -1;
	static int32_t x291 = INT32_MIN;
	volatile int32_t t70 = -7;

	t70 = (x289&((x290%x291)<x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x294 = INT64_MIN;
	int32_t x295 = 34;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t71 = 357U;

	t71 = (x293&((x294%x295)<x296));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = 108U;
	int64_t x298 = INT64_MIN;
	static int64_t x299 = INT64_MIN;
	uint16_t x300 = UINT16_MAX;
	int32_t t72 = 4;

	t72 = (x297&((x298%x299)<x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x302 = -15;
	volatile int8_t x303 = -1;
	static volatile int32_t x304 = INT32_MIN;
	uint32_t t73 = 1095950U;

	t73 = (x301&((x302%x303)<x304));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 24U;
	int8_t x307 = INT8_MIN;
	static uint32_t x308 = 1367661U;
	static volatile int32_t t74 = 4402829;

	t74 = (x305&((x306%x307)<x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x309 = 6U;
	int16_t x310 = INT16_MIN;
	uint16_t x311 = UINT16_MAX;
	volatile int32_t t75 = -239;

	t75 = (x309&((x310%x311)<x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = INT64_MAX;
	int64_t x316 = -1LL;
	volatile int64_t t76 = -5272483911LL;

	t76 = (x313&((x314%x315)<x316));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MIN;
	static volatile int32_t x318 = INT32_MIN;
	uint32_t x319 = 476402487U;
	static uint64_t x320 = 63853987953257469LLU;
	volatile int32_t t77 = -531572259;

	t77 = (x317&((x318%x319)<x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x322 = 3U;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MIN;
	volatile uint32_t t78 = 0U;

	t78 = (x321&((x322%x323)<x324));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	static int8_t x326 = -1;
	int8_t x327 = -1;
	volatile int16_t x328 = 5;
	int64_t t79 = -1224LL;

	t79 = (x325&((x326%x327)<x328));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x329 = 1U;
	int8_t x330 = INT8_MAX;
	int16_t x331 = -5012;
	int32_t x332 = -1893;
	int32_t t80 = 2850390;

	t80 = (x329&((x330%x331)<x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x333 = 1983U;
	volatile int8_t x334 = -1;
	volatile uint64_t x335 = UINT64_MAX;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t81 = 86725251;

	t81 = (x333&((x334%x335)<x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x338 = UINT64_MAX;
	uint8_t x339 = 30U;
	int8_t x340 = -53;
	volatile int32_t t82 = -34;

	t82 = (x337&((x338%x339)<x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	static uint32_t x342 = UINT32_MAX;
	int32_t x343 = INT32_MAX;
	volatile uint16_t x344 = 0U;

	t83 = (x341&((x342%x343)<x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MAX;
	int16_t x346 = 21;
	uint32_t x347 = 8847807U;
	int16_t x348 = INT16_MAX;

	t84 = (x345&((x346%x347)<x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x350 = -1;
	volatile uint16_t x351 = 4479U;
	int16_t x352 = INT16_MAX;
	volatile uint64_t t85 = 29LLU;

	t85 = (x349&((x350%x351)<x352));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x354 = 1U;
	static volatile int64_t x355 = INT64_MAX;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t86 = 47923;

	t86 = (x353&((x354%x355)<x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x357 = 20161U;
	int64_t x358 = INT64_MIN;
	int32_t x359 = -1;
	int32_t t87 = -374786514;

	t87 = (x357&((x358%x359)<x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = -1;
	volatile uint32_t x363 = UINT32_MAX;
	volatile int32_t x364 = INT32_MAX;
	int32_t t88 = 2438331;

	t88 = (x361&((x362%x363)<x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x366 = 7U;
	static uint16_t x367 = UINT16_MAX;
	volatile int32_t t89 = -7548;

	t89 = (x365&((x366%x367)<x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MAX;
	int16_t x371 = -82;

	t90 = (x369&((x370%x371)<x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x373 = 5LLU;
	static volatile uint8_t x374 = 2U;
	uint16_t x375 = 3U;
	int32_t x376 = 1;
	static volatile uint64_t t91 = 151123325211393LLU;

	t91 = (x373&((x374%x375)<x376));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = -3971153844435LL;
	static int8_t x378 = -12;
	int64_t x379 = -496814127544153999LL;
	int16_t x380 = INT16_MAX;
	int64_t t92 = -3LL;

	t92 = (x377&((x378%x379)<x380));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x381 = -1;
	int16_t x382 = 0;
	uint64_t x383 = 938LLU;
	uint16_t x384 = 0U;

	t93 = (x381&((x382%x383)<x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x385 = 4748942708339463LLU;
	int32_t x386 = -1;
	static int8_t x388 = -1;
	uint64_t t94 = 350218652LLU;

	t94 = (x385&((x386%x387)<x388));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x389 = 0;
	static int64_t x390 = -10LL;
	int64_t x391 = INT64_MAX;
	volatile int64_t x392 = INT64_MAX;
	volatile int32_t t95 = 5177;

	t95 = (x389&((x390%x391)<x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = -1;
	int64_t x394 = -12LL;
	int16_t x395 = INT16_MIN;

	t96 = (x393&((x394%x395)<x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x397 = -1LL;
	int16_t x398 = INT16_MAX;
	volatile int8_t x399 = INT8_MAX;
	int8_t x400 = 0;
	int64_t t97 = -2151343034900LL;

	t97 = (x397&((x398%x399)<x400));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = INT32_MAX;
	uint32_t x402 = 26U;
	volatile int8_t x403 = 6;

	t98 = (x401&((x402%x403)<x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x407 = 63U;
	static int8_t x408 = INT8_MIN;
	int32_t t99 = 0;

	t99 = (x405&((x406%x407)<x408));

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

