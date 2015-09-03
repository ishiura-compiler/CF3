#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = UINT16_MAX;
int32_t t1 = -1660615;
int64_t x10 = INT64_MIN;
uint16_t x24 = UINT16_MAX;
volatile int32_t t8 = -2;
int64_t x41 = -66401904LL;
static int16_t x43 = -1;
int32_t t10 = -113827;
volatile int32_t t11 = -306;
static int16_t x53 = INT16_MIN;
volatile int32_t t12 = -1845511;
int16_t x62 = INT16_MIN;
int8_t x66 = INT8_MIN;
uint32_t x68 = UINT32_MAX;
uint32_t x79 = 14507U;
volatile int64_t x114 = INT64_MAX;
int8_t x115 = 1;
uint32_t t22 = 1815533U;
int16_t x117 = INT16_MIN;
int8_t x123 = -11;
int32_t x127 = INT32_MAX;
uint16_t x134 = UINT16_MAX;
static volatile uint32_t x135 = UINT32_MAX;
static int64_t x137 = -1LL;
int32_t x144 = 72004;
uint64_t x151 = 177484196757740LLU;
int32_t x176 = INT32_MAX;
int32_t x181 = INT32_MIN;
int32_t x183 = 36;
int16_t x185 = -425;
volatile int16_t x197 = 164;
uint64_t x198 = 1450901454348LLU;
static int8_t x199 = INT8_MIN;
int64_t x213 = 237110766918246857LL;
int64_t x216 = 663515400LL;
static uint8_t x228 = UINT8_MAX;
uint8_t x230 = UINT8_MAX;
int8_t x232 = -13;
static int16_t x238 = 1306;
int32_t x239 = 6;
volatile int32_t t50 = -8;
static int16_t x242 = INT16_MIN;
uint8_t x250 = UINT8_MAX;
uint16_t x252 = UINT16_MAX;
uint8_t x261 = UINT8_MAX;
static uint64_t x265 = 41735296124655064LLU;
int16_t x269 = -6;
static uint64_t x274 = 23076945LLU;
uint64_t t56 = 665211009353LLU;
int16_t x284 = -1;
int32_t t58 = -76165223;
int64_t x285 = INT64_MAX;
int16_t x286 = INT16_MAX;
volatile int8_t x314 = 0;
int32_t x319 = -1668433;
volatile int64_t x323 = 66326429LL;
uint8_t x324 = 3U;
int32_t t65 = -391349403;
uint32_t x325 = 841880759U;
static int8_t x326 = 0;
volatile int32_t t66 = 1413;
int64_t x331 = INT64_MIN;
static int16_t x336 = INT16_MIN;
static volatile int16_t x338 = -1;
int64_t x339 = INT64_MIN;
int8_t x348 = INT8_MAX;
volatile uint16_t x352 = 90U;
static uint8_t x356 = 0U;
int32_t x371 = INT32_MIN;
volatile int32_t t76 = -443;
int8_t x375 = INT8_MIN;
static uint32_t x377 = 394344198U;
uint16_t x378 = UINT16_MAX;
int16_t x381 = INT16_MAX;
volatile int32_t t80 = 3;
int32_t t83 = -44866;
volatile uint32_t x415 = 2U;
int64_t x430 = -20036590LL;
static int64_t x442 = -31LL;
int32_t x457 = INT32_MIN;
static int8_t x461 = INT8_MIN;
static volatile uint16_t x464 = 25U;
static int16_t x466 = -1;
int16_t x467 = INT16_MIN;
uint64_t x471 = 417628209LLU;
volatile int32_t x474 = -1;


