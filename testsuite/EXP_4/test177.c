#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 180U;
int64_t x6 = INT64_MIN;
int16_t x12 = INT16_MIN;
int8_t x35 = -1;
int8_t x46 = -1;
volatile uint64_t x47 = 191753613938LLU;
uint64_t x58 = 544826LLU;
int32_t t12 = -15957161;
uint64_t x72 = 3220929LLU;
int32_t t14 = -6418803;
int64_t x77 = -1LL;
uint64_t x78 = UINT64_MAX;
static int32_t x79 = 34346;
int16_t x80 = INT16_MIN;
static int64_t x82 = -78344326882365LL;
int64_t x85 = -1LL;
static volatile uint32_t x86 = 37259826U;
volatile int32_t t18 = -7;
static uint16_t x103 = UINT16_MAX;
int32_t x107 = -88630;
int32_t t25 = 0;
int32_t x120 = -328673;
int32_t t27 = 204779;
int16_t x130 = 0;
static volatile int16_t x131 = INT16_MIN;
int8_t x132 = INT8_MIN;
static volatile int32_t t28 = -3;
uint8_t x139 = 7U;
uint32_t x140 = 378239U;
static int32_t t30 = -28348851;
int64_t x145 = -2223512317LL;
volatile int16_t x149 = -1;
int64_t x155 = 343521LL;
int8_t x184 = INT8_MIN;
int32_t x189 = -21;
uint32_t x190 = 3303833U;
int16_t x194 = INT16_MAX;
int64_t x197 = INT64_MAX;
int16_t x199 = -1;
int64_t x204 = INT64_MIN;
uint64_t x216 = UINT64_MAX;
int32_t x221 = -1;
uint64_t x223 = 2LLU;
int64_t x227 = -63943565058LL;
uint32_t x235 = 3U;
int32_t t51 = 532248507;
static int8_t x246 = -1;
uint16_t x248 = UINT16_MAX;
volatile uint8_t x262 = 3U;
int64_t x266 = INT64_MIN;
static int32_t x274 = 10693;
int16_t x280 = INT16_MIN;
uint16_t x281 = 213U;
uint16_t x286 = UINT16_MAX;
int64_t x290 = 1836742LL;
volatile uint64_t x293 = 1322923665786886LLU;
int64_t x315 = -1LL;
static volatile int32_t t64 = -85;
static int64_t x321 = -1LL;
volatile uint32_t x324 = 2U;
static int32_t t66 = 1844;
int64_t x327 = INT64_MIN;
static int64_t x328 = -1442671492465986929LL;
volatile int32_t t68 = 16983213;
volatile int32_t t70 = -432486087;
uint64_t x341 = 88380016247602793LLU;
volatile uint8_t x342 = 42U;
static int8_t x357 = INT8_MAX;
volatile int32_t x360 = -74;
volatile int32_t t74 = 3570173;
int16_t x364 = INT16_MIN;
volatile uint64_t x367 = 206422968184LLU;
volatile int32_t t77 = -126603268;
uint32_t x375 = 9308U;
int32_t t78 = -102;
static int8_t x381 = INT8_MIN;
int32_t x388 = 0;
int32_t x392 = INT32_MAX;
int32_t t82 = -65;
uint8_t x397 = UINT8_MAX;
int64_t x400 = INT64_MIN;
int8_t x401 = -6;
int32_t x403 = INT32_MIN;
static uint16_t x410 = 72U;
static int32_t x418 = -1570985;
volatile int32_t t87 = -626889;
uint16_t x422 = 130U;
volatile int32_t x432 = -1;
int8_t x435 = -1;
volatile int16_t x439 = INT16_MAX;
volatile int32_t t91 = -424619;
static volatile int32_t t92 = 2067;
static uint8_t x452 = 1U;
static int32_t t93 = -1181;
int16_t x457 = INT16_MIN;
volatile uint8_t x459 = 7U;
int32_t t94 = 279702;
int16_t x467 = INT16_MIN;
int32_t t96 = -9587084;
volatile uint32_t x470 = 509291U;
int32_t x472 = 12183703;
int8_t x475 = INT8_MIN;
int32_t t98 = 692809;
uint32_t x478 = 98624U;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x3 = -1;
	volatile uint16_t x4 = 6U;
	int32_t t0 = 0;

	t0 = (x1==(x2+(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -15620341800219712LL;
	int32_t x7 = -1;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -210;

	t1 = (x5==(x6+(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int16_t x10 = INT16_MAX;
	uint16_t x11 = 2034U;
	static int32_t t2 = -575685967;

	t2 = (x9==(x10+(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int16_t x14 = -1;
	int64_t x15 = INT64_MAX;
	uint8_t x16 = UINT8_MAX;
	static int32_t t3 = 7;

	t3 = (x13==(x14+(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static volatile uint64_t x18 = 3636509LLU;
	uint32_t x19 = 117990U;
	volatile uint64_t x20 = 19253415060954LLU;
	static volatile int32_t t4 = 2443;

	t4 = (x17==(x18+(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = 5958026622500273LLU;
	int8_t x24 = 2;
	volatile int32_t t5 = -6182;

	t5 = (x21==(x22+(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = 1;
	int32_t x30 = INT32_MIN;
	int16_t x31 = -1;
	static uint32_t x32 = 28279U;
	int32_t t6 = -194;

	t6 = (x29==(x30+(x31-x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 473568U;
	static volatile int8_t x34 = 1;
	static volatile int32_t x36 = -1;
	int32_t t7 = 1;

	t7 = (x33==(x34+(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	uint64_t x38 = 755206236887LLU;
	static int64_t x39 = INT64_MAX;
	static uint32_t x40 = 124U;
	int32_t t8 = 2;

	t8 = (x37==(x38+(x39-x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 1245LLU;
	int64_t x48 = INT64_MAX;
	volatile int32_t t9 = -29243419;

	t9 = (x45==(x46+(x47-x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = -2;
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 1U;
	volatile int32_t t10 = 308843;

	t10 = (x49==(x50+(x51-x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	volatile uint16_t x54 = UINT16_MAX;
	int16_t x55 = -1;
	uint16_t x56 = 13605U;
	int32_t t11 = -6278876;

	t11 = (x53==(x54+(x55-x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -2LL;
	int8_t x59 = -1;
	int64_t x60 = -1LL;

	t12 = (x57==(x58+(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	volatile uint8_t x67 = UINT8_MAX;
	int16_t x68 = -15152;
	int32_t t13 = 1882471;

	t13 = (x65==(x66+(x67-x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	uint8_t x70 = 45U;
	static int16_t x71 = -1;

	t14 = (x69==(x70+(x71-x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 512600U;
	int64_t x74 = -1LL;
	int64_t x75 = INT64_MIN;
	int32_t x76 = -1;
	volatile int32_t t15 = 24872406;

	t15 = (x73==(x74+(x75-x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t t16 = -25568;

	t16 = (x77==(x78+(x79-x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x81 = INT64_MIN;
	static int8_t x83 = -1;
	int8_t x84 = 54;
	volatile int32_t t17 = 1;

	t17 = (x81==(x82+(x83-x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x87 = -188;
	int16_t x88 = INT16_MIN;

	t18 = (x85==(x86+(x87-x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 57U;
	int16_t x90 = INT16_MIN;
	int64_t x91 = -880LL;
	int64_t x92 = -1LL;
	int32_t t19 = -466255332;

	t19 = (x89==(x90+(x91-x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x93 = -1;
	int32_t x94 = 29706764;
	int8_t x95 = INT8_MIN;
	static int32_t x96 = -404248;
	volatile int32_t t20 = 19;

	t20 = (x93==(x94+(x95-x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = 24391201182293LL;
	uint32_t x98 = 41783972U;
	int16_t x99 = INT16_MAX;
	int16_t x100 = 2472;
	volatile int32_t t21 = 481191;

	t21 = (x97==(x98+(x99-x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 1207194308714LLU;
	volatile uint8_t x102 = 104U;
	int64_t x104 = -1LL;
	volatile int32_t t22 = -146614913;

	t22 = (x101==(x102+(x103-x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x105 = 42537693520LLU;
	volatile int64_t x106 = -1LL;
	int64_t x108 = INT64_MIN;
	volatile int32_t t23 = 8;

	t23 = (x105==(x106+(x107-x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = 156381LL;
	uint16_t x110 = UINT16_MAX;
	int32_t x111 = INT32_MIN;
	int8_t x112 = -1;
	int32_t t24 = -652;

	t24 = (x109==(x110+(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 254816601U;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	static int8_t x116 = 45;

	t25 = (x113==(x114+(x115-x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 0U;
	int16_t x118 = 18;
	static volatile int64_t x119 = -768LL;
	int32_t t26 = 159;

	t26 = (x117==(x118+(x119-x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	volatile int32_t x126 = INT32_MIN;
	int16_t x127 = 7;
	int8_t x128 = 1;

	t27 = (x125==(x126+(x127-x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x129 = UINT32_MAX;

	t28 = (x129==(x130+(x131-x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x137 = INT8_MIN;
	static uint8_t x138 = 0U;
	volatile int32_t t29 = -7;

	t29 = (x137==(x138+(x139-x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = UINT32_MAX;
	int8_t x142 = INT8_MIN;
	static uint32_t x143 = 14805277U;
	int8_t x144 = -21;

	t30 = (x141==(x142+(x143-x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x146 = 146852336LL;
	static int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t31 = 8219;

	t31 = (x145==(x146+(x147-x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x150 = 2433LLU;
	volatile uint32_t x151 = 1U;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t32 = -1039793;

	t32 = (x149==(x150+(x151-x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -27396032;
	int16_t x154 = 13;
	static uint32_t x156 = 94314936U;
	volatile int32_t t33 = -262;

	t33 = (x153==(x154+(x155-x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 29U;
	uint8_t x158 = 0U;
	static uint16_t x159 = UINT16_MAX;
	volatile int32_t x160 = INT32_MAX;
	int32_t t34 = -47787908;

	t34 = (x157==(x158+(x159-x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = UINT16_MAX;
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = -6;
	int16_t x164 = INT16_MIN;
	int32_t t35 = -410590200;

	t35 = (x161==(x162+(x163-x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MAX;
	volatile int16_t x171 = -1;
	int16_t x172 = INT16_MIN;
	int32_t t36 = -74789;

	t36 = (x169==(x170+(x171-x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x173 = UINT32_MAX;
	int32_t x174 = -1;
	int64_t x175 = 2054348473656195LL;
	static int32_t x176 = 113234;
	volatile int32_t t37 = 33430050;

	t37 = (x173==(x174+(x175-x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x177 = 3U;
	int64_t x178 = INT64_MIN;
	uint32_t x179 = 129372U;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t38 = 28;

	t38 = (x177==(x178+(x179-x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MAX;
	volatile int16_t x182 = INT16_MIN;
	uint32_t x183 = 12618U;
	int32_t t39 = -2637285;

	t39 = (x181==(x182+(x183-x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = -19213715;
	int32_t x186 = INT32_MIN;
	uint64_t x187 = 1545550221831382LLU;
	static volatile uint8_t x188 = 7U;
	volatile int32_t t40 = -197205;

	t40 = (x185==(x186+(x187-x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x191 = -1;
	static int16_t x192 = 1692;
	volatile int32_t t41 = -99;

	t41 = (x189==(x190+(x191-x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = 1785;
	uint32_t x195 = 285408017U;
	uint16_t x196 = 0U;
	int32_t t42 = -224439;

	t42 = (x193==(x194+(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x198 = -1;
	static uint32_t x200 = UINT32_MAX;
	volatile int32_t t43 = -30581;

	t43 = (x197==(x198+(x199-x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x201 = 2654LLU;
	int32_t x202 = INT32_MIN;
	int8_t x203 = -43;
	int32_t t44 = 7012914;

	t44 = (x201==(x202+(x203-x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x205 = INT8_MAX;
	volatile int64_t x206 = -276764031938LL;
	int8_t x207 = -1;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t45 = 0;

	t45 = (x205==(x206+(x207-x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x213 = -10;
	uint16_t x214 = 32U;
	uint16_t x215 = 0U;
	int32_t t46 = 1184158;

	t46 = (x213==(x214+(x215-x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x222 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t47 = 827;

	t47 = (x221==(x222+(x223-x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 1U;
	uint8_t x226 = 0U;
	int64_t x228 = INT64_MIN;
	volatile int32_t t48 = -7323;

	t48 = (x225==(x226+(x227-x228)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = INT16_MIN;
	static int8_t x234 = -16;
	static int64_t x236 = -1LL;
	int32_t t49 = -1047635;

	t49 = (x233==(x234+(x235-x236)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = -137627411782554797LL;
	int32_t x238 = INT32_MAX;
	uint64_t x239 = UINT64_MAX;
	uint32_t x240 = UINT32_MAX;
	int32_t t50 = 0;

	t50 = (x237==(x238+(x239-x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x241 = -35333033282LL;
	int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MAX;
	volatile uint8_t x244 = 11U;

	t51 = (x241==(x242+(x243-x244)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = 808469317LL;
	int64_t x247 = INT64_MAX;
	static int32_t t52 = -55025995;

	t52 = (x245==(x246+(x247-x248)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = -1;
	int8_t x255 = -4;
	volatile int32_t x256 = -1;
	int32_t t53 = 1;

	t53 = (x253==(x254+(x255-x256)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = INT32_MAX;
	int32_t x263 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t54 = -3135225;

	t54 = (x261==(x262+(x263-x264)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile uint16_t x267 = 0U;
	int8_t x268 = -1;
	int32_t t55 = -16255167;

	t55 = (x265==(x266+(x267-x268)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = INT16_MIN;
	static uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MAX;
	int32_t t56 = -830496;

	t56 = (x273==(x274+(x275-x276)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = INT64_MIN;
	uint8_t x278 = 12U;
	uint8_t x279 = UINT8_MAX;
	volatile int32_t t57 = 0;

	t57 = (x277==(x278+(x279-x280)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = 1579001631409489LL;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t58 = -16785752;

	t58 = (x281==(x282+(x283-x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = INT64_MIN;
	static int16_t x287 = INT16_MIN;
	uint64_t x288 = UINT64_MAX;
	int32_t t59 = 15;

	t59 = (x285==(x286+(x287-x288)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x289 = 0U;
	uint16_t x291 = 29782U;
	uint64_t x292 = UINT64_MAX;
	int32_t t60 = -405832320;

	t60 = (x289==(x290+(x291-x292)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x294 = UINT16_MAX;
	int32_t x295 = INT32_MIN;
	int64_t x296 = -1LL;
	static int32_t t61 = -60319;

	t61 = (x293==(x294+(x295-x296)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	uint32_t x304 = 0U;
	volatile int32_t t62 = -218038793;

	t62 = (x301==(x302+(x303-x304)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = -1;
	uint8_t x306 = 1U;
	volatile int8_t x307 = -1;
	volatile int8_t x308 = INT8_MAX;
	int32_t t63 = 1562;

	t63 = (x305==(x306+(x307-x308)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x313 = INT16_MAX;
	uint64_t x314 = 1413511509LLU;
	int32_t x316 = -34937955;

	t64 = (x313==(x314+(x315-x316)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x317 = 10U;
	static int32_t x318 = INT32_MIN;
	uint16_t x319 = 1318U;
	uint8_t x320 = 0U;
	int32_t t65 = -54851522;

	t65 = (x317==(x318+(x319-x320)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x322 = 3;
	volatile int8_t x323 = INT8_MIN;

	t66 = (x321==(x322+(x323-x324)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x325 = -106608608583LL;
	int32_t x326 = 7;
	int32_t t67 = -48449;

	t67 = (x325==(x326+(x327-x328)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x329 = 4U;
	volatile int8_t x330 = INT8_MAX;
	uint32_t x331 = UINT32_MAX;
	uint8_t x332 = UINT8_MAX;

	t68 = (x329==(x330+(x331-x332)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x333 = 22U;
	uint64_t x334 = 1462805244215LLU;
	int32_t x335 = 3219226;
	int32_t x336 = -1;
	int32_t t69 = -4622294;

	t69 = (x333==(x334+(x335-x336)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MIN;
	volatile int16_t x338 = -1;
	static volatile int8_t x339 = 11;
	int8_t x340 = -1;

	t70 = (x337==(x338+(x339-x340)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = INT16_MAX;
	volatile int32_t t71 = 433679505;

	t71 = (x341==(x342+(x343-x344)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = -1;
	static int16_t x347 = -1;
	volatile uint64_t x348 = UINT64_MAX;
	volatile int32_t t72 = -3793957;

	t72 = (x345==(x346+(x347-x348)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x349 = UINT32_MAX;
	uint64_t x350 = UINT64_MAX;
	uint16_t x351 = UINT16_MAX;
	static int16_t x352 = INT16_MAX;
	int32_t t73 = -8770037;

	t73 = (x349==(x350+(x351-x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x358 = INT16_MAX;
	static int64_t x359 = INT64_MIN;

	t74 = (x357==(x358+(x359-x360)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x361 = INT32_MIN;
	static volatile int32_t x362 = -1;
	volatile uint8_t x363 = UINT8_MAX;
	int32_t t75 = -15465135;

	t75 = (x361==(x362+(x363-x364)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = INT8_MIN;
	uint32_t x368 = 90942666U;
	int32_t t76 = -461671;

	t76 = (x365==(x366+(x367-x368)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x369 = 4U;
	static uint64_t x370 = 66568856699696475LLU;
	static int16_t x371 = INT16_MIN;
	static uint64_t x372 = 197LLU;

	t77 = (x369==(x370+(x371-x372)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x373 = -1;
	static int32_t x374 = -1;
	int32_t x376 = INT32_MIN;

	t78 = (x373==(x374+(x375-x376)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x377 = 1334162289907596973LLU;
	static int16_t x378 = INT16_MIN;
	uint8_t x379 = 2U;
	volatile uint8_t x380 = 0U;
	volatile int32_t t79 = 124124536;

	t79 = (x377==(x378+(x379-x380)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x382 = UINT64_MAX;
	int32_t x383 = INT32_MAX;
	int64_t x384 = 3985195LL;
	int32_t t80 = 241652;

	t80 = (x381==(x382+(x383-x384)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x385 = UINT64_MAX;
	uint64_t x386 = 3447389958341441LLU;
	static volatile uint64_t x387 = 7487LLU;
	int32_t t81 = -25317;

	t81 = (x385==(x386+(x387-x388)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MAX;
	int64_t x391 = -9935409344670637LL;

	t82 = (x389==(x390+(x391-x392)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = 1;
	int32_t x394 = INT32_MAX;
	static uint32_t x395 = 1U;
	int16_t x396 = INT16_MIN;
	volatile int32_t t83 = -17;

	t83 = (x393==(x394+(x395-x396)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x398 = 69294362441199370LLU;
	uint64_t x399 = UINT64_MAX;
	volatile int32_t t84 = 1108;

	t84 = (x397==(x398+(x399-x400)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x402 = INT64_MIN;
	int64_t x404 = -961199258492551661LL;
	int32_t t85 = -23239386;

	t85 = (x401==(x402+(x403-x404)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x409 = 1034278186461LLU;
	volatile int64_t x411 = INT64_MIN;
	static int64_t x412 = INT64_MIN;
	int32_t t86 = 1;

	t86 = (x409==(x410+(x411-x412)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x417 = INT32_MIN;
	uint32_t x419 = 1U;
	int32_t x420 = -54072146;

	t87 = (x417==(x418+(x419-x420)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x421 = -1;
	int16_t x423 = -215;
	uint16_t x424 = 616U;
	static volatile int32_t t88 = -126189720;

	t88 = (x421==(x422+(x423-x424)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x429 = -68797763803732221LL;
	uint64_t x430 = 5LLU;
	uint16_t x431 = 12U;
	static volatile int32_t t89 = 1;

	t89 = (x429==(x430+(x431-x432)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x433 = INT16_MAX;
	volatile int16_t x434 = INT16_MIN;
	static int64_t x436 = INT64_MIN;
	int32_t t90 = -15940141;

	t90 = (x433==(x434+(x435-x436)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x437 = 107406;
	int64_t x438 = INT64_MIN;
	uint32_t x440 = UINT32_MAX;

	t91 = (x437==(x438+(x439-x440)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x445 = UINT8_MAX;
	uint8_t x446 = UINT8_MAX;
	static uint8_t x447 = 37U;
	volatile uint8_t x448 = UINT8_MAX;

	t92 = (x445==(x446+(x447-x448)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x449 = INT32_MIN;
	int32_t x450 = 9959;
	uint32_t x451 = 6U;

	t93 = (x449==(x450+(x451-x452)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x458 = INT16_MIN;
	uint32_t x460 = 51524910U;

	t94 = (x457==(x458+(x459-x460)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = -2;
	int8_t x462 = 61;
	uint64_t x463 = 18358LLU;
	volatile int32_t x464 = INT32_MIN;
	volatile int32_t t95 = -290;

	t95 = (x461==(x462+(x463-x464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x465 = UINT8_MAX;
	static uint64_t x466 = 2478070431695LLU;
	int16_t x468 = INT16_MIN;

	t96 = (x465==(x466+(x467-x468)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x469 = UINT64_MAX;
	uint64_t x471 = UINT64_MAX;
	int32_t t97 = 38;

	t97 = (x469==(x470+(x471-x472)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x473 = -1;
	uint8_t x474 = 5U;
	int64_t x476 = -1LL;

	t98 = (x473==(x474+(x475-x476)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x477 = 2079396U;
	int8_t x479 = 0;
	int16_t x480 = INT16_MAX;
	int32_t t99 = -3916;

	t99 = (x477==(x478+(x479-x480)));

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

