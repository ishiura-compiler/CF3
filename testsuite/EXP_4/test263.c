#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 66165728763LLU;
uint32_t x13 = UINT32_MAX;
volatile int8_t x15 = -1;
uint8_t x16 = 29U;
int16_t x20 = INT16_MIN;
int64_t x24 = -24LL;
int32_t x27 = 8074246;
int8_t x32 = -1;
int16_t x35 = INT16_MIN;
uint64_t x36 = UINT64_MAX;
int32_t t8 = -8;
volatile int32_t t9 = 322;
int16_t x44 = -1;
static uint32_t t10 = 259951072U;
static volatile uint32_t x45 = 5362U;
int64_t x53 = INT64_MAX;
volatile uint64_t t16 = 113476458LLU;
int32_t x74 = 0;
int16_t x78 = -4;
uint32_t x87 = UINT32_MAX;
int32_t t19 = -21951996;
uint64_t x91 = 24004LLU;
int32_t t20 = -20586;
int16_t x96 = INT16_MIN;
uint32_t x101 = 44U;
int64_t x103 = INT64_MIN;
uint32_t x119 = 14U;
int64_t x123 = INT64_MIN;
int8_t x131 = -1;
volatile int32_t t27 = -1832059;
int8_t x135 = INT8_MIN;
uint32_t t28 = 129372U;
static uint64_t x143 = 2321264205LLU;
int32_t t30 = -1752648;
int64_t x147 = -1303513041403560499LL;
volatile int32_t t31 = -53155524;
int8_t x149 = INT8_MIN;
int32_t x150 = INT32_MAX;
int64_t x162 = INT64_MAX;
int32_t t35 = 82418;
int64_t x168 = -65394300187LL;
int32_t x177 = INT32_MIN;
volatile int32_t t39 = -7591917;
int64_t x186 = INT64_MIN;
static volatile int16_t x188 = -1;
int32_t t41 = 7382405;
uint32_t x195 = UINT32_MAX;
static int8_t x196 = INT8_MIN;
volatile int32_t t42 = 94;
volatile int32_t t43 = 14146;
int8_t x203 = -1;
static int8_t x204 = INT8_MIN;
static volatile int32_t t44 = -13976132;
int64_t x208 = INT64_MAX;
volatile int64_t t45 = 10677381370576153LL;
uint32_t x209 = UINT32_MAX;
int8_t x217 = INT8_MIN;
int8_t x219 = INT8_MIN;
volatile int16_t x233 = -1;
int32_t t50 = -86991;
int32_t x242 = -1;
int8_t x251 = INT8_MAX;
uint64_t x267 = UINT64_MAX;
volatile int16_t x271 = -276;
volatile int64_t x275 = INT64_MAX;
uint64_t t59 = 197516505LLU;
volatile int64_t x277 = 2LL;
uint64_t x279 = 1773743LLU;
static volatile int64_t t60 = -66033LL;
int32_t x284 = INT32_MIN;
int32_t x287 = INT32_MIN;
int32_t x290 = INT32_MIN;
uint8_t x291 = 3U;
int32_t x295 = -2346230;
volatile int16_t x299 = 9;
int64_t t65 = -21675LL;
static uint64_t x305 = 794586188520LLU;
int32_t t69 = 819374505;
volatile int32_t t70 = -3664361;
uint8_t x325 = 1U;
static volatile int32_t x330 = -1;
int64_t x333 = INT64_MIN;
volatile int64_t t74 = -126571739061423LL;
static int64_t x339 = INT64_MIN;
uint32_t x341 = UINT32_MAX;
int8_t x347 = -1;
static uint8_t x351 = UINT8_MAX;
int32_t t78 = -430118;
volatile int64_t x358 = INT64_MAX;
static int8_t x362 = INT8_MAX;
uint32_t x364 = UINT32_MAX;
volatile uint64_t t80 = 158132949LLU;
int64_t x366 = INT64_MAX;
static volatile uint32_t t81 = 2U;
uint32_t x376 = 1450U;
int16_t x377 = INT16_MIN;
static volatile int16_t x379 = INT16_MAX;
volatile int32_t t84 = 1298;
uint8_t x392 = UINT8_MAX;
uint8_t x396 = UINT8_MAX;
int32_t t87 = -48704;
static int16_t x404 = 76;
uint8_t x425 = 0U;
uint8_t x429 = 13U;
int32_t x438 = INT32_MIN;
volatile uint64_t t98 = 7229919881LLU;
volatile int64_t x445 = INT64_MIN;
int64_t x447 = -4604793048332552LL;