void f0(void) {
	int64_t x1 = 46356086081257LL;
	volatile uint16_t x2 = 3U;
	uint8_t x3 = 0U;
	volatile uint8_t x4 = 51U;
	volatile int32_t t0 = 105185;

	t0 = (((x1-x2)<=x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = -5;
	static uint64_t x7 = 979904827LLU;
	static int8_t x8 = -2;

	t1 = (((x5-x6)<=x7)*x8);

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	static volatile int8_t x11 = INT8_MIN;
	int16_t x12 = 248;
	static int32_t t2 = -244642885;

	t2 = (((x9-x10)<=x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1710925128U;
	int32_t x14 = 204590238;
	int64_t x15 = INT64_MAX;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = 85344915;

	t3 = (((x13-x14)<=x15)*x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 93847U;
	int32_t x18 = INT32_MIN;
	static uint16_t x19 = UINT16_MAX;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -103935628LL;

	t4 = (((x17-x18)<=x19)*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 460U;
	volatile int32_t x22 = 2017073;
	int64_t x23 = INT64_MAX;
	volatile int32_t t5 = 115;

	t5 = (((x21-x22)<=x23)*x24);

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 242199505;
	volatile uint64_t x26 = UINT64_MAX;
	int16_t x27 = INT16_MAX;
	int16_t x28 = 6;
	volatile int32_t t6 = -29475193;

	t6 = (((x25-x26)<=x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 0U;
	int8_t x34 = 18;
	static int8_t x35 = -1;
	static uint8_t x36 = 29U;
	int32_t t7 = -1120;

	t7 = (((x33-x34)<=x35)*x36);

	if (t7 != 29) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MAX;
	static int8_t x39 = INT8_MIN;
	int8_t x40 = -1;

	t8 = (((x37-x38)<=x39)*x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x42 = UINT16_MAX;
	volatile int32_t x44 = 98;
	int32_t t9 = 1647715;

	t9 = (((x41-x42)<=x43)*x44);

	if (t9 != 98) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MAX;
	int8_t x46 = -1;
	uint8_t x47 = 2U;
	volatile int32_t x48 = -58973;

	t10 = (((x45-x46)<=x47)*x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = UINT8_MAX;
	uint16_t x50 = 3U;
	volatile int64_t x51 = INT64_MIN;
	uint8_t x52 = 109U;

	t11 = (((x49-x50)<=x51)*x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -1;
	uint32_t x55 = 1310380U;
	int16_t x56 = -8;

	t12 = (((x53-x54)<=x55)*x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 175U;
	uint8_t x58 = 3U;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	int32_t t13 = 116;

	t13 = (((x57-x58)<=x59)*x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x61 = 2842U;
	uint32_t x63 = 7314U;
	static int16_t x64 = -1;
	static int32_t t14 = 16;

	t14 = (((x61-x62)<=x63)*x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 21036664U;
	static uint8_t x67 = UINT8_MAX;
	uint32_t t15 = 35623575U;

	t15 = (((x65-x66)<=x67)*x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	static int64_t x70 = -1LL;
	static int64_t x71 = -848866968350LL;
	int32_t x72 = -46;
	volatile int32_t t16 = 30100203;

	t16 = (((x69-x70)<=x71)*x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1975389886012986LL;
	int16_t x78 = -1;
	uint8_t x80 = 8U;
	int32_t t17 = 1927;

	t17 = (((x77-x78)<=x79)*x80);

	if (t17 != 8) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	static volatile int64_t x82 = -1LL;
	static int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t18 = 194678422;

	t18 = (((x81-x82)<=x83)*x84);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = 133911667546199LL;
	uint64_t x86 = 211715064006944372LLU;
	int64_t x87 = -1LL;
	int32_t x88 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

	t19 = (((x85-x86)<=x87)*x88);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MAX;
	volatile int64_t x94 = -1LL;
	static int8_t x95 = INT8_MIN;
	int32_t x96 = -39366;
	volatile int32_t t20 = 0;

	t20 = (((x93-x94)<=x95)*x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = UINT32_MAX;
	static int32_t x102 = INT32_MIN;
	static int8_t x103 = -54;
	int8_t x104 = INT8_MAX;
	volatile int32_t t21 = -4;

	t21 = (((x101-x102)<=x103)*x104);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x113 = -1LL;
	uint32_t x116 = 58297U;

	t22 = (((x113-x114)<=x115)*x116);

	if (t22 != 58297U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x118 = 299102278774901179LLU;
	static volatile uint64_t x119 = 5619244974019082698LLU;
	int8_t x120 = INT8_MAX;
	volatile int32_t t23 = -20;

	t23 = (((x117-x118)<=x119)*x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = -1;
	static int64_t x122 = INT64_MIN;
	int16_t x124 = INT16_MAX;
	static int32_t t24 = -3;

	t24 = (((x121-x122)<=x123)*x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MAX;
	uint16_t x126 = 312U;
	uint16_t x128 = UINT16_MAX;
	int32_t t25 = 129;

	t25 = (((x125-x126)<=x127)*x128);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x129 = -1LL;
	static int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MAX;
	int64_t x132 = INT64_MIN;
	volatile int64_t t26 = INT64_MIN;

	t26 = (((x129-x130)<=x131)*x132);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 2128201645U;
	uint64_t x136 = UINT64_MAX;
	uint64_t t27 = UINT64_MAX;

	t27 = (((x133-x134)<=x135)*x136);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x138 = 6921U;
	volatile int64_t x139 = -1LL;
	uint64_t x140 = 14866435LLU;
	uint64_t t28 = 16443756400LLU;

	t28 = (((x137-x138)<=x139)*x140);

	if (t28 != 14866435LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 0U;
	volatile int32_t x142 = INT32_MAX;
	static int64_t x143 = 25LL;
	int32_t t29 = -31073682;

	t29 = (((x141-x142)<=x143)*x144);

	if (t29 != 72004) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 39;
	static int8_t x146 = INT8_MAX;
	int16_t x147 = INT16_MIN;
	uint32_t x148 = 114372234U;
	uint32_t t30 = 1879041587U;

	t30 = (((x145-x146)<=x147)*x148);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -1;
	int32_t x150 = INT32_MIN;
	volatile int64_t x152 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

	t31 = (((x149-x150)<=x151)*x152);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = UINT64_MAX;
	uint8_t x154 = 8U;
	int8_t x155 = INT8_MAX;
	int16_t x156 = -1;
	static volatile int32_t t32 = 1;

	t32 = (((x153-x154)<=x155)*x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = 214939U;
	volatile int32_t x158 = -1;
	static uint16_t x159 = 3450U;
	int16_t x160 = INT16_MAX;
	int32_t t33 = 43;

	t33 = (((x157-x158)<=x159)*x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 1U;
	uint8_t x166 = 3U;
	int16_t x167 = INT16_MAX;
	int64_t x168 = INT64_MIN;
	int64_t t34 = INT64_MIN;

	t34 = (((x165-x166)<=x167)*x168);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x169 = UINT8_MAX;
	uint8_t x170 = 0U;
	int8_t x171 = INT8_MIN;
	static uint8_t x172 = 7U;
	int32_t t35 = -1499179;

	t35 = (((x169-x170)<=x171)*x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	int8_t x174 = 13;
	volatile uint64_t x175 = UINT64_MAX;
	volatile int32_t t36 = INT32_MAX;

	t36 = (((x173-x174)<=x175)*x176);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x182 = 1LL;
	uint8_t x184 = 20U;
	volatile int32_t t37 = -2958871;

	t37 = (((x181-x182)<=x183)*x184);

	if (t37 != 20) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x186 = 978754LLU;
	int64_t x187 = INT64_MIN;
	uint8_t x188 = UINT8_MAX;
	int32_t t38 = 133;

	t38 = (((x185-x186)<=x187)*x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x190 = 6U;
	static int8_t x191 = -2;
	uint64_t x192 = 352011794516279LLU;
	uint64_t t39 = 31288835451274153LLU;

	t39 = (((x189-x190)<=x191)*x192);

	if (t39 != 352011794516279LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x200 = 2406504736280LL;
	int64_t t40 = -201482475567207LL;

	t40 = (((x197-x198)<=x199)*x200);

	if (t40 != 2406504736280LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = 371;
	int32_t x202 = -1;
	static uint32_t x203 = 34U;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t41 = 2456188U;

	t41 = (((x201-x202)<=x203)*x204);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MIN;
	uint64_t x208 = 106600617173LLU;
	static uint64_t t42 = 65751LLU;

	t42 = (((x205-x206)<=x207)*x208);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MAX;
	int64_t x210 = -263LL;
	static volatile int64_t x211 = INT64_MAX;
	uint16_t x212 = UINT16_MAX;
	int32_t t43 = -81986;

	t43 = (((x209-x210)<=x211)*x212);

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x214 = 426U;
	uint64_t x215 = 199169LLU;
	int64_t t44 = 15097095294352LL;

	t44 = (((x213-x214)<=x215)*x216);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = -2;
	int64_t x218 = -77336044782939853LL;
	static int8_t x219 = INT8_MIN;
	static int32_t x220 = -544025804;
	static volatile int32_t t45 = -653959;

	t45 = (((x217-x218)<=x219)*x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MIN;
	uint16_t x222 = 49U;
	int8_t x223 = INT8_MIN;
	volatile int32_t x224 = INT32_MIN;
	int32_t t46 = INT32_MIN;

	t46 = (((x221-x222)<=x223)*x224);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = 24U;
	static volatile int16_t x227 = -1;
	static volatile int32_t t47 = -685151;

	t47 = (((x225-x226)<=x227)*x228);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x229 = UINT8_MAX;
	int64_t x231 = INT64_MIN;
	volatile int32_t t48 = 14166180;

	t48 = (((x229-x230)<=x231)*x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x233 = 1;
	int8_t x234 = 0;
	uint8_t x235 = 1U;
	int16_t x236 = INT16_MAX;
	volatile int32_t t49 = 1458361;

	t49 = (((x233-x234)<=x235)*x236);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = -1;
	static volatile uint8_t x240 = 1U;

	t50 = (((x237-x238)<=x239)*x240);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x241 = -1LL;
	int64_t x243 = INT64_MIN;
	int64_t x244 = 2570599488701LL;
	int64_t t51 = 40424LL;

	t51 = (((x241-x242)<=x243)*x244);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 118668928537LLU;
	static int16_t x251 = INT16_MIN;
	volatile int32_t t52 = -233;

	t52 = (((x249-x250)<=x251)*x252);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x262 = -1;
	uint8_t x263 = 6U;
	int16_t x264 = -1;
	volatile int32_t t53 = -3524267;

	t53 = (((x261-x262)<=x263)*x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x266 = 14U;
	int8_t x267 = -12;
	int8_t x268 = INT8_MIN;
	volatile int32_t t54 = 116873;

	t54 = (((x265-x266)<=x267)*x268);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	volatile int32_t t55 = 12748;

	t55 = (((x269-x270)<=x271)*x272);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x273 = 9U;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = UINT64_MAX;

	t56 = (((x273-x274)<=x275)*x276);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = -2553;
	int64_t x278 = -1LL;
	int8_t x279 = INT8_MIN;
	static uint64_t x280 = UINT64_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (((x277-x278)<=x279)*x280);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x281 = 1U;
	volatile int16_t x282 = -1;
	volatile int32_t x283 = INT32_MIN;

	t58 = (((x281-x282)<=x283)*x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x287 = INT32_MIN;
	int16_t x288 = -26;
	volatile int32_t t59 = -1010426485;

	t59 = (((x285-x286)<=x287)*x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x301 = 51890053U;
	uint64_t x302 = UINT64_MAX;
	volatile int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MAX;
	int32_t t60 = 7770;

	t60 = (((x301-x302)<=x303)*x304);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x305 = 754U;
	int32_t x306 = -1;
	static uint32_t x307 = 3002178U;
	volatile uint64_t x308 = 1LLU;
	volatile uint64_t t61 = 4818LLU;

	t61 = (((x305-x306)<=x307)*x308);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x309 = UINT16_MAX;
	int8_t x310 = 1;
	int8_t x311 = INT8_MIN;
	static uint16_t x312 = 2U;
	int32_t t62 = -521730;

	t62 = (((x309-x310)<=x311)*x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x313 = 102U;
	int8_t x315 = -1;
	volatile int16_t x316 = -12103;
	volatile int32_t t63 = 36346428;

	t63 = (((x313-x314)<=x315)*x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = -106;
	int32_t x320 = INT32_MAX;
	volatile int32_t t64 = INT32_MAX;

	t64 = (((x317-x318)<=x319)*x320);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x321 = 247U;
	uint32_t x322 = UINT32_MAX;

	t65 = (((x321-x322)<=x323)*x324);

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x327 = -1;
	int16_t x328 = -195;

	t66 = (((x325-x326)<=x327)*x328);

	if (t66 != -195) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = 14U;
	static int8_t x332 = INT8_MIN;
	static volatile int32_t t67 = -159913;

	t67 = (((x329-x330)<=x331)*x332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = INT64_MAX;
	int64_t x335 = INT64_MIN;
	static volatile int32_t t68 = -45545;

	t68 = (((x333-x334)<=x335)*x336);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x337 = INT16_MAX;
	int16_t x340 = INT16_MAX;
	volatile int32_t t69 = -8;

	t69 = (((x337-x338)<=x339)*x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = 1LL;
	int16_t x342 = INT16_MIN;
	static uint64_t x343 = 15376LLU;
	uint32_t x344 = UINT32_MAX;
	uint32_t t70 = 152875026U;

	t70 = (((x341-x342)<=x343)*x344);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x345 = UINT32_MAX;
	static uint64_t x346 = UINT64_MAX;
	int16_t x347 = 12486;
	int32_t t71 = -5837;

	t71 = (((x345-x346)<=x347)*x348);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = -177268104;
	uint64_t x350 = 168542728318LLU;
	int32_t x351 = INT32_MIN;
	static volatile int32_t t72 = -743595;

	t72 = (((x349-x350)<=x351)*x352);

	if (t72 != 90) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x353 = UINT64_MAX;
	uint32_t x354 = 350589U;
	int64_t x355 = INT64_MAX;
	volatile int32_t t73 = 15292749;

	t73 = (((x353-x354)<=x355)*x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x357 = -1;
	static uint16_t x358 = 6518U;
	static int16_t x359 = INT16_MIN;
	static int64_t x360 = INT64_MIN;
	volatile int64_t t74 = -4510965157717355LL;

	t74 = (((x357-x358)<=x359)*x360);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x361 = INT32_MIN;
	static int64_t x362 = -1LL;
	int64_t x363 = INT64_MAX;
	uint64_t x364 = 409643478316179LLU;
	volatile uint64_t t75 = 141268069071436LLU;

	t75 = (((x361-x362)<=x363)*x364);

	if (t75 != 409643478316179LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x369 = 0;
	volatile int8_t x370 = INT8_MIN;
	int8_t x372 = 11;

	t76 = (((x369-x370)<=x371)*x372);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x373 = 0U;
	int32_t x374 = -1;
	uint16_t x376 = 0U;
	int32_t t77 = -5557654;

	t77 = (((x373-x374)<=x375)*x376);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x379 = -710LL;
	int32_t x380 = 15682;
	static int32_t t78 = -223751;

	t78 = (((x377-x378)<=x379)*x380);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MAX;
	int64_t t79 = 136850676140127253LL;

	t79 = (((x381-x382)<=x383)*x384);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	uint32_t x387 = 326392U;
	static int16_t x388 = INT16_MIN;

	t80 = (((x385-x386)<=x387)*x388);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x389 = -1;
	uint16_t x390 = 4U;
	volatile int16_t x391 = -92;
	uint8_t x392 = 127U;
	volatile int32_t t81 = 249042;

	t81 = (((x389-x390)<=x391)*x392);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = -1;
	uint32_t x398 = UINT32_MAX;
	uint32_t x399 = 1U;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t82 = 3500;

	t82 = (((x397-x398)<=x399)*x400);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x401 = INT32_MAX;
	int64_t x402 = 8173324112782960LL;
	static int64_t x403 = INT64_MIN;
	volatile int8_t x404 = INT8_MIN;

	t83 = (((x401-x402)<=x403)*x404);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x405 = -1;
	static uint16_t x406 = 873U;
	int16_t x407 = INT16_MAX;
	int32_t x408 = -1;
	volatile int32_t t84 = 460909;

	t84 = (((x405-x406)<=x407)*x408);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x409 = UINT64_MAX;
	int16_t x410 = INT16_MIN;
	static int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t85 = -15827100;

	t85 = (((x409-x410)<=x411)*x412);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x413 = UINT16_MAX;
	volatile uint16_t x414 = UINT16_MAX;
	uint32_t x416 = 52U;
	volatile uint32_t t86 = 7926U;

	t86 = (((x413-x414)<=x415)*x416);

	if (t86 != 52U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x417 = UINT16_MAX;
	int64_t x418 = INT64_MAX;
	int32_t x419 = -1;
	int8_t x420 = 1;
	volatile int32_t t87 = 115;

	t87 = (((x417-x418)<=x419)*x420);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x429 = -1;
	volatile uint64_t x431 = 39LLU;
	static int16_t x432 = 80;
	int32_t t88 = 1441702;

	t88 = (((x429-x430)<=x431)*x432);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x433 = 0;
	static int64_t x434 = INT64_MAX;
	volatile int8_t x435 = INT8_MIN;
	int32_t x436 = INT32_MIN;
	volatile int32_t t89 = INT32_MIN;

	t89 = (((x433-x434)<=x435)*x436);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = INT64_MIN;
	int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MAX;
	uint32_t x440 = 47162U;
	volatile uint32_t t90 = 30U;

	t90 = (((x437-x438)<=x439)*x440);

	if (t90 != 47162U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x441 = UINT16_MAX;
	int32_t x443 = -3879;
	int32_t x444 = -1;
	volatile int32_t t91 = 964705;

	t91 = (((x441-x442)<=x443)*x444);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x445 = -1LL;
	int8_t x446 = INT8_MAX;
	uint32_t x447 = UINT32_MAX;
	int16_t x448 = -1;
	volatile int32_t t92 = -3812;

	t92 = (((x445-x446)<=x447)*x448);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x449 = 830U;
	int8_t x450 = INT8_MIN;
	uint8_t x451 = 1U;
	uint16_t x452 = UINT16_MAX;
	int32_t t93 = -356236159;

	t93 = (((x449-x450)<=x451)*x452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x453 = INT16_MAX;
	int64_t x454 = INT64_MAX;
	int16_t x455 = 1;
	int32_t x456 = 1;
	volatile int32_t t94 = -1;

	t94 = (((x453-x454)<=x455)*x456);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x458 = INT32_MIN;
	uint32_t x459 = UINT32_MAX;
	int8_t x460 = INT8_MIN;
	static int32_t t95 = 26;

	t95 = (((x457-x458)<=x459)*x460);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x462 = 6;
	int8_t x463 = -1;
	int32_t t96 = -82970;

	t96 = (((x461-x462)<=x463)*x464);

	if (t96 != 25) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = INT32_MIN;
	static volatile uint8_t x468 = UINT8_MAX;
	volatile int32_t t97 = -133007;

	t97 = (((x465-x466)<=x467)*x468);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x469 = INT64_MIN;
	int64_t x470 = INT64_MIN;
	uint16_t x472 = 13U;
	int32_t t98 = -15125319;

	t98 = (((x469-x470)<=x471)*x472);

	if (t98 != 13) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x473 = INT32_MIN;
	volatile int8_t x475 = 1;
	int8_t x476 = INT8_MAX;
	int32_t t99 = 57727;

	t99 = (((x473-x474)<=x475)*x476);

	if (t99 != 127) { NG(); } else { ; }
	
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