void f0(void) {
	int32_t x1 = 1889;
	int32_t x3 = 1055249976;
	static int8_t x4 = 1;
	int32_t t0 = -10042606;

	t0 = (x1*(x2==(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -369750;
	int16_t x6 = INT16_MIN;
	volatile int16_t x7 = -1;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 121;

	t1 = (x5*(x6==(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 131U;
	volatile int16_t x10 = INT16_MIN;
	volatile int16_t x11 = -55;
	int64_t x12 = -1LL;
	volatile int32_t t2 = -471274;

	t2 = (x9*(x10==(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MAX;
	uint32_t t3 = 113718705U;

	t3 = (x13*(x14==(x15-x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint64_t x18 = 64269643909651LLU;
	int16_t x19 = INT16_MAX;
	volatile int64_t t4 = -24022755LL;

	t4 = (x17*(x18==(x19-x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 5;
	int32_t x22 = INT32_MIN;
	volatile int32_t x23 = -1;
	int32_t t5 = 9;

	t5 = (x21*(x22==(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -6;
	int32_t x28 = -1;
	static volatile int32_t t6 = 0;

	t6 = (x25*(x26==(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int64_t x30 = 17225391444LL;
	int32_t x31 = -160905;
	uint32_t t7 = 2572U;

	t7 = (x29*(x30==(x31-x32)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = -2;

	t8 = (x33*(x34==(x35-x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	uint64_t x38 = 18LLU;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = UINT64_MAX;

	t9 = (x37*(x38==(x39-x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 9524350U;
	int64_t x42 = INT64_MIN;
	static int16_t x43 = -1;

	t10 = (x41*(x42==(x43-x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 930U;
	int16_t x47 = 5;
	uint16_t x48 = UINT16_MAX;
	volatile uint32_t t11 = 187599217U;

	t11 = (x45*(x46==(x47-x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MIN;
	int32_t t12 = -75;

	t12 = (x49*(x50==(x51-x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -1LL;
	uint16_t x55 = 0U;
	static int64_t x56 = -29542290570617LL;
	volatile int64_t t13 = 2108219361257LL;

	t13 = (x53*(x54==(x55-x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	int16_t x63 = 2;
	volatile int64_t x64 = 0LL;
	int32_t t14 = -899561057;

	t14 = (x61*(x62==(x63-x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = 2;
	uint8_t x66 = 115U;
	static uint32_t x67 = 926U;
	int32_t x68 = -21505688;
	volatile int32_t t15 = 109;

	t15 = (x65*(x66==(x67-x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 368877836854310LLU;
	int16_t x70 = -1;
	static int32_t x71 = 1;
	int8_t x72 = INT8_MIN;

	t16 = (x69*(x70==(x71-x72)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = -1;
	uint64_t x75 = 243LLU;
	uint16_t x76 = UINT16_MAX;
	static int32_t t17 = -2914;

	t17 = (x73*(x74==(x75-x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 41182LL;
	int8_t x79 = 28;
	int32_t x80 = 23553;
	int64_t t18 = 143492708LL;

	t18 = (x77*(x78==(x79-x80)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = -43350640;
	volatile int64_t x86 = 488LL;
	int32_t x88 = INT32_MAX;

	t19 = (x85*(x86==(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = -12506;
	volatile uint32_t x90 = 111U;
	uint32_t x92 = 94526U;

	t20 = (x89*(x90==(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = -567;
	int8_t x94 = INT8_MAX;
	uint64_t x95 = 10714116772LLU;
	static int32_t t21 = -9833;

	t21 = (x93*(x94==(x95-x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x102 = INT32_MAX;
	int8_t x104 = INT8_MIN;
	volatile uint32_t t22 = 820U;

	t22 = (x101*(x102==(x103-x104)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = -25331349;
	static volatile uint16_t x110 = 6824U;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MIN;
	int32_t t23 = 797;

	t23 = (x109*(x110==(x111-x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 61U;
	int16_t x114 = INT16_MIN;
	int16_t x115 = 6531;
	int32_t x116 = -10910;
	volatile int32_t t24 = -108;

	t24 = (x113*(x114==(x115-x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = INT32_MIN;
	static volatile uint64_t x120 = UINT64_MAX;
	volatile int32_t t25 = -98306;

	t25 = (x117*(x118==(x119-x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -1652554;
	uint64_t x122 = UINT64_MAX;
	int32_t x124 = -1;
	volatile int32_t t26 = -5154308;

	t26 = (x121*(x122==(x123-x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x129 = 13522U;
	int32_t x130 = INT32_MIN;
	static uint32_t x132 = UINT32_MAX;

	t27 = (x129*(x130==(x131-x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 114U;
	static uint16_t x134 = 6085U;
	static uint32_t x136 = UINT32_MAX;

	t28 = (x133*(x134==(x135-x136)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = INT64_MAX;
	uint16_t x138 = 9669U;
	static int8_t x139 = -1;
	volatile uint32_t x140 = UINT32_MAX;
	static int64_t t29 = 9451093475568LL;

	t29 = (x137*(x138==(x139-x140)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -2;
	volatile int16_t x142 = -5;
	uint16_t x144 = UINT16_MAX;

	t30 = (x141*(x142==(x143-x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = UINT16_MAX;
	volatile int8_t x146 = INT8_MIN;
	static volatile int32_t x148 = INT32_MAX;

	t31 = (x145*(x146==(x147-x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x151 = INT32_MIN;
	int64_t x152 = 1LL;
	int32_t t32 = -64;

	t32 = (x149*(x150==(x151-x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 113089U;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 0U;
	volatile int8_t x156 = -15;
	volatile uint32_t t33 = 5U;

	t33 = (x153*(x154==(x155-x156)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = -1;
	volatile int32_t x158 = INT32_MAX;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MAX;
	int32_t t34 = -6;

	t34 = (x157*(x158==(x159-x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = -1;
	int8_t x163 = 0;
	int8_t x164 = 9;

	t35 = (x161*(x162==(x163-x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = UINT16_MAX;
	static volatile int8_t x166 = INT8_MAX;
	int8_t x167 = -1;
	int32_t t36 = -22343968;

	t36 = (x165*(x166==(x167-x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x169 = -12;
	uint8_t x170 = UINT8_MAX;
	static uint16_t x171 = 20U;
	volatile int8_t x172 = INT8_MIN;
	static volatile int32_t t37 = 1145081;

	t37 = (x169*(x170==(x171-x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x178 = 712U;
	static volatile uint64_t x179 = 1LLU;
	int64_t x180 = -1LL;
	int32_t t38 = 791;

	t38 = (x177*(x178==(x179-x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = UINT8_MAX;
	volatile uint8_t x182 = 1U;
	volatile uint16_t x183 = UINT16_MAX;
	static volatile int8_t x184 = -4;

	t39 = (x181*(x182==(x183-x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = 4;
	static int16_t x187 = INT16_MAX;
	volatile int32_t t40 = -6;

	t40 = (x185*(x186==(x187-x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x189 = -1;
	static uint8_t x190 = UINT8_MAX;
	int16_t x191 = 201;
	int64_t x192 = -219LL;

	t41 = (x189*(x190==(x191-x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = -1;
	volatile uint8_t x194 = UINT8_MAX;

	t42 = (x193*(x194==(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 3U;
	static int32_t x198 = INT32_MAX;
	volatile uint32_t x199 = 4741U;
	int32_t x200 = INT32_MIN;

	t43 = (x197*(x198==(x199-x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = INT32_MAX;
	uint16_t x202 = 12590U;

	t44 = (x201*(x202==(x203-x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x205 = INT64_MIN;
	uint16_t x206 = 29U;
	uint64_t x207 = UINT64_MAX;

	t45 = (x205*(x206==(x207-x208)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x210 = -32780061;
	volatile int8_t x211 = 1;
	uint16_t x212 = 22365U;
	static uint32_t t46 = 23842946U;

	t46 = (x209*(x210==(x211-x212)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x218 = -1;
	static uint8_t x220 = UINT8_MAX;
	static volatile int32_t t47 = 44;

	t47 = (x217*(x218==(x219-x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x221 = -1LL;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = 3;
	int32_t x224 = 61;
	int64_t t48 = 102LL;

	t48 = (x221*(x222==(x223-x224)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MIN;
	volatile int32_t x227 = -92500;
	uint8_t x228 = 27U;
	volatile int64_t t49 = -7LL;

	t49 = (x225*(x226==(x227-x228)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x234 = 1;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = -228491;

	t50 = (x233*(x234==(x235-x236)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MAX;
	int32_t x239 = -1;
	int8_t x240 = INT8_MAX;
	volatile int32_t t51 = -562;

	t51 = (x237*(x238==(x239-x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = UINT16_MAX;
	int32_t x243 = 64622476;
	int64_t x244 = -15078441264LL;
	int32_t t52 = 71345;

	t52 = (x241*(x242==(x243-x244)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = INT64_MAX;
	static int64_t x250 = -478LL;
	int16_t x252 = INT16_MIN;
	int64_t t53 = -1297027961955029572LL;

	t53 = (x249*(x250==(x251-x252)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x253 = 4U;
	int8_t x254 = INT8_MIN;
	int16_t x255 = 210;
	int32_t x256 = -1724;
	int32_t t54 = -13254;

	t54 = (x253*(x254==(x255-x256)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x257 = 8U;
	uint16_t x258 = 1U;
	int32_t x259 = 1507877;
	volatile uint64_t x260 = 65529888LLU;
	int32_t t55 = -55869;

	t55 = (x257*(x258==(x259-x260)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x261 = 27U;
	int16_t x262 = -1;
	uint16_t x263 = 27U;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t56 = 499834;

	t56 = (x261*(x262==(x263-x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = 24;
	int16_t x266 = INT16_MIN;
	int32_t x268 = INT32_MAX;
	volatile int32_t t57 = 1943;

	t57 = (x265*(x266==(x267-x268)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = 11195317759479LL;
	volatile uint16_t x270 = UINT16_MAX;
	uint64_t x272 = UINT64_MAX;
	volatile int64_t t58 = -9996115LL;

	t58 = (x269*(x270==(x271-x272)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x273 = UINT64_MAX;
	volatile int8_t x274 = INT8_MIN;
	volatile uint32_t x276 = 4732750U;

	t59 = (x273*(x274==(x275-x276)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x278 = 18U;
	volatile int64_t x280 = -936034LL;

	t60 = (x277*(x278==(x279-x280)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MIN;
	int32_t t61 = -882;

	t61 = (x281*(x282==(x283-x284)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MAX;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t62 = -45240;

	t62 = (x285*(x286==(x287-x288)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = 1043108LL;
	uint32_t x292 = 238341U;
	volatile int64_t t63 = -536375890LL;

	t63 = (x289*(x290==(x291-x292)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MAX;
	int32_t x294 = INT32_MAX;
	int16_t x296 = INT16_MAX;
	static int32_t t64 = -5;

	t64 = (x293*(x294==(x295-x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x297 = -2891LL;
	int32_t x298 = INT32_MIN;
	uint16_t x300 = 5420U;

	t65 = (x297*(x298==(x299-x300)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = 230;
	int64_t x302 = INT64_MAX;
	static int32_t x303 = -1;
	int8_t x304 = -45;
	int32_t t66 = 24188125;

	t66 = (x301*(x302==(x303-x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x306 = INT32_MIN;
	uint16_t x307 = UINT16_MAX;
	int32_t x308 = INT32_MAX;
	volatile uint64_t t67 = 3LLU;

	t67 = (x305*(x306==(x307-x308)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x309 = UINT32_MAX;
	volatile uint32_t x310 = UINT32_MAX;
	uint32_t x311 = 24344U;
	static volatile uint64_t x312 = UINT64_MAX;
	uint32_t t68 = 27053U;

	t68 = (x309*(x310==(x311-x312)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x313 = 1U;
	int64_t x314 = INT64_MIN;
	volatile int64_t x315 = -1LL;
	volatile int32_t x316 = INT32_MIN;

	t69 = (x313*(x314==(x315-x316)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x317 = INT32_MIN;
	int32_t x318 = -100116558;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = 25420440555LLU;

	t70 = (x317*(x318==(x319-x320)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	static uint64_t x323 = 12694118LLU;
	int16_t x324 = -1974;
	static volatile int32_t t71 = 28;

	t71 = (x321*(x322==(x323-x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x326 = -1;
	int8_t x327 = -1;
	uint16_t x328 = 2615U;
	volatile int32_t t72 = -1356;

	t72 = (x325*(x326==(x327-x328)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = INT16_MAX;
	int8_t x331 = INT8_MAX;
	uint32_t x332 = 8U;
	volatile int32_t t73 = -29928;

	t73 = (x329*(x330==(x331-x332)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x334 = -1;
	int16_t x335 = -1;
	uint8_t x336 = UINT8_MAX;

	t74 = (x333*(x334==(x335-x336)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x337 = INT16_MAX;
	int32_t x338 = -122204;
	int8_t x340 = INT8_MIN;
	static volatile int32_t t75 = 195253400;

	t75 = (x337*(x338==(x339-x340)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x342 = 54U;
	static uint64_t x343 = UINT64_MAX;
	static uint64_t x344 = UINT64_MAX;
	volatile uint32_t t76 = 1378U;

	t76 = (x341*(x342==(x343-x344)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MIN;
	static int64_t x346 = INT64_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t77 = 1;

	t77 = (x345*(x346==(x347-x348)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = 1;
	uint32_t x350 = UINT32_MAX;
	int16_t x352 = INT16_MAX;

	t78 = (x349*(x350==(x351-x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x357 = UINT32_MAX;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = 2U;
	volatile uint32_t t79 = 729U;

	t79 = (x357*(x358==(x359-x360)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 10121062734200LLU;
	static int32_t x363 = INT32_MAX;

	t80 = (x361*(x362==(x363-x364)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = 1897U;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MIN;

	t81 = (x365*(x366==(x367-x368)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x373 = INT16_MIN;
	volatile int16_t x374 = INT16_MAX;
	int32_t x375 = -1;
	int32_t t82 = 52;

	t82 = (x373*(x374==(x375-x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x378 = 77063615LLU;
	volatile int8_t x380 = INT8_MAX;
	int32_t t83 = -45;

	t83 = (x377*(x378==(x379-x380)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x381 = 78U;
	static int32_t x382 = INT32_MIN;
	uint64_t x383 = 225848339LLU;
	int64_t x384 = -1LL;

	t84 = (x381*(x382==(x383-x384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x385 = 1;
	static int8_t x386 = -1;
	int8_t x387 = 5;
	int8_t x388 = -1;
	volatile int32_t t85 = 429;

	t85 = (x385*(x386==(x387-x388)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x389 = INT32_MAX;
	int8_t x390 = INT8_MIN;
	volatile int64_t x391 = -83100423828541081LL;
	volatile int32_t t86 = 286338;

	t86 = (x389*(x390==(x391-x392)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;

	t87 = (x393*(x394==(x395-x396)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = UINT16_MAX;
	int8_t x398 = -6;
	int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t88 = -263255500;

	t88 = (x397*(x398==(x399-x400)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x401 = UINT8_MAX;
	volatile uint32_t x402 = UINT32_MAX;
	int8_t x403 = INT8_MIN;
	static int32_t t89 = 5;

	t89 = (x401*(x402==(x403-x404)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = 2;
	int32_t x406 = -342;
	static int32_t x407 = -1;
	uint32_t x408 = 129717725U;
	int32_t t90 = 40;

	t90 = (x405*(x406==(x407-x408)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x409 = 71U;
	uint64_t x410 = UINT64_MAX;
	uint16_t x411 = UINT16_MAX;
	uint8_t x412 = 25U;
	static volatile int32_t t91 = -42;

	t91 = (x409*(x410==(x411-x412)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = 463LL;
	int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MIN;
	volatile int16_t x416 = -981;
	static volatile int64_t t92 = 8133875854153LL;

	t92 = (x413*(x414==(x415-x416)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MAX;
	int32_t x422 = INT32_MIN;
	static int8_t x423 = INT8_MAX;
	int16_t x424 = 479;
	int32_t t93 = 6065;

	t93 = (x421*(x422==(x423-x424)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x426 = 99U;
	volatile uint8_t x427 = 30U;
	volatile uint32_t x428 = 4U;
	int32_t t94 = 25747;

	t94 = (x425*(x426==(x427-x428)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x430 = 0;
	int8_t x431 = 30;
	uint8_t x432 = UINT8_MAX;
	int32_t t95 = 169;

	t95 = (x429*(x430==(x431-x432)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x433 = UINT16_MAX;
	int16_t x434 = -1;
	volatile uint16_t x435 = 9U;
	static int16_t x436 = INT16_MIN;
	static int32_t t96 = -3252;

	t96 = (x433*(x434==(x435-x436)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x437 = INT8_MIN;
	uint64_t x439 = 974969LLU;
	static int32_t x440 = -1;
	int32_t t97 = -1020;

	t97 = (x437*(x438==(x439-x440)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x441 = UINT64_MAX;
	volatile int32_t x442 = INT32_MAX;
	uint32_t x443 = UINT32_MAX;
	volatile int32_t x444 = -317508;

	t98 = (x441*(x442==(x443-x444)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x446 = -15;
	volatile uint16_t x448 = UINT16_MAX;
	static int64_t t99 = 114266813594172056LL;

	t99 = (x445*(x446==(x447-x448)));

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

